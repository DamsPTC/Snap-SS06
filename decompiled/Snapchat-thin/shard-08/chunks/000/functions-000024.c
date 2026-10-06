/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c11c78; end: 105c11c8b; -[SCGalleryImportCameraRollAssetItemsImporter cancel] */

void FUN_105c11c78(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



/* Entry: 105c11c8c; end: 105c11dd3; -[SCGalleryImportCameraRollAssetItemsImporter _advance] */

void FUN_105c11c8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(long *)(param_1 + 0x38) + 1;
  uVar2 = *(ulong *)(param_1 + 0x88);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar4 = uVar3;
    func_0x00010bf0af00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(uVar3);
    uStack_50 = uVar1;
    func_0x00010be37b40(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__complete_1125563a0);
  return;
}



/* Entry: 105c11dd4; end: 105c11ec3;  */

void FUN_105c11dd4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar2 = 0x48;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf99840();
      *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) + lVar2;
      lVar2 = 0x50;
    }
    func_0x00010bef92c0(*(undefined8 *)(lVar1 + lVar2));
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
    if (*(long *)(lVar1 + 0x18) != 0) {
      if ((long)*(ulong *)(lVar1 + 0x28) < 1) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)((double)*(long *)(lVar1 + 0x30) / (double)*(ulong *)(lVar1 + 0x28));
      }
      (**(code **)(*(long *)(lVar1 + 0x18) + 0x10))(fVar4);
    }
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      func_0x00010bf529e0(*(undefined8 *)(lVar1 + 0x88));
      func_0x00010bef9300(uVar3);
      func_0x00010bde2800(lVar1);
    }
    else {
      func_0x00010bdc9740(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c11ec4; end: 105c11f6b; -[SCGalleryImportCameraRollAssetItemsImporter _complete] */

void FUN_105c11ec4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(0x3f800000);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf51e00(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf51e00(uVar2);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 105c11f6c; end: 105c1204f; -[SCGalleryImportCameraRollAssetItemsImporter _importAsset:completion:] */

void FUN_105c11f6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  if (lVar1 == 2) {
    func_0x00010be37d00(param_1);
  }
  else if (lVar1 == 1) {
    func_0x00010be37c40(param_1);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c12050;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c12050; end: 105c1205f;  */

void FUN_105c12050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c1205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c12060; end: 105c12143; -[SCGalleryImportCameraRollAssetItemsImporter _importImageAsset:completion:] */

void FUN_105c12060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c12144;
  puStack_50 = &UNK_1108dd1a8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107f6e46c(puVar1,param_3,0,0,0,&puStack_68);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c12144; end: 105c124d3;  */

void FUN_105c12144(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0);
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfea3c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0xffffffffa9fc90cc;
      func_0x00010b77c6b4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a7e0(PTR_PTR_1126b6600);
      uVar6 = 0;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar9);
      func_0x00010befa840(param_1,uVar1);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c09da80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf5a700(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c14a1a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      uVar1 = uVar9;
      _objc_retain(uVar9);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c124d4; end: 105c124fb;  */

void FUN_105c124d4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105c124e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 != 0);
  return;
}



/* Entry: 105c124fc; end: 105c126bb; -[SCGalleryImportCameraRollAssetItemsImporter _importVideoAsset:completion:] */

void FUN_105c124fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puVar2 = PTR_PTR_1126c3268;
    _objc_alloc(PTR_PTR_1126c3268);
    func_0x00010c01dbe0();
    lVar3 = lVar1;
    func_0x00010bf165a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf9d3e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c297260(lVar5);
    _objc_release(lVar5);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c126bc; end: 105c12797;  */

void FUN_105c126bc(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c12798;
    puStack_40 = &UNK_110849530;
    puVar1 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_58);
    puVar1 = puStack_38;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107f72060();
    func_0x00010be16ec0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105c12798; end: 105c127a7;  */

void FUN_105c12798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c127a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c127a8; end: 105c12b53; -[SCGalleryImportCameraRollAssetItemsImporter _finishImportVideoAsset:videoURL:rotationOrientation:completion:] */

void FUN_105c127a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfea3c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c29af00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010bf5a700();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2220;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560();
      _objc_retain(param_4);
      _objc_retain(param_6);
      func_0x00010befc940(uVar3);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(param_6);
      lVar4 = param_4;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c09da80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf5a700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c14a1c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_6;
      _objc_retain(param_6);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar6);
      _objc_release(lVar4);
      _objc_release(uVar6);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(puVar8);
      _objc_release(uVar3);
      lVar4 = param_6;
    }
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c12b54; end: 105c12b67;  */

void FUN_105c12b54(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105c12b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 != 0);
  return;
}



/* Entry: 105c12b68; end: 105c12bcb;  */

void FUN_105c12b68(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000105c12bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2 != 0);
  return;
}



/* Entry: 105c12bcc; end: 105c12bd3; -[SCGalleryImportCameraRollAssetItemsImporter assetItems] */

undefined8 FUN_105c12bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105c12bd4; end: 105c12bdb; -[SCGalleryImportCameraRollAssetItemsImporter importing] */

undefined1 FUN_105c12bd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 105c12bdc; end: 105c12c6b; -[SCGalleryImportCameraRollAssetItemsImporter .cxx_destruct] */

void FUN_105c12bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105c12c6c; end: 105c1318b; -[SCGalleryImportCameraRollCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105c12c6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126ec5f0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar11 = (long)_DAT_1127324e0;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_b8 = (undefined *)uVar10;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_c8 = uVar10;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_d8 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_f0 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar10;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e8);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uStack_f0);
    _objc_release(puStack_e0);
    _objc_release(puStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_c8);
    _objc_release(puStack_c0);
    _objc_release(puStack_b0);
    _objc_release(puStack_b8);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar11 = (long)_DAT_1127324e4;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_b0 = (undefined8 *)uVar4;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b8);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puStack_b0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar2);
    unaff_x20 = (undefined8 *)PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_105c1318c;
  puStack_118 = PTR_PTR_1126ec5f0;
  puStack_120 = puVar3;
  puStack_110 = unaff_x20;
  puStack_108 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_120,PTR_s_setSelected__11265c598);
  func_0x00010bedf720(puVar3);
  return puVar3;
}



/* Entry: 105c1318c; end: 105c131d3; -[SCGalleryImportCameraRollCell setSelected:] */

void FUN_105c1318c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec5f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598);
  func_0x00010bedf720(param_1);
  return;
}



/* Entry: 105c131d4; end: 105c13707; -[SCGalleryImportCameraRollCell setImageManager:assetItem:thumbnailSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c131d4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined **unaff_x24;
  long lVar20;
  double dVar21;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = param_5;
  _objc_retain(param_5);
  iVar16 = (int)lVar20;
  _objc_retain(param_6);
  lVar20 = (long)_DAT_1127324e8;
  if ((*(long *)(param_3 + lVar20) == param_5) && (*(long *)(param_3 + _DAT_1127324ec) == param_6))
  {
    dVar21 = ((double *)(param_3 + _DAT_1127324f0))[1];
    bVar2 = false;
    if ((*(double *)(param_3 + _DAT_1127324f0) == param_1) &&
       (bVar2 = false, !NAN(dVar21) && !NAN(param_2))) {
      bVar2 = dVar21 == param_2;
    }
    if (bVar2) goto LAB_105c1368c;
  }
  lVar17 = (long)_DAT_1127324f4;
  if (*(char *)(param_3 + lVar17) == '\x01') {
    *(undefined1 *)(param_3 + lVar17) = 0;
    func_0x00010bf2e480(*(undefined8 *)(param_3 + lVar20));
  }
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_3 + lVar20);
  *(long *)(param_3 + lVar20) = param_5;
  _objc_release(uVar3);
  lVar18 = (long)_DAT_1127324ec;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_3 + lVar18);
  *(long *)(param_3 + lVar18) = param_6;
  _objc_release(uVar3);
  pdVar1 = (double *)(param_3 + _DAT_1127324f0);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  unaff_x24 = (undefined **)(long)_DAT_1127324fc;
  if (*(long *)(param_3 + (long)unaff_x24) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x402e000000000000,0x402e000000000000);
    uVar3 = *(undefined8 *)(param_3 + (long)unaff_x24);
    *(undefined **)(param_3 + (long)unaff_x24) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0c40;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x402e000000000000,0x402e000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + (long)unaff_x24));
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c182220(*(undefined8 *)(param_3 + (long)unaff_x24));
    lVar6 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
    func_0x00010c219b60(*(undefined8 *)(param_3 + (long)unaff_x24));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_3 + (long)unaff_x24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + (long)unaff_x24);
    uStack_a0 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + (long)unaff_x24);
    uStack_98 = uVar19;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + (long)unaff_x24);
    uStack_90 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar19);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(uVar7);
  }
  lVar6 = param_6;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072a60();
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + (long)unaff_x24));
  _objc_release(lVar6);
  iVar16 = 0;
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + _DAT_1127324e0));
  func_0x00010bedf720(param_3);
  if ((*(long *)(param_3 + lVar20) != 0) && (*(long *)(param_3 + lVar18) != 0)) {
    *(undefined1 *)(param_3 + lVar17) = 1;
    _objc_initWeak(auStack_a8,param_3);
    uVar19 = *(undefined8 *)(param_3 + lVar20);
    uVar3 = *(undefined8 *)(param_3 + lVar18);
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105c13708;
    puStack_b8 = &UNK_1108dd238;
    unaff_x24 = &puStack_d0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    iVar16 = 1;
    param_4 = uVar3;
    func_0x000107fe9568(*pdVar1,pdVar1[1],uVar19,uVar3,1,1,&puStack_d0);
    *(int *)(param_3 + _DAT_1127324f8) = (int)uVar19;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
LAB_105c1368c:
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(param_4);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if ((param_5 != 0) && (*(int *)(param_5 + _DAT_1127324f8) == iVar16)) {
    *(undefined1 *)(param_5 + _DAT_1127324f4) = 0;
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + _DAT_1127324e0));
    func_0x00010bedf720(param_5);
    func_0x00010bed73c0(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c13708; end: 105c1379b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c13708(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(int *)(param_1 + _DAT_1127324f8) == param_3)) {
    *(undefined1 *)(param_1 + _DAT_1127324f4) = 0;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127324e0));
    func_0x00010bedf720(param_1);
    func_0x00010bed73c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c1379c; end: 105c13c4b; -[SCGalleryImportCameraRollCell _updateSelectedStateAndErrorState] */

/* WARNING: Possible PIC construction at 0x000105c139d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105c13bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105c13ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105c13c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c13cac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000105c13bc8) */
/* WARNING: Removing unreachable block (ram,0x000105c139d8) */
/* WARNING: Removing unreachable block (ram,0x000105c13bcc) */
/* WARNING: Removing unreachable block (ram,0x000105c139ec) */
/* WARNING: Removing unreachable block (ram,0x000105c13c34) */
/* WARNING: Removing unreachable block (ram,0x000105c13a14) */
/* WARNING: Removing unreachable block (ram,0x000105c13a18) */
/* WARNING: Removing unreachable block (ram,0x000105c13bc0) */
/* WARNING: Removing unreachable block (ram,0x000105c13c3c) */
/* WARNING: Removing unreachable block (ram,0x000105c13be8) */
/* WARNING: Removing unreachable block (ram,0x000105c13c44) */
/* WARNING: Removing unreachable block (ram,0x000105c13bec) */
/* WARNING: Removing unreachable block (ram,0x000105c13c48) */
/* WARNING: Removing unreachable block (ram,0x000105c13cfc) */
/* WARNING: Removing unreachable block (ram,0x000105c13ca4) */
/* WARNING: Removing unreachable block (ram,0x000105c13c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1379c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((uVar1 & 1) == 0) {
    uVar12 = 0;
    iVar13 = _DAT_112732500;
  }
  else {
    lVar2 = *(long *)(param_1 + (long)_DAT_1127324e0);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    iVar13 = _DAT_112732500;
    if (lVar2 == 0) {
      uVar12 = 0;
    }
    else {
      if (*(long *)(param_1 + (long)_DAT_112732500) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60();
        uVar11 = *(undefined8 *)(param_1 + (long)iVar13);
        *(undefined **)(param_1 + (long)iVar13) = puVar3;
        _objc_release(uVar11);
        _objc_release(puVar4);
        uVar1 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar1);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar5 = *(undefined8 *)(param_1 + (long)iVar13);
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar5;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + (long)iVar13);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar4);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar11);
        _objc_release(uVar6);
        _objc_release(uVar1);
        _objc_release(uVar5);
      }
      uVar12 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)iVar13),PTR_s_setHidden__1126479f8,uVar12 ^ 1);
  return;
}



/* Entry: 105c13c4c; end: 105c13d13; -[SCGalleryImportCameraRollCell _updateDurationLabel] */

/* WARNING: Possible PIC construction at 0x000105c13ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c13cac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c13c4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127324ec);
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127324e4),PTR_s_setHidden__1126479f8,lVar2 != 2);
  return;
}



/* Entry: 105c13d14; end: 105c13da3; -[SCGalleryImportCameraRollCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c13d14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127324fc,0);
  _objc_storeStrong(param_1 + _DAT_1127324ec,0);
  _objc_storeStrong(param_1 + _DAT_1127324e8,0);
  _objc_storeStrong(param_1 + _DAT_1127324e4,0);
  _objc_storeStrong(param_1 + _DAT_112732504,0);
  _objc_storeStrong(param_1 + _DAT_112732500,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127324e0,0);
  return;
}



/* Entry: 105c13da4; end: 105c13e57; +[SCGalleryImportCameraRollSectionHeader preferredHeightForWidth:toggleAllButtonState:] */

double FUN_105c13da4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7)

{
  double dVar1;
  undefined8 uVar2;
  
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x7fefffffffffffff;
  func_0x00010bf20bc0(param_1,0x7fefffffffffffff);
  _objc_release(param_5);
  _CGRectGetHeight(param_1,uVar2,param_3,param_4);
  dVar1 = (double)(long)param_1 + 8.0 + 20.0;
  if (param_7 != 0) {
    dVar1 = (double)(long)param_1 + 8.0 + 10.0 + 32.0;
  }
  return dVar1;
}



/* Entry: 105c13e58; end: 105c13fd7; +[SCGalleryImportCameraRollSectionHeader attributedString] */

/* WARNING: Possible PIC construction at 0x000105c14704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c14708) */
/* WARNING: Removing unreachable block (ram,0x000105c14754) */
/* WARNING: Removing unreachable block (ram,0x000105c14714) */
/* WARNING: Removing unreachable block (ram,0x000105c1471c) */
/* WARNING: Removing unreachable block (ram,0x000105c14760) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *** FUN_105c13e58(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  double dVar23;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e228f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e228f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_alloc_init();
  func_0x00010c1bdc00(0x3feccccccccccccd);
  func_0x00010c166c00(puVar2);
  pppuVar17 = (undefined ***)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar1;
  func_0x00010c04e840();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar17);
    return pppuVar17;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = PTR_PTR_1126ec5f8;
  pppuVar17 = &ppuStack_158;
  ppuStack_158 = ppuVar1;
  _objc_msgSendSuper2(pppuVar17,PTR_s_initWithFrame__1125e2948);
  pppuVar6 = (undefined ***)0x0;
  if (pppuVar17 != (undefined ***)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppuVar17);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    dVar23 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar23,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar19 = (long)_DAT_112732508;
    uVar20 = *(undefined8 *)((long)pppuVar17 + lVar19);
    *(undefined **)((long)pppuVar17 + lVar19) = puVar2;
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppuVar17 + lVar19));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)pppuVar17 + lVar19));
    pppuVar6 = pppuVar17;
    _objc_opt_class(pppuVar17);
    func_0x00010bf0e280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)((long)pppuVar17 + lVar19));
    _objc_release(pppuVar6);
    func_0x00010c1bdb00(*(undefined8 *)((long)pppuVar17 + lVar19));
    func_0x00010c1cfce0(*(undefined8 *)((long)pppuVar17 + lVar19));
    func_0x00010befbb60(pppuVar17);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar17 + lVar19));
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar2);
    uVar7 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar17;
    func_0x00010bf1ff80(pppuVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar7;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_11273250c;
    uVar21 = *(undefined8 *)((long)pppuVar17 + lVar22);
    *(undefined8 *)((long)pppuVar17 + lVar22) = uVar20;
    _objc_release(uVar21);
    _objc_release(pppuVar6);
    _objc_release(uVar7);
    pppuVar8 = *(undefined ****)((long)pppuVar17 + lVar19);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar17;
    func_0x00010c08e400(pppuVar17);
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = pppuVar8;
    func_0x00010bf493c0((long)(dVar23 * 0.04));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar9);
    _objc_release(pppuVar8);
    uVar7 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar17;
    func_0x00010c1408a0(pppuVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar7;
    func_0x00010bf493c0(-(double)(long)(dVar23 * 0.04));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar9);
    _objc_release(uVar7);
    func_0x00010c1e3380(0x4479c000,*(undefined8 *)((long)pppuVar17 + lVar22));
    func_0x00010c1e3380(0x4479c000,pppuVar6);
    func_0x00010c1e3380(0x4479c000,uVar20);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar17;
    func_0x00010c274200(pppuVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar7;
    uStack_120 = *(undefined8 *)((long)pppuVar17 + lVar22);
    uVar11 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar17;
    func_0x00010bf34860(pppuVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar21;
    plStack_110 = (long *)pppuVar6;
    uStack_108 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar21);
    _objc_release(pppuVar8);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(pppuVar9);
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_112732510;
    uVar7 = *(undefined8 *)((long)pppuVar17 + lVar19);
    *(undefined **)((long)pppuVar17 + lVar19) = puVar2;
    _objc_release(uVar7);
    func_0x00010befbd60(*(undefined8 *)((long)pppuVar17 + lVar19));
    uVar7 = *(undefined8 *)((long)pppuVar17 + lVar19);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar7);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010c271420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar7);
    _objc_release(puVar2);
    func_0x00010befbb60(pppuVar17);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar17 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar11;
    uVar14 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar10;
    uVar15 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar21;
    uVar16 = *(undefined8 *)((long)pppuVar17 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar16;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_130 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(uVar21);
    _objc_release(pppuVar9);
    _objc_release(uVar15);
    _objc_release(uVar10);
    _objc_release(pppuVar8);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(pppuVar13);
    _objc_release(uVar12);
    *(undefined8 *)((long)pppuVar17 + (long)_DAT_112732514) = 1;
    ppuVar18 = (undefined **)0x0;
    func_0x00010c2169a0(pppuVar17);
    _objc_release(uVar20);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return pppuVar17;
  }
  ___stack_chk_fail();
  if (*(undefined ***)((long)pppuVar6 + (long)_DAT_112732514) == ppuVar18) {
    return pppuVar6;
  }
  *(undefined ***)((long)pppuVar6 + (long)_DAT_112732514) = ppuVar18;
  if (ppuVar18 == (undefined **)0x0) {
    func_0x00010c181140(0xc024000000000000,*(undefined8 *)((long)pppuVar6 + (long)_DAT_11273250c));
    pppuVar17 = *(undefined ****)((long)pppuVar6 + (long)_DAT_112732510);
  }
  else {
    func_0x00010c181140(0xc040000000000000,*(undefined8 *)((long)pppuVar6 + (long)_DAT_11273250c));
    pppuVar17 = *(undefined ****)((long)pppuVar6 + (long)_DAT_112732510);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (pppuVar17,PTR_s_setHidden__1126479f8,ppuVar18 == (undefined **)0x0);
  return pppuVar17;
}



/* Entry: 105c13fd8; end: 105c1469b; -[SCGalleryImportCameraRollSectionHeader initWithFrame:] */

/* WARNING: Possible PIC construction at 0x000105c14704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c14708) */
/* WARNING: Removing unreachable block (ram,0x000105c14754) */
/* WARNING: Removing unreachable block (ram,0x000105c14714) */
/* WARNING: Removing unreachable block (ram,0x000105c1471c) */
/* WARNING: Removing unreachable block (ram,0x000105c14760) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105c13fd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126ec5f8;
  puVar14 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar14,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar14);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    dVar19 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar19,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar17 = (long)_DAT_112732508;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar17);
    *(undefined **)((long)puVar14 + lVar17) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar14 + lVar17));
    _objc_release(puVar1);
    func_0x00010c165e20(*(undefined8 *)((long)puVar14 + lVar17));
    puVar2 = puVar14;
    _objc_opt_class(puVar14);
    func_0x00010bf0e280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)((long)puVar14 + lVar17));
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar14 + lVar17));
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010bf1ff80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11273250c;
    uVar16 = *(undefined8 *)((long)puVar14 + lVar18);
    *(undefined8 *)((long)puVar14 + lVar18) = uVar15;
    _objc_release(uVar16);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar4 = *(undefined8 **)((long)puVar14 + lVar17);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c08e400(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf493c0((long)(dVar19 * 0.04));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c1408a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493c0(-(double)(long)(dVar19 * 0.04));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar3);
    func_0x00010c1e3380(0x4479c000,*(undefined8 *)((long)puVar14 + lVar18));
    func_0x00010c1e3380(0x4479c000,puVar2);
    func_0x00010c1e3380(0x4479c000,uVar15);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c274200(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar3;
    uStack_a0 = *(undefined8 *)((long)puVar14 + lVar18);
    uVar7 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010bf34860(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar16;
    puStack_90 = puVar2;
    uStack_88 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_112732510;
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    *(undefined **)((long)puVar14 + lVar17) = puVar1;
    _objc_release(uVar3);
    func_0x00010befbd60(*(undefined8 *)((long)puVar14 + lVar17));
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar1);
    func_0x00010befbb60(puVar14);
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar17));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar7;
    uVar11 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar6;
    uVar12 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar3;
    uVar13 = *(undefined8 *)((long)puVar14 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(puVar10);
    _objc_release(uVar9);
    *(undefined8 *)((long)puVar14 + (long)_DAT_112732514) = 1;
    param_3 = 0;
    func_0x00010c2169a0(puVar14);
    _objc_release(uVar15);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar14;
  }
  ___stack_chk_fail();
  if (*(long *)((long)puVar2 + (long)_DAT_112732514) == param_3) {
    return puVar2;
  }
  *(long *)((long)puVar2 + (long)_DAT_112732514) = param_3;
  if (param_3 == 0) {
    func_0x00010c181140(0xc024000000000000,*(undefined8 *)((long)puVar2 + (long)_DAT_11273250c));
    puVar14 = *(undefined8 **)((long)puVar2 + (long)_DAT_112732510);
  }
  else {
    func_0x00010c181140(0xc040000000000000,*(undefined8 *)((long)puVar2 + (long)_DAT_11273250c));
    puVar14 = *(undefined8 **)((long)puVar2 + (long)_DAT_112732510);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_setHidden__1126479f8,param_3 == 0);
  return puVar14;
}



/* Entry: 105c1469c; end: 105c14797; -[SCGalleryImportCameraRollSectionHeader setToggleAllButtonState:] */

/* WARNING: Possible PIC construction at 0x000105c14704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c14708) */
/* WARNING: Removing unreachable block (ram,0x000105c14754) */
/* WARNING: Removing unreachable block (ram,0x000105c14714) */
/* WARNING: Removing unreachable block (ram,0x000105c1471c) */
/* WARNING: Removing unreachable block (ram,0x000105c14760) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1469c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112732514) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112732514) = param_3;
  if (param_3 == 0) {
    func_0x00010c181140(0xc024000000000000,*(undefined8 *)(param_1 + _DAT_11273250c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732510);
  }
  else {
    func_0x00010c181140(0xc040000000000000,*(undefined8 *)(param_1 + _DAT_11273250c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732510);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,param_3 == 0);
  return;
}



/* Entry: 105c14798; end: 105c147d3; -[SCGalleryImportCameraRollSectionHeader _didPressToggleAllButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14798(long param_1)

{
  param_1 = param_1 + _DAT_112732518;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c147d4; end: 105c147f3; -[SCGalleryImportCameraRollSectionHeader delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c147d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112732518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c147f4; end: 105c14807; -[SCGalleryImportCameraRollSectionHeader setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c147f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112732518,param_3);
  return;
}



/* Entry: 105c14808; end: 105c14817; -[SCGalleryImportCameraRollSectionHeader toggleAllButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c14808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732514);
}



/* Entry: 105c14818; end: 105c14873; -[SCGalleryImportCameraRollSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14818(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732518);
  _objc_storeStrong(param_1 + _DAT_11273250c,0);
  _objc_storeStrong(param_1 + _DAT_112732510,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732508,0);
  return;
}



/* Entry: 105c14874; end: 105c14c6f; -[SCGalleryImportCameraRollViewController initWithProfile:dataObjectContext:configuration:currentPageTracker:mediaVideoImporter:previewURLVideoProviderFactory:photoPermissionCoordinator:addSnapMutator:galleryLogger:featureSettingsService:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:circumstanceEngine:memoriesSaveManager:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c14874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_70 = PTR_PTR_1126ec600;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11273251c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732520;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732524;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732528;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273252c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732530;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732534;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732538;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273253c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732540;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732544;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732548;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273254c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___PHCachingImageManager_1126c3270;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112732550;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1674c0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112732554;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732558;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273255c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
  }
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



/* Entry: 105c14c70; end: 105c14d03; -[SCGalleryImportCameraRollViewController viewDidLoad] */

void FUN_105c14c70(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be0efc0(param_1);
  return;
}



/* Entry: 105c14d04; end: 105c14d63; -[SCGalleryImportCameraRollViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14d04(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec600;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732528);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 105c14d64; end: 105c14d6f; -[SCGalleryImportCameraRollViewController supportedInterfaceOrientations] */

undefined8 FUN_105c14d64(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c14d70; end: 105c14d77; -[SCGalleryImportCameraRollViewController pageViewName] */

undefined8 FUN_105c14d70(void)

{
  return 0x79;
}



/* Entry: 105c14d78; end: 105c14d7f; -[SCGalleryImportCameraRollViewController shouldPopToRootViewController] */

undefined8 FUN_105c14d78(void)

{
  return 0;
}



/* Entry: 105c14d80; end: 105c14d87; -[SCGalleryImportCameraRollViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105c14d80(void)

{
  return 0;
}



/* Entry: 105c14d88; end: 105c14d8f; -[SCGalleryImportCameraRollViewController shouldDisplayStatusBar] */

undefined8 FUN_105c14d88(void)

{
  return 1;
}



/* Entry: 105c14d90; end: 105c14d93; -[SCGalleryImportCameraRollViewController disableLeftSwipe] */

void FUN_105c14d90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be42fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isProcessing_11256e590);
  return;
}



/* Entry: 105c14d94; end: 105c14da3; -[SCGalleryImportCameraRollViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732560),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105c14da4; end: 105c14e8b; -[SCGalleryImportCameraRollViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e22938,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732550);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732560);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732564);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084a80();
  func_0x00010c1aa560(param_3,param_2,uVar2,uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c14e8c; end: 105c14f57; -[SCGalleryImportCameraRollViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c14e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6e120(param_3,param_2,param_4,&PTR____CFConstantStringClassReference_110e22958,
                        param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    func_0x00010c2169a0(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112732568));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c14f58; end: 105c1501b; -[SCGalleryImportCameraRollViewController collectionView:shouldSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105c14f58(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be42fc0();
  if ((uVar1 & 1) == 0) {
    lVar6 = *(long *)(param_1 + (long)_DAT_112732560);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(lVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010bfed5c0();
    if (((uint)lVar3 != 0) && (lVar4 = lVar6, func_0x00010bfed600(), lVar4 == 1)) {
      func_0x00010c0f3ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108df87a4();
      _objc_release(param_1);
    }
    uVar5 = (uint)lVar3 ^ 1;
    _objc_release(lVar6);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 105c1501c; end: 105c15033; -[SCGalleryImportCameraRollViewController collectionView:shouldDeselectItemAtIndexPath:] */

uint FUN_105c1501c(uint param_1)

{
  func_0x00010be42fc0();
  return param_1 ^ 1;
}



/* Entry: 105c15034; end: 105c15037; -[SCGalleryImportCameraRollViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_105c15034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImportSnapsButton_112593fd0);
  return;
}



/* Entry: 105c15038; end: 105c1503b; -[SCGalleryImportCameraRollViewController collectionView:didDeselectItemAtIndexPath:] */

void FUN_105c15038(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImportSnapsButton_112593fd0);
  return;
}



/* Entry: 105c1503c; end: 105c151e7; -[SCGalleryImportCameraRollViewController _updateImportSnapsButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1503c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + _DAT_112732564);
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11273256c;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  if (lVar6 == 1) {
    func_0x00010c195460(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e22998;
  }
  else {
    if (lVar6 != 0) {
      func_0x00010c195460(uVar2);
      lVar6 = (long)_DAT_112732570;
      if (*(long *)(param_1 + lVar6) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
        _objc_opt_new();
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        *(undefined **)(param_1 + lVar6) = puVar3;
        _objc_release(uVar2);
        func_0x00010c1d02e0(*(undefined8 *)(param_1 + lVar6));
      }
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e229b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e229b8,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d4c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_release(ppuVar4);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      goto LAB_105c151bc;
    }
    func_0x00010c195460(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e22978;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105c151bc:
  func_0x00010c216260(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 105c151e8; end: 105c1528b; -[SCGalleryImportCameraRollViewController galleryImportCameraRollSectionHeaderDidPressToggleAllButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c151e8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be42fc0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c2725c0();
    if (lVar2 == 1) {
      *(undefined8 *)(param_1 + (long)_DAT_112732568) = 2;
      func_0x00010c2169a0(param_3,param_2,2);
      func_0x00010be9d6e0(param_1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c2725c0();
      if (lVar2 == 2) {
        *(undefined8 *)(param_1 + (long)_DAT_112732568) = 1;
        func_0x00010c2169a0(param_3,param_2,1);
        func_0x00010bdfb0a0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c1528c; end: 105c1529b; -[SCGalleryImportCameraRollViewController progressOverlayViewDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1528c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732574),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105c1529c; end: 105c152d3; -[SCGalleryImportCameraRollViewController dialogDidDismiss:] */

void FUN_105c1529c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbcfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c152d4; end: 105c15567; -[SCGalleryImportCameraRollViewController _showLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c152d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112732578;
  if (*(long *)(param_1 + lVar15) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    uStack_98 = uVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar15);
    uStack_90 = uVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    uStack_88 = uVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    param_1 = *(long *)(param_1 + lVar15);
    func_0x00010c24dbc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_112732578;
  if (*(long *)(param_1 + lVar15) != 0) {
    func_0x00010c2558c0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar15));
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar14);
    return;
  }
  return;
}



/* Entry: 105c15568; end: 105c155b3; -[SCGalleryImportCameraRollViewController _hideLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c15568(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732578;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c2558c0();
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105c155b4; end: 105c1684b; -[SCGalleryImportCameraRollViewController _loadImportStateViewsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c155b4(double param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined **ppuVar17;
  undefined *unaff_x23;
  long lVar18;
  long lVar19;
  long unaff_x24;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  long lStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = (undefined **)(long)_DAT_11273257c;
  puVar2 = param_2;
  puStack_208 = unaff_x19;
  if (*(long *)(param_2 + (long)ppuVar17) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    *(undefined **)(param_2 + (long)ppuVar17) = puVar2;
    _objc_release(uVar16);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + (long)ppuVar17));
    _objc_release(puVar2);
    puVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_2 + (long)ppuVar17));
    puStack_1d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    puStack_1a0 = (undefined *)uVar16;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + (long)ppuVar17);
    puStack_1b0 = (undefined *)uVar16;
    uStack_c0 = uVar16;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    puStack_1c0 = (undefined *)uVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + (long)ppuVar17);
    uStack_1d8 = uVar4;
    uStack_b8 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + (long)ppuVar17);
    ppuStack_190 = ppuVar17;
    uStack_b0 = uVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1d0);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uStack_1d8);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    func_0x00010be4d6e0(param_2);
    lVar18 = (long)_DAT_112732568;
    *(undefined8 *)(param_2 + lVar18) = 0;
    iVar1 = (int)*(undefined8 *)(param_2 + _DAT_112732524);
    func_0x00010c10abc0();
    uVar16 = 1;
    if (iVar1 != 0) {
      uVar16 = 2;
    }
    *(undefined8 *)(param_2 + lVar18) = uVar16;
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetWidth();
    _objc_release(puVar2);
    dVar22 = (param_1 + -3.0) * 0.25;
    dVar23 = param_1;
    func_0x00010c106bc0(param_1,PTR_PTR_1126c3278);
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1c8300(0x3ff0000000000000);
    func_0x00010c1c82c0(0,puVar2);
    func_0x00010c1b6260(dVar22,dVar22,puVar2);
    func_0x00010c1a7960(param_1,dVar23,puVar2);
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
    dVar23 = *(double *)(PTR__CGRectZero_110347608 + 8);
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    puStack_198 = puVar2;
    func_0x00010c014040(uVar21,dVar23,uVar24,uVar25);
    lVar19 = (long)_DAT_112732564;
    uVar16 = *(undefined8 *)(param_2 + lVar19);
    *(undefined **)(param_2 + lVar19) = puVar3;
    _objc_release(uVar16);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar19));
    _objc_release(puVar2);
    func_0x000107e85780();
    func_0x00010c1f7ba0(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c189840(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c167740(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c167680(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar19));
    func_0x00010c181fc0(*(undefined8 *)(param_2 + lVar19));
    uVar16 = *(undefined8 *)(param_2 + lVar19);
    _objc_opt_class(PTR_PTR_1126c3280);
    func_0x00010c126000(uVar16);
    uVar16 = *(undefined8 *)(param_2 + lVar19);
    _objc_opt_class(PTR_PTR_1126c3278);
    func_0x00010c126060(uVar16);
    lVar18 = (long)_DAT_112732580;
    func_0x00010c066fe0(*(undefined8 *)(param_2 + (long)ppuStack_190));
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    puStack_1a0 = (undefined *)uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = (undefined *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar19);
    puStack_1b8 = (undefined *)uVar4;
    uStack_e0 = uVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + (long)ppuStack_190);
    puStack_1c0 = (undefined *)uVar6;
    func_0x00010c08e400(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + lVar19);
    uStack_d8 = uVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + (long)ppuStack_190);
    func_0x00010c1408a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + lVar19);
    puStack_1b0 = (undefined *)lVar19;
    uStack_d0 = uVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + (long)ppuStack_190);
    func_0x00010bf1ff80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(puVar2);
    _objc_release(uVar4);
    ppuVar17 = ppuStack_190;
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    func_0x00010be4d6e0(param_2);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14d460();
    puStack_1a0 = puVar2;
    if (((int)puVar3 == 0) || (puVar3 = puVar2, func_0x00010c14d280(), ((ulong)puVar3 & 1) == 0)) {
      puVar3 = puVar2;
      func_0x00010c14d460();
      if ((int)puVar3 == 0) {
        dVar22 = 50.0;
      }
      else {
        func_0x00010c14d2a0();
        dVar22 = 44.0;
        if ((int)puVar2 == 0) {
          dVar22 = 50.0;
        }
      }
    }
    else {
      dVar22 = 37.0;
    }
    puVar2 = PTR_PTR_1126c3288;
    _objc_alloc();
    func_0x00010bffa0e0();
    lVar18 = (long)_DAT_11273256c;
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    *(undefined **)(param_2 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010befbd60(*(undefined8 *)(param_2 + lVar18));
    func_0x00010bed98a0(param_2);
    func_0x00010befbb60(*(undefined8 *)(param_2 + (long)ppuVar17));
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar18));
    puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_2 + lVar18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + (long)ppuVar17);
    puStack_1a8 = (undefined *)uVar6;
    func_0x00010bf34860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + lVar18);
    uStack_f8 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010bf1ff80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar10;
    func_0x00010bf493c0(-dVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + lVar18);
    uStack_f0 = uVar16;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b8);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puStack_1a8);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    dVar20 = dVar23;
    func_0x00010c013de0(uVar21,dVar23,uVar24,uVar25);
    ppuVar17 = ppuStack_190;
    func_0x00010c066fe0(*(undefined8 *)(param_2 + (long)ppuStack_190));
    func_0x00010c219b60(puVar2);
    puStack_1e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    puStack_1b8 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = (undefined *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_1c8 = puVar3;
    puStack_118 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    puStack_1d0 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_1a8 = puVar2;
    puStack_110 = puVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010c1408a0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_100 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1e0);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(uStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b8);
    func_0x00010c0699c0(*(undefined8 *)(param_2 + lVar18));
    func_0x00010c181f80(0,0,dVar22 + dVar20 + 3.0,0,*(undefined8 *)(param_2 + (long)puStack_1b0));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar21,dVar23,uVar24,uVar25);
    lVar18 = (long)_DAT_112732584;
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    *(undefined **)(param_2 + lVar18) = puVar2;
    _objc_release(uVar16);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar18));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar18));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_2 + lVar18));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fc0909090909091,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_2 + lVar18));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_2 + lVar18));
    func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar18));
    ppuVar17 = ppuStack_190;
    func_0x00010befbb60(*(undefined8 *)(param_2 + (long)ppuStack_190));
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010bf495a0(0x3ff0000000000000,0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010bf495a0(0x3ff0000000000000,0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar2;
    func_0x00010c1e3380(0x4479c000,puVar2);
    puStack_1b8 = puVar3;
    func_0x00010c1e3380(0x4479c000,puVar3);
    puStack_1c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_2 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010bf348e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + lVar18);
    uStack_138 = uVar16;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010bf34860(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_130 = uVar4;
    puStack_128 = puVar2;
    puStack_120 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c0);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar16);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c3290;
    _objc_alloc();
    func_0x00010c013de0(uVar21,dVar23,uVar24,uVar25);
    unaff_x24 = (long)_DAT_112732588;
    uVar16 = *(undefined8 *)(param_2 + unaff_x24);
    *(undefined **)(param_2 + unaff_x24) = puVar2;
    _objc_release(uVar16);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + unaff_x24));
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + unaff_x24));
    func_0x00010befbb60(*(undefined8 *)(param_2 + (long)ppuVar17));
    func_0x00010c219b60(*(undefined8 *)(param_2 + unaff_x24));
    puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_2 + unaff_x24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    puStack_1c0 = (undefined *)uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = (undefined *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + unaff_x24);
    puStack_1d0 = (undefined *)uVar4;
    uStack_158 = uVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + (long)ppuVar17);
    uStack_1d8 = uVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = (undefined *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + unaff_x24);
    uStack_150 = uVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + unaff_x24);
    uStack_148 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + (long)ppuVar17);
    func_0x00010bf1ff80(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1e8);
    _objc_release(puVar2);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1c0);
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010bf17fe0();
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    ppuVar17 = &PTR____CFConstantStringClassReference_110e229d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e229d8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_168 = uVar16;
    puStack_160 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(ppuVar17);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_178 = uVar16;
    puStack_170 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2);
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar8);
    unaff_x20 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    unaff_x21 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    ppuVar17 = &PTR____CFConstantStringClassReference_110e229f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e229f8,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_188 = uVar16;
    puStack_180 = unaff_x20;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    func_0x00010bf069e0(puVar3);
    _objc_release(unaff_x21);
    _objc_release(unaff_x23);
    _objc_release(ppuVar17);
    func_0x00010bf947e0(puVar3);
    func_0x00010c16b720(*(undefined8 *)(param_2 + unaff_x24));
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(param_2);
    _objc_release(unaff_x20);
    _objc_release(puVar3);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    puVar2 = puStack_198;
    _objc_release(puStack_198);
    puStack_208 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_105c1684c;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_230 = unaff_x24;
    puStack_228 = unaff_x23;
    ppuStack_220 = ppuVar17;
    puStack_218 = unaff_x21;
    puStack_210 = unaff_x20;
    puStack_200 = &stack0xfffffffffffffff0;
    func_0x00010bee2360();
    _objc_initWeak(auStack_248,puVar2);
    puVar3 = PTR_PTR_1126aed70;
    ppuVar17 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_250,auStack_248);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    puVar7 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    ppuVar17 = &PTR____CFConstantStringClassReference_110e22a18;
    uVar16 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22a18,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_240 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar7);
    _objc_release(puVar8);
    _objc_release(ppuVar17);
    func_0x00010c18b5e0(puVar7);
    func_0x00010c0f3ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_250);
    puVar15 = auStack_248;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_250);
      _objc_destroyWeak(auStack_248);
      __Unwind_Resume(puVar15);
      _objc_retain(uVar16);
      puVar15 = puVar15 + 0x20;
      _objc_loadWeakRetained(puVar15);
      func_0x00010bdc4240();
      _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar15);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105c1684c; end: 105c16a4f; -[SCGalleryImportCameraRollViewController _loadCompleteStateViewsIfNeeded] */

void FUN_105c1684c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bee2360(param_1,param_2,1);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22a18;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22a18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  func_0x00010c18b5e0(puVar3);
  func_0x00010c0f3ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar5 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar5);
  _objc_retain(uVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bdc4240();
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105c16a50; end: 105c16a97;  */

void FUN_105c16a50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4240();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c16a98; end: 105c16b53; -[SCGalleryImportCameraRollViewController _actionBlockForAlertDialog:] */

void FUN_105c16a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c16b54; end: 105c16bbf;  */

void FUN_105c16b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcfa0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c16bc0; end: 105c1761f; -[SCGalleryImportCameraRollViewController _loadHeaderViewForContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c16bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  int iVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar32 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar19 = uVar32;
  func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
  lVar30 = (long)_DAT_112732580;
  uVar29 = *(undefined8 *)(param_1 + lVar30);
  *(undefined **)(param_1 + lVar30) = puVar1;
  _objc_release(uVar29);
  func_0x00010befbb60(param_3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c08e400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c1408a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar17 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar18 = uVar7;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar18);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar16);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(uVar29);
  _objc_release(uVar2);
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar8 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8c20(0x4014000000000000,0x4039000000000000,0x4014000000000000,0x4039000000000000);
  func_0x00010befbd60(puVar8);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c219b60(puVar8);
  puVar1 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80(uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  _objc_release(puVar1);
  func_0x00010c1e3380(0x4479c000,puVar9);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200(uVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493c0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08e400(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar15;
  func_0x00010bf49420(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar29);
  _objc_release(puVar10);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
  lVar31 = (long)_DAT_11273258c;
  uVar29 = *(undefined8 *)(param_1 + lVar31);
  *(undefined **)(param_1 + lVar31) = puVar1;
  _objc_release(uVar29);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar31));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar31));
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar31));
  func_0x00010c16f5a0(*(undefined8 *)(param_1 + lVar31));
  func_0x00010c1c83a0(0x3fe4000000000000,*(undefined8 *)(param_1 + lVar31));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar31));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31));
  uVar13 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010c1408a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bf49480(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar13);
  func_0x00010c1e3380(0x4479c000,uVar29);
  func_0x00010c1e3380(0x4479c000,uVar4);
  func_0x00010c1e3380(0x4479c000,uVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar17 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar17;
  func_0x00010bf493c0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar16);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar13);
  _objc_release(uVar18);
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar30));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar8);
  _objc_release(puVar1);
  func_0x00010bee2360(param_1);
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c500(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar14);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c219b60(puVar14);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010beef8c0(puVar1);
  iVar26 = (int)puVar27;
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(uVar17);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(uVar16);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar13);
  _objc_release(puVar10);
  _objc_release(puVar14);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar29);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  ppuVar25 = &PTR____CFConstantStringClassReference_110e22a18;
  if (iVar26 == 0) {
    ppuVar25 = &PTR____CFConstantStringClassReference_110e22a38;
  }
  func_0x00010bcbeaa8(ppuVar25,0);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_11273258c;
  func_0x00010c212f20(*(undefined8 *)(puVar8 + lVar28));
  _objc_release(ppuVar25);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar8 + lVar28));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar8 + lVar28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c17620; end: 105c176df; -[SCGalleryImportCameraRollViewController _updateTitleLabelForImportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17620(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e22a18;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e22a38;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11273258c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c176e0; end: 105c1770f; -[SCGalleryImportCameraRollViewController _isProcessing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105c176e0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112732590) != 0) {
    return true;
  }
  return *(long *)(param_1 + _DAT_112732574) != 0;
}



/* Entry: 105c17710; end: 105c1775f; -[SCGalleryImportCameraRollViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17710(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be42fc0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = param_1 + (long)_DAT_112732594;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfbcfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105c17760; end: 105c17947; -[SCGalleryImportCameraRollViewController _didPressImportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17760(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *unaff_x19;
  undefined *unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010be42fc0();
  if (((ulong)puVar1 & 1) != 0) goto LAB_105c17910;
  unaff_x19 = param_1;
  func_0x00010bdca000();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = unaff_x19;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_1 + _DAT_112732594;
    _objc_loadWeakRetained();
    func_0x00010bfbcfa0();
    unaff_x21 = puVar1;
LAB_105c17904:
    _objc_release(puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126b24e8;
    func_0x00010bfb7440();
    unaff_x22 = (long)((double)puVar1 / 1.2);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(unaff_x19);
    puVar1 = unaff_x19;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar7 = *plStack_110;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(unaff_x19);
          }
          lVar2 = *(long *)(lStack_118 + (long)puVar8 * 8);
          func_0x00010bf99840();
          lVar6 = lVar2 + lVar6;
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = unaff_x19;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
      unaff_x21 = (undefined *)0x0;
    }
    _objc_release(unaff_x19);
    if (unaff_x22 <= lVar6) {
      unaff_x21 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40();
      func_0x000108df9a04();
      _objc_release(unaff_x21);
      puVar1 = param_1;
      goto LAB_105c17904;
    }
    func_0x00010be37b60(param_1);
  }
  puVar1 = unaff_x19;
  _objc_release();
LAB_105c17910:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105c17948;
  lVar6 = (long)_DAT_112732590;
  if (*(long *)(puVar1 + lVar6) == 0) {
    puVar8 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    lStack_150 = unaff_x22;
    puStack_148 = unaff_x21;
    puStack_140 = param_1;
    puStack_138 = unaff_x19;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010bf10fa0();
    if (puVar8 != (undefined *)0x3) {
      func_0x00010be4d9c0(puVar1);
      func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_112732564));
      func_0x00010c1a7f60(*(undefined8 *)(puVar1 + _DAT_11273256c));
      lVar6 = (long)_DAT_112732584;
      func_0x00010c1a7f60(*(undefined8 *)(puVar1 + lVar6));
      ppuVar4 = &PTR____CFConstantStringClassReference_110e22a58;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22a58,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
      return;
    }
    func_0x00010beb9aa0(puVar1);
    _objc_initWeak(auStack_158,puVar1);
    uVar3 = *(undefined8 *)(puVar1 + _DAT_11273255c);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c32a0;
    _objc_alloc();
    func_0x00010c03aa80();
    uVar5 = *(undefined8 *)(puVar1 + lVar6);
    *(undefined **)(puVar1 + lVar6) = puVar8;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(puVar1 + lVar6);
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x00010bfa4fc0(uVar5);
    _objc_destroyWeak(auStack_160);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_158);
  }
  return;
}



/* Entry: 105c17948; end: 105c17b33; -[SCGalleryImportCameraRollViewController _fetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17948(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_112732590;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x3) {
      func_0x00010be4d9c0(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112732564));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
      lVar5 = (long)_DAT_112732584;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
      ppuVar3 = &PTR____CFConstantStringClassReference_110e22a58;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22a58,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
      return;
    }
    func_0x00010beb9aa0(param_1);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273255c);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c32a0;
    _objc_alloc();
    func_0x00010c03aa80();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa4fc0(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105c17b34; end: 105c17bb3;  */

void FUN_105c17b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105c17bb4; end: 105c17ebf; -[SCGalleryImportCameraRollViewController _completeFetchWithAssetItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17bb4(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732590);
  *(undefined8 *)(param_1 + _DAT_112732590) = 0;
  _objc_release(uVar2);
  ppuVar3 = param_3;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    func_0x00010be35920(param_1);
    func_0x00010be4d9c0(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112732564));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
    lVar10 = (long)_DAT_112732584;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10));
    ppuVar3 = &PTR____CFConstantStringClassReference_110e22a78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e22a78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    ppuVar5 = param_3;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)((long)ppuVar11 * 8);
        lVar6 = lVar9;
        func_0x00010bfed5c0();
        ppuVar7 = ppuVar3;
        if ((((int)lVar6 == 0) ||
            (lVar6 = lVar9, func_0x00010bfed600(), ppuVar7 = ppuVar4, lVar6 == 0)) ||
           (func_0x00010bfed600(), ppuVar7 = ppuVar3, lVar9 == 1)) {
          func_0x00010befa120(ppuVar7);
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar5 != ppuVar11);
      ppuVar5 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    ppuVar5 = ppuVar4;
    func_0x00010bf529e0();
    ppuVar11 = param_3;
    func_0x00010bf529e0();
    if (ppuVar5 == ppuVar11) {
      func_0x00010be35920(param_1);
      func_0x00010be4d9c0(param_1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112732564));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
      lVar10 = (long)_DAT_112732584;
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c1a7f60(uVar2);
      func_0x000108dfd5e4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
      _objc_release(uVar2);
    }
    else {
      ppuVar5 = ppuVar3;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112732560);
      *(undefined ***)(param_1 + _DAT_112732560) = ppuVar5;
      _objc_release(uVar2);
      func_0x00010be35920(param_1);
      func_0x00010be4d9c0(param_1);
      func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732564));
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112732524);
      func_0x00010c10abc0();
      if (iVar1 != 0) {
        func_0x00010be9d6e0(param_1);
      }
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf97e80(*(undefined8 *)((long)param_3 + (long)_DAT_112732560));
  func_0x00010bed98a0(param_3);
  return;
}



/* Entry: 105c17ec0; end: 105c17faf; -[SCGalleryImportCameraRollViewController _selectAllEligibleAssetItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17ec0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c17f30;
  puStack_30 = &UNK_1108dd288;
  lStack_28 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_112732560),param_2,&puStack_48);
  func_0x00010bed98a0(param_1);
  return;
}



/* Entry: 105c17fb0; end: 105c180c7; -[SCGalleryImportCameraRollViewController _deselectAllSelectedAssetItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c17fb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_300 [8];
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [16];
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112732564;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x00010bf6e840(*(undefined8 *)(param_1 + lVar7));
      lVar9 = lVar9 + 1;
    } while (lVar10 != lVar9);
    lVar10 = lVar1;
    func_0x00010bf52a60();
  }
  func_0x00010bed98a0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(lVar1 + _DAT_112732564);
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(lVar2);
  lVar10 = lVar2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar6 = *plStack_240;
    do {
      lVar7 = 0;
      do {
        if (*plStack_240 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lVar1 + _DAT_112732560);
        func_0x00010c0840e0(*(undefined8 *)(lStack_248 + lVar7 * 8));
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar8);
        lVar7 = lVar7 + 1;
      } while (lVar10 != lVar7);
      lVar10 = lVar2;
      puVar5 = &uStack_250;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar2);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  lVar10 = (long)_DAT_112732574;
  if (*(long *)(lVar2 + lVar10) == 0) {
    lVar1 = (long)_DAT_112732588;
    func_0x00010c1e46a0(*(undefined8 *)(lVar2 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + lVar1));
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + _DAT_11273256c));
    uVar8 = *(undefined8 *)(lVar2 + _DAT_112732540);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    _objc_release(uVar8);
    _objc_initWeak(auStack_2d0,lVar2);
    puVar3 = PTR_PTR_1126c32a8;
    _objc_alloc();
    puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_2e8 = FUN_105c1846c;
    puStack_2e0 = &UNK_1108dd2b8;
    uStack_2f0 = 0xc2000000;
    _objc_copyWeak(auStack_2d8,auStack_2d0);
    _objc_copyWeak(auStack_300,auStack_2d0);
    func_0x00010bff44e0();
    uVar8 = *(undefined8 *)(lVar2 + lVar10);
    *(undefined **)(lVar2 + lVar10) = puVar3;
    _objc_release(uVar8);
    func_0x00010bfea3a0(*(undefined8 *)(lVar2 + lVar10));
    _objc_destroyWeak(auStack_300);
    _objc_destroyWeak(auStack_2d8);
    _objc_destroyWeak(auStack_2d0);
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 105c180c8; end: 105c1825f; -[SCGalleryImportCameraRollViewController _allSelectedAssetItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c180c8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112732564);
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
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
  lVar8 = lVar1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(param_1 + _DAT_112732560);
        func_0x00010c0840e0(*(undefined8 *)(lStack_128 + lVar7 * 8));
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar8 != lVar7);
      lVar8 = lVar1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar1);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  lVar8 = (long)_DAT_112732574;
  if (*(long *)(lVar1 + lVar8) == 0) {
    lVar6 = (long)_DAT_112732588;
    func_0x00010c1e46a0(*(undefined8 *)(lVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)(lVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)(lVar1 + _DAT_11273256c));
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112732540);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    _objc_release(uVar5);
    _objc_initWeak(auStack_1b0,lVar1);
    puVar2 = PTR_PTR_1126c32a8;
    _objc_alloc();
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_1c8 = FUN_105c1846c;
    puStack_1c0 = &UNK_1108dd2b8;
    uStack_1d0 = 0xc2000000;
    _objc_copyWeak(auStack_1b8,auStack_1b0);
    _objc_copyWeak(auStack_1e0,auStack_1b0);
    func_0x00010bff44e0();
    uVar5 = *(undefined8 *)(lVar1 + lVar8);
    *(undefined **)(lVar1 + lVar8) = puVar2;
    _objc_release(uVar5);
    func_0x00010bfea3a0(*(undefined8 *)(lVar1 + lVar8));
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_1b0);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 105c18260; end: 105c1846b; -[SCGalleryImportCameraRollViewController _importAssetItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c18260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112732574;
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar3 = (long)_DAT_112732588;
    func_0x00010c1e46a0(0,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732540);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    _objc_release(uVar1);
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR_PTR_1126c32a8;
    _objc_alloc();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_105c1846c;
    puStack_90 = &UNK_1108dd2b8;
    uStack_a0 = 0xc2000000;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010bff44e0();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar1);
    func_0x00010bfea3a0(*(undefined8 *)(param_1 + lVar4));
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c1846c; end: 105c184f3;  */

void FUN_105c1846c(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c184f4;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 105c184f4; end: 105c1853b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c184f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e46a0(*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_112732588),
                        param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c1853c; end: 105c18633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c1853c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732574);
    func_0x00010bf0b360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010bde2d80(param_1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0e0320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0e0320(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdda980(param_1);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c18634; end: 105c188c3; -[SCGalleryImportCameraRollViewController _completeImportWithImportedAssetItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105c18634(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112732588;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
  func_0x00010c1e46a0(0,*(undefined8 *)(param_1 + lVar7));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732574);
  *(undefined8 *)(param_1 + _DAT_112732574) = 0;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112732560;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain();
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar2;
  _objc_release(uVar6);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732564));
  func_0x00010bed98a0(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112732524);
  func_0x00010bf11660();
  if (iVar1 == 0) {
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      func_0x00010be4cd40(param_1);
    }
  }
  else {
    lVar7 = param_1 + _DAT_112732594;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bfbcfa0();
    _objc_release(lVar7);
  }
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)(uVar8 * 8);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11273253c);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfea4c0(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar2);
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
    uVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900(uVar2);
  return (ulong)((uint)uVar2 ^ 1);
}



/* Entry: 105c188c4; end: 105c188e3;  */

uint FUN_105c188c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105c188e4; end: 105c18bab; -[SCGalleryImportCameraRollViewController _cancelImportWithImportedAssetItems:notImportedAssetItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105c188e4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112732588;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273256c));
  func_0x00010c1e46a0(*(undefined8 *)(param_1 + lVar7));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732574);
  *(undefined8 *)(param_1 + _DAT_112732574) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112732560;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(puVar2);
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar1;
  _objc_release(uVar6);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732564));
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(puVar3);
  func_0x00010bf97e80(uVar1);
  func_0x00010bed98a0(param_1);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)(uVar8 * 8);
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273253c);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfea4c0(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar1);
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
    uVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900(uVar1);
  return (ulong)((uint)uVar1 ^ 1);
}



/* Entry: 105c18bac; end: 105c18bcb;  */

uint FUN_105c18bac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105c18bcc; end: 105c18c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c18bcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112732564);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158b60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105c18c50; end: 105c18c6f; -[SCGalleryImportCameraRollViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c18c50(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112732594);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c18c70; end: 105c18c83; -[SCGalleryImportCameraRollViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c18c70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112732594,param_3);
  return;
}



/* Entry: 105c18c84; end: 105c18e7f; -[SCGalleryImportCameraRollViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c18c84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732594);
  _objc_storeStrong(param_1 + _DAT_11273255c,0);
  _objc_storeStrong(param_1 + _DAT_112732558,0);
  _objc_storeStrong(param_1 + _DAT_112732554,0);
  _objc_storeStrong(param_1 + _DAT_11273254c,0);
  _objc_storeStrong(param_1 + _DAT_112732548,0);
  _objc_storeStrong(param_1 + _DAT_112732544,0);
  _objc_storeStrong(param_1 + _DAT_112732540,0);
  _objc_storeStrong(param_1 + _DAT_112732560,0);
  _objc_storeStrong(param_1 + _DAT_11273253c,0);
  _objc_storeStrong(param_1 + _DAT_112732534,0);
  _objc_storeStrong(param_1 + _DAT_112732530,0);
  _objc_storeStrong(param_1 + _DAT_11273252c,0);
  _objc_storeStrong(param_1 + _DAT_112732528,0);
  _objc_storeStrong(param_1 + _DAT_112732574,0);
  _objc_storeStrong(param_1 + _DAT_112732590,0);
  _objc_storeStrong(param_1 + _DAT_112732550,0);
  _objc_storeStrong(param_1 + _DAT_112732538,0);
  _objc_storeStrong(param_1 + _DAT_112732520,0);
  _objc_storeStrong(param_1 + _DAT_11273251c,0);
  _objc_storeStrong(param_1 + _DAT_112732588,0);
  _objc_storeStrong(param_1 + _DAT_112732570,0);
  _objc_storeStrong(param_1 + _DAT_11273256c,0);
  _objc_storeStrong(param_1 + _DAT_112732584,0);
  _objc_storeStrong(param_1 + _DAT_112732564,0);
  _objc_storeStrong(param_1 + _DAT_11273257c,0);
  _objc_storeStrong(param_1 + _DAT_11273258c,0);
  _objc_storeStrong(param_1 + _DAT_112732580,0);
  _objc_storeStrong(param_1 + _DAT_112732578,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732524,0);
  return;
}



/* Entry: 105c18e80; end: 105c18eb7; +[SCGalleryImportCameraRollViewControllerConfiguration fromSettings] */

void FUN_105c18e80(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc_init();
  func_0x00010c1e0c40();
  func_0x00010c16cd60(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c18eb8; end: 105c18eef; +[SCGalleryImportCameraRollViewControllerConfiguration fromTab] */

void FUN_105c18eb8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc_init();
  func_0x00010c1e0c40();
  func_0x00010c16cd60(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105c18ef0; end: 105c18ef7; -[SCGalleryImportCameraRollViewControllerConfiguration preselectsAllItems] */

undefined1 FUN_105c18ef0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105c18ef8; end: 105c18eff; -[SCGalleryImportCameraRollViewControllerConfiguration setPreselectsAllItems:] */

void FUN_105c18ef8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105c18f00; end: 105c18f07; -[SCGalleryImportCameraRollViewControllerConfiguration autoDismissed] */

undefined1 FUN_105c18f00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105c18f08; end: 105c18f0f; -[SCGalleryImportCameraRollViewControllerConfiguration setAutoDismissed:] */

void FUN_105c18f08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105c18f10; end: 105c18fdb; -[SCMemoriesBackgroundPrefetcher initWithDataSource:graphene:circumstanceEngine:] */

undefined1 *
FUN_105c18f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c18fdc; end: 105c19063; -[SCMemoriesBackgroundPrefetcher _prefetchInterval] */

long FUN_105c18fdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bf9e8;
  _objc_alloc(PTR_PTR_1126bf9e8);
  func_0x00010bffe1e0();
  puVar2 = puVar1;
  func_0x00010bfa3300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c107420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c1078a0();
  _objc_release(puVar1);
  _objc_release(puVar2);
  return (long)(int)puVar3 * 0x3c;
}



/* Entry: 105c19064; end: 105c1910f; -[SCMemoriesBackgroundPrefetcher _fireBackgroundPrefetchDidFinishWithFetchResult:fetchedMediaCount:] */

void FUN_105c19064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf142c0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,param_4);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c19110; end: 105c1914b; -[SCMemoriesBackgroundPrefetcher _debugNotifyTitle:body:] */

void FUN_105c19110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c1914c; end: 105c19157; -[SCMemoriesBackgroundPrefetcher dataSyncerIdentifier] */

undefined ** FUN_105c1914c(void)

{
  return &PTR____CFConstantStringClassReference_110e22a98;
}



/* Entry: 105c19158; end: 105c19177; -[SCMemoriesBackgroundPrefetcher jobConfig] */

void FUN_105c19158(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010be77300();
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2);
  func_0x00010c1b67e0(puVar1);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1);
  func_0x00010c198180(puVar1);
  func_0x00010c1b6840(puVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110e22a98);
  func_0x00010c1b6780(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c19178; end: 105c1917f; -[SCMemoriesBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_105c19178(void)

{
  return 1;
}



/* Entry: 105c19180; end: 105c19273; -[SCMemoriesBackgroundPrefetcher onSync:] */

void FUN_105c19180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bdf86a0(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c1073e0(0x403e000000000000,uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c19274; end: 105c193a3;  */

void FUN_105c19274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    func_0x00010bf529e0(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf86a0(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be176e0(lVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c193a4; end: 105c193df; -[SCMemoriesBackgroundPrefetcher .cxx_destruct] */

void FUN_105c193a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


