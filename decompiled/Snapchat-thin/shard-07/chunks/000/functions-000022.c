/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050657e0; end: 105065883; -[SCChatMediaFolderViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050657e0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11271aec4);
  func_0x00010c07aba0();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c08e9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar2) {
      plVar3 = (long *)0x0;
      goto LAB_10506585c;
    }
  }
  puStack_38 = PTR_PTR_1126e5cb8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_gestureRecognizerShouldBegin__1125ce098,param_3);
LAB_10506585c:
  _objc_release(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 105065884; end: 10506588f; -[SCChatMediaFolderViewController defaultProjectNameV2] */

undefined ** FUN_105065884(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 105065890; end: 1050658cb; -[SCChatMediaFolderViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_105065890(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050658cc; end: 105065907; -[SCChatMediaFolderViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1050658cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271aebc);
  func_0x00010bf529e0(lVar1);
  return lVar1 + (ulong)*(byte *)(param_1 + _DAT_11271aec0);
}



/* Entry: 105065908; end: 105065b7b; -[SCChatMediaFolderViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065908(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar10 = param_4;
  func_0x00010c0840e0();
  lVar9 = (long)_DAT_11271aebc;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar10 == lVar1) {
    uVar2 = param_3;
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf6e0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b44e0;
    _objc_opt_class(PTR_PTR_1126b44e0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11271aeb8;
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c0c4b00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4540(uVar2);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfe7580(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar7);
    func_0x00010c161980(uVar2);
    func_0x00010c2226c0(uVar2);
    _objc_initWeak(auStack_58,param_3);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c1b4200(uVar2);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271aed8);
    func_0x00010c0840e0(param_4);
    func_0x00010bf52500(uVar6);
    func_0x00010c1ee980(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105065b7c; end: 105065c2f;  */

undefined1 * FUN_105065b7c(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puVar3 = auStack_38;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar1 = auStack_38;
    _objc_loadWeakRetained();
    puVar3 = puVar1;
    func_0x00010c070ea0();
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = auStack_38;
      _objc_loadWeakRetained(puVar2);
      puVar3 = puVar2;
      func_0x00010c070400();
      _objc_release(puVar2);
    }
    else {
      puVar3 = (undefined1 *)0x1;
    }
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_38);
  return puVar3;
}



/* Entry: 105065c30; end: 105065cef; -[SCChatMediaFolderViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105065c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_8;
  func_0x00010c0840e0();
  lVar2 = *(long *)(param_4 + _DAT_11271aebc);
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    func_0x00010bfb68e0(param_6);
    param_2 = 0x4064000000000000;
    param_1 = param_3;
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + _DAT_11271aed8);
    lVar1 = param_8;
    func_0x00010c0840e0(param_8);
    func_0x00010c23d1a0(uVar3,param_5,lVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 105065cf0; end: 105065d13; -[SCChatMediaFolderViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aeac),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098,
             &PTR____CFConstantStringClassReference_110eb7438,0,0);
  return;
}



/* Entry: 105065d14; end: 105065d17; -[SCChatMediaFolderViewController scrollViewDidScroll:] */

void FUN_105065d14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be12b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMoreSavedInChatMediaDataMo_112562478);
  return;
}



/* Entry: 105065d18; end: 105065dcf; -[SCChatMediaFolderViewController didUpdateWithAnnouncerIdentifier:] */

void FUN_105065d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b4180;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105065dd0;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105065dd0; end: 105065f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065dd0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271aeb8;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
  lVar5 = lVar4;
  func_0x00010bf36b40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10507fc10(lVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar1 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x00010bfddca0();
  lVar6 = (long)_DAT_11271aebc;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
  _objc_retain(lVar4);
  _objc_retain(lVar5);
  if (lVar4 == 0 && lVar5 == 0) {
LAB_105065e64:
    if (*(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271aec0) == uVar1) goto LAB_105065f20;
  }
  else if (lVar4 == 0 || lVar5 == 0) {
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071b60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((int)lVar2 != 0) goto LAB_105065e64;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  uVar3 = *(undefined8 *)(lVar5 + lVar6);
  *(long *)(lVar5 + lVar6) = lVar4;
  _objc_release(uVar3);
  *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271aec0) = (char)uVar1;
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  func_0x00010c196720(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271aed8));
  func_0x00010c128b60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271aed4));
LAB_105065f20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105065f38; end: 105065fd7; -[SCChatMediaFolderViewController profileChatMediaCaptureMonitorIsSavedAttachmentCellVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105065f38(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11271aec4);
  func_0x00010c07aba0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar5 == param_1;
      _objc_release();
      _objc_release(lVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105065fd8; end: 105065fe7; -[SCChatMediaFolderViewController profileChatMediaCaptureMonitorIsPresentingChatMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aec4),PTR_s_isPresentingChatMedia_1125fc4f8);
  return;
}



/* Entry: 105065fe8; end: 105066187; -[SCChatMediaFolderViewController baseViewForChatMediaDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105065fe8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_11271aebc;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar8 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + lVar10);
      func_0x00010c0dfd40(uVar2,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf36b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_3);
      if (uVar4 == param_3) {
        _objc_release(param_3);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar2);
LAB_1050660f0:
        puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar8,0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = (long)_DAT_11271aed4;
        uVar6 = *(undefined8 *)(param_1 + lVar1);
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf4b900();
        uVar9 = 0;
        if ((int)uVar7 != 0) {
          uVar9 = *(undefined8 *)(param_1 + lVar1);
          func_0x00010bf33b60(uVar9,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar6);
        _objc_release(puVar5);
        goto LAB_105066164;
      }
      if (param_3 == 0) {
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar2);
      }
      else {
        uVar3 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_1050660f0;
      }
      uVar8 = uVar8 + 1;
      uVar4 = *(ulong *)(param_1 + lVar10);
      func_0x00010bf529e0();
    } while (uVar8 < uVar4);
  }
  uVar9 = 0;
LAB_105066164:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105066188; end: 10506632b; -[SCChatMediaFolderViewController profileChatMediaFolderPageActionHandler:didBeginPlayingChatMediaWithDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105066188(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11271aebc;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf36b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_4);
      if (uVar4 == param_4) {
        _objc_release(param_4);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar2);
LAB_10506628c:
        lVar7 = (long)_DAT_11271aed4;
        lVar1 = *(long *)(param_1 + lVar7);
        func_0x00010c0deec0(lVar1,param_2,0);
        if ((long)uVar6 < lVar1) {
          puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar6,0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(ulong *)(param_1 + lVar7);
          func_0x00010bfed1a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf4b900();
          _objc_release(uVar4);
          if ((uVar6 & 1) == 0) {
            func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar7),param_2,puVar5,1,0);
          }
          _objc_release(puVar5);
        }
        break;
      }
      if (param_4 == 0) {
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar2);
      }
      else {
        uVar3 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,param_4);
        _objc_release(param_4);
        _objc_release(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_10506628c;
      }
      uVar6 = uVar6 + 1;
      uVar4 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10506632c; end: 105066333; -[SCChatMediaFolderViewController pageViewName] */

undefined8 FUN_10506632c(void)

{
  return 0xe5;
}



/* Entry: 105066334; end: 105066337; -[SCChatMediaFolderViewController scrollViewDidEndDecelerating:] */

void FUN_105066334(void)

{
  return;
}



/* Entry: 105066338; end: 10506633b; -[SCChatMediaFolderViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_105066338(void)

{
  return;
}



/* Entry: 10506633c; end: 105066393; -[SCChatMediaFolderViewController _updateDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10506633c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aedc);
  _objc_retain(param_3);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105066394; end: 105066397; -[SCChatMediaFolderViewController _collectionViewSizeDidUpdate] */

void FUN_105066394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be12b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMoreSavedInChatMediaDataMo_112562478);
  return;
}



/* Entry: 105066398; end: 105066457; -[SCChatMediaFolderViewController _fetchMoreSavedInChatMediaDataModelsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105066398(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11271aed4;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_2;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar2));
  if ((param_2 - param_4) - dVar3 < 400.0) {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105066458; end: 10506649f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105066458(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271aeb8;
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bfddca0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfa8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),
               PTR_s_fetchMoreSavedInChatMediaDataMod_1125c7cb0);
    return;
  }
  return;
}



/* Entry: 1050664a0; end: 1050664bf; -[SCChatMediaFolderViewController loggingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050664a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271aecc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050664c0; end: 10506659b; -[SCChatMediaFolderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050664c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271aecc);
  _objc_storeStrong(param_1 + _DAT_11271aeb0,0);
  _objc_storeStrong(param_1 + _DAT_11271aebc,0);
  _objc_storeStrong(param_1 + _DAT_11271aec8,0);
  _objc_storeStrong(param_1 + _DAT_11271aeb4,0);
  _objc_storeStrong(param_1 + _DAT_11271aed8,0);
  _objc_storeStrong(param_1 + _DAT_11271aed4,0);
  _objc_storeStrong(param_1 + _DAT_11271aed0,0);
  _objc_storeStrong(param_1 + _DAT_11271aedc,0);
  _objc_storeStrong(param_1 + _DAT_11271aec4,0);
  _objc_storeStrong(param_1 + _DAT_11271aeb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271aeac,0);
  return;
}



/* Entry: 10506659c; end: 105066bb3; -[SCProfileChatMediaFolderActionHandler initWithProfileChatMediaDataSource:userSession:snapchattersDataProvider:sessionId:openSource:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:chatLogger:grapheneServices:userBlizzardServices:conversationServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:contextOperaChromeLayerPluginProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:snapSaver:notificationPool:] */

undefined8 *
FUN_10506659c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  puStack_70 = PTR_PTR_1126e5cc0;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[5] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105066bb4; end: 105066bf3;  */

void FUN_105066bb4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105066bf4; end: 105066bfb; -[SCProfileChatMediaFolderActionHandler isChatMediaCellVisible] */

undefined1 FUN_105066bf4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 105066bfc; end: 105066c0b; -[SCProfileChatMediaFolderActionHandler isPresentingChatMedia] */

bool FUN_105066bfc(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}



/* Entry: 105066c0c; end: 105066fcb; -[SCProfileChatMediaFolderActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105066c0c(long param_1,undefined8 param_2,long param_3,undefined *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar2 != 0) {
        uVar8 = 1;
        *(undefined1 *)(param_1 + 0x78) = 1;
        goto LAB_105066e10;
      }
      puVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar2 != 0) {
        *(undefined1 *)(param_1 + 0x78) = 0;
        goto LAB_105066e0c;
      }
      puVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar2 != 0) {
        puVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126b4498;
        _objc_opt_class(PTR_PTR_1126b4498);
        puVar4 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar1);
        puVar1 = puVar2;
        if (((ulong)puVar4 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126b44f8;
        _objc_alloc(PTR_PTR_1126b44f8);
        func_0x00010c03ad60();
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b1208;
        _objc_alloc();
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = 0x58;
        func_0x00010bc9107c(0x58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02b180();
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        *(undefined **)(param_1 + 0x40) = puVar1;
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar8);
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161ba0();
        _objc_release(uVar8);
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        lVar6 = param_1 + 0xd8;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c10d0c0(uVar8);
        goto LAB_105066e00;
      }
    }
    else {
      puVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar1);
      puVar1 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar2);
      if (puVar1 != (undefined *)0x0) {
        func_0x00010be55ae0(param_1);
      }
      _objc_release(puVar1);
    }
    uVar8 = 0;
  }
  else {
    puVar1 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4498;
    _objc_opt_class(PTR_PTR_1126b4498);
    puVar4 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    puVar2 = puVar1;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_DAT_1126a4f00;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    lVar6 = param_3;
    if ((int)lVar3 == 0) {
      lVar6 = 0;
    }
    _objc_retain(lVar6);
    _objc_release(param_3);
    if (lVar6 == 0) {
      lVar3 = param_1 + 0xe0;
      _objc_loadWeakRetained(lVar3);
      func_0x00010be7a920(param_1);
      _objc_release(lVar3);
    }
    else {
      func_0x00010be7a920(param_1);
    }
LAB_105066e00:
    _objc_release(lVar6);
    _objc_release(puVar2);
LAB_105066e0c:
    uVar8 = 1;
  }
LAB_105066e10:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 105066fcc; end: 10506711f; -[SCProfileChatMediaFolderActionHandler _presentChatMedia:baseView:operaBaseViewProvider:] */

void FUN_105066fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126b4500;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d6a0(puVar4,param_2,uVar2,uVar6,uVar1,uVar3,uVar5,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar4;
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38),param_2,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10f000(uVar6,param_2,param_4,param_3,param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105067120; end: 10506712f; -[SCProfileChatMediaFolderActionHandler savedInChatMediaOperaPresenterDidTearDown:] */

void FUN_105067120(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105067130; end: 105067183; -[SCProfileChatMediaFolderActionHandler savedInChatMediaOperaPresenter:didBeginPlayingChatMediaWithDataModel:] */

void FUN_105067130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c116700();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105067184; end: 105067253; -[SCProfileChatMediaFolderActionHandler _initializeActionMenuPageActionHandler] */

void FUN_105067184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126b4508;
  _objc_alloc(PTR_PTR_1126b4508);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + 0xe8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c03ad80(puVar3,*(undefined8 *)(param_1 + 0xc0),uVar1,uVar2,lVar4,lVar5,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200));
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105067254; end: 10506738f; -[SCProfileChatMediaFolderActionHandler _logMediaConsumption:] */

void FUN_105067254(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = *(ulong *)(param_1 + 0x80);
        func_0x00010bf4b900(uVar2,param_2,uVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0xf8);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a39a0();
          _objc_release(uVar3);
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x80),param_2,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_3 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067390; end: 1050673a7; -[SCProfileChatMediaFolderActionHandler playerDelegate] */

void FUN_105067390(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050673a8; end: 1050673b3; -[SCProfileChatMediaFolderActionHandler setPlayerDelegate:] */

void FUN_1050673a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 1050673b4; end: 1050673cb; -[SCProfileChatMediaFolderActionHandler presentingViewController] */

void FUN_1050673b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050673cc; end: 1050673d7; -[SCProfileChatMediaFolderActionHandler setPresentingViewController:] */

void FUN_1050673cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 1050673d8; end: 1050673ef; -[SCProfileChatMediaFolderActionHandler baseViewProvider] */

void FUN_1050673d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050673f0; end: 1050673fb; -[SCProfileChatMediaFolderActionHandler setBaseViewProvider:] */

void FUN_1050673f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 1050673fc; end: 105067413; -[SCProfileChatMediaFolderActionHandler loggingService] */

void FUN_1050673fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067414; end: 10506741f; -[SCProfileChatMediaFolderActionHandler setLoggingService:] */

void FUN_105067414(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe8,param_3);
  return;
}



/* Entry: 105067420; end: 105067427; -[SCProfileChatMediaFolderActionHandler chatMediaFetcher] */

undefined8 FUN_105067420(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 105067428; end: 10506742f; -[SCProfileChatMediaFolderActionHandler contentDelivery] */

undefined8 FUN_105067428(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 105067430; end: 105067437; -[SCProfileChatMediaFolderActionHandler photoPermissionCoordinator] */

undefined8 FUN_105067430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 105067438; end: 10506743f; -[SCProfileChatMediaFolderActionHandler filterFactory] */

undefined8 FUN_105067438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 105067440; end: 105067447; -[SCProfileChatMediaFolderActionHandler previewURLVideoProvider] */

undefined8 FUN_105067440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 105067448; end: 10506744f; -[SCProfileChatMediaFolderActionHandler eraseMessageScopeExposer] */

undefined8 FUN_105067448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 105067450; end: 105067457; -[SCProfileChatMediaFolderActionHandler eraseMessageScopeServices] */

undefined8 FUN_105067450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 105067458; end: 1050675f7; -[SCProfileChatMediaFolderActionHandler .cxx_destruct] */

void FUN_105067458(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050675f8; end: 1050679a3; -[SCProfileChatMediaFolderPageActionHandler initWithProfileChatMediaDataSource:userSession:snapchattersDataProvider:sessionId:openSource:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:chatLogger:grapheneServices:userBlizzardServices:conversationServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:contextOperaChromeLayerPluginProvider:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:snapSaver:notificationPool:] */

undefined8 *
FUN_1050675f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126e5cc8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b4510;
    _objc_alloc();
    func_0x00010c03adc0();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    func_0x00010c1dda60(puVar1[3]);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050679a4; end: 1050679e7; -[SCProfileChatMediaFolderPageActionHandler setPresentingViewController:] */

void FUN_1050679a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050679e8; end: 105067a2b; -[SCProfileChatMediaFolderPageActionHandler setBaseViewProvider:] */

void FUN_1050679e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x30,param_3);
  func_0x00010c16f500(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105067a2c; end: 105067a7b; -[SCProfileChatMediaFolderPageActionHandler setLoggingService:] */

void FUN_105067a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x38,param_3);
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105067a7c; end: 105067b77; -[SCProfileChatMediaFolderPageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_105067a7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be25340();
  if ((int)lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar4);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar2;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(param_4 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_handleActionWithSender_actionMod_1125d19f8);
  return lVar2;
}



/* Entry: 105067b78; end: 105067b7f; -[SCProfileChatMediaFolderPageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

void FUN_105067b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_handleActionWithSender_actionMod_1125d19f8);
  return;
}



/* Entry: 105067b80; end: 105067b87; -[SCProfileChatMediaFolderPageActionHandler isChatMediaCellVisible] */

void FUN_105067b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isChatMediaCellVisible_1125f9368);
  return;
}



/* Entry: 105067b88; end: 105067b8f; -[SCProfileChatMediaFolderPageActionHandler isPresentingChatMedia] */

void FUN_105067b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isPresentingChatMedia_1125fc4f8);
  return;
}



/* Entry: 105067b90; end: 105067be3; -[SCProfileChatMediaFolderPageActionHandler profileChatMediaFolderActionHandler:didBeginPlayingChatMediaWithDataModel:] */

void FUN_105067b90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c116720();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105067be4; end: 105067bfb; -[SCProfileChatMediaFolderPageActionHandler playerDelegate] */

void FUN_105067be4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067bfc; end: 105067c07; -[SCProfileChatMediaFolderPageActionHandler setPlayerDelegate:] */

void FUN_105067bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105067c08; end: 105067c1f; -[SCProfileChatMediaFolderPageActionHandler presentingViewController] */

void FUN_105067c08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067c20; end: 105067c37; -[SCProfileChatMediaFolderPageActionHandler baseViewProvider] */

void FUN_105067c20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067c38; end: 105067c4f; -[SCProfileChatMediaFolderPageActionHandler loggingService] */

void FUN_105067c38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105067c50; end: 105067cab; -[SCProfileChatMediaFolderPageActionHandler .cxx_destruct] */

void FUN_105067c50(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105067cac; end: 105067db7; -[SCOperaPlaylistProfileChatMediaActionPlugin initWithProfileChatMediaDataSource:chatMediaActionMenuActionHandler:snapchattersDataProvider:userSession:] */

undefined1 *
FUN_105067cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e5cd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain();
    func_0x00010c18b5e0(param_4);
    _objc_release(param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105067db8; end: 105067dc3; -[SCOperaPlaylistProfileChatMediaActionPlugin setPlaylistItemController:] */

void FUN_105067db8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105067dc4; end: 105067dc7; -[SCOperaPlaylistProfileChatMediaActionPlugin teardown] */

void FUN_105067dc4(void)

{
  return;
}



/* Entry: 105067dc8; end: 105067dd3; -[SCOperaPlaylistProfileChatMediaActionPlugin setOperaControlling:] */

void FUN_105067dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105067dd4; end: 105067f6b; -[SCOperaPlaylistProfileChatMediaActionPlugin registeredEventsForOperaSession] */

void FUN_105067dd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 in_x4;
  undefined *puVar12;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_a8 = puVar1;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2d30;
  puStack_a0 = puVar2;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_98 = puVar12;
  func_0x00010c14a760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_90 = puVar3;
  func_0x00010c282460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  puStack_88 = puVar4;
  func_0x00010bf6bf80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_80 = puVar5;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2d30;
  puStack_78 = puVar6;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_a8;
  puVar11 = (undefined *)0x8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(puVar11);
  ppuVar9 = ppuVar10;
  func_0x000107b27f14(ppuVar10,puVar11,in_x4);
  if (((ulong)ppuVar9 & 1) != 0) goto LAB_1050680b8;
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar10;
  func_0x00010c0720c0();
  if ((int)ppuVar9 == 0) {
    puVar12 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010c0720c0();
    _objc_release(puVar12);
    _objc_release(puVar2);
    if ((int)ppuVar9 != 0) goto LAB_10506802c;
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010bf940a0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010c0720c0();
    if (((ulong)ppuVar9 & 1) == 0) {
      puVar12 = PTR_PTR_1126b2d30;
      func_0x00010c14a760(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      if (((ulong)ppuVar9 & 1) != 0) {
LAB_1050681b4:
        _objc_release(puVar12);
        goto LAB_1050681bc;
      }
      puVar3 = PTR_PTR_1126b2d30;
      func_0x00010c282460(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      if (((ulong)ppuVar9 & 1) != 0) {
LAB_1050681ac:
        _objc_release(puVar3);
        goto LAB_1050681b4;
      }
      puVar4 = PTR_PTR_1126b2d30;
      func_0x00010bf6bf80(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      if (((ulong)ppuVar9 & 1) != 0) {
LAB_1050681a4:
        _objc_release(puVar4);
        goto LAB_1050681ac;
      }
      puVar5 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      if (((ulong)ppuVar9 & 1) != 0) {
        _objc_release(puVar5);
        goto LAB_1050681a4;
      }
      puVar6 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar12);
      _objc_release(puVar2);
      if (((ulong)ppuVar9 & 1) == 0) goto LAB_1050680b8;
    }
    else {
LAB_1050681bc:
      _objc_release(puVar2);
    }
    puVar2 = puVar11;
    func_0x000107b27df4();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar1 + 0x30;
      _objc_loadWeakRetained(puVar2);
      puVar12 = puVar2;
      func_0x00010c2bf380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf1c0();
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010bf940a0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if (((ulong)ppuVar9 & 1) != 0) goto LAB_1050680b8;
    puVar12 = puVar11;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    if (puVar2 == (undefined *)0x0) goto LAB_1050680b8;
    puVar12 = PTR_PTR_1126b2d30;
    func_0x00010c14a760(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar10;
    func_0x00010c0720c0();
    _objc_release(puVar12);
    if ((int)ppuVar9 == 0) {
      puVar12 = PTR_PTR_1126b2d30;
      func_0x00010c282460(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar12);
      if ((int)ppuVar9 != 0) {
        puVar12 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar12 = PTR_PTR_1126b2d30;
      func_0x00010bf6bf80(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar12);
      if ((int)ppuVar9 != 0) {
        puVar12 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar12 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar12);
      if ((int)ppuVar9 != 0) {
        puVar12 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
LAB_1050683a0:
      func_0x00010c01b460();
    }
    puVar1 = puVar1 + 0x10;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bfd0140();
    _objc_release(puVar1);
  }
  else {
    _objc_release(puVar2);
LAB_10506802c:
    puVar2 = puVar1 + 0x30;
    _objc_loadWeakRetained(puVar2);
    puVar12 = puVar2;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf1c0();
    _objc_release(puVar12);
    _objc_release(puVar2);
    puVar2 = puVar1 + 0x10;
    _objc_loadWeakRetained(puVar2);
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(puVar2);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
LAB_1050680b8:
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 105067f6c; end: 10506843b; -[SCOperaPlaylistProfileChatMediaActionPlugin operaViewDidSendEvent:page:params:] */

void FUN_105067f6c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000107b27f14(param_3,param_4,param_5);
  if ((uVar1 & 1) != 0) goto LAB_1050680b8;
  puVar10 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar10);
    if ((int)uVar1 != 0) goto LAB_10506802c;
    puVar10 = PTR_PTR_1126b2d30;
    func_0x00010bf940a0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_PTR_1126b2d30;
      func_0x00010c14a760(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((uVar1 & 1) != 0) {
LAB_1050681b4:
        _objc_release(puVar2);
        goto LAB_1050681bc;
      }
      puVar3 = PTR_PTR_1126b2d30;
      func_0x00010c282460(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((uVar1 & 1) != 0) {
LAB_1050681ac:
        _objc_release(puVar3);
        goto LAB_1050681b4;
      }
      puVar4 = PTR_PTR_1126b2d30;
      func_0x00010bf6bf80(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((uVar1 & 1) != 0) {
LAB_1050681a4:
        _objc_release(puVar4);
        goto LAB_1050681ac;
      }
      puVar5 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      if ((uVar1 & 1) != 0) {
        _objc_release(puVar5);
        goto LAB_1050681a4;
      }
      puVar9 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar10);
      if ((uVar1 & 1) == 0) goto LAB_1050680b8;
    }
    else {
LAB_1050681bc:
      _objc_release(puVar10);
    }
    uVar1 = param_4;
    func_0x000107b27df4();
    if ((uVar1 & 1) == 0) {
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010c2bf380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf1c0();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    puVar10 = PTR_PTR_1126b2d30;
    func_0x00010bf940a0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((uVar1 & 1) != 0) goto LAB_1050680b8;
    uVar8 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (uVar1 == 0) goto LAB_1050680b8;
    puVar10 = PTR_PTR_1126b2d30;
    func_0x00010c14a760(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if ((int)uVar8 == 0) {
      puVar10 = PTR_PTR_1126b2d30;
      func_0x00010c282460(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)uVar8 != 0) {
        puVar10 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar10 = PTR_PTR_1126b2d30;
      func_0x00010bf6bf80(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)uVar8 != 0) {
        puVar10 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar10 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      if ((int)uVar8 != 0) {
        puVar10 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        goto LAB_1050683a0;
      }
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
LAB_1050683a0:
      func_0x00010c01b460();
    }
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0140();
    _objc_release(param_1);
  }
  else {
    _objc_release(puVar10);
LAB_10506802c:
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf1c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar1);
    puVar10 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(uVar1);
  }
  _objc_release(puVar10);
  _objc_release(uVar1);
LAB_1050680b8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10506843c; end: 10506847f; -[SCOperaPlaylistProfileChatMediaActionPlugin profileChatMediaActionMenuPageActionHandlerDidConfirmDeleteMedia:] */

void FUN_10506843c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105068480; end: 1050684d3; -[SCOperaPlaylistProfileChatMediaActionPlugin .cxx_destruct] */

void FUN_105068480(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050684d4; end: 105068643; -[SCOperaPlaylistProfileChatMediaPlugin initWithUserSession:initialChatMedia:dataSource:conversationServices:storiesCachedSummaryInfoProvider:circumstanceEngine:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:] */

undefined8 *
FUN_1050684d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5cd8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4518;
    _objc_alloc();
    func_0x00010c03ad40();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 105068644; end: 10506864b; -[SCOperaPlaylistProfileChatMediaPlugin setPlaylistItemController:] */

void FUN_105068644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setPlaylistItemController__1126551a0);
  return;
}



/* Entry: 10506864c; end: 105068673; -[SCOperaPlaylistProfileChatMediaPlugin playlistDataSource] */

void FUN_10506864c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105068674; end: 105068677; -[SCOperaPlaylistProfileChatMediaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_105068674(void)

{
  return;
}



/* Entry: 105068678; end: 1050686a7; -[SCOperaPlaylistProfileChatMediaPlugin type] */

void FUN_105068678(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dc41d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dc41d8);
  return;
}



/* Entry: 1050686a8; end: 10506872b; -[SCOperaPlaylistProfileChatMediaPlugin updateOperaDependencies:] */

void FUN_1050686a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf36cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aee60(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10506872c; end: 105068827; -[SCOperaPlaylistProfileChatMediaPlugin updateOperaConfiguration:] */

void FUN_10506872c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b5480(puVar1,param_2,0xd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75e0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd20(puVar1,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b69c0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4880(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5ea0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105068828; end: 105068857; -[SCOperaPlaylistProfileChatMediaPlugin .cxx_destruct] */

void FUN_105068828(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105068858; end: 1050688cb; -[SCProfileChatMediaConsumptionLoggerPlugin initWithChatContentDelivery:] */

undefined1 * FUN_105068858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5ce0;
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



/* Entry: 1050688cc; end: 1050688d7; -[SCProfileChatMediaConsumptionLoggerPlugin setPlaylistItemController:] */

void FUN_1050688cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1050688d8; end: 105068997; -[SCProfileChatMediaConsumptionLoggerPlugin registeredEventsForOperaSession] */

void FUN_1050688d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_48 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_48;
  uVar8 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  uVar4 = uVar8;
  func_0x00010be36bc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010c0720c0(ppuVar7,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar5 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    _objc_release(puVar2);
    if (((int)ppuVar5 == 0) || (uVar6 = uVar8, FUN_105068a94(), (int)uVar6 == 0))
    goto LAB_105068a6c;
  }
  else {
    uVar6 = uVar8;
    FUN_105068a94();
    if ((uVar6 & 1) != 0) goto LAB_105068a6c;
  }
  func_0x00010be55a80(puVar1,param_2,uVar4);
LAB_105068a6c:
  _objc_release(uVar4);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 105068998; end: 105068a93; -[SCProfileChatMediaConsumptionLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_105068998(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if (((int)uVar3 == 0) || (uVar4 = param_4, FUN_105068a94(), (int)uVar4 == 0))
    goto LAB_105068a6c;
  }
  else {
    uVar4 = param_4;
    FUN_105068a94();
    if ((uVar4 & 1) != 0) goto LAB_105068a6c;
  }
  func_0x00010be55a80(param_1,param_2,uVar1);
LAB_105068a6c:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105068a94; end: 105068aeb;  */

bool FUN_105068a94(long param_1)

{
  long lVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105068aec; end: 105068b47; -[SCProfileChatMediaConsumptionLoggerPlugin _logMediaConsumedForMediaId:] */

void FUN_105068aec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a39a0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105068b48; end: 105068b73; -[SCProfileChatMediaConsumptionLoggerPlugin .cxx_destruct] */

void FUN_105068b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105068b74; end: 105068c1f; -[SCFriendActionContextImpl initWithLoggingService:sourcePageType:sessionId:] */

undefined1 *
FUN_105068b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5ce8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105068c20; end: 105068c2b; -[SCFriendActionContextImpl setPresentingViewController:] */

void FUN_105068c20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105068c2c; end: 105068c83; -[SCFriendActionContextImpl modalUIContainer] */

void FUN_105068c2c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105068c84; end: 105068c93; -[SCFriendActionContextImpl logActionWithName:] */

void FUN_105068c84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logActionWithName_sourcePageType_112605b28,param_3,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105068c94; end: 105068cab; -[SCFriendActionContextImpl presentingViewController_LEGACY_DO_NOT_USE] */

void FUN_105068c94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105068cac; end: 105068cc3; -[SCFriendActionContextImpl delegate] */

void FUN_105068cac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105068cc4; end: 105068ccf; -[SCFriendActionContextImpl setDelegate:] */

void FUN_105068cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105068cd0; end: 105068cd7; -[SCFriendActionContextImpl plugins] */

undefined8 FUN_105068cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105068cd8; end: 105068d07; -[SCFriendActionContextImpl setPlugins:] */

void FUN_105068cd8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105068d08; end: 105068d0f; -[SCFriendActionContextImpl sourcePageType] */

undefined8 FUN_105068d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105068d10; end: 105068d17; -[SCFriendActionContextImpl sessionId] */

undefined8 FUN_105068d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105068d18; end: 105068d63; -[SCFriendActionContextImpl .cxx_destruct] */

void FUN_105068d18(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


