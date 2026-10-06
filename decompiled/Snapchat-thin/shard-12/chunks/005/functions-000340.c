/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091cee84; end: 1091cf00b;  */

void FUN_1091cee84(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (param_2 <= uVar2) {
      func_0x00010c066b00(*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1091cf00c; end: 1091cf0fb;  */

void FUN_1091cf00c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
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
    func_0x00010c1a4c00(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    lVar3 = lVar2;
    func_0x00010bfcf720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    func_0x00010c1e37a0(lVar2,param_2,lVar4);
    _objc_release(lVar3);
    func_0x00010c1861e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091cf0fc; end: 1091cf297; -[SCLensMediaAssetProvider processImagesRemovingAtIndexes:] */

void FUN_1091cf0fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfcf720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bfecc20();
  _objc_release(uVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    uVar1 = param_1;
    func_0x00010c15e3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c296d80();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfcf720();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    func_0x00010c12d480(uVar4);
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(uVar4);
    uStack_50 = (undefined4)uVar3;
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091cf298; end: 1091cf38f;  */

void FUN_1091cf298(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfc43a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091cf390;
  puStack_60 = &UNK_1108607b8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  _objc_retain(lVar2);
  lStack_50 = lVar2;
  func_0x000107c312d0("APPSTORE",&puStack_78);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1091cf390; end: 1091cf47f;  */

void FUN_1091cf390(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
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
    func_0x00010c1a4c00(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    lVar3 = lVar2;
    func_0x00010bfcf720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    func_0x00010c1e37a0(lVar2,param_2,lVar4);
    _objc_release(lVar3);
    func_0x00010c1861e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091cf480; end: 1091cf5d3; -[SCLensMediaAssetProvider getCroppedThumbnailsFromCameraRollAndCache:size:completion:] */

void FUN_1091cf480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_3);
  uVar1 = param_3;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0b780();
  _objc_release(uVar1);
  func_0x00010c0c4120(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = uVar2;
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010bfcb280(param_1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  return;
}



/* Entry: 1091cf5d4; end: 1091cf7ef;  */

void FUN_1091cf5d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48,
               PTR____NSArray0__struct_11034ab48,*(undefined8 *)(param_1 + 0x38));
    goto LAB_1091cf7ac;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1091cf7ac;
  if (*(long *)(param_1 + 0x30) == 2) {
    dVar5 = *(double *)(lVar1 + 0x10);
    if (dVar5 <= 0.0) goto LAB_1091cf744;
    lVar3 = lVar1;
    func_0x00010c0c4120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c299da0();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x20);
    if (dVar5 <= *(double *)(lVar1 + 0x10)) goto LAB_1091cf748;
    (**(code **)(lVar3 + 0x10))
              (lVar3,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               *(undefined8 *)(param_1 + 0x38));
  }
  else {
    if ((*(long *)(param_1 + 0x30) == 1) && ((*(byte *)(lVar1 + 8) >> 2 & 1) != 0)) {
      puVar4 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar4);
      func_0x00010be80fe0(lVar1);
    }
    else {
LAB_1091cf744:
      lVar3 = *(long *)(param_1 + 0x20);
LAB_1091cf748:
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar4,puVar2,*(undefined8 *)(param_1 + 0x38));
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
LAB_1091cf7ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1091cf7f0; end: 1091cf7ff;  */

void FUN_1091cf7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001091cf7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091cf800; end: 1091cf8fb; +[SCLensMediaAssetProvider _createFaceDetector] */

void FUN_1091cf800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  
  puVar2 = PTR__OBJC_CLASS___CIDetector_1126bd658;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)PTR__CIDetectorTypeFace_11034ac78;
  puVar9 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4f640(PTR__OBJC_CLASS___CIContext_1126b3120,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf6fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar8);
    lVar6 = lVar8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar3 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar5 = (undefined *)0x1;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR_PTR_1126ddb18;
    func_0x00010bded8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    lVar6 = lVar8;
    puVar4 = puVar9;
    func_0x00010bfa3560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(lVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_retain(lVar6);
      _objc_retain(puVar4);
      _objc_retain(in_x5);
      _objc_initWeak(auStack_f8,lVar3);
      func_0x00010c0f98a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_108,auStack_f8);
      _objc_retain(lVar6);
      _objc_retain(in_x5);
      puStack_100 = puVar5;
      _objc_retain(puVar4);
      func_0x00010c0f7fc0(lVar3);
      _objc_release(lVar3);
      _objc_release(puVar4);
      _objc_release(in_x5);
      _objc_release(lVar6);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_f8);
      _objc_release(in_x5);
      _objc_release(puVar4);
      _objc_release(lVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091cf8fc; end: 1091cfa2f; -[SCLensMediaAssetProvider _detectFaceFeaturesInImage:] */

void FUN_1091cf8fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    param_5 = 1;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ddb18;
  func_0x00010bded8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  lVar1 = param_3;
  puVar5 = puVar7;
  func_0x00010bfa3560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  _objc_retain(puVar5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_a8,lVar2);
  func_0x00010c0f98a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_a8);
  _objc_retain(lVar1);
  _objc_retain(param_6);
  uStack_b0 = param_5;
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(lVar1);
  return;
}



/* Entry: 1091cfa30; end: 1091cfb87; -[SCLensMediaAssetProvider _processFaceDetectionAndCacheImage:imageId:imageIndex:completion:] */

void FUN_1091cfa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_50 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091cfb88; end: 1091d034f;  */

void FUN_1091cfb88(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined **param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_140;
  ulong uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = *(undefined **)(param_5 + 0x20);
  func_0x00010bdc10e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
  if (puVar2 == (undefined *)0x0) {
    _objc_retainAutorelease(*(undefined8 *)(param_5 + 0x20));
    func_0x00010bdc1020();
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  uVar4 = uVar1;
  func_0x00010bdfb9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf529e0();
  if (uVar8 == 0) {
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x1091d0434;
    puStack_2a8 = &UNK_110860cf8;
    puVar2 = *(undefined **)(param_5 + 0x30);
    _objc_retain(puVar2);
    uStack_298 = *(undefined8 *)(param_5 + 0x40);
    param_6 = &puStack_2c0;
    puStack_2a0 = puVar2;
    func_0x000107c312d0("APPSTORE");
    puVar2 = puStack_2a0;
  }
  else {
    uVar8 = uVar5;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if ((uVar8 < 2) || ((*(byte *)(uVar1 + 8) >> 3 & 1) == 0)) {
      _objc_alloc();
      func_0x00010bf529e0(uVar5);
      func_0x00010bffc4a0();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bf529e0(uVar5);
      func_0x00010bffc4a0(puVar6);
      uVar16 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      plStack_280 = (long *)0x0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      _objc_retain(uVar5);
      uVar8 = uVar5;
      func_0x00010bf52a60();
      if (uVar8 != 0) {
        lVar14 = *plStack_280;
        do {
          uVar15 = 0;
          do {
            if (*plStack_280 != lVar14) {
              _objc_enumerationMutation(uVar5);
            }
            func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
            func_0x00010be0dda0(uVar1);
            uVar7 = uVar1;
            func_0x00010bdf61c0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar7 != 0) {
              func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
              func_0x00010be64120(uVar1);
              puVar12 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
              func_0x00010c25da60();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar12;
              func_0x00010bf070e0();
              _NSStringFromCGRect(uVar16,param_2,param_3,param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf070e0(puVar12);
              _objc_release(puVar9);
              puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da60(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              func_0x00010befa120(puVar6);
              _objc_release(puVar9);
              _objc_release(puVar12);
            }
            _objc_release(uVar7);
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
          uVar8 = uVar5;
          func_0x00010bf52a60();
        } while (uVar8 != 0);
      }
      _objc_release(uVar5);
      func_0x00010bdd76c0(uVar1);
      _objc_release(puVar6);
    }
    else {
      _objc_alloc();
      func_0x00010bf529e0(uVar5);
      func_0x00010bffc4a0();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(uVar5);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      dVar21 = 0.0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      _objc_retain(uVar5);
      uVar8 = uVar5;
      func_0x00010bf52a60();
      if (uVar8 != 0) {
        lVar14 = *plStack_1f0;
        do {
          uVar15 = 0;
          do {
            if (*plStack_1f0 != lVar14) {
              _objc_enumerationMutation(uVar5);
            }
            func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
            uVar7 = uVar1;
            func_0x00010be64120(uVar1);
            _NSStringFromCGRect();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar7);
            func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
            func_0x00010be0dda0(uVar1);
            puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            dStack_220 = dVar21;
            dStack_218 = param_2;
            dStack_210 = param_3;
            dStack_208 = param_4;
            func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6);
            _objc_release(puVar12);
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
          uVar8 = uVar5;
          func_0x00010bf52a60();
        } while (uVar8 != 0);
      }
      _objc_release(uVar5);
      func_0x00010be60600(uVar1);
      dVar17 = dVar21;
      _CGRectGetWidth();
      dVar18 = dVar21;
      _CGRectGetHeight(dVar21,param_2,param_3,param_4);
      _CGRectInset(dVar21,param_2,param_3,param_4,dVar17 * -0.3 * 0.5,dVar18 * -0.3 * 0.5);
      dVar17 = dVar21;
      dVar18 = param_2;
      func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
      uVar8 = *(ulong *)(param_5 + 0x20);
      func_0x00010c23d0a0();
      dVar19 = 0.0;
      dVar20 = 0.0;
      _CGRectContainsRect(0,0,dVar17,dVar18,dVar21,param_2,param_3,param_4);
      if ((uVar8 & 1) == 0) {
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
        dVar21 = dVar19;
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
        param_3 = dVar19;
        if (dVar20 <= dVar19) {
          param_3 = dVar20;
        }
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
        dVar21 = (dVar21 - param_3) * 0.5;
        func_0x00010c23d0a0(*(undefined8 *)(param_5 + 0x20));
        param_2 = (dVar20 - param_3) * 0.5;
        param_4 = param_3;
      }
      uVar8 = uVar1;
      func_0x00010bdf61c0(dVar21,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (uVar8 == 0) {
        puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_248 = 0xc2000000;
        pcStack_240 = FUN_1091d040c;
        puStack_238 = &UNK_110860cf8;
        puVar12 = *(undefined **)(param_5 + 0x30);
        _objc_retain(puVar12);
        uStack_228 = *(undefined8 *)(param_5 + 0x40);
        param_6 = &puStack_250;
        puStack_230 = puVar12;
        func_0x000107c312d0("APPSTORE");
        puVar12 = puStack_230;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25da60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0();
        puVar9 = puVar2;
        func_0x00010bf446e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar12);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_138 = uVar8;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_140 = puVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd76c0(uVar1);
        _objc_release(puVar10);
        _objc_release(puVar9);
      }
      _objc_release(puVar12);
      _objc_release(uVar8);
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  ppuVar13 = param_6;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar13;
  func_0x00010c0720c0();
  _objc_release(ppuVar13);
  if ((int)ppuVar11 == 0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_6);
    ppuVar13 = param_6;
    func_0x00010bfd8460();
    if ((((int)ppuVar13 == 0) || (ppuVar13 = param_6, func_0x00010bfdb4a0(), (int)ppuVar13 == 0)) ||
       (ppuVar13 = param_6, func_0x00010bfd9460(), (int)ppuVar13 == 0)) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      _objc_retain(param_6);
      ppuVar13 = param_6;
    }
    _objc_release(param_6);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 1091d0350; end: 1091d040b;  */

void FUN_1091d0350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
    func_0x00010bfd8460();
    if ((((int)uVar2 == 0) || (uVar2 = param_2, func_0x00010bfdb4a0(), (int)uVar2 == 0)) ||
       (uVar2 = param_2, func_0x00010bfd9460(), (int)uVar2 == 0)) {
      uVar2 = 0;
    }
    else {
      _objc_retain(param_2);
      uVar2 = param_2;
    }
    _objc_release(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091d040c; end: 1091d045b;  */

void FUN_1091d040c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091d042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1091d045c; end: 1091d06c7; -[SCLensMediaAssetProvider _cacheCroppedImages:croppedImageIds:originalImageIndex:completion:] */

void FUN_1091d045c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_6;
  _objc_retain();
  _dispatch_group_create();
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bfe6f20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4b4c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        _dispatch_group_enter(uVar1);
        uVar4 = param_1;
        func_0x00010bfe6f20(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        _UIImageJPEGRepresentation(0x3ff0000000000000,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf87060(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_1091d06c8;
        puStack_80 = &UNK_110890110;
        _objc_retain(uVar1);
        uStack_78 = uVar1;
        func_0x00010c1d0500(uVar4);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uStack_78);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar3);
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1091d06d0;
  puStack_c0 = &UNK_110845188;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_6;
  uStack_a0 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x000107c27d98(uVar1,PTR___dispatch_main_q_11034be20,&puStack_d8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar1);
  return;
}



/* Entry: 1091d06c8; end: 1091d06ef;  */

void FUN_1091d06c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1091d06f0; end: 1091d06f7; -[SCLensMediaAssetProvider isPresetImageAtIndex:] */

undefined8 FUN_1091d06f0(void)

{
  return 0;
}



/* Entry: 1091d06f8; end: 1091d088f; -[SCLensMediaAssetProvider _minSquareRectThatContainRects:] */

double FUN_1091d06f8(double param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    dVar6 = *(double *)PTR__CGRectZero_110347608;
  }
  else {
    uVar2 = param_7;
    func_0x00010bfb1920(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar6 = param_1;
    uVar3 = param_2;
    dVar4 = param_3;
    dVar5 = param_4;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf529e0();
    if ((1 < uVar2) && (uVar2 = param_7, func_0x00010bf529e0(), 1 < uVar2)) {
      uVar2 = 1;
      do {
        uVar1 = param_7;
        func_0x00010c0dfd40(param_7,param_6,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        _objc_release(uVar1);
        _CGRectUnion(param_1,param_2,param_3,param_4,dVar6,uVar3,dVar4,dVar5);
        uVar2 = uVar2 + 1;
        uVar1 = param_7;
        dVar6 = param_1;
        uVar3 = param_2;
        dVar4 = param_3;
        dVar5 = param_4;
        func_0x00010bf529e0();
      } while (uVar2 < uVar1);
    }
    dVar4 = param_4;
    if (param_4 <= param_3) {
      dVar4 = param_3;
    }
    dVar6 = param_1;
    _CGRectGetMidX(param_1,param_2,param_3,param_4);
    dVar6 = dVar6 - dVar4 * 0.5;
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_7);
  return dVar6;
}



/* Entry: 1091d0890; end: 1091d09af; -[SCLensMediaAssetProvider _flattenIdentifiersFromGroupedIdentifiers:] */

void FUN_1091d0890(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010befa160(puVar2,param_2,*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar4;
    func_0x00010bf529e0();
    uVar1 = 0;
    if (*(ulong *)(param_3 + 0x20) != 0) {
      uVar1 = (ulong)puVar3 / *(ulong *)(param_3 + 0x20);
    }
    if (0 < (long)uVar1) {
      lVar9 = 0;
      do {
        lVar7 = *(long *)(param_3 + 0x20);
        puVar3 = (undefined1 *)puVar4;
        func_0x00010bf529e0();
        uVar5 = *(ulong *)(param_3 + 0x20);
        uVar6 = (long)puVar3 - uVar5 * lVar9;
        if (uVar5 <= uVar6) {
          uVar6 = uVar5;
        }
        puVar3 = (undefined1 *)puVar4;
        func_0x00010c25e980(puVar4,param_2,lVar7 * lVar9,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010be17f80(param_3,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_3;
        func_0x00010be84fa0(param_3,param_2,lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2,param_2,lVar8);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (long)uVar1);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d09b0; end: 1091d0ac7; -[SCLensMediaAssetProvider _flattenIdentifiersFromGroupedIdentifiersWithMultipleFacesPush:] */

void FUN_1091d09b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) != 0) {
    uVar1 = uVar6 / *(ulong *)(param_1 + 0x20);
  }
  if (0 < (long)uVar1) {
    lVar7 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar6 = param_3;
      func_0x00010bf529e0();
      uVar5 = *(ulong *)(param_1 + 0x20);
      uVar6 = uVar6 - uVar5 * lVar7;
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      uVar5 = param_3;
      func_0x00010c25e980(param_3,param_2,lVar4 * lVar7,uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be17f80(param_1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be84fa0(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(uVar5);
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091d0ac8; end: 1091d0cbb; -[SCLensMediaAssetProvider _pushedMultipleFacesPhotosForward:] */

void FUN_1091d0ac8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_1a0,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_190;
    do {
      lVar8 = 0;
      do {
        if (*plStack_190 != lVar7) {
          _objc_enumerationMutation(param_7);
        }
        uVar5 = *(undefined8 *)(lStack_198 + lVar8 * 8);
        uVar9 = uVar5;
        func_0x00010bf4bb00(uVar5,param_6,&PTR____CFConstantStringClassReference_110dbf518);
        if ((int)uVar9 != 0) {
          func_0x00010befa120(puVar1,param_6,uVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_1a0,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  dVar10 = 0.0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_1e0,auStack_158,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_1d0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1d0 != lVar7) {
          _objc_enumerationMutation(param_7);
        }
        uVar6 = *(ulong *)(lStack_1d8 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010bf4bb00(uVar6,param_6,&PTR____CFConstantStringClassReference_110dbf518);
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar1,param_6,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_7;
      puVar4 = &uStack_1e0;
      func_0x00010bf52a60(param_7,param_6,&uStack_1e0,auStack_158,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_7);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  uVar9 = 0x3ff0000000000000;
  dVar10 = 1.0 / dVar10;
  param_2 = 1.0 / param_2;
  _objc_retain(puVar4);
  _CGAffineTransformMakeScale(&uStack_250,dVar10,param_2);
  func_0x00010bf20c00(puVar4);
  _objc_release(puVar4);
  uStack_278 = uStack_248;
  uStack_280 = uStack_250;
  uStack_268 = uStack_238;
  uStack_270 = uStack_240;
  uStack_258 = uStack_228;
  uStack_260 = uStack_230;
  _CGRectApplyAffineTransform(dVar10,param_2,uVar9,param_4,&uStack_280);
  return;
}



/* Entry: 1091d0cbc; end: 1091d0d5b; -[SCLensMediaAssetProvider _normalizedRectForFaceFeature:imageSize:] */

void FUN_1091d0cbc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x3ff0000000000000;
  param_1 = 1.0 / param_1;
  param_2 = 1.0 / param_2;
  _objc_retain(param_7);
  _CGAffineTransformMakeScale(&uStack_70,param_1,param_2);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  _CGRectApplyAffineTransform(param_1,param_2,uVar1,param_4,&uStack_a0);
  return;
}



/* Entry: 1091d0d5c; end: 1091d0e2f; -[SCLensMediaAssetProvider _faceRectForFaceFeature:imageSize:] */

void FUN_1091d0d5c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  _CGAffineTransformMakeScale(&uStack_70,0x3ff0000000000000,0xbff0000000000000);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uVar3 = uStack_60;
  _CGAffineTransformTranslate(&uStack_a0,0,-(param_2 + -1.0),&uStack_d0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uVar1 = uStack_80;
  uVar2 = uStack_90;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  _CGRectApplyAffineTransform(uVar1,uVar2,uVar3,param_4,&uStack_a0);
  return;
}



/* Entry: 1091d0e30; end: 1091d0efb; -[SCLensMediaAssetProvider _cropImage:rect:] */

void FUN_1091d0e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageCreateWithImageInRect(param_1,param_2,param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c14e120(param_7);
    lVar2 = param_7;
    func_0x00010bfe8380(param_7);
    func_0x00010bfe9260(param_1,puVar3,param_6,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(lVar1);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091d0efc; end: 1091d0f03; -[SCLensMediaAssetProvider mediaType] */

undefined8 FUN_1091d0efc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091d0f04; end: 1091d0f1b; -[SCLensMediaAssetProvider delegate] */

void FUN_1091d0f04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091d0f1c; end: 1091d0f27; -[SCLensMediaAssetProvider setDelegate:] */

void FUN_1091d0f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1091d0f28; end: 1091d0f2f; -[SCLensMediaAssetProvider mediaAssetManager] */

undefined8 FUN_1091d0f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091d0f30; end: 1091d0f5f; -[SCLensMediaAssetProvider setMediaAssetManager:] */

void FUN_1091d0f30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091d0f60; end: 1091d0f67; -[SCLensMediaAssetProvider faceDetector] */

undefined8 FUN_1091d0f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091d0f68; end: 1091d0f97; -[SCLensMediaAssetProvider setFaceDetector:] */

void FUN_1091d0f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d0f98; end: 1091d0f9f; -[SCLensMediaAssetProvider performer] */

undefined8 FUN_1091d0f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1091d0fa0; end: 1091d0fcf; -[SCLensMediaAssetProvider setPerformer:] */

void FUN_1091d0fa0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091d0fd0; end: 1091d0fd7; -[SCLensMediaAssetProvider processedImageCount] */

undefined8 FUN_1091d0fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1091d0fd8; end: 1091d0fdf; -[SCLensMediaAssetProvider setProcessedImageCount:] */

void FUN_1091d0fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1091d0fe0; end: 1091d0fe7; -[SCLensMediaAssetProvider requestedImageCount] */

undefined8 FUN_1091d0fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1091d0fe8; end: 1091d0fef; -[SCLensMediaAssetProvider setRequestedImageCount:] */

void FUN_1091d0fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1091d0ff0; end: 1091d0ff7; -[SCLensMediaAssetProvider croppedFaceImageIds] */

undefined8 FUN_1091d0ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091d0ff8; end: 1091d1027; -[SCLensMediaAssetProvider setCroppedFaceImageIds:] */

void FUN_1091d0ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d1028; end: 1091d102f; -[SCLensMediaAssetProvider imageCache] */

undefined8 FUN_1091d1028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1091d1030; end: 1091d105f; -[SCLensMediaAssetProvider setImageCache:] */

void FUN_1091d1030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d1060; end: 1091d1067; -[SCLensMediaAssetProvider groupedCroppedFaceImageIds] */

undefined8 FUN_1091d1060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1091d1068; end: 1091d1097; -[SCLensMediaAssetProvider setGroupedCroppedFaceImageIds:] */

void FUN_1091d1068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d1098; end: 1091d109f; -[SCLensMediaAssetProvider sentinel] */

undefined8 FUN_1091d1098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1091d10a0; end: 1091d10cf; -[SCLensMediaAssetProvider setSentinel:] */

void FUN_1091d10a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d10d0; end: 1091d115b; -[SCLensMediaAssetProvider .cxx_destruct] */

void FUN_1091d10d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1091d115c; end: 1091d11df; -[SCMockLensMediaAsset initWithType:url:] */

undefined1 *
FUN_1091d115c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700ca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d11e0; end: 1091d1247; +[SCMockLensMediaAsset assetWithType:urlString:] */

void FUN_1091d11e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(param_1);
  func_0x00010c056320();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091d1248; end: 1091d124f; -[SCMockLensMediaAsset type] */

undefined8 FUN_1091d1248(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091d1250; end: 1091d1257; -[SCMockLensMediaAsset setType:] */

void FUN_1091d1250(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1091d1258; end: 1091d125f; -[SCMockLensMediaAsset url] */

undefined8 FUN_1091d1258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091d1260; end: 1091d128f; -[SCMockLensMediaAsset setUrl:] */

void FUN_1091d1260(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091d1290; end: 1091d129b; -[SCMockLensMediaAsset .cxx_destruct] */

void FUN_1091d1290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091d129c; end: 1091d131f; -[SCMockLensMediaAssetProvider initWithAssets:mediaType:] */

undefined1 *
FUN_1091d129c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700cb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d1320; end: 1091d1343; +[SCMockLensMediaAssetProvider defaultMockProvider] */

void FUN_1091d1320(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010bff46c0(param_1,param_2,PTR____NSArray0__struct_11034ab48,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091d1344; end: 1091d1383; -[SCMockLensMediaAssetProvider assetTypeAtIndex:] */

undefined8 FUN_1091d1344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091d1384; end: 1091d138b; -[SCMockLensMediaAssetProvider canProcessMoreImages] */

undefined8 FUN_1091d1384(void)

{
  return 0;
}



/* Entry: 1091d138c; end: 1091d138f; -[SCMockLensMediaAssetProvider cancelAssetLoadingWithId:] */

void FUN_1091d138c(void)

{
  return;
}



/* Entry: 1091d1390; end: 1091d1393; -[SCMockLensMediaAssetProvider cooldown] */

void FUN_1091d1390(void)

{
  return;
}



/* Entry: 1091d1394; end: 1091d13ab; -[SCMockLensMediaAssetProvider delegate] */

void FUN_1091d1394(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091d13ac; end: 1091d16b7; -[SCMockLensMediaAssetProvider getOriginalImageAtIndex:completion:] */

void FUN_1091d13ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bfe7ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be37420();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1091d14c0;
  puStack_70 = &UNK_110875f70;
  uStack_68 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(param_4);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_88);
  uVar1 = uStack_58;
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091d16b8; end: 1091d16bb; -[SCMockLensMediaAssetProvider getPreviewImageAtIndex:targetSize:completion:] */

void FUN_1091d16b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getOriginalImageAtIndex_completi_1125cfb00);
  return;
}



/* Entry: 1091d16bc; end: 1091d178f; -[SCMockLensMediaAssetProvider getVideoAssetAtIndex:completion:] */

void FUN_1091d16bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfe7ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee8c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar4,lVar1,lVar2,0);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091d1790; end: 1091d1797; -[SCMockLensMediaAssetProvider imageCount] */

void FUN_1091d1790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1091d1798; end: 1091d17c7; -[SCMockLensMediaAssetProvider imageIdentifierAtIndex:] */

void FUN_1091d1798(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daea58);
  return;
}



/* Entry: 1091d17c8; end: 1091d17d7; -[SCMockLensMediaAssetProvider _imageIdentifierForIdentifier:] */

void FUN_1091d17c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110f2bad8);
  return;
}



/* Entry: 1091d17d8; end: 1091d17e7; -[SCMockLensMediaAssetProvider _videoIdentifierForIdentifier:] */

void FUN_1091d17d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110ed2bb8);
  return;
}



/* Entry: 1091d17e8; end: 1091d17ef; -[SCMockLensMediaAssetProvider indexOfImageWithIdentifier:] */

void FUN_1091d17e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1091d17f0; end: 1091d17f3; -[SCMockLensMediaAssetProvider processMoreImagesIfPossibleWithSize:count:] */

void FUN_1091d17f0(void)

{
  return;
}



/* Entry: 1091d17f4; end: 1091d18b3; -[SCMockLensMediaAssetProvider setDelegate:] */

void FUN_1091d17f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_storeWeak(param_1 + 0x10,param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1091d1864;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 1091d18b4; end: 1091d18bf; -[SCMockLensMediaAssetProvider videoDurationAtIndex:] */

undefined8 FUN_1091d18b4(void)

{
  return 0x403099999999999a;
}



/* Entry: 1091d18c0; end: 1091d18c3; -[SCMockLensMediaAssetProvider warmupWithCompletion:] */

void FUN_1091d18c0(void)

{
  return;
}



/* Entry: 1091d18c4; end: 1091d18cb; -[SCMockLensMediaAssetProvider isPresetImageAtIndex:] */

undefined8 FUN_1091d18c4(void)

{
  return 0;
}



/* Entry: 1091d18cc; end: 1091d18d3; -[SCMockLensMediaAssetProvider rawImageCount] */

void FUN_1091d18cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1091d18d4; end: 1091d18d7; -[SCMockLensMediaAssetProvider resetRequestedImagesCountButKeepIndexes] */

void FUN_1091d18d4(void)

{
  return;
}



/* Entry: 1091d18d8; end: 1091d18df; -[SCMockLensMediaAssetProvider mediaType] */

undefined8 FUN_1091d18d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091d18e0; end: 1091d190b; -[SCMockLensMediaAssetProvider .cxx_destruct] */

void FUN_1091d18e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 1091d190c; end: 1091d190f; -[SCCameraLensDataProviderEmptyStrategy applyToContext:] */

void FUN_1091d190c(void)

{
  return;
}



/* Entry: 1091d1910; end: 1091d1957; -[SCCameraLensDataProviderKeepLensStateWorkflowStrategy initWithLensSourceType:] */

void FUN_1091d1910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700cc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1091d1958; end: 1091d19af; -[SCCameraLensDataProviderKeepLensStateWorkflowStrategy applyToContext:] */

void FUN_1091d1958(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf5f2c0();
  if (lVar1 != *(long *)(param_1 + 8)) {
    func_0x00010c0f0680(param_3,param_2,lVar1);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010bf17e60(param_3,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091d19b0; end: 1091d1a47; -[SCCameraLensDataProviderKeepLensStateWorkflowStrategy isEqual:] */

bool FUN_1091d19b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
  }
  else {
    puVar3 = PTR_PTR_1126c89f0;
    _objc_opt_class(PTR_PTR_1126c89f0);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(param_3 + 8) == *(long *)(param_1 + 8);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 1091d1a48; end: 1091d1a4f; -[SCCameraLensesInteractor updateLensDataProvider:] */

void FUN_1091d1a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateLensDataProvider__11267f678);
  return;
}



/* Entry: 1091d1a50; end: 1091d1a57; -[SCCameraLensesInteractor updateLensDataProviderWithLensesObservable:activationConfiguration:] */

void FUN_1091d1a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateLensDataProviderWithLenses_11267f6c0);
  return;
}



/* Entry: 1091d1a58; end: 1091d1a5f; -[SCCameraLensesInteractor updateLensDataProviderWithCameraType:activationConfiguration:] */

void FUN_1091d1a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2871f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateLensDataProviderWithCamera_11267f6a0);
  return;
}



/* Entry: 1091d1a60; end: 1091d1a67; -[SCCameraLensesInteractor contextConfigWithContextId:] */

void FUN_1091d1a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_contextConfigWithContextId__1125b12c0);
  return;
}



/* Entry: 1091d1a68; end: 1091d1a6f; -[SCCameraLensesInteractor registerDataProviderWithContextId:contextConfig:] */

void FUN_1091d1a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1262b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_registerDataProviderWithContextI_1126272c8);
  return;
}



/* Entry: 1091d1a70; end: 1091d1a77; -[SCCameraLensesInteractor canDeregisterDataProviderWithContextId:] */

void FUN_1091d1a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2c770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canDeregisterDataProviderWithCon_1125a8b80);
  return;
}



/* Entry: 1091d1a78; end: 1091d1a7f; -[SCCameraLensesInteractor activateDataProviderWithContextId:] */

void FUN_1091d1a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_activateDataProviderWithContextI_112599808);
  return;
}



/* Entry: 1091d1a80; end: 1091d1a87; -[SCCameraLensesInteractor deregisterDataProviderWithContextId:] */

void FUN_1091d1a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_deregisterDataProviderWithContex_1125b9218);
  return;
}



/* Entry: 1091d1a88; end: 1091d1a8f; -[SCCameraLensesInteractor cameraViewType] */

void FUN_1091d1a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cameraViewType_1125a8898);
  return;
}



/* Entry: 1091d1a90; end: 1091d1a97; -[SCCameraLensesInteractor addUpdateListener:] */

void FUN_1091d1a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addUpdateListener__11259cb88);
  return;
}



/* Entry: 1091d1a98; end: 1091d1a9f; -[SCCameraLensesInteractor removeUpdateListener:] */

void FUN_1091d1a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeUpdateListener__1126295c8);
  return;
}



/* Entry: 1091d1aa0; end: 1091d1acf; -[SCCameraLensesInteractor .cxx_destruct] */

void FUN_1091d1aa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d1ad0; end: 1091d1b0b; -[SCLensStateWorkflowImpl complete] */

void FUN_1091d1ad0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091d1b0c; end: 1091d1b5b; -[SCLensStateWorkflowImpl dealloc] */

void FUN_1091d1b0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3b7a0();
  func_0x00010be19c40(param_1);
  puStack_28 = PTR_PTR_112700cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091d1b5c; end: 1091d1b63; -[SCLensStateWorkflowImpl resetLensState] */

void FUN_1091d1b5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetLensStateForce__11262bdf0,1);
  return;
}



/* Entry: 1091d1b64; end: 1091d1b9b; -[SCLensStateWorkflowImpl restartLensState] */

void FUN_1091d1b64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c096ca0(uVar1);
  func_0x00010c138f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf18350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_beginLensStateForLensSource__1125a3a78,uVar1)
  ;
  return;
}



/* Entry: 1091d1b9c; end: 1091d1bc3; -[SCLensStateWorkflowImpl lensStateEvents] */

void FUN_1091d1b9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d1bc4; end: 1091d1c3b;  */

void FUN_1091d1bc4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20))) {
    if (param_2 == 0) {
      func_0x00010bec3100();
    }
    else {
      lVar2 = lVar1;
      func_0x00010bdca5c0();
      if ((int)lVar2 != 0) {
        func_0x00010bf3b7a0(lVar1);
      }
    }
    func_0x00010be19c40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091d1c3c; end: 1091d1d17; -[SCLensStateWorkflowImpl _restoreLensStateWithCompletion:] */

void FUN_1091d1c3c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d960();
  _objc_release(uVar3);
  func_0x00010be090c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126ddbe0;
  func_0x00010c2a6a80(PTR_PTR_1126ddbe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeffe0();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bdca5c0();
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearLensState_1125ac790);
  return;
}


