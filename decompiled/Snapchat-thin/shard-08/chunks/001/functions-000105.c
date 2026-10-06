/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105daefe0; end: 105daf227; -[SCPreviewFeatureInfoStickerImpl didTapPreviewContainerView:] */

undefined8 FUN_105daefe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0x60) != '\x01') {
    return 1;
  }
  _objc_retain(param_3);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c253b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5c90;
  _objc_opt_class(PTR_PTR_1126b5c90);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  _objc_release(uVar2);
  if ((uVar5 & 1) != 0) {
    uVar11 = 1;
    goto LAB_105daf200;
  }
  uVar5 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar6 = uVar3;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010010fab4();
  uVar5 = uVar6;
  if ((int)uVar7 == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar11 = 1;
  if ((uVar2 != 0) && (uVar5 != 0)) {
    uVar8 = *(ulong *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c253880(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c22fe40();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar7 = uVar6;
    func_0x00010bfee0e0();
    if ((uVar10 & 1) == 0) {
      if ((uVar7 == 10) || (uVar7 == 0x10)) {
LAB_105daf1b0:
        func_0x00010bfee0e0(uVar6);
        goto LAB_105daf1bc;
      }
      if (uVar7 == 0x15) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
        func_0x00010c071200();
        if (iVar1 != 0) goto LAB_105daf1b0;
      }
    }
    else {
LAB_105daf1bc:
      uVar6 = uVar3;
      func_0x00010c253880(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be06fc0(param_1);
      _objc_release(uVar6);
    }
    uVar11 = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
LAB_105daf200:
  _objc_release(uVar3);
  return uVar11;
}



/* Entry: 105daf228; end: 105daf2cb; -[SCPreviewFeatureInfoStickerImpl insertInfoStickerWithStickerView:stickerType:defaultTitle:automaticallyCloseToolbarOnCompletion:isFromCaption:completion:] */

void FUN_105daf228(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be79540(param_1,param_2,param_6,param_7,param_8);
  uVar1 = param_1;
  func_0x00010be06f60(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    func_0x00010be7bf20(param_1,param_2,param_3,param_4,param_5,0);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105daf2cc; end: 105daf34b; -[SCPreviewFeatureInfoStickerImpl insertInfoStickerWithCTItemInstance:stickerType:defaultTitle:automaticallyCloseToolbarOnCompletion:isFromCaption:completion:] */

void FUN_105daf2cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010be79540(param_1,param_2,param_6,param_7,param_8);
  uVar1 = param_1;
  func_0x00010be06f60(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    func_0x00010be7f460(param_1,param_2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105daf34c; end: 105daf38b; -[SCPreviewFeatureInfoStickerImpl hasInfoStickerOnSnapWithType:] */

bool FUN_105daf34c(long param_1)

{
  long lVar1;
  
  func_0x00010c255440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105daf38c; end: 105daf393; -[SCPreviewFeatureInfoStickerImpl disableExistingInfoStickerEditing] */

void FUN_105daf38c(long param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 105daf394; end: 105daf4af; -[SCPreviewFeatureInfoStickerImpl stickersOnSnapWithInfoType:] */

void FUN_105daf394(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105daf4b0; end: 105daf53b; -[SCPreviewFeatureInfoStickerImpl infoStickerNamesOnSnapWithType:] */

void FUN_105daf4b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((param_3 == 6) || (puVar3 = PTR____NSArray0__struct_11034ab48, param_3 == 5)) {
    puVar1 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010c255300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100504554();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105daf53c; end: 105daf5c3;  */

void FUN_105daf53c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c49c0;
  _objc_opt_class(PTR_PTR_1126c49c0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105daf5c4; end: 105daf66b;  */

void FUN_105daf5c4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb2f0;
  _objc_opt_class(PTR_PTR_1126bb2f0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c297b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105daf66c; end: 105daf6cb; -[SCPreviewFeatureInfoStickerImpl topicsOnSnap] */

void FUN_105daf66c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105daf6cc; end: 105daf753;  */

void FUN_105daf6cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c49c0;
  _objc_opt_class(PTR_PTR_1126c49c0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010c2751c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105daf754; end: 105daf7b3; -[SCPreviewFeatureInfoStickerImpl venueStickerPlaceTagsOnSnap] */

void FUN_105daf754(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105daf7b4; end: 105daf83b;  */

void FUN_105daf7b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb2f0;
  _objc_opt_class(PTR_PTR_1126bb2f0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010c0fd560(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105daf83c; end: 105daf897; -[SCPreviewFeatureInfoStickerImpl canRemoveStickerView:] */

long FUN_105daf83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c111ea0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105daf898; end: 105daf92b; -[SCPreviewFeatureInfoStickerImpl removeStickerView:] */

void FUN_105daf898(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb358;
  _objc_opt_class(PTR_PTR_1126bb358);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c28ca40();
    _objc_release(param_1);
  }
  func_0x00010c12c960(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105daf92c; end: 105daf97b; -[SCPreviewFeatureInfoStickerImpl _editExistingStickerIfPossibleWithType:] */

void FUN_105daf92c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd7f00();
  if (((int)uVar1 != 0) &&
     (uVar1 = param_1, func_0x00010bdd9b20(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    func_0x00010be06f40(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 105daf97c; end: 105dafb1f; -[SCPreviewFeatureInfoStickerImpl _presentInfoStickerEditorViewControllerForStickerView:stickerType:defaultTitle:sticker:] */

void FUN_105daf97c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22fe40();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c1a7f60(param_3,param_2,1);
      func_0x00010be7f460(param_1,param_2,param_6,param_3);
      goto LAB_105dafaf0;
    }
  }
  puVar3 = PTR_PTR_1126c49c8;
  _objc_alloc(PTR_PTR_1126c49c8);
  lVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c04c9c0(puVar3,param_2,param_3,param_4,param_5,lVar4,*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80));
  _objc_release(lVar4);
  func_0x00010c18b5e0(puVar3,param_2,param_1);
  func_0x00010c1c8b80(puVar3,param_2,5);
  func_0x00010c1a7f60(param_3,param_2,1);
  func_0x00010c0f3ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
LAB_105dafaf0:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dafb20; end: 105db0043; -[SCPreviewFeatureInfoStickerImpl _presentValdiStickerEditorForItemInstance:editingStickerView:] */

void FUN_105dafb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_5 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0f3ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    lVar2 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar5 = PTR_PTR_1126c49d0;
      _objc_opt_new();
      puVar6 = PTR_PTR_1126b3800;
      _objc_alloc(PTR_PTR_1126b3800);
      func_0x00010bffa140();
      func_0x00010c1cb260(puVar5);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c49d8;
      _objc_alloc(PTR_PTR_1126c49d8);
      lVar2 = lVar4;
      func_0x00010c29bf00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar7 = lVar4;
      func_0x00010c29bf00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c0630e0(param_3,param_4,puVar6);
      func_0x00010c18fee0(puVar5);
      _objc_release(puVar6);
      _objc_release(lVar7);
      _objc_release(lVar2);
      uStack_a8 = 0;
      uStack_98 = 0x3042000000;
      pcStack_90 = FUN_105db0044;
      uStack_88 = 0x105db0050;
      puStack_a0 = &uStack_a8;
      _objc_initWeak(auStack_80,0);
      _objc_initWeak(auStack_b0,param_5);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105db0058;
      puStack_c0 = &UNK_11085c360;
      _objc_copyWeak(auStack_b8,auStack_b0);
      ppuVar8 = &puStack_d8;
      _objc_retainBlock();
      puStack_100 = puVar6;
      uStack_f8 = 0xc2000000;
      uStack_f0 = 0x105db00ec;
      puStack_e8 = &UNK_1108e7c40;
      _objc_copyWeak(auStack_e0,auStack_b0);
      ppuVar9 = &puStack_100;
      _objc_retainBlock();
      puVar10 = PTR_PTR_1126c49e0;
      _objc_opt_new(PTR_PTR_1126c49e0);
      puStack_148 = puVar6;
      uStack_140 = 0xc2000000;
      uStack_138 = 0x105db020c;
      puStack_130 = &UNK_1108e8de0;
      _objc_copyWeak(auStack_108,auStack_b0);
      puStack_110 = &uStack_a8;
      _objc_retain(param_8);
      uStack_128 = param_8;
      _objc_retain(ppuVar8);
      ppuStack_120 = ppuVar8;
      _objc_retain(ppuVar9);
      ppuStack_118 = ppuVar9;
      func_0x00010c1d2040(puVar10);
      _objc_copyWeak(auStack_150,auStack_b0);
      _objc_retain(param_8);
      _objc_retain(ppuVar8);
      func_0x00010c1d2500(puVar10);
      puVar6 = PTR_PTR_1126c49e8;
      _objc_alloc(PTR_PTR_1126c49e8);
      func_0x00010c061d40();
      _objc_storeWeak(puStack_a0 + 5,puVar6);
      lVar2 = lVar4;
      func_0x00010c29bf00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(puVar6);
      _objc_release(lVar2);
      func_0x00010c16d4a0(puVar6);
      lVar2 = lVar4;
      func_0x00010c29bf00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar2);
      func_0x00010c1cbe20(puVar6);
      func_0x00010c08cdc0(puVar6);
      _objc_release(puVar6);
      _objc_release(ppuVar8);
      _objc_release(param_8);
      _objc_destroyWeak(auStack_150);
      _objc_release(ppuStack_118);
      _objc_release(ppuStack_120);
      _objc_release(uStack_128);
      _objc_destroyWeak(auStack_108);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
      _objc_destroyWeak(auStack_e0);
      _objc_release(ppuVar8);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_b0);
      __Block_object_dispose(&uStack_a8,8);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar5);
      goto LAB_105daff88;
    }
  }
  func_0x00010c1a7f60(param_8);
  func_0x00010be17600(param_5);
LAB_105daff88:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 105db0044; end: 105db0057;  */

void FUN_105db0044(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 105db0058; end: 105db02db;  */

void FUN_105db0058(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x98) == '\x01') {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar1);
      puVar2 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb220(lVar1);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    func_0x00010be17600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db02dc; end: 105db0463;  */

void FUN_105db02dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12c960();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x20) == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
    }
    else {
      lVar2 = lVar1;
      func_0x00010be7fee0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = lVar1 + 0x10;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar2;
        func_0x00010c253880(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07f9e0();
        func_0x00010c06f8c0(lVar2);
        func_0x00010c073ae0(lVar2);
        lVar5 = lVar1 + 0x18;
        _objc_loadWeakRetained(lVar5);
        lVar6 = lVar5;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c243340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0b20(lVar3);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db0464; end: 105db04c3;  */

void FUN_105db0464(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 105db04c4; end: 105db0707;  */

void FUN_105db04c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x105db05a4;
  puStack_60 = &UNK_1108e8e10;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105db0708; end: 105db0717;  */

void FUN_105db0708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105db0714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),3);
  return;
}



/* Entry: 105db0718; end: 105db0723; -[SCPreviewFeatureInfoStickerImpl _editStickerView:stickerType:sticker:] */

void FUN_105db0718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentInfoStickerEditorViewCon_11257c968,param_3,param_4,0,param_5);
  return;
}



/* Entry: 105db0724; end: 105db0cb7; -[SCPreviewFeatureInfoStickerImpl didFinishEditingInfoStickerView:infoStickerType:] */

void FUN_105db0724(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c255440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_5);
  _objc_opt_class(puVar3);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  uVar4 = uVar2;
  func_0x00010bf529e0();
  if ((uVar4 == 0) || (uVar4 = param_3, func_0x00010bdd9b20(), (uVar4 & 1) != 0)) {
    uVar4 = uVar1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    if (uVar5 == 0) {
      if (*(char *)(param_3 + 0x98) == '\x01') {
        lVar11 = param_3 + 0x28;
        _objc_loadWeakRetained(lVar11);
        puVar3 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb220(lVar11);
        _objc_release(puVar3);
        _objc_release(lVar11);
      }
    }
    else {
      func_0x00010bf20c00(uVar1);
      func_0x00010c19f0e0(uVar1);
      func_0x00010c219b60(uVar1);
      func_0x00010c28c820(uVar1);
      func_0x00010be3c940(param_3);
    }
    func_0x00010be17600(param_3);
  }
  else {
    uVar5 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar4 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = uVar1;
    func_0x00010c26b700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d500();
    _objc_release(uVar7);
    if ((int)puVar3 == 0) {
      if (uVar4 != 0) {
        func_0x00010c28c820(uVar6);
        func_0x00010c1a7f60(uVar6);
        func_0x00010bf20c00(uVar1);
        func_0x00010c19f0e0(uVar6);
        func_0x00010bf345e0(uVar5);
        func_0x00010c23d620(uVar5);
        func_0x00010c17a6a0(param_1,param_2,uVar5);
      }
      if (*(char *)(param_3 + 0x98) == '\x01') {
        lVar11 = param_3 + 0x28;
        _objc_loadWeakRetained(lVar11);
        puVar3 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb220(lVar11);
        _objc_release(puVar3);
        _objc_release(lVar11);
      }
      puVar3 = PTR_PTR_1126ba8a8;
      uVar10 = *(undefined8 *)(param_3 + 0xa0);
      func_0x00010c240000(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a3e0(puVar3);
      _objc_release(uVar6);
      _objc_release(uVar10);
      lVar11 = param_3 + 8;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3 + 8;
      _objc_loadWeakRetained(lVar13);
      uVar6 = uVar2;
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2be0(lVar12);
      _objc_release(uVar6);
      _objc_release(lVar13);
    }
    else {
      func_0x00010c18b940(uVar5);
      func_0x00010c12c960(uVar5);
      lVar11 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar11);
      uVar6 = uVar5;
      func_0x00010c253880(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07f9e0();
      func_0x00010c06f8c0(uVar5);
      func_0x00010c073ae0(uVar5);
      lVar13 = param_3 + 0x18;
      _objc_loadWeakRetained(lVar13);
      lVar12 = lVar13;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010c243340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0b20(lVar11);
      _objc_release(lVar8);
      _objc_release(lVar12);
      _objc_release(lVar13);
      _objc_release(uVar6);
      _objc_release(lVar11);
      if (*(char *)(param_3 + 0x98) == '\x01') {
        lVar11 = param_3 + 0x28;
        _objc_loadWeakRetained(lVar11);
        puVar3 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb220(lVar11);
        _objc_release(puVar3);
        _objc_release(lVar11);
      }
      uVar9 = *(undefined8 *)(param_3 + 0xa0);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf926c0();
      _objc_release(uVar9);
      if ((int)uVar10 != 0) {
        uVar10 = *(undefined8 *)(param_3 + 0xa0);
        func_0x00010c240000(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c280560(uVar5);
        func_0x00010c0df780(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c5a0(uVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar10);
      }
      lVar11 = param_3 + 8;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2c20();
    }
    _objc_release(lVar12);
    _objc_release(lVar11);
    func_0x00010be17600(param_3);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105db0cb8; end: 105db0d27; -[SCPreviewFeatureInfoStickerImpl _prepareToInsertInfoStickerWithAutomaticallyCloseToolbarOnCompletion:isFromCaption:completion:] */

void FUN_105db0cb8(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x98) = param_3;
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010be17600(param_1,param_2,4);
  }
  *(undefined1 *)(param_1 + 0x99) = param_4;
  uVar1 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105db0d28; end: 105db0d33; -[SCPreviewFeatureInfoStickerImpl _canHaveMultipleStickersWithInfoType:] */

bool FUN_105db0d28(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 8;
}



/* Entry: 105db0d34; end: 105db0d73; -[SCPreviewFeatureInfoStickerImpl _finishedEditingStickerWithAction:] */

void FUN_105db0d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar2);
  }
  *(undefined1 *)(param_1 + 0x99) = 0;
  return;
}



/* Entry: 105db0d74; end: 105db0f7f; -[SCPreviewFeatureInfoStickerImpl _editExistingSticker:] */

void FUN_105db0d74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puVar10;
  undefined8 *unaff_x26;
  long lVar11;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = (undefined8 *)(param_1 + 8);
  lStack_148 = param_1;
  puStack_140 = param_3;
  _objc_loadWeakRetained();
  puVar8 = puVar2;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = &uStack_130;
  puVar10 = puVar8;
  puStack_138 = puVar8;
  func_0x00010bf52a60();
  if (puVar10 != (undefined8 *)0x0) {
    lVar11 = *plStack_120;
    unaff_x21 = &PTR_PTR_1126c4000;
    unaff_x20 = &PTR_DAT_1126a5000;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puStack_138);
        }
        unaff_x24 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
        unaff_x23 = unaff_x24;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c49b8;
        _objc_opt_class(PTR_PTR_1126c49b8);
        puVar2 = unaff_x23;
        _objc_opt_isKindOfClass(unaff_x23,puVar3);
        unaff_x25 = unaff_x23;
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x25 = (undefined8 *)0x0;
        }
        _objc_retain(unaff_x25);
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x24;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = unaff_x26;
        func_0x00010010fab4();
        puVar2 = unaff_x26;
        if ((int)puVar4 == 0) {
          puVar2 = (undefined8 *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(unaff_x26);
        if ((unaff_x25 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) &&
           (puVar4 = unaff_x26, func_0x00010bfee0e0(), puVar4 == puStack_140)) {
          puVar2 = unaff_x24;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = unaff_x23;
          func_0x00010be06fc0(lStack_148);
          _objc_release(puVar2);
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          goto LAB_105db0f3c;
        }
        _objc_release(puVar2);
        _objc_release(unaff_x25);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar10 != puVar8);
      puVar4 = &uStack_130;
      puVar10 = puStack_138;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined8 *)0x0);
    puVar2 = (undefined8 *)0x0;
  }
LAB_105db0f3c:
  puVar10 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_270;
  pcStack_158 = FUN_105db0f80;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = puVar2;
  ppuStack_178 = unaff_x21;
  ppuStack_170 = unaff_x20;
  puStack_168 = puVar8;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar10 = puVar10 + 1;
  _objc_loadWeakRetained();
  puVar2 = puVar10;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar8 = puVar2;
  func_0x00010bf52a60();
  if (puVar8 != (undefined8 *)0x0) {
    lVar11 = *plStack_260;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar9 = *(undefined8 **)(lStack_268 + (long)puVar10 * 8);
        puVar5 = puVar9;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 == puVar4) {
          _objc_retain(puVar9);
          goto LAB_105db108c;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar8 != puVar10);
      puVar8 = puVar2;
      puVar7 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined8 *)0x0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_105db108c:
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar6 = (undefined1 *)puVar7;
  func_0x00010010fab4(puVar7,PTR_DAT_1126a5210);
  puVar1 = (undefined1 *)puVar7;
  if ((int)puVar6 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  puVar6 = puVar1;
  func_0x00010c271a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be3c520(puVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105db0f80; end: 105db10d7; -[SCPreviewFeatureInfoStickerImpl _previewStickerViewForContentView:] */

void FUN_105db0f80(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
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
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = *(long *)(lStack_118 + lVar9 * 8);
        lVar4 = lVar7;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 == param_3) {
          _objc_retain(lVar7);
          goto LAB_105db108c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  lVar7 = 0;
LAB_105db108c:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = (undefined1 *)puVar6;
  func_0x00010010fab4(puVar6,PTR_DAT_1126a5210);
  puVar1 = (undefined1 *)puVar6;
  if ((int)puVar5 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  puVar5 = puVar1;
  func_0x00010c271a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be3c520(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105db10d8; end: 105db115b; -[SCPreviewFeatureInfoStickerImpl _insertStickerView:] */

void FUN_105db10d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5210);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c271a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be3c520(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105db115c; end: 105db125f; -[SCPreviewFeatureInfoStickerImpl _insertItemInstance:] */

void FUN_105db115c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c020();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(param_1 + 0x99);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = (undefined1)uVar3;
  uStack_4f = uVar1;
  func_0x00010be4db80(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105db1260; end: 105db141f;  */

void FUN_105db1260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0846e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c253ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ba960;
    _objc_alloc(PTR_PTR_1126ba960);
    func_0x00010c04c640();
    puVar5 = PTR_PTR_1126c3d58;
    _objc_opt_new(PTR_PTR_1126c3d58);
    func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1340(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0ec0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b01a0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b08c0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e80(lVar6);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105db1420; end: 105db161b; -[SCPreviewFeatureInfoStickerImpl _updateExistingStickerView:withItemInstance:completion:] */

void FUN_105db1420(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105db161c;
  puStack_78 = &UNK_11084aaa8;
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  _objc_retain(param_5);
  ppuVar4 = &puStack_90;
  uStack_68 = param_5;
  _objc_retainBlock();
  puVar2 = PTR_DAT_1126a5218;
  _objc_retain(uVar1);
  uVar5 = uVar1;
  func_0x00010010fab4(uVar1,puVar2);
  uVar3 = uVar1;
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar4);
    func_0x00010be4db80(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar3);
  _objc_release(ppuVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105db161c; end: 105db165b;  */

void FUN_105db161c(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105db164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105db165c; end: 105db16d7;  */

void FUN_105db165c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c28c820(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105db16d8; end: 105db16e3;  */

void FUN_105db16d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105db16e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105db16e4; end: 105db1857; -[SCPreviewFeatureInfoStickerImpl _loadItemView:success:failure:] */

void FUN_105db16e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc960;
  _objc_retain(param_3);
  func_0x00010c290480(puVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0e0460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105db1858;
  puStack_68 = &UNK_1108b2448;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105db1858; end: 105db1913;  */

void FUN_105db1858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105db1914; end: 105db193b;  */

void FUN_105db1914(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105db1920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105db193c; end: 105db1953; -[SCPreviewFeatureInfoStickerImpl parentViewControllerDelegate] */

void FUN_105db193c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105db1954; end: 105db195f; -[SCPreviewFeatureInfoStickerImpl setParentViewControllerDelegate:] */

void FUN_105db1954(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 105db1960; end: 105db1967; -[SCPreviewFeatureInfoStickerImpl venueSticker] */

undefined8 FUN_105db1960(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105db1968; end: 105db1997; -[SCPreviewFeatureInfoStickerImpl setVenueSticker:] */

void FUN_105db1968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105db1998; end: 105db1aaf; -[SCPreviewFeatureInfoStickerImpl .cxx_destruct] */

void FUN_105db1998(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105db1ab0; end: 105db1bc7; -[SCPreviewFeatureInfoStickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db1ab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c49f8;
  _objc_alloc(PTR_PTR_1126c49f8);
  func_0x00010c01daa0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273643c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105db1bc8; end: 105db2093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db1bc8(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined *puVar43;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar43 = (undefined *)0x0;
  }
  else {
    puVar43 = PTR_PTR_1126c49f0;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11273640c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127363f8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112736420;
    _objc_loadWeakRetained();
    lVar6 = param_1 + _DAT_112736424;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112736414;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112736404;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_11273641c;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + _DAT_11273641c;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_1127363f8;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_112736410;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_112736408;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf0d2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1 + _DAT_112736418;
    _objc_loadWeakRetained();
    lVar27 = lVar26;
    func_0x00010c1299a0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + _DAT_1127363fc;
    _objc_loadWeakRetained();
    lVar29 = lVar28;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + _DAT_112736400;
    _objc_loadWeakRetained();
    lVar31 = lVar30;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1 + _DAT_112736428;
    _objc_loadWeakRetained();
    lVar33 = lVar32;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = param_1 + _DAT_11273642c;
    _objc_loadWeakRetained();
    lVar35 = lVar34;
    func_0x00010c293d40();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar35;
    func_0x00010bfba560();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = param_1 + _DAT_112736430;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c293d20();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_1 + _DAT_112736434;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = param_1 + _DAT_112736438;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c7a0(puVar43,param_2,lVar2,lVar4,lVar5,lVar6,lVar8,lVar12,lVar14,lVar16,lVar19,
                        lVar22,lVar25,lVar27,lVar29,lVar31,lVar33,lVar36,lVar38,lVar40,lVar42);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar43);
  return;
}



/* Entry: 105db2094; end: 105db219b; -[SCPreviewFeatureInfoStickerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db2094(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273643c,0);
  _objc_destroyWeak(param_1 + _DAT_112736438);
  _objc_destroyWeak(param_1 + _DAT_112736434);
  _objc_destroyWeak(param_1 + _DAT_112736430);
  _objc_destroyWeak(param_1 + _DAT_11273642c);
  _objc_destroyWeak(param_1 + _DAT_112736428);
  _objc_destroyWeak(param_1 + _DAT_112736424);
  _objc_destroyWeak(param_1 + _DAT_112736420);
  _objc_destroyWeak(param_1 + _DAT_11273641c);
  _objc_destroyWeak(param_1 + _DAT_112736418);
  _objc_destroyWeak(param_1 + _DAT_112736414);
  _objc_destroyWeak(param_1 + _DAT_112736410);
  _objc_destroyWeak(param_1 + _DAT_11273640c);
  _objc_destroyWeak(param_1 + _DAT_112736408);
  _objc_destroyWeak(param_1 + _DAT_112736404);
  _objc_destroyWeak(param_1 + _DAT_112736400);
  _objc_destroyWeak(param_1 + _DAT_1127363fc);
  _objc_destroyWeak(param_1 + _DAT_1127363f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127363f4);
  return;
}



/* Entry: 105db219c; end: 105db2247; -[SCPreviewFeatureInfoStickerServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db219c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736440;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736444;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfede40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105db2248; end: 105db227f; -[SCPreviewFeatureInfoStickerServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105db2248(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736444);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736440);
  return;
}



/* Entry: 105db2280; end: 105db280b; -[SCPreviewFeatureStickerContainerImpl initWithPreviewConfiguration:previewScopeServices:userSession:filterUIContainer:videoPlayback:videoObjectTracker:stickerPreferenceAdaptor:stickerContainerLogger:commonLoggingParamsBuilder:imageDownloader:creativeExpressionsManager:circumstanceEngine:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:previewABProvider:ctpItemViewService:videoTracking:bitmojiAppPasteboardObserver:] */

undefined8 *
FUN_105db2280(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126ed158;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126afee0;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    _objc_storeWeak(puVar2 + 2,uVar1);
    _objc_retain(param_4);
    uVar5 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar5);
    _objc_storeWeak(puVar2 + 3,param_5);
    _objc_retain(param_9);
    uVar5 = puVar2[5];
    puVar2[5] = param_9;
    _objc_release(uVar5);
    _objc_storeWeak(puVar2 + 0x26,param_10);
    _objc_storeWeak(puVar2 + 10,param_11);
    _objc_retain(param_12);
    uVar5 = puVar2[0x27];
    puVar2[0x27] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar2[0xf];
    puVar2[0xf] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar2[0x10];
    puVar2[0x10] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar2[0x11];
    puVar2[0x11] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar2[0x15];
    puVar2[0x15] = param_13;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar2[0x16];
    puVar2[0x16] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar2[6];
    puVar2[6] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar5 = puVar2[0x17];
    puVar2[0x17] = param_17;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar2[0x19];
    puVar2[0x19] = param_18;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar2[0x1a];
    puVar2[0x1a] = param_19;
    _objc_release(uVar5);
    _objc_retain(param_20);
    uVar5 = puVar2[0x1b];
    puVar2[0x1b] = param_20;
    _objc_release(uVar5);
    _objc_retain(param_21);
    uVar5 = puVar2[0x1c];
    puVar2[0x1c] = param_21;
    _objc_release(uVar5);
    _objc_retain(param_22);
    uVar5 = puVar2[0x14];
    puVar2[0x14] = param_22;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[0x1e];
    puVar2[0x1e] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = puVar2[0x1f];
    puVar2[0x1f] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[0x20];
    puVar2[0x20] = puVar3;
    _objc_release(uVar5);
    uVar5 = puVar2[0x1c];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126980();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar2[0x12];
    puVar2[0x12] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar2[7];
    puVar2[7] = puVar3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_80,puVar2);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar1);
  }
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
  return puVar2;
}



/* Entry: 105db280c; end: 105db2837;  */

void FUN_105db280c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db2838; end: 105db28af; -[SCPreviewFeatureStickerContainerImpl dealloc] */

void FUN_105db2838(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed158;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105db28b0; end: 105db2af7; -[SCPreviewFeatureStickerContainerImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105db28b0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_4);
  puVar8 = param_4;
  func_0x00010c28cd20(param_1);
  puVar1 = (undefined *)(param_1 + 0x10);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c06d080();
  if ((int)puVar2 == 0) {
    unaff_x22 = (undefined *)(param_1 + 0x10);
    _objc_loadWeakRetained();
    unaff_x23 = unaff_x22;
    func_0x00010c078120();
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    if (((ulong)unaff_x23 & 1) != 0) goto LAB_105db2ab4;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    func_0x00010c255300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = auStack_f0;
    lVar3 = param_1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x23 = *(undefined **)(lStack_128 + lVar11 * 8);
          unaff_x24 = unaff_x23;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x24;
          func_0x00010c27dd80();
          _objc_release(unaff_x24);
          puVar4 = PTR_PTR_1126bac28;
          if (puVar2 == (undefined *)0xb) {
            func_0x00010c253880();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = unaff_x23;
            func_0x00010c2540c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c113fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar4);
            _objc_release(puVar2);
            _objc_release(unaff_x23);
            unaff_x24 = puVar4;
          }
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        puVar4 = auStack_f0;
        lVar3 = param_1;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (lVar3 != 0);
    }
    _objc_release(param_1);
    func_0x00010bf529e0(puVar1);
    func_0x00010c2ba0a0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2ba0c0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
LAB_105db2ab4:
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105db2af8;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = param_1;
  puStack_150 = puVar1;
  puStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar4 == (undefined *)0x3) {
    func_0x00010bf86d40(*(undefined8 *)(puVar2 + 0x98));
    uVar7 = *(undefined8 *)(puVar2 + 0x98);
    *(undefined8 *)(puVar2 + 0x98) = 0;
    _objc_release(uVar7);
  }
  else if (puVar4 == (undefined *)0x1) {
    func_0x00010bf86d40(*(undefined8 *)(puVar2 + 0x98));
    _objc_initWeak(auStack_178,puVar2);
    uVar5 = *(undefined8 *)(puVar2 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0f5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    uVar6 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar2 + 0x98);
    *(undefined8 *)(puVar2 + 0x98) = uVar6;
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 105db2af8; end: 105db2c47; -[SCPreviewFeatureStickerContainerImpl snapEditor:didTriggerLifecycle:] */

void FUN_105db2af8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_4 == 3) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x98));
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar3);
  }
  else if (param_4 == 1) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x98));
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0f5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105db2c48; end: 105db2c8f;  */

void FUN_105db2c48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd4860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105db2c90; end: 105db2e2b; -[SCPreviewFeatureStickerContainerImpl configureWithView:] */

void FUN_105db2c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  _objc_storeWeak(param_5 + 0x20,param_7);
  _objc_retain();
  func_0x00010bf4cf40(param_7);
  _objc_release(param_7);
  func_0x00010bdf5aa0(param_1,param_2,param_3,param_4,param_5);
  uVar1 = *(undefined8 *)(param_5 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c252ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_5);
  uVar2 = *(undefined8 *)(param_5 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c278fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 105db2e2c; end: 105db2efb;  */

void FUN_105db2e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105db2efc;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105db2efc; end: 105db2f63;  */

void FUN_105db2efc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c2790a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db2f64; end: 105db2f6b; -[SCPreviewFeatureStickerContainerImpl responderChainPriority] */

undefined8 FUN_105db2f64(void)

{
  return 3;
}



/* Entry: 105db2f6c; end: 105db3177; -[SCPreviewFeatureStickerContainerImpl activate] */

/* WARNING: Possible PIC construction at 0x000105db313c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105db3140) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105db2f6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bf03720();
  lVar4 = param_1;
  func_0x00010be40dc0();
  if ((int)lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf926c0();
    _objc_release(uVar2);
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if ((int)uVar1 == 0) {
      lVar6 = lVar4;
      func_0x00010c255460();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = lVar4;
      func_0x00010c07e840();
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2407e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c07bf40();
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      puVar5 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x000108eb6800(lVar4,uVar2,puVar5,lVar3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c20bda0(param_1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(lVar6);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_completeWithValue__1125ae900,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105db3178; end: 105db31db;  */

void FUN_105db3178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = param_2;
    _objc_release(uVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0xf8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105db31dc; end: 105db3237; -[SCPreviewFeatureStickerContainerImpl hasOnlyPrePreviewEdits] */

void FUN_105db31dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c255300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar2,param_2,param_1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105db3238; end: 105db323f; -[SCPreviewFeatureStickerContainerImpl editCount] */

void FUN_105db3238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickerEditCount_1126729b8);
  return;
}



/* Entry: 105db3240; end: 105db333f; -[SCPreviewFeatureStickerContainerImpl _isHandledBySnapStateHandler] */

bool FUN_105db3240(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30e80();
  if ((int)uVar3 == 1) {
    bVar1 = true;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf30e80();
    if ((int)uVar3 == 2) {
      bVar1 = true;
    }
    else {
      lVar5 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar6 = lVar5;
      func_0x00010bf30e80();
      if (lVar6 == 2) {
        bVar1 = true;
      }
      else {
        lVar6 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar7 = lVar6;
        func_0x00010bf30e80();
        if (lVar7 == 3) {
          bVar1 = true;
        }
        else {
          param_1 = param_1 + 0x10;
          _objc_loadWeakRetained(param_1);
          lVar7 = param_1;
          func_0x00010bf30e80();
          bVar1 = lVar7 == 4;
          _objc_release(param_1);
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar5);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105db3340; end: 105db3433; -[SCPreviewFeatureStickerContainerImpl _createViewWithFrame:] */

void FUN_105db3340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4a00;
  _objc_alloc();
  func_0x000100841590(param_3,param_4);
  func_0x00010c014e60(puVar1,param_6,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xd8)
                     );
  uVar3 = *(undefined8 *)(param_5 + 0x40);
  *(undefined **)(param_5 + 0x40) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x40),param_6,param_5);
  uVar3 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c252ca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c252ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x402a000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105db3434; end: 105db351b; -[SCPreviewFeatureStickerContainerImpl animatedQuickStickerIfNecessary] */

void FUN_105db3434(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c22fbc0();
    if (iVar1 != 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      uStack_38 = 0x105db34e4;
      puStack_30 = &UNK_110842e18;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105db351c;
      puStack_58 = &UNK_110841f20;
      lStack_50 = param_1;
      lStack_28 = param_1;
      func_0x00010bf03440(0x3fb999999999999a,0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,
                          param_2,0,&puStack_48,&puStack_70);
      func_0x00010c190700(*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}



/* Entry: 105db351c; end: 105db3583;  */

void FUN_105db351c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105db3584;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 105db3584; end: 105db35bb;  */

void FUN_105db3584(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
  func_0x00010c14e120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 / 1.1,uVar1,PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105db35bc; end: 105db37cb; -[SCPreviewFeatureStickerContainerImpl updateWithSnapCommonLoggingParamsBuilder:] */

void FUN_105db35bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c07eb40();
  func_0x00010c2bd120(param_3,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf037a0(uVar3);
  func_0x00010c2a83a0(param_3,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c253c00(uVar3);
  func_0x00010c2ba100(param_3,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2790a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf529e0();
  func_0x00010c2ba260(param_3,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010bec2700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba020(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be5dd00(param_1);
  func_0x00010c2ba1a0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010becc060(param_1);
  func_0x00010c2ba240(param_3,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4a08;
  _objc_opt_new(PTR_PTR_1126c4a08);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c255300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9b00(uVar3,param_2,puVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  func_0x00010c2ba1c0(puVar5,param_2,*(undefined1 *)(param_1 + 0x118));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be74000(param_1);
  func_0x00010c2ba220(puVar5,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba180(param_3,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105db37cc; end: 105db38ff; -[SCPreviewFeatureStickerContainerImpl populateSendParameters:] */

void FUN_105db37cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c253c00(uVar4);
  func_0x00010c0df780(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2a278);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c2790a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2a298);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c27fb20(uVar4);
  func_0x00010c0df780(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2a2b8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105db3900; end: 105db390b; -[SCPreviewFeatureStickerContainerImpl setAnimatedStickersAnimate:] */

void FUN_105db3900(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x58) = param_3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAnimatedStickersAnimate_112592610);
  return;
}



/* Entry: 105db390c; end: 105db3a17; -[SCPreviewFeatureStickerContainerImpl _updateAnimatedStickersAnimate] */

void FUN_105db390c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_2c8 [8];
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      if (*(char *)(param_1 + 0x58) == '\x01') {
        func_0x00010c2558a0();
      }
      else {
        func_0x00010c13d280(*(undefined8 *)(lVar12 * 8));
      }
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar3 = *(long *)(lVar1 + 0x40);
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_1f8;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar1 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar10 = *(long *)(lStack_238 + lVar9 * 8);
        lVar12 = lVar10;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar12;
        func_0x00010c27dd80();
        if (lVar4 == 6) {
          lVar5 = lVar10;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010010fab4();
          lVar4 = lVar5;
          if ((int)lVar6 == 0) {
            lVar4 = 0;
          }
          _objc_retain(lVar4);
          _objc_release(lVar5);
          lVar5 = lVar4;
          func_0x00010bfee0e0();
          _objc_release(lVar4);
          _objc_release(lVar12);
          if (lVar5 == 8) {
            func_0x00010c1b3d80(lVar10);
          }
        }
        else {
          _objc_release(lVar12);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar8 = auStack_1f8;
      lVar2 = lVar3;
      puVar7 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_initWeak(auStack_298,lVar3);
  uVar11 = *(undefined8 *)(lVar3 + 0x40);
  puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_105db3cec;
  puStack_2a8 = &UNK_1108e8f60;
  _objc_copyWeak(auStack_2a0,auStack_298);
  _objc_copyWeak(auStack_2c8,auStack_298);
  _objc_retain(puVar8);
  func_0x00010c20bdc0(uVar11);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_2c8);
  _objc_destroyWeak(auStack_2a0);
  _objc_destroyWeak(auStack_298);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 105db3a18; end: 105db3bab; -[SCPreviewFeatureStickerContainerImpl _updateAllMentionStickersToNotRemovable] */

void FUN_105db3a18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_e8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        lVar9 = *(long *)(lStack_128 + lVar12 * 8);
        lVar3 = lVar9;
        func_0x00010c253880();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        if (lVar4 == 6) {
          lVar5 = lVar9;
          func_0x00010c253880();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010010fab4();
          lVar4 = lVar5;
          if ((int)lVar6 == 0) {
            lVar4 = 0;
          }
          _objc_retain(lVar4);
          _objc_release(lVar5);
          lVar5 = lVar4;
          func_0x00010bfee0e0();
          _objc_release(lVar4);
          _objc_release(lVar3);
          if (lVar5 == 8) {
            func_0x00010c1b3d80(lVar9);
          }
        }
        else {
          _objc_release(lVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar8 = auStack_e8;
      lVar2 = lVar1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_initWeak(auStack_188,lVar1);
  uVar10 = *(undefined8 *)(lVar1 + 0x40);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_105db3cec;
  puStack_198 = &UNK_1108e8f60;
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_copyWeak(auStack_1b8,auStack_188);
  _objc_retain(puVar8);
  func_0x00010c20bdc0(uVar10);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 105db3bac; end: 105db3ceb; -[SCPreviewFeatureStickerContainerImpl setStickersState:completionBlock:] */

void FUN_105db3bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105db3cec;
  puStack_68 = &UNK_1108e8f60;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_4);
  func_0x00010c20bdc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105db3cec; end: 105db3e7b;  */

void FUN_105db3cec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (uVar1 = param_2, func_0x00010c081660(), (int)uVar1 != 0)) &&
     ((uVar2 = param_3, func_0x00010c074760(), (int)uVar2 == 0 ||
      (uVar2 = param_3, func_0x00010c081660(), (uVar2 & 1) == 0)))) {
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    func_0x00010bfdb680();
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126c4a10;
    uVar1 = param_2;
    func_0x00010c2790e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081160(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29b920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010bf921e0(param_3);
    func_0x00010c1f5fe0(0,param_3);
    _objc_release(puVar7);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105db3e7c; end: 105db400f;  */

ulong FUN_105db3e7c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed31a0(lVar1);
    lVar3 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar3;
    func_0x00010c134300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      func_0x00010bed2f20(lVar1);
    }
    _objc_retain(param_2);
    uVar6 = param_2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        iVar7 = (int)*(undefined8 *)(uVar8 * 8);
        FUN_105db4010();
        if (iVar7 == 0) {
          _objc_release(param_2);
          goto LAB_105db3fc8;
        }
        func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0xf0));
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      uVar6 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
LAB_105db3fc8:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  uVar6 = 0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010c0ddbe0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010c071ae0(param_2);
    _objc_release(param_2);
    uVar6 = (ulong)((uint)uVar6 ^ 1);
    _objc_release(puVar4);
  }
  return uVar6;
}



/* Entry: 105db4010; end: 105db4083;  */

uint FUN_105db4010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  uVar3 = 0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010c0ddbe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c071ae0(param_1,param_2,puVar1);
    _objc_release(param_1);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(puVar1);
  }
  return uVar3;
}



/* Entry: 105db4084; end: 105db4097; -[SCPreviewFeatureStickerContainerImpl stickersState] */

void FUN_105db4084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2554b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickersStateIncludingStatic_tra_112672f50,1,1,0)
  ;
  return;
}



/* Entry: 105db4098; end: 105db40ab; -[SCPreviewFeatureStickerContainerImpl stickersStateForFlows:] */

void FUN_105db4098(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2554b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stickersStateIncludingStatic_tra_112672f50,1,1,
             param_3);
  return;
}



/* Entry: 105db40ac; end: 105db412f; -[SCPreviewFeatureStickerContainerImpl contextUnlockCTItemInsancesForFlows:] */

void FUN_105db40ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c255480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db4130; end: 105db425b;  */

void FUN_105db4130(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c06f560();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c06f760();
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      lVar2 = *(long *)(param_1 + 0x20) + 0x120;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bfa2c40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfedd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf5cd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar4);
      goto LAB_105db423c;
    }
  }
  uVar5 = 0;
LAB_105db423c:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105db425c; end: 105db429f; -[SCPreviewFeatureStickerContainerImpl freezeStickersState] */

void FUN_105db425c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c255460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105db42a0; end: 105db42c7; -[SCPreviewFeatureStickerContainerImpl frozenStickersState] */

void FUN_105db42a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db42c8; end: 105db42ef; -[SCPreviewFeatureStickerContainerImpl previewStickerObservable] */

void FUN_105db42c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db42f0; end: 105db4317; -[SCPreviewFeatureStickerContainerImpl previewStickerTappedObservable] */

void FUN_105db42f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105db4318; end: 105db491b; -[SCPreviewFeatureStickerContainerImpl insertSticker:params:] */

void FUN_105db4318(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) goto LAB_105db48c4;
  lVar8 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  func_0x00010bf345e0(param_6);
  dVar11 = *(double *)PTR__CGPointZero_110347540;
  dVar12 = *(double *)(PTR__CGPointZero_110347540 + 8);
  bVar1 = false;
  if ((param_1 == dVar11) && (bVar1 = false, !NAN(param_2) && !NAN(dVar12))) {
    bVar1 = param_2 == dVar12;
  }
  if (bVar1) {
    uVar9 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c252ca0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar10 = param_1;
    _CGRectGetMidX();
    _CGRectGetMidY(param_1,param_2,dVar11,dVar12);
    _objc_release(uVar9);
  }
  else {
    func_0x00010bf345e0(param_6);
    dVar10 = param_1;
    param_1 = param_2;
  }
  puVar3 = PTR_PTR_1126ba960;
  _objc_alloc();
  uVar9 = param_6;
  func_0x00010c26d760(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c06c000(param_6);
  func_0x00010c04c600(dVar10,param_1,0x404b800000000000);
  _objc_release(lVar8);
  _objc_release(uVar9);
  func_0x00010c073d40(param_6);
  func_0x00010c1b4ae0(puVar3);
  func_0x00010c06f8c0(param_6);
  func_0x00010c1b0320(puVar3);
  func_0x00010c073ae0(param_6);
  func_0x00010c1b1400(puVar3);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0c3100(uVar9);
  func_0x00010c1c38a0(uVar9);
  func_0x00010c21b740(puVar3);
  func_0x00010c07c340(param_6);
  func_0x00010c1b3d80(puVar3);
  func_0x00010c06c000(param_6);
  func_0x00010c1af280(puVar3);
  func_0x00010c077fa0(param_6);
  func_0x00010c1b29a0(puVar3);
  func_0x00010c0722a0(param_6);
  func_0x00010c1b0bc0(puVar3);
  func_0x00010befb9c0(*(undefined8 *)(param_3 + 0x40));
  if (*(char *)(param_3 + 0x58) == '\x01') {
    func_0x00010c2558a0(puVar3);
  }
  uVar4 = *(undefined8 *)(param_3 + 8);
  func_0x00010c240640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf5ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ba8a8;
  uVar9 = *(undefined8 *)(param_3 + 8);
  func_0x00010c240000(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb9a0(puVar6);
  _objc_release(uVar9);
  lVar8 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2c00();
  _objc_release(lVar8);
  puVar6 = puVar3;
  FUN_105db4010();
  if ((int)puVar6 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0xf0));
    uVar7 = *(undefined8 *)(param_3 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010c271a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c07faa0();
    _objc_release(lVar8);
    _objc_release(uVar7);
    if ((int)uVar9 == 0) {
LAB_105db4708:
      lVar8 = param_3;
      func_0x00010beb4e80();
      if ((int)lVar8 == 0) {
        lVar8 = *(long *)(param_3 + 0x68);
        if (lVar8 == 0) {
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          uVar9 = *(undefined8 *)(param_3 + 0x68);
          *(undefined **)(param_3 + 0x68) = puVar6;
          _objc_release(uVar9);
          lVar8 = *(long *)(param_3 + 0x68);
        }
        func_0x00010befa120(lVar8);
        _objc_initWeak(auStack_a0,param_3);
        puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_105db491c;
        puStack_b0 = &UNK_110842e18;
        _objc_retain(puVar3);
        puStack_a8 = puVar3;
        _objc_retain(puVar3);
        _objc_copyWeak(auStack_d0,auStack_a0);
        func_0x00010bf03420(0x3fb999999999999a,puVar6);
        _objc_destroyWeak(auStack_d0);
        _objc_release(puVar3);
        _objc_release(puStack_a8);
        _objc_destroyWeak(auStack_a0);
      }
      else {
        func_0x00010be7c760(param_3);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_3 + 0xb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c231f80();
      _objc_release(uVar7);
      if ((int)uVar9 == 0) goto LAB_105db4708;
      uVar9 = *(undefined8 *)(param_3 + 0xb8);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10c4a0();
      _objc_release(uVar9);
    }
    lVar8 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2c60();
    _objc_release(lVar8);
    param_3 = param_3 + 0x130;
    _objc_loadWeakRetained(param_3);
    func_0x00010c073d40(param_6);
    func_0x00010c073de0(param_6);
    func_0x00010c06f8c0(param_6);
    func_0x00010c27dd80(param_5);
    func_0x00010c073ae0(param_6);
    func_0x00010c073a20();
    func_0x00010c0b0a40(param_3);
    _objc_release(param_3);
  }
  _objc_release(uVar5);
  _objc_release(puVar3);
LAB_105db48c4:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105db491c; end: 105db494f;  */

void FUN_105db491c(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c14e120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 * 1.1,uVar1,PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105db4950; end: 105db4a47;  */

void FUN_105db4950(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105db4a48;
  puStack_50 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf03420(0x3fb999999999999a,puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105db4a48; end: 105db4aaf;  */

void FUN_105db4a48(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c14e120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 / 1.1,uVar1,PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105db4ab0; end: 105db5167; -[SCPreviewFeatureStickerContainerImpl insertStickerView:params:] */

void FUN_105db4ab0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) goto LAB_105db5110;
  lVar2 = param_5;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c271a80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar4);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  func_0x00010bf345e0(param_6);
  dVar11 = *(double *)PTR__CGPointZero_110347540;
  dVar12 = *(double *)(PTR__CGPointZero_110347540 + 8);
  bVar1 = false;
  if ((param_1 == dVar11) && (bVar1 = false, !NAN(param_2) && !NAN(dVar12))) {
    bVar1 = param_2 == dVar12;
  }
  if (bVar1) {
    uVar10 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c252ca0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar13 = param_1;
    _CGRectGetMidX();
    _CGRectGetMidY(param_1,param_2,dVar11,dVar12);
    _objc_release(uVar10);
  }
  else {
    func_0x00010bf345e0(param_6);
    dVar13 = param_1;
    param_1 = param_2;
  }
  func_0x00010c17a6a0(param_5);
  func_0x00010c073d40(param_6);
  func_0x00010c1b4ae0(param_5);
  func_0x00010c06f8c0(param_6);
  func_0x00010c1b0320(param_5);
  func_0x00010c073ae0(param_6);
  func_0x00010c1b1400(param_5);
  uVar10 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0c3100(uVar10);
  func_0x00010c1c38a0(uVar10);
  func_0x00010c21b740(param_5);
  func_0x00010c07c340(param_6);
  func_0x00010c1b3d80(param_5);
  func_0x00010c06c000(param_6);
  func_0x00010c1af280(param_5);
  func_0x00010c077fa0(param_6);
  func_0x00010c1b29a0(param_5);
  func_0x00010c0722a0(param_6);
  func_0x00010c1b0bc0(param_5);
  uVar10 = param_6;
  func_0x00010c06f8c0();
  if ((int)uVar10 != 0) {
    func_0x00010bf345e0(param_5);
    dVar11 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar12 = dVar13 * 0.5;
    func_0x00010bf345e0(param_5);
    if (dVar12 <= param_1) {
      uVar10 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c252ca0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar12 = dVar13;
      func_0x00010bf20c00(param_5);
      _CGRectGetHeight();
      dVar12 = dVar12 * -0.5;
      dVar13 = dVar13 + dVar12;
      _objc_release(uVar10);
      if (dVar13 < dVar11) {
        func_0x00010bf345e0(param_5);
        uVar10 = *(undefined8 *)(param_3 + 0x40);
        dVar11 = dVar12;
        func_0x00010c252ca0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetHeight();
        dVar13 = dVar11;
        func_0x00010bf20c00(param_5);
        _CGRectGetHeight();
        func_0x00010c17a6a0(dVar12,dVar11 + dVar13 * -0.5,param_5);
        _objc_release(uVar10);
      }
    }
    else {
      dVar11 = dVar13;
      func_0x00010bf20c00(param_5);
      _CGRectGetHeight();
      func_0x00010c17a6a0(dVar13,dVar11 * 0.5,param_5);
    }
  }
  func_0x00010befb9c0(*(undefined8 *)(param_3 + 0x40));
  if (*(char *)(param_3 + 0x58) == '\x01') {
    func_0x00010c2558a0(param_5);
  }
  uVar6 = *(undefined8 *)(param_3 + 8);
  func_0x00010c240640(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf5ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126ba8a8;
  uVar10 = *(undefined8 *)(param_3 + 8);
  func_0x00010c240000(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb9a0(puVar5);
  _objc_release(uVar10);
  lVar9 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2c00();
  _objc_release(lVar9);
  lVar9 = param_5;
  FUN_105db4010();
  if ((int)lVar9 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0xf0));
    uVar8 = *(undefined8 *)(param_3 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c07faa0();
    _objc_release(uVar8);
    if ((int)uVar10 == 0) {
LAB_105db4f40:
      lVar9 = param_3;
      func_0x00010beb4e80();
      if ((int)lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 0x68);
        if (lVar9 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          uVar10 = *(undefined8 *)(param_3 + 0x68);
          *(undefined **)(param_3 + 0x68) = puVar5;
          _objc_release(uVar10);
          lVar9 = *(long *)(param_3 + 0x68);
        }
        func_0x00010befa120(lVar9);
        _objc_initWeak(auStack_a0,param_3);
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_105db5168;
        puStack_b0 = &UNK_110842e18;
        _objc_retain(param_5);
        lStack_a8 = param_5;
        _objc_retain(param_5);
        _objc_copyWeak(auStack_d0,auStack_a0);
        func_0x00010bf03420(0x3fb999999999999a,puVar5);
        _objc_destroyWeak(auStack_d0);
        _objc_release(param_5);
        _objc_release(lStack_a8);
        _objc_destroyWeak(auStack_a0);
      }
      else {
        func_0x00010be7c760(param_3);
      }
    }
    else {
      uVar8 = *(undefined8 *)(param_3 + 0xb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c231f80();
      _objc_release(uVar8);
      if ((int)uVar10 == 0) goto LAB_105db4f40;
      uVar10 = *(undefined8 *)(param_3 + 0xb8);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10c4a0();
      _objc_release(uVar10);
    }
    lVar9 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2c60();
    _objc_release(lVar9);
    param_3 = param_3 + 0x130;
    _objc_loadWeakRetained(param_3);
    func_0x00010c073d40(param_6);
    func_0x00010c073de0(param_6);
    func_0x00010c06f8c0(param_6);
    func_0x00010c27dd80(lVar2);
    func_0x00010c073ae0(param_6);
    func_0x00010c073a20();
    func_0x00010c0b0a40(param_3);
    _objc_release(param_3);
  }
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_105db5110:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105db5168; end: 105db519b;  */

void FUN_105db5168(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c14e120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 * 1.1,uVar1,PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105db519c; end: 105db5293;  */

void FUN_105db519c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105db5294;
  puStack_50 = &UNK_110842e18;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf03420(0x3fb999999999999a,puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105db5294; end: 105db52fb;  */

void FUN_105db5294(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c14e120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 / 1.1,uVar1,PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105db52fc; end: 105db54db; -[SCPreviewFeatureStickerContainerImpl removeStickersWhere:] */

void FUN_105db52fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c255300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar5 = uVar8;
      func_0x00010c253880(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,uVar5);
      if ((int)lVar6 != 0) {
        func_0x00010bf80b80(uVar8);
        func_0x00010c18b940(uVar8);
        func_0x00010c12c960(uVar8);
        puVar2 = PTR_PTR_1126ba8a8;
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c240000(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e540(puVar2);
        _objc_release(uVar8);
        lVar6 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa2c20();
        _objc_release(lVar6);
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12e5c0();
  return;
}



/* Entry: 105db54dc; end: 105db552b; -[SCPreviewFeatureStickerContainerImpl removeAllInfoStickersOfType:] */

void FUN_105db54dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_105db552c;
  puStack_20 = &UNK_1108e8fc0;
  uStack_18 = param_3;
  func_0x00010c12e5c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 105db552c; end: 105db5593;  */

bool FUN_105db552c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 6) {
    puVar3 = PTR_PTR_1126bab40;
    func_0x00010bfee100(PTR_PTR_1126bab40);
    bVar1 = puVar3 == *(undefined **)(param_1 + 0x20);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105db5594; end: 105db5707; -[SCPreviewFeatureStickerContainerImpl removeAllTrackingStickers] */

void FUN_105db5594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010c279080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010bf80b80(uVar7);
        func_0x00010c18b940(uVar7,param_2,1);
        func_0x00010c12c960(uVar7);
        puVar1 = PTR_PTR_1126ba8a8;
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c240000(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e540(puVar1,param_2,uVar4,uVar7);
        _objc_release(uVar4);
        lVar5 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa2c20();
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ba8a8;
  uVar4 = *(undefined8 *)(lVar2 + 8);
  _objc_retain(puVar6);
  func_0x00010c240000(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e540(puVar1,param_2,uVar4,puVar6);
  _objc_release(uVar4);
  func_0x00010bf6b020(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2c20();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105db5708; end: 105db5797; -[SCPreviewFeatureStickerContainerImpl didDeleteStickerViewWithTouch:] */

void FUN_105db5708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba8a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c240000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e540(puVar1,param_2,uVar2,param_3);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


