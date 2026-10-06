/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fe9334; end: 108fe9343; -[SCSearchView isEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f5a0),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108fe9344; end: 108fe93ef; -[SCSearchView updatePercentOverscrolled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9344(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f5ac;
  if (0.0 < param_1) {
    lVar1 = *(long *)(param_2 + lVar3);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c153520(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c153560(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108fe93f0; end: 108fe93f7; -[SCSearchView defaultSearchButtonPercentStroked] */

undefined8 FUN_108fe93f0(void)

{
  return 0;
}



/* Entry: 108fe93f8; end: 108fe93ff; -[SCSearchView shouldLazyLoadTextField] */

undefined8 FUN_108fe93f8(void)

{
  return 0;
}



/* Entry: 108fe9400; end: 108fe946b; -[SCSearchView loadTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9400(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277f5a0) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c26bc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fe946c; end: 108fe948b; -[SCSearchView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe946c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe948c; end: 108fe949f; -[SCSearchView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe948c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f5c0,param_3);
  return;
}



/* Entry: 108fe94a0; end: 108fe94af; -[SCSearchView isEditable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fe94a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f558);
}



/* Entry: 108fe94b0; end: 108fe94bf; -[SCSearchView setEditable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe94b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f558) = param_3;
  return;
}



/* Entry: 108fe94c0; end: 108fe94cf; -[SCSearchView autocompleteText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe94c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f5c4);
}



/* Entry: 108fe94d0; end: 108fe94df; -[SCSearchView placeholderText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe94d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f578);
}



/* Entry: 108fe94e0; end: 108fe94ef; -[SCSearchView textFieldRightViewAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe94e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f55c);
}



/* Entry: 108fe94f0; end: 108fe94ff; -[SCSearchView textFieldClearButtonViewMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe94f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f57c);
}



/* Entry: 108fe9500; end: 108fe950f; -[SCSearchView showCloseButtonWhenEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fe9500(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f580);
}



/* Entry: 108fe9510; end: 108fe951f; -[SCSearchView placeholderAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe9510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f574);
}



/* Entry: 108fe9520; end: 108fe952f; -[SCSearchView shouldShowBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fe9520(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f594);
}



/* Entry: 108fe9530; end: 108fe953f; -[SCSearchView keyboardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe9530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f560);
}



/* Entry: 108fe9540; end: 108fe954f; -[SCSearchView keyboardAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe9540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f570);
}



/* Entry: 108fe9550; end: 108fe955f; -[SCSearchView textFieldContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe9550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f590);
}



/* Entry: 108fe9560; end: 108fe959f; -[SCSearchView setTextFieldContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f590;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe95a0; end: 108fe95af; -[SCSearchView rightView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe95a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f5b4);
}



/* Entry: 108fe95b0; end: 108fe95bf; -[SCSearchView disableTextFieldFrameAutoUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fe95b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f564);
}



/* Entry: 108fe95c0; end: 108fe95cf; -[SCSearchView setDisableTextFieldFrameAutoUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe95c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f564) = param_3;
  return;
}



/* Entry: 108fe95d0; end: 108fe95df; -[SCSearchView textFieldFont] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe95d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f5b8);
}



/* Entry: 108fe95e0; end: 108fe95ef; -[SCSearchView searchButtonPercentStroked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe95e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f584);
}



/* Entry: 108fe95f0; end: 108fe962f; -[SCSearchView setSearchButtonShadowView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe95f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe9630; end: 108fe966f; -[SCSearchView setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe9670; end: 108fe96af; -[SCSearchView setTextField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe96b0; end: 108fe96bf; -[SCSearchView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe96b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f56c);
}



/* Entry: 108fe96c0; end: 108fe96ff; -[SCSearchView setTextFieldRightViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe96c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe9700; end: 108fe973f; -[SCSearchView setClearButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe9740; end: 108fe977f; -[SCSearchView setBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f5bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe9780; end: 108fe978f; -[SCSearchView searchIconAccessoryImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe9780(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f598);
}



/* Entry: 108fe9790; end: 108fe97cf; -[SCSearchView setSearchIconAccessoryImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f598;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe97d0; end: 108fe98eb; -[SCSearchView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe97d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f598,0);
  _objc_storeStrong(param_1 + _DAT_11277f5bc,0);
  _objc_storeStrong(param_1 + _DAT_11277f5b0,0);
  _objc_storeStrong(param_1 + _DAT_11277f5a4,0);
  _objc_storeStrong(param_1 + _DAT_11277f5a0,0);
  _objc_storeStrong(param_1 + _DAT_11277f5a8,0);
  _objc_storeStrong(param_1 + _DAT_11277f5ac,0);
  _objc_storeStrong(param_1 + _DAT_11277f5b8,0);
  _objc_storeStrong(param_1 + _DAT_11277f5b4,0);
  _objc_storeStrong(param_1 + _DAT_11277f590,0);
  _objc_storeStrong(param_1 + _DAT_11277f578,0);
  _objc_storeStrong(param_1 + _DAT_11277f5c4,0);
  _objc_destroyWeak(param_1 + _DAT_11277f5c0);
  _objc_storeStrong(param_1 + _DAT_11277f59c,0);
  _objc_storeStrong(param_1 + _DAT_11277f58c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f588,0);
  return;
}



/* Entry: 108fe98ec; end: 108fe995b; -[SCChatSearchTextField deleteBackward] */

void FUN_108fe98ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c14c180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26be60();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puStack_38 = PTR_PTR_1126ffc28;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_deleteBackward_11253b4b8);
  }
  return;
}



/* Entry: 108fe995c; end: 108fe99a3; -[SCChatSearchTextField caretRectForPosition:] */

void FUN_108fe995c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ffc28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_caretRectForPosition__1125aa290);
  _CGRectInset();
  return;
}



/* Entry: 108fe99a4; end: 108fe99db; -[SCChatSearchTextField pointInside:withEvent:] */

void FUN_108fe99a4(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108fe99dc; end: 108fe9a6f; -[SCChatSearchTextField rightViewRectForBounds:] */

double FUN_108fe99dc(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_4;
  dVar2 = param_3;
  func_0x00010c140de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_3 = *(double *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010c140de0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_4);
    param_3 = param_3 - dVar2;
  }
  return param_3;
}



/* Entry: 108fe9a70; end: 108fe9b03; -[SCChatSearchTextField leftViewRectForBounds:] */

double FUN_108fe9a70(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_4;
  dVar2 = param_3;
  func_0x00010c08eb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_3 = *(double *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010c08eb00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_4);
    param_3 = param_3 - dVar2;
  }
  return param_3;
}



/* Entry: 108fe9b04; end: 108fe9b23; -[SCChatSearchTextField scChatSearchTextFieldDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9b04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe9b24; end: 108fe9b37; -[SCChatSearchTextField setScChatSearchTextFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f568,param_3);
  return;
}



/* Entry: 108fe9b38; end: 108fe9b47; -[SCChatSearchTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe9b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277f568);
  return;
}



/* Entry: 108fe9b48; end: 108fe9c2f; -[SCAddFriendButtonFlatlandViewModel initWithTitle:image:isLoading:model:] */

undefined1 *
FUN_108fe9b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ffc30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe9c30; end: 108fe9c53; -[SCAddFriendButtonFlatlandViewModel copyWithZone:] */

undefined8 FUN_108fe9c30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe9c54; end: 108fe9cd7; -[SCAddFriendButtonFlatlandViewModel hash] */

undefined8 * FUN_108fe9c54(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108fe9d80:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fe9d8c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_108fe9d8c;
          }
          goto LAB_108fe9d80;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108fe9d8c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108fe9cd8; end: 108fe9da7; -[SCAddFriendButtonFlatlandViewModel isEqual:] */

long FUN_108fe9cd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fe9d80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fe9d8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108fe9d8c;
          }
          goto LAB_108fe9d80;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fe9d8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fe9da8; end: 108fe9daf; -[SCAddFriendButtonFlatlandViewModel title] */

undefined8 FUN_108fe9da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe9db0; end: 108fe9db7; -[SCAddFriendButtonFlatlandViewModel image] */

undefined8 FUN_108fe9db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe9db8; end: 108fe9dbf; -[SCAddFriendButtonFlatlandViewModel isLoading] */

undefined1 FUN_108fe9db8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe9dc0; end: 108fe9dc7; -[SCAddFriendButtonFlatlandViewModel model] */

undefined8 FUN_108fe9dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe9dc8; end: 108fe9e03; -[SCAddFriendButtonFlatlandViewModel .cxx_destruct] */

void FUN_108fe9dc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fe9e04; end: 108fe9f47;  */

void FUN_108fe9e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(param_1,param_2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(param_3);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800((float)param_4);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_class(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5800();
    uVar3 = param_5;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108fe9f48; end: 108fea043;  */

void FUN_108fe9f48(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0xc008000000000000);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4008000000000000);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_opt_class(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fea044; end: 108fea20f; -[SCAvatarImageRemoteLoader initWithBitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiContentFetcher:bitmojiConfigProvider:] */

undefined1 *
FUN_108fea044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ffc38;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fea210; end: 108fea3ef; -[SCAvatarImageRemoteLoader downloadItem:callbackQueue:completionBlock:retryCount:] */

void FUN_108fea210(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b4860;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108fea3f0;
  puStack_90 = &UNK_110ad2280;
  uStack_88 = param_1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_copyWeak(auStack_b0,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0bf3e0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108fea3f0; end: 108fea667;  */

void FUN_108fea3f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_5;
  FUN_109002620(param_5);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fea174();
  _objc_release(uVar2);
  FUN_1090028fc(param_5);
  FUN_1090029d8();
  FUN_109002ab4();
  FUN_109002bb4();
  _objc_release(param_5);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13d80();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fea668; end: 108fea80f; -[SCAvatarImageRemoteLoader _fetchSelfieWithUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:callbackQueue:completion:] */

void FUN_108fea668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afd38;
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_7);
  _objc_opt_new(puVar1);
  func_0x00010c2bc360();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar1,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbd20(puVar1,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcea0(puVar1,param_2,param_10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4100(puVar1,param_2,param_12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be100c0(param_1,param_2,puVar2,param_7,param_8,param_13,param_14);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fea810; end: 108fea933; -[SCAvatarImageRemoteLoader _fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:callbackQueue:completion:] */

void FUN_108fea810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5938;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = 0;
  func_0x00010c050fa0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010be10100(param_1,param_2,puVar1,param_8,param_9,param_10,param_11,param_12,uVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fea934; end: 108feaafb; -[SCAvatarImageRemoteLoader _fetchBitmojiWithImageParams:contexts:feature:canUsePrior:callbackQueue:completion:] */

void FUN_108fea934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108feaafc;
  puStack_88 = &UNK_110ad22b0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_8);
  uStack_78 = param_8;
  _objc_retainBlock(&puStack_a0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (param_6 == 0) {
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa5460();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa60c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108feaafc; end: 108feab8f;  */

void FUN_108feaafc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdee0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108feab90; end: 108feacef; -[SCAvatarImageRemoteLoader _fetchBitmojiSelfieWithRequest:contexts:feature:callbackQueue:completion:] */

void FUN_108feab90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_7);
  func_0x00010bfa62a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108feacf0; end: 108fead5b;  */

void FUN_108feacf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdec0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fead5c; end: 108feae63; -[SCAvatarImageRemoteLoader _didFetchImageData:imageType:forImageParams:responseContext:originalParams:completion:] */

void FUN_108fead5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 == 0) || (uVar1 = param_5, func_0x00010c071ae0(), (int)uVar1 == 0)) {
    if (param_8 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_8 + 0x10))(param_8,0,puVar2,0);
      _objc_release(puVar2);
    }
  }
  else if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,param_3,0,0);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108feae64; end: 108feaf2b; -[SCAvatarImageRemoteLoader _didFetchImageData:forSelfieRequest:completion:] */

void FUN_108feae64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,0,puVar1,0);
      _objc_release(puVar1);
    }
  }
  else if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_3,0,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108feaf2c; end: 108feaf7f; -[SCAvatarImageRemoteLoader .cxx_destruct] */

void FUN_108feaf2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108feaf80; end: 108feb0b7;  */

void FUN_108feaf80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108feb0b8;
  uStack_30 = 0x108feb0c8;
  uStack_28 = 0;
  func_0x00010c0c1660(param_1);
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108feb0b8; end: 108feb0cf;  */

void FUN_108feb0b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108feb0d0; end: 108feb173;  */

void FUN_108feb0d0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  _objc_retain(param_3);
  uVar4 = 0;
  if ((param_2 < 8) && ((0xf7U >> (ulong)((uint)param_2 & 0x1f) & 1) != 0)) {
    uVar4 = (ulong)(0xf5U >> (ulong)((uint)param_2 & 0x1f) & 1);
    FUN_108ffef38(uVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(ulong *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108feb174; end: 108feb207;  */

void FUN_108feb174(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108feb208; end: 108feb38f;  */

void FUN_108feb208(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126bd8e8;
  if (param_3 == 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    FUN_108feb3f8(param_1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126b4600;
    _objc_alloc(PTR_PTR_1126b4600);
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc0000000;
    pcStack_58 = FUN_108feb390;
    puStack_50 = &UNK_110ad2370;
    uStack_48 = param_1;
    _objc_retain(param_5);
    _objc_retain(param_4);
    puVar1 = (undefined *)0x0;
    func_0x00010bd86bb4(0,param_2,&puStack_68);
    puVar2 = PTR_PTR_1126b4600;
    _objc_alloc(PTR_PTR_1126b4600);
  }
  func_0x00010bff7e80();
  puVar3 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108feb390; end: 108feb3f7;  */

void FUN_108feb390(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bd8e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108feb3f8(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108feb3f8; end: 108feb493;  */

void FUN_108feb3f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x21;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 - 2U < 6 || param_1 == 0) {
    func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 != 1) goto LAB_108feb458;
    func_0x00010c14c3a0(0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  unaff_x21 = 0;
  FUN_108ffef38(0,puVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_108feb458:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 108feb494; end: 108feb5c7;  */

void FUN_108feb494(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_1 < 8) {
    if ((1L << (param_1 & 0x3f) & 0xd8U) != 0) {
      param_5 = PTR_PTR_1126b4858;
      func_0x00010bf1bb20(PTR_PTR_1126b4858);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108feb598;
    }
    if ((param_1 != 2) && (param_1 != 5)) goto LAB_108feb558;
  }
  else {
LAB_108feb558:
    if (1 < param_1) goto LAB_108feb598;
  }
  param_5 = PTR_PTR_1126b4858;
  func_0x00010bf1c120(PTR_PTR_1126b4858);
  _objc_retainAutoreleasedReturnValue();
LAB_108feb598:
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108feb5c8; end: 108febbbf;  */

void FUN_108feb5c8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_6;
  FUN_108feb494(param_6,param_7,param_8,param_9,param_10,param_15);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == (undefined *)0x5) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    FUN_108ffe710(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_1;
  func_0x000108feb8d4(param_1,param_4,param_5,param_6,puVar1,param_11,param_12,param_14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126bd8e8;
  if (puVar3 == (undefined *)0x0) {
    param_6 = PTR_PTR_1126dcde8;
    _objc_alloc(PTR_PTR_1126dcde8);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = param_1;
    FUN_108ffe710();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe1180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046800(param_6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c18fca0(param_6);
    func_0x00010c21f760(param_6);
    func_0x00010c1a6600(param_6);
    func_0x00010c1ee4a0(param_6);
    puVar6 = PTR_PTR_1126bd8e8;
    func_0x00010bf01ec0(PTR_PTR_1126bd8e8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_108feb3f8(param_6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd8f0;
    func_0x00010c29e6c0(PTR_PTR_1126bd8f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9660(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108febbc0; end: 108febfd3;  */

void FUN_108febbc0(undefined8 param_1,undefined *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
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
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108febfd4;
  uStack_88 = 0x108febfe4;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_108febfd4;
  uStack_b8 = 0x108febfe4;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_108febfd4;
  uStack_e8 = 0x108febfe4;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_108febfd4;
  uStack_118 = 0x108febfe4;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_108febfd4;
  uStack_148 = 0x108febfe4;
  uStack_140 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_108febfd4;
  uStack_198 = 0x108febfe4;
  uStack_190 = 0;
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
  }
  else {
    puVar2 = param_2;
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  func_0x00010c244600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(param_1);
  _objc_retain(puVar2);
  func_0x00010c0c0080(uVar3);
  _objc_release(uVar3);
  uVar12 = puStack_a0[5];
  uVar10 = puStack_100[5];
  uVar13 = puStack_d0[5];
  uVar11 = puStack_130[5];
  uVar14 = puStack_160[5];
  uVar3 = param_1;
  func_0x00010c29e660(param_1);
  uVar1 = *(undefined1 *)(puStack_180 + 3);
  uVar4 = param_1;
  func_0x00010bf4f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfa1820();
  uVar6 = param_1;
  func_0x00010bf882c0();
  uVar7 = param_1;
  func_0x00010c0fd7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2354c0();
  FUN_108feb5c8(uVar12,uVar10,uVar13,uVar11,uVar14,uVar3,uVar1,uVar4,(int)uVar5,(byte)uVar6 ^ 1,
                uVar7,(char)uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(uStack_190);
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 108febfd4; end: 108febfeb;  */

void FUN_108febfd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108febfec; end: 108fec1cf;  */

void FUN_108febfec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_2;
  FUN_10901cdb0(param_2,*(undefined8 *)(param_1 + 0x20));
  *(char *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = (char)uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c235340();
  uVar1 = param_2;
  if ((int)uVar3 == 0) {
    _objc_release(uVar2);
LAB_108fec16c:
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c235500();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_108fec1bc;
    FUN_10901ea30();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    FUN_10901eb70();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_108fec16c;
    FUN_10901eb2c();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
LAB_108fec1bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108fec1d0; end: 108fec2e7;  */

void FUN_108fec1d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 108fec2e8; end: 108fec42f;  */

void FUN_108fec2e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_2;
  func_0x00010bf1a5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  FUN_10901cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_10901cfb4();
  *(char *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fec430; end: 108fec62b;  */

void FUN_108fec430(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x7;
  undefined *puVar7;
  long in_stack_00000000;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(in_stack_00000000);
  puVar1 = PTR_PTR_1126b4858;
  func_0x00010bf1c100(PTR_PTR_1126b4858);
  _objc_retainAutoreleasedReturnValue();
  if (in_stack_00000000 == 0) {
    lVar2 = param_1;
    FUN_108ffe710(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d43a0;
  }
  else {
    _objc_retain(in_stack_00000000);
    lVar2 = in_stack_00000000;
    puVar7 = PTR_PTR_1126d43a0;
  }
  PTR_PTR_1126d43a0 = puVar7;
  if (param_2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010bf397e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126bd8e8;
  lVar3 = param_1;
  func_0x000108feb8d4(param_1,param_2,param_3,in_x7,puVar1,in_stack_00000000,1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 5;
  FUN_108feb3f8(5,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bd8f0;
  func_0x00010c29e6c0(PTR_PTR_1126bd8f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9660(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000000);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108fec62c; end: 108fec7ff;  */

void FUN_108fec62c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4858;
  func_0x00010bf1bb20(PTR_PTR_1126b4858);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd8e8;
  _objc_retain(param_1);
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = PTR_PTR_1126bd8f0;
    func_0x00010c29e6c0(PTR_PTR_1126bd8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    FUN_108feaf80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 < 8) {
      puVar5 = *(undefined **)(&PTR_PTR_110ad23f0)[param_3];
      _objc_retain(puVar5);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    puVar3 = PTR_PTR_1126b4860;
    func_0x00010bf1c1e0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  FUN_108feb3f8(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bd8f0;
  func_0x00010c29e6c0(PTR_PTR_1126bd8f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9660(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fec800; end: 108fec9eb;  */

void FUN_108fec800(float param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7,uint param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar1 = PTR_PTR_1126b45f8;
  func_0x00010bfe9200(PTR_PTR_1126b45f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x0;
  if ((((param_8 | param_6 ^ 1) == 1) && (param_3 != 0)) && (param_4 == 0)) {
    puVar5 = PTR_PTR_1126bd8e0;
    _objc_alloc(PTR_PTR_1126bd8e0);
    uVar2 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar7 = (double)param_1;
    fVar6 = 0.0;
    if (param_1 == 0.0) {
      dVar7 = 2.0;
    }
    uVar3 = param_13;
    func_0x00010c269d40(param_13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar8 = (double)fVar6;
    if (fVar6 == 0.0) {
      dVar8 = 1.5;
    }
    func_0x00010bff9340(dVar7,dVar8,puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fec9ec; end: 108fecaa3;  */

void FUN_108fec9ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b4600;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bff7e80();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fecaa4; end: 108fecd03;  */

void FUN_108fecaa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b4860;
  puVar4 = PTR_PTR_1126b45f8;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(param_2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fecd04; end: 108fecf13;  */

void FUN_108fecd04(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b4600;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bff7e80();
  _objc_release(param_1);
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126d77c8;
    _objc_alloc(PTR_PTR_1126d77c8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff63c0(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fecf14; end: 108fed1ab;  */

void FUN_108fecf14(undefined8 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b4600;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bff7e80();
  _objc_release(param_1);
  puVar3 = (undefined *)0x0;
  if (param_2 != 0) {
    puVar3 = PTR_PTR_1126d77c8;
    _objc_alloc(PTR_PTR_1126d77c8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff63c0(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b45f8;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246860(0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fed1ac; end: 108fed29b;  */

bool FUN_108fed1ac(long param_1)

{
  long lVar1;
  
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108fed29c; end: 108fed2ab;  */

void FUN_108fed29c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}



/* Entry: 108fed2ac; end: 108fed2b3; +[SCAvatarCircleBackgroundViewModel imageWithBackgroundNetworkImage:backgroundColor:] */

void FUN_108fed2ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s_imageWithBackgroundNetworkImage__1125d7e50);
  return;
}



/* Entry: 108fed2b4; end: 108fed2f3; -[SCAvatarViewModel initWithBitmojiAvatarContainerViewModel:backgroundViewModel:ringViewModel:avatarBadgeViewModel:avatarActivityIndicatorViewModel:miniStoryThumbnailViewModel:shouldHandleStoryTapAction:isLoading:shouldShowReplayIcon:shouldShowPublicProfileLogo:] */

void FUN_108fed2b4(void)

{
  func_0x00010bff7b40();
  return;
}



/* Entry: 108fed2f4; end: 108fed3e3; -[SCAvatarActivityIndicatorView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fed2f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffc40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277f5ec;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0x3fea9a95421c0443,0x3fca1a0cf1800a7c,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fed3e4; end: 108fed537; -[SCAvatarActivityIndicatorView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed3e4(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffc40;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11277f5ec;
  uVar1 = *(ulong *)(param_2 + lVar4);
  func_0x00010bf20c00();
  _CGRectEqualToRect();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1739e0(0,0,0x4020000000000000,0x4020000000000000,*(undefined8 *)(param_2 + lVar4));
    dVar5 = 8.0;
    dVar6 = 8.0;
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x4020000000000000,0x4020000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010bf20c00(param_2);
    func_0x00010bf20c00(param_2);
    func_0x00010c17a6a0(dVar5 * 0.5,dVar6 * 0.5,*(undefined8 *)(param_2 + lVar4));
  }
  return;
}



/* Entry: 108fed538; end: 108fed627; -[SCAvatarActivityIndicatorView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed538(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277f5f0;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_108fed610;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf13d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fed610:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fed628; end: 108fed633; -[SCAvatarActivityIndicatorView intrinsicContentSize] */

undefined1  [16] FUN_108fed628(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4028000000000000;
  auVar1._0_8_ = 0x4028000000000000;
  return auVar1;
}



/* Entry: 108fed634; end: 108fed643; -[SCAvatarActivityIndicatorView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fed634(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f5f0);
}



/* Entry: 108fed644; end: 108fed683; -[SCAvatarActivityIndicatorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed644(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f5f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f5ec,0);
  return;
}



/* Entry: 108fed684; end: 108fed6ff; -[SCAvatarBadgeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fed684(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffc48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f5f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f5f4) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fed700; end: 108fed71b;  */

void FUN_108fed700(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fed71c; end: 108fed83f; -[SCAvatarBadgeView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fed71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffc48;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_11277f5f4;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf20c00(param_5);
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar3);
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    uVar3 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(param_1,uVar3);
    _objc_release(uVar4);
  }
  return;
}


