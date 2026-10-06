/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d22468; end: 106d225bf; -[SCGalleryOperaActionHandlerSession galleryPreviewController:didSaveSnapEdits:] */

void FUN_106d22468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_DAT_1126a5228;
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010010fab4(param_4,puVar2);
  uVar1 = param_4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010b5f8c08();
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c29d5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c134d60(lVar4);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d225c0; end: 106d22623;  */

void FUN_106d225c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d22624; end: 106d22657; -[SCGalleryOperaActionHandlerSession galleryPreviewControllerDidAutoSave] */

void FUN_106d22624(long param_1)

{
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d22658; end: 106d22707; -[SCGalleryOperaActionHandlerSession spectaclesMemoriesCustomExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

void FUN_106d22658(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  long lVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x150));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13d1c0();
  _objc_release(lVar1);
  if ((param_5 & 1) != 0) {
    return;
  }
  if (((param_4 & 1) == 0) && ((param_6 & 1) == 0)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x000108df7438();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d22708; end: 106d2283b; -[SCGalleryOperaActionHandlerSession _asyncResolveGallerySnapAtPage:completion:] */

void FUN_106d22708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e0ea0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d2283c;
  puStack_60 = &UNK_11084d628;
  uStack_58 = param_4;
  _objc_retain(param_4);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 106d2283c; end: 106d228f7;  */

void FUN_106d2283c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d228f8; end: 106d2293b;  */

void FUN_106d228f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d2293c; end: 106d2294b;  */

void FUN_106d2293c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d22948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106d2294c; end: 106d22a7f; -[SCGalleryOperaActionHandlerSession _asyncResolveGalleryOperaSnapAtPage:completion:] */

void FUN_106d2294c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e0ea0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d22a80;
  puStack_60 = &UNK_11084d628;
  uStack_58 = param_4;
  _objc_retain(param_4);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 106d22a80; end: 106d22b3b;  */

void FUN_106d22a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d22b3c; end: 106d22b57;  */

void FUN_106d22b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d22b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d22b58; end: 106d22b8b; -[SCGalleryOperaActionHandlerSession gallerySendControllerDidAutoSaveDraft] */

void FUN_106d22b58(long param_1)

{
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d22b8c; end: 106d22c33; -[SCGalleryOperaActionHandlerSession gallerySendController:willPresentQuickPostFlowOfType:] */

void FUN_106d22b8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5ec0();
  _objc_release(uVar1);
  if ((param_4 == 2) && ((int)uVar2 != 0)) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(lVar3,param_2,0,param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106d22c34; end: 106d22d4b; -[SCGalleryOperaActionHandlerSession gallerySendController:didDismissQuickPostFlowOfType:] */

void FUN_106d22c34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5ec0();
  _objc_release(uVar1);
  if ((param_4 == 2) && ((int)uVar2 != 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106d22cd4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 106d22d4c; end: 106d22dc7; -[SCGalleryOperaActionHandlerSession generativeContentReportDidCompleteWithCancelled:] */

void FUN_106d22d4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x1a0;
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



/* Entry: 106d22dc8; end: 106d22e57; -[SCGalleryOperaActionHandlerSession _needsRenderingForSnapDoc:] */

bool FUN_106d22dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09aa40();
  if (((int)uVar3 == 0) || (uVar3 = param_3, func_0x00010c0d73c0(), (int)uVar3 == 0)) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x1e0);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d22e58; end: 106d22f9f; -[SCGalleryOperaActionHandlerSession _recordLiveRenderFlowEnteredIfNeeded:flow:] */

void FUN_106d22e58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c09aa40();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        _objc_initWeak(auStack_48,param_1);
        uVar3 = *(undefined8 *)(param_1 + 0x218);
        _objc_copyWeak(auStack_58,auStack_48);
        _objc_retain(param_3);
        uStack_50 = param_4;
        func_0x00010c0f7fc0(uVar3);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d22fa0; end: 106d2302b;  */

void FUN_106d22fa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if ((lVar3 != 0) && (lVar2 = lVar3, func_0x00010c0d73c0(), (int)lVar2 != 0)) {
      func_0x00010c123740(*(undefined8 *)(lVar1 + 0x230));
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d2302c; end: 106d2320b; -[SCGalleryOperaActionHandlerSession _renderSnapDocIfNeededForSnap:action:completion:] */

void FUN_106d2302c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09aa40();
  _objc_release(uVar2);
  if ((int)uVar3 == 0 || lVar1 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d2320c;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retain(param_3);
    lStack_60 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(lStack_60);
    _objc_release(uStack_58);
  }
  else {
    _objc_initWeak(auStack_88,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x218);
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retain(lVar1);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uStack_90 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2320c; end: 106d2321b;  */

void FUN_106d2320c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d23218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d2321c; end: 106d2339f;  */

void FUN_106d2321c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000108020568(uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010be627a0();
    if ((uVar3 & 1) == 0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106d233a0;
      puStack_58 = &UNK_11084aaa8;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uStack_48 = uVar5;
      _objc_retain(uVar4);
      uStack_50 = uVar4;
      func_0x000100162d98("APPSTORE",&puStack_70);
      _objc_release(uStack_50);
      _objc_release(uStack_48);
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_106d233b0;
      puStack_a0 = &UNK_110845158;
      _objc_copyWeak(auStack_80,param_1 + 0x38);
      _objc_retain(uVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uStack_98 = uVar2;
      _objc_retain(uVar5);
      uStack_78 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uStack_90 = uVar5;
      _objc_retain(uVar4);
      uStack_88 = uVar4;
      func_0x000100162d98("APPSTORE",&puStack_b8);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106d233a0; end: 106d233af;  */

void FUN_106d233a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d233ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d233b0; end: 106d234c7;  */

void FUN_106d233b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,lVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010bece800(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d234c8; end: 106d235e7;  */

void FUN_106d234c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x228) == '\x01') {
      *(undefined1 *)(lVar1 + 0x228) = 0;
      lVar2 = lVar1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c13d1c0();
      _objc_release(lVar2);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x218);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106d235e8; end: 106d23717;  */

void FUN_106d235e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126af4d0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0xf0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106d23718;
    puStack_60 = &UNK_11084a9e8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = puVar4;
    uStack_48 = uVar3;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    _objc_retain(puVar4);
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(puStack_58);
    _objc_release(uStack_48);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d23718; end: 106d23733;  */

void FUN_106d23718(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x000106d23730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1);
  return;
}



/* Entry: 106d23734; end: 106d23ab7; -[SCGalleryOperaActionHandlerSession _transcodeSnapDoc:snap:action:completion:] */

void FUN_106d23734(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d23a8;
  _objc_alloc();
  func_0x00010c00af60();
  func_0x00010c1c8b80();
  lVar2 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10eda0();
  _objc_release(lVar2);
  *(undefined1 *)(param_2 + 0x228) = 1;
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_2;
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x1e0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139300();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x1e0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c12f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _CACurrentMediaTime();
  puVar6 = PTR_PTR_1126d23b0;
  _objc_alloc();
  func_0x00010c03fac0(param_1);
  uVar5 = *(undefined8 *)(param_2 + 0x238);
  *(undefined **)(param_2 + 0x238) = puVar6;
  _objc_release(uVar5);
  _objc_initWeak(auStack_80,puVar1);
  uVar5 = uVar4;
  func_0x00010c1178e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106d23ab8;
  puStack_90 = &UNK_110842a38;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar7 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_initWeak(auStack_b0,param_2);
  uVar5 = uVar4;
  func_0x00010c13cb40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,auStack_b0);
  _objc_retain(uVar4);
  uStack_c0 = param_1;
  uStack_b8 = param_6;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010c297260(uVar5);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d23ab8; end: 106d23b5f;  */

void FUN_106d23ab8(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_106d23b60;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106d23b60; end: 106d23b9b;  */

void FUN_106d23b60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c288d20(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d23b9c; end: 106d23cf3;  */

void FUN_106d23b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106d23cf4; end: 106d23e87;  */

void FUN_106d23cf4(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 0x238);
    func_0x00010c13b720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_2 + 0x28);
    _objc_release();
    if (lVar2 == lVar6) {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x238);
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x238) = 0;
      _objc_release(uVar3);
      _CACurrentMediaTime();
      dVar9 = *(double *)(param_2 + 0x58);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      func_0x000107e62780(uVar3,*(undefined8 *)(param_2 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123860(param_1 - dVar9,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x230));
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1e0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139300();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      _objc_retain(uVar1);
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar8);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain(uVar5);
      _objc_retain(uVar3);
      func_0x00010bf84b00(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 106d23e88; end: 106d24047;  */

void FUN_106d23e88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x228) = 0;
    lVar2 = *(long *)(param_1 + 0x30) + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13d1c0();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x30) + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x000107dffcbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xf0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(lVar2);
    func_0x00010c0f8520(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106d24044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 106d24048; end: 106d2408b;  */

void FUN_106d24048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d2408c; end: 106d2409b;  */

void FUN_106d2408c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d24098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d2409c; end: 106d2419f; -[SCGalleryOperaActionHandlerSession didTapCancel] */

void FUN_106d2409c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_2 + 0x238);
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x230);
    lVar1 = lVar2;
    func_0x00010beedca0(lVar2);
    _CACurrentMediaTime();
    dVar4 = param_1;
    func_0x00010c250f20(lVar2);
    func_0x00010c123860(param_1 - dVar4,uVar3,param_3,lVar1,2,0);
    lVar1 = lVar2;
    func_0x00010c13b720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x238);
    *(undefined8 *)(param_2 + 0x238) = 0;
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x1e0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139300();
  _objc_release(uVar3);
  *(undefined1 *)(param_2 + 0x228) = 0;
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13d1c0();
  _objc_release(lVar1);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf84b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d241a0; end: 106d241a3; -[SCGalleryOperaActionHandlerSession didTapRetry] */

void FUN_106d241a0(void)

{
  return;
}



/* Entry: 106d241a4; end: 106d241bb; -[SCGalleryOperaActionHandlerSession delegate] */

void FUN_106d241a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d241bc; end: 106d241c7; -[SCGalleryOperaActionHandlerSession setDelegate:] */

void FUN_106d241bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x240,param_3);
  return;
}



/* Entry: 106d241c8; end: 106d245a3; -[SCGalleryOperaActionHandlerSession .cxx_destruct] */

void FUN_106d241c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x240);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
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
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_destroyWeak(param_1 + 0x198);
  _objc_destroyWeak(param_1 + 400);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_destroyWeak(param_1 + 0x170);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_destroyWeak(param_1 + 0x160);
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106d245a4; end: 106d246b3;  */

void FUN_106d245a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (param_2 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106d246b4;
    puStack_40 = &UNK_110849530;
    puVar2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar2);
    puStack_38 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    puVar2 = puStack_38;
  }
  else {
    puVar2 = PTR_PTR_1126c38d0;
    func_0x00010bfbc0e0(PTR_PTR_1126c38d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfd3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0e3040(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 106d246b4; end: 106d246c3;  */

void FUN_106d246b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d246c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106d246c4; end: 106d247bf;  */

void FUN_106d246c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d247d0;
    puStack_70 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_60 = uVar1;
    _objc_retain(param_2);
    uStack_68 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    _objc_release(uStack_68);
    uVar1 = uStack_60;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106d247c0;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106d247c0; end: 106d247cf;  */

void FUN_106d247c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d247cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106d247d0; end: 106d247fb;  */

void FUN_106d247d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf1f3c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000106d247f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  return;
}



/* Entry: 106d247fc; end: 106d252c3; -[SCMemoriesOperaActionHandlerSessionBuilder initWithActivityController:addSnapMutator:backupRetryMutator:boomboxScopeExposer:boomboxScopeServices:circumstanceEngine:cloudFS:cloudSync:contentDelivery:dataObjectContext:deletionMutator:encryptedContentManager:favoriteMutator:featureSettingsService:grapheneRegistry:keyService:liveRenderingMetricsRecorder:legacyLogger:memoriesEngagementLogger:memoriesExternalShareAdaptorScopeExposer:memoriesMergedDataSource:memoriesPreviewPresenterBuilder:memoriesPrivateGallerySetupFlowScopeExposer:memoriesSendViewPresenter:memoriesSnapThumbnailGeneratorBuilder:meoMutator:musicMediaLoader:musicSelectionLoader:previewUrlVideoProvider:remixController:aiRemixController:spectaclesCustomExportScopeExposer:spectaclesCustomExportScopeServices:ucoDataFetcher:userInfoServices:userTrackedLogger:videoImportServices:memoriesExperimentService:snapDocDownloadingService:dreamsFeedbackExposer:dreamsFeedbackScopeServices:plusManagementScopeExposer:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:reportFlowScopeExposer:cachingMediaManager:shareNotificationService:promoteSnapService:memoriesSaveServices:genAIDreamsService:applicationStorageServices:memoriesLinkManagementUIScopeServices:valdiRuntimeProvider:snapRenderer:quickCutScopeExposer:simpleReportCreator:] */

undefined8 *
FUN_106d247fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_57,undefined8 param_58,undefined8 param_59)

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
  puStack_70 = PTR_PTR_1126f68d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[8];
    puVar1[8] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[7];
    puVar1[7] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[3];
    puVar1[3] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[2];
    puVar1[2] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_59;
    _objc_release(uVar2);
  }
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



/* Entry: 106d252c4; end: 106d2560b; -[SCMemoriesOperaActionHandlerSessionBuilder buildWithShowSaveChangesPrompt:eventAnnouncer:operaController:operaViewPlayManager:snapResolver:delegate:] */

void FUN_106d252c4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 uVar53;
  
  _objc_retain(param_8);
  puVar52 = PTR_PTR_1126d23b8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar27 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar28 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar29 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar30 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar31 = *(undefined8 *)(param_1 + 0xd0);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar32 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x108);
  uVar33 = *(undefined8 *)(param_1 + 0x110);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  uVar34 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar35 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar36 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  uVar37 = *(undefined8 *)(param_1 + 0x90);
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar38 = *(undefined8 *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 0xd8);
  uVar39 = *(undefined8 *)(param_1 + 0xe0);
  uVar14 = *(undefined8 *)(param_1 + 0x118);
  uVar40 = *(undefined8 *)(param_1 + 0x120);
  uVar15 = *(undefined8 *)(param_1 + 0x128);
  uVar41 = *(undefined8 *)(param_1 + 0x130);
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  uVar42 = *(undefined8 *)(param_1 + 0xa0);
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  uVar43 = *(undefined8 *)(param_1 + 0xb0);
  uVar18 = *(undefined8 *)(param_1 + 0xe8);
  uVar44 = *(undefined8 *)(param_1 + 0xf0);
  uVar19 = *(undefined8 *)(param_1 + 0xf8);
  uVar45 = *(undefined8 *)(param_1 + 0x100);
  uVar20 = *(undefined8 *)(param_1 + 0x138);
  uVar46 = *(undefined8 *)(param_1 + 0x140);
  uVar21 = *(undefined8 *)(param_1 + 0x148);
  uVar47 = *(undefined8 *)(param_1 + 0x150);
  uVar22 = *(undefined8 *)(param_1 + 0x158);
  uVar48 = *(undefined8 *)(param_1 + 0x160);
  uVar23 = *(undefined8 *)(param_1 + 0x168);
  uVar49 = *(undefined8 *)(param_1 + 0x170);
  uVar24 = *(undefined8 *)(param_1 + 0x178);
  uVar50 = *(undefined8 *)(param_1 + 0x180);
  uVar25 = *(undefined8 *)(param_1 + 0x188);
  uVar51 = *(undefined8 *)(param_1 + 400);
  uVar26 = *(undefined8 *)(param_1 + 0x198);
  uVar53 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0464e0(puVar52,param_2,param_3,uVar35,param_4,param_7,param_5,param_6,uVar1,uVar2,
                      uVar33,uVar14,uVar12,uVar27,uVar43,uVar3,uVar4,uVar28,uVar29,uVar10,uVar30,
                      uVar5,uVar32,uVar31,uVar6,uVar45,uVar7,uVar8,uVar34,uVar41,uVar11,uVar9,uVar36
                      ,uVar37,uVar16,uVar38,uVar13,uVar39,uVar40,uVar15,uVar42,uVar18,uVar17,uVar44,
                      uVar19,uVar20,uVar46,uVar21,uVar47,uVar22,uVar48,uVar23,uVar49,uVar24,uVar50,
                      uVar25,uVar51,uVar26,uVar53,*(undefined8 *)(param_1 + 0x1a8),
                      *(undefined8 *)(param_1 + 0x1b0));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar53);
  if (param_8 != 0) {
    func_0x00010c18b5e0(puVar52,param_2,param_8);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar52);
  return;
}



/* Entry: 106d2560c; end: 106d25947; -[SCMemoriesOperaActionHandlerSessionBuilder .cxx_destruct] */

void FUN_106d2560c(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106d25948; end: 106d260db; +[SCGalleryActionMenuOptionModelConverter actionMenuOptionsForGallerySnap:entryType:isFailedEntry:isEntryClientCompatible:isPrivate:isTemporaryFeatured:isMonthlyFeatured:isPersistLocally:showFavoriteButton:isRemixEnabled:showExportOrSendButton:showCopyLinkButton:snapHighlightState:memoriesBackupManager:isDreams:dreamsFeedbackEnabled:entryClientProcessingBitMaskType:disableEditingForBlockedCodec:showInternalFtSRows:] */

void FUN_106d25948(undefined8 param_1,undefined8 param_2,undefined *param_3,uint param_4,
                  uint param_5,int param_6,int param_7,uint param_8,uint param_9,uint param_10,
                  undefined8 param_11,undefined *param_12,uint param_13,undefined4 param_14,
                  ulong param_15,undefined4 param_16)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_12);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  if (param_6 != 0) {
    puVar4 = param_3;
    func_0x00010b5fc690();
    uVar2 = (uint)puVar4;
  }
  puVar4 = param_3;
  func_0x00010b5fa528();
  puVar5 = puVar4;
  if ((param_8 & 1) != 0) goto LAB_106d25ab0;
  if (param_5 == 0) {
    puVar5 = param_3;
    func_0x00010bfdd120();
    if (((ulong)puVar5 & 1) != 0) goto LAB_106d25ab0;
    puVar5 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf5e180();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x4) goto LAB_106d25ab0;
    puVar6 = PTR_PTR_1126d23c0;
    _objc_alloc();
    puVar5 = puVar6;
    func_0x000107e909b4();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar6,param_2,5,1,puVar8);
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
  }
  else {
    puVar8 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar8;
    func_0x000107e907d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar8,param_2,6,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar8);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
LAB_106d25ab0:
  if ((int)puVar4 != 0) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e907ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,8,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (((param_10 & 1) == 0) && (((uVar2 ^ 1) & 1) == 0)) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e90804();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0,(byte)param_16 ^ 1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (param_8 == 0) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e9084c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_9 & 1) == 0) {
      func_0x000107e90834();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e9081c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
  }
  func_0x00010c032080();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  if (param_13._1_1_ != '\0') {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e90b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0xd,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  uVar1 = uVar2 & (param_5 ^ 1);
  if (((param_13 & 1) == 0) && (uVar1 != 0)) {
    uVar7 = (ulong)param_4;
    func_0x00010b5fa33c();
    if (uVar7 == 4) {
      puVar4 = PTR_PTR_1126d23c0;
      _objc_alloc(PTR_PTR_1126d23c0);
      puVar5 = puVar4;
      if (param_7 == 0) {
        func_0x000107e9087c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107e90864();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c032080(puVar4,param_2,2,1,puVar5);
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
  }
  if (param_9._2_1_ != '\0') {
    func_0x000106d258d0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,param_11);
    _objc_release(param_11);
  }
  if (uVar1 != 0) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e90894();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,3,(byte)param_16 ^ 1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if ((param_9 >> 0x18 & uVar2) == 1) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e908ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,10,(byte)param_16 ^ 1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if ((param_10 >> 8 & 0xff & uVar2) == 1) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e90b04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0xc,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (uVar2 != 0) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    if ((char)param_10 == '\0') {
      func_0x000107e908c4();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 4;
    }
    else {
      func_0x000107e90aec();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0xb;
    }
    func_0x00010c032080(puVar4,param_2,uVar9,(byte)param_16 ^ 1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if ((param_15 & 0xffe0) != 0) {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar4;
    func_0x000107e90b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0xe,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (param_16._1_1_ != '\0') {
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = PTR_PTR_1126d23c8;
    func_0x00010bfcd480(PTR_PTR_1126d23c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0x10,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = PTR_PTR_1126d23c8;
    func_0x00010bf15040(PTR_PTR_1126d23c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0x11,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = PTR_PTR_1126d23c8;
    func_0x00010c065620(PTR_PTR_1126d23c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar4,param_2,0x12,1,puVar5);
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(param_12);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d260dc; end: 106d2651b; +[SCGalleryActionMenuOptionModelConverter actionMenuOptionsForCameraRollItem:isRemixEnabled:shouldAllowTrimmingLongCameraRollVideo:circumstanceEngine:entryClientProcessingBitMaskType:showFavoriteButton:showPromoteSnapButton:] */

void FUN_106d260dc(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,ulong param_7,int param_8,char param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  if (lVar3 == 2) {
    func_0x000107e908dc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e908f4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c032080(puVar2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  if (lVar3 == 2) {
    func_0x000107e9090c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e90924();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c032080(puVar2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  lVar3 = param_3;
  func_0x000107f701a8(param_3);
  func_0x000107e9087c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032080(puVar2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  func_0x000107f700a0(param_3,param_6);
  puVar2 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  if (lVar3 == 2) {
    func_0x000107e9093c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e90954();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c032080(puVar2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  if (param_8 != 0) {
    lVar3 = param_3;
    func_0x00010c072a60();
    uVar4 = 1;
    if ((int)lVar3 != 0) {
      uVar4 = 2;
    }
    func_0x000106d258d0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar4);
  }
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    lVar3 = param_3;
    func_0x000107f70218(param_3);
    func_0x000107e908ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  if (param_9 != '\0') {
    puVar2 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar2;
    func_0x000107e90b34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  puVar2 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  func_0x000107f6ff64(param_3,param_6);
  lVar3 = param_3;
  func_0x00010c0c6c20();
  if (lVar3 == 2) {
    func_0x000107e90984();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e9099c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c032080(puVar2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  if ((param_7 & 0xffe0) != 0) {
    puVar2 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar5 = puVar2;
    func_0x000107e90b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d2651c; end: 106d26b4f; +[SCGalleryActionMenuOptionModelConverter actionMenuOptionsForSnapWithEntryType:isFailedEntry:isEntryClientCompatible:isPrivate:isPendingSync:isBoomboxEnabled:showFavoriteButton:isRemixEnabled:isMEOEnabled:showExportOrSendButton:showCopyLinkButton:snapHighlightState:memoriesBackupManager:isDreams:dreamsFeedbackEnabled:entryClientProcessingBitMaskType:showPromoteSnapButton:disableEditingForBlockedCodec:] */

void FUN_106d2651c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  uint param_5,int param_6,int param_7,int param_8,uint param_9,char param_10,
                  undefined8 param_11,long param_12,uint param_13,undefined4 param_14,ulong param_15
                  ,uint param_16)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar9 = param_16 >> 8 & 0xff;
  _objc_retain(param_12);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    if (param_7 == 0) goto LAB_106d26664;
    lVar3 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e180();
    _objc_release(lVar3);
    if (lVar4 == 4) goto LAB_106d26664;
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e909b4();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,5,1,puVar7);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  else {
    puVar7 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar7;
    func_0x000107e907d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar7,param_2,6,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
LAB_106d26664:
  if (param_8 != 0) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e907ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,8,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if (((param_9 & 0x1000000) == 0) && (param_5 != 0)) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90804();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,0,uVar9 ^ 1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  puVar5 = PTR_PTR_1126d23c0;
  _objc_alloc(PTR_PTR_1126d23c0);
  puVar6 = puVar5;
  func_0x000107e9084c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032080(puVar5,param_2,1,1,puVar6);
  func_0x00010befa120(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  if (param_13._1_1_ != '\0') {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,0xd,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  uVar1 = param_5 & (param_4 ^ 1);
  if ((((param_13 & 1) == 0) && (uVar1 != 0)) && (param_9._2_1_ != '\0')) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    if (param_6 == 0) {
      func_0x000107e9087c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e90864();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c032080(puVar5,param_2,2,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if ((char)param_9 != '\0') {
    func_0x000106d258d0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,param_11);
    _objc_release(param_11);
  }
  if (uVar1 != 0) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90894();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,3,uVar9 ^ 1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if ((param_5 != 0) && (param_9._1_1_ != '\0')) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e908ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,10,uVar9 ^ 1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if ((param_5 != 0) && (param_10 != '\0')) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90b04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,0xc,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if ((char)param_16 != '\0') {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90b34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,0xf,uVar9 ^ 1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if (param_5 != 0) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    if (param_9._3_1_ == '\0') {
      func_0x000107e908c4();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 4;
    }
    else {
      func_0x000107e90aec();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0xb;
    }
    func_0x00010c032080(puVar5,param_2,uVar8,uVar9 ^ 1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  if ((param_15 & 0xffe0) != 0) {
    puVar5 = PTR_PTR_1126d23c0;
    _objc_alloc(PTR_PTR_1126d23c0);
    puVar6 = puVar5;
    func_0x000107e90b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032080(puVar5,param_2,0xe,1,puVar6);
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d26b50; end: 106d26cef; +[SCGalleryActionMenuOptionModelConverter convertToOperaActionMenuOption:isPrivate:isHighlighted:] */

void FUN_106d26b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ec1e0();
  lVar4 = 2;
  switch(uVar1) {
  case 0:
    lVar4 = 4;
    break;
  case 2:
    lVar4 = 7;
    goto code_r0x000106d26c3c;
  case 3:
    lVar4 = 1;
    break;
  case 4:
    lVar4 = 5;
    break;
  case 5:
    uVar1 = param_3;
    func_0x00010c0ec300();
    lVar4 = 9;
    if ((int)uVar1 == 0) {
      lVar4 = 0xb;
    }
    break;
  case 6:
    lVar4 = 10;
    break;
  case 7:
    lVar4 = 0xe;
    break;
  case 8:
    lVar4 = 0x13;
    break;
  case 9:
    lVar4 = 0x18;
    param_4 = param_5;
code_r0x000106d26c3c:
    if (param_4 != 0) {
      lVar4 = lVar4 + 1;
    }
    break;
  case 10:
    lVar4 = 0x1a;
    break;
  case 0xb:
    lVar4 = 0x20;
    break;
  case 0xc:
    lVar4 = 6;
    break;
  case 0xd:
    lVar4 = 0x24;
    break;
  case 0xe:
    lVar4 = 0;
    break;
  case 0xf:
    lVar4 = 0x2a;
    break;
  case 0x10:
    lVar4 = 0x38;
    break;
  case 0x11:
    lVar4 = 0x39;
    break;
  case 0x12:
    lVar4 = 0x3a;
  }
  puVar2 = PTR_PTR_1126b2dd8;
  _objc_alloc(PTR_PTR_1126b2dd8);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_106d26cf0;
  puStack_40 = &UNK_110976ce8;
  uVar3 = param_3;
  lStack_38 = lVar4;
  func_0x00010c0ec300(param_3);
  func_0x00010c0562c0(puVar2,param_2,lVar4,uVar1,&puStack_58,uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d26cf0; end: 106d26f0b;  */

void FUN_106d26cf0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  ppuVar3 = (undefined **)PTR_PTR_1126b0c40;
  ppuVar1 = (undefined **)0x0;
  switch(*(undefined8 *)(param_1 + 0x20)) {
  case 0:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84698;
    goto code_r0x000106d26ee8;
  case 1:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84578;
    break;
  case 2:
  case 0x17:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e845d8;
    break;
  case 3:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84618;
    goto code_r0x000106d26ee8;
  case 4:
  case 0xf:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e26518;
    break;
  case 5:
  case 0x20:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e84598;
    goto code_r0x000106d26d6c;
  case 6:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e845b8;
    break;
  case 7:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84638;
    break;
  case 8:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84658;
    break;
  case 9:
  case 10:
  case 0xb:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84678;
    break;
  default:
    goto LAB_106d26efc;
  case 0xe:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e845f8;
    break;
  case 0x10:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e846b8;
    goto code_r0x000106d26ee8;
  case 0x11:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e846d8;
    goto code_r0x000106d26ee8;
  case 0x12:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e846f8;
    goto code_r0x000106d26ee8;
  case 0x13:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e26538;
    break;
  case 0x15:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84718;
    goto code_r0x000106d26ee8;
  case 0x16:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84738;
code_r0x000106d26ee8:
    uVar4 = 0;
    goto code_r0x000106d26eec;
  case 0x18:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84778;
    break;
  case 0x19:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84798;
    break;
  case 0x1a:
  case 0x1b:
  case 0x37:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e847f8;
code_r0x000106d26d6c:
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106d26efc;
  case 0x1d:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84758;
    break;
  case 0x1f:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e847b8;
    break;
  case 0x24:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e847d8;
    break;
  case 0x2a:
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                        0x4000000000000000,0x4000000000000000,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar1 = ppuVar3;
    goto LAB_106d26efc;
  case 0x38:
    ppuVar1 = (undefined **)0x80;
    uVar4 = 0x94;
    goto code_r0x000106d26e2c;
  case 0x39:
    ppuVar1 = (undefined **)0x110;
    uVar4 = 0x90;
    goto code_r0x000106d26e2c;
  case 0x3a:
    ppuVar1 = (undefined **)0x1e3;
    uVar4 = 0xcc;
code_r0x000106d26e2c:
    FUN_106d26ff0(ppuVar1,uVar4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106d26efc;
  }
  uVar4 = 1;
code_r0x000106d26eec:
  FUN_106d26f0c(ppuVar1,uVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_106d26efc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106d26f0c; end: 106d26fef;  */

void FUN_106d26f0c(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = 0x4018000000000000;
  uVar6 = 0x4018000000000000;
  uVar7 = 0x4018000000000000;
  uVar8 = 0x4018000000000000;
  if ((param_2 & 1) == 0) {
    uVar8 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe96c0(uVar8,uVar7,uVar6,uVar5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d26ff0; end: 106d27077;  */

void FUN_106d26ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d27078; end: 106d2707f; -[SCMemoriesOperaChromeViewModel chromeDisplayTitle] */

undefined8 FUN_106d27078(void)

{
  return 0;
}



/* Entry: 106d27080; end: 106d2708f; -[SCMemoriesOperaChromeViewModel chromeDisplayTitleColor] */

void FUN_106d27080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 106d27090; end: 106d27097; -[SCMemoriesOperaChromeViewModel chromeDisplaySubTitle] */

undefined8 FUN_106d27090(void)

{
  return 0;
}



/* Entry: 106d27098; end: 106d270a7; -[SCMemoriesOperaChromeViewModel chromeDisplayTitleFont] */

void FUN_106d27098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106d270a8; end: 106d270bf; -[SCMemoriesOperaChromeViewModel chromeDisplaySubTitleColor] */

void FUN_106d270a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,0x3fe6666666666666,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 106d270c0; end: 106d270cf; -[SCMemoriesOperaChromeViewModel chromeDisplaySubTitleFont] */

void FUN_106d270c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106d270d0; end: 106d270d7; -[SCMemoriesOperaChromeViewModel hasGradient] */

undefined8 FUN_106d270d0(void)

{
  return 1;
}



/* Entry: 106d270d8; end: 106d270df; -[SCMemoriesOperaChromeViewModel hasShadow] */

undefined8 FUN_106d270d8(void)

{
  return 1;
}



/* Entry: 106d270e0; end: 106d270e7; -[SCMemoriesOperaChromeViewModel shouldDisplayChromeView] */

undefined8 FUN_106d270e0(void)

{
  return 0;
}



/* Entry: 106d270e8; end: 106d27423; +[SCMemoriesOperaChromeViewModel ChromeOperaPropertiesFromChromeViewModel:] */

undefined * FUN_106d270e8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c22f4a0();
  if ((int)ppuVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf391a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    _objc_release(ppuVar1);
    ppuVar3 = param_3;
    func_0x00010bf391c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar3);
    ppuVar4 = param_3;
    func_0x00010bf391a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar4);
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuVar4 = param_3;
    func_0x00010bf39220();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_c8 = ppuVar4;
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f0d7d8;
    ppuVar5 = param_3;
    func_0x00010bf39240();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = ppuVar1;
    if (ppuVar2 != (undefined **)0x0) {
      ppuStack_b8 = ppuVar3;
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f0d758;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f0d8f8;
    ppuVar10 = ppuVar3;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar10 = ppuVar1;
    }
    ppuVar2 = param_3;
    ppuStack_c0 = ppuVar5;
    func_0x00010bf39260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f0d818;
    ppuVar6 = param_3;
    ppuStack_b0 = ppuVar2;
    func_0x00010bf391e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0d838;
    ppuVar7 = param_3;
    ppuStack_a8 = ppuVar6;
    func_0x00010bfd7840(param_3);
    func_0x00010c0df6e0(puVar8,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0d878;
    ppuVar7 = param_3;
    puStack_a0 = puVar8;
    func_0x00010bfdbf60(param_3);
    func_0x00010c0df6e0(puVar9,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0d8b8;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0d718;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0d7f8;
    ppuVar7 = param_3;
    puStack_98 = puVar9;
    ppuStack_88 = ppuVar10;
    func_0x00010bf391e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0d918;
    ppuVar10 = param_3;
    ppuStack_80 = ppuVar7;
    func_0x00010bf39200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_78 = ppuVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c8,&ppuStack_120,
                        0xb);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar10);
    _objc_release(ppuVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  return param_3[1];
}



/* Entry: 106d27424; end: 106d2742b; -[SCMemoriesOperaChromeViewModel chromeDisplaySecondLineSubTitle] */

undefined8 FUN_106d27424(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d2742c; end: 106d27437; -[SCMemoriesOperaChromeViewModel .cxx_destruct] */

void FUN_106d2742c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d27438; end: 106d275e7; -[SCMemoriesCameraRollContentOperaMediaManager initWithCircumstanceEngine:coreConfigProvider:] */

undefined1 *
FUN_106d27438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f68e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d275e8; end: 106d2779b; -[SCMemoriesCameraRollContentOperaMediaManager _shouldReadMetadataFromImage:] */

undefined * FUN_106d275e8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0fce40();
  if ((puVar1 < (undefined1 *)0x961) &&
     (puVar1 = param_3, func_0x00010c0fcaa0(), puVar1 < (undefined1 *)0x961)) {
    puVar2 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
    puVar4 = param_3;
    func_0x00010bfa4f20(PTR__OBJC_CLASS___PHAssetCollection_1126bf858,param_2,param_3,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      uVar8 = 0;
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
      _objc_retain(puVar2);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
      if (puVar3 == (undefined *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        lVar9 = *plStack_120;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar9) {
              _objc_enumerationMutation(puVar2);
            }
            uVar7 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
            func_0x00010c09e900();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar7;
            func_0x00010c0720c0();
            _objc_release(uVar7);
            uVar8 = (uint)uVar6 | uVar8;
            puVar10 = puVar10 + 1;
          } while (puVar3 != puVar10);
          puVar3 = puVar2;
          puVar5 = &uStack_130;
          func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      puVar4 = (undefined1 *)puVar5;
    }
    _objc_release(puVar2);
  }
  else {
    uVar8 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(puVar4);
    func_0x00010c0e00e0(uVar7,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c2827c0();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_3 + 0x38);
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010c1204c0(PTR_PTR_1126cdc70,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar7,param_2,puVar2);
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010c1201a0(PTR_PTR_1126cdc70,param_2,puVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar7,param_2,puVar2);
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010bfb12a0(PTR_PTR_1126cdc70,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c12d3e0(uVar6,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return puVar2;
  }
  return (undefined *)(ulong)(uVar8 & 1);
}



/* Entry: 106d2779c; end: 106d2789b; -[SCMemoriesCameraRollContentOperaMediaManager unloadCameraRollAssetIdentifier:] */

void FUN_106d2779c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126cdc70;
  func_0x00010c1204c0(PTR_PTR_1126cdc70,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126cdc70;
  func_0x00010c1201a0(PTR_PTR_1126cdc70,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126cdc70;
  func_0x00010bfb12a0(PTR_PTR_1126cdc70,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d2789c; end: 106d27a27; -[SCMemoriesCameraRollContentOperaMediaManager _preLoadPropertiesForCameraRollAsset:shouldShowSoundPill:isFromMiniCarousel:shouldUseSingleEditButton:metadata:existingProperties:completion:] */

void FUN_106d2789c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  if (param_7 == 0) {
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_7);
    lVar1 = param_7;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0946a0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c094680(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c296de0();
      func_0x00010c0df880(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    lVar1 = param_7;
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    lVar2 = lVar1;
    func_0x00010c0d3a20();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c0d3a20(lVar1);
      func_0x00010c0df880(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  func_0x00010be4cf00(param_1,param_2,param_3,param_5,puVar5,puVar4,param_9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d27a28; end: 106d27a2b; -[SCMemoriesCameraRollContentOperaMediaManager _postLoadPropertiesForCameraRollAsset:shouldShowSoundPill:isFromMiniCarousel:shouldUseSingleEditButton:metadata:existingProperties:completion:] */

void FUN_106d27a28(void)

{
  return;
}



/* Entry: 106d27a2c; end: 106d27c67; -[SCMemoriesCameraRollContentOperaMediaManager _continueImageLoadFromAsset:image:metadata:shouldShowSoundPill:isFromMiniCarousel:shouldUseSingleEditButton:existingProperties:shouldSupportLivePhotoPlaybackStyle:completion:] */

void FUN_106d27a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_12);
  uVar1 = param_3;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76b00(param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106d27c68;
  puStack_b8 = &UNK_110976d08;
  uStack_b0 = param_1;
  _objc_retain(uVar1);
  uStack_a8 = uVar1;
  _objc_retain(param_12);
  uStack_88 = param_12;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  uStack_80 = param_6;
  uStack_7f = param_7;
  uStack_7e = param_8;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_9);
  uStack_90 = param_9;
  ppuVar2 = &puStack_d0;
  _objc_retainBlock();
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106d27e5c;
    puStack_e8 = &UNK_110976d38;
    _objc_retain(uVar1);
    uStack_e0 = uVar1;
    ppuStack_d8 = ppuVar2;
    func_0x000107f6e46c(puVar3,param_3,1,1,0,&puStack_100);
    _objc_release(puVar3);
    _objc_release(uStack_e0);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2,param_4);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_88);
  _objc_release(uStack_a8);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d27c68; end: 106d27e5b;  */

void FUN_106d27c68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0,0,0);
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010c1201a0(PTR_PTR_1126cdc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cdc70;
    func_0x00010c1201a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    _objc_release(puVar4);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),puVar3,1,0,0);
    func_0x00010be765c0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d27e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
  return;
}



/* Entry: 106d27e5c; end: 106d27e67;  */

void FUN_106d27e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d27e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 106d27e68; end: 106d280eb; -[SCMemoriesCameraRollContentOperaMediaManager startToLoadCameraRollAsset:shouldShowSoundPill:isFromMiniCarousel:shouldUseSingleEditButton:existingProperties:shouldSupportLivePhotoPlaybackStyle:completion:] */

void FUN_106d27e68(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c920(param_1);
  func_0x00010be4dae0(param_1);
  lVar2 = param_3;
  func_0x00010c0c6c20();
  if (lVar2 == 2) {
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106d2837c;
    puStack_f0 = &UNK_110976e88;
    _objc_retain(lVar1);
    lStack_e8 = lVar1;
    lStack_e0 = param_1;
    _objc_retain(param_9);
    uStack_c8 = param_9;
    _objc_retain(param_3);
    lStack_d8 = param_3;
    uStack_c0 = param_4;
    uStack_bf = param_5;
    uStack_be = param_6;
    _objc_retain(param_7);
    uStack_d0 = param_7;
    func_0x000107f6e46c(puVar3,param_3,1,1,0,&puStack_108);
    _objc_release(puVar3);
    _objc_release(uStack_d0);
    _objc_release(lStack_d8);
    _objc_release(uStack_c8);
    lVar2 = lStack_e8;
  }
  else {
    if (lVar2 != 1) goto LAB_106d280ac;
    lVar2 = param_1;
    func_0x00010beb5280();
    if ((int)lVar2 == 0) {
      func_0x00010bde88e0(param_1);
      goto LAB_106d280ac;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106d280ec;
    puStack_a0 = &UNK_110976dc8;
    _objc_retain(lVar1);
    lStack_98 = lVar1;
    _objc_retain(param_3);
    lStack_90 = param_3;
    lStack_88 = param_1;
    uStack_70 = param_4;
    uStack_6f = param_5;
    uStack_6e = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    uStack_6d = param_8;
    _objc_retain(param_9);
    uStack_78 = param_9;
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_90);
    lVar2 = lStack_98;
  }
  _objc_release(lVar2);
LAB_106d280ac:
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 106d280ec; end: 106d281d7;  */

void FUN_106d280ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d281d8;
  puStack_68 = &UNK_110976d98;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x28);
  uStack_60 = uVar2;
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
  auVar4 = NEON_ext(auVar4,auVar4,8,1);
  uStack_50 = auVar4._8_8_;
  uStack_58 = auVar4._0_8_;
  uStack_38 = *(undefined1 *)(param_1 + 0x48);
  uStack_37 = *(undefined2 *)(param_1 + 0x49);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uStack_35 = *(undefined1 *)(param_1 + 0x4b);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x000107f6f148(uVar1,1,&puStack_80);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  return;
}



/* Entry: 106d281d8; end: 106d28333;  */

void FUN_106d281d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined1 uStack_45;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf9c8;
  func_0x00010bf8dc80();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106d28334;
  puStack_80 = &UNK_110976d68;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = *(undefined1 *)(param_1 + 0x48);
  uStack_47 = *(undefined2 *)(param_1 + 0x49);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar3;
  uStack_70 = uVar5;
  uStack_68 = param_3;
  puStack_60 = puVar2;
  _objc_retain(uVar4);
  uStack_45 = *(undefined1 *)(param_1 + 0x4b);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar4;
  _objc_retain(uVar3);
  uStack_50 = uVar3;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 106d28334; end: 106d2837b;  */

void FUN_106d28334(long param_1,undefined8 param_2)

{
  func_0x00010bde88e0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined1 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x51),
                      *(undefined1 *)(param_1 + 0x52),*(undefined8 *)(param_1 + 0x40),
                      *(undefined1 *)(param_1 + 0x53));
  return;
}



/* Entry: 106d2837c; end: 106d285d3;  */

void FUN_106d2837c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined2 uStack_157;
  undefined **ppuStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined2 uStack_8f;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cdc70;
  func_0x00010bfb12a0();
  _objc_retainAutoreleasedReturnValue();
  if (((ulong)param_5 & 1) == 0) {
    if (param_2 != 0) {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110f0c0b8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110f0bc38;
      ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8f68;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0c898;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar1;
      puStack_60 = puVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30));
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar2,1,0,0);
      _objc_release(puVar2);
    }
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_106d285d4;
    puStack_d0 = &UNK_110976e58;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_120 = *(undefined8 *)(param_1 + 0x20);
    uStack_118 = *(undefined8 *)(param_1 + 0x28);
    uStack_c8 = uVar5;
    _objc_retain(uStack_120);
    auVar8._8_8_ = uStack_118;
    auVar8._0_8_ = uStack_120;
    auVar8 = NEON_ext(auVar8,auVar8,8,1);
    uStack_b8 = auVar8._8_8_;
    uStack_c0 = auVar8._0_8_;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_8f = *(undefined2 *)(param_1 + 0x49);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = uVar5;
    _objc_retain(uVar6);
    uStack_b0 = uVar6;
    _objc_retain(param_2);
    lStack_a8 = param_2;
    _objc_retain(puVar1);
    param_5 = &puStack_e8;
    puStack_a0 = puVar1;
    _objc_retainBlock();
    puStack_110 = puVar2;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106d290ac;
    puStack_f8 = &UNK_110849530;
    ppuStack_f0 = param_5;
    func_0x00010c0f7fc0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    _objc_release(param_5);
    _objc_release(puStack_a0);
    _objc_release(lStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_98);
    _objc_release(uStack_b8);
    _objc_release(uStack_c8);
  }
  _objc_release(puVar1);
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106d285d4;
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  ppuStack_150 = param_5;
  lStack_148 = param_1;
  puStack_140 = puVar1;
  lStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x106d28710;
  puStack_198 = &UNK_110976df8;
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x30);
  _objc_retain(*(undefined8 *)(lVar3 + 0x30));
  uVar7 = *(undefined8 *)(lVar3 + 0x50);
  uStack_190 = uVar5;
  uStack_188 = uVar6;
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  uStack_160 = uVar7;
  _objc_retain(uVar5);
  uStack_158 = *(undefined1 *)(lVar3 + 0x58);
  uStack_157 = *(undefined2 *)(lVar3 + 0x59);
  uVar6 = *(undefined8 *)(lVar3 + 0x38);
  uStack_180 = uVar5;
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(lVar3 + 0x40);
  uStack_178 = uVar6;
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  uStack_170 = uVar7;
  _objc_retain(uVar5);
  uStack_168 = uVar5;
  func_0x000107f6e91c(puVar2,uVar4,0,0,&puStack_1b0);
  _objc_release(puVar2);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_160);
  _objc_release(uStack_188);
  return;
}



/* Entry: 106d285d4; end: 106d2884f;  */

void FUN_106d285d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined2 uStack_37;
  
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106d28710;
  puStack_78 = &UNK_110976df8;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar3;
  _objc_retain(uVar4);
  uStack_38 = *(undefined1 *)(param_1 + 0x58);
  uStack_37 = *(undefined2 *)(param_1 + 0x59);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x000107f6e91c(puVar1,uVar2,0,0,&puStack_90);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_68);
  return;
}



/* Entry: 106d28850; end: 106d28eb3;  */

void FUN_106d28850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined2 uStack_197;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d23d0;
  func_0x00010c100ba0(PTR_PTR_1126d23d0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126cdc70;
    func_0x00010c1204c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f0c458;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f0c298;
    ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8f80;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8f50;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
LAB_106d28c20:
      if (*(long *)(param_1 + 0x48) == 0) {
        lVar11 = *(long *)(param_1 + 0x58);
        pcVar7 = *(code **)(lVar11 + 0x10);
        puVar5 = (undefined *)0x0;
        uVar6 = 0;
        puVar14 = (undefined *)0x0;
        goto LAB_106d28944;
      }
      func_0x00010be76b00(*(undefined8 *)(param_1 + 0x28));
      ppuStack_150 = &PTR____CFConstantStringClassReference_110f0bc38;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110f0c898;
      uStack_138 = *(undefined8 *)(param_1 + 0x50);
      ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8f68;
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30));
      (**(code **)(*(long *)(param_1 + 0x58) + 0x10))(*(long *)(param_1 + 0x58),puVar14,1,0,0);
      puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e8 = 0xc2000000;
      pcStack_1e0 = FUN_106d28eb4;
      puStack_1d8 = &UNK_110976df8;
      puVar5 = *(undefined **)(param_1 + 0x38);
      uVar15 = *(undefined8 *)(param_1 + 0x30);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(*(undefined8 *)(param_1 + 0x30));
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uStack_1d0 = uVar12;
      uStack_1c8 = uVar15;
      _objc_retain(uVar6);
      uStack_1a0 = uVar6;
      _objc_retain(puVar1);
      puStack_1c0 = puVar1;
      _objc_retain(puVar2);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      puStack_1b8 = puVar2;
      _objc_retain(uVar12);
      uStack_198 = *(undefined1 *)(param_1 + 0x61);
      uStack_197 = *(undefined2 *)(param_1 + 0x62);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uStack_1b0 = uVar12;
      _objc_retain(uVar6);
      uStack_1a8 = uVar6;
      func_0x000107f6e91c(puVar4,puVar5,1,0,&puStack_1f0);
      _objc_release(puVar4);
      _objc_release(uStack_1a8);
      _objc_release(uStack_1b0);
      _objc_release(puStack_1b8);
      _objc_release(puStack_1c0);
      _objc_release(uStack_1a0);
      _objc_release(uStack_1c8);
    }
    else {
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 == 0) goto LAB_106d28c20;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38));
      _objc_release(uVar6);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      lStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lVar10 = lVar11;
      func_0x00010bf52a60();
      if (lVar10 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        lVar9 = *plStack_180;
        do {
          lVar8 = 0;
          do {
            if (*plStack_180 != lVar9) {
              _objc_enumerationMutation(lVar11);
            }
            puVar13 = *(undefined **)(lStack_188 + lVar8 * 8);
            _objc_retain(puVar13);
            puVar5 = puVar13;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            puVar4 = puVar5;
            _objc_opt_isKindOfClass(puVar5,puVar14);
            puVar14 = puVar5;
            if (((ulong)puVar4 & 1) == 0) {
              puVar14 = (undefined *)0x0;
            }
            _objc_retain(puVar14);
            _objc_release(puVar5);
            puVar5 = puVar14;
            func_0x00010c071f40();
            _objc_release(puVar14);
            if ((int)puVar5 == 0) {
              puVar5 = puVar13;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              puVar4 = puVar5;
              _objc_opt_isKindOfClass(puVar5,puVar14);
              puVar14 = puVar5;
              if (((ulong)puVar4 & 1) == 0) {
                puVar14 = (undefined *)0x0;
              }
              _objc_retain(puVar14);
              _objc_release(puVar5);
              puVar5 = puVar14;
              func_0x00010c0720c0();
              _objc_release(puVar14);
              _objc_release(puVar13);
              if ((int)puVar5 != 0) goto LAB_106d28b88;
            }
            else {
              _objc_release();
LAB_106d28b88:
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
              puVar4 = puVar13;
              _objc_opt_isKindOfClass(puVar13,puVar14);
              puVar5 = puVar13;
              if (((ulong)puVar4 & 1) == 0) {
                puVar5 = (undefined *)0x0;
              }
              _objc_retain(puVar5);
              _objc_release(puVar13);
              puVar14 = puVar5;
              FUN_106d4afa4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              if (puVar14 != (undefined *)0x0) goto LAB_106d28de4;
            }
            lVar8 = lVar8 + 1;
          } while (lVar10 != lVar8);
          lVar10 = lVar11;
          func_0x00010bf52a60();
        } while (lVar10 != 0);
        puVar14 = (undefined *)0x0;
      }
LAB_106d28de4:
      _objc_release(lVar11);
      _objc_release(lVar11);
      _objc_release(lVar3);
      func_0x00010be76b00(*(undefined8 *)(param_1 + 0x28));
      puVar5 = puVar2;
      (**(code **)(*(long *)(param_1 + 0x58) + 0x10))(*(long *)(param_1 + 0x58),puVar2,1,0,0);
      func_0x00010be765c0(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(puVar14);
  }
  else {
    uStack_100 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110e84838;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar11 = *(long *)(param_1 + 0x58);
    puVar5 = PTR_PTR_1126cdc70;
    func_0x00010c09ce20();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = *(code **)(lVar11 + 0x10);
    uVar6 = 1;
    puVar1 = puVar14;
    puVar2 = puVar5;
LAB_106d28944:
    (*pcVar7)(lVar11,puVar5,uVar6,0,puVar14);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  puVar2 = PTR_PTR_1126d23d0;
  func_0x00010c100ba0();
  puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar2 == 0) {
    if (puVar5 != (undefined *)0x0) {
      puVar14 = puVar5;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = puVar5;
        func_0x00010bf0af00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x38));
        _objc_release(puVar14);
        (**(code **)(*(long *)(puVar1 + 0x50) + 0x10))
                  (*(long *)(puVar1 + 0x50),*(undefined8 *)(puVar1 + 0x38),1,0,0);
        func_0x00010be765c0(*(undefined8 *)(puVar1 + 0x20));
        goto LAB_106d29074;
      }
    }
    (**(code **)(*(long *)(puVar1 + 0x50) + 0x10))(*(long *)(puVar1 + 0x50),0,0,0,0);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar10 = *(long *)(puVar1 + 0x50);
    puVar1 = PTR_PTR_1126cdc70;
    func_0x00010c09ce20(PTR_PTR_1126cdc70);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,puVar1,1,0,puVar14);
    _objc_release(puVar1);
    _objc_release(puVar14);
  }
LAB_106d29074:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d290b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar5 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106d28eb4; end: 106d290ab;  */

void FUN_106d28eb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d23d0;
  func_0x00010c100ba0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar1 == 0) {
    if (param_2 != 0) {
      lVar4 = param_2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        lVar4 = param_2;
        func_0x00010bf0af00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
        _objc_release(lVar4);
        (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
                  (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),1,0,0);
        func_0x00010be765c0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_106d29074;
      }
    }
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),0,0,0,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 0x50);
    puVar1 = PTR_PTR_1126cdc70;
    func_0x00010c09ce20(PTR_PTR_1126cdc70);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1,1,0,puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
LAB_106d29074:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d290b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d290ac; end: 106d290b7;  */

void FUN_106d290ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d290b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d290b8; end: 106d29267; -[SCMemoriesCameraRollContentOperaMediaManager _loadInteractionButtonPropertiesForCameraRollAssetWithExistingProperties:completion:] */

void FUN_106d290b8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != (undefined *)0x0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x000108ec175c();
    if ((uVar3 & 1) == 0) {
      puVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (puVar4 != (undefined *)0x0) {
        puVar1 = puVar4;
      }
      _objc_retain(puVar1);
      _objc_release(puVar4);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar1);
    }
  }
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106d29268;
  puStack_58 = &UNK_11084aaa8;
  puStack_50 = puVar2;
  uStack_48 = param_4;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(puStack_50);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d29268; end: 106d292ab;  */

void FUN_106d29268(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d292ac; end: 106d2944b; -[SCMemoriesCameraRollContentOperaMediaManager _addSingleSnapPlayerPropertiesToProperties:forAVPlayerItem:] */

void FUN_106d292ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  puVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  puVar1 = param_4;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    puVar1 = puVar2;
    func_0x00010beec820(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar3);
    _objc_release(puVar1);
    func_0x00010c19efe0(puVar3);
    puVar4 = puVar3;
    func_0x00010bdc2b80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2de0;
    func_0x00010bef9f60(PTR_PTR_1126b2de0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2de0;
    func_0x00010bf0c780(PTR_PTR_1126b2de0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = puVar4;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2944c; end: 106d295df; -[SCMemoriesCameraRollContentOperaMediaManager _loadContextPropertiesForCameraRollAsset:isFromMiniCarousel:lensId:musicTrackId:completion:] */

void FUN_106d2944c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b2390;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b281fc();
  puVar3 = puVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d295e0;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_7);
    uStack_58 = param_7;
    _objc_retain(puVar2);
    puStack_60 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_release(puStack_60);
    _objc_release(uStack_58);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  return;
}



/* Entry: 106d295e0; end: 106d29623;  */

void FUN_106d295e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d29624; end: 106d2975b; -[SCMemoriesCameraRollContentOperaMediaManager _loadAddressForCameraRollAsset:completion:] */

void FUN_106d29624(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107f49238();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0,0,0);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar3 = PTR_PTR_1126d23d8;
      _objc_alloc();
      func_0x00010c034960();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2975c; end: 106d2976f;  */

void FUN_106d2975c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__loadAddressForCameraRollAsset_c_112570bf0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106d29770; end: 106d2985f; -[SCMemoriesCameraRollContentOperaMediaManager _loadAddressForCameraRollAsset:completionPerformer:completion:] */

void FUN_106d29770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c09ea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106d29860;
  puStack_50 = &UNK_1108a9f90;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010befd740(uVar2,param_2,param_3,uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 106d29860; end: 106d2995f;  */

void FUN_106d29860(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
    pcVar7 = *(code **)(lVar6 + 0x10);
    _objc_retain(param_2);
    lVar3 = 0;
    lVar4 = 0;
    (*pcVar7)(lVar6,0,0,0,param_3);
  }
  else {
    _objc_retain(param_2);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 1;
    lVar4 = 0;
    (**(code **)(lVar6 + 0x10))(lVar6,puVar1,1,0,0);
    _objc_release(param_2);
    param_2 = puVar1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  _objc_retain(lVar4);
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_2 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d29960; end: 106d299fb; -[SCMemoriesCameraRollContentOperaMediaManager imageForKey:completion:] */

void FUN_106d29960(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d299fc; end: 106d29aa3; -[SCMemoriesCameraRollContentOperaMediaManager videoAssetForKey:] */

void FUN_106d299fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126bcb80;
      _objc_alloc(PTR_PTR_1126bcb80);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfefc40(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      goto LAB_106d29a88;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_106d29a88:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d29aa4; end: 106d29af3; -[SCMemoriesCameraRollContentOperaMediaManager videoAssetFutureForKey:] */

void FUN_106d29aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d29af4; end: 106d29af7; -[SCMemoriesCameraRollContentOperaMediaManager resetVideoAssetForKey:] */

void FUN_106d29af4(void)

{
  return;
}



/* Entry: 106d29af8; end: 106d29b93; -[SCMemoriesCameraRollContentOperaMediaManager livePhotoForKey:completion:] */

void FUN_106d29af8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d29b94; end: 106d29c17; -[SCMemoriesCameraRollContentOperaMediaManager .cxx_destruct] */

void FUN_106d29b94(long param_1)

{
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



/* Entry: 106d29c18; end: 106d2a9c3; +[SCMemoriesCameraRollContentPageModelResolver convertPageDataFromPageId:asset:memoriesCRFeaturedStory:configuration:circumstanceEngine:memoriesUserDefaultsManager:shouldSupportFavoritingCR:] */

void FUN_106d29c18(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,char param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b2368;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010c2b53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = param_3;
  func_0x000108018afc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab660(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = puVar2;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa32a0(param_6);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf249c0(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bf830;
  uVar6 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e800();
  _objc_release(uVar6);
  lVar3 = param_6;
  func_0x00010c2356a0();
  if ((param_5 != 0) && (((uint)lVar3 & (uint)puVar1 & 1) == 0)) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0x7fffffffffffffff;
    lVar3 = param_5;
    func_0x00010c0fa980(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf97e80(lVar3);
    _objc_release(lVar3);
    puVar5 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    _objc_opt_class(PTR_PTR_1126b3b00);
    puVar5 = puVar1;
    func_0x00010bf09f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1d0640(puVar4);
    puVar1 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    lVar3 = param_5;
    func_0x00010c0fa980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c054900(puVar1);
    _objc_release(lVar3);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x402e000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x402e000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_98,8);
  }
  puVar1 = PTR_PTR_1126c99e0;
  func_0x00010bf24b40(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar1);
  func_0x00010c1d0640(puVar4);
  lVar3 = param_4;
  func_0x00010c09da80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf51e00();
  puVar1 = PTR_PTR_1126c99e0;
  func_0x00010bf2a700(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  func_0x00010c1d0640(puVar4);
  func_0x00010c230e20();
  func_0x00010c1d0640(puVar4);
  func_0x00010c1d0640(puVar4);
  func_0x00010c233f20(param_6);
  func_0x00010c22dda0(param_6);
  func_0x00010c233e80(param_6);
  uVar6 = param_1;
  func_0x00010beee940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_4;
  func_0x00010bf5a700(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c0b4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar8 = param_4;
  func_0x00010bf5a700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar4);
  func_0x00010c1d0640(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e9fc0(param_1);
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  if (param_5 == 0) {
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
  }
  else {
    lVar3 = param_5;
    func_0x00010c2711a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    lVar8 = param_4;
    func_0x00010bf5a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar8 == 0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar8 = param_4;
      func_0x00010bf5a700(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5960(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar8);
    }
    _objc_release(param_4);
    puVar5 = PTR_PTR_1126d23e8;
    _objc_alloc(PTR_PTR_1126d23e8);
    func_0x00010c053520();
    puVar7 = PTR_PTR_1126d23f0;
    func_0x00010bdc1340(PTR_PTR_1126d23f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
    lVar8 = param_4;
    func_0x00010c0c6c20();
    if (lVar8 == 1) {
      func_0x00010c1d0640(puVar4);
    }
    puVar7 = PTR_PTR_1126c99e0;
    func_0x00010bf249a0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(ppuVar9);
    _objc_release(lVar3);
  }
  lVar3 = param_6;
  func_0x00010c22ef00();
  if ((int)lVar3 != 0) {
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar7;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    _objc_opt_class(PTR_PTR_1126d23f8);
    puVar7 = puVar5;
    func_0x00010bf09f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
  }
  lVar3 = param_6;
  func_0x00010c072c20();
  if ((int)lVar3 != 0) {
    lVar3 = param_6;
    func_0x00010c0eaa60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar8 != 0) {
      puVar7 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar7 != (undefined *)0x0) {
        puVar5 = puVar7;
      }
      _objc_retain(puVar5);
      _objc_release(puVar7);
      _objc_opt_class(PTR_PTR_1126d2400);
      puVar7 = puVar5;
      func_0x00010bf09f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar7);
    }
  }
  lVar3 = param_6;
  func_0x00010c0eaa60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar8 != 0) {
    lVar3 = param_6;
    func_0x00010c0eaa60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_5;
  func_0x00010c0c7f80();
  if (lVar3 == 2) {
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar7;
    }
    _objc_retain(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d2408;
    _objc_opt_class();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf09f80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar10);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_9 != '\0') {
    func_0x00010c072a60(param_4);
    func_0x00010c0df6e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
  }
  puVar7 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (puVar7 != (undefined *)0x0) {
    puVar5 = puVar7;
  }
  _objc_retain(puVar5);
  _objc_release(puVar7);
  _objc_opt_class(PTR_PTR_1126d2410);
  puVar7 = puVar5;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar4);
  puVar5 = PTR_PTR_1126d2418;
  func_0x00010bf2a6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c99e0;
  func_0x00010bf4db40(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c99e0;
  func_0x00010bf4db20(PTR_PTR_1126c99e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  puVar13 = (undefined1 *)0x0;
  puVar10 = puVar4;
  func_0x00010c033240();
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar12 = 8;
  __Block_object_dispose(&uStack_98);
  __Unwind_Resume();
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09da80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010c0720c0();
  _objc_release(uVar11);
  _objc_release(uVar12);
  if ((int)uVar6 != 0) {
    *(undefined **)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = puVar10;
    *puVar13 = 1;
  }
  return;
}



/* Entry: 106d2a9c4; end: 106d2aa57;  */

void FUN_106d2a9c4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}


