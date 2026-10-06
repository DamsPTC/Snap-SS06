/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092292b0; end: 1092292b7; -[LCVTranslationData setX:] */

void FUN_1092292b0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1092292b8; end: 1092292bf; -[LCVTranslationData y] */

undefined4 FUN_1092292b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1092292c0; end: 1092292c7; -[LCVTranslationData setY:] */

void FUN_1092292c0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 1092292c8; end: 1092292cf; -[LCVTranslationData z] */

undefined4 FUN_1092292c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1092292d0; end: 1092292d7; -[LCVTranslationData setZ:] */

void FUN_1092292d0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1092292d8; end: 1092292df; -[LCVRotationRateData x] */

undefined4 FUN_1092292d8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1092292e0; end: 1092292e7; -[LCVRotationRateData setX:] */

void FUN_1092292e0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1092292e8; end: 1092292ef; -[LCVRotationRateData y] */

undefined4 FUN_1092292e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1092292f0; end: 1092292f7; -[LCVRotationRateData setY:] */

void FUN_1092292f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 1092292f8; end: 1092292ff; -[LCVRotationRateData z] */

undefined4 FUN_1092292f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 109229300; end: 109229307; -[LCVRotationRateData setZ:] */

void FUN_109229300(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 109229308; end: 109229387; -[LCVQuaternionData setFromRoll:pitch:yaw:] */

void FUN_109229308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  uStack_4c = (undefined4)param_1;
  uStack_48 = uVar1;
  uStack_44 = uVar3;
  FUN_109229388(&uStack_4c);
  func_0x00010c2244c0(param_4,param_5);
  func_0x00010c227500(param_1,param_5);
  func_0x00010c2276e0(CONCAT44(uVar2,uVar1),param_5);
  func_0x00010c227900(CONCAT44(uVar4,uVar3),param_5);
  return;
}



/* Entry: 109229388; end: 10922941f;  */

float FUN_109229388(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[1];
  fVar1 = *param_1 * -0.5;
  fVar5 = fVar2 * -0.5;
  fVar6 = param_1[2] * -0.5;
  ___sincosf_stret(fVar1);
  fVar3 = fVar2;
  ___sincosf_stret(fVar5);
  fVar4 = fVar3;
  ___sincosf_stret(fVar6);
  return -(fVar1 * fVar3 * fVar4) - -(fVar2 * fVar5 * fVar6);
}



/* Entry: 109229420; end: 10922959f; -[LCVQuaternionData eulerAngles] */

void FUN_109229420(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  func_0x00010c2a1240();
  uVar8 = param_1;
  func_0x00010c2be880(param_2);
  fVar6 = fVar12;
  func_0x00010c2beba0(param_2);
  fVar7 = fVar6;
  func_0x00010c2bef20(param_2);
  fVar11 = (float)param_1;
  fVar12 = (float)uVar8;
  fVar4 = -(fVar12 * fVar11) + fVar7 * fVar6;
  fVar4 = fVar4 + fVar4;
  fVar9 = ABS(fVar4);
  bVar1 = false;
  bVar2 = true;
  if (ABS(((-(fVar12 * fVar12) + fVar11 * fVar11) - fVar6 * fVar6) + fVar7 * fVar7) <= 1.1920929e-07
     ) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar9)) {
      bVar1 = fVar9 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar9;
    }
  }
  if (!bVar2 || bVar1) {
    fVar4 = -fVar12;
    _atan2f(fVar4,param_1);
    fVar4 = fVar4 + fVar4;
  }
  else {
    _atan2f();
  }
  fVar5 = fVar11 * -fVar7 + fVar6 * fVar12;
  fVar5 = fVar5 + fVar5;
  fVar10 = ABS(fVar5);
  fVar9 = 0.0;
  bVar1 = false;
  bVar2 = true;
  if (ABS(fVar12 * fVar12 + fVar11 * fVar11 + -fVar6 * fVar6 + -fVar7 * fVar7) <= 1.1920929e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar10;
    }
  }
  if (bVar2 && !bVar1) {
    fVar9 = fVar5;
    _atan2f();
  }
  puVar3 = PTR_PTR_1126ddf70;
  _objc_alloc_init(PTR_PTR_1126ddf70);
  func_0x00010c1ee5c0(-fVar4);
  fVar6 = (fVar11 * fVar6 + fVar7 * fVar12) * -2.0;
  fVar7 = -1.0;
  if (-1.0 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  _asinf(fVar6);
  func_0x00010c1dbe20(-fVar6,puVar3);
  func_0x00010c227880(-fVar9,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1092295a0; end: 1092295a7; -[LCVQuaternionData w] */

undefined4 FUN_1092295a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1092295a8; end: 1092295af; -[LCVQuaternionData setW:] */

void FUN_1092295a8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1092295b0; end: 1092295b7; -[LCVQuaternionData x] */

undefined4 FUN_1092295b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1092295b8; end: 1092295bf; -[LCVQuaternionData setX:] */

void FUN_1092295b8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 1092295c0; end: 1092295c7; -[LCVQuaternionData y] */

undefined4 FUN_1092295c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1092295c8; end: 1092295cf; -[LCVQuaternionData setY:] */

void FUN_1092295c8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1092295d0; end: 1092295d7; -[LCVQuaternionData z] */

undefined4 FUN_1092295d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 1092295d8; end: 1092295df; -[LCVQuaternionData setZ:] */

void FUN_1092295d8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



/* Entry: 1092295e0; end: 1092295e7; -[LCVImuVideoTimestampsDataRaw timestampStartOfFrame] */

undefined8 FUN_1092295e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092295e8; end: 1092295ef; -[LCVImuVideoTimestampsDataRaw setTimestampStartOfFrame:] */

void FUN_1092295e8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1092295f0; end: 1092295f7; -[LCVImuVideoTimestampsDataRaw timestampEndOfFrame] */

undefined8 FUN_1092295f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1092295f8; end: 1092295ff; -[LCVImuVideoTimestampsDataRaw setTimestampEndOfFrame:] */

void FUN_1092295f8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 109229600; end: 1092296e3; -[LCVImuFrameDataRaw init] */

undefined1 * FUN_109229600(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127011e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c215dc0(0,puVar1);
    puVar2 = PTR_PTR_1126ddf78;
    _objc_alloc_init(PTR_PTR_1126ddf78);
    func_0x00010c1ee8a0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ddf80;
    _objc_alloc_init(PTR_PTR_1126ddf80);
    func_0x00010c160bc0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1092296e4; end: 1092296eb; -[LCVImuFrameDataRaw timestamp] */

undefined8 FUN_1092296e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092296ec; end: 1092296f3; -[LCVImuFrameDataRaw setTimestamp:] */

void FUN_1092296ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 1092296f4; end: 1092296fb; -[LCVImuFrameDataRaw rotationRate] */

undefined8 FUN_1092296f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1092296fc; end: 10922972b; -[LCVImuFrameDataRaw setRotationRate:] */

void FUN_1092296fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922972c; end: 109229733; -[LCVImuFrameDataRaw acceleration] */

undefined8 FUN_10922972c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109229734; end: 109229763; -[LCVImuFrameDataRaw setAcceleration:] */

void FUN_109229734(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109229764; end: 109229793; -[LCVImuFrameDataRaw .cxx_destruct] */

void FUN_109229764(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109229794; end: 109229857; -[LCVStabilizerFrameData init] */

undefined1 * FUN_109229794(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127011f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c215dc0(0,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209020(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229858; end: 10922985f; -[LCVStabilizerFrameData timestamp] */

undefined8 FUN_109229858(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229860; end: 109229867; -[LCVStabilizerFrameData setTimestamp:] */

void FUN_109229860(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109229868; end: 10922986f; -[LCVStabilizerFrameData stabilizerComp] */

undefined8 FUN_109229868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109229870; end: 10922989f; -[LCVStabilizerFrameData setStabilizerComp:] */

void FUN_109229870(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1092298a0; end: 1092298ab; -[LCVStabilizerFrameData .cxx_destruct] */

void FUN_1092298a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1092298ac; end: 10922997f; -[LCVSE3Data init] */

undefined1 * FUN_1092298ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127011f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3748;
    _objc_alloc_init(PTR_PTR_1126d3748);
    func_0x00010c1e6300(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ddf88;
    _objc_alloc_init(PTR_PTR_1126ddf88);
    func_0x00010c219b80(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229980; end: 109229987; -[LCVSE3Data quaternion] */

undefined8 FUN_109229980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229988; end: 1092299b7; -[LCVSE3Data setQuaternion:] */

void FUN_109229988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092299b8; end: 1092299bf; -[LCVSE3Data translation] */

undefined8 FUN_1092299b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1092299c0; end: 1092299ef; -[LCVSE3Data setTranslation:] */

void FUN_1092299c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1092299f0; end: 109229a1f; -[LCVSE3Data .cxx_destruct] */

void FUN_1092299f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109229a20; end: 109229ad7; -[LCVPoseFrameData init] */

undefined1 * FUN_109229a20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c215dc0(0,puVar1);
    puVar2 = PTR_PTR_1126ddf90;
    _objc_alloc_init(PTR_PTR_1126ddf90);
    func_0x00010c1f80c0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229ad8; end: 109229adf; -[LCVPoseFrameData timestamp] */

undefined8 FUN_109229ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229ae0; end: 109229ae7; -[LCVPoseFrameData setTimestamp:] */

void FUN_109229ae0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109229ae8; end: 109229aef; -[LCVPoseFrameData se3] */

undefined8 FUN_109229ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109229af0; end: 109229b1f; -[LCVPoseFrameData setSe3:] */

void FUN_109229af0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109229b20; end: 109229b2b; -[LCVPoseFrameData .cxx_destruct] */

void FUN_109229b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109229b2c; end: 109229bdb; -[LCVPoseData init] */

undefined1 * FUN_109229b2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee20(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229bdc; end: 109229be3; -[LCVPoseData poseData] */

undefined8 FUN_109229bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229be4; end: 109229c13; -[LCVPoseData setPoseData:] */

void FUN_109229be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109229c14; end: 109229c1f; -[LCVPoseData .cxx_destruct] */

void FUN_109229c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109229c20; end: 109229d17; -[LCVAlignmentFrameData init] */

undefined1 * FUN_109229c20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c215dc0(0,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba140(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee080(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229d18; end: 109229d1f; -[LCVAlignmentFrameData timestamp] */

undefined8 FUN_109229d18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229d20; end: 109229d27; -[LCVAlignmentFrameData setTimestamp:] */

void FUN_109229d20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109229d28; end: 109229d2f; -[LCVAlignmentFrameData leftAlignmentComp] */

undefined8 FUN_109229d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109229d30; end: 109229d5f; -[LCVAlignmentFrameData setLeftAlignmentComp:] */

void FUN_109229d30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109229d60; end: 109229d67; -[LCVAlignmentFrameData rightAlignmentComp] */

undefined8 FUN_109229d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109229d68; end: 109229d97; -[LCVAlignmentFrameData setRightAlignmentComp:] */

void FUN_109229d68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109229d98; end: 109229dc7; -[LCVAlignmentFrameData .cxx_destruct] */

void FUN_109229d98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109229dc8; end: 109229e77; -[LCVAlignmentData init] */

undefined1 * FUN_109229dc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166c40(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229e78; end: 109229e7f; -[LCVAlignmentData alignmentData] */

undefined8 FUN_109229e78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229e80; end: 109229eaf; -[LCVAlignmentData setAlignmentData:] */

void FUN_109229e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109229eb0; end: 109229ebb; -[LCVAlignmentData .cxx_destruct] */

void FUN_109229eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109229ebc; end: 109229f9b; -[LCVImuDataRaw init] */

undefined1 * FUN_109229ebc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab520(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2214c0(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109229f9c; end: 109229fa3; -[LCVImuDataRaw imuData] */

undefined8 FUN_109229f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109229fa4; end: 109229fd3; -[LCVImuDataRaw setImuData:] */

void FUN_109229fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109229fd4; end: 109229fdb; -[LCVImuDataRaw videoData] */

undefined8 FUN_109229fd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109229fdc; end: 10922a00b; -[LCVImuDataRaw setVideoData:] */

void FUN_109229fdc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a00c; end: 10922a03b; -[LCVImuDataRaw .cxx_destruct] */

void FUN_10922a00c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10922a03c; end: 10922a0eb; -[LCVStabilizerData init] */

undefined1 * FUN_10922a03c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10922a0ec; end: 10922a0f3; -[LCVStabilizerData stabilizerData] */

undefined8 FUN_10922a0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10922a0f4; end: 10922a123; -[LCVStabilizerData setStabilizerData:] */

void FUN_10922a0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a124; end: 10922a12f; -[LCVStabilizerData .cxx_destruct] */

void FUN_10922a124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10922a130; end: 10922a137; -[LCVImage data] */

undefined8 FUN_10922a130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10922a138; end: 10922a167; -[LCVImage setData:] */

void FUN_10922a138(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a168; end: 10922a16f; -[LCVImage width] */

undefined4 FUN_10922a168(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10922a170; end: 10922a177; -[LCVImage setWidth:] */

void FUN_10922a170(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10922a178; end: 10922a17f; -[LCVImage height] */

undefined4 FUN_10922a178(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10922a180; end: 10922a187; -[LCVImage setHeight:] */

void FUN_10922a180(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10922a188; end: 10922a18f; -[LCVImage step] */

undefined4 FUN_10922a188(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10922a190; end: 10922a197; -[LCVImage setStep:] */

void FUN_10922a190(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10922a198; end: 10922a19f; -[LCVImage type] */

undefined4 FUN_10922a198(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10922a1a0; end: 10922a1a7; -[LCVImage setType:] */

void FUN_10922a1a0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10922a1a8; end: 10922a1b3; -[LCVImage .cxx_destruct] */

void FUN_10922a1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10922a1b4; end: 10922a31f; -[LCVCalibrationData init] */

undefined1 * FUN_10922a1b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701230;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c220e20(0,puVar1);
    func_0x00010c221040(0,puVar1);
    func_0x00010c1a9160(0,puVar1);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init(PTR_PTR_1126ddf98);
    func_0x00010c1ba280(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init(PTR_PTR_1126ddf98);
    func_0x00010c1ee1a0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba140(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee080(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10922a320; end: 10922a327; -[LCVCalibrationData version] */

undefined4 FUN_10922a320(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10922a328; end: 10922a32f; -[LCVCalibrationData setVersion:] */

void FUN_10922a328(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10922a330; end: 10922a337; -[LCVCalibrationData horizontalFovDegrees] */

undefined4 FUN_10922a330(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10922a338; end: 10922a33f; -[LCVCalibrationData setHorizontalFovDegrees:] */

void FUN_10922a338(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 10922a340; end: 10922a347; -[LCVCalibrationData verticalFovDegrees] */

undefined4 FUN_10922a340(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10922a348; end: 10922a34f; -[LCVCalibrationData setVerticalFovDegrees:] */

void FUN_10922a348(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10922a350; end: 10922a357; -[LCVCalibrationData leftLut] */

undefined8 FUN_10922a350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10922a358; end: 10922a387; -[LCVCalibrationData setLeftLut:] */

void FUN_10922a358(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a388; end: 10922a38f; -[LCVCalibrationData rightLut] */

undefined8 FUN_10922a388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10922a390; end: 10922a3bf; -[LCVCalibrationData setRightLut:] */

void FUN_10922a390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


