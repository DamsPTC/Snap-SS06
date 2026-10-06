/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b857854; end: 10b8578a3;  */

void FUN_10b857854(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTabBarItems__1125d5850);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfa40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8578a4; end: 10b8578f7; -[SIGHeaderItem setTabBarScrollSpanTabAndCentered:] */

void FUN_10b8578a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x1f) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8578f8;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8578f8; end: 10b857947;  */

void FUN_10b8578f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTabBarScroll_1125d5858);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfa60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857948; end: 10b85799b; -[SIGHeaderItem setShowsSectionTitle:] */

void FUN_10b857948(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x20) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b85799c;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b85799c; end: 10b8579eb;  */

void FUN_10b85799c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeShowsSection_1125d5818);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf960(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8579ec; end: 10b857a7f; -[SIGHeaderItem setBottomAccessoryView:] */

void FUN_10b8579ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b857a80;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b857a80; end: 10b857acf;  */

void FUN_10b857a80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeBottomAccess_1125d5768);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdf6a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857ad0; end: 10b857b63; -[SIGHeaderItem setTitleAffordance:] */

void FUN_10b857ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b857b64;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10b857b64; end: 10b857bb3;  */

void FUN_10b857b64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeTitleAfforda_1125d5870);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfdfac0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857bb4; end: 10b857bbb; -[SIGHeaderItem alpha] */

undefined8 FUN_10b857bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b857bbc; end: 10b857bc3; -[SIGHeaderItem setFadeScrollEnabled:] */

void FUN_10b857bbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10b857bc4; end: 10b857bdb; -[SIGHeaderItem delegate] */

void FUN_10b857bc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b857bdc; end: 10b857be7; -[SIGHeaderItem setDelegate:] */

void FUN_10b857bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10b857be8; end: 10b857bff; -[SIGHeaderItem headerTitleRowYOffset] */

void FUN_10b857be8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b857c00; end: 10b857c0b; -[SIGHeaderItem setHeaderTitleRowYOffset:] */

void FUN_10b857c00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10b857c0c; end: 10b857c13; -[SIGHeaderItem isPassingThroughTouchEvents] */

undefined1 FUN_10b857c0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b857c14; end: 10b857c1b; -[SIGHeaderItem useEmojiKeyboard] */

undefined1 FUN_10b857c14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 10b857c1c; end: 10b857c23; -[SIGHeaderItem setDefaultToEmojiKeyboard:] */

void FUN_10b857c1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return;
}



/* Entry: 10b857c24; end: 10b857c2b; -[SIGHeaderItem editableTitlePlaceholderText] */

undefined8 FUN_10b857c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b857c2c; end: 10b857c33; -[SIGHeaderItem titleTextAlignment] */

undefined8 FUN_10b857c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b857c34; end: 10b857c3b; -[SIGHeaderItem allowsFullWidthForTitle] */

undefined1 FUN_10b857c34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b857c3c; end: 10b857c43; -[SIGHeaderItem doesTitleCollapseWhenScrolled] */

undefined1 FUN_10b857c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10b857c44; end: 10b857c4b; -[SIGHeaderItem isTitleAlwaysCollapsed] */

undefined1 FUN_10b857c44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10b857c4c; end: 10b857c53; -[SIGHeaderItem doesBottomAccessoryViewFadeWhenScrolled] */

undefined1 FUN_10b857c4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10b857c54; end: 10b857c5b; -[SIGHeaderItem doesBottomAccessoryViewCollapseWhenScrolled] */

undefined1 FUN_10b857c54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10b857c5c; end: 10b857c63; -[SIGHeaderItem doesScrollViewScrollingToTopOnTappingStatusBar] */

undefined1 FUN_10b857c5c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 10b857c64; end: 10b857c6f; -[SIGHeaderItem setScrollView:] */

void FUN_10b857c64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 10b857c70; end: 10b857c77; -[SIGHeaderItem setPosition:] */

void FUN_10b857c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10b857c78; end: 10b857c7f; -[SIGHeaderItem titleViewTapped] */

undefined8 FUN_10b857c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b857c80; end: 10b857c87; -[SIGHeaderItem setTitleViewTapped:] */

void FUN_10b857c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b857c88; end: 10b857c8f; -[SIGHeaderItem setTitleViewDidBecomeVisible:] */

void FUN_10b857c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b857c90; end: 10b857c97; -[SIGHeaderItem isSearchFieldVisible] */

undefined1 FUN_10b857c90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}



/* Entry: 10b857c98; end: 10b857caf; -[SIGHeaderItem searchFieldDelegate] */

void FUN_10b857c98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b857cb0; end: 10b857cb7; -[SIGHeaderItem searchFieldTextInputTraits] */

undefined8 FUN_10b857cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b857cb8; end: 10b857ccf; -[SIGHeaderItem pillsDelegate] */

void FUN_10b857cb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b857cd0; end: 10b857cd7; -[SIGHeaderItem searchFieldLeadingView] */

undefined8 FUN_10b857cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b857cd8; end: 10b857cdf; -[SIGHeaderItem searchFieldTrailingView] */

undefined8 FUN_10b857cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b857ce0; end: 10b857ce7; -[SIGHeaderItem tabBarScrollSpanTabAndCentered] */

undefined1 FUN_10b857ce0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1f);
}



/* Entry: 10b857ce8; end: 10b857cef; -[SIGHeaderItem bottomAccessoryView] */

undefined8 FUN_10b857ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b857cf0; end: 10b857d63; -[SIGHeaderItemTextInputTraits setAutocapitalizationType:] */

void FUN_10b857cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b857d64; end: 10b857dd7;  */

void FUN_10b857d64(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeAutocapitali_1125d5758);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf660(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857dd8; end: 10b857e4b; -[SIGHeaderItemTextInputTraits setAutocorrectionType:] */

void FUN_10b857dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b857e4c; end: 10b857ebf;  */

void FUN_10b857e4c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeAutocorrecti_1125d5760);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf680(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857ec0; end: 10b857f33; -[SIGHeaderItemTextInputTraits setSpellCheckingType:] */

void FUN_10b857ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b857f34; end: 10b857fa7;  */

void FUN_10b857f34(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSpellCheckin_1125d5838);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf9e0(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b857fa8; end: 10b85801b; -[SIGHeaderItemTextInputTraits setKeyboardType:] */

void FUN_10b857fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b85801c; end: 10b85808f;  */

void FUN_10b85801c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeKeyboardType_1125d57c8);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf820(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858090; end: 10b858103; -[SIGHeaderItemTextInputTraits setKeyboardAppearance:] */

void FUN_10b858090(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b858104; end: 10b858177;  */

void FUN_10b858104(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeKeyboardAppe_1125d57c0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf800(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858178; end: 10b8581eb; -[SIGHeaderItemTextInputTraits setReturnKeyType:] */

void FUN_10b858178(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b8581ec; end: 10b85825f;  */

void FUN_10b8581ec(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeReturnKeyTyp_1125d57e0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf880(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858260; end: 10b8582d3; -[SIGHeaderItemTextInputTraits setEnablesReturnKeyAutomatically:] */

void FUN_10b858260(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b8582d4; end: 10b858347;  */

void FUN_10b8582d4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeEnablesRetur_1125d57a0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf780(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858348; end: 10b8583bb; -[SIGHeaderItemTextInputTraits setSecureTextEntry:] */

void FUN_10b858348(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b8583bc; end: 10b85842f;  */

void FUN_10b8583bc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSecureTextEn_1125d5810);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf940(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858430; end: 10b858547; -[SIGHeaderItemTextInputTraits setTextContentType:] */

void FUN_10b858430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b858548; end: 10b8585bb; -[SIGHeaderItemTextInputTraits setSmartQuotesType:] */

void FUN_10b858548(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b8585bc; end: 10b85862f;  */

void FUN_10b8585bc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSmartQuotesT_1125d5830);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf9c0(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858630; end: 10b8586a3; -[SIGHeaderItemTextInputTraits setSmartDashesType:] */

void FUN_10b858630(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b8586a4; end: 10b858717;  */

void FUN_10b8586a4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSmartDashesT_1125d5820);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf980(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858718; end: 10b85878b; -[SIGHeaderItemTextInputTraits setSmartInsertDeleteType:] */

void FUN_10b858718(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb47e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b85878c; end: 10b8587ff;  */

void FUN_10b85878c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_headerItem_didChangeSmartInsertD_1125d5828);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfdf9a0(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b858800; end: 10b858807; -[SIGHeaderItemTextInputTraits autocapitalizationType] */

undefined8 FUN_10b858800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b858808; end: 10b85880f; -[SIGHeaderItemTextInputTraits autocorrectionType] */

undefined8 FUN_10b858808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b858810; end: 10b858817; -[SIGHeaderItemTextInputTraits spellCheckingType] */

undefined8 FUN_10b858810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b858818; end: 10b85881f; -[SIGHeaderItemTextInputTraits keyboardType] */

undefined8 FUN_10b858818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b858820; end: 10b858827; -[SIGHeaderItemTextInputTraits keyboardAppearance] */

undefined8 FUN_10b858820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b858828; end: 10b85882f; -[SIGHeaderItemTextInputTraits returnKeyType] */

undefined8 FUN_10b858828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b858830; end: 10b858837; -[SIGHeaderItemTextInputTraits enablesReturnKeyAutomatically] */

undefined1 FUN_10b858830(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b858838; end: 10b85883f; -[SIGHeaderItemTextInputTraits isSecureTextEntry] */

undefined1 FUN_10b858838(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b858840; end: 10b858847; -[SIGHeaderItemTextInputTraits textContentType] */

undefined8 FUN_10b858840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b858848; end: 10b85884f; -[SIGHeaderItemTextInputTraits smartQuotesType] */

undefined8 FUN_10b858848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b858850; end: 10b858857; -[SIGHeaderItemTextInputTraits smartDashesType] */

undefined8 FUN_10b858850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b858858; end: 10b85885f; -[SIGHeaderItemTextInputTraits smartInsertDeleteType] */

undefined8 FUN_10b858858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b858860; end: 10b858877; -[SIGHeaderItemTextInputTraits headerItem] */

void FUN_10b858860(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b858878; end: 10b858b63; +[SIGHeaderItemSearchRow interpolatedFrameWithLeftSideAccessoryViewFrame:rightSideAccessoryViewFrame:fullRowFrame:condensedRowFrame:fraction:] */

double FUN_10b858878(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  dVar1 = in_stack_00000000;
  _CGRectGetMinX(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  dVar2 = in_stack_00000000;
  _CGRectGetMinY(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  dVar3 = in_stack_00000020;
  _CGRectGetMinX(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  dVar4 = in_stack_00000020;
  _CGRectGetMinY(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  dVar5 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar9 = dVar3 - dVar1;
  dVar14 = dVar4 - dVar2;
  dVar12 = SQRT(dVar9 * dVar9 + dVar14 * dVar14);
  dVar12 = (dVar14 * (param_1 - dVar2) + dVar9 * (dVar5 - dVar1)) / (dVar12 * dVar12);
  dVar10 = dVar1 + dVar9 * dVar12;
  dVar8 = dVar2 + dVar14 * dVar12;
  dVar12 = in_stack_00000000;
  _CGRectGetMaxX(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  dVar9 = in_stack_00000000;
  _CGRectGetMinY(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  dVar14 = in_stack_00000020;
  _CGRectGetMaxX(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  dVar6 = in_stack_00000020;
  _CGRectGetMinY(in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  dVar7 = param_5;
  _CGRectGetMinX(param_5,param_6,param_7,param_8);
  _CGRectGetMaxY(param_5,param_6,param_7,param_8);
  dVar11 = dVar14 - dVar12;
  dVar15 = dVar6 - dVar9;
  dVar13 = SQRT(dVar11 * dVar11 + dVar15 * dVar15);
  dVar13 = (dVar15 * (param_5 - dVar9) + dVar11 * (dVar7 - dVar12)) / (dVar13 * dVar13);
  dVar11 = dVar12 + dVar11 * dVar13;
  dVar13 = dVar9 + dVar15 * dVar13;
  FUN_10b86e668(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038);
  FUN_10b86e714(dVar1,dVar2,dVar10 + (dVar5 - dVar10) * 2.0,dVar8 + (param_1 - dVar8) * 2.0,dVar3,
                dVar4,in_stack_00000008);
  FUN_10b86e714(dVar12,dVar9,dVar11 + (dVar7 - dVar11) * 2.0,dVar13 + (param_5 - dVar13) * 2.0,
                dVar14,dVar6,in_stack_00000008);
  return dVar1;
}



/* Entry: 10b858b64; end: 10b858ca3; -[SIGHeaderItemSearchRow initWithSearchIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b858b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112794c78;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794c7c) = 0;
    puVar3 = PTR_PTR_1126b3f70;
    func_0x00010c26bec0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112794c80;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010befbb60(puVar1);
    func_0x00010b885020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar4);
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17c7a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1b9b80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1ad9a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bec5ae0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b858ca4; end: 10b858d3b; -[SIGHeaderItemSearchRow setHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112794c84;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010c12d560(uVar2,param_2,param_1);
    func_0x00010befa200(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b858d3c; end: 10b858dab; -[SIGHeaderItemSearchRow setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b558;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setFrame__112645658);
  func_0x00010c19f0e0(0,0,param_3,param_4,*(undefined8 *)(param_5 + _DAT_112794c80));
  return;
}



/* Entry: 10b858dac; end: 10b858e1b; -[SIGHeaderItemSearchRow setBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b558;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setBounds__11263a898);
  func_0x00010c19f0e0(0,0,param_3,param_4,*(undefined8 *)(param_5 + _DAT_112794c80));
  return;
}



/* Entry: 10b858e1c; end: 10b858ed3; -[SIGHeaderItemSearchRow _stylize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858e1c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112794c88);
  if (uVar1 < 4) {
    uVar3 = *(undefined8 *)(&UNK_10e5f3308 + uVar1 * 8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e5f32e8 + uVar1 * 8));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  lVar5 = (long)_DAT_112794c80;
  func_0x00010c1cdb80(*(undefined8 *)(param_1 + lVar5),param_2,puVar4);
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b858ed4; end: 10b858eef; -[SIGHeaderItemSearchRow headerItem:didChangeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858ed4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + _DAT_112794c88) == param_4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stylize_11258f060);
  return;
}



/* Entry: 10b858ef0; end: 10b858f6b; -[SIGHeaderItemSearchRow headerItem:didChangeSearchFieldDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112794c80;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b858f6c; end: 10b858fe7; -[SIGHeaderItemSearchRow headerItem:didChangePillsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858f6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112794c80;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c0fbec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c1db9c0(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b858fe8; end: 10b859067; -[SIGHeaderItemSearchRow headerItem:didChangeSearchFieldLeadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b858fe8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112794c80;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c08eb00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((param_4 != 0) && ((uVar2 & 1) == 0)) {
    func_0x00010c1ba3a0(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b859068; end: 10b8590e3; -[SIGHeaderItemSearchRow headerItem:didChangeSearchFieldTrailingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112794c80;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c140de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c1ee2a0(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b8590e4; end: 10b8590f7; -[SIGHeaderItemSearchRow headerItem:didChangeAutocapitalizationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8590e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setAutocapitalizationType__112638e48,
             param_4);
  return;
}



/* Entry: 10b8590f8; end: 10b85910b; -[SIGHeaderItemSearchRow headerItem:didChangeAutocorrectionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8590f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setAutocorrectionType__112638e50,
             param_4);
  return;
}



/* Entry: 10b85910c; end: 10b85911f; -[SIGHeaderItemSearchRow headerItem:didChangeSpellCheckingType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85910c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c207db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setSpellCheckingType__11265f990,param_4
            );
  return;
}



/* Entry: 10b859120; end: 10b859133; -[SIGHeaderItemSearchRow headerItem:didChangeKeyboardType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setKeyboardType__11264b5d8,param_4);
  return;
}



/* Entry: 10b859134; end: 10b859147; -[SIGHeaderItemSearchRow headerItem:didChangeKeyboardAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setKeyboardAppearance__11264b590,
             param_4);
  return;
}



/* Entry: 10b859148; end: 10b85915b; -[SIGHeaderItemSearchRow headerItem:didChangeReturnKeyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1edbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setReturnKeyType__112659120,param_4);
  return;
}



/* Entry: 10b85915c; end: 10b85916f; -[SIGHeaderItemSearchRow headerItem:didChangeEnablesReturnKeyAutomatically:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85915c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),
             PTR_s_setEnablesReturnKeyAutomatically_112642f80,param_4);
  return;
}



/* Entry: 10b859170; end: 10b859183; -[SIGHeaderItemSearchRow headerItem:didChangeSecureTextEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setSecureTextEntry__11265c0a8,param_4);
  return;
}



/* Entry: 10b859184; end: 10b859197; -[SIGHeaderItemSearchRow headerItem:didChangeTextContentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setTextContentType__1126626b8,param_4);
  return;
}



/* Entry: 10b859198; end: 10b8591ab; -[SIGHeaderItemSearchRow headerItem:didChangeSmartQuotesType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2034d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setSmartQuotesType__11265e758,param_4);
  return;
}



/* Entry: 10b8591ac; end: 10b8591bf; -[SIGHeaderItemSearchRow headerItem:didChangeSmartDashesType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8591ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c203430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setSmartDashesType__11265e730,param_4);
  return;
}



/* Entry: 10b8591c0; end: 10b8591d3; -[SIGHeaderItemSearchRow headerItem:didChangeSmartInsertDeleteType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8591c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2034b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794c80),PTR_s_setSmartInsertDeleteType__11265e750,
             param_4);
  return;
}



/* Entry: 10b8591d4; end: 10b8591e3; -[SIGHeaderItemSearchRow headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8591d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794c84);
}



/* Entry: 10b8591e4; end: 10b8591f3; -[SIGHeaderItemSearchRow searchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b8591e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794c80);
}


