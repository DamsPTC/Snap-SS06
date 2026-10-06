/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106578f44; end: 106578fc3; -[SCChatInputItemKeyboardController inputViewController:textViewDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578f44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    param_1 = param_1 + _DAT_11274a9a8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106578fc4; end: 106578fd3; -[SCChatInputItemKeyboardController defaultDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106578fc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a9a0);
}



/* Entry: 106578fd4; end: 106578ff3; -[SCChatInputItemKeyboardController inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578fd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106578ff4; end: 106579007; -[SCChatInputItemKeyboardController setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106578ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a9b8,param_3);
  return;
}



/* Entry: 106579008; end: 106579017; -[SCChatInputItemKeyboardController style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106579008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a9a4);
}



/* Entry: 106579018; end: 106579037; -[SCChatInputItemKeyboardController inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579018(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a9a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106579038; end: 10657904b; -[SCChatInputItemKeyboardController setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579038(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a9a8,param_3);
  return;
}



/* Entry: 10657904c; end: 10657905b; -[SCChatInputItemKeyboardController stateAnnouncementsSuspended] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10657904c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a9b4);
}



/* Entry: 10657905c; end: 10657906b; -[SCChatInputItemKeyboardController setStateAnnouncementsSuspended:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657905c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a9b4) = param_3;
  return;
}



/* Entry: 10657906c; end: 1065790c3; -[SCChatInputItemKeyboardController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657906c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274a9a8);
  _objc_destroyWeak(param_1 + _DAT_11274a9b8);
  _objc_storeStrong(param_1 + _DAT_11274a9b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a9ac,0);
  return;
}



/* Entry: 1065790c4; end: 1065790cf;  */

void FUN_1065790c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110db2db8);
  return;
}



/* Entry: 1065790d0; end: 1065791a3;  */

undefined8 FUN_1065790d0(undefined **param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar6;
  long lVar7;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_1 != (undefined **)0x0) {
    ppuVar2 = param_1;
  }
  _objc_retain(ppuVar2);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    ppuVar5 = ppuVar2;
    func_0x00010c0720c0();
    uVar4 = (uint)ppuVar5;
  }
  lVar6 = param_4;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  uVar1 = 1;
  if (lVar7 != 0) {
    uVar1 = 2;
  }
  uVar3 = 3;
  if ((uVar4 & lVar7 != 0) == 0) {
    uVar3 = uVar1;
  }
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release(ppuVar2);
  return uVar3;
}



/* Entry: 1065791a4; end: 106579257;  */

void FUN_1065791a4(long param_1)

{
  if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x00010bfeb8a0(PTR_PTR_1126cb8d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 1) {
      func_0x00010c0da840(PTR_PTR_1126cb8d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 2) {
    func_0x00010bf453e0(PTR_PTR_1126cb8d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 3) {
    func_0x00010bf6d020(PTR_PTR_1126cb8d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 4) {
    func_0x00010bfaffa0(PTR_PTR_1126cb8d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106579258; end: 106579343;  */

void FUN_106579258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c260c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c25cf80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106579344; end: 106579347; -[SCChatInputSendItemController didDeselectInputItem:] */

void FUN_106579344(void)

{
  return;
}



/* Entry: 106579348; end: 1065793d7; -[SCChatInputSendItemController didSelectInputItem:] */

void FUN_106579348(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065793d8; end: 1065793db; -[SCChatInputSendItemController didCollapseInputItem:] */

void FUN_1065793d8(void)

{
  return;
}



/* Entry: 1065793dc; end: 1065793df; -[SCChatInputSendItemController didUncollapseInputItem:] */

void FUN_1065793dc(void)

{
  return;
}



/* Entry: 1065793e0; end: 1065793f7; -[SCChatInputSendItemController inputController] */

void FUN_1065793e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065793f8; end: 106579403; -[SCChatInputSendItemController setInputController:] */

void FUN_1065793f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106579404; end: 10657941b; -[SCChatInputSendItemController inputItem] */

void FUN_106579404(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657941c; end: 106579427; -[SCChatInputSendItemController setInputItem:] */

void FUN_10657941c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106579428; end: 10657943f; -[SCChatInputSendItemController delegate] */

void FUN_106579428(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106579440; end: 10657944b; -[SCChatInputSendItemController setDelegate:] */

void FUN_106579440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10657944c; end: 10657947b; -[SCChatInputSendItemController .cxx_destruct] */

void FUN_10657944c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10657947c; end: 10657952b; -[SCChatInputSendItemFeature initWithDelegate:] */

undefined1 * FUN_10657947c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1c08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb8d8;
    _objc_opt_new(PTR_PTR_1126cb8d8);
    func_0x00010c18b5e0();
    puVar3 = PTR_PTR_1126cb8c0;
    func_0x00010c0841e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10657952c; end: 1065795db; -[SCChatInputSendItemFeature configureInputItem:] */

void FUN_10657952c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_3);
  func_0x00010bfe8220(puVar1,param_2,&PTR____CFConstantStringClassReference_110e46238);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1a9f40(param_3,param_2,puVar2,0,0);
  func_0x00010c160fc0(param_3,param_2,&PTR____CFConstantStringClassReference_110e54158);
  func_0x00010c223c40(param_3,param_2,4);
  func_0x00010c17e480(param_3,param_2,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065795dc; end: 1065795e3; -[SCChatInputSendItemFeature featureType] */

undefined8 FUN_1065795dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065795e4; end: 1065795eb; -[SCChatInputSendItemFeature inputItem] */

undefined8 FUN_1065795e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065795ec; end: 10657961b; -[SCChatInputSendItemFeature setInputItem:] */

void FUN_1065795ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10657961c; end: 10657964b; -[SCChatInputSendItemFeature .cxx_destruct] */

void FUN_10657961c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10657964c; end: 1065796bf; -[SCChatInputStackView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10657964c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1c10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beac000(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a9d0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a9d0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1065796c0; end: 10657971b; -[SCChatInputStackView _setupDefaultLayoutValues] */

void FUN_1065796c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c190b80(param_1,param_2,0);
  func_0x00010c16e060(param_1,param_2,0);
  func_0x00010c166c00(param_1,param_2,3);
  puVar1 = PTR_PTR_1126cb8e0;
  _objc_opt_new(PTR_PTR_1126cb8e0);
  func_0x00010bef6d60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10657971c; end: 106579797; -[SCChatInputStackView intrinsicContentSize] */

void FUN_10657971c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puStack_38 = PTR_PTR_1126f1c10;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_intrinsicContentSize_1125f8080);
  }
  return;
}



/* Entry: 106579798; end: 1065797c7; -[SCChatInputStackView inputItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579798(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a9d0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065797c8; end: 106579847; -[SCChatInputStackView addInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065797c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf09ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  func_0x00010be3c4e0(param_1,param_2,param_3,lVar2,param_4);
  _objc_release(lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11274a9d0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106579848; end: 1065798ab; -[SCChatInputStackView prependInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be3c4e0(param_1,param_2,param_3,1,param_4);
  func_0x00010c066b00(*(undefined8 *)(param_1 + _DAT_11274a9d0),param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065798ac; end: 10657991f; -[SCChatInputStackView insertPrioritizedInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065798ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be38b20(param_1,param_2,param_3);
  func_0x00010be3c4e0(param_1,param_2,param_3,lVar1 + 1,param_4);
  func_0x00010c066b00(*(undefined8 *)(param_1 + _DAT_11274a9d0),param_2,param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106579920; end: 106579beb; -[SCChatInputStackView collapseInputItems:withCollapseAnimation:excludingInputItemWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579920(long param_1,undefined8 param_2,int param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined **unaff_x23;
  long lVar11;
  long lVar12;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  ulong uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  undefined1 auStack_100 [136];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar10 = *(long *)(param_1 + _DAT_11274a9d0);
    _objc_retain(lVar10);
    lVar3 = lVar10;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x23 = *(undefined ***)(lVar12 * 8);
        ppuVar7 = unaff_x23;
        func_0x00010bfa2fc0(unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(ppuVar7);
        func_0x00010c17e480(unaff_x23);
        func_0x00010c1a9e40(unaff_x23);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    }
    ppuVar7 = (undefined **)0x0;
    _objc_release(lVar10);
  }
  else {
    lVar11 = (long)_DAT_11274a9d0;
    lVar3 = *(long *)(param_1 + lVar11);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar9 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010bfa2fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        _objc_release(uVar4);
        if (param_3 != (int)uVar5) goto LAB_1065799ec;
        uVar9 = uVar9 + 1;
        uVar6 = *(ulong *)(param_1 + lVar11);
        func_0x00010bf529e0();
      } while (uVar9 < uVar6);
    }
    uVar9 = 0;
LAB_1065799ec:
    _objc_initWeak(auStack_100,param_1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106579bec;
    puStack_118 = &UNK_110846540;
    ppuVar7 = &puStack_130;
    _objc_copyWeak(auStack_110,auStack_100);
    puStack_160 = puVar1;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106579c9c;
    puStack_148 = &UNK_110850f58;
    unaff_x23 = &puStack_160;
    uStack_108 = uVar9;
    _objc_copyWeak(auStack_140,auStack_100);
    uStack_138 = uVar9;
    func_0x00010bf03420(0x3fd0000000000000,puVar2);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_100);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(ppuVar7 + 4);
  _objc_destroyWeak(auStack_100);
  __Unwind_Resume();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    lVar3 = (long)_DAT_11274a9d0;
    uVar8 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c0dfd40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106579bec; end: 106579c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579bec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_11274a9d0;
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106579c9c; end: 106579d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106579c9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_11274a9d0;
    uVar2 = *(undefined8 *)(lVar1 + lVar6);
    func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e480();
    func_0x00010c1a9e40(uVar2,param_2,1);
    _objc_release(uVar2);
    lVar3 = *(long *)(lVar1 + lVar6);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        if (uVar5 != *(ulong *)(param_1 + 0x28)) {
          uVar2 = *(undefined8 *)(lVar1 + lVar6);
          func_0x00010c0dfd40(uVar2,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17e480();
          func_0x00010c1a9e40(uVar2,param_2,0);
          _objc_release(uVar2);
        }
        uVar5 = uVar5 + 1;
        uVar4 = *(ulong *)(lVar1 + lVar6);
        func_0x00010bf529e0();
      } while (uVar5 < uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106579d7c; end: 106579e4b; -[SCChatInputStackView _insertInputItem:atIndex:animationStyle:] */

void FUN_106579d7c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_4 <= uVar2) {
    uVar2 = param_4;
  }
  if (param_5 < 2) {
    if (param_5 == 0) {
      func_0x00010c066580(param_1,param_2,param_3);
    }
    else if (param_5 == 1) {
      func_0x00010be0df20(param_1,param_2,param_3);
    }
  }
  else if (param_5 == 2) {
    func_0x00010be75900(param_1,param_2,param_3,uVar2);
  }
  else if (param_5 == 3) {
    func_0x00010bddebe0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106579e4c; end: 106579fb7; -[SCChatInputStackView _indexForNewInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106579e4c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             ulong param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
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
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = (long)_DAT_11274a9d0;
  lVar9 = *(long *)(param_4 + lVar11);
  _objc_retain(lVar9);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  lVar1 = lVar9;
  func_0x00010bf52a60(lVar9,param_5,puVar6,puVar7,0x10);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    puVar3 = (undefined *)0x0;
    do {
      lVar8 = 0;
      puVar4 = puVar3 + lVar1;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(ulong *)(lStack_128 + lVar8 * 8);
        uVar2 = param_6;
        func_0x00010c08df40();
        func_0x00010c08df40();
        if (uVar10 <= uVar2) {
          _objc_release(lVar9);
          goto LAB_106579f70;
        }
        puVar3 = puVar3 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      lVar1 = lVar9;
      func_0x00010bf52a60(lVar9,param_5,puVar6,puVar7,0x10);
      puVar3 = puVar4;
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  puVar3 = *(undefined **)(param_4 + lVar11);
  func_0x00010bf529e0(puVar3);
LAB_106579f70:
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010c066580(param_6,param_5,puVar6,puVar7);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110e41f98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf20c00(puVar6);
  func_0x00010c0df720(param_3 * 0.5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar4,param_5,puVar3);
  _objc_release(puVar3);
  func_0x00010c216920(puVar4,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6430);
  func_0x00010c192d40(0x3fc3333333333333,puVar4);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar4,param_5,puVar3);
  _objc_release(puVar3);
  puVar5 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c08c0e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c1842e0(0,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 106579fb8; end: 10657a113; -[SCChatInputStackView _circularMaskItem:atIndex:] */

void FUN_106579fb8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c066580(param_4,param_5,param_6,param_7);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_5,
                      &PTR____CFConstantStringClassReference_110e41f98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf20c00(param_6);
  func_0x00010c0df720(param_3 * 0.5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  func_0x00010c216920(puVar1,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6430);
  func_0x00010c192d40(0x3fc3333333333333,puVar1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_5,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_5,puVar2);
  _objc_release(puVar2);
  uVar3 = param_6;
  func_0x00010c08c0e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c08c0e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1842e0(0,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10657a114; end: 10657a1cf; -[SCChatInputStackView _fadeInItem:atIndex:] */

void FUN_10657a114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_3);
  func_0x00010c066580(param_1,param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10657a1d0;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fc3333333333333,puVar1,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10657a1d0; end: 10657a1db;  */

void FUN_10657a1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10657a1dc; end: 10657a2af; -[SCChatInputStackView _fadeOutItem:] */

void FUN_10657a1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10657a2b0;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10657a2bc;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc3333333333333,puVar2,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10657a2b0; end: 10657a2c3;  */

void FUN_10657a2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10657a2c4; end: 10657a3b7; -[SCChatInputStackView _popInItem:atIndex:] */

void FUN_10657a2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1677c0(0,param_3);
  uStack_58 = 0;
  uStack_60 = 0x3fe6666666666666;
  uStack_48 = 0x3fe6666666666666;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010c219960(param_3,param_2,&uStack_60);
  func_0x00010c066580(param_1,param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10657a3b8;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe0000000000000,0x3ff0000000000000,puVar1,param_2,
                      0x20000,&puStack_88,0);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10657a3b8; end: 10657a40b;  */

void FUN_10657a3b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 10657a40c; end: 10657a41b; -[SCChatInputStackView _popOutItem:] */

void FUN_10657a40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be75930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd3333333333333,param_1,PTR_s__popOutItem_duration_completion__11257afe8,param_3,0);
  return;
}



/* Entry: 10657a41c; end: 10657a51b; -[SCChatInputStackView _popOutItem:duration:completion:] */

void FUN_10657a41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10657a51c;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_4);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10657a570;
  puStack_80 = &UNK_110858070;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf03440(param_1,0,puVar2,param_3,0x20000,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10657a51c; end: 10657a5b3;  */

void FUN_10657a51c(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  uStack_48 = 0;
  uStack_50 = 0x3fe6666666666666;
  uStack_38 = 0x3fe6666666666666;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 10657a5b4; end: 10657a77b; -[SCChatInputStackView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10657a5b4(double param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined1 *param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  puVar4 = &uStack_150;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_100 = PTR_PTR_1126f1c10;
  plVar1 = &lStack_108;
  puVar7 = param_5;
  lStack_108 = param_3;
  _objc_msgSendSuper2(param_1,param_2,plVar1,PTR_s_pointInside_withEvent__11261e4e8);
  if (((ulong)plVar1 & 1) == 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar6 = *plStack_140;
      do {
        lVar11 = 0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          uVar9 = *(ulong *)(lStack_148 + lVar11 * 8);
          dVar12 = param_1;
          uVar14 = param_2;
          func_0x00010bf51200(param_1,param_2,uVar9);
          uVar2 = uVar9;
          dVar13 = dVar12;
          func_0x00010c074c20();
          if (((((uVar2 & 1) == 0) && (uVar2 = uVar9, func_0x00010c082800(), (int)uVar2 != 0)) &&
              (func_0x00010bf01b40(uVar9), 0.0 < dVar13)) &&
             (puVar4 = (undefined8 *)param_5, func_0x00010c102b20(dVar12,uVar14), (uVar9 & 1) != 0))
          {
            puVar8 = (undefined1 *)0x1;
            goto LAB_10657a728;
          }
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = param_3;
        puVar4 = &uStack_150;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    puVar8 = (undefined1 *)0x0;
LAB_10657a728:
    _objc_release(param_3);
  }
  else {
    puVar8 = (undefined1 *)0x1;
    puVar4 = (undefined8 *)puVar7;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_270;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  func_0x00010bf137c0();
  if (puVar7 == (undefined1 *)0x0) {
    lVar6 = (long)_DAT_11274a9d0;
    lVar3 = *(long *)(param_5 + lVar6);
    func_0x00010bf529e0();
    puVar7 = (undefined1 *)0x0;
    if (lVar3 != 0) {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      puVar7 = *(undefined1 **)(param_5 + lVar6);
      _objc_retain(puVar7);
      puVar8 = puVar7;
      func_0x00010bf52a60();
      if (puVar8 != (undefined1 *)0x0) {
        lVar3 = *plStack_260;
        do {
          puVar10 = (undefined1 *)0x0;
          do {
            if (*plStack_260 != lVar3) {
              _objc_enumerationMutation(puVar7);
            }
            uVar9 = *(ulong *)(lStack_268 + (long)puVar10 * 8);
            uVar2 = uVar9;
            func_0x00010c06eb60();
            if ((uVar2 & 1) == 0) {
              func_0x00010c08de00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08de00();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar9;
              func_0x00010bf49460();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_5);
              _objc_release(uVar9);
              func_0x00010c1e3380(0x447a0000,uVar2);
              puVar5 = (undefined8 *)0x1;
              func_0x00010c162480(uVar2);
              _objc_release(uVar2);
              goto LAB_10657a8d4;
            }
            puVar10 = puVar10 + 1;
          } while (puVar8 != puVar10);
          puVar8 = puVar7;
          puVar5 = &uStack_270;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined1 *)0x0);
      }
LAB_10657a8d4:
      _objc_release();
      puVar4 = puVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar3 = (long)_DAT_11274a9d0;
  _objc_retain(puVar4);
  puVar8 = *(undefined1 **)(puVar7 + lVar3);
  *(undefined8 **)(puVar7 + lVar3) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 10657a77c; end: 10657a913; -[SCChatInputStackView configureInputItemConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657a77c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_1;
  func_0x00010bf137c0();
  if (lVar6 == 0) {
    lVar5 = (long)_DAT_11274a9d0;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010bf529e0();
    lVar6 = 0;
    if (lVar1 != 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      lVar6 = *(long *)(param_1 + lVar5);
      _objc_retain(lVar6);
      lVar1 = lVar6;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar5 = *plStack_110;
        do {
          lVar8 = 0;
          do {
            if (*plStack_110 != lVar5) {
              _objc_enumerationMutation(lVar6);
            }
            uVar7 = *(ulong *)(lStack_118 + lVar8 * 8);
            uVar2 = uVar7;
            func_0x00010c06eb60();
            if ((uVar2 & 1) == 0) {
              func_0x00010c08de00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08de00();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar7;
              func_0x00010bf49460(uVar7,param_2,param_1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(uVar7);
              func_0x00010c1e3380(0x447a0000,uVar2);
              puVar4 = (undefined8 *)0x1;
              func_0x00010c162480(uVar2);
              _objc_release(uVar2);
              goto LAB_10657a8d4;
            }
            lVar8 = lVar8 + 1;
          } while (lVar1 != lVar8);
          lVar1 = lVar6;
          puVar4 = &uStack_120;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
LAB_10657a8d4:
      _objc_release();
      param_3 = (undefined1 *)puVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = (long)_DAT_11274a9d0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(lVar6 + lVar1);
    *(undefined1 **)(lVar6 + lVar1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10657a914; end: 10657a953; -[SCChatInputStackView setInputItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657a914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a9d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657a954; end: 10657a967; -[SCChatInputStackView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657a954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a9d0,0);
  return;
}



/* Entry: 10657a968; end: 10657a977; -[SCChatInputStackViewPlaceholderView intrinsicContentSize] */

undefined1  [16] FUN_10657a968(void)

{
  return ZEXT816(0x4041000000000000) << 0x40;
}



/* Entry: 10657a978; end: 10657a9f7; -[SCChatInputSubmenuView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10657a978(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1c18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beafe60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a9d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a9d4) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274a9d8) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10657a9f8; end: 10657aaa7; -[SCChatInputSubmenuView _setupStackView] */

void FUN_10657a9f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c219b60(param_1,param_2,0);
  func_0x00010c21e900(param_1,param_2,1);
  func_0x00010c1677c0(0,param_1);
  func_0x00010c1a7f60(param_1,param_2,1);
  func_0x00010c16e060(param_1,param_2,1);
  func_0x00010c166c00(param_1,param_2,4);
  func_0x00010c190b80(param_1,param_2,3);
  func_0x00010c207380(0x4020000000000000,param_1);
  func_0x00010c1b9ba0(param_1,param_2,0);
  func_0x00010c1e1600(param_1,param_2,0);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10657aaa8; end: 10657ab23; -[SCChatInputSubmenuView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10657aaa8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar3 = (long)_DAT_11274a9d4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    dVar4 = 0.0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + lVar3);
    func_0x00010bf529e0(uVar2);
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bf529e0(lVar1);
    dVar4 = (double)(lVar1 - 1) * 8.0 + (double)uVar2 * 32.0;
  }
  auVar5._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar5._8_8_ = dVar4;
  return auVar5;
}



/* Entry: 10657ab24; end: 10657ab43; -[SCChatInputSubmenuView inputItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ab24(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_11274a9d4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657ab44; end: 10657abc7; -[SCChatInputSubmenuView addInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ab44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bde5200(param_1,param_2,param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11274a9d4),param_2,param_3);
  func_0x00010bef6d60(param_1,param_2,param_3);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010bdcae00(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657abc8; end: 10657ac63; -[SCChatInputSubmenuView insertPrioritizedInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657abc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be38b20(param_1,param_2,param_3);
  func_0x00010bde5200(param_1,param_2,param_3);
  func_0x00010c066b00(*(undefined8 *)(param_1 + _DAT_11274a9d4),param_2,param_3,lVar1);
  func_0x00010c066580(param_1,param_2,param_3,lVar1);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010bdcae00(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657ac64; end: 10657acef; -[SCChatInputSubmenuView prependInputItem:animationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657ac64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bde5200(param_1,param_2,param_3);
  func_0x00010c066b00(*(undefined8 *)(param_1 + _DAT_11274a9d4),param_2,param_3,0);
  func_0x00010c066580(param_1,param_2,param_3,0);
  func_0x00010c069fa0(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010bdcae00(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657acf0; end: 10657aebf; -[SCChatInputSubmenuView collapseInputItems:withCollapseAnimation:excludingInputItemWithIdentifier:] */

/* WARNING: Possible PIC construction at 0x00010657ae40: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657acf0(long param_1,undefined8 param_2,uint param_3,int param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar6 = *(long *)(param_1 + _DAT_11274a9d4);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar6);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
      uVar9 = 0;
      if (*(char *)(param_5 + 0x28) == '\0') {
        uVar9 = 0x3ff0000000000000;
      }
      func_0x00010c1677c0(uVar9,*(undefined8 *)(param_5 + 0x20));
      uVar4 = (uint)*(byte *)(param_5 + 0x28);
      uVar7 = *(undefined8 *)(param_5 + 0x20);
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_setHidden__1126479f8,uVar4);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar9 = uVar7;
      func_0x00010bfa2fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c0720c0();
      uVar4 = param_3 ^ (uint)uVar3;
      _objc_release(uVar9);
      if (param_4 == 0) {
        uVar9 = 0;
        if (uVar4 == 0) {
          uVar9 = 0x3ff0000000000000;
        }
        func_0x00010c1677c0(uVar9,uVar7);
        goto code_r0x00010c1a7f60;
      }
      func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10657aec0; end: 10657aeff;  */

void FUN_10657aec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10657af00; end: 10657b06f; -[SCChatInputSubmenuView showSubmenuAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657af00(long param_1,undefined8 param_2,int param_3)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + _DAT_11274a9d8) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274a9d8) = 1;
    func_0x00010c1a7f60(param_1,param_2,0);
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
    func_0x00010c0699c0(param_1);
    _CGAffineTransformMakeTranslation(&uStack_50,0);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(param_1,param_2,&uStack_80);
    func_0x00010c1677c0(0,param_1);
    if (param_3 == 0) {
      func_0x00010c1677c0(0x3ff0000000000000,param_1);
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960(param_1,param_2,&uStack_80);
    }
    else {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x10657b01c;
      puStack_90 = &UNK_110842e18;
      lStack_88 = param_1;
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                          &puStack_a8,0);
    }
  }
  return;
}



/* Entry: 10657b070; end: 10657b1bf; -[SCChatInputSubmenuView hideSubmenuAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657b070(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_3 + _DAT_11274a9d8) == '\x01') {
    *(undefined1 *)(param_3 + _DAT_11274a9d8) = 0;
    if (param_5 == 0) {
      func_0x00010c1677c0(0,param_3);
      func_0x00010c1a7f60(param_3,param_4,1);
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960(param_3,param_4,&uStack_b0);
    }
    else {
      func_0x00010c0699c0(param_3);
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x10657b164;
      puStack_38 = &UNK_110848c48;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10657b1c0;
      puStack_60 = &UNK_110841f20;
      lStack_58 = param_3;
      lStack_30 = param_3;
      uStack_28 = param_2;
      func_0x00010bf03420(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_50,
                          &puStack_78);
    }
  }
  return;
}



/* Entry: 10657b1c0; end: 10657b1d3;  */

void FUN_10657b1c0(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 10657b1d4; end: 10657b3bb; -[SCChatInputSubmenuView _requiredWidthForButton:] */

long FUN_10657b1d4(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  ppuVar4 = param_4;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar4);
  dVar9 = 0.0;
  dVar8 = 0.0;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar4 = param_4;
    func_0x00010bfe90c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    dVar7 = param_1;
    _objc_release(ppuVar4);
    dVar8 = param_1;
    if (param_1 <= 0.0) {
      ppuVar4 = param_4;
      func_0x00010bfe90c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      dVar8 = dVar7;
    }
  }
  ppuVar5 = param_4;
  func_0x00010c2713e0(param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar4 = ppuVar5;
  }
  _objc_retain(ppuVar4);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  _objc_release(ppuVar4);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d6a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,
                        *(undefined8 *)PTR__UIFontTextStyleSubheadline_110345c10);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_4;
    func_0x00010c271420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar4);
    ppuVar4 = param_4;
    func_0x00010c271420(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x7fefffffffffffff,0x4040000000000000);
    _objc_release(ppuVar4);
    dVar9 = (double)(long)dVar9;
    _objc_release(puVar6);
  }
  dVar7 = dVar8 + dVar9 + 28.0;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < dVar9) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar8)) {
      bVar1 = dVar8 < 0.0;
      bVar2 = dVar8 == 0.0;
      bVar3 = false;
    }
  }
  dVar8 = dVar7 + 4.0;
  if (bVar2 || bVar1 != bVar3) {
    dVar8 = dVar7;
  }
  _objc_release(param_4);
  return (long)dVar8;
}



/* Entry: 10657b3bc; end: 10657b597; -[SCChatInputSubmenuView _configureInputItem:] */

void FUN_10657b3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  uVar9 = 0x447a0000;
  func_0x00010c181cc0(0x447a0000,param_3,param_2,0);
  func_0x00010c181f00(param_3,param_2,0);
  func_0x00010bec5a80(param_1,param_2,param_3);
  uVar1 = param_3;
  func_0x00010c25ec60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(param_3,param_2,uVar1,0);
  func_0x00010c216260(param_3,param_2,uVar1,1);
  func_0x00010c216260(param_3,param_2,uVar1,4);
  func_0x00010be91e60(param_1,param_2,param_3);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  uStack_78 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bf494e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010beef8c0(puVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  uVar2 = 0x2d;
  if (lRam00000001138466f0 < 3) {
    uVar2 = 0x66;
  }
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar8,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c08c0e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar7);
  func_0x00010c182ae0(puVar8,param_2,0);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar8,param_2,puVar7,0);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar8,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d6a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      *(undefined8 *)PTR__UIFontTextStyleSubheadline_110345c10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar8;
  func_0x00010c271420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c271420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c271420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c271420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c271420(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f00(0x447a0000);
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010bfe90c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(puVar7);
  func_0x00010be6ed00(uVar1,param_2,puVar8);
  func_0x00010bde5240(uVar1,param_2,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10657b598; end: 10657b7d3; -[SCChatInputSubmenuView _styleSubmenuButton:] */

void FUN_10657b598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = 0x2d;
  if (lRam00000001138466f0 < 3) {
    uVar2 = 0x66;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  func_0x00010c182ae0(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(param_3,param_2,puVar1,0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d6a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      *(undefined8 *)PTR__UIFontTextStyleSubheadline_110345c10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f00(0x447a0000);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar2);
  func_0x00010be6ed00(param_1,param_2,param_3);
  func_0x00010bde5240(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657b7d4; end: 10657b9df; -[SCChatInputSubmenuView _overrideIconColorToMatchText:] */

void FUN_10657b7d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_1111809e0;
  func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_1111809e0,param_2,&uStack_130,auStack_f0,
                      0x10);
  if (ppuVar5 != (undefined **)0x0) {
    lVar12 = *plStack_120;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_1111809e0);
        }
        lVar6 = *(long *)(lStack_128 + (long)ppuVar11 * 8);
        func_0x00010c2827c0();
        lVar7 = param_3;
        func_0x00010bfe7940(param_3,param_2,lVar6);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          func_0x00010bfe9720(lVar7,param_2,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9fc0(param_3,param_2,lVar8,lVar6);
          if (lVar6 == 4) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110e54198;
LAB_10657b910:
            func_0x00010c220220(param_3,param_2,lVar8,ppuVar10);
          }
          else if (lVar6 == 0) {
            func_0x00010c220220(param_3,param_2,lVar8,
                                &PTR____CFConstantStringClassReference_110db6dd8);
            ppuVar10 = &PTR____CFConstantStringClassReference_110e541b8;
            goto LAB_10657b910;
          }
          _objc_release(lVar8);
        }
        func_0x00010c216380(param_3,param_2,puVar4,lVar6);
        _objc_release(lVar7);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar5 != ppuVar11);
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_1111809e0;
      func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_1111809e0,param_2,&uStack_130,
                          auStack_f0,0x10);
    } while (ppuVar5 != (undefined **)0x0);
  }
  func_0x00010c216160(param_3,param_2,puVar4);
  lVar12 = param_3;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c216160();
  _objc_release(lVar12);
  _objc_release(puVar4);
  _objc_release();
  iVar3 = (int)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  func_0x00010b8166c0();
  bVar2 = iVar3 == 0;
  uVar13 = 0x4030000000000000;
  if (bVar2) {
    uVar13 = 0x4028000000000000;
  }
  uVar14 = 0x4028000000000000;
  if (bVar2) {
    uVar14 = 0x4030000000000000;
  }
  uVar15 = 0;
  if (bVar2) {
    uVar15 = 0x4010000000000000;
  }
  uVar16 = 0x4010000000000000;
  if (bVar2) {
    uVar16 = 0;
  }
  uVar1 = 1;
  if (!bVar2) {
    uVar1 = 2;
  }
  func_0x00010c181e40(0x4018000000000000,uVar13,0x4018000000000000,uVar14,puVar9);
  func_0x00010c2163a0(0,uVar15,0,uVar16,puVar9);
  func_0x00010c1aa240(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar9);
  func_0x00010c181ee0(puVar9,param_2,uVar1);
  puVar4 = puVar9;
  func_0x00010c271420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(puVar4);
  puVar4 = puVar9;
  func_0x00010c271420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c1bdb00(puVar4,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10657b9e0; end: 10657baef; -[SCChatInputSubmenuView _configureLayoutForButton:] */

void FUN_10657b9e0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010b8166c0();
  bVar2 = param_1 == 0;
  uVar3 = 0x4030000000000000;
  if (bVar2) {
    uVar3 = 0x4028000000000000;
  }
  uVar4 = 0x4028000000000000;
  if (bVar2) {
    uVar4 = 0x4030000000000000;
  }
  uVar5 = 0;
  if (bVar2) {
    uVar5 = 0x4010000000000000;
  }
  uVar6 = 0x4010000000000000;
  if (bVar2) {
    uVar6 = 0;
  }
  uVar1 = 1;
  if (!bVar2) {
    uVar1 = 2;
  }
  func_0x00010c181e40(0x4018000000000000,uVar3,0x4018000000000000,uVar4,param_3);
  func_0x00010c2163a0(0,uVar5,0,uVar6,param_3);
  func_0x00010c1aa240(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_3);
  func_0x00010c181ee0(param_3,param_2,uVar1);
  uVar3 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1bdb00(uVar3,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10657baf0; end: 10657bc5b; -[SCChatInputSubmenuView _indexForNewInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10657baf0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = (long)_DAT_11274a9d4;
  lVar8 = *(long *)(param_1 + lVar10);
  lStack_138 = param_1;
  _objc_retain(lVar8);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  lVar3 = lVar8;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    puVar5 = (undefined8 *)0x0;
    do {
      param_1 = 0;
      puVar1 = (undefined8 *)(lVar3 + (long)puVar5);
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(ulong *)(lStack_128 + param_1 * 8);
        uVar4 = param_3;
        func_0x00010c08df40();
        func_0x00010c08df40();
        if (uVar9 <= uVar4) {
          _objc_release(lVar8);
          goto LAB_10657bc14;
        }
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        param_1 = param_1 + 1;
      } while (lVar3 != param_1);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      puVar5 = puVar1;
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  puVar5 = *(undefined8 **)(lStack_138 + lVar10);
  func_0x00010bf529e0(puVar5);
LAB_10657bc14:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10657bc5c;
  lStack_160 = param_1;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  if (puVar7 == (undefined1 *)0x2) {
    _CGAffineTransformMakeScale(&uStack_1b8,0x3fb999999999999a,0x3fb999999999999a);
    uStack_1e8 = uStack_1b0;
    uStack_1f0 = uStack_1b8;
    uStack_1d8 = uStack_1a0;
    uStack_1e0 = uStack_1a8;
    uStack_1c8 = uStack_190;
    uStack_1d0 = uStack_198;
    func_0x00010c219960(puVar6,param_2,&uStack_1f0);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_10657bdc0;
    puStack_200 = &UNK_110842e18;
    _objc_retain(puVar6);
    puStack_1f8 = puVar6;
    func_0x00010bf03460(0x3fd3333333333333,0,0x3fe6666666666666,0x3fe0000000000000,puVar2,param_2,
                        0x20000,&puStack_218,0);
    puVar5 = puStack_1f8;
  }
  else {
    if (puVar7 != (undefined1 *)0x1) goto LAB_10657bd9c;
    func_0x00010c1677c0(0,puVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_10657bdb4;
    puStack_170 = &UNK_110842e18;
    _objc_retain(puVar6);
    puStack_168 = puVar6;
    func_0x00010bf03400(0x3fc3333333333333,puVar2,param_2,&puStack_188);
    puVar5 = puStack_168;
  }
  _objc_release(puVar5);
LAB_10657bd9c:
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 10657bc5c; end: 10657bdb3; -[SCChatInputSubmenuView _animateItemAddition:animationStyle:] */

void FUN_10657bc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
    _CGAffineTransformMakeScale(&uStack_78,0x3fb999999999999a,0x3fb999999999999a);
    uStack_a8 = uStack_70;
    uStack_b0 = uStack_78;
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_88 = uStack_50;
    uStack_90 = uStack_58;
    func_0x00010c219960(param_3,param_2,&uStack_b0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10657bdc0;
    puStack_c0 = &UNK_110842e18;
    _objc_retain(param_3);
    uStack_b8 = param_3;
    func_0x00010bf03460(0x3fd3333333333333,0,0x3fe6666666666666,0x3fe0000000000000,puVar1,param_2,
                        0x20000,&puStack_d8,0);
    uVar2 = uStack_b8;
  }
  else {
    if (param_4 != 1) goto LAB_10657bd9c;
    func_0x00010c1677c0(0,param_3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10657bdb4;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010bf03400(0x3fc3333333333333,puVar1,param_2,&puStack_48);
    uVar2 = uStack_28;
  }
  _objc_release(uVar2);
LAB_10657bd9c:
  _objc_release(param_3);
  return;
}



/* Entry: 10657bdb4; end: 10657bdbf;  */

void FUN_10657bdb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10657bdc0; end: 10657bdfb;  */

void FUN_10657bdc0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 10657bdfc; end: 10657be3b; -[SCChatInputSubmenuView setInputItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657bdfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a9d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657be3c; end: 10657be4b; -[SCChatInputSubmenuView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10657be3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a9d8);
}



/* Entry: 10657be4c; end: 10657be5f; -[SCChatInputSubmenuView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657be4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a9d4,0);
  return;
}



/* Entry: 10657be60; end: 10657beeb; -[SCChatInputTextView initWithMessagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10657be60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1c20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274a9dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010beb1160(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10657beec; end: 10657bfb7; -[SCChatInputTextView _setupView] */

void FUN_10657beec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbc0(0);
  _objc_release(uVar1);
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1);
  func_0x00010c1f7b20(param_1);
  func_0x00010c1edbe0(param_1);
  func_0x00010c167580(param_1);
  func_0x00010c181fc0(param_1);
  func_0x00010c1ad9a0(param_1);
  func_0x00010c216140(param_1);
  uVar1 = param_1;
  func_0x00010c26ba00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110e541f8);
  return;
}



/* Entry: 10657bfb8; end: 10657c037; -[SCChatInputTextView layoutSubviews] */

void FUN_10657bfb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1c20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010c065660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c1ad180(param_1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10657c038; end: 10657c03b; -[SCChatInputTextView setCursorColor:] */

void FUN_10657c038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTintColor__112663280);
  return;
}



/* Entry: 10657c03c; end: 10657c117; -[SCChatInputTextView setTintColor:] */

void FUN_10657c03c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1126f1c20;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_setTintColor__112663280,param_3);
    func_0x00010c073040();
    if ((int)param_1 != 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10657c118; end: 10657c13f;  */

void FUN_10657c118(long param_1)

{
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 10657c140; end: 10657c143; -[SCChatInputTextView cursorColor] */

void FUN_10657c140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tintColor_112679df0);
  return;
}



/* Entry: 10657c144; end: 10657c1cb; -[SCChatInputTextView cursorPosition] */

undefined8 FUN_10657c144(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15a1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(param_1,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10657c1cc; end: 10657c1d3; -[SCChatInputTextView setCursorPosition:] */

void FUN_10657c1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectedRange__11265c768,param_3,0);
  return;
}



/* Entry: 10657c1d4; end: 10657c247; -[SCChatInputTextView cleansedText] */

void FUN_10657c1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf0e2a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10657c248; end: 10657c2db; -[SCChatInputTextView clearText] */

void FUN_10657c248(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c139ac0();
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c212f20(param_1,param_2,0);
    func_0x00010c23d620(param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26cb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10657c2dc; end: 10657c403; -[SCChatInputTextView resetTypingAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657c2dc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)(param_1 + _DAT_11274a9e0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
  }
  puVar4 = *(undefined **)(param_1 + _DAT_11274a9e4);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
  }
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_48 = puVar3;
  puStack_40 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c21ade0(param_1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10657c404;
  puVar1 = puVar4;
  puStack_80 = param_1;
  puStack_78 = puVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c086bc0();
  if (puVar2 != puVar1) {
    puStack_88 = PTR_PTR_1126f1c20;
    puStack_90 = puVar4;
    _objc_msgSendSuper2(&puStack_90,PTR_s_setKeyboardAppearance__11264b590,puVar2);
    func_0x00010c073040();
    if ((int)puVar4 != 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
  return;
}



/* Entry: 10657c404; end: 10657c4cb; -[SCChatInputTextView setKeyboardAppearance:] */

void FUN_10657c404(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010c086bc0();
  if (param_3 != lVar1) {
    puStack_28 = PTR_PTR_1126f1c20;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setKeyboardAppearance__11264b590,param_3);
    func_0x00010c073040();
    if ((int)param_1 != 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
  return;
}



/* Entry: 10657c4cc; end: 10657c6f3; -[SCChatInputTextView paste:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657c4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfd79e0();
  puVar4 = puVar1;
  if ((int)puVar3 == 0) {
    puVar3 = puVar1;
    func_0x00010bfd7a00();
    if ((int)puVar3 != 0) {
      func_0x00010bfe0620(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10657c55c;
    }
    puVar3 = puVar1;
    func_0x00010bfd7780();
    if ((int)puVar3 == 0) {
      puVar3 = puVar1;
      func_0x00010bfde400();
      if ((int)puVar3 != 0) {
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) goto LAB_10657c578;
        param_1 = param_1 + _DAT_11274a9e8;
        _objc_loadWeakRetained(param_1);
        puVar3 = puVar2;
        func_0x00010bfb1920(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0660a0(param_1);
        _objc_release(puVar3);
        goto LAB_10657c65c;
      }
      puVar3 = puVar1;
      func_0x00010bfd7de0();
      if ((int)puVar3 == 0) {
        func_0x00010c167580(param_1);
        puStack_58 = PTR_PTR_1126f1c20;
        lStack_60 = param_1;
        _objc_msgSendSuper2(&lStack_60,PTR_s_paste__11252ff78,param_3);
        func_0x00010c167580(param_1);
        goto LAB_10657c578;
      }
      puVar3 = puVar1;
      func_0x00010bfe9920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010be2aa60(param_1);
    }
    else {
      func_0x00010bfcc8a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) goto LAB_10657c578;
      param_1 = param_1 + _DAT_11274a9e8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c066040();
LAB_10657c65c:
      _objc_release(param_1);
    }
  }
  else {
    func_0x00010bfe0600(puVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_10657c55c:
    func_0x00010be2aa60(param_1);
  }
  _objc_release(puVar4);
LAB_10657c578:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10657c6f4; end: 10657c78f; -[SCChatInputTextView _handleImagePaste:contentTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657c6f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_4;
    func_0x00010bf4b900(param_4,param_2,&PTR____CFConstantStringClassReference_110e541d8);
    param_1 = param_1 + _DAT_11274a9e8;
    _objc_loadWeakRetained(param_1);
    if ((int)uVar1 == 0) {
      func_0x00010c066060();
    }
    else {
      func_0x00010c066080();
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10657c790; end: 10657c7fb; -[SCChatInputTextView _canPasteImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10657c790(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfd7de0();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + _DAT_11274a9e8;
    _objc_loadWeakRetained(param_1);
    bVar1 = param_1 != 0;
    _objc_release();
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10657c7fc; end: 10657c85b; -[SCChatInputTextView _canPasteText] */

bool FUN_10657c7fc(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdcd60();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c159e80(param_1);
    bVar1 = param_2 == 0;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10657c85c; end: 10657c8c7; -[SCChatInputTextView _canPasteVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10657c85c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfde400();
  if ((int)puVar3 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = param_1 + _DAT_11274a9e8;
    _objc_loadWeakRetained(param_1);
    bVar1 = param_1 != 0;
    _objc_release();
  }
  _objc_release(puVar2);
  return bVar1;
}


