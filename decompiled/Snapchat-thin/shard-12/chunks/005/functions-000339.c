/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091ca5ec; end: 1091ca63f; -[SCLensStandardMediaPickerResultFeature dealloc] */

void FUN_1091ca5ec(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010bee1cc0(param_1);
  puStack_28 = PTR_PTR_112700c90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091ca640; end: 1091ca647; -[SCLensStandardMediaPickerResultFeature imageFuture] */

void FUN_1091ca640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_imageFuture_1125d7900);
  return;
}



/* Entry: 1091ca648; end: 1091ca6b7; -[SCLensStandardMediaPickerResultFeature videoURLFuture] */

void FUN_1091ca648(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c29bb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c29bb60(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ca6b8; end: 1091ca6bf; -[SCLensStandardMediaPickerResultFeature pickedResultIdentifier] */

void FUN_1091ca6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_assetIdentifier_1125a0658);
  return;
}



/* Entry: 1091ca6c0; end: 1091ca6d3; -[SCLensStandardMediaPickerResultFeature featureCellIdentifier] */

void FUN_1091ca6c0(void)

{
  func_0x00010bfa1d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1091ca6d4; end: 1091ca713; -[SCLensStandardMediaPickerResultFeature featureCollectionViewCellClass] */

void FUN_1091ca6d4(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c0830a0();
  ppuVar1 = &PTR_PTR_1126ddb98;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126ddb90;
  }
  _objc_opt_class(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ca714; end: 1091ca837; -[SCLensStandardMediaPickerResultFeature configureFeatureCell:] */

void FUN_1091ca714(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c0830a0();
  puVar3 = PTR_PTR_1126ddb98;
  if (iVar2 != 0) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar3);
    uVar5 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar4 = uVar1;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c299d80(uVar6);
    FUN_1091c7f54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe56e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa340(uVar1);
  _objc_release(uVar6);
  func_0x00010c159240(param_1);
  func_0x00010c1fadc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091ca838; end: 1091ca83f; -[SCLensStandardMediaPickerResultFeature selectable] */

undefined8 FUN_1091ca838(void)

{
  return 1;
}



/* Entry: 1091ca840; end: 1091ca8bb; -[SCLensStandardMediaPickerResultFeature setSelected:] */

void FUN_1091ca840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((uint)*(byte *)(param_1 + 0x29) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + 0x29) = (char)param_3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126ddbd0;
  _objc_alloc(PTR_PTR_1126ddbd0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c13cb80(uVar2);
  func_0x00010c035f00(puVar1,param_2,uVar2,param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091ca8bc; end: 1091caa03; -[SCLensStandardMediaPickerResultFeature handleResult:] */

void FUN_1091ca8bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c26ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x00010c26ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar4 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_1091ca990;
    }
    func_0x00010bee1cc0(param_1);
  }
LAB_1091ca990:
  lVar5 = param_1;
  func_0x00010be3fb80(param_1,param_2,param_3);
  *(char *)(param_1 + 0x28) = (char)lVar5;
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar6 = PTR_PTR_1126ddbd8;
  _objc_alloc(PTR_PTR_1126ddbd8);
  uVar2 = param_3;
  func_0x00010c13cb80(param_3);
  func_0x00010c035ee0(puVar6,param_2,uVar2,*(undefined1 *)(param_1 + 0x28));
  func_0x00010c0d9840(uVar7,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091caa04; end: 1091cab97; -[SCLensStandardMediaPickerResultFeature _updateTempVideo] */

void FUN_1091caa04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
  }
  else {
    lStack_58 = 0;
    func_0x00010c12cc60(puVar1,param_2,*(long *)(param_1 + 0x20),&lStack_58);
    lVar7 = lStack_58;
    _objc_retain(lStack_58);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c26ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar8 = lVar7;
  if (lVar3 != 0) {
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26ae20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc80(puVar6,param_2,lVar4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26ae20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_60 = lVar7;
    func_0x00010bf52020(puVar1,param_2,uVar2,puVar6,&lStack_60);
    lVar8 = lStack_60;
    _objc_retain(lStack_60);
    _objc_release(lVar7);
    _objc_release(uVar2);
    if (lVar8 == 0) {
      _objc_retain(puVar6);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar6;
      _objc_release(uVar2);
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar8);
  _objc_release(puVar1);
  return;
}



/* Entry: 1091cab98; end: 1091cac57; -[SCLensStandardMediaPickerResultFeature _isDisplayableResult:] */

byte FUN_1091cab98(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfe7ce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_3;
      func_0x00010c26ae20(param_3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      _objc_release();
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf0b2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar2 != 0 & bVar1;
}



/* Entry: 1091cac58; end: 1091cac5f; -[SCLensStandardMediaPickerResultFeature active] */

undefined1 FUN_1091cac58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1091cac60; end: 1091cac67; -[SCLensStandardMediaPickerResultFeature selected] */

undefined1 FUN_1091cac60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 1091cac68; end: 1091cac6f; -[SCLensStandardMediaPickerResultFeature activeObservable] */

undefined8 FUN_1091cac68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091cac70; end: 1091cac77; -[SCLensStandardMediaPickerResultFeature selectObservable] */

undefined8 FUN_1091cac70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091cac78; end: 1091cacbf; -[SCLensStandardMediaPickerResultFeature .cxx_destruct] */

void FUN_1091cac78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091cacc0; end: 1091caccf;  */

void FUN_1091cacc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_changeDetailsForFetchResult__1125aad40,param_1);
  return;
}



/* Entry: 1091cacd0; end: 1091cad47;  */

bool FUN_1091cacd0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c0672e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010c12f3e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf529e0();
    bVar1 = lVar3 != 0;
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1091cad48; end: 1091cae83; -[SCLensMediaAssetManager initWithMediaType:fetchLimit:excludeScreenshots:] */

undefined8 *
FUN_1091cad48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700c98;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar1[9] = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 6) = param_5;
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    uVar4 = puVar1[8];
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1091cae84; end: 1091caec3;  */

void FUN_1091cae84(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091caec4; end: 1091caf2b; -[SCLensMediaAssetManager dealloc] */

void FUN_1091caec4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281fa0();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_112700c98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091caf2c; end: 1091caf87; -[SCLensMediaAssetManager cachingImageManager] */

void FUN_1091caf2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___PHCachingImageManager_1126c3270;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1674c0(*(undefined8 *)(param_1 + 8),param_2,0);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091caf88; end: 1091cb00f; -[SCLensMediaAssetManager photoLibraryDidChange:] */

void FUN_1091caf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1091cb010;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1091cb010; end: 1091cb1e7;  */

void FUN_1091cb010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bf34e40(lVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4c320();
  if ((int)lVar4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = lVar3;
    func_0x00010bfd7ea0(lVar3);
    func_0x00010c0df6e0(puVar1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110f2b9b8);
    _objc_release(puVar1);
    lVar4 = lVar3;
    func_0x00010c0672e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar3;
      func_0x00010c0672e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110f2b9d8);
      _objc_release(lVar4);
    }
    lVar4 = lVar3;
    func_0x00010c12f3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar3;
      func_0x00010c12f3e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110f2b9f8);
      _objc_release(lVar4);
    }
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1049a0();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1091cb1e8; end: 1091cb343; -[SCLensMediaAssetManager reloadAssetsIndexWithCompletion:] */

void FUN_1091cb1e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x3) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c20a2c0(param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010c20a2c0(param_1);
    func_0x00010c16aae0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    func_0x00010c252d60(param_1);
    (**(code **)(param_3 + 0x10))(param_3,param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091cb344; end: 1091cb76b;  */

void FUN_1091cb344(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puVar2 = PTR_s_creationDate_1125b4368;
  _NSStringFromSelector(PTR_s_creationDate_1125b4368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(puVar2);
  func_0x00010c19b420(puVar1);
  func_0x00010c1abc40(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x20);
  uVar10 = (uint)*(ulong *)(lVar9 + 0x20);
  if ((~uVar10 & 3) == 0) {
    if (*(char *)(lVar9 + 0x30) == '\x01') {
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2ba38;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f2ba38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2ba38;
    }
    puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar1);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa5120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  else if ((*(ulong *)(lVar9 + 0x20) & 1) == 0) {
    if ((uVar10 >> 1 & 1) == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa5100();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (*(char *)(lVar9 + 0x30) == '\x01') {
      puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfc80(puVar1);
      _objc_release(puVar13);
    }
    puVar13 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa5100();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar13);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf529e0();
  if (puVar14 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar13;
      func_0x00010c0dfd40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar13;
      func_0x00010bf529e0();
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar6);
  }
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1091cb76c;
  puStack_98 = &UNK_110857fd0;
  _objc_copyWeak(auStack_78,param_1 + 0x30);
  _objc_retain(puVar13);
  puStack_90 = puVar13;
  _objc_retain(puVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = puVar5;
  _objc_retain(uVar11);
  uStack_80 = uVar11;
  func_0x000107c312d0("APPSTORE",&puStack_b0);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar3 = puVar1 + 0x38;
    _objc_loadWeakRetained();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010c20a2c0(puVar3);
      func_0x00010c16aae0(puVar3);
      uVar12 = *(undefined8 *)(puVar1 + 0x28);
      _objc_retain(uVar12);
      uVar11 = *(undefined8 *)(puVar3 + 0x10);
      *(undefined8 *)(puVar3 + 0x10) = uVar12;
      _objc_release(uVar11);
      lVar9 = *(long *)(puVar1 + 0x30);
      puVar1 = puVar3;
      func_0x00010c252d60(puVar3);
      (**(code **)(lVar9 + 0x10))(lVar9,puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1091cb76c; end: 1091cb7ef;  */

void FUN_1091cb76c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c20a2c0(lVar1);
    func_0x00010c16aae0(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x30);
    lVar3 = lVar1;
    func_0x00010c252d60(lVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091cb7f0; end: 1091cb82b; -[SCLensMediaAssetManager imageCount] */

undefined8 FUN_1091cb7f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091cb82c; end: 1091cb87b; -[SCLensMediaAssetManager indexForAssetIdetifier:] */

long FUN_1091cb82c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2827c0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1091cb87c; end: 1091cb927; -[SCLensMediaAssetManager imageIdentifierForItemAtIndex:] */

void FUN_1091cb87c(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (param_3 < ppuVar2) {
    func_0x00010bf0bae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    ppuVar1 = ppuVar2;
    func_0x00010c09da80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1091cb928; end: 1091cba2f; -[SCLensMediaAssetManager getThumbnailImageAtIndex:targetSize:completion:] */

void FUN_1091cb928(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5,long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_6);
  ppuVar1 = param_3;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (param_5 < ppuVar2) {
    ppuVar1 = param_3;
    func_0x00010bf0bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb260(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  else {
    param_3 = &PTR____CFConstantStringClassReference_110daafd8;
    (**(code **)(param_6 + 0x10))(param_6,0,&PTR____CFConstantStringClassReference_110daafd8,0,0);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091cba30; end: 1091cbb1f; -[SCLensMediaAssetManager getOriginalImageAtIndex:completion:] */

void FUN_1091cba30(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  ppuVar1 = param_1;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (param_3 < ppuVar2) {
    ppuVar1 = param_1;
    func_0x00010bf0bae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc8580(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  else {
    param_1 = &PTR____CFConstantStringClassReference_110daafd8;
    (**(code **)(param_4 + 0x10))(param_4,0,&PTR____CFConstantStringClassReference_110daafd8,0,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091cbb20; end: 1091cbbd3; -[SCLensMediaAssetManager getVideoAtIndex:progressHandler:completion:] */

void FUN_1091cbb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf0bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfcc160(param_1,param_2,uVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091cbbd4; end: 1091cbc97; -[SCLensMediaAssetManager getThumbnailForAsset:targetSize:completion:] */

void FUN_1091cbbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar1,param_4,1);
  func_0x00010c1cc000(puVar1,param_4,1);
  func_0x00010be1fa20(param_1,param_2,param_3,param_4,param_5,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091cbc98; end: 1091cbd4f; -[SCLensMediaAssetManager getOriginalImageForAsset:completion:] */

void FUN_1091cbc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar1,param_2,1);
  func_0x00010c1cc000(puVar1,param_2,1);
  func_0x00010be1fa20(0x409e000000000000,0x409e000000000000,param_1,param_2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091cbd50; end: 1091cbf7b; -[SCLensMediaAssetManager getVideoForAsset:progressHandler:completion:] */

void FUN_1091cbd50(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 2) {
    puVar2 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
    _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
    func_0x00010c1cc000();
    func_0x00010c220e20(puVar2);
    if (param_4 != 0) {
      _objc_retain(param_4);
      func_0x00010c1e47a0(puVar2);
      _objc_release(param_4);
    }
    func_0x00010bf27720(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c134700(param_1);
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(puVar2);
  }
  else {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,0,0,puVar4);
    _objc_release(puVar4);
    _objc_release(param_1);
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091cbf7c; end: 1091cc007;  */

void FUN_1091cbf7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0(param_5,param_3,*(undefined8 *)PTR__PHImageResultRequestIDKey_1103481e0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,lVar3,ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1091cc008; end: 1091cc15f;  */

void FUN_1091cc008(long param_1,ulong param_2,undefined8 param_3,undefined **param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar7);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar7 = (undefined *)0x0;
  if (uVar1 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = *(long *)(param_1 + 0x28);
  ppuVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(lVar8,uVar1,ppuVar2,uVar6,puVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091cc160; end: 1091cc18b; -[SCLensMediaAssetManager cancelAssetLoadingWithId:] */

void FUN_1091cc160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067ec0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf2e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_cancelImageRequest__1125a92c8,param_3);
  return;
}



/* Entry: 1091cc18c; end: 1091cc233; -[SCLensMediaAssetManager assetTypeAtIndex:] */

undefined8 FUN_1091cc18c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    func_0x00010bf0bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010c0c6c20();
    uVar3 = 1;
    if (uVar2 == 2) {
      uVar3 = 2;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1091cc234; end: 1091cc2db; -[SCLensMediaAssetManager videoDurationAtIndex:] */

undefined8 FUN_1091cc234(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_4 < uVar2) {
    func_0x00010bf0bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf8b160(uVar1);
    _objc_release(uVar1);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1091cc2dc; end: 1091cc36f; -[SCLensMediaAssetManager cacheContentUriForAssetIdentifier:contentUri:] */

void FUN_1091cc2dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x34);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,param_4,param_3);
    _os_unfair_lock_unlock(param_1 + 0x34);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091cc370; end: 1091cc3fb; -[SCLensMediaAssetManager contentUriForAssetIdentifier:] */

void FUN_1091cc370(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x34);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x34);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091cc3fc; end: 1091cc4c7; -[SCLensMediaAssetManager _getImageAtIndex:targetSize:options:completion:] */

void FUN_1091cc3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010bf0bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be1fa20(param_1,param_2,param_3,param_4,uVar2,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1091cc4c8; end: 1091cc60f; -[SCLensMediaAssetManager _getImageForAsset:targetSize:options:completion:] */

void FUN_1091cc4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf27720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1091cc610;
  puStack_68 = &UNK_110a15200;
  uStack_60 = param_5;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c1357a0(param_1,param_2,param_3,param_4,param_5,0,param_6,&puStack_80);
  _objc_release(param_6);
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091cc610; end: 1091cc75b;  */

void FUN_1091cc610(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf1f3c0();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = ppuVar4;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09da80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x28);
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,param_2,ppuVar2,uVar5,ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    _objc_release(uVar5);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091cc75c; end: 1091cc763; -[SCLensMediaAssetManager mediaType] */

undefined8 FUN_1091cc75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091cc764; end: 1091cc76b; -[SCLensMediaAssetManager assets] */

undefined8 FUN_1091cc764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091cc76c; end: 1091cc79b; -[SCLensMediaAssetManager setAssets:] */

void FUN_1091cc76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091cc79c; end: 1091cc7a3; -[SCLensMediaAssetManager performer] */

undefined8 FUN_1091cc79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091cc7a4; end: 1091cc7d3; -[SCLensMediaAssetManager setPerformer:] */

void FUN_1091cc7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091cc7d4; end: 1091cc7db; -[SCLensMediaAssetManager status] */

undefined8 FUN_1091cc7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091cc7dc; end: 1091cc7e3; -[SCLensMediaAssetManager setStatus:] */

void FUN_1091cc7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1091cc7e4; end: 1091cc837; -[SCLensMediaAssetManager .cxx_destruct] */

void FUN_1091cc7e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091cc838; end: 1091ccb3b; -[SCLensMediaAssetProvider initWithMediaType:maxVideoDuration:photoPermissionCoordinator:batchSize:pushForwardMultipleFacePhotosInsideBatch:studySettingsProvider:mediaAssetManager:] */

undefined8 *
FUN_1091cc838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112700ca0;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_4;
    puVar1[2] = param_1;
    puVar2 = PTR_PTR_1126ced20;
    func_0x00010c0984c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar6);
    puVar1[4] = param_6;
    *(undefined1 *)(puVar1 + 5) = param_7;
    _objc_retain(param_9);
    uVar6 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar6 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar6 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar6 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar6 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0fb4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[3];
    puVar1[3] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 1091ccb3c; end: 1091ccb67;  */

void FUN_1091ccb3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1289a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ccb68; end: 1091ccbb3; -[SCLensMediaAssetProvider dealloc] */

void FUN_1091ccb68(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12aec0(*(undefined8 *)(param_1 + 0x70),param_2,0);
  puStack_28 = PTR_PTR_112700ca0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091ccbb4; end: 1091ccc03; +[SCLensMediaAssetProvider assetManagerMediaTypeFromProviderMediaType:] */

ulong FUN_1091ccbb4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 1;
  uVar2 = 0;
  do {
    uVar5 = uVar4 & param_3;
    if ((long)uVar5 < 4) {
      if (uVar5 == 1) {
LAB_1091ccbf0:
        uVar3 = uVar2 | 1;
      }
      else {
        uVar3 = uVar2 | 2;
        if (uVar5 != 2) {
          uVar3 = uVar2;
        }
      }
    }
    else if ((uVar5 == 8) || (uVar3 = uVar2, uVar5 == 4)) goto LAB_1091ccbf0;
    bVar1 = 4 < uVar4;
    uVar4 = uVar4 << 1;
    uVar2 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  } while( true );
}



/* Entry: 1091ccc04; end: 1091ccf17; -[SCLensMediaAssetProvider handlePhotoImageManagerDidUpdateNotification:] */

void FUN_1091ccc04(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010bf529e0();
  lVar7 = lVar4;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    bVar1 = true;
  }
  else {
    uVar8 = param_1;
    func_0x00010bfcf720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar9 = lVar6;
    func_0x00010bfecc20();
    bVar1 = lVar9 == 0x7fffffffffffffff;
    _objc_release(uVar8);
  }
  if (lVar4 == 0) {
    bVar2 = true;
  }
  else {
    uVar8 = param_1;
    func_0x00010bfcf720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf529e0(lVar4);
    lVar9 = lVar4;
    func_0x00010bfecc00();
    bVar2 = lVar9 == 0x7fffffffffffffff;
    _objc_release(uVar8);
  }
  if (((int)lVar5 == 0) || (!(bool)((lVar3 != 0) != (lVar7 != 0) & bVar1 & bVar2))) {
    func_0x00010c128980(param_1);
  }
  else {
    uVar8 = param_1;
    func_0x00010c15e3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bfec280();
    _objc_release(uVar8);
    _objc_initWeak(auStack_68,param_1);
    func_0x00010c0c4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = (undefined4)uVar10;
    uStack_6c = lVar3 != 0;
    _objc_retain(lVar6);
    uStack_6b = lVar7 != 0;
    _objc_retain(lVar4);
    func_0x00010c1289e0(param_1);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091ccf18; end: 1091ccffb;  */

void FUN_1091ccf18(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  iVar1 = *(int *)(param_1 + 0x38);
  lVar3 = lVar2;
  func_0x00010c15e3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c296d80();
  _objc_release(lVar3);
  if (iVar1 == (int)lVar4) {
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0(lVar4);
      lVar3 = lVar2;
      func_0x00010c137260(lVar2);
      func_0x00010c1ec340(lVar2,param_2,lVar3 - lVar4);
      func_0x00010c114ca0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    }
    if (*(char *)(param_1 + 0x3d) == '\x01') {
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010bf529e0(lVar4);
      lVar3 = lVar2;
      func_0x00010c137260(lVar2);
      func_0x00010c1ec340(lVar2,param_2,lVar3 + lVar4);
      func_0x00010c114c80(0x4079000000000000,0x4079000000000000,lVar2,param_2,
                          *(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091ccffc; end: 1091cd053; -[SCLensMediaAssetProvider reloadAssetsIfNeededOnMainThread] */

void FUN_1091ccffc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1091cd054;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000107c312cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1091cd054; end: 1091cd05b;  */

void FUN_1091cd054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadAssetsIfNeeded_112627c80);
  return;
}



/* Entry: 1091cd05c; end: 1091cd0bf; -[SCLensMediaAssetProvider reloadAssetsIfNeeded] */

void FUN_1091cd05c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c128a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadAssetsWithCompletion__112627ca0,0);
  return;
}



/* Entry: 1091cd0c0; end: 1091cd267; -[SCLensMediaAssetProvider reloadAssetsWithCompletion:] */

void FUN_1091cd0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c15e3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfec280();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_1;
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = (undefined4)uVar2;
  _objc_retain(param_3);
  func_0x00010c1289e0(uVar1);
  _objc_release(uVar1);
  func_0x00010c1e37a0(param_1);
  func_0x00010c1ec340(param_1);
  func_0x00010c1861e0(param_1);
  uVar1 = param_1;
  func_0x00010bfcf720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d220(param_1);
  func_0x00010c0971c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1091cd268; end: 1091cd367;  */

void FUN_1091cd268(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  iVar1 = *(int *)(param_1 + 0x30);
  lVar3 = lVar2;
  func_0x00010c15e3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c296d80();
  _objc_release(lVar3);
  if (iVar1 == (int)lVar4) {
    func_0x00010c1e37a0(lVar2,param_2,0);
    func_0x00010c1ec340(lVar2,param_2,0);
    func_0x00010c1861e0(lVar2,param_2,0);
    lVar3 = lVar2;
    func_0x00010bfcf720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bf6b020(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfe72c0(lVar2);
    lVar5 = lVar2;
    func_0x00010bf2d220(lVar2);
    func_0x00010c0971c0(lVar3,param_2,lVar2,lVar4,lVar5);
    _objc_release(lVar3);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091cd368; end: 1091cd36f; -[SCLensMediaAssetProvider resetRequestedImagesCountButKeepIndexes] */

void FUN_1091cd368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ec350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRequestedImageCount__112658af8,0);
  return;
}



/* Entry: 1091cd370; end: 1091cd493; -[SCLensMediaAssetProvider warmupWithCompletion:] */

void FUN_1091cd370(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  if (lVar2 == 2) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c0c4120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 1) {
      func_0x00010c128a00(param_1,param_2,param_3);
      goto LAB_1091cd47c;
    }
  }
  lVar1 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    func_0x00010bfe72c0(param_1);
    lVar3 = param_1;
    func_0x00010bf2d220(param_1);
    func_0x00010c0971c0(lVar1,param_2,param_1,lVar2,lVar3);
    _objc_release(lVar1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_1091cd47c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091cd494; end: 1091cd54f; -[SCLensMediaAssetProvider reloadAssetsIfNeededWithCompletion:] */

void FUN_1091cd494(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  if (lVar2 == 2) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c0c4120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 1) {
      func_0x00010c128a00(param_1,param_2,param_3);
      goto LAB_1091cd538;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_1091cd538:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091cd550; end: 1091cd553; -[SCLensMediaAssetProvider cooldown] */

void FUN_1091cd550(void)

{
  return;
}



/* Entry: 1091cd554; end: 1091cd633; -[SCLensMediaAssetProvider processMoreImagesIfPossibleWithSize:count:] */

void FUN_1091cd554(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_3;
  func_0x00010c115760();
  lVar2 = param_3;
  func_0x00010c137260();
  if (lVar2 <= lVar1) {
    _objc_initWeak(auStack_48,param_3);
    _objc_copyWeak(auStack_68,auStack_48);
    uStack_60 = param_5;
    uStack_58 = param_1;
    uStack_50 = param_2;
    func_0x00010c1289c0(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1091cd634; end: 1091cd7db;  */

void FUN_1091cd634(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252d60();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 2) {
    func_0x00010bfe72c0();
    _objc_release(lVar2);
    func_0x00010c137260();
    func_0x00010c1ec340(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010c115760(lVar1);
    func_0x00010c137260(lVar1);
    func_0x00010c115760(lVar1);
    func_0x00010bfed320(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114c80(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar1);
    _objc_release(puVar4);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c252d60();
    _objc_release(lVar2);
    if (lVar3 == 1) {
      _objc_initWeak(auStack_48,lVar1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1091cd7dc;
      puStack_70 = &UNK_1108e54a8;
      _objc_copyWeak(auStack_68,auStack_48);
      uStack_58 = *(undefined8 *)(param_1 + 0x38);
      uStack_60 = *(undefined8 *)(param_1 + 0x30);
      uStack_50 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c312d4(0x3f800000,"APPSTORE",&puStack_88);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091cd7dc; end: 1091cd813;  */

void FUN_1091cd7dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c114f40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091cd814; end: 1091cd89b; -[SCLensMediaAssetProvider canProcessMoreImages] */

bool FUN_1091cd814(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c252d60();
  if (uVar3 == 1) {
    bVar1 = true;
  }
  else {
    uVar3 = param_1;
    func_0x00010c115760(param_1);
    func_0x00010c0c4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfe72c0();
    bVar1 = uVar3 < uVar4;
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1091cd89c; end: 1091cd8d7; -[SCLensMediaAssetProvider imageCount] */

undefined8 FUN_1091cd89c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5c760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091cd8d8; end: 1091cd913; -[SCLensMediaAssetProvider rawImageCount] */

undefined8 FUN_1091cd8d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe72c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091cd914; end: 1091cd9a3; -[SCLensMediaAssetProvider imageIdentifierAtIndex:] */

void FUN_1091cd914(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x00010bf5c760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (param_3 < ppuVar2) {
    func_0x00010bf5c760(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1091cd9a4; end: 1091cda2b; -[SCLensMediaAssetProvider indexOfImageWithIdentifier:] */

long FUN_1091cd9a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0x7fffffffffffffff;
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010bf5c760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfecde0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1091cda2c; end: 1091cdb63; -[SCLensMediaAssetProvider getPreviewImageAtIndex:targetSize:completion:] */

void FUN_1091cda2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = param_3;
  func_0x00010bfe7ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010bfcb2a0(param_3);
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091cdb64; end: 1091cdbb3;  */

void FUN_1091cdb64(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091cdb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfcb2c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091cdbb4; end: 1091cdde7; -[SCLensMediaAssetProvider getOriginalImageAtIndex:completion:] */

void FUN_1091cdbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfe7ea0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0db640(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bdcf900(param_1,param_2,uVar1);
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1091cdcdc;
  puStack_58 = &UNK_110adff58;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_4);
  uVar4 = param_1;
  func_0x00010bfc8560(param_1,param_2,uVar3,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1091cdde8; end: 1091cdebf; -[SCLensMediaAssetProvider getVideoAssetAtIndex:completion:] */

void FUN_1091cdde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf920(param_1,param_2,param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091cdec4;
  puStack_40 = &UNK_110adffc8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010bfcc120(uVar1,param_2,param_1,&PTR___NSConcreteGlobalBlock_110adffa8,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091cdec0; end: 1091cdec3;  */

void FUN_1091cdec0(void)

{
  return;
}



/* Entry: 1091cdec4; end: 1091cdf63;  */

void FUN_1091cdec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdc2b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091cdf64; end: 1091cdfb7; -[SCLensMediaAssetProvider cancelAssetLoadingWithId:] */

void FUN_1091cdf64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfe7e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2de60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091cdfb8; end: 1091ce017; -[SCLensMediaAssetProvider assetTypeAtIndex:] */

undefined8 FUN_1091cdfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf920(param_1,param_2,param_3);
  uVar2 = uVar1;
  func_0x00010bf0b780(uVar1,param_2,param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091ce018; end: 1091ce07f; -[SCLensMediaAssetProvider videoDurationAtIndex:] */

undefined8
FUN_1091ce018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf920(param_2,param_3,param_4);
  func_0x00010c299da0(uVar1,param_3,param_2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091ce080; end: 1091ce0f7; -[SCLensMediaAssetProvider getCroppedImagIdsFromGroupedImageRepresentation:] */

void FUN_1091ce080(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (((*(byte *)(param_1 + 8) >> 3 & 1) == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    func_0x00010be17f80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be17fa0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091ce0f8; end: 1091ce20f; -[SCLensMediaAssetProvider getThumbnailImageFromCameraWithCroppedImageId:targetSize:completion:] */

void FUN_1091ce0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c0db640(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bdcf900(param_3,param_4,param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091ce210;
  puStack_70 = &UNK_110adfff8;
  uStack_68 = param_5;
  uStack_60 = uVar1;
  uStack_58 = param_6;
  _objc_retain(uVar1);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfc43c0(param_1,param_2,param_3,param_4,uVar2,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1091ce210; end: 1091ce377;  */

void FUN_1091ce210(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bfecde0();
  lVar6 = *(long *)(param_1 + 0x30);
  if (param_3 == 0x7fffffffffffffff) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    (**(code **)(lVar6 + 0x10))(lVar6,0,uVar3,0,puVar1,0);
  }
  else {
    puVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (**(code **)(lVar6 + 0x10))(lVar6,puVar1,uVar3,uVar3,puVar2,0);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  puVar1 = param_2;
  func_0x00010c0db640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  _objc_retain();
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010c0dff40(uVar7);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



/* Entry: 1091ce378; end: 1091ce767; -[SCLensMediaAssetProvider getThumbnailImageFromCacheWithCroppedImageId:completion:] */

void FUN_1091ce378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0db640(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1091ce464;
  puStack_50 = &UNK_110992908;
  uStack_48 = param_3;
  lStack_40 = lVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0dff40(uVar2,param_2,param_3,0,&puStack_68);
  _objc_release(lStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1091ce768; end: 1091ce7db; -[SCLensMediaAssetProvider imageIdFromCroppedImageId:] */

void FUN_1091ce768(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110f2bab8);
  lVar2 = param_3;
  if (lVar1 == 0x7fffffffffffffff) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c260c20(param_3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1091ce7dc; end: 1091ce893; -[SCLensMediaAssetProvider normalizedRectsFromCroppedImageId:] */

void FUN_1091ce7dc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c11f420();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x7fffffffffffffff) {
    puVar1 = param_3;
    func_0x00010c260c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091ce894; end: 1091ce8bf;  */

void FUN_1091ce894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _CGRectFromString(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c2971b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGRect__112683690);
  return;
}



/* Entry: 1091ce8c0; end: 1091ce907; -[SCLensMediaAssetProvider _assetIndexForCroppedImageIndex:] */

undefined8 FUN_1091ce8c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfe7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf900(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091ce908; end: 1091ce96f; -[SCLensMediaAssetProvider _assetIndexForCroppedImageId:] */

undefined8 FUN_1091ce908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bfe7e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfecae0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091ce970; end: 1091ceb87; -[SCLensMediaAssetProvider processImagesInsertingAtIndexes:size:] */

void FUN_1091ce970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bfcf720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf529e0(param_5);
  lVar3 = param_5;
  func_0x00010bfecc00();
  _objc_release(uVar2);
  if (lVar3 == 0x7fffffffffffffff) {
    uVar2 = param_3;
    func_0x00010c15e3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c296d80();
    _objc_release();
    _dispatch_group_create();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1091ceb88;
    puStack_98 = &UNK_110ae0078;
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(uVar2);
    uStack_90 = uVar2;
    uStack_78 = param_1;
    uStack_70 = param_2;
    _objc_retain(puVar5);
    puStack_88 = puVar5;
    func_0x00010bf97bc0(param_5);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1091cecc8;
    puStack_d8 = &UNK_1108607b8;
    _objc_copyWeak(auStack_c0,auStack_68);
    uStack_b8 = (undefined4)uVar4;
    _objc_retain(param_5);
    lStack_d0 = param_5;
    puStack_c8 = puVar5;
    _objc_retain(puVar5);
    func_0x000107c27d98(uVar2,PTR___dispatch_main_q_11034be20,&puStack_f0);
    _objc_release(puStack_c8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1091ceb88; end: 1091cec43;  */

void FUN_1091ceb88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bfc43c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1091cec44; end: 1091cecc7;  */

void FUN_1091cec44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091cecc8; end: 1091cee83;  */

void FUN_1091cecc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  iVar3 = *(int *)(param_1 + 0x38);
  lVar5 = lVar4;
  func_0x00010c15e3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c296d80();
  _objc_release(lVar5);
  if (iVar3 == (int)lVar6) {
    lVar5 = lVar4;
    func_0x00010bfcf720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0d3c80();
    _objc_release(lVar5);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1091cee84;
    puStack_68 = &UNK_110975a38;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_60 = uVar2;
    _objc_retain(lVar6);
    lStack_58 = lVar6;
    func_0x00010bf97bc0(uVar1);
    _objc_initWeak(auStack_88,lVar4);
    lVar5 = lVar4;
    func_0x00010c0f98a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_88);
    _objc_retain(lVar6);
    uStack_90 = *(undefined4 *)(param_1 + 0x38);
    func_0x00010c0f7fc0(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  return;
}


