/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f69f2c; end: 105f69f67; -[SCMemoriesPickerV2ViewController onGrantCameraRollAccessButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69f2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b320);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f69f68; end: 105f69f77; -[SCMemoriesPickerV2ViewController onItemsSelectedWithItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b2f0),PTR_s_onItemsSelectedWithItems__112616cd8);
  return;
}



/* Entry: 105f69f78; end: 105f69f87; -[SCMemoriesPickerV2ViewController onItemClickedWithItem:thumbnailCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b2f0),
             PTR_s_onItemClickedWithItem_thumbnailC_112616cc0);
  return;
}



/* Entry: 105f69f88; end: 105f6a07f; -[SCMemoriesPickerV2ViewController onCameraRollAlbumClickedWithCameraRollAlbumId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126c66e8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_11273b2ec);
  func_0x00010bf01660();
  func_0x00010bf01380();
  func_0x00010c041f00(puVar2,param_2,param_1,param_1,puVar3,param_3,0,0,uVar1);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273b310),param_2,puVar2);
  func_0x00010c0e2cc0(*(undefined8 *)(param_1 + _DAT_11273b2f0),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f6a080; end: 105f6a147; -[SCMemoriesPickerV2ViewController onTrimItemTappedWithItem:selectedItems:remainingDurationMs:disallowDurationChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    func_0x00010bf1f3c0(param_6);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b2f0);
  func_0x00010c0e7340(uVar1,param_2,param_3,param_5,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f6a148; end: 105f6a1a3; -[SCMemoriesPickerV2ViewController onItemsSelectionChangedWithItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a148(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273b2f0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onItemsSelectionChangedWithItems_112616ce0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0e4b20(*(undefined8 *)(param_1 + lVar2));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f6a1a4; end: 105f6a1eb; -[SCMemoriesPickerV2ViewController onCameraIconClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a1a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b2f0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onCameraIconClicked_112616518);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_onCameraIconClicked_112616518);
    return;
  }
  return;
}



/* Entry: 105f6a1ec; end: 105f6a233; -[SCMemoriesPickerV2ViewController onSkipPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a1ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b2f0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onSkipPressed_112617408);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_onSkipPressed_112617408);
    return;
  }
  return;
}



/* Entry: 105f6a234; end: 105f6a29b; -[SCMemoriesPickerV2ViewController emptyStateController:didUpdateAuthorizationStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273b338;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010bdf5960(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105f6a29c; end: 105f6a317; -[SCMemoriesPickerV2ViewController cameraRollAlbumPickerViewWillDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273b310;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c1fae60(*(undefined8 *)(param_1 + _DAT_11273b2fc),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f6a318; end: 105f6a31b; -[SCMemoriesPickerV2ViewController didSelectCameraRollAlbumPill:] */

void FUN_105f6a318(void)

{
  return;
}



/* Entry: 105f6a31c; end: 105f6a31f; -[SCMemoriesPickerV2ViewController willAlbumPillsViewBeginScrolling] */

void FUN_105f6a31c(void)

{
  return;
}



/* Entry: 105f6a320; end: 105f6a323; -[SCMemoriesPickerV2ViewController didAlbumPillsViewFinishScrolling] */

void FUN_105f6a320(void)

{
  return;
}



/* Entry: 105f6a324; end: 105f6a327; -[SCMemoriesPickerV2ViewController showAlbumPicker] */

void FUN_105f6a324(void)

{
  return;
}



/* Entry: 105f6a328; end: 105f6a32f; -[SCMemoriesPickerV2ViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105f6a328(void)

{
  return 0;
}



/* Entry: 105f6a330; end: 105f6a33b; -[SCMemoriesPickerV2ViewController pushToValdiMarshaller:] */

undefined8 FUN_105f6a330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df028;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105f6a33c; end: 105f6a6ef; -[SCMemoriesPickerV2ViewController _loadContentViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a33c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar12 = (long)_DAT_11273b338;
  if (*(long *)(param_1 + lVar12) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273b2f4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    lVar4 = param_1;
    func_0x00010bdf5960(param_1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c66f0;
    _objc_alloc(PTR_PTR_1126c66f0);
    func_0x00010bff01a0();
    if (*(long *)(param_1 + _DAT_11273b300) != 0) {
      func_0x00010c1c6620(puVar3);
      puVar5 = PTR_PTR_1126c66f8;
      puVar6 = PTR_PTR_1126bf9b8;
      puVar1 = PTR_PTR_1126aeec0;
      puVar7 = PTR_PTR_1126ae960;
      uVar13 = *(undefined8 *)(param_1 + _DAT_11273b328);
      _objc_retain(uVar13);
      func_0x00010bfbec60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27ebc0(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c7a60(puVar7,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae970;
      func_0x00010c292920(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105f6a6f0;
      puStack_70 = &UNK_110841f20;
      uStack_68 = uVar13;
      func_0x00010bf0caa0(puVar1,param_2,puVar7,puVar8,0,&puStack_88);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar13);
    }
    func_0x00010c169820(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_11273b304));
    func_0x00010c194880(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_11273b308));
    if (*(long *)(param_1 + _DAT_11273b31c) != 0) {
      func_0x00010c1df000(puVar3);
    }
    puVar7 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar13 = *(undefined8 *)(param_1 + _DAT_11273b33c);
    *(undefined **)(param_1 + _DAT_11273b33c) = puVar7;
    _objc_release(uVar13);
    lVar14 = (long)_DAT_11273b30c;
    uVar9 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010beff660(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar9);
    func_0x00010c166b20(puVar3,param_2,uVar10);
    uVar11 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c0dc680(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar13;
    func_0x00010c0b75e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce4c0(puVar3,param_2,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(uVar11);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar13 = *(undefined8 *)(param_1 + _DAT_11273b2ec);
    func_0x00010c230d80(uVar13);
    func_0x00010c0df6e0(puVar7,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2007a0(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    if (*(long *)(param_1 + _DAT_11273b330) != 0) {
      func_0x00010c19ae40(puVar3);
    }
    puVar7 = PTR_PTR_1126c6700;
    _objc_alloc();
    func_0x00010c061d40();
    uVar13 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar7;
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105f6a6f0; end: 105f6a723;  */

void FUN_105f6a6f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf011a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f6a724; end: 105f6ae03; -[SCMemoriesPickerV2ViewController _createViewModelWithAuthorizationStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6a724(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11273b2ec;
  if (*(long *)(param_1 + _DAT_11273b31c) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01660(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01380(uVar4);
    lVar9 = param_1;
    func_0x00010bdf47e0(param_1,param_2,3,uVar3,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar9);
    _objc_release(lVar9);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x00010c23a060();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01660(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01380(uVar4);
    lVar9 = param_1;
    func_0x00010bdf47e0(param_1,param_2,2,uVar3,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar9);
    _objc_release(lVar9);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x00010c236680();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01660(uVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf01380(uVar5);
    uVar6 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf2a7a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c296cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bdf47e0(param_1,param_2,1,uVar4,uVar5,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar9);
    _objc_release(lVar9);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  puVar7 = PTR_PTR_1126c6708;
  _objc_alloc(PTR_PTR_1126c6708);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf012a0(uVar3);
  func_0x00010c0503a0(puVar7,param_2,PTR____NSArray0__struct_11034ab48,uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2711a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7a60(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c260dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7a20(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c211540(puVar7,param_2,puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c299dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2215a0(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c239c60(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201f80(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  if (param_3 - 1U < 4) {
    uVar11 = *(undefined4 *)(&UNK_10ddd1b90 + (param_3 - 1U) * 4);
  }
  else {
    uVar11 = 1;
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16ca40(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010beedd80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1616c0(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c22ed60(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e720(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c233460(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2018a0(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c235b80(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201640(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c235ba0(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201660(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11273b314));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d9c0(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11273b318));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d9e0(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c26e6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2145a0(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c0d20a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9680(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c0c2d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3680(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c262d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4500(puVar7,param_2,uVar3);
  _objc_release(uVar3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf2a7a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c08d7e0();
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9d00(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar4);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c238180(uVar3);
  func_0x00010c0df6e0(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201c80(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c10aba0(uVar3);
  func_0x00010c0df760(puVar8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0c20(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(long *)(param_1 + _DAT_11273b330) != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201a80(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  lVar9 = *(long *)(param_1 + lVar12);
  func_0x00010c10aa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar9 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c10aa00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar8,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c10aa00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f6ae04;
    puStack_70 = &UNK_1108fdf60;
    puStack_68 = puVar8;
    _objc_retain(puVar8);
    func_0x00010bf97e80(uVar3,param_2,&puStack_88);
    _objc_release(uVar3);
    puVar10 = puVar8;
    func_0x00010bf51e00(puVar8);
    func_0x00010c1e0b80(puVar7,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puStack_68);
    _objc_release(puVar8);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f6ae04; end: 105f6af57;  */

void FUN_105f6ae04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6710;
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0bcd60(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010c0c54e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) goto LAB_105f6af24;
  }
  else {
    _objc_release();
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
LAB_105f6af24:
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f6af58; end: 105f6afbb;  */

void FUN_105f6af58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x000107fe9894(param_2);
  uVar1 = param_2;
  FUN_105f60ed0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1c4a20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f6afbc; end: 105f6b043;  */

void FUN_105f6afbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_105f6127c(param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c64e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f6b044; end: 105f6b153; -[SCMemoriesPickerV2ViewController _createTabSettingWithTabConfig:allowVideoEntries:allowPhotoEntries:dataValidator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6b044(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5
                  ,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c6718;
  _objc_alloc();
  func_0x00010c0501a0();
  if ((param_4 == 0) || ((param_5 & 1) == 0)) {
    puVar1 = &uStack_48;
    if (param_5 == 0) {
      puVar1 = &uStack_40;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    *puVar1 = puVar3;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189580(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar6 = param_6;
  func_0x00010c189940(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  if (lVar6 != 0) {
    lVar7 = (long)_DAT_11273b340;
    _objc_retain(lVar6);
    uVar5 = *(undefined8 *)(param_6 + lVar7);
    *(long *)(param_6 + lVar7) = lVar6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar7 = (long)_DAT_11273b344;
    uVar5 = *(undefined8 *)(param_6 + lVar7);
    *(undefined **)(param_6 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219e20(*(undefined8 *)(param_6 + lVar7),param_2,param_6);
    func_0x00010c16d3e0(*(undefined8 *)(param_6 + lVar7),param_2,0);
    func_0x00010c10c5a0(0x3fe8a3d70a3d70a4,*(undefined8 *)(param_6 + lVar7),param_2,param_6,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105f6b154; end: 105f6b203; -[SCMemoriesPickerV2ViewController attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6b154(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_11273b340;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    lVar3 = (long)_DAT_11273b344;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    func_0x00010c219e20(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
    func_0x00010c16d3e0(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x00010c10c5a0(0x3fe8a3d70a3d70a4,*(undefined8 *)(param_1 + lVar3),param_2,param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f6b204; end: 105f6b247; -[SCMemoriesPickerV2ViewController detachUI:] */

void FUN_105f6b204(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bdfd420(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f6b248; end: 105f6b257; -[SCMemoriesPickerV2ViewController tray:positionDidChange:] */

void FUN_105f6b248(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfd430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didDismissAlbumPickerTray_11255cea8);
    return;
  }
  return;
}



/* Entry: 105f6b258; end: 105f6b2df; -[SCMemoriesPickerV2ViewController _didDismissAlbumPickerTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6b258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273b310;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = (long)_DAT_11273b344;
  func_0x00010bf83180(*(undefined8 *)(param_1 + lVar1),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273b340);
  *(undefined8 *)(param_1 + _DAT_11273b340) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f6b2e0; end: 105f6b44f; -[SCMemoriesPickerV2ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6b2e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b31c,0);
  _objc_storeStrong(param_1 + _DAT_11273b344,0);
  _objc_storeStrong(param_1 + _DAT_11273b340,0);
  _objc_storeStrong(param_1 + _DAT_11273b330,0);
  _objc_storeStrong(param_1 + _DAT_11273b32c,0);
  _objc_storeStrong(param_1 + _DAT_11273b328,0);
  _objc_storeStrong(param_1 + _DAT_11273b324,0);
  _objc_storeStrong(param_1 + _DAT_11273b320,0);
  _objc_storeStrong(param_1 + _DAT_11273b2f0,0);
  _objc_storeStrong(param_1 + _DAT_11273b310,0);
  _objc_storeStrong(param_1 + _DAT_11273b338,0);
  _objc_storeStrong(param_1 + _DAT_11273b30c,0);
  _objc_storeStrong(param_1 + _DAT_11273b33c,0);
  _objc_storeStrong(param_1 + _DAT_11273b308,0);
  _objc_storeStrong(param_1 + _DAT_11273b304,0);
  _objc_storeStrong(param_1 + _DAT_11273b300,0);
  _objc_storeStrong(param_1 + _DAT_11273b2fc,0);
  _objc_storeStrong(param_1 + _DAT_11273b2f8,0);
  _objc_storeStrong(param_1 + _DAT_11273b2f4,0);
  _objc_storeStrong(param_1 + _DAT_11273b2ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b2e8,0);
  return;
}



/* Entry: 105f6b450; end: 105f6b87b; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler initWithDelegate:dataObjectContext:encryptedContentManager:cloudFSService:memoriesMergedDataSource:snapDocDownloadingService:mediaVideoImportServices:importEditsResolver:mediaImportEditorScopeExposer:quickCaptureCameraScopeExposer:circumstanceEngine:snapDocEditorFactory:pickerSource:preserveAllEdits:musicSelectionLoader:] */

undefined8 *
FUN_105f6b450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

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
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ee4c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    puVar1[0x15] = param_15;
    *(undefined1 *)(puVar1 + 0x16) = param_16;
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
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



/* Entry: 105f6b87c; end: 105f6b8eb; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onBackPressed] */

void FUN_105f6b87c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e2a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f6b8ec; end: 105f6b9b3; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onItemsSelectedWithItems:] */

void FUN_105f6b8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f6b9b4;
  puStack_50 = &UNK_1108fdf90;
  uStack_48 = param_1;
  func_0x00010c0b8620(param_3,param_2,&puStack_68,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f6bab0;
  puStack_80 = &UNK_110841f80;
  uStack_78 = param_1;
  uStack_70 = param_3;
  _objc_retain();
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(uStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6b9b4; end: 105f6baaf;  */

void FUN_105f6b9b4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x22;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  iVar1 = (int)lVar2;
  lVar2 = param_2;
  if (iVar1 == 2) {
    func_0x00010c1045c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
LAB_105f6ba88:
      unaff_x22 = 0;
    }
    else {
      unaff_x22 = *(long *)(param_1 + 0x20);
      func_0x00010be5eb40(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar1 == 1) {
    func_0x00010c0c54e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_105f6ba88;
    unaff_x22 = lVar2;
    FUN_105f61700(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 0) goto LAB_105f6ba94;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_105f6ba88;
    unaff_x22 = *(long *)(param_1 + 0x20);
    func_0x00010be5eb20(unaff_x22);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
LAB_105f6ba94:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 105f6bab0; end: 105f6bae7;  */

void FUN_105f6bab0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0c92c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f6bae8; end: 105f6bbfb; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onItemClickedWithItem:thumbnailCell:] */

void FUN_105f6bae8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  lVar2 = param_3;
  if ((int)lVar1 == 1) {
    func_0x00010c0c54e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_105f6bbe0;
    lVar1 = lVar2;
    FUN_105f61700();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)lVar1 != 0) goto LAB_105f6bbe0;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_105f6bbe0;
    lVar1 = param_1;
    func_0x00010be5eb20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f6bbfc;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    lStack_38 = lVar1;
    _objc_retain(lVar1);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
LAB_105f6bbe0:
  _objc_release(param_3);
  return;
}



/* Entry: 105f6bbfc; end: 105f6bc9f;  */

void FUN_105f6bbfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c92c0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105f6bca0; end: 105f6bca3; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_105f6bca0(void)

{
  return;
}



/* Entry: 105f6bca4; end: 105f6bccf; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler memoriesPickerV2DidDismiss] */

void FUN_105f6bca4(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c92a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f6bcd0; end: 105f6c19b; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

void FUN_105f6bcd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010c071800();
  if (iVar1 == 0) {
LAB_105f6bf04:
    puVar7 = (undefined *)0x0;
    goto LAB_105f6c148;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    puVar7 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar7;
    _objc_release(uVar6);
  }
  lVar2 = param_3;
  func_0x00010c27dd80();
  puVar7 = (undefined *)0x0;
  iVar1 = (int)lVar2;
  if (iVar1 == 2) goto LAB_105f6c148;
  lVar2 = param_3;
  if (iVar1 == 1) {
    func_0x00010c0c54e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_105f6bf04;
    lVar3 = lVar2;
    FUN_105f61700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27dd80();
    _objc_release(lVar4);
    lVar4 = lVar3;
    if ((int)lVar5 == 1) {
      func_0x00010c0b8600(lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b00f0;
      func_0x00010c29a3c0(PTR_PTR_1126b00f0);
      _objc_retainAutoreleasedReturnValue();
LAB_105f6bfb4:
      _objc_release(lVar4);
    }
    else {
      if ((int)lVar5 == 0) {
        func_0x00010c0b8600(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b00f0;
        func_0x00010bfe7d00(PTR_PTR_1126b00f0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105f6bfb4;
      }
      puVar8 = (undefined *)0x0;
    }
    lVar4 = lVar2;
    FUN_105f61578();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_a0,lVar4);
    }
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x000105f615f0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_a0,lVar4);
    }
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
LAB_105f6c058:
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    puVar8 = puVar7;
    if (iVar1 == 0) {
      func_0x00010c0c9920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) goto LAB_105f6bf04;
      lVar3 = param_1;
      func_0x00010be5eb20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      dVar9 = 1.60807493534087e-314;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_105f6c19c;
      puStack_110 = &UNK_1108fdfc0;
      lVar4 = lVar3;
      lStack_108 = param_1;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b00f0;
      func_0x00010c240160(PTR_PTR_1126b00f0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010bf8b340(lVar2);
      _CMTimeMake(&uStack_1b0,(long)dVar9,1000);
      puStack_148 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
      uStack_150 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_140 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(&uStack_a0,&uStack_150,&uStack_1b0);
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_a0,puVar7);
      }
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      _objc_release(puVar7);
      lVar5 = lVar2;
      FUN_105f6c338();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_a0,lVar5);
      }
      uStack_f8 = uStack_98;
      uStack_100 = uStack_a0;
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      uStack_d8 = uStack_78;
      uStack_e0 = uStack_80;
      _objc_release(lVar5);
      goto LAB_105f6c058;
    }
  }
  puStack_158 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105f6c6f8;
  puStack_160 = &UNK_1108fe070;
  uVar6 = param_5;
  puStack_148 = puStack_158;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_1a8 = uStack_f8;
  uStack_1b0 = uStack_100;
  uStack_198 = uStack_e8;
  uStack_1a0 = uStack_f0;
  uStack_188 = uStack_d8;
  uStack_190 = uStack_e0;
  func_0x00010bebb920(param_1);
  puVar7 = *(undefined **)(param_1 + 0x60);
  _objc_retain(puVar7);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(puVar8);
LAB_105f6c148:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f6c19c; end: 105f6c2a7;  */

void FUN_105f6c19c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105f6c2a8;
  uStack_40 = 0x105f6c2b8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f6c2a8; end: 105f6c2bf;  */

void FUN_105f6c2a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f6c2c0; end: 105f6c337;  */

void FUN_105f6c2c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f6c338; end: 105f6c47f;  */

void FUN_105f6c338(double param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  puVar4 = &uStack_c0;
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c27c900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (lVar1 == 0) {
    func_0x00010bf8b340(param_2);
    _CMTimeMake(&uStack_68,(long)param_1,1000);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = &uStack_80;
    puVar4 = &uStack_68;
  }
  else {
    lVar1 = param_2;
    func_0x00010c27c900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f5a0();
    _CMTimeMake(&uStack_68,(long)param_1,1000);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c27c900(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b340();
    _CMTimeMake(&uStack_80,(long)param_1,1000);
    _objc_release(lVar1);
    uStack_98 = uStack_60;
    uStack_a0 = uStack_68;
    uStack_90 = uStack_58;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_b0 = uStack_70;
    puVar2 = &uStack_a0;
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  }
  _CMTimeRangeMake(auStack_50,puVar2,puVar4);
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f6c480; end: 105f6c583;  */

void FUN_105f6c480(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105f6c2a8;
  uStack_40 = 0x105f6c2b8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f6c584; end: 105f6c5bb;  */

void FUN_105f6c584(long param_1,undefined8 param_2)

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



/* Entry: 105f6c5bc; end: 105f6c6bf;  */

void FUN_105f6c5bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105f6c2a8;
  uStack_40 = 0x105f6c2b8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f6c6c0; end: 105f6c6f7;  */

void FUN_105f6c6c0(long param_1,undefined8 param_2)

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



/* Entry: 105f6c6f8; end: 105f6c837;  */

void FUN_105f6c6f8(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27dd80();
  lVar1 = param_3;
  if ((int)lVar4 == 1) {
    func_0x00010c0c54e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dVar5 = 0.0;
    }
    else {
LAB_105f6c76c:
      lVar4 = lVar1;
      func_0x00010c27c900();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010bf8b340(lVar1);
        dVar5 = param_1;
      }
      else {
        lVar2 = lVar1;
        func_0x00010c27c900(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b340();
        _objc_release(lVar2);
        dVar5 = param_1;
      }
      _objc_release(lVar4);
    }
  }
  else {
    dVar5 = 0.0;
    if ((int)lVar4 != 0) goto LAB_105f6c7d0;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_105f6c76c;
  }
  _objc_release(lVar1);
LAB_105f6c7d0:
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  *(double *)(lVar4 + 0x18) = dVar5 / 1000.0 + *(double *)(lVar4 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f6c838; end: 105f6c987; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onCameraIconClicked] */

void FUN_105f6c838(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010beb4460();
  if ((int)lVar1 == 0) {
    uVar3 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0e2c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_1;
    func_0x00010bdf51a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c6720;
    _objc_alloc(PTR_PTR_1126c6720);
    func_0x00010c0582c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78));
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105f6c988; end: 105f6c9b3;  */

void FUN_105f6c988(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f6c9b4; end: 105f6ca37; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler setPickerViewController:] */

void FUN_105f6c9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1db800();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f6ca38; end: 105f6caa7; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler onSkipPressed] */

void FUN_105f6ca38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e67c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f6caa8; end: 105f6cc2f; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler quickCaptureCameraDidCaptureMediaWith:] */

undefined * FUN_105f6caa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aff30;
  func_0x00010c240080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aff40;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _CMTimeMakeWithSeconds(auStack_98,0x4004000000000000,600);
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(auStack_80,&uStack_b0,auStack_98);
  func_0x00010c297240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d3c0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c92c0(param_1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0xa8) == 0xc) {
    puVar4 = *(undefined **)(puVar1 + 0x88);
    func_0x00010c0b84a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
    _objc_release(puVar4);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 105f6cc30; end: 105f6ccaf; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _shouldLaunchQuickCapture] */

undefined8 FUN_105f6cc30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0xa8) == 0xc) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0b84a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e33c18,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    return uVar3;
  }
  return 0;
}



/* Entry: 105f6ccb0; end: 105f6cde3; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _createUIContainerWithOnDetach:] */

void FUN_105f6ccb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aff58;
  _objc_alloc();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f60(puVar2,param_2,param_1,0,0);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f6cde4;
  puStack_50 = &UNK_110845c10;
  _objc_retain(puVar2);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f6cdf0;
  puStack_80 = &UNK_1108fe0a0;
  puStack_78 = puVar2;
  uStack_70 = param_3;
  puStack_48 = puVar2;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c0311a0(puVar3,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(puStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f6cde4; end: 105f6cdef;  */

void FUN_105f6cde4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,param_2);
  return;
}



/* Entry: 105f6cdf0; end: 105f6ce8f;  */

void FUN_105f6cdf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105f6ce90; end: 105f6cecf;  */

void FUN_105f6ce90(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f6cec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105f6ced0; end: 105f6cf17; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _removeQuickCaptureScopeIfNeeded] */

void FUN_105f6ced0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f6cf18; end: 105f6d08b; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _mediaSegmentForPostArchiveSnap:] */

void FUN_105f6cf18(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f6d08c; end: 105f6d13b;  */

void FUN_105f6d08c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105f6d13c;
    puStack_50 = &UNK_1108fe100;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lStack_48 = lVar3;
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = uVar2;
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    func_0x000107e60b5c(uVar1,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105f6d13c; end: 105f6d29f;  */

void FUN_105f6d13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  _objc_retain(uVar3);
  func_0x00010befa120(uVar3);
  func_0x00010be46960(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_retain(puVar1);
  _objc_retain(uVar3);
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f6d2a0; end: 105f6d46b;  */

void FUN_105f6d2a0(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_2 + 0x20));
  if ((param_3 == 0) || (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar1);
  }
  else {
    puVar5 = PTR_PTR_1126aff30;
    func_0x00010c240080(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aff28;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8e60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bf8b340(*(undefined8 *)(param_2 + 0x38));
    _CMTimeMake(auStack_98,(long)param_1,1000);
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(auStack_80,&uStack_b0,auStack_98);
    func_0x00010c297240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c259cc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar4);
    _objc_release(uVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x30));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6d46c; end: 105f6d5df; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _mediaSegmentForMemoriesSnap:] */

void FUN_105f6d46c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f6d5e0; end: 105f6d7e7;  */

void FUN_105f6d5e0(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfa7560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      param_3 = *(undefined **)(lVar1 + 0x38);
      uVar8 = *(undefined8 *)(lVar1 + 0x40);
      uVar9 = *(undefined8 *)(lVar1 + 0x48);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105f6d7e8;
      puStack_90 = &UNK_1108fe100;
      puVar10 = *(undefined **)(param_1 + 0x28);
      lStack_88 = lVar1;
      _objc_retain(puVar10);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puStack_80 = puVar10;
      _objc_retain(uVar6);
      param_2 = 0;
      uStack_78 = uVar6;
      func_0x000107e60dbc(lVar2,0,param_3,uVar8,uVar7,uVar3,uVar9,&puStack_a8);
      _objc_release(lVar2);
      _objc_release(uStack_78);
      puVar10 = puStack_80;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar10;
      func_0x00010bf43ca0(uVar3);
    }
    _objc_release(puVar10);
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar10 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x98);
  _objc_retain(uVar3);
  func_0x00010befa120(uVar3);
  func_0x00010be46960(*(undefined8 *)(lVar1 + 0x20));
  _objc_release(param_2);
  puVar5 = puVar10;
  func_0x00010bfbc3e0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x30);
  _objc_retain(uVar9);
  _objc_retain(puVar10);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar10);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6d7e8; end: 105f6d95f;  */

void FUN_105f6d7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_2);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  _objc_retain(uVar3);
  func_0x00010befa120(uVar3);
  func_0x00010be46960(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_retain(puVar1);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x00010c297260(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6d960; end: 105f6db3b;  */

void FUN_105f6d960(long param_1,long param_2,undefined *param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == (undefined *)0x0)) {
    lVar2 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar6 = PTR_PTR_1126aff30;
      func_0x00010c240080(PTR_PTR_1126aff30);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126aff28;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c8e60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126aff40;
      _objc_alloc(PTR_PTR_1126aff40);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      FUN_105f6c338(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d3c0(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38));
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar4);
      goto LAB_105f6db08;
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e33cb8;
  if (*(long *)(param_1 + 0x20) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e33cd8;
  }
  _objc_retain(ppuVar1);
  puVar6 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010bf43ca0(uVar3);
LAB_105f6db08:
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f6db3c; end: 105f6dd87; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _kickOffSnapDocDownloadingWithSnapDocKey:snapDoc:promiseToComplete:] */

void FUN_105f6db3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105f6dd88;
  puStack_a0 = &UNK_1108fe160;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_b8;
  uStack_90 = param_4;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_4);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  func_0x00010bf89260(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6dd88; end: 105f6de63;  */

void FUN_105f6dd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    FUN_105f6dec8(auStack_58,param_3);
    iVar1 = (int)auStack_58;
    FUN_105f6de64();
    if (iVar1 == 0) {
      FUN_105f6dec8(auStack_80,param_3);
      puVar3 = puVar2;
      func_0x00010be957a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f6de1c;
    }
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
LAB_105f6de1c:
  _objc_release(puVar2);
  FUN_105f6df38(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f6de64; end: 105f6dec7;  */

bool FUN_105f6de64(long *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *param_1;
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (param_1[2] == 0)) {
    bVar1 = param_1[3] == 0;
  }
  else {
    bVar1 = false;
  }
  FUN_105f6df38(param_1);
  return bVar1;
}



/* Entry: 105f6dec8; end: 105f6df37;  */

void FUN_105f6dec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _objc_retain(uVar1);
  *param_1 = uVar1;
  uVar1 = param_2[1];
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  _objc_retain(uVar1);
  param_1[2] = uVar1;
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  _objc_retain(uVar1);
  param_1[4] = uVar1;
  return;
}



/* Entry: 105f6df38; end: 105f6df6f;  */

void FUN_105f6df38(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
  _objc_release(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[4]);
  return;
}



/* Entry: 105f6df70; end: 105f6e6f3;  */

void FUN_105f6df70(long param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined **ppuVar13;
  long lVar14;
  undefined **unaff_x22;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_388 [40];
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  ulong uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [40];
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_300 = param_3;
  _objc_retain(param_3);
  lVar17 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar17 != 0) {
    lStack_308 = param_1;
    if (*(char *)(lVar17 + 0xb0) == '\x01') {
      uVar11 = *(ulong *)(param_1 + 0x20);
      lStack_310 = lVar17;
      _objc_retain(uVar11);
      uVar16 = uVar11;
      func_0x00010bfda540();
      if ((uVar16 & 1) == 0) {
        puStack_220 = (undefined *)0x0;
        ppuStack_228 = (undefined **)0x0;
        uStack_230 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
      }
      else {
        uStack_330 = uVar11;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar11;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        uVar11 = uVar16;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar16;
        uStack_318 = uVar11;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar16;
        uStack_320 = uVar2;
        func_0x00010c0b8620();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uStack_328 = uVar2;
        _objc_release(uVar11);
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        _objc_retain(uVar16);
        uStack_2e0 = uVar16;
        func_0x00010bf52a60();
        uStack_2c0 = uVar16;
        if (uVar16 == 0) {
          puStack_2f8 = (undefined *)0x0;
        }
        else {
          puStack_2f8 = (undefined *)0x0;
          lStack_2c8 = *plStack_1c0;
          do {
            uVar16 = 0;
            do {
              if (*plStack_1c0 != lStack_2c8) {
                _objc_enumerationMutation(uStack_2e0);
              }
              lVar12 = *(long *)(lStack_1c8 + uVar16 * 8);
              lVar17 = lVar12;
              func_0x00010c08c3a0();
              if ((int)lVar17 == 4) {
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar12;
                func_0x00010c0cc0c0();
                _objc_retainAutoreleasedReturnValue();
                lVar14 = lVar17;
                func_0x00010c08eee0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar17);
                _objc_release(lVar12);
                lVar17 = lVar14;
                func_0x00010c08fa60();
                if (lVar17 != 0) {
                  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                  func_0x00010bdc1900();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                  puVar5 = puVar3;
                  _objc_opt_isKindOfClass(puVar3,puVar4);
                  puStack_2d0 = puVar3;
                  if (((ulong)puVar5 & 1) == 0) {
                    puStack_2d0 = (undefined *)0x0;
                  }
                  _objc_retain();
                  _objc_release(puVar3);
                  if (puStack_2d0 != (undefined *)0x0) {
                    puVar4 = PTR_PTR_1126bcdd8;
                    _objc_alloc();
                    func_0x00010c0206e0();
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_1d8 = 0;
                    uStack_1e0 = 0;
                    lStack_208 = 0;
                    uStack_210 = 0;
                    uStack_1f8 = 0;
                    plStack_200 = (long *)0x0;
                    puStack_2d8 = puVar4;
                    func_0x00010c2553e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar4;
                    func_0x00010bf52a60();
                    if (puVar5 != (undefined *)0x0) {
                      lVar17 = *plStack_200;
                      do {
                        puVar15 = (undefined *)0x0;
                        do {
                          if (*plStack_200 != lVar17) {
                            _objc_enumerationMutation(puVar4);
                          }
                          ppuVar13 = *(undefined ***)(lStack_208 + (long)puVar15 * 8);
                          ppuVar6 = ppuVar13;
                          func_0x00010bfee000();
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar7 = ppuVar6;
                          func_0x00010c0720c0();
                          _objc_release(ppuVar6);
                          if ((int)ppuVar7 != 0) {
                            func_0x00010bfedfc0();
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar6 = ppuVar13;
                            func_0x00010c0d2940();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release(ppuVar13);
                            ppuVar7 = ppuVar6;
                            func_0x00010c277e80();
                            _objc_retainAutoreleasedReturnValue();
                            _objc_release();
                            if (ppuVar7 == (undefined **)0x0) {
                              ppuStack_2e8 = (undefined **)0x0;
                            }
                            else {
                              ppuVar7 = ppuVar6;
                              func_0x00010c277e80();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar13 = ppuVar7;
                              func_0x00010c282800();
                              ppuStack_2e8 = ppuVar13;
                              _objc_release(ppuVar7);
                              ppuVar7 = ppuVar6;
                              func_0x00010c2711a0();
                              _objc_retainAutoreleasedReturnValue();
                              ppuStack_2f0 = &PTR____CFConstantStringClassReference_110daafd8;
                              if (ppuVar7 != (undefined **)0x0) {
                                ppuStack_2f0 = ppuVar7;
                              }
                              _objc_retain();
                              _objc_release(ppuVar7);
                              ppuVar13 = ppuVar6;
                              func_0x00010bf0a460();
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
                              if (ppuVar13 != (undefined **)0x0) {
                                ppuVar7 = ppuVar13;
                              }
                              _objc_retain(ppuVar7);
                              _objc_release(ppuVar13);
                              ppuVar13 = ppuVar6;
                              func_0x00010c0e1d40(ppuVar6);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c282800();
                              _objc_release(ppuVar13);
                              ppuVar13 = ppuVar6;
                              func_0x00010c0b5900(ppuVar6);
                              _objc_retainAutoreleasedReturnValue();
                              ppuVar8 = ppuVar6;
                              func_0x00010c0d3920();
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010b778b20();
                              _objc_release(ppuVar8);
                              puVar5 = PTR_PTR_1126bf6f0;
                              func_0x00010c0d3860();
                              _objc_retainAutoreleasedReturnValue();
                              _objc_release(puStack_2f8);
                              _objc_release(ppuVar7);
                              _objc_release(ppuVar13);
                              _objc_release(ppuStack_2f0);
                              puStack_2f8 = puVar5;
                            }
                            _objc_release(ppuVar6);
                            _objc_release(puVar4);
                            bVar1 = ppuStack_2e8 == (undefined **)0x0;
                            _objc_release(puStack_2d8);
                            if (bVar1) goto LAB_105f6e4ac;
                            _objc_release(puVar3);
                            _objc_release(lVar14);
                            goto LAB_105f6e534;
                          }
                          puVar15 = puVar15 + 1;
                        } while (puVar5 != puVar15);
                        puVar5 = puVar4;
                        func_0x00010bf52a60();
                      } while (puVar5 != (undefined *)0x0);
                    }
                    _objc_release(puVar4);
                    _objc_release(puStack_2d8);
                  }
LAB_105f6e4ac:
                  _objc_release(puStack_2d0);
                }
                _objc_release(lVar14);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uStack_2c0);
            uVar16 = uStack_2e0;
            func_0x00010bf52a60();
            uStack_2c0 = uVar16;
          } while (uVar16 != 0);
        }
        ppuStack_2e8 = (undefined **)0x0;
LAB_105f6e534:
        _objc_release(uStack_2e0);
        uStack_240 = uStack_318;
        uStack_238 = uStack_320;
        uStack_230 = uStack_328;
        ppuStack_228 = ppuStack_2e8;
        puStack_220 = puStack_2f8;
        _objc_release(uStack_2e0);
        uVar11 = uStack_330;
      }
      _objc_release(uVar11);
      lVar17 = lStack_310;
    }
    else {
      puStack_220 = (undefined *)0x0;
      ppuStack_228 = (undefined **)0x0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
    }
    uVar9 = *(undefined8 *)(lVar17 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c12ee80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    lVar17 = lStack_308;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_105f6e6f4;
    puStack_278 = &UNK_1108fe190;
    uVar9 = *(undefined8 *)(lStack_308 + 0x30);
    _objc_retain(uVar9);
    unaff_x22 = &puStack_290;
    param_2 = &uStack_240;
    uStack_270 = uVar9;
    FUN_105f6dec8(auStack_268,param_2);
    unaff_x20 = uVar10;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = puVar3;
    uStack_2b0 = 0xc2000000;
    pcStack_2a8 = FUN_105f6e7c8;
    puStack_2a0 = &UNK_1108bc678;
    unaff_x21 = *(undefined8 *)(lVar17 + 0x28);
    _objc_retain(unaff_x21);
    uStack_298 = unaff_x21;
    func_0x00010c297260(unaff_x20);
    _objc_release(unaff_x20);
    _objc_release(uStack_298);
    FUN_105f6df38(auStack_268);
    _objc_release(uStack_270);
    _objc_release(uVar10);
    FUN_105f6df38(&uStack_240);
  }
  _objc_release();
  lVar17 = lStack_300;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  FUN_105f6df38(unaff_x22 + 5);
  FUN_105f6df38(&uStack_240);
  lVar12 = lVar17;
  __Unwind_Resume();
  pcStack_338 = FUN_105f6e6f4;
  lVar14 = *(long *)(lVar12 + 0x20);
  ppuStack_360 = unaff_x22;
  uStack_358 = unaff_x21;
  uStack_350 = unaff_x20;
  lStack_348 = lVar17;
  puStack_340 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  FUN_105f6dec8(auStack_388,lVar12 + 0x28);
  (**(code **)(lVar14 + 0x10))(lVar14,param_2,auStack_388);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
  return;
}



/* Entry: 105f6e6f4; end: 105f6e767;  */

void FUN_105f6e6f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_105f6dec8(auStack_58,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,auStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f6e768; end: 105f6e7c7;  */

void FUN_105f6e768(long param_1,long param_2)

{
  undefined8 uVar1;
  
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* Entry: 105f6e7c8; end: 105f6e7db;  */

void FUN_105f6e7c8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105f6e7dc; end: 105f6ecfb; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _restorePreservedOverlays:toSnapDocEditor:snapDocKey:originalSnapDoc:] */

long * FUN_105f6e7dc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *unaff_x27;
  long lVar12;
  undefined1 auStack_1e0 [40];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [168];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar9 = param_3;
  FUN_105f6dec8(auStack_118);
  iVar1 = (int)auStack_118;
  FUN_105f6de64();
  if (iVar1 != 0) {
    plVar8 = (long *)PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105f6ec40;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = *param_3;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c5c0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    puStack_150 = (undefined8 *)0x0;
    lVar11 = *param_3;
    _objc_retain(lVar11);
    lVar3 = lVar11;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      unaff_x27 = (undefined *)*puStack_150;
      do {
        lVar12 = 0;
        do {
          if ((undefined *)*puStack_150 != unaff_x27) {
            _objc_enumerationMutation(lVar11);
          }
          func_0x00010befbf60(param_4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar11;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar11);
  }
  if (param_3[3] == 0) {
    if (param_3[2] != 0) {
      puVar6 = *(undefined **)(param_1 + 0xa0);
      func_0x00010bf8cb60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar7 = puVar6;
      func_0x00010c0c7240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        func_0x00010bf43d60(puVar4);
      }
      else {
        _objc_retain(puVar6);
        _objc_retain(param_4);
        plVar9 = param_3;
        FUN_105f6dec8(auStack_1e0);
        _objc_retain(puVar4);
        func_0x00010c297260(puVar7);
        _objc_release(puVar4);
        FUN_105f6df38(auStack_1e0);
        _objc_release(param_4);
        _objc_release(puVar6);
      }
      unaff_x27 = puVar4;
      func_0x00010bfbc3e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(unaff_x27);
      goto LAB_105f6eba4;
    }
  }
  else {
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = *(undefined **)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010bf43d60(puVar6);
    }
    else {
      unaff_x27 = (undefined *)param_3[3];
      uVar5 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_105f6ed7c;
      puStack_1a0 = &UNK_1108fe210;
      _objc_retain(param_4);
      plVar9 = param_3;
      uStack_198 = param_4;
      FUN_105f6dec8(auStack_188);
      _objc_retain(puVar6);
      puStack_190 = puVar6;
      func_0x00010c09c160(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puStack_190);
      FUN_105f6df38(auStack_188);
      _objc_release(uStack_198);
    }
    puVar7 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
LAB_105f6eba4:
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  plVar10 = (long *)PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  plVar8 = plVar10;
  func_0x00010c0b8600(plVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(plVar10);
  _objc_release(puVar2);
LAB_105f6ec40:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  plVar10 = param_3;
  FUN_105f6df38();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
    return plVar8;
  }
  ___stack_chk_fail();
  FUN_105f6df38(unaff_x27 + 0x38);
  FUN_105f6df38(param_3);
  __Unwind_Resume(plVar10);
  _objc_retain(plVar9);
  plVar10 = plVar9;
  func_0x00010c08c3a0();
  if (((int)plVar10 == 1) || (plVar10 = plVar9, func_0x00010bfdab80(), (int)plVar10 == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar8 = plVar9;
    func_0x00010c118b40(plVar9);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = plVar8;
    func_0x00010bfd7800();
    _objc_release(plVar8);
  }
  _objc_release(plVar9);
  return plVar10;
}



/* Entry: 105f6ecfc; end: 105f6ed7b;  */

undefined8 FUN_105f6ecfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08c3a0();
  if (((int)uVar2 == 1) || (uVar2 = param_2, func_0x00010bfdab80(), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd7800();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105f6ed7c; end: 105f6ee4f;  */

void FUN_105f6ed7c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126bf6f0;
  if (lVar3 != 0) {
    lVar2 = param_2;
    func_0x00010c15a4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9ec0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f6ee50; end: 105f6eeb7;  */

void FUN_105f6ee50(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 105f6eeb8; end: 105f6ef63;  */

void FUN_105f6eeb8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bf6f0;
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(param_2);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9ec0(puVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105f6ef64; end: 105f6f003;  */

void FUN_105f6ef64(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar1);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return;
}



/* Entry: 105f6f004; end: 105f6f2a7; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _showTrimVCWithImportMediaContent:contentTimeRange:trimmedTimeRange:remainingDurationMs:segmentsEndSeconds:disallowDurationChange:] */

void FUN_105f6f004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  double dVar6;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) {
      dVar6 = 60000.0;
    }
    else {
      lVar1 = param_6;
      func_0x00010c067fc0(param_6);
      dVar6 = (double)lVar1;
    }
    _CMTimeMakeWithSeconds(&uStack_90,dVar6 / 1000.0,1000000000);
    _CMTimeMakeWithSeconds(&uStack_b0,0x3fe0000000000000,600);
  }
  else {
    uStack_88 = param_5[4];
    uStack_90 = param_5[3];
    uStack_80 = param_5[5];
    uStack_a8 = param_5[4];
    uStack_b0 = param_5[3];
    uStack_a0 = param_5[5];
  }
  puVar2 = PTR_PTR_1126c6728;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000107039ff8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010703a010();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_c0 = uStack_80;
  uStack_e8 = uStack_a8;
  uStack_f0 = uStack_b0;
  uStack_e0 = uStack_a0;
  uStack_118 = param_4[1];
  uStack_120 = *param_4;
  uStack_108 = param_4[3];
  uStack_110 = param_4[2];
  uStack_f8 = param_4[5];
  uStack_100 = param_4[4];
  uStack_148 = param_5[1];
  uStack_150 = *param_5;
  uStack_138 = param_5[3];
  uStack_140 = param_5[2];
  uStack_128 = param_5[5];
  uStack_130 = param_5[4];
  func_0x00010c01d360();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_initWeak(&uStack_120,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105f6f2a8;
  puStack_160 = &UNK_1108fe2a0;
  _objc_copyWeak(auStack_158,&uStack_120);
  ppuVar5 = &puStack_178;
  _objc_retainBlock();
  puStack_1b0 = puVar3;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_105f6f3a4;
  puStack_198 = &UNK_110848378;
  _objc_copyWeak(auStack_180,&uStack_120);
  _objc_retain(puVar2);
  puStack_190 = puVar2;
  _objc_retain(ppuVar5);
  ppuStack_188 = ppuVar5;
  func_0x000100162d98("APPSTORE",&puStack_1b0);
  _objc_release(ppuStack_188);
  _objc_release(puStack_190);
  _objc_destroyWeak(auStack_180);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(&uStack_120);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6f2a8; end: 105f6f3a3;  */

void FUN_105f6f2a8(long param_1,int param_2,ulong param_3,double *param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar2 = (undefined *)0x0;
    if ((((param_3 & 1) == 0) && (param_2 != 0)) && (param_5 == 0)) {
      dStack_68 = param_4[1];
      dVar3 = *param_4;
      dStack_60 = param_4[2];
      dStack_70 = dVar3;
      _CMTimeGetSeconds(&dStack_70);
      dStack_68 = param_4[4];
      dVar4 = param_4[3];
      dStack_60 = param_4[5];
      dStack_70 = dVar4;
      _CMTimeGetSeconds(&dStack_70);
      puVar2 = PTR_PTR_1126c6730;
      _objc_alloc(PTR_PTR_1126c6730);
      func_0x00010c04bac0(dVar3 * 1000.0,dVar4 * 1000.0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105f6f3a4; end: 105f6f44b;  */

void FUN_105f6f3a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      FUN_105f61edc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126c6738;
      _objc_alloc(PTR_PTR_1126c6738);
      func_0x00010c01d380();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70),param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f6f44c; end: 105f6f47b; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler _setFakePerformer:] */

void FUN_105f6f44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f6f47c; end: 105f6f587; -[SCMemoriesPickerV2ViewControllerDefaultActionHandler .cxx_destruct] */

void FUN_105f6f47c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f6f588; end: 105f6f633;  */

void FUN_105f6f588(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c08c3a0();
  if (((int)uVar3 != 1) && (uVar3 = param_2, func_0x00010bfdab80(), (int)uVar3 != 0)) {
    uVar3 = param_2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfd7800();
    if ((uVar1 & 1) == 0) {
      _objc_release(uVar3);
    }
    else {
      puVar2 = PTR_PTR_1126bf6f0;
      func_0x00010c078300();
      _objc_release(uVar3);
      if (((ulong)puVar2 & 1) == 0) {
        uVar3 = param_2;
        func_0x00010bf51e00(param_2);
        goto LAB_105f6f618;
      }
    }
  }
  uVar3 = 0;
LAB_105f6f618:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f6f634; end: 105f6f68b;  */

void FUN_105f6f634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf6f0;
  func_0x00010c078300();
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf51e00(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f6f68c; end: 105f6f737;  */

void FUN_105f6f68c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar3 == 1) {
    uVar1 = param_2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf0b760();
    if ((int)uVar3 == 2) {
      uVar2 = param_2;
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    else {
      uVar3 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f6f738; end: 105f6f747;  */

void FUN_105f6f738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enumerateObjectsAsyncWithIndex__1125604b8,0,param_3,param_4);
  return;
}



/* Entry: 105f6f748; end: 105f6f907;  */

void FUN_105f6f748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_setAssociatedObject(param_1,0x1136c2530,puVar1,1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97e20(param_1);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f6f908; end: 105f6faf3;  */

void FUN_105f6f908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    }
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c297260(lVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6faf4; end: 105f6fc4f;  */

void FUN_105f6faf4(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f6fc50;
    puStack_70 = &UNK_1108fe3b0;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_5);
    lStack_68 = param_5;
    uStack_50 = param_3;
    _objc_retain(param_4);
    lStack_60 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,param_1,&puStack_88);
    _objc_release(param_1);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f6fc50; end: 105f6fca3;  */

void FUN_105f6fc50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    func_0x00010be0ac60(lVar1,param_2,*(long *)(param_1 + 0x38) + 1,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f6fca4; end: 105f6ff93; -[SCFuture mapAsync:] */

void FUN_105f6fca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae558;
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110f30738,0x66,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105f6fdcc;
    puStack_48 = &UNK_1108fe3e0;
    puStack_40 = puVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00010c297260(param_1,param_2,&puStack_60,0);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f6ff94; end: 105f6fff7; -[SCAddToGroupScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6ff94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273b3a4);
  param_1 = param_1 + _DAT_11273b3a8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f6fff8; end: 105f70033; -[SCAddToGroupScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6fff8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b3a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b3a8);
  return;
}



/* Entry: 105f70034; end: 105f700ab; -[SCCancelMenuActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f70034(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdc4660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273b3ac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f700ac; end: 105f704eb; -[SCCancelMenuActionSheetEntryPoint _actionSheet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f700ac(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar10 = (long)_DAT_11273b3ac;
  puVar2 = (undefined1 *)(param_1 + lVar10);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c239a40();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126b10a0;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)puVar3 != 0) {
    FUN_105f71364();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar5;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105f704ec;
    puStack_90 = &UNK_110852cd0;
    _objc_copyWeak(auStack_88,auStack_80);
    puVar5 = puVar4;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    puVar2 = auStack_88;
    _objc_destroyWeak(puVar2);
  }
  puVar4 = PTR_PTR_1126b10a0;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000105f7137c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105f705d8;
  puStack_b8 = &UNK_110852cd0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puVar6 = puVar4;
  func_0x00010bf1d200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010befa120(puVar1);
  lVar7 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfb79a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    param_1 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar10 = param_1;
    func_0x00010bfce500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
    _objc_release(lVar7);
    if (lVar10 == 0) goto LAB_105f70374;
  }
  else {
    _objc_release();
    _objc_release(lVar7);
  }
  puVar4 = PTR_PTR_1126b10a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110e33d38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e33d38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105f706c4;
  puStack_e0 = &UNK_110852cd0;
  _objc_copyWeak(auStack_d8,auStack_80);
  puVar5 = puVar4;
  func_0x00010bf1d200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar9);
  func_0x00010befa120(puVar1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_d8);
LAB_105f70374:
  puVar5 = PTR_PTR_1126b10a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_80);
  puVar4 = puVar5;
  func_0x00010bf1d200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar9);
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c18b5e0();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f704ec; end: 105f705a3;  */

void FUN_105f704ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf83000(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


