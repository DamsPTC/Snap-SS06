/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10913ff78; end: 10913ffa7; -[SCGeoFilterImage setCroppedImageData:] */

void FUN_10913ff78(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10913ffa8; end: 10913ffaf; -[SCGeoFilterImage croppedImageSticker] */

undefined8 FUN_10913ffa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10913ffb0; end: 10913ffdf; -[SCGeoFilterImage setCroppedImageSticker:] */

void FUN_10913ffb0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10913ffe0; end: 10913ffe7; -[SCGeoFilterImage filteredCaptureImage] */

undefined8 FUN_10913ffe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10913ffe8; end: 10913ffef; -[SCGeoFilterImage setFilteredCaptureImage:] */

void FUN_10913ffe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10913fff0; end: 10913fff7; -[SCGeoFilterImage dynamicResourceImageData] */

undefined8 FUN_10913fff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10913fff8; end: 109140027; -[SCGeoFilterImage setDynamicResourceImageData:] */

void FUN_10913fff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109140028; end: 1091400e7; -[SCGeoFilterImage .cxx_destruct] */

void FUN_109140028(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091400e8; end: 1091401c3; -[SCGeoFilterImageView initWithFrame:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1091400e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1127007e0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    ppuVar1 = &PTR_PTR_1126bb2a0;
    if (param_7 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImageView_1126aec28;
    }
    puVar3 = *ppuVar1;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112781e68);
    *(undefined **)((long)puVar2 + (long)_DAT_112781e68) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar2);
    func_0x00010c21e900(puVar2);
    func_0x00010c17d4c0(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1091401c4; end: 10914023f; -[SCGeoFilterImageView isWebp:] */

undefined8 FUN_1091401c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iStack_24;
  
  _objc_retain(param_3);
  iStack_24 = 0;
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (4 < uVar1) {
    func_0x00010bfc3320(param_3,param_2,&iStack_24,4);
    if (iStack_24 == 0x46464952) {
      uVar2 = 1;
      goto LAB_109140224;
    }
  }
  uVar2 = 0;
LAB_109140224:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109140240; end: 10914048f; -[SCGeoFilterImageView setImageFromData:scaleSetting:positionSetting:] */

void FUN_109140240(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  
  _objc_retain(param_7);
  uVar3 = param_5;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb2a0;
  _objc_opt_class(PTR_PTR_1126bb2a0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if (((uVar5 & 1) == 0) && (uVar5 = param_5, func_0x00010c083ae0(), (int)uVar5 == 0)) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar4 = PTR_PTR_1126b2720;
    func_0x00010c14d040(PTR_PTR_1126b2720);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    bVar2 = true;
  }
  uVar5 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar5);
  if (bVar1) {
    _objc_release(puVar4);
  }
  if (bVar2) {
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  if (param_8 == 2) {
    func_0x00010bfb68e0(param_5);
    _CGRectGetHeight();
    dVar7 = param_1;
    func_0x00010bfb68e0(param_5);
    _CGRectGetWidth();
    fVar6 = (float)(param_1 / dVar7);
    param_1 = (double)(ulong)(uint)fVar6;
    param_2 = 0x3fc00000;
    if (1.5 < fVar6) {
      param_3 = (ulong)(uint)ABS(fVar6 + -1.5);
      fVar6 = ABS(fVar6 + 1.5) * 1.1920929e-07;
      param_2 = 0x800000;
      if (fVar6 <= 1.1754944e-38) {
        fVar6 = 1.1754944e-38;
      }
      param_1 = (double)(ulong)(uint)fVar6;
    }
  }
  puVar4 = PTR_PTR_1126d2508;
  uVar3 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010bfb68e0(param_5);
  func_0x00010c14e580(param_1,param_2,puVar4);
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 109140490; end: 1091405fb; -[SCGeoFilterImageView videoTrackedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109140490(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = param_5;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010bf20c00(param_5);
  lVar2 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010bf20c00(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  dVar7 = 1.0;
  dVar9 = 0.0;
  func_0x00010c055500(param_1 / param_3,param_2 / param_4,0x3ff0000000000000,0);
  puVar4 = PTR_PTR_1126c41f8;
  func_0x00010c252d00(PTR_PTR_1126c41f8,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bfe90c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar8 = dVar7;
  dVar10 = dVar9;
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  uVar6 = *(undefined8 *)(param_5 + _DAT_112781e68);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fc00(dVar7 / dVar8,dVar9 / dVar10,puVar5,param_6,uVar6,puVar4);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091405fc; end: 10914060b; -[SCGeoFilterImageView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091405fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e68);
}



/* Entry: 10914060c; end: 10914061f; -[SCGeoFilterImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10914060c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781e68,0);
  return;
}



/* Entry: 109140620; end: 109140777; -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:cacheTTLMinutes:isPrecached:geofilterMissLoggingType:] */

undefined1 *
FUN_109140620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1127007e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = param_4;
    *(ulong *)((long)puVar1 + 0x40) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0xbff0000000000000;
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x80) = 0;
    *(undefined1 *)((long)puVar1 + 0x2a) = 0;
    puVar3 = PTR_PTR_1126b3890;
    _objc_alloc();
    func_0x00010c0191e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    func_0x00010c28cda0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109140778; end: 109140787; -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:isPrecached:geofilterMissLoggingType:] */

void FUN_109140778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFilterId_isSponsored_tar_1125e2610);
  return;
}



/* Entry: 109140788; end: 109140793; -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:cacheTTLMinutes:geofilterMissLoggingType:] */

void FUN_109140788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFilterId_isSponsored_tar_1125e2610);
  return;
}



/* Entry: 109140794; end: 10914079f; -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:geofilterMissLoggingType:] */

void FUN_109140794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0130f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFilterId_isSponsored_tar_1125e2608);
  return;
}



/* Entry: 1091407a0; end: 1091409e3; -[SCGeoFilterLoadingMetaData getLogParametersWithReferenceTime:] */

void FUN_1091407a0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110f240d8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined1 *)(param_2 + 0x29));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110e415f8);
  _objc_release(puVar3);
  puVar3 = (&PTR_PTR_110adde88)[*(long *)(param_2 + 0x50)];
  _objc_retain(puVar3);
  func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110f237d8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126dd760;
  func_0x00010c09d3a0(PTR_PTR_1126dd760,param_3,*(undefined8 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110f240f8);
  _objc_release(puVar3);
  if (0.0 < *(double *)(param_2 + 0x40)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110f24118);
    _objc_release(puVar3);
  }
  if (0.0 <= *(double *)(param_2 + 0x48)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(double *)(param_2 + 0x48) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110f24138);
    _objc_release(puVar3);
  }
  lVar4 = 0;
  do {
    dVar5 = *(double *)(param_2 + 8 + lVar4 * 8);
    if (dVar5 != 0.0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((dVar5 - param_1) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126dd760;
      func_0x00010c09c220(PTR_PTR_1126dd760,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_3,puVar3,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091409e4; end: 109140a63; -[SCGeoFilterLoadingMetaData updateWithStage:] */

void FUN_1091409e4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = param_2 + 8;
  do {
    if ((lVar2 < param_4) && (param_1 = *(double *)(lVar1 + lVar2 * 8), param_1 == 0.0)) {
      _CACurrentMediaTime();
      *(double *)(lVar1 + lVar2 * 8) = param_1;
    }
    else if (param_4 == lVar2) {
      _CACurrentMediaTime();
      *(double *)(lVar1 + param_4 * 8) = param_1;
    }
    else if (param_4 < lVar2) {
      *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  *(long *)(param_2 + 0x38) = param_4;
  return;
}



/* Entry: 109140a64; end: 109140a97; -[SCGeoFilterLoadingMetaData updateIfNotSetWithStage:] */

bool FUN_109140a64(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + param_3 * 8 + 8);
  if (dVar1 == 0.0) {
    func_0x00010c28cda0();
  }
  return dVar1 == 0.0;
}



/* Entry: 109140a98; end: 109140ab7; +[SCGeoFilterLoadingMetaData loadingStageToString:] */

undefined * FUN_109140a98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (&PTR_PTR_110adde48)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 109140ab8; end: 109140ad7; +[SCGeoFilterLoadingMetaData loadStageToLoggingKey:] */

undefined * FUN_109140ab8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (&PTR_PTR_110adde68)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 109140ad8; end: 109140ca7; -[SCGeoFilterLoadingMetaData copyWithZone:] */

long FUN_109140ad8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_2;
  _objc_opt_class();
  func_0x00010bf00e40();
  lVar2 = param_2;
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52240();
  lVar4 = param_2;
  func_0x00010c07f200(param_2);
  lVar5 = param_2;
  func_0x00010c26a4e0(param_2);
  func_0x00010bfa4840(param_2);
  lVar6 = param_2;
  func_0x00010c07a980(param_2);
  lVar7 = param_2;
  func_0x00010bfc1760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013140(param_1,lVar1,param_3,lVar3,lVar4,lVar5,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x18) = uVar10;
    *(undefined8 *)(lVar1 + 0x10) = uVar8;
    *(undefined8 *)(lVar1 + 8) = uVar9;
    func_0x00010bf88de0(param_2);
    *(undefined8 *)(lVar1 + 0x48) = uVar9;
    lVar2 = param_2;
    func_0x00010c09d380();
    *(long *)(lVar1 + 0x38) = lVar2;
    lVar2 = param_2;
    func_0x00010c0dddc0();
    *(long *)(lVar1 + 0x58) = lVar2;
    lVar2 = param_2;
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x60);
    *(long *)(lVar1 + 0x60) = lVar2;
    _objc_release(uVar8);
    lVar2 = param_2;
    func_0x00010bf26ce0();
    *(long *)(lVar1 + 0x68) = lVar2;
    lVar2 = param_2;
    func_0x00010bf8b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(lVar1 + 0x70);
    *(long *)(lVar1 + 0x70) = lVar3;
    _objc_release(uVar8);
    _objc_release(lVar2);
    func_0x00010bf45520(param_2);
    *(undefined8 *)(lVar1 + 0x80) = uVar9;
    lVar2 = param_2;
    func_0x00010c06db20();
    *(char *)(lVar1 + 0x2a) = (char)lVar2;
    func_0x00010bf32760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(lVar1 + 0x88);
    *(long *)(lVar1 + 0x88) = lVar2;
    _objc_release(uVar8);
    _objc_release(param_2);
  }
  return lVar1;
}



/* Entry: 109140ca8; end: 109140caf; -[SCGeoFilterLoadingMetaData filterId] */

undefined8 FUN_109140ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109140cb0; end: 109140cb7; -[SCGeoFilterLoadingMetaData loadingStage] */

undefined8 FUN_109140cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109140cb8; end: 109140cbf; -[SCGeoFilterLoadingMetaData isPrecached] */

undefined1 FUN_109140cb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 109140cc0; end: 109140cc7; -[SCGeoFilterLoadingMetaData isSponsored] */

undefined1 FUN_109140cc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 109140cc8; end: 109140ccf; -[SCGeoFilterLoadingMetaData fenceArea] */

undefined8 FUN_109140cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109140cd0; end: 109140cd7; -[SCGeoFilterLoadingMetaData downloadLatencySeconds] */

undefined8 FUN_109140cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109140cd8; end: 109140cdf; -[SCGeoFilterLoadingMetaData setDownloadLatencySeconds:] */

void FUN_109140cd8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 109140ce0; end: 109140ce7; -[SCGeoFilterLoadingMetaData targetingType] */

undefined8 FUN_109140ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109140ce8; end: 109140cef; -[SCGeoFilterLoadingMetaData numDynamicItems] */

undefined8 FUN_109140ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109140cf0; end: 109140cf7; -[SCGeoFilterLoadingMetaData setNumDynamicItems:] */

void FUN_109140cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 109140cf8; end: 109140cff; -[SCGeoFilterLoadingMetaData lastUpdateDate] */

undefined8 FUN_109140cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109140d00; end: 109140d07; -[SCGeoFilterLoadingMetaData cacheTTLMinutes] */

undefined8 FUN_109140d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 109140d08; end: 109140d0f; -[SCGeoFilterLoadingMetaData dynamicContextSources] */

undefined8 FUN_109140d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 109140d10; end: 109140d17; -[SCGeoFilterLoadingMetaData setDynamicContextSources:] */

void FUN_109140d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109140d18; end: 109140d1f; -[SCGeoFilterLoadingMetaData geofilterMissLoggingType] */

undefined8 FUN_109140d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 109140d20; end: 109140d27; -[SCGeoFilterLoadingMetaData compositeTimeSeconds] */

undefined8 FUN_109140d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 109140d28; end: 109140d2f; -[SCGeoFilterLoadingMetaData setCompositeTimeSeconds:] */

void FUN_109140d28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 109140d30; end: 109140d37; -[SCGeoFilterLoadingMetaData isCacheHit] */

undefined1 FUN_109140d30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 109140d38; end: 109140d3f; -[SCGeoFilterLoadingMetaData setIsCacheHit:] */

void FUN_109140d38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 109140d40; end: 109140d47; -[SCGeoFilterLoadingMetaData carouselGroup] */

undefined8 FUN_109140d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 109140d48; end: 109140d4f; -[SCGeoFilterLoadingMetaData setCarouselGroup:] */

void FUN_109140d48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109140d50; end: 109140da3; -[SCGeoFilterLoadingMetaData .cxx_destruct] */

void FUN_109140d50(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 109140da4; end: 109140e0b; +[SCGeoFilterPositionSetter scaleSettingFromString:] */

undefined8 FUN_109140da4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24158);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24178);
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109140e0c; end: 109140f1b; +[SCGeoFilterPositionSetter positionSettingFromString:] */

undefined8 FUN_109140e0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dfec58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dfeaf8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8f298);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8f278);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f241d8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f241f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f24198);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f241b8
                                   );
                uVar2 = 9;
                if ((int)uVar1 == 0) {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 5;
              }
            }
            else {
              uVar2 = 10;
            }
          }
          else {
            uVar2 = 6;
          }
        }
        else {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 109140f1c; end: 109140fb3; +[SCGeoFilterPositionSetter scaledAndPositionedImageFrameWithOriginalImageSize:containerSize:scaleSetting:positionSetting:] */

double FUN_109140f1c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,ulong param_8)

{
  double dVar1;
  
  if (param_7 == 0) {
    dVar1 = 0.0;
  }
  else {
    func_0x00010c14e660(param_1,param_2,param_3,param_4);
    dVar1 = (param_3 - param_1) * 0.5;
    if ((param_8 & 8) != 0) {
      dVar1 = param_3 - param_1;
    }
    if ((param_8 & 4) != 0) {
      dVar1 = 0.0;
    }
  }
  return dVar1;
}



/* Entry: 109140fb4; end: 109140fe3; +[SCGeoFilterPositionSetter scaledImageSize:containerSize:scaleSetting:] */

undefined1  [16] FUN_109140fb4(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_1;
  func_0x00010c14e1a0();
  auVar2._8_8_ = param_2 * dVar1;
  auVar2._0_8_ = param_1 * dVar1;
  return auVar2;
}



/* Entry: 109140fe4; end: 10914101f; +[SCGeoFilterPositionSetter scaleFactorForSize:containerSize:scaleSetting:] */

double FUN_109140fe4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6,long param_7)

{
  param_3 = param_3 / param_1;
  if (param_1 <= 0.0) {
    param_3 = 1.0;
  }
  param_4 = param_4 / param_2;
  if (param_2 <= 0.0) {
    param_4 = 1.0;
  }
  if ((param_7 == 2) == param_3 < param_4) {
    param_3 = param_4;
  }
  return param_3;
}



/* Entry: 109141020; end: 1091410cb; -[SCGeofencedObject initWithLocationId:geoFenceLocationPoints:] */

undefined1 *
FUN_109141020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127007f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091410cc; end: 10914132b; -[SCGeofencedObject initWithSoju:] */

undefined8 ** FUN_1091410cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar12;
  undefined *unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined8 uVar13;
  undefined **unaff_x28;
  undefined8 uVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 *puStack_270;
  undefined *puStack_268;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 **ppuStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puStack_108 = PTR_PTR_1127007f0;
  ppuVar10 = &puStack_110;
  puStack_110 = param_1;
  _objc_msgSendSuper2(ppuVar10,PTR_s_init_1125d9248);
  puVar6 = param_3;
  if ((param_3 != (undefined8 *)0x0) && (ppuVar10 != (undefined8 **)0x0)) {
    puVar9 = param_3;
    func_0x00010bfe5e40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = ppuVar10[4];
    ppuVar10[4] = puVar9;
    _objc_release(puVar6);
    puStack_158 = param_3;
    func_0x00010bf51dc0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    uVar12 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    puVar9 = &uStack_150;
    puVar6 = param_3;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      unaff_x26 = *plStack_140;
      unaff_x27 = &PTR_PTR_1126b3000;
      unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        puVar9 = (undefined8 *)0x0;
        do {
          unaff_d8 = uVar12;
          if (*plStack_140 != unaff_x26) {
            _objc_enumerationMutation(param_3);
          }
          uVar12 = *(undefined8 *)(lStack_148 + (long)puVar9 * 8);
          func_0x00010c08acc0(uVar12);
          unaff_d9 = unaff_d8;
          func_0x00010c0b5080(uVar12);
          _CLLocationCoordinate2DMake();
          unaff_x24 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
          _objc_alloc();
          unaff_x25 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = unaff_d8;
          func_0x00010c005ac0(unaff_d8,unaff_d9,0,0,0);
          _objc_release(unaff_x25);
          func_0x00010befa120(unaff_x22);
          _objc_release(unaff_x24);
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar6 != puVar9);
        puVar9 = &uStack_150;
        puVar6 = param_3;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar6 = unaff_x22;
    func_0x00010bf51e00();
    puVar7 = ppuVar10[3];
    ppuVar10[3] = puVar6;
    _objc_release(puVar7);
    _objc_release(unaff_x22);
    _objc_release(param_3);
    puVar6 = puStack_158;
    unaff_x21 = param_3;
  }
  puVar7 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10914132c;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d0 = unaff_d9;
  uStack_1c8 = unaff_d8;
  ppuStack_1c0 = unaff_x28;
  ppuStack_1b8 = unaff_x27;
  lStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = unaff_x24;
  uStack_198 = unaff_x23;
  puStack_190 = unaff_x22;
  puStack_188 = unaff_x21;
  ppuStack_180 = ppuVar10;
  puStack_178 = puVar6;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puStack_268 = PTR_PTR_1127007f0;
  ppuVar10 = &puStack_270;
  puStack_270 = puVar7;
  _objc_msgSendSuper2(ppuVar10,PTR_s_init_1125d9248);
  puVar6 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1f3c0();
  *(char *)(ppuVar10 + 1) = (char)puVar7;
  _objc_release(puVar6);
  puVar6 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = ppuVar10[4];
    ppuVar10[4] = puVar7;
    _objc_release(puVar8);
    puVar8 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(puVar8);
    func_0x00010bffc4a0();
    uVar12 = 0;
    _objc_retain(puVar8);
    puVar7 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        uVar13 = *(undefined8 *)((long)puVar11 * 8);
        uVar3 = uVar13;
        func_0x00010c0e00e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar14 = uVar12;
        _objc_release(uVar3);
        func_0x00010c0e00e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar13);
        _CLLocationCoordinate2DMake(uVar12,uVar14);
        puVar4 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
        _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c005ac0(uVar12,uVar14,0,0,0,puVar4);
        _objc_release(puVar5);
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar7 != puVar11);
      puVar7 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar7 = puVar2;
    func_0x00010bf51e00();
    puVar11 = ppuVar10[3];
    ppuVar10[3] = puVar7;
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release(puVar8);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(puVar9);
  if (puVar9[2] == 0) {
    puVar6 = puVar9;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    if ((undefined8 *)0x1 < puVar7) {
      puVar4 = PTR_PTR_1126dd7c0;
      _objc_alloc();
      puVar6 = puVar9;
      func_0x00010bfc1100(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c017900();
      uVar12 = puVar9[2];
      puVar9[2] = puVar4;
      _objc_release(uVar12);
      _objc_release(puVar6);
    }
  }
  ppuVar10 = (undefined8 **)puVar9[2];
  _objc_retain(ppuVar10);
  _objc_sync_exit(puVar9);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 10914132c; end: 10914164b; -[SCGeofencedObject initWithDictionary:] */

undefined8 * FUN_10914132c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_108 = PTR_PTR_1127007f0;
  puVar10 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar10,PTR_s_init_1125d9248);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  *(char *)(puVar10 + 1) = (char)uVar3;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar10[4];
    puVar10[4] = uVar3;
    _objc_release(uVar9);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(uVar4);
    func_0x00010bffc4a0();
    uVar9 = 0;
    _objc_retain(uVar4);
    uVar3 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar12 = *(undefined8 *)(uVar11 * 8);
        uVar6 = uVar12;
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar13 = uVar9;
        _objc_release(uVar6);
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar12);
        _CLLocationCoordinate2DMake(uVar9,uVar13);
        puVar7 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
        _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c005ac0(uVar9,uVar13,0,0,0,puVar7);
        _objc_release(puVar8);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
      uVar3 = uVar4;
      func_0x00010bf52a60();
    }
    _objc_release(uVar4);
    puVar7 = puVar5;
    func_0x00010bf51e00();
    uVar9 = puVar10[3];
    puVar10[3] = puVar7;
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(param_3);
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = param_3;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (1 < uVar3) {
      puVar5 = PTR_PTR_1126dd7c0;
      _objc_alloc();
      uVar2 = param_3;
      func_0x00010bfc1100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c017900();
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      *(undefined **)(param_3 + 0x10) = puVar5;
      _objc_release(uVar9);
      _objc_release(uVar2);
    }
  }
  puVar10 = *(undefined8 **)(param_3 + 0x10);
  _objc_retain(puVar10);
  _objc_sync_exit(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 10914164c; end: 10914172b; -[SCGeofencedObject s2Polygon] */

void FUN_10914164c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = param_1;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (1 < uVar2) {
      puVar3 = PTR_PTR_1126dd7c0;
      _objc_alloc();
      uVar1 = param_1;
      func_0x00010bfc1100(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c017900(puVar3,param_2,uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10914172c; end: 10914174f; -[SCGeofencedObject copyWithZone:] */

undefined8 FUN_10914172c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109141750; end: 10914183b; -[SCGeofencedObject initWithCoder:] */

undefined1 * FUN_109141750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127007f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    func_0x00010c1a2b60(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bfa00(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10914183c; end: 1091418e3; -[SCGeofencedObject encodeWithCoder:] */

void FUN_10914183c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc1100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110f24278);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c09eee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110f24298);
  _objc_release(lVar1);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f242b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091418e4; end: 109141ad3; -[SCGeofencedObject geoFenceContainsLocation:] */

undefined *
FUN_1091418e4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  double *pdVar4;
  long extraout_x12;
  undefined *puVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar6 = param_3;
  func_0x00010bfc1100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar1 << 3);
  pdVar7 = (double *)((long)&dStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pdVar8 = (double *)((long)pdVar7 - extraout_x12);
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      lVar2 = param_3;
      func_0x00010bfc1100(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf51c80(lVar3);
      pdVar7[lVar6] = param_2;
      func_0x00010bf51c80(lVar3);
      pdVar8[lVar6] = param_1;
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
  }
  func_0x00010bf51c80(param_5);
  func_0x00010bf51c80(param_5);
  puVar5 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar6 = 0;
    pdVar4 = pdVar7;
    lVar2 = lVar1 + -1;
    dVar9 = pdVar8[lVar1 + -1];
    do {
      lVar3 = lVar6;
      dVar10 = *pdVar8;
      if ((dVar9 <= param_1 == param_1 < dVar10) &&
         (param_2 < *pdVar4 + ((param_1 - dVar10) * (pdVar7[lVar2] - *pdVar4)) / (dVar9 - dVar10)))
      {
        puVar5 = (undefined *)(ulong)((uint)puVar5 ^ 1);
      }
      pdVar4 = pdVar4 + 1;
      lVar1 = lVar1 + -1;
      lVar6 = lVar3 + 1;
      lVar2 = lVar3;
      pdVar8 = pdVar8 + 1;
      dVar9 = dVar10;
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126dd7c8;
    dVar9 = param_1;
    func_0x00010c22dec0();
    if ((int)puVar5 != 0) {
      lVar1 = param_5;
      func_0x00010bfc1100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c0cd520(PTR_PTR_1126dd7c8);
        dVar10 = dVar9 / 100.0;
        func_0x00010bfc10e0(param_5);
        param_1 = param_1 / 6372797.5;
        _cos();
        if (dVar9 < (1.0 - param_1) * 255176164729968.5 * dVar10) {
          return (undefined *)0x1;
        }
      }
      puVar5 = (undefined *)0x0;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 109141ad4; end: 109141b93; -[SCGeofencedObject geoFenceAreaIsTooSmallForAccuracy:] */

void FUN_109141ad4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dd7c8;
  func_0x00010c22dec0();
  if ((int)puVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c0cd520(PTR_PTR_1126dd7c8);
      func_0x00010bfc10e0(param_1);
      _cos();
    }
  }
  return;
}



/* Entry: 109141b94; end: 109141e23; -[SCGeofencedObject geoFenceArea] */

undefined * FUN_109141b94(double param_1,double param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar3 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfc1100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if ((undefined *)0x2 < puVar2) {
    puVar2 = puVar1;
    func_0x00010c0dfd40(puVar1,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if ((undefined *)0x3 < puVar2) {
      puVar6 = puVar1;
      func_0x00010c0dfd40(puVar1,param_4,puVar2 + -1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release(puVar6);
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      _objc_retain(puVar1);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        dVar15 = (param_2 / 180.0) * 3.141592653589793;
        dVar12 = 0.5;
        dVar9 = (1.5707963267948966 - (param_1 / 180.0) * 3.141592653589793) * 0.5;
        _tan(dVar9);
        lVar5 = *plStack_140;
        dVar10 = dVar9;
        do {
          puVar6 = (undefined *)0x0;
          dVar14 = dVar10;
          dVar11 = dVar15;
          do {
            if (*plStack_140 != lVar5) {
              _objc_enumerationMutation(puVar1);
            }
            func_0x00010bf51c80(*(undefined8 *)(lStack_148 + (long)puVar6 * 8));
            dVar13 = 0.5;
            dVar10 = (1.5707963267948966 - (dVar9 / 180.0) * 3.141592653589793) * 0.5;
            _tan(dVar10);
            dVar15 = (dVar12 / 180.0) * 3.141592653589793;
            dVar11 = dVar15 - dVar11;
            ___sincos_stret();
            dVar11 = dVar11 * dVar14 * dVar10;
            dVar12 = dVar13 * dVar14 * dVar10 + 1.0;
            _atan2();
            dVar9 = dVar11 + dVar11;
            puVar6 = puVar6 + 1;
            dVar14 = dVar10;
            dVar11 = dVar15;
          } while (puVar2 != puVar6);
          puVar2 = puVar1;
          puVar3 = &uStack_150;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      puVar6 = (undefined *)puVar3;
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if (puVar1 == puVar6) {
    uVar4 = 1;
    goto LAB_109141f54;
  }
  puVar2 = puVar1;
  _objc_opt_class(puVar1);
  puVar7 = puVar6;
  func_0x00010c077980(puVar6,param_4,puVar2);
  if ((int)puVar7 == 0) {
    uVar4 = 0;
    goto LAB_109141f54;
  }
  _objc_retain(puVar6);
  puVar7 = *(undefined **)(puVar1 + 0x20);
  puVar2 = puVar6;
  func_0x00010c09eee0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == puVar2) {
    _objc_release(puVar2);
LAB_109141eec:
    puVar7 = *(undefined **)(puVar1 + 0x18);
    puVar2 = puVar6;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == puVar2) {
      uVar4 = 1;
    }
    else {
      uVar8 = *(undefined8 *)(puVar1 + 0x18);
      puVar1 = puVar6;
      func_0x00010bfc1100(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar8,param_4,puVar1);
      uVar4 = (uint)uVar8;
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  else {
    uVar8 = *(undefined8 *)(puVar1 + 0x20);
    puVar7 = puVar6;
    func_0x00010c09eee0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar8,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    if ((int)uVar8 != 0) goto LAB_109141eec;
    uVar4 = 0;
  }
  _objc_release(puVar6);
LAB_109141f54:
  _objc_release(puVar6);
  return (undefined *)(ulong)(uVar4 & 1);
}



/* Entry: 109141e24; end: 109141f73; -[SCGeofencedObject isEqual:] */

uint FUN_109141e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
    goto LAB_109141f54;
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  lVar3 = param_3;
  func_0x00010c077980(param_3,param_2,lVar1);
  if ((int)lVar3 == 0) {
    uVar2 = 0;
    goto LAB_109141f54;
  }
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = param_3;
  func_0x00010c09eee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == lVar1) {
    _objc_release(lVar1);
LAB_109141eec:
    lVar3 = *(long *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010bfc1100();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == lVar1) {
      uVar2 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = param_3;
      func_0x00010bfc1100(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar4,param_2,lVar3);
      uVar2 = (uint)uVar4;
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_3;
    func_0x00010c09eee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) goto LAB_109141eec;
    uVar2 = 0;
  }
  _objc_release(param_3);
LAB_109141f54:
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 109141f74; end: 109141fc7; -[SCGeofencedObject hash] */

ulong FUN_109141f74(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980(lVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfde980(uVar2);
  uVar2 = uVar2 | lVar1 << 0x20;
  uVar2 = ~uVar2 + uVar2 * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  return uVar2 ^ uVar2 >> 0x16;
}



/* Entry: 109141fc8; end: 109141fcf; -[SCGeofencedObject hasContextCards] */

undefined1 FUN_109141fc8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109141fd0; end: 109141fd7; -[SCGeofencedObject setHasContextCards:] */

void FUN_109141fd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109141fd8; end: 109141fdf; -[SCGeofencedObject geoFenceLocationPoints] */

undefined8 FUN_109141fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109141fe0; end: 109141fe7; -[SCGeofencedObject setGeoFenceLocationPoints:] */

void FUN_109141fe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109141fe8; end: 109141fef; -[SCGeofencedObject locationId] */

undefined8 FUN_109141fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109141ff0; end: 109141ff7; -[SCGeofencedObject setLocationId:] */

void FUN_109141ff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109141ff8; end: 109142033; -[SCGeofencedObject .cxx_destruct] */

void FUN_109141ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109142034; end: 1091420bb; -[SCGeofilterDependencyFetcher initWithDomain:] */

undefined1 * FUN_109142034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127007f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release();
    _dispatch_group_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091420bc; end: 1091422b3; -[SCGeofilterDependencyFetcher fetchURLData:itemCompletion:] */

void FUN_1091420bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c3121c();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126bcff0);
      puVar3 = puVar2;
      func_0x00010beecc40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bfe63a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar5 = param_1;
      func_0x00010bf85120(param_1);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_group_enter();
      _objc_release(uVar5);
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(puVar1);
      _objc_retain(param_4);
      func_0x00010bfab000(puVar4);
      _objc_release(param_4);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
      goto LAB_10914226c;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_10914226c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091422b4; end: 1091422bb;  */

void FUN_1091422b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 1091422bc; end: 10914234f;  */

void FUN_1091422bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = param_2;
    if (param_4 != 0) {
      func_0x00010c1a5de0(lVar1,param_2,1);
      uVar3 = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
    lVar2 = lVar1;
    func_0x00010bf85120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_group_leave();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109142350; end: 1091423e3; -[SCGeofilterDependencyFetcher fetchURLImage:itemCompletion:] */

void FUN_109142350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091423e4;
  puStack_40 = &UNK_11086f048;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfaafe0(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091423e4; end: 10914242f;  */

void FUN_1091423e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109142430; end: 1091424fb; -[SCGeofilterDependencyFetcher setGroupCompletionHandler:] */

void FUN_109142430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf85120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091424fc;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d98(uVar1,uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091424fc; end: 109142527;  */

void FUN_1091424fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfd6ce0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000109142524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,(uint)uVar2 ^ 1);
  return;
}



/* Entry: 109142528; end: 10914252f; -[SCGeofilterDependencyFetcher domain] */

undefined8 FUN_109142528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109142530; end: 10914255f; -[SCGeofilterDependencyFetcher setDomain:] */

void FUN_109142530(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109142560; end: 109142567; -[SCGeofilterDependencyFetcher hasErrors] */

undefined1 FUN_109142560(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109142568; end: 10914256f; -[SCGeofilterDependencyFetcher setHasErrors:] */

void FUN_109142568(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109142570; end: 109142577; -[SCGeofilterDependencyFetcher dispatchGroup] */

undefined8 FUN_109142570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109142578; end: 1091425a7; -[SCGeofilterDependencyFetcher setDispatchGroup:] */

void FUN_109142578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091425a8; end: 1091425d7; -[SCGeofilterDependencyFetcher .cxx_destruct] */

void FUN_1091425a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091425d8; end: 10914269b; +[SCImageURLParamsParseError errorWithCode:] */

void FUN_1091425d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puStack_30 = (&PTR_PTR_110addf00)[param_3];
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f242d8;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar3 = (&PTR_PTR_110addf00)[(long)ppuVar2];
    _objc_retain(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10914269c; end: 1091426cb; +[SCImageURLParamsParseError descriptionForCode:] */

void FUN_10914269c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_PTR_110addf00)[param_3];
  _objc_retain(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091426cc; end: 10914295b; +[SCStaticImageGeoFilter ucoGeoFilterWithLensId:displayName:isFromPostCaptureLensExplorer:carouselGroup:carouselGlobalScoreList:unlockableContexts:unlockableTrackInfo:isAnimated:isSnapchatPlusExclusive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091426cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b3898;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c026d40(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_retain(param_8);
  uVar6 = param_6;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar2 = uVar6;
  func_0x00010c0720c0(uVar6,param_2,&PTR____CFConstantStringClassReference_110e77078);
  _objc_release(uVar6);
  puVar3 = param_8;
  if ((int)uVar2 != 0) {
    if (param_8 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0d3c80();
    }
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c174bc0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f23c58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110ee4b58);
    _objc_release(param_8);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(puVar1 + _DAT_112781d48);
  *(undefined **)(puVar1 + _DAT_112781d48) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10914295c; end: 109142ae7; -[SCStaticImageGeoFilter prepareGeoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:] */

void FUN_10914295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_109142ae8;
  puStack_a8 = &UNK_110addfc0;
  uStack_68 = param_11;
  uStack_a0 = param_1;
  uStack_98 = param_6;
  uStack_90 = param_5;
  uStack_88 = param_4;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000107c27d8c(uVar1,&puStack_c0);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 109142ae8; end: 109143023;  */

void FUN_109142ae8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe8f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1058;
  _objc_alloc(PTR_PTR_1126b1058);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b720(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c01b360(puVar4);
  _objc_release();
  _dispatch_group_create();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_109143024;
  uStack_78 = 0x109143034;
  uStack_70 = 0;
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010c09b220(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c09aec0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010c09c500();
  }
  else {
    func_0x00010c09c4e0(*(undefined8 *)(param_1 + 0x20));
  }
  _dispatch_group_enter(uVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06d3a0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar2 == 0) {
    lVar9 = *(long *)(param_1 + 0x20);
    func_0x00010c081f00();
    if ((int)lVar9 != 0) {
      lVar10 = *(long *)(param_1 + 0x20);
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      _objc_release();
      if (lVar10 == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010be1c800();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = puStack_90[5];
        puStack_90[5] = uVar13;
        _objc_release(uVar12);
        _dispatch_group_leave(uVar5);
        puStack_170 = puVar1;
        goto LAB_109142e90;
      }
    }
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcff0);
    lVar10 = lVar9;
    func_0x00010beecc40(lVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar10;
    func_0x00010bfe63a0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_initWeak(auStack_a0,*(undefined8 *)(param_1 + 0x20));
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe8f00(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1091430f0;
    puStack_108 = &UNK_110addf90;
    _objc_copyWeak(auStack_e8,auStack_a0);
    puStack_f0 = &uStack_98;
    _objc_retain(puVar6);
    puStack_100 = puVar6;
    _objc_retain(uVar5);
    uStack_f8 = uVar5;
    func_0x00010bf0b720(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bfa6960(lVar11);
    _objc_release(uVar13);
    _objc_release(uStack_f8);
    _objc_release(puStack_100);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(lVar11);
    _objc_release(lVar10);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    _objc_initWeak(auStack_a0,*(undefined8 *)(param_1 + 0x20));
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10914303c;
    puStack_c8 = &UNK_110addf40;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(puVar6);
    puStack_b0 = &uStack_98;
    puStack_c0 = puVar6;
    _objc_retain(uVar5);
    uStack_b8 = uVar5;
    func_0x00010bfa54c0(uVar13);
    _objc_release(uStack_b8);
    _objc_release(puStack_c0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  }
LAB_109142e90:
  uVar13 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1091431d8;
  puStack_158 = &UNK_11097cd70;
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  puStack_150 = puVar6;
  _objc_retain(uVar12);
  puStack_128 = &uStack_98;
  uStack_138 = *(undefined8 *)(param_1 + 0x20);
  puStack_148 = puVar7;
  puStack_140 = puVar8;
  uStack_130 = uVar12;
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  func_0x000107c27d98(uVar5,uVar13,&puStack_170);
  _objc_release(uVar13);
  _objc_release(puStack_140);
  _objc_release(puStack_148);
  _objc_release(uStack_130);
  _objc_release(puStack_150);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 109143024; end: 10914303b;  */

void FUN_109143024(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10914303c; end: 1091430e7;  */

void FUN_10914303c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      if (param_2 != 0) {
        lVar2 = lVar1;
        func_0x00010be1c800();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar3 = *(undefined8 *)(lVar4 + 0x28);
        *(long *)(lVar4 + 0x28) = lVar2;
        _objc_release(uVar3);
      }
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091430e8; end: 1091430ef;  */

void FUN_1091430e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_geoFilterURLDataFetching_1125cde80);
  return;
}



/* Entry: 1091430f0; end: 1091431d7;  */

void FUN_1091430f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar2 = lVar1;
      func_0x00010c09d160(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1afb40();
      _objc_release(lVar2);
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010be1c800();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      *(long *)(lVar5 + 0x28) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
    }
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091431d8; end: 10914338f;  */

void FUN_1091431d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) == 0) {
      lVar1 = *(long *)(param_1 + 0x40);
      if (lVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
        uVar2 = 0;
        goto LAB_10914336c;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182f80(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bce0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      _objc_release(uVar2);
      func_0x00010c081f00(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c1b5480(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf9e8a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199980(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf5c860(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c186200(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      _objc_release(uVar2);
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 0x40);
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
LAB_10914336c:
                    /* WARNING: Could not recover jumptable at 0x00010914337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(lVar1,uVar2,0);
        return;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfb1920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 109143390; end: 1091433af; -[SCStaticImageGeoFilter geofilterMissLoggingType] */

undefined8 FUN_109143390(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c06d3a0();
  uVar1 = 2;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1091433b0; end: 1091434db; -[SCStaticImageGeoFilter _geofilterImageWithImageData:] */

void FUN_1091433b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126dd7d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bfadea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c09d160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c14e3c0(param_1);
  uVar6 = param_1;
  func_0x00010c104360(param_1);
  uVar7 = param_1;
  func_0x00010c0c4fc0();
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c640(puVar1,param_2,param_3,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091434dc; end: 1091434ff;  */

undefined ** FUN_1091434dc(ulong param_1)

{
  if (param_1 < 3) {
    return (undefined **)(&PTR_PTR_110addff0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110de39b8;
}



/* Entry: 109143500; end: 1091435a7; -[SCArSegmentationImageGenerator initWithUserSession:image:mediaOrientation:] */

undefined8
FUN_109143500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05db40(param_1,param_2,param_3,puVar1,param_5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091435a8; end: 109143873; -[SCArSegmentationImageGenerator initWithUserSession:imageFuture:mediaOrientation:] */

undefined8 *
FUN_1091435a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112700800;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar4);
    puVar1[5] = param_5;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = puVar1[3];
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_suspend();
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c3ca8;
    func_0x00010be1e9a0();
    *(int *)(puVar1 + 8) = (int)puVar2;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar4);
    if (param_4 == 0) {
      func_0x00010be95c00(puVar1);
    }
    else {
      _objc_initWeak(auStack_68,puVar1);
      uStack_70 = 0;
      _objc_copyWeak(auStack_78,auStack_68);
      func_0x00010c297260(param_4);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


