/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d0928c; end: 106d09507; -[SCMemoriesCameraRollAlbumPillViewController _updateViewModelAfterSelection:currIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0928c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar10 = (long)_DAT_11275cac8;
  if ((param_3 == param_4) && ((*(byte *)(param_1 + lVar10) & 1) != 0)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar12 = (long)_DAT_11275cad4;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar11 = 0;
    do {
      if ((param_3 == uVar11) || (param_4 == uVar11)) {
        puVar3 = PTR_PTR_1126d22d0;
        _objc_alloc(PTR_PTR_1126d22d0);
        uVar4 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07d660();
        func_0x00010c053180(puVar3);
        _objc_release(uVar5);
        _objc_release(uVar9);
        _objc_release(uVar4);
      }
      else {
        puVar3 = *(undefined **)(param_1 + lVar12);
        func_0x00010c0dfd40(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010befa120(puVar1);
      _objc_release(puVar3);
      uVar11 = uVar11 + 1;
      uVar6 = *(ulong *)(param_1 + lVar12);
      func_0x00010bf529e0();
    } while (uVar11 < uVar6);
  }
  *(ulong *)(param_1 + _DAT_11275cad0) = param_4;
  puVar3 = puVar1;
  if ((*(byte *)(param_1 + lVar10) & 1) == 0) {
    func_0x00010bf51e00();
  }
  else {
    puVar7 = puVar1;
    func_0x00010bf529e0();
    if ((undefined *)0x2 < puVar7) {
      puVar7 = PTR_PTR_1126d22d0;
      _objc_alloc(PTR_PTR_1126d22d0);
      ppuVar8 = &PTR____CFConstantStringClassReference_110e84218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e84218,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053180(puVar7);
      _objc_release(ppuVar8);
      func_0x00010c066b00(puVar1);
      _objc_release(puVar7);
    }
    func_0x00010bf529e0();
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar3;
  _objc_release(uVar9);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275cacc));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d09508; end: 106d0950f; -[SCMemoriesCameraRollAlbumPillViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_106d09508(void)

{
  return 1;
}



/* Entry: 106d09510; end: 106d0951f; -[SCMemoriesCameraRollAlbumPillViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275cad4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106d09520; end: 106d0961f; -[SCMemoriesCameraRollAlbumPillViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09520(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d2328;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar6 = (long)_DAT_11275cad4;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar3 = param_4;
    func_0x00010c142240();
    uVar4 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf529e0();
    if (uVar3 < uVar4) {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      uVar3 = param_4;
      func_0x00010c142240(param_4);
      func_0x00010c0dfd40(uVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f7c0(uVar2,param_2,uVar5);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d09620; end: 106d0980b; -[SCMemoriesCameraRollAlbumPillViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09620(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_11275cac8) == '\x01') {
    lVar1 = param_4;
    func_0x00010c0840e0();
    if (lVar1 != 3) {
      puVar2 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_4;
      func_0x00010c142240(param_4);
      func_0x00010c0df840(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e84318,puVar3);
      _objc_release(puVar3);
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11275cac0),param_2,param_1,puVar2,0);
      uVar4 = *(undefined8 *)(param_1 + _DAT_11275cad0);
      goto LAB_106d097c8;
    }
    *(undefined8 *)(param_1 + _DAT_11275cad0) = 3;
    puVar2 = (undefined *)(param_1 + _DAT_11275cab0);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c235b80();
  }
  else {
    lVar1 = param_4;
    func_0x00010c142240();
    lVar5 = (long)_DAT_11275cad0;
    if (lVar1 == *(long *)(param_1 + lVar5)) goto LAB_106d097e8;
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0df840(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e84318,puVar3);
    _objc_release(puVar3);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11275cac0),param_2,param_1,puVar2,0);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
LAB_106d097c8:
    lVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010bee3820(param_1,param_2,uVar4,lVar1);
  }
  _objc_release(puVar2);
LAB_106d097e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d0980c; end: 106d0992f; -[SCMemoriesCameraRollAlbumPillViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106d0980c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((*(char *)(param_3 + _DAT_11275cac8) == '\x01') &&
     (uVar1 = param_7, func_0x00010c0840e0(), -1 < (long)uVar1)) {
    uVar1 = param_7;
    func_0x00010c0840e0();
    lVar4 = (long)_DAT_11275cad8;
    uVar2 = *(ulong *)(param_3 + lVar4);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_3 + lVar4);
      uVar1 = param_7;
      func_0x00010c0840e0(param_7);
      func_0x00010c0dfd40(uVar3,param_4,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar3);
      param_2 = 0x4040000000000000;
      goto LAB_106d098f8;
    }
  }
  if (param_6 == 0) {
    param_2 = 0x4040000000000000;
    param_1 = 0x4050000000000000;
  }
  else {
    func_0x00010c084a80(param_6);
  }
LAB_106d098f8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 106d09930; end: 106d09963; -[SCMemoriesCameraRollAlbumPillViewController scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09930(long param_1)

{
  param_1 = param_1 + _DAT_11275cab0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a57c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d09964; end: 106d09997; -[SCMemoriesCameraRollAlbumPillViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09964(long param_1)

{
  param_1 = param_1 + _DAT_11275cab0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d09998; end: 106d099d3; -[SCMemoriesCameraRollAlbumPillViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09998(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_11275cab0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d099d4; end: 106d09a6f; -[SCMemoriesCameraRollAlbumPillViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d099d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275cad8,0);
  _objc_storeStrong(param_1 + _DAT_11275cac4,0);
  _objc_storeStrong(param_1 + _DAT_11275cad4,0);
  _objc_storeStrong(param_1 + _DAT_11275cab4,0);
  _objc_destroyWeak(param_1 + _DAT_11275cab0);
  _objc_storeStrong(param_1 + _DAT_11275cab8,0);
  _objc_storeStrong(param_1 + _DAT_11275cac0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275cacc,0);
  return;
}



/* Entry: 106d09a70; end: 106d09ae7;  */

void FUN_106d09a70(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e84238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e84238,
                      &PTR____CFConstantStringClassReference_110e84258,0);
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



/* Entry: 106d09ae8; end: 106d09b77; -[SCMemoriesPillCellViewModel initWithTitle:isSelected:isShortcutDesign:] */

undefined1 *
FUN_106d09ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f6870;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d09b78; end: 106d09b7f; -[SCMemoriesPillCellViewModel title] */

undefined8 FUN_106d09b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d09b80; end: 106d09b87; -[SCMemoriesPillCellViewModel isSelected] */

undefined1 FUN_106d09b80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d09b88; end: 106d09b8f; -[SCMemoriesPillCellViewModel isShortcutDesign] */

undefined1 FUN_106d09b88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106d09b90; end: 106d09b9b; -[SCMemoriesPillCellViewModel .cxx_destruct] */

void FUN_106d09b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d09b9c; end: 106d09cbf; -[SCMemoriesCameraRollAlbumPickerScope initWithScopeDelegate:uiContainer:backgroundColor:selectedAlbumId:origin:pillsUIEnabled:allowVideoEntries:allowPhotoEntries:] */

undefined1 *
FUN_106d09b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126f6878;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d09cc0; end: 106d09cd7; -[SCMemoriesCameraRollAlbumPickerScope scopeDelegate] */

void FUN_106d09cc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d09cd8; end: 106d09cdf; -[SCMemoriesCameraRollAlbumPickerScope uiContainer] */

undefined8 FUN_106d09cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d09ce0; end: 106d09ce7; -[SCMemoriesCameraRollAlbumPickerScope backgroundColor] */

undefined8 FUN_106d09ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d09ce8; end: 106d09cef; -[SCMemoriesCameraRollAlbumPickerScope selectedAlbumId] */

undefined8 FUN_106d09ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d09cf0; end: 106d09cf7; -[SCMemoriesCameraRollAlbumPickerScope origin] */

undefined8 FUN_106d09cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d09cf8; end: 106d09cff; -[SCMemoriesCameraRollAlbumPickerScope pillsUIEnabled] */

undefined1 FUN_106d09cf8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d09d00; end: 106d09d07; -[SCMemoriesCameraRollAlbumPickerScope allowVideoEntries] */

undefined1 FUN_106d09d00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106d09d08; end: 106d09d0f; -[SCMemoriesCameraRollAlbumPickerScope allowPhotoEntries] */

undefined1 FUN_106d09d08(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106d09d10; end: 106d09d53; -[SCMemoriesCameraRollAlbumPickerScope .cxx_destruct] */

void FUN_106d09d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106d09d54; end: 106d09dcf; -[SCMemoriesCameraRollAssetFetcher init] */

undefined1 * FUN_106d09d54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d09dd0; end: 106d09e23; -[SCMemoriesCameraRollAssetFetcher registerChangeObserver:] */

void FUN_106d09dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  _objc_retain(param_3);
  func_0x00010c22be00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125f60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d09e24; end: 106d09e77; -[SCMemoriesCameraRollAssetFetcher unregisterChangeObserver:] */

void FUN_106d09e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  _objc_retain(param_3);
  func_0x00010c22be00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281fa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d09e78; end: 106d09e83; -[SCMemoriesCameraRollAssetFetcher fetchAssetCollectionsWithType:subtype:options:] */

void FUN_106d09e78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___PHAssetCollection_1126bf858,
             PTR_s_fetchAssetCollectionsWithType_su_1125c6d80);
  return;
}



/* Entry: 106d09e84; end: 106d09e8f; -[SCMemoriesCameraRollAssetFetcher fetchAssetsInAssetCollection:options:] */

void FUN_106d09e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa50d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___PHAsset_1126bd898,PTR_s_fetchAssetsInAssetCollection_opt_1125c6dd8);
  return;
}



/* Entry: 106d09e90; end: 106d09e9b; -[SCMemoriesCameraRollAssetFetcher fetchAssetsWithOptions:] */

void FUN_106d09e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa5130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___PHAsset_1126bd898,PTR_s_fetchAssetsWithOptions__1125c6df0);
  return;
}



/* Entry: 106d09e9c; end: 106d09eab; -[SCMemoriesCameraRollAssetFetcher fetchAssetsWithIdentifiers:] */

void FUN_106d09e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___PHAsset_1126bd898,PTR_s_fetchAssetsWithLocalIdentifiers__1125c6de0,
             param_3,0);
  return;
}



/* Entry: 106d09eac; end: 106d09eb7; -[SCMemoriesCameraRollAssetFetcher .cxx_destruct] */

void FUN_106d09eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d09eb8; end: 106d09fe7;  */

ulong FUN_106d09eb8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  _objc_opt_class(PTR_PTR_1126af4c0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126af4c0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar6 = uVar1;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar6);
  if ((int)uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1;
    func_0x00010c071ae0(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 106d09fe8; end: 106d0a09b;  */

bool FUN_106d09fe8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  bVar1 = false;
  if (param_1 != 0) {
    _objc_retain();
    lVar2 = param_1;
    func_0x00010c286820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    lVar4 = param_1;
    func_0x00010c066900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    lVar6 = param_1;
    func_0x00010bf6c000(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar7 = lVar6;
    func_0x00010bf529e0(lVar6);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    bVar1 = 0 < lVar5 + lVar3 + lVar7;
  }
  return bVar1;
}



/* Entry: 106d0a09c; end: 106d0a3a3;  */

void FUN_106d0a09c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar1 = param_1, FUN_106d09fe8(), (int)lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf6c000(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(puVar2);
    func_0x00010bf97bc0(lVar1);
    _objc_release(lVar1);
    _objc_retain(puVar2);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d0a3a4; end: 106d0a4d7;  */

undefined1 * FUN_106d0a3a4(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined1 *puVar6;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
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
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar6 = (undefined1 *)0x1;
    lStack_150 = param_1;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_c8;
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x22 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != unaff_x22) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x21 = *(long *)(lStack_108 + lVar7 * 8);
          lVar2 = unaff_x21;
          func_0x00010c155700();
          if (((lVar2 != 1) && (lVar2 = unaff_x21, func_0x00010bf63d80(), lVar2 == 2)) &&
             (lVar2 = unaff_x21, func_0x00010c0deb60(), lVar2 != 0)) {
            puVar6 = (undefined1 *)0x0;
            goto LAB_106d0a498;
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        param_4 = auStack_c8;
        lVar1 = param_1;
        puVar4 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    puVar6 = (undefined1 *)0x1;
LAB_106d0a498:
    lVar1 = param_1;
    _objc_release();
    lStack_150 = lVar1;
    param_3 = (undefined1 *)puVar4;
    unaff_x19 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  plVar3 = &lStack_150;
  pcStack_118 = FUN_106d0a4d8;
  lStack_140 = unaff_x22;
  lStack_138 = unaff_x21;
  puStack_130 = puVar6;
  lStack_128 = unaff_x19;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_148 = PTR_PTR_1126f6888;
  _objc_msgSendSuper2(&lStack_150,PTR_s_init_1125d9248);
  if (plVar3 != (long *)0x0) {
    puVar6 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)plVar3 + 8);
    *(undefined1 **)((long)plVar3 + 8) = puVar6;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)plVar3 + 0x10);
    *(undefined1 **)((long)plVar3 + 0x10) = param_4;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 106d0a4d8; end: 106d0a57f; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider initWithSupplementaryViewModel:selectionHelper:] */

undefined1 *
FUN_106d0a4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6888;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d0a580; end: 106d0a587; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_106d0a580(void)

{
  return 1;
}



/* Entry: 106d0a588; end: 106d0a653; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_106d0a588(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar6;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126d21d8;
      _objc_opt_class(PTR_PTR_1126d21d8);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar6);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c18b5e0(puVar6);
      func_0x00010c2226c0(puVar6);
      func_0x00010c158e00(*(undefined8 *)(puVar1 + 0x10));
      func_0x00010c1facc0(puVar6);
      func_0x00010bdc9ec0(puVar1);
      func_0x00010c1fadc0(puVar6);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106d0a654; end: 106d0a763; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_106d0a654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d21d8;
    _objc_opt_class(PTR_PTR_1126d21d8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010c18b5e0(uVar5);
    func_0x00010c2226c0(uVar5);
    func_0x00010c158e00(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c1facc0(uVar5);
    func_0x00010bdc9ec0(param_1);
    func_0x00010c1fadc0(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d0a764; end: 106d0a7b3; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_106d0a764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  bVar1 = (int)param_4 == 0;
  if (bVar1) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  uVar2 = 0x4042800000000000;
  if (bVar1) {
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106d0a7b4; end: 106d0a7bf; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider _allItemsSelected] */

long FUN_106d0a7b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lVar10 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar11);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar3 = lVar10;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_106d0ee78;
        uStack_150 = 0x106d0ee88;
        uStack_148 = 0;
        puStack_168 = &uStack_170;
        func_0x00010c0bff00(*(undefined8 *)(lStack_138 + lVar13 * 8));
        uVar5 = puStack_168[5];
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = puStack_168[5];
        FUN_106d0eecc();
        if ((uVar6 & 1) != 0) {
          uVar6 = uVar5;
          func_0x00010bfbdda0();
          func_0x00010b5fad2c();
          if ((uVar6 & 1) == 0) {
            uVar6 = uVar5;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (uVar6 == 8) goto LAB_106d0ec90;
            uVar7 = puStack_168[5];
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar7;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar6;
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar7 != 0) {
              uVar7 = uVar6;
              func_0x00010b6f8630(uVar6,uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(uVar7);
            }
          }
          else {
LAB_106d0ec90:
            _objc_retain(uVar5);
            uVar7 = uVar5;
            func_0x00010010fab4(uVar5,PTR_DAT_1126a4ec0);
            uVar6 = uVar5;
            if ((int)uVar7 == 0) {
              uVar6 = 0;
            }
            _objc_retain(uVar6);
            _objc_release(uVar5);
            if (uVar6 == 0) goto LAB_106d0ed5c;
            func_0x00010befa120(puVar1);
            uVar6 = uVar5;
          }
          _objc_release(uVar6);
        }
LAB_106d0ed5c:
        _objc_release(uVar5);
        __Block_object_dispose(&uStack_170,8);
        _objc_release(uStack_148);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar8 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar9 = puVar2;
  func_0x00010bf51e00(puVar2);
  lVar3 = lVar11;
  func_0x00010c06d100(lVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return lVar3;
  }
  ___stack_chk_fail();
  lVar11 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return lVar10;
}



/* Entry: 106d0a7c0; end: 106d0a7c3; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider groupHeaderViewAllItemsSelected:] */

void FUN_106d0a7c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__allItemsSelected_112550150);
  return;
}



/* Entry: 106d0a7c4; end: 106d0a7eb; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider groupHeaderViewShouldToggleSelectAll:] */

/* WARNING: Possible PIC construction at 0x000106d0f1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106d0f258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d0f1e8) */
/* WARNING: Removing unreachable block (ram,0x000106d0f25c) */

void FUN_106d0a7c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  func_0x00010bdc9ec0();
  lVar11 = *(long *)(param_1 + 8);
  puVar1 = *(undefined **)(param_1 + 0x10);
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar1;
  _objc_retain();
  _objc_retain(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = lVar11;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar6);
      }
      uVar17 = *(undefined8 *)(lVar15 * 8);
      _objc_retain(puVar5);
      func_0x00010c0bff00(uVar17);
      _objc_release(puVar5);
      lVar15 = lVar15 + 1;
    } while (lVar7 != lVar15);
    lVar7 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  do {
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar5);
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar14 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010bf171a0(puVar1);
      _objc_release(puVar14);
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      puVar3 = *(undefined **)(lVar11 + 0x20);
      puVar9 = puVar12;
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_addObject__11259c1f0,puVar9);
      return;
    }
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar5);
      }
      puVar16 = *(undefined **)((long)puVar14 * 8);
      puVar9 = puVar16;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar16;
      FUN_106d0eecc();
      if ((int)puVar10 != 0) {
        puVar10 = puVar9;
        func_0x00010bfbdda0();
        func_0x00010b5fad2c();
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = puVar9;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          if (puVar10 != (undefined *)0x8) {
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar16;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
            puVar16 = puVar10;
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar16 == (undefined *)0x0) {
              _objc_release(puVar10);
              goto LAB_106d0f26c;
            }
            func_0x00010b6f8630(puVar10,puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            puVar9 = puVar10;
            goto code_r0x00010befa120;
          }
        }
        puVar12 = PTR_DAT_1126a4ec0;
        _objc_retain(puVar9);
        puVar16 = puVar9;
        func_0x00010010fab4(puVar9,puVar12);
        puVar10 = puVar9;
        if ((int)puVar16 == 0) {
          puVar10 = (undefined *)0x0;
        }
        _objc_retain(puVar10);
        _objc_release(puVar9);
        if (puVar10 != (undefined *)0x0) goto code_r0x00010befa120;
      }
LAB_106d0f26c:
      _objc_release(puVar9);
      puVar14 = puVar14 + 1;
    } while (puVar8 != puVar14);
    puVar8 = puVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106d0a7ec; end: 106d0a7f3; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_106d0a7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d0a7f4; end: 106d0a7fb; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_106d0a7f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106d0a7fc; end: 106d0a813; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_106d0a7fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0a814; end: 106d0a81f; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_106d0a814(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106d0a820; end: 106d0a863; -[SCMemoriesSnapClusterSectionSupplementaryViewProvider .cxx_destruct] */

void FUN_106d0a820(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d0a864; end: 106d0ab43; -[SCMemoriesSnapsClusterSectionController initWithConfiguration:collectionViewUpdater:streamingContentPrefetcher:selectionHelper:snapThumbnailGenerator:headerActionDelegate:dataProviderDelegate:displayDelegate:dataCoordinator:headerTitle:memoriesExperimentService:memoriesMonetizationServices:] */

undefined8 *
FUN_106d0a864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f6890;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_8);
    _objc_storeWeak(puVar1 + 4,param_9);
    _objc_storeWeak(puVar1 + 5,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bef9980(param_11);
  }
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



/* Entry: 106d0ab44; end: 106d0ab7b; -[SCMemoriesSnapsClusterSectionController setSelectMode:] */

void FUN_106d0ab44(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x88) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x88) = (char)param_3;
  func_0x00010bea7200();
                    /* WARNING: Could not recover jumptable at 0x00010bea7230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSelectModeForSnapSections_112587630);
  return;
}



/* Entry: 106d0ab7c; end: 106d0ac27; -[SCMemoriesSnapsClusterSectionController dataProviderForIndexPath:] */

void FUN_106d0ab7c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x60);
  lVar3 = param_3;
  func_0x00010c1554e0();
  uVar4 = lVar3 - (ulong)(lVar2 != 0);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010bf529e0();
  lVar3 = 0;
  if ((-1 < (long)uVar4) && (uVar4 < uVar1)) {
    lVar2 = *(long *)(param_1 + 0x50);
    func_0x00010c0dfd40(lVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c155a60(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d0ac28; end: 106d0ac47; -[SCMemoriesSnapsClusterSectionController dataProviders] */

void FUN_106d0ac28(long param_1)

{
  func_0x000100504554(*(undefined8 *)(param_1 + 0x50),&PTR___NSConcreteGlobalBlock_110975ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0ac48; end: 106d0ac4f;  */

void FUN_106d0ac48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sectionDataProvider_1126330b8);
  return;
}



/* Entry: 106d0ac50; end: 106d0ad2f; -[SCMemoriesSnapsClusterSectionController _setSelectModeForHeaderSection] */

void FUN_106d0ac50(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x60);
  if (uVar2 != 0) {
    func_0x00010c1554e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1108;
    _objc_opt_class(PTR_PTR_1126b1108);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      func_0x00010c155a60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d2330;
      _objc_opt_class(PTR_PTR_1126d2330);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar4 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      if (uVar4 != 0) {
        func_0x00010c1facc0(uVar2);
      }
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106d0ad30; end: 106d0ae87; -[SCMemoriesSnapsClusterSectionController _setSelectModeForSnapSections] */

void FUN_106d0ad30(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar18 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar15);
        }
        uVar3 = *(ulong *)(lStack_128 + lVar18 * 8);
        func_0x00010c155a60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d2338;
        _objc_opt_class(PTR_PTR_1126d2338);
        uVar5 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar1 = uVar3;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar3);
        if (uVar1 != 0) {
          func_0x00010c1facc0(uVar3);
        }
        _objc_release(uVar1);
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = lVar15;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  lVar18 = lVar15;
  func_0x00010bde1940();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar18);
  lVar2 = lVar18;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar18);
      }
      lVar6 = lVar18;
      func_0x00010c0e00e0(lVar18);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010bebccc0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      func_0x00010c1d0560(puVar4);
      _objc_release(lVar7);
      lVar19 = lVar19 + 1;
    } while (lVar2 != lVar19);
    lVar2 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  puVar8 = puVar4;
  FUN_106d0b10c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    func_0x00010bdef760(lVar15);
    goto LAB_106d0b0ac;
  }
  puVar17 = *(undefined **)(lVar15 + 0x58);
  _objc_retain(puVar17);
  _objc_retain(puVar8);
  puVar9 = puVar4;
  if (puVar17 == puVar8) {
    _objc_release(puVar8);
    _objc_release(puVar17);
LAB_106d0b05c:
    func_0x00010bf51e00(puVar4);
    func_0x00010bee0300(lVar15);
  }
  else {
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar17);
    }
    else {
      puVar10 = puVar17;
      func_0x00010c071ae0();
      _objc_release(puVar8);
      _objc_release(puVar17);
      if ((int)puVar10 != 0) goto LAB_106d0b05c;
    }
    func_0x00010bdee6c0(lVar15);
    func_0x00010bf51e00(puVar4);
    func_0x00010bdef760(lVar15);
  }
  _objc_release(puVar9);
LAB_106d0b0ac:
  uVar11 = *(undefined8 *)(lVar15 + 0x58);
  *(undefined **)(lVar15 + 0x58) = puVar8;
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(lVar18);
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined1 *)puVar12;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106d0ae88; end: 106d0b10b; -[SCMemoriesSnapsClusterSectionController _createSnapGroups:] */

void FUN_106d0ae88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
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
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde1940(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        lVar4 = lVar1;
        func_0x00010c0e00e0(lVar1,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bebccc0(param_1,param_2,lVar4,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        func_0x00010c1d0560(puVar2,param_2,lVar5,uVar9);
        _objc_release(lVar5);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puVar6 = puVar2;
  FUN_106d0b10c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    func_0x00010bdef760(param_1,param_2,0);
    goto LAB_106d0b0ac;
  }
  puVar10 = *(undefined **)(param_1 + 0x58);
  _objc_retain(puVar10);
  _objc_retain(puVar6);
  puVar7 = puVar2;
  if (puVar10 == puVar6) {
    _objc_release(puVar6);
    _objc_release(puVar10);
LAB_106d0b05c:
    func_0x00010bf51e00(puVar2);
    func_0x00010bee0300(param_1,param_2,puVar7);
  }
  else {
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    else {
      puVar8 = puVar10;
      func_0x00010c071ae0(puVar10,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar10);
      if ((int)puVar8 != 0) goto LAB_106d0b05c;
    }
    func_0x00010bdee6c0(param_1,param_2,param_3);
    func_0x00010bf51e00(puVar2);
    func_0x00010bdef760(param_1,param_2,puVar7);
  }
  _objc_release(puVar7);
LAB_106d0b0ac:
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar6;
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  return;
}



/* Entry: 106d0b10c; end: 106d0b157;  */

void FUN_106d0b10c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d0b158; end: 106d0b3cb; -[SCMemoriesSnapsClusterSectionController _updateSnapListSections:] */

void FUN_106d0b158(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  long lStack_1c0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x50);
    _objc_retain(lVar10);
    puVar6 = &uStack_130;
    lVar9 = lVar10;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          uVar14 = *(ulong *)(lStack_128 + lVar11 * 8);
          uVar2 = uVar14;
          func_0x00010c155a60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c1559c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar5 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar4);
          uVar2 = uVar3;
          if ((uVar5 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar3);
          uVar3 = uVar2;
          func_0x00010bf529e0();
          if (uVar3 != 0) {
            uVar3 = param_1;
            func_0x00010be24a00();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_1;
            func_0x00010be1e6a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(uVar2);
            _objc_retain(uVar5);
            if (uVar2 == uVar5) {
              _objc_release(uVar5);
              uVar14 = uVar2;
LAB_106d0b330:
              _objc_release(uVar14);
            }
            else {
              if (uVar5 == 0) {
                _objc_release();
LAB_106d0b314:
                func_0x00010c155a60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1f9220();
                goto LAB_106d0b330;
              }
              uVar7 = uVar2;
              func_0x00010c071ae0();
              _objc_release(uVar5);
              _objc_release(uVar2);
              if ((uVar7 & 1) == 0) goto LAB_106d0b314;
            }
            _objc_release(uVar5);
            _objc_release(puVar6);
            _objc_release(uVar3);
          }
          _objc_release(uVar2);
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        puVar6 = &uStack_130;
        lVar9 = lVar10;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar10);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x3032000000;
  pcStack_258 = FUN_106d0b5b8;
  uStack_250 = 0x106d0b5c8;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = puVar6;
  puStack_248 = puVar4;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar1 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar8);
      }
      func_0x00010c0bff00(*(undefined8 *)((long)puVar15 * 8));
      puVar15 = (undefined8 *)((long)puVar15 + 1);
    } while (puVar1 != puVar15);
    puVar1 = puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  uVar12 = puStack_268[5];
  _objc_retain(uVar12);
  __Block_object_dispose(&uStack_270,8);
  _objc_release(puStack_248);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_270);
  __Unwind_Resume();
  puVar6[5] = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 106d0b3cc; end: 106d0b5b7; -[SCMemoriesSnapsClusterSectionController _getDataModelsfromSnapGroup:] */

void FUN_106d0b3cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106d0b5b8;
  uStack_110 = 0x106d0b5c8;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  puStack_108 = puVar2;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c0bff00(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar5 = puStack_128[5];
  _objc_retain(uVar5);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 106d0b5b8; end: 106d0b5e7;  */

void FUN_106d0b5b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d0b5e8; end: 106d0b693; -[SCMemoriesSnapsClusterSectionController _groupTitleForSectionDataModel:] */

void FUN_106d0b5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf3e7c0();
  if (lVar1 == 1) {
    uVar2 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    ppuVar4 = (undefined **)PTR_PTR_1126cfb18;
    func_0x00010bf65540(PTR_PTR_1126cfb18,param_2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e84378;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106d0b694; end: 106d0b86b; -[SCMemoriesSnapsClusterSectionController _createHeaderSectionIfNeeded:] */

void FUN_106d0b694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bfe01c0();
    if (lVar2 == 1) {
      puVar3 = PTR_PTR_1126d2340;
      _objc_alloc(PTR_PTR_1126d2340);
      func_0x00010c04f880();
      puVar4 = PTR_PTR_1126d2348;
      _objc_alloc(PTR_PTR_1126d2348);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c078640(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf622a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01f280(puVar4,param_2,uVar5,uVar6);
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126d2330;
      _objc_alloc(PTR_PTR_1126d2330);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c29c500();
      uVar5 = 1;
      if (lVar2 == 1) {
        uVar5 = 2;
      }
      uVar1 = 3;
      if (lVar2 != 2) {
        uVar1 = uVar5;
      }
      func_0x00010c008620(puVar7,param_2,uVar6,uVar11,uVar1,puVar4,*(undefined8 *)(param_1 + 0x70));
      func_0x00010c1facc0();
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c161940(puVar7,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010c1f9240(puVar3,param_2,puVar7);
      puVar8 = puVar7;
      func_0x00010c155a00(puVar7,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b1308;
      _objc_alloc();
      puVar10 = puVar8;
      FUN_106d0b86c(0,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c042ce0(puVar9,param_2,puVar3,puVar10);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      *(undefined **)(param_1 + 0x60) = puVar9;
      _objc_release(uVar5);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d0b86c; end: 106d0b943;  */

void FUN_106d0b86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b16f8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(param_1,puVar2,param_3,0,puVar1,puVar3,0,0,param_2);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d0b944; end: 106d0bc5b; -[SCMemoriesSnapsClusterSectionController _createListSections:] */

void FUN_106d0b944(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_106d0b10c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        lVar5 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          lVar6 = param_1;
          func_0x00010bdf37e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          lVar7 = param_1;
          func_0x00010be1e6a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b1308;
          _objc_alloc(PTR_PTR_1126b1308);
          lVar9 = lVar7;
          FUN_106d0b86c(0x3ff0000000000000,lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c042ce0(puVar8);
          _objc_release(lVar9);
          func_0x00010befa120(puVar3);
          _objc_release(puVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  puVar8 = puVar2;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar8;
  _objc_release(uVar11);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010befa120(puVar8);
  }
  puVar10 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010befa160(puVar8);
  _objc_release(puVar10);
  _objc_initWeak(auStack_138,param_1);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106d0bc5c;
  puStack_150 = &UNK_110841fb0;
  _objc_copyWeak(auStack_140,auStack_138);
  _objc_retain(puVar8);
  puStack_148 = puVar8;
  func_0x000100162d98("APPSTORE",&puStack_168);
  _objc_release(puStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf51e00(uVar11);
  func_0x00010bea7100(lVar1);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d0bc5c; end: 106d0bca7;  */

void FUN_106d0bc5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010bea7100(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d0bca8; end: 106d0bcb3; -[SCMemoriesSnapsClusterSectionController _setSectionWithConfigurations:] */

void FUN_106d0bca8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setSectionWithConfigurations_ani_11265bff0,
             param_3,0);
  return;
}



/* Entry: 106d0bcb4; end: 106d0be9b; -[SCMemoriesSnapsClusterSectionController _createSnapListSection:] */

void FUN_106d0bcb4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      puVar9 = PTR_PTR_1126d2350;
      _objc_alloc(PTR_PTR_1126d2350);
      func_0x00010c04f800();
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    puVar10 = PTR_PTR_1126d2340;
    _objc_alloc(PTR_PTR_1126d2340);
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c04f880(puVar10,param_2,puVar9,lVar7,0);
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126d2338;
    _objc_alloc(PTR_PTR_1126d2338);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x00010c29c500();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e84398;
    if (lVar7 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e843b8;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e843d8;
    if (lVar7 != 2) {
      ppuVar2 = ppuVar1;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar8 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(ppuVar2);
    func_0x00010c2572e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e780(puVar6,param_2,uVar11,uVar12,ppuVar2,uVar3,uVar8);
    _objc_release(ppuVar2);
    _objc_release(uVar8);
    func_0x00010c1facc0(puVar6,param_2,*(undefined1 *)(param_1 + 0x88));
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18b5e0(puVar6,param_2,param_1);
    _objc_release(param_1);
    func_0x00010c1f9240(puVar10,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar9);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106d0be9c; end: 106d0bf73; -[SCMemoriesSnapsClusterSectionController _clusterDataModels:] */

void FUN_106d0be9c(undefined **param_1,undefined **param_2,undefined8 ****param_3,
                  undefined ***param_4)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined **ppuVar16;
  undefined **unaff_x22;
  undefined8 **ppuVar17;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined8 ****ppppuVar18;
  undefined8 ****unaff_x28;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 ***pppuStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 **ppuStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **appuStack_130 [16];
  long lStack_b0;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined8 ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar6 = param_3;
  _objc_retain(param_3);
  ppppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppppuVar2 != (undefined8 ****)0x0) {
    puVar3 = param_1[2];
    func_0x00010bf3e7c0();
    if (puVar3 == (undefined *)0x1) {
      ppppuVar6 = param_3;
      func_0x00010bde1960();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d0bf3c;
    }
    if (puVar3 == (undefined *)0x0) {
      ppuStack_38 = &PTR____CFConstantStringClassReference_110e84378;
      ppppuVar6 = &pppuStack_30;
      param_4 = &ppuStack_38;
      param_1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      pppuStack_30 = param_3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106d0bf3c;
    }
  }
  param_1 = (undefined **)0x0;
LAB_106d0bf3c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    ppppuVar18 = (undefined8 ****)&ppuStack_170;
    pcStack_48 = FUN_106d0bf74;
    lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar11 = ppppuVar6;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(ppppuVar6);
    ppppuVar2 = ppppuVar6;
    func_0x00010bf529e0();
    if (ppppuVar2 == (undefined8 ****)0x0) {
      ppuVar4 = param_1;
      param_1 = (undefined **)0x0;
    }
    else {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lStack_168 = 0;
      ppuStack_170 = (undefined8 ***)0x0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      _objc_retain(ppppuVar6);
      param_4 = appuStack_130;
      ppppuVar2 = ppppuVar6;
      func_0x00010bf52a60();
      if (ppppuVar2 != (undefined8 ****)0x0) {
        unaff_x26 = *plStack_160;
        unaff_x27 = &PTR_PTR_1126cf000;
        do {
          unaff_x28 = (undefined8 ****)0x0;
          do {
            if (*plStack_160 != unaff_x26) {
              _objc_enumerationMutation(ppppuVar6);
            }
            unaff_x22 = *(undefined ***)(lStack_168 + (long)unaff_x28 * 8);
            ppuVar5 = unaff_x22;
            func_0x00010c113000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar3 = PTR_PTR_1126cfb18;
            unaff_x23 = (undefined *)0x0;
            if (ppuVar5 != (undefined **)0x0) {
              func_0x00010c113000(unaff_x22);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf65540();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x22);
              unaff_x24 = ppuVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x24 == (undefined **)0x0) {
                unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                unaff_x25 = unaff_x24;
                func_0x00010c0d3c80();
              }
              func_0x00010befa120();
              unaff_x22 = unaff_x25;
              func_0x00010bf51e00();
              func_0x00010c1d0640(ppuVar4);
              _objc_release(unaff_x22);
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
              _objc_release(puVar3);
              unaff_x23 = puVar3;
            }
            unaff_x28 = (undefined8 ****)((long)unaff_x28 + 1);
          } while (ppppuVar2 != unaff_x28);
          param_4 = appuStack_130;
          ppppuVar2 = ppppuVar6;
          ppppuVar18 = (undefined8 ****)&ppuStack_170;
          func_0x00010bf52a60();
        } while (ppppuVar2 != (undefined8 ****)0x0);
      }
      _objc_release(ppppuVar6);
      param_1 = ppuVar4;
      func_0x00010bf51e00();
      _objc_release(ppuVar4);
      ppppuVar11 = ppppuVar18;
    }
    ppppuVar2 = ppppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
      ___stack_chk_fail();
      pcStack_178 = FUN_106d0c1a4;
      lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_1d0 = unaff_x28;
      ppuStack_1c8 = unaff_x27;
      lStack_1c0 = unaff_x26;
      ppuStack_1b8 = unaff_x25;
      ppuStack_1b0 = unaff_x24;
      puStack_1a8 = unaff_x23;
      ppuStack_1a0 = unaff_x22;
      ppuStack_198 = param_1;
      ppuStack_190 = ppuVar4;
      pppuStack_188 = ppppuVar6;
      ppuStack_180 = &puStack_50;
      _objc_retain(ppppuVar11);
      _objc_retain(param_4);
      ppppuVar6 = ppppuVar11;
      func_0x00010bf529e0();
      if (ppppuVar6 == (undefined8 ****)0x0) {
        param_1 = (undefined **)0x0;
      }
      else {
        puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_298 = 0xc2000000;
        pcStack_290 = FUN_106d0c4a0;
        puStack_288 = &UNK_110975b28;
        param_2 = &puStack_2a0;
        ppppuVar6 = ppppuVar11;
        pppuStack_280 = ppppuVar2;
        func_0x000100504554(ppppuVar11,param_2);
        puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c06eae0(ppppuVar2[2]);
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        puStack_1f8 = puVar3;
        func_0x00010c06eae0(ppppuVar2[2]);
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        puStack_1f0 = puVar7;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        puStack_1e8 = puVar8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1e0 = puVar9;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar2 = ppppuVar6;
        func_0x00010c246cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar6);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain(ppppuVar2);
        ppppuVar6 = ppppuVar2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (ppppuVar6 != (undefined8 ****)0x0) {
          ppppuVar18 = (undefined8 ****)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(ppppuVar2);
            }
            puVar7 = PTR_PTR_1126cfc28;
            func_0x00010c23f7a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(puVar7);
            ppppuVar18 = (undefined8 ****)((long)ppppuVar18 + 1);
          } while (ppppuVar6 != ppppuVar18);
          ppppuVar6 = ppppuVar2;
          func_0x00010bf52a60();
        }
        _objc_release(ppppuVar2);
        param_1 = (undefined **)PTR_PTR_1126cfc30;
        _objc_alloc();
        func_0x00010c052dc0();
        _objc_release(puVar3);
        _objc_release(ppppuVar2);
      }
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
        ___stack_chk_fail();
        _objc_retain(param_2);
        ppuVar12 = ppppuVar11[4][0x10];
        func_0x00010c2572e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_2;
        func_0x00010c245680(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar17;
        func_0x00010c07e5c0();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar17);
        _objc_release(ppuVar12);
        if ((int)ppuVar13 == 0) {
          ppuVar17 = (undefined8 **)0x0;
        }
        else {
          ppuVar12 = ppppuVar11[4][0xf];
          func_0x00010c269d40(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar12;
          func_0x00010c234580();
          _objc_release(ppuVar12);
        }
        ppuVar14 = ppppuVar11[4][0x10];
        func_0x00010c2572e0(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_2;
        func_0x00010c245680(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar12;
        func_0x00010c11eb40(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar12);
        _objc_release(ppuVar14);
        ppuVar4 = param_2;
        func_0x00010c245680(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_2;
        func_0x00010bf97060(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = param_2;
        func_0x00010c072ac0(param_2);
        param_1 = ppuVar4;
        FUN_106d0e8b0(ppuVar4,ppuVar5,ppuVar16,ppuVar13,ppuVar17,ppuVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar15);
        _objc_release(param_2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106d0bf74; end: 106d0c1a3; -[SCMemoriesSnapsClusterSectionController _clusterDataModelsByMonth:] */

void FUN_106d0bf74(undefined8 param_1,undefined **param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined **unaff_x20;
  undefined **unaff_x22;
  undefined8 uVar18;
  undefined *unaff_x23;
  undefined **ppuVar19;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined1 *puVar20;
  undefined1 *unaff_x28;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar17 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined1 *)0x0) {
    ppuVar19 = (undefined **)0x0;
  }
  else {
    unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    param_4 = auStack_f0;
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x26 = *plStack_120;
      unaff_x27 = &PTR_PTR_1126cf000;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != unaff_x26) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
          ppuVar19 = unaff_x22;
          func_0x00010c113000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar3 = PTR_PTR_1126cfb18;
          unaff_x23 = (undefined *)0x0;
          if (ppuVar19 != (undefined **)0x0) {
            func_0x00010c113000(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf65540();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x22);
            unaff_x24 = unaff_x20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 == (undefined **)0x0) {
              unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              unaff_x25 = unaff_x24;
              func_0x00010c0d3c80();
            }
            func_0x00010befa120();
            unaff_x22 = unaff_x25;
            func_0x00010bf51e00();
            func_0x00010c1d0640(unaff_x20);
            _objc_release(unaff_x22);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            _objc_release(puVar3);
            unaff_x23 = puVar3;
          }
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        param_4 = auStack_f0;
        puVar2 = param_3;
        puVar17 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    ppuVar19 = unaff_x20;
    func_0x00010bf51e00();
    _objc_release(unaff_x20);
    puVar9 = (undefined1 *)puVar17;
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_106d0c1a4;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    ppuStack_178 = unaff_x25;
    ppuStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    ppuStack_160 = unaff_x22;
    ppuStack_158 = ppuVar19;
    ppuStack_150 = unaff_x20;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_retain(param_4);
    puVar20 = puVar9;
    func_0x00010bf529e0();
    if (puVar20 == (undefined1 *)0x0) {
      ppuVar19 = (undefined **)0x0;
    }
    else {
      puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_258 = 0xc2000000;
      pcStack_250 = FUN_106d0c4a0;
      puStack_248 = &UNK_110975b28;
      param_2 = &puStack_260;
      puVar20 = puVar9;
      puStack_240 = puVar2;
      func_0x000100504554(puVar9,param_2);
      puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c06eae0(*(undefined8 *)(puVar2 + 0x10));
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_1b8 = puVar3;
      func_0x00010c06eae0(*(undefined8 *)(puVar2 + 0x10));
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_1b0 = puVar4;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      puStack_1a8 = puVar5;
      func_0x00010c246960();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1a0 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar20;
      func_0x00010c246cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(puVar8);
      puVar2 = puVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined1 *)0x0) {
        puVar20 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar8);
          }
          puVar4 = PTR_PTR_1126cfc28;
          func_0x00010c23f7a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar4);
          puVar20 = puVar20 + 1;
        } while (puVar2 != puVar20);
        puVar2 = puVar8;
        func_0x00010bf52a60();
      }
      _objc_release(puVar8);
      ppuVar19 = (undefined **)PTR_PTR_1126cfc30;
      _objc_alloc();
      func_0x00010c052dc0();
      _objc_release(puVar3);
      _objc_release(puVar8);
    }
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_retain(param_2);
      uVar10 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 0x80);
      func_0x00010c2572e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = param_2;
      func_0x00010c245680(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar19;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar18;
      func_0x00010c07e5c0();
      _objc_release(ppuVar11);
      _objc_release(ppuVar19);
      _objc_release(uVar18);
      _objc_release(uVar10);
      if ((int)uVar12 == 0) {
        uVar18 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 0x78);
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar10;
        func_0x00010c234580();
        _objc_release(uVar10);
      }
      uVar13 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 0x80);
      func_0x00010c2572e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = param_2;
      func_0x00010c245680(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar19;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar10;
      func_0x00010c11eb40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(ppuVar19);
      _objc_release(uVar10);
      _objc_release(uVar13);
      ppuVar11 = param_2;
      func_0x00010c245680(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = param_2;
      func_0x00010bf97060(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = param_2;
      func_0x00010c072ac0(param_2);
      ppuVar19 = ppuVar11;
      FUN_106d0e8b0(ppuVar11,ppuVar15,ppuVar16,uVar12,uVar18,uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar15);
      _objc_release(ppuVar11);
      _objc_release(uVar14);
      _objc_release(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar19);
  return;
}



/* Entry: 106d0c1a4; end: 106d0c49f; -[SCMemoriesSnapsClusterSectionController _snapGroupViewModel:groupTitle:] */

void FUN_106d0c1a4(long param_1,undefined **param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    ppuVar17 = (undefined **)0x0;
  }
  else {
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106d0c4a0;
    puStack_118 = &UNK_110975b28;
    param_2 = &puStack_130;
    lVar2 = param_3;
    lStack_110 = param_1;
    func_0x000100504554(param_3,param_2);
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c06eae0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_88 = puVar3;
    func_0x00010c06eae0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_80 = puVar4;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_78 = puVar5;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c246cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        puVar4 = PTR_PTR_1126cfc28;
        func_0x00010c23f7a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar4);
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    ppuVar17 = (undefined **)PTR_PTR_1126cfc30;
    _objc_alloc();
    func_0x00010c052dc0();
    _objc_release(puVar3);
    _objc_release(lVar8);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x80);
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_2;
    func_0x00010c245680(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar17;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar16;
    func_0x00010c07e5c0();
    _objc_release(ppuVar10);
    _objc_release(ppuVar17);
    _objc_release(uVar16);
    _objc_release(uVar9);
    if ((int)uVar11 == 0) {
      uVar16 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x78);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar9;
      func_0x00010c234580();
      _objc_release(uVar9);
    }
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x80);
    func_0x00010c2572e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = param_2;
    func_0x00010c245680(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar17;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c11eb40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(ppuVar17);
    _objc_release(uVar9);
    _objc_release(uVar12);
    ppuVar10 = param_2;
    func_0x00010c245680(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = param_2;
    func_0x00010bf97060(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = param_2;
    func_0x00010c072ac0(param_2);
    ppuVar17 = ppuVar10;
    FUN_106d0e8b0(ppuVar10,ppuVar14,ppuVar15,uVar11,uVar16,uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    _objc_release(ppuVar10);
    _objc_release(uVar13);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
  return;
}



/* Entry: 106d0c4a0; end: 106d0c68f;  */

void FUN_106d0c4a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c07e5c0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c234580();
    _objc_release(uVar4);
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c2572e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c11eb40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar4 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c072ac0(param_2);
  uVar5 = uVar4;
  FUN_106d0e8b0(uVar4,uVar2,uVar1,uVar3,uVar7,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d0c690; end: 106d0c7f3; -[SCMemoriesSnapsClusterSectionController memoriesSubscreenDataCoordinator:didUpdateDataModels:] */

void FUN_106d0c690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106d0c720;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106d0c7f4; end: 106d0c833;  */

undefined8 FUN_106d0c7f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010b5fab34();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106d0c834; end: 106d0c947;  */

undefined8 FUN_106d0c834(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf977c0();
  if ((int)uVar1 - 1U < 2) {
    _objc_release(uVar4);
  }
  else {
    uVar1 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf977c0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    if ((int)uVar2 != 3) {
      uVar4 = 0;
      goto LAB_106d0c928;
    }
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf622a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf97060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
LAB_106d0c928:
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106d0c948; end: 106d0c94f; -[SCMemoriesSnapsClusterSectionController selectMode] */

undefined1 FUN_106d0c948(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 106d0c950; end: 106d0ca1b; -[SCMemoriesSnapsClusterSectionController .cxx_destruct] */

void FUN_106d0c950(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d0ca1c; end: 106d0caff;  */

undefined * FUN_106d0ca1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cfb18;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0d0b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf65160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cfb18;
  func_0x00010c0d0b60(PTR_PTR_1126cfb18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf65160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf433a0(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 106d0cb00; end: 106d0cb0b; +[SCMemoriesSnapsSectionDataProvider announcerIdentifier] */

undefined ** FUN_106d0cb00(void)

{
  return &PTR____CFConstantStringClassReference_110e843f8;
}



/* Entry: 106d0cb0c; end: 106d0cb13; -[SCMemoriesSnapsSectionDataProvider addListener:] */

void FUN_106d0cb0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d0cb14; end: 106d0cb1b; -[SCMemoriesSnapsSectionDataProvider removeListener:] */

void FUN_106d0cb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d0cb1c; end: 106d0cc5b; -[SCMemoriesSnapsSectionDataProvider initWithStreamingContentPrefetcher:snapThumbnailGenerator:reuseIdentifier:memoriesExperimentService:storageQuotaManager:] */

undefined1 *
FUN_106d0cb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6898;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d0cc5c; end: 106d0cc6f; -[SCMemoriesSnapsSectionDataProvider setSelectMode:] */

void FUN_106d0cc5c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x38) != param_3) {
    *(char *)(param_1 + 0x38) = (char)param_3;
  }
  return;
}



/* Entry: 106d0cc70; end: 106d0cd23; -[SCMemoriesSnapsSectionDataProvider setSectionDataModel:] */

void FUN_106d0cc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106d0cd24;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106d0cd24; end: 106d0cd5b;  */

void FUN_106d0cd24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25fb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d0cd5c; end: 106d0cdcb; -[SCMemoriesSnapsSectionDataProvider numberOfItemsInSection:] */

ulong FUN_106d0cd5c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf529e0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106d0cdcc; end: 106d0ceab; -[SCMemoriesSnapsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106d0cdcc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c1559c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d0ceac;
  puStack_48 = &UNK_11086b8d0;
  uStack_40 = uVar1;
  uStack_38 = param_1;
  _objc_retain(uVar1);
  uVar5 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d0ceac; end: 106d0cf23;  */

void FUN_106d0ceac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d0cf24; end: 106d0cf9f; -[SCMemoriesSnapsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106d0cf24(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106d0d0cc;
    puStack_90 = &UNK_110845ae0;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    uStack_78 = *(undefined8 *)(puVar1 + 0x20);
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4ec0();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0cfa0; end: 106d0d0cb; -[SCMemoriesSnapsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106d0cfa0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d0d0cc;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4ec0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106d0d0cc; end: 106d0d113;  */

void FUN_106d0d0cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4ec0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d0d114; end: 106d0d22f; -[SCMemoriesSnapsSectionDataProvider _configureCollectionViewCell:] */

void FUN_106d0d114(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cfc70;
  _objc_opt_class(PTR_PTR_1126cfc70);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077f00();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c233f00();
    func_0x00010bf47bc0(param_3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1face0(param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d0d230; end: 106d0d247; -[SCMemoriesSnapsSectionDataProvider dataProviderDelegate] */

void FUN_106d0d230(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0d248; end: 106d0d253; -[SCMemoriesSnapsSectionDataProvider setDataProviderDelegate:] */

void FUN_106d0d248(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106d0d254; end: 106d0d25b; -[SCMemoriesSnapsSectionDataProvider sectionDataModel] */

undefined8 FUN_106d0d254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d0d25c; end: 106d0d263; -[SCMemoriesSnapsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106d0d25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d0d264; end: 106d0d293; -[SCMemoriesSnapsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106d0d264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d0d294; end: 106d0d2ab; -[SCMemoriesSnapsSectionDataProvider delegate] */

void FUN_106d0d294(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


