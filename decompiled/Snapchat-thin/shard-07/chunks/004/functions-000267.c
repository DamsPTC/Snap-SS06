/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054d4d90; end: 1054d4ebb; +[SCManagedStillImageCapturerUtils _photoFormatWithPhotoOutput:captureConfiguration:preferUncompressedFormat:] */

void FUN_1054d4d90(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == 0) {
    uStack_58 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
    puStack_50 = *(undefined8 **)PTR__AVVideoCodecTypeJPEG_110348138;
    pppuVar13 = (undefined8 ***)&puStack_50;
    puVar14 = &uStack_58;
    uVar15 = 1;
    param_1 = (undefined8 ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = param_1;
  }
  else {
    func_0x00010be740c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined8 ***)0x0) {
      uStack_48 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
      puStack_40 = *(undefined8 **)PTR__AVVideoCodecTypeJPEG_110348138;
      pppuVar13 = (undefined8 ***)&puStack_40;
      puVar14 = &uStack_48;
    }
    else {
      uStack_38 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
      pppuVar13 = &ppuStack_30;
      puVar14 = &uStack_38;
      ppuStack_30 = param_1;
    }
    uVar15 = 1;
    pppuVar2 = (undefined8 ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uVar1 = (undefined1)uStack_58;
  _objc_retain(pppuVar13);
  _objc_retain(uVar15);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(uStack_60);
  _objc_retain(puVar14);
  pppuVar2 = pppuVar13;
  func_0x00010bf12960(pppuVar13);
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar3;
  func_0x00010c282760();
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  pppuVar3 = param_1;
  func_0x00010bdd5780(param_1,param_2,puVar14,uVar15,uStack_60,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  pppuVar2 = pppuVar3;
  func_0x00010bf529e0();
  pppuVar5 = pppuVar13;
  func_0x00010c0c1e00();
  if (pppuVar5 < pppuVar2) {
    func_0x00010bdf95c0(param_1,param_2,pppuVar13,uVar15,param_8,uStack_60,uVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = param_1;
  }
  else {
    pppuVar5 = param_1;
    func_0x00010be73b40(param_1,param_2,pppuVar13,uStack_60,uVar1);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = (undefined8 ***)PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38;
    func_0x00010c0fb400(PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38,param_2,pppuVar4,
                        pppuVar5,pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar2;
    func_0x00010c074d20();
    uVar6 = uStack_60;
    func_0x00010c2300c0();
    if ((int)pppuVar4 != (int)uVar6) {
      uVar6 = uStack_60;
      func_0x00010c2300c0(uStack_60);
      func_0x00010c1a86a0(pppuVar2,param_2,uVar6);
    }
    uVar7 = param_6;
    func_0x00010bf70ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c070860();
    _objc_release(uVar8);
    _objc_release(uVar7);
    pppuVar4 = pppuVar13;
    func_0x00010c076880();
    if ((((int)pppuVar4 != 0) && (uVar6 = uStack_60, func_0x00010c07f6c0(), (uVar6 & 1) == 0)) &&
       (pppuVar4 = pppuVar2, func_0x00010c0768a0(), (((uint)pppuVar4 ^ 1) & (uint)uVar9) == 1)) {
      func_0x00010c1bcd20(pppuVar2,param_2,1);
    }
    uVar6 = uStack_60;
    func_0x00010c0773c0();
    if ((int)uVar6 == 0) {
LAB_1054d514c:
      uVar6 = uStack_60;
      func_0x00010c078b80();
      if (((int)uVar6 == 0) || (uVar6 = uStack_60, func_0x00010c0fb6a0(), uVar6 == 0)) {
        uVar6 = param_8;
        func_0x00010c269d40(param_8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c0fb6a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0fb6a0();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar6);
      }
      else {
        uVar12 = uStack_60;
        func_0x00010c0fb6a0(uStack_60);
      }
      func_0x00010be94900(param_1,param_2,pppuVar13,uVar12,2);
    }
    else {
      uVar6 = param_8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c0b67a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0fb6e0();
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar6);
      if (uVar12 == 0) goto LAB_1054d514c;
      param_1 = pppuVar13;
      func_0x00010c0c2960(pppuVar13);
    }
    func_0x00010c1db580(pppuVar2,param_2,param_1);
    _objc_release(pppuVar5);
  }
  _objc_release(pppuVar3);
  _objc_release(uStack_60);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar15);
  _objc_release(pppuVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar2);
  return;
}



/* Entry: 1054d4ebc; end: 1054d524f; +[SCManagedStillImageCapturerUtils _bracketPhotoSettingsWithPhotoOutput:captureConnection:captureState:captureResource:lightingConditionType:systemConfiguration:captureConfiguration:lensEffectApplied:] */

void FUN_1054d4ebc(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  ulong param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf12960(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c282760();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bdd5780(param_1,param_2,param_4,param_5,param_9,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar4 = param_3;
  func_0x00010c0c1e00();
  if (puVar4 < puVar2) {
    func_0x00010bdf95c0(param_1,param_2,param_3,param_5,param_8,param_9,param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    goto LAB_1054d51fc;
  }
  puVar2 = param_1;
  func_0x00010be73b40(param_1,param_2,param_3,param_9,param_10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38;
  func_0x00010c0fb400(PTR__OBJC_CLASS___AVCapturePhotoBracketSettings_1126b9e38,param_2,puVar3,
                      puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c074d20();
  uVar5 = param_9;
  func_0x00010c2300c0();
  if ((int)puVar3 != (int)uVar5) {
    uVar5 = param_9;
    func_0x00010c2300c0(param_9);
    func_0x00010c1a86a0(puVar4,param_2,uVar5);
  }
  uVar6 = param_6;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c070860();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar3 = param_3;
  func_0x00010c076880();
  if (((int)puVar3 != 0) && (uVar5 = param_9, func_0x00010c07f6c0(), (uVar5 & 1) == 0)) {
    puVar3 = puVar4;
    func_0x00010c0768a0();
    if ((((uint)puVar3 ^ 1) & (uint)uVar8) == 1) {
      func_0x00010c1bcd20(puVar4,param_2,1);
    }
  }
  uVar5 = param_9;
  func_0x00010c0773c0();
  if ((int)uVar5 == 0) {
LAB_1054d514c:
    uVar5 = param_9;
    func_0x00010c078b80();
    if (((int)uVar5 == 0) || (uVar5 = param_9, func_0x00010c0fb6a0(), uVar5 == 0)) {
      uVar5 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c0fb6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0fb6a0();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar5);
    }
    else {
      uVar11 = param_9;
      func_0x00010c0fb6a0(param_9);
    }
    func_0x00010be94900(param_1,param_2,param_3,uVar11,2);
  }
  else {
    uVar5 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c0b67a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0fb6e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    if (uVar11 == 0) goto LAB_1054d514c;
    param_1 = param_3;
    func_0x00010c0c2960(param_3);
  }
  func_0x00010c1db580(puVar4,param_2,param_1);
  _objc_release(puVar2);
LAB_1054d51fc:
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054d5250; end: 1054d5473; +[SCManagedStillImageCapturerUtils _bracketSettingsArray:withCaptureState:captureConfiguration:lightingConditionType:] */

void FUN_1054d5250(float param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf0a0e0(puVar1,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c065960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf9d800(&uStack_70,lVar2);
  }
  uVar3 = param_5;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c141120();
  _objc_release(uVar3);
  uVar5 = param_6;
  func_0x00010c071a20();
  _objc_release(param_6);
  if ((int)uVar5 == 0) {
    if ((uVar4 & 0xfffffffffffffffe) == 2) {
      if (lVar2 == 0) {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bf9d800(&uStack_b0,lVar2);
      }
      uVar3 = param_5;
      func_0x00010c1410c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf9c240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _CMTimeMultiplyByFloat64(&uStack_90,(double)param_1,&uStack_b0);
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      uStack_60 = uStack_80;
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  else {
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_a0 = uStack_60;
    func_0x00010bdc95e0(&uStack_90,param_2,param_3,&uStack_b0,param_7);
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_60 = uStack_80;
  }
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_80 = uStack_60;
  puVar6 = PTR__OBJC_CLASS___AVCaptureManualExposureBracketedStillImageSettings_1126b9e88;
  func_0x00010c0b8460(*(undefined4 *)PTR__AVCaptureISOCurrent_110347f28,
                      PTR__OBJC_CLASS___AVCaptureManualExposureBracketedStillImageSettings_1126b9e88
                      ,param_3,&uStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_3,puVar6);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1054d5474; end: 1054d54af; +[SCManagedStillImageCapturerUtils _resolveCapturePhotoQualityPrioritization:withInteger:defaultPriority:] */

long FUN_1054d5474(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if (2 < param_4 - 1U) {
    param_4 = param_5;
  }
  func_0x00010c0c2960();
  if (param_3 <= param_4) {
    param_4 = param_3;
  }
  if (param_4 < 2) {
    param_4 = 1;
  }
  return param_4;
}



/* Entry: 1054d54b0; end: 1054d551f; +[SCManagedStillImageCapturerUtils _adjustedExposureDurationForNightModeWithCurrentExposureDuration:lightingConditionType:] */

void FUN_1054d54b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  if (param_5 == 3) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    uVar1 = 0x4004000000000000;
  }
  else {
    if (param_5 != 1) {
      return;
    }
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    uVar1 = 0x3ff8000000000000;
  }
  _CMTimeMultiplyByFloat64(uVar1,&uStack_30);
  return;
}



/* Entry: 1054d5520; end: 1054d558b; -[SCStillImageCaptureVideoInputMethod initWithCameraHardwareResource:] */

undefined1 * FUN_1054d5520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8aa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054d558c; end: 1054d5713; -[SCStillImageCaptureVideoInputMethod captureStillImageWithCapturerState:videoDataSource:successBlock:failureBlock:] */

void FUN_1054d558c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4f80);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 == 0) || ((int)lVar1 == 0)) {
    if (param_6 == 0) goto LAB_1054d56dc;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bfc8060(param_4);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_1);
LAB_1054d56dc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d5714; end: 1054d5897;  */

void FUN_1054d5714(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c076b60();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf70d80();
    bVar1 = lVar3 == 0;
  }
  puVar4 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9300(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4f640(PTR__OBJC_CLASS___CIContext_1126b3120);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  _CVPixelBufferGetWidth(param_2);
  _CVPixelBufferGetHeight(param_2);
  puVar7 = puVar5;
  func_0x00010bf54e00(0,0,(double)uVar6,(double)param_2,puVar5);
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (bVar1) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfb2b00((double)uVar6,(double)param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    func_0x00010bfe9260(0x3ff0000000000000,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  else {
    func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  _CGImageRelease(puVar7);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar9,0,0);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054d5898; end: 1054d58fb; -[SCStillImageCaptureVideoInputMethod flipCGImage:size:] */

void FUN_1054d5898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _UIGraphicsBeginImageContext();
  _UIGraphicsGetCurrentContext();
  _CGContextDrawImage(0,0,param_1,param_2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1054d58fc; end: 1054d5aef; -[SCStillImageCaptureVideoInputMethod imageWithCVPixelBuffer:] */

void FUN_1054d58fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  _CVPixelBufferLockBaseAddress(param_3,0);
  uVar1 = param_3;
  _CVPixelBufferGetWidth();
  uVar2 = param_3;
  _CVPixelBufferGetHeight();
  uVar3 = param_3;
  _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
  lVar4 = uVar1 * 4 * uVar2;
  _malloc();
  lVar5 = lVar4;
  if (0 < (int)uVar2) {
    uVar12 = 0;
    lVar6 = uVar3 + ((long)((uVar1 << 0x20) * uVar2) >> 0x20);
    puVar13 = (undefined1 *)(lVar4 + 2);
    do {
      if (0 < (int)uVar1) {
        uVar14 = 0;
        lVar7 = lVar6 + (int)(((uint)(uVar12 >> 1) & 0x7fffffff) * (int)uVar1);
        lVar5 = lVar7 + 1;
        puVar9 = puVar13;
        do {
          dVar15 = (double)NEON_ucvtf((ulong)*(byte *)(uVar3 + uVar14));
          dVar16 = (double)(int)(*(byte *)(lVar5 + (uVar14 & 0xfffffffe)) - 0x80);
          dVar17 = (double)(int)(*(byte *)(lVar7 + (uVar14 & 0x7ffffffe)) - 0x80);
          uVar10 = (uint)(dVar15 + dVar16 * 1.370705);
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-2] = (char)uVar10;
          uVar10 = (uint)(dVar15 + dVar16 * -0.698001 + dVar17 * -0.337633);
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          uVar11 = (uint)(dVar15 + dVar17 * 1.732446);
          uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
          puVar9[-1] = (char)uVar10;
          if (0xfe < (int)uVar11) {
            uVar11 = 0xff;
          }
          *puVar9 = (char)uVar11;
          uVar14 = uVar14 + 1;
          puVar9 = puVar9 + 4;
        } while ((uVar1 & 0xffffffff) != uVar14);
      }
      uVar12 = uVar12 + 1;
      uVar3 = uVar3 + ((long)(uVar1 << 0x20) >> 0x20);
      puVar13 = puVar13 + (-(uVar1 >> 0x1d & 1) & 0xffffffff00000000 | (uVar1 & 0x3fffffff) << 2);
    } while (uVar12 != (uVar2 & 0x7fffffff));
  }
  _CGColorSpaceCreateDeviceRGB();
  lVar6 = lVar4;
  _CGBitmapContextCreate(lVar4,uVar1,uVar2,8,uVar1 * 4,lVar5,5);
  lVar7 = lVar6;
  _CGBitmapContextCreateImage();
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(lVar7);
  _CGContextRelease(lVar6);
  _CGColorSpaceRelease(lVar5);
  _free(lVar4);
  _CVPixelBufferUnlockBaseAddress(param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1054d5af0; end: 1054d5afb; -[SCStillImageCaptureVideoInputMethod methodName] */

undefined ** FUN_1054d5af0(void)

{
  return &PTR____CFConstantStringClassReference_110de5ef8;
}



/* Entry: 1054d5afc; end: 1054d5b03; -[SCStillImageCaptureVideoInputMethod .cxx_destruct] */

void FUN_1054d5afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054d5b04; end: 1054d5b9f; -[SCStillLensImageCaptureVideoInputMethod initWithCameraCaptureLensProvider:cameraHardwareResource:] */

undefined1 *
FUN_1054d5b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8aa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054d5ba0; end: 1054d5d7f; -[SCStillLensImageCaptureVideoInputMethod captureStillImageWithCapturerState:videoDataSource:successBlock:failureBlock:] */

void FUN_1054d5ba0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a4f80);
  lVar1 = param_4;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0 || lVar4 == 0) {
    if (param_6 == 0) goto LAB_1054d5d28;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(lVar4);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfc8060(param_4);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    param_1 = param_3;
  }
  _objc_release(param_1);
LAB_1054d5d28:
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d5d80; end: 1054d5e43;  */

void FUN_1054d5d80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c076b60();
  if (iVar1 != 0) {
    func_0x00010bf70d80();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfac7a0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c115160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,0,0);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1054d5e44; end: 1054d5e6f; -[SCStillLensImageCaptureVideoInputMethod .cxx_destruct] */

void FUN_1054d5e44(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054d5e70; end: 1054d5eeb;  */

void FUN_1054d5e70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c065e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054d5eec; end: 1054d5f17;  */

undefined ** FUN_1054d5eec(long param_1)

{
  undefined **ppuVar1;
  double dVar2;
  
  func_0x00010020a1d0();
  dVar2 = (double)param_1;
  func_0x000100209f0c();
  dVar2 = dVar2 / 1048576.0 + (double)param_1 / 1048576.0;
  if (dVar2 < 1000.0) {
    return &PTR____CFConstantStringClassReference_110eeb7d8;
  }
  if (dVar2 < 2000.0) {
    return &PTR____CFConstantStringClassReference_110eeb7f8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eeb818;
  if (3000.0 <= dVar2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eeb838;
  }
  return ppuVar1;
}



/* Entry: 1054d5f18; end: 1054d5f1b; -[SCMemoryUsageEntryPoint _logDumpValdiMemoryStatsStartedIfNeeded] */

void FUN_1054d5f18(void)

{
  return;
}



/* Entry: 1054d5f1c; end: 1054d5f1f; -[SCMemoryUsageEntryPoint _logDumpValdiMemoryStatsCompletedIfNeeded] */

void FUN_1054d5f1c(void)

{
  return;
}



/* Entry: 1054d5f20; end: 1054d62ab; -[SCMemoryUsageEntryPoint _createMemoryUsageReporterWithGrapheneLogger:blizzardLogger:memorySnapshot:deviceMemoryBucket:memoryPressureState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d5f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c1c3080();
  func_0x00010c1e62c0(puVar1);
  func_0x00010c1cafa0(puVar1);
  lVar2 = param_1 + _DAT_112724864;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112724848;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f440();
  _objc_release(lVar4);
  _objc_release(lVar2);
  ppuVar10 = (undefined **)0x0;
  if ((int)lVar5 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1054d62ac;
    puStack_80 = &UNK_110890fc0;
    _objc_retain(lVar3);
    lStack_78 = lVar3;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar10 = &puStack_98;
    _objc_retainBlock();
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_68);
  }
  puVar6 = PTR_PTR_1126b9ea0;
  _objc_alloc();
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  lVar2 = param_1 + _DAT_112724868;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112724854;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018340();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar11 = (long)_DAT_11272485c;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar6;
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar7);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  lVar2 = param_1 + _DAT_112724874;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112724878;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf5f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff00(uVar9);
  _objc_release(param_5);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(ppuVar10);
  _objc_release(lVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1054d62ac; end: 1054d63ef;  */

void FUN_1054d62ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2,0,0);
    }
  }
  else {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be52820();
    _objc_release(lVar2);
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bf8af60(lVar3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1054d63f0; end: 1054d6457;  */

void FUN_1054d63f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be52800();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054d6444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1054d6458; end: 1054d6553; -[SCMemoryUsageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d6458(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724858,0);
  _objc_destroyWeak(param_1 + _DAT_112724860);
  _objc_destroyWeak(param_1 + _DAT_112724848);
  _objc_destroyWeak(param_1 + _DAT_112724864);
  _objc_destroyWeak(param_1 + _DAT_112724844);
  _objc_destroyWeak(param_1 + _DAT_112724854);
  _objc_destroyWeak(param_1 + _DAT_11272487c);
  _objc_destroyWeak(param_1 + _DAT_11272486c);
  _objc_destroyWeak(param_1 + _DAT_112724868);
  _objc_destroyWeak(param_1 + _DAT_112724840);
  _objc_destroyWeak(param_1 + _DAT_11272483c);
  _objc_destroyWeak(param_1 + _DAT_112724878);
  _objc_destroyWeak(param_1 + _DAT_112724874);
  _objc_destroyWeak(param_1 + _DAT_112724870);
  _objc_storeStrong(param_1 + _DAT_11272485c,0);
  _objc_storeStrong(param_1 + _DAT_112724850,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272484c,0);
  return;
}



/* Entry: 1054d6554; end: 1054d659f;  */

void FUN_1054d6554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9ea8;
  _objc_alloc(PTR_PTR_1126b9ea8);
  func_0x00010c052300(param_1,param_2);
  func_0x00010c250160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054d65a0; end: 1054d662f; -[SCMemoryDebugViewer initWithLogViewer:] */

undefined1 * FUN_1054d65a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054d6630; end: 1054d670b; -[SCMemoryDebugViewer subscribeOnMemoryUsageSnapshot:] */

void FUN_1054d6630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d670c; end: 1054d6753;  */

void FUN_1054d670c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55e60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d6754; end: 1054d697b; -[SCMemoryDebugViewer _logMemoryDataToLogViewer:] */

void FUN_1054d6754(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_3;
  func_0x00010c0ca3a0();
  lVar1 = lVar3 + 0xfffff;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  func_0x00010c0df7c0(puVar6,param_2,lVar1 >> 0x14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06da0(uVar2,param_2,puVar6,0x10000000);
  _objc_release(puVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_3;
  func_0x00010c0ca2c0();
  lVar1 = lVar3 + 0xfffff;
  if (-1 < lVar3) {
    lVar1 = lVar3;
  }
  func_0x00010c0df7c0(puVar6,param_2,lVar1 >> 0x14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06da0(uVar2,param_2,puVar6,0x20000000);
  _objc_release(puVar6);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf4b8a0();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf4b8a0();
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((int)uVar2 == 0) || ((int)uVar4 == 0)) {
    if ((int)uVar2 == 0) {
      if ((int)uVar4 == 0) {
        puVar6 = (undefined *)0x0;
        goto LAB_1054d692c;
      }
      func_0x00010c0ca2c0();
    }
    else {
      func_0x00010c0ca3a0();
    }
  }
  else {
    func_0x00010c0ca3a0();
    func_0x00010c0ca2c0();
  }
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110de5f78);
  _objc_retainAutoreleasedReturnValue();
LAB_1054d692c:
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c81c0();
  _objc_release(uVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054d697c; end: 1054d69ab; -[SCMemoryDebugViewer .cxx_destruct] */

void FUN_1054d697c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054d69ac; end: 1054d6a7f; -[SCScopeGraphMemoryReporter initWithGraphene:memorySnapshot:deviceMemoryBucket:circumstanceEngine:] */

undefined8
FUN_1054d69ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010be3aca0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1054d6a80; end: 1054d6cb3; -[SCScopeGraphMemoryReporter _initWithGraphene:memorySnapshot:deviceMemoryBucket:circumstanceEngine:performer:] */

undefined8 *
FUN_1054d6a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e8ab8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    uVar2 = param_4;
    func_0x00010c0e0e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054d6cb4; end: 1054d6cfb;  */

void FUN_1054d6cb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d6cfc; end: 1054d6cff; -[SCScopeGraphMemoryReporter reportAllScopeGraphMappingsBuilt] */

void FUN_1054d6cfc(void)

{
  return;
}



/* Entry: 1054d6d00; end: 1054d6d03; -[SCScopeGraphMemoryReporter reportBuildDurationForScopeGraphMapping:duration:] */

void FUN_1054d6d00(void)

{
  return;
}



/* Entry: 1054d6d04; end: 1054d6e0b; -[SCScopeGraphMemoryReporter reportBeginForLifecycle:duration:appEventSignals:isOnStartupPath:startupType:] */

void FUN_1054d6d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d6e0c; end: 1054d6e3f;  */

void FUN_1054d6e0c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be39f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d6e40; end: 1054d6e43; -[SCScopeGraphMemoryReporter reportBeginForEntryPoint:ofType:inLifecycle:duration:appEventSignals:isOnStartupPath:startupType:startupToPage:] */

void FUN_1054d6e40(void)

{
  return;
}



/* Entry: 1054d6e44; end: 1054d6e47; -[SCScopeGraphMemoryReporter reportProvideForServiceProvider:duration:isOnStartupPath:startupType:startupToPage:] */

void FUN_1054d6e44(void)

{
  return;
}



/* Entry: 1054d6e48; end: 1054d6e4b; -[SCScopeGraphMemoryReporter reportBeginInitiatedForEntryPoint:ofType:inLifecycle:afterSeconds:appEventSignals:] */

void FUN_1054d6e48(void)

{
  return;
}



/* Entry: 1054d6e4c; end: 1054d6f23; -[SCScopeGraphMemoryReporter reportEndForLifecycle:duration:] */

void FUN_1054d6e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d6f24; end: 1054d6f57;  */

void FUN_1054d6f24(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d6f58; end: 1054d6f5b; -[SCScopeGraphMemoryReporter reportEndForEntryPoint:duration:] */

void FUN_1054d6f58(void)

{
  return;
}



/* Entry: 1054d6f5c; end: 1054d6f5f; -[SCScopeGraphMemoryReporter reportEndInitiatedForEntryPoint:inLifecycle:afterSeconds:] */

void FUN_1054d6f5c(void)

{
  return;
}



/* Entry: 1054d6f60; end: 1054d6f63; -[SCScopeGraphMemoryReporter reportPageFaultsForEntryPoint:pageFaults:] */

void FUN_1054d6f60(void)

{
  return;
}



/* Entry: 1054d6f64; end: 1054d6f67; -[SCScopeGraphMemoryReporter reportPageInsForEntryPoint:pageIns:] */

void FUN_1054d6f64(void)

{
  return;
}



/* Entry: 1054d6f68; end: 1054d6f6b; -[SCScopeGraphMemoryReporter reportOverExposedScope:inLifecycle:] */

void FUN_1054d6f68(void)

{
  return;
}



/* Entry: 1054d6f6c; end: 1054d6f6f; -[SCScopeGraphMemoryReporter reportOverRemovedScope:inLifecycle:] */

void FUN_1054d6f6c(void)

{
  return;
}



/* Entry: 1054d6f70; end: 1054d6f73; -[SCScopeGraphMemoryReporter reportDuplicateLifecycle:] */

void FUN_1054d6f70(void)

{
  return;
}



/* Entry: 1054d6f74; end: 1054d6f77; -[SCScopeGraphMemoryReporter reportNilAccessForScopedAccessClass:] */

void FUN_1054d6f74(void)

{
  return;
}



/* Entry: 1054d6f78; end: 1054d6f7b; -[SCScopeGraphMemoryReporter reportNeverEndingEntryPoint:] */

void FUN_1054d6f78(void)

{
  return;
}



/* Entry: 1054d6f7c; end: 1054d6f7f; -[SCScopeGraphMemoryReporter reportTaskEventsInfoErrorWithEntryPoint:pageType:] */

void FUN_1054d6f7c(void)

{
  return;
}



/* Entry: 1054d6f80; end: 1054d7057; -[SCScopeGraphMemoryReporter _didUpdateMemoryUsageStatus:] */

void FUN_1054d6f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d7058; end: 1054d7097;  */

void FUN_1054d7058(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ca3a0(uVar2);
  func_0x00010bedb8a0(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054d7098; end: 1054d7203; -[SCScopeGraphMemoryReporter _updateMemoryTrackerForTrackedLifecycles:] */

void FUN_1054d7098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
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
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf433a0(puVar1,param_2,uVar4);
        _objc_release(uVar4);
        if (puVar5 == (undefined *)0x1) {
          func_0x00010c220220(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = puVar1;
  func_0x00010beb6c60(puVar1,param_2,puVar6);
  if ((int)puVar5 != 0) {
    uVar4 = *(undefined8 *)(puVar1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar4,param_2,puVar1,puVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1054d7204; end: 1054d727f; -[SCScopeGraphMemoryReporter _initMemoryTrackerForLifecycle:] */

void FUN_1054d7204(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6c60(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3,param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054d7280; end: 1054d73c7; -[SCScopeGraphMemoryReporter _reportMemoryUsageForLifecycle:] */

void FUN_1054d7280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    lVar3 = param_1;
    func_0x00010be70500(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b9eb0;
    func_0x00010bf05ae0(PTR_PTR_1126b9eb0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de5f98,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    puVar4 = puVar6;
    func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110db95d8,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar7 = lVar2;
    func_0x00010c0b4fe0();
    lVar1 = lVar7 + 0x3ff;
    if (-1 < lVar7) {
      lVar1 = lVar7;
    }
    func_0x00010bef9180(uVar5,param_2,puVar4,lVar1 >> 10);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054d73c8; end: 1054d7527; -[SCScopeGraphMemoryReporter _shouldTrackLifecycle:] */

undefined8 FUN_1054d73c8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c098bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar3 = 0;
LAB_1054d74d8:
      _objc_release(param_1);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return uVar3;
      }
      ___stack_chk_fail();
      if (lRam00000001136bc7d0 != -1) {
        func_0x00010002a2fc(0x1136bc7d0,&PTR___NSConcreteGlobalBlock_110891020);
      }
      uVar3 = uRam00000001136bc7c8;
      _objc_retain(uRam00000001136bc7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
      return uVar3;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      func_0x00010c25ce40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bfdcf80();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        uVar3 = 1;
        goto LAB_1054d74d8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1054d7528; end: 1054d757b; -[SCScopeGraphMemoryReporter lifecycleAllowlist] */

void FUN_1054d7528(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136bc7d0 != -1) {
    func_0x00010002a2fc(0x1136bc7d0,&PTR___NSConcreteGlobalBlock_110891020);
  }
  uVar1 = uRam00000001136bc7c8;
  _objc_retain(uRam00000001136bc7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054d757c; end: 1054d7593;  */

void FUN_1054d757c(void)

{
  undefined8 uVar1;
  
  uVar1 = puRam00000001136bc7c8;
  puRam00000001136bc7c8 = PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054d7594; end: 1054d7637; -[SCScopeGraphMemoryReporter _parseScopeFromLifecycle:] */

void FUN_1054d7594(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcde98;
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dcde98);
  lVar3 = param_3;
  func_0x00010c260c20(param_3,param_2,lVar1 - (long)ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar3;
  func_0x00010bf44740(lVar3,param_2,&PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1054d7638; end: 1054d76d7; -[SCScopeGraphMemoryReporter .cxx_destruct] */

void FUN_1054d7638(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054d76d8; end: 1054d7887; -[SCSnapSavingServiceProvider _snapSavingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d76d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = param_1 + _DAT_1127248a0;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar7);
  puVar3 = PTR_PTR_1126b1348;
  _objc_alloc(PTR_PTR_1126b1348);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar8 = 0;
    lVar7 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127248ac);
    _objc_retain(uVar8);
    lVar7 = param_1 + _DAT_1127248a8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bf398e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127248b4;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010bfcdfa0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_1127248b0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c26b280(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048580(puVar3,param_2,uVar8,lVar1,lVar2,lVar4,lVar6);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054d7888; end: 1054d78b7;  */

void FUN_1054d7888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 1054d78b8; end: 1054d7a23; -[SCSnapSavingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d78b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127248b4);
  _objc_destroyWeak(param_1 + _DAT_1127248a0);
  _objc_destroyWeak(param_1 + _DAT_1127248b0);
  _objc_storeStrong(param_1 + _DAT_1127248ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127248a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127248a4);
  return;
}



/* Entry: 1054d7a24; end: 1054d7b67; -[SCContentManagerServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d7a24(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lStack_40;
  undefined *puStack_38;
  
  lVar6 = (long)_DAT_1127248bc;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126e8ac0;
    plVar5 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127248c8;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(long **)(param_1 + lVar7) = plVar2;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c23b4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(plVar2);
    func_0x00010c26d0c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    plVar5 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1054d7b68; end: 1054d7b83;  */

undefined8 FUN_1054d7b68(long param_1)

{
  func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



/* Entry: 1054d7b84; end: 1054d7e1b; -[SCContentManagerServicesEntryPoint _createContentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d7b84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_PTR_1126b7f00;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1054d7e1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127248b8);
  lVar5 = param_1 + _DAT_1127248e4;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f280(puVar1,param_2,lVar4,uVar13,0,0,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b7f20;
  _objc_alloc();
  lVar5 = param_1 + _DAT_1127248e8;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010c0b83c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028300(puVar7,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar5);
  puVar12 = PTR_PTR_1126b7f88;
  lVar5 = param_1;
  func_0x0001054d7e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d5880();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x0001054d7e64(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf265c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1054d7e1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54340(puVar12,param_2,puVar1,lVar4,lVar9,puVar7,lVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1054d7e1c; end: 1054d7e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d7e1c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127248cc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054d7e88; end: 1054d7f5f; -[SCContentManagerServicesEntryPoint _createBufferedContentFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d7e88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b7f70;
  lVar1 = param_1;
  func_0x0001054d7e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d5880();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127248bc);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54320(puVar6,param_2,lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054d7f60; end: 1054d80c7; -[SCContentManagerServicesEntryPoint _createCachePolicyManager] */

void FUN_1054d7f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar10 = PTR_PTR_1126b9ed0;
  uVar1 = param_1;
  func_0x0001054d7e64();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf265c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001054d7e1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054d7e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0d5880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54480(puVar10,param_2,uVar3,uVar6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1054d80c8; end: 1054d81b7; -[SCContentManagerServicesEntryPoint _createStorageManager] */

void FUN_1054d80c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b9ed8;
  uVar1 = param_1;
  func_0x0001054d7e64();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf265c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054d7e1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54460(puVar6,param_2,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054d81b8; end: 1054d8287; -[SCContentManagerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d81b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127248c0,0);
  _objc_storeStrong(param_1 + _DAT_1127248c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127248e8);
  _objc_destroyWeak(param_1 + _DAT_1127248e4);
  _objc_destroyWeak(param_1 + _DAT_1127248e0);
  _objc_destroyWeak(param_1 + _DAT_1127248dc);
  _objc_destroyWeak(param_1 + _DAT_1127248d8);
  _objc_destroyWeak(param_1 + _DAT_1127248d4);
  _objc_destroyWeak(param_1 + _DAT_1127248d0);
  _objc_destroyWeak(param_1 + _DAT_1127248cc);
  _objc_storeStrong(param_1 + _DAT_1127248c8,0);
  _objc_storeStrong(param_1 + _DAT_1127248b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127248bc,0);
  return;
}



/* Entry: 1054d8288; end: 1054d89df; -[StreamingManifestParser parseManifest:] */

void FUN_1054d8288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  double dVar20;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c140700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b9ee0;
  _objc_alloc();
  func_0x00010c008240();
  puVar11 = PTR_PTR_1126b9638;
  if (puVar4 == (undefined *)0x0) {
    puVar10 = PTR_PTR_1126b7fb0;
    _objc_alloc(PTR_PTR_1126b7fb0);
    func_0x00010c010880();
    func_0x00010bfbaba0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar11 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        lVar17 = *(long *)((long)puVar16 * 8);
        lVar19 = lVar17;
        func_0x00010c29a5e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar19 != 0) {
          lVar19 = lVar17;
          func_0x00010c29a5e0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010bee7f00(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar19);
          puVar15 = PTR_PTR_1126b9ee8;
          _objc_alloc(PTR_PTR_1126b9ee8);
          lVar19 = lVar17;
          func_0x00010c29a5e0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar19;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf15780(lVar17);
          func_0x00010c05a1c0(puVar15);
          func_0x00010befa120(puVar10);
          _objc_release(puVar15);
          _objc_release(lVar7);
          _objc_release(lVar19);
          _objc_release(lVar6);
        }
        lVar19 = lVar17;
        func_0x00010bf0f2c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar19 != 0) {
          lVar19 = lVar17;
          func_0x00010bf0f2c0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010bee7f00(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar19);
          puVar15 = PTR_PTR_1126b9ee8;
          _objc_alloc(PTR_PTR_1126b9ee8);
          lVar19 = lVar17;
          func_0x00010bf0f2c0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar19;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf15780(lVar17);
          func_0x00010c05a1c0(puVar15);
          func_0x00010befa120(puVar10);
          _objc_release(puVar15);
          _objc_release(lVar7);
          _objc_release(lVar19);
          _objc_release(lVar6);
        }
        puVar16 = puVar16 + 1;
      } while (puVar11 != puVar16);
      puVar11 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bfe6460();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar11 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar13 = *(undefined8 *)((long)puVar16 * 8);
        uVar2 = uVar13;
        func_0x00010bfe6440(uVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_1;
        func_0x00010bee7f00(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar15 = PTR_PTR_1126b9ee8;
        _objc_alloc(PTR_PTR_1126b9ee8);
        uVar2 = uVar13;
        func_0x00010bfe6440(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf15780(uVar13);
        func_0x00010c05a1c0(puVar15);
        func_0x00010befa120(puVar10);
        _objc_release(puVar15);
        _objc_release(uVar8);
        _objc_release(uVar2);
        _objc_release(lVar19);
        puVar16 = puVar16 + 1;
      } while (puVar11 != puVar16);
      puVar11 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 0.0;
    puVar16 = puVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar16;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar11 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar16);
        }
        lVar19 = *(long *)((long)puVar15 * 8);
        func_0x00010bf8b160(lVar19);
        if (dVar20 <= 0.0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          func_0x00010bf8b160(lVar19);
          dVar20 = dVar20 * 1000.0;
          puVar18 = PTR_PTR_1126b7f98;
          _objc_alloc(PTR_PTR_1126b7f98);
          func_0x00010c04b840();
        }
        lVar17 = lVar19;
        func_0x00010bf25ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar17 == 0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          lVar17 = lVar19;
          func_0x00010bf25ec0(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f4c0();
          _objc_release(lVar17);
          puVar14 = PTR_PTR_1126b7f98;
          _objc_alloc(PTR_PTR_1126b7f98);
          func_0x00010c04b840();
        }
        puVar9 = PTR_PTR_1126b9ef0;
        _objc_alloc(PTR_PTR_1126b9ef0);
        func_0x00010c28f340(lVar19);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar19;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05a0a0(puVar9);
        func_0x00010befa120(puVar5);
        _objc_release(puVar9);
        _objc_release(lVar17);
        _objc_release(lVar19);
        _objc_release(puVar14);
        _objc_release(puVar18);
        puVar15 = puVar15 + 1;
      } while (puVar11 != puVar15);
      puVar11 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(puVar16);
    puVar11 = PTR_PTR_1126b9638;
    puVar16 = PTR_PTR_1126b9ef8;
    _objc_alloc(PTR_PTR_1126b9ef8);
    func_0x00010c060720();
    func_0x00010bfbaec0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar10);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c297690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9f00,PTR_s_variantNameFromUrl__1126837c8);
  return;
}



/* Entry: 1054d89e0; end: 1054d89eb; -[StreamingManifestParser _variantNameFromUrl:] */

void FUN_1054d89e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b9f00,PTR_s_variantNameFromUrl__1126837c8);
  return;
}



/* Entry: 1054d89ec; end: 1054d89f7; -[StreamingManifestParser .cxx_destruct] */

void FUN_1054d89ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054d89f8; end: 1054d8abf;  */

void FUN_1054d89f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054d8ac0; end: 1054d8c1b; -[SCSnapDocManagerEntryPoint _createSnapDocManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d8ac0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126b9f10;
  _objc_alloc(PTR_PTR_1126b9f10);
  lVar2 = param_1;
  FUN_1054d8c1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be5e5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be5e5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127248f8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010bf398e0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112724900;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010c26b280(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003140(puVar1,param_2,lVar3,lVar4,lVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054d8c1c; end: 1054d8c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d8c1c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127248fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054d8c40; end: 1054d8cdb; -[SCSnapDocManagerEntryPoint _createMediaReferenceFactory] */

void FUN_1054d8c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9f18;
  _objc_alloc(PTR_PTR_1126b9f18);
  uVar2 = param_1;
  FUN_1054d8c1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5e5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003120(puVar1,param_2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054d8cdc; end: 1054d8dc7; -[SCSnapDocManagerEntryPoint _createSnapDocThumbnailResolverFromMediaResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d8cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127248f4;
  _objc_retain(param_3);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b9f20;
  _objc_alloc(PTR_PTR_1126b9f20);
  FUN_1054d8c1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047900(puVar3,param_2,param_3,lVar4,lVar2);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054d8dc8; end: 1054d8eaf; -[SCSnapDocManagerEntryPoint _mediaContextTypeToTTLInDays] */

void FUN_1054d8dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0088);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x1e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c00a0);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c00b8,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c00d0);
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c00e8,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0100);
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0118,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054d8eb0; end: 1054d8eef; -[SCSnapDocManagerEntryPoint _mediaContextTypeToIsFirstFrameRequired] */

void FUN_1054d8eb0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054d8ef0; end: 1054d8f5b; -[SCSnapDocManagerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054d8ef0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724904);
  _objc_storeStrong(param_1 + _DAT_1127248f0,0);
  _objc_destroyWeak(param_1 + _DAT_112724900);
  _objc_destroyWeak(param_1 + _DAT_1127248f4);
  _objc_destroyWeak(param_1 + _DAT_1127248fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127248f8);
  return;
}



/* Entry: 1054d8f5c; end: 1054d8fcf; -[SCACFItem isValidACFItem] */

undefined * FUN_1054d8f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b9f28;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c129e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082ee0(puVar2,param_2,param_1);
    _objc_release(param_1);
  }
  return puVar2;
}



/* Entry: 1054d8fd0; end: 1054d90e3; +[SCACFItem isValidACFItems:] */

bool FUN_1054d8fd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar7 * 8);
        func_0x00010c082b60();
        if (iVar1 == 0) {
          bVar5 = false;
          goto LAB_1054d909c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  bVar5 = true;
LAB_1054d909c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar5;
  }
  ___stack_chk_fail();
  lVar2 = param_3;
  func_0x00010bf4c4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf4c4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_3;
      func_0x00010bf4c4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0c46a0();
      _objc_release(lVar6);
      _objc_release(lVar2);
      if (lVar7 != 5) {
        lVar2 = param_3;
        func_0x00010bf4c4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010bf4d200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar6 != 0) {
          lVar2 = param_3;
          func_0x00010bf4c4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar2;
          func_0x00010bf4c8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c0c46a0();
          lVar3 = param_3;
          func_0x00010bf4c4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0c46a0();
          _objc_release(lVar3);
          _objc_release(lVar6);
          _objc_release(lVar2);
          if (lVar7 == lVar4) {
            func_0x00010bf4c4e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010c27d160();
            _objc_release(param_3);
            return lVar2 != 0;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1054d90e4; end: 1054d926f; -[SCACFRemoteAsset isValidRemoteAsset] */

bool FUN_1054d90e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bf4c4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf4c4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bf4c4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0c46a0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 5) {
        lVar1 = param_1;
        func_0x00010bf4c4e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf4d200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = param_1;
          func_0x00010bf4c4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf4c8a0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0c46a0();
          lVar4 = param_1;
          func_0x00010bf4c4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c0c46a0();
          _objc_release(lVar4);
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar3 == lVar5) {
            func_0x00010bf4c4e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = param_1;
            func_0x00010c27d160();
            _objc_release(param_1);
            return lVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}



/* Entry: 1054d9270; end: 1054d9383; +[SCACFRemoteAsset isValidRemoteAssets:] */

long * FUN_1054d9270(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,long param_7,long param_8)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined *puStack_178;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  plVar4 = &lStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_3);
  puVar5 = auStack_c8;
  lVar6 = 0x10;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        iVar2 = (int)*(undefined8 *)(lStack_108 + lVar9 * 8);
        func_0x00010c082ec0();
        if (iVar2 == 0) {
          plVar7 = (long *)0x0;
          goto LAB_1054d933c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      puVar5 = auStack_c8;
      lVar6 = 0x10;
      lVar3 = param_3;
      plVar4 = &lStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  plVar7 = (long *)0x1;
LAB_1054d933c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  plVar1 = plStack_100;
  lVar8 = lStack_108;
  lVar3 = lStack_110;
  _objc_retain(plVar4);
  _objc_retain(puVar5);
  _objc_retain(lVar6);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(lVar3);
  _objc_retain(lVar8);
  _objc_retain(plVar1);
  puStack_178 = PTR_PTR_1126e8ad0;
  plVar7 = &lStack_180;
  lStack_180 = param_3;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_retain(plVar4);
    lVar9 = plVar7[1];
    plVar7[1] = (long)plVar4;
    _objc_release(lVar9);
    _objc_retain(lVar6);
    lVar9 = plVar7[7];
    plVar7[7] = lVar6;
    _objc_release(lVar9);
    _objc_retain(param_6);
    lVar9 = plVar7[8];
    plVar7[8] = param_6;
    _objc_release(lVar9);
    _objc_retain(param_7);
    lVar9 = plVar7[9];
    plVar7[9] = param_7;
    _objc_release(lVar9);
    _objc_retain(param_8);
    lVar9 = plVar7[3];
    plVar7[3] = param_8;
    _objc_release(lVar9);
    _objc_retain(lVar3);
    lVar9 = plVar7[4];
    plVar7[4] = lVar3;
    _objc_release(lVar9);
    _objc_retain(lVar8);
    lVar9 = plVar7[5];
    plVar7[5] = lVar8;
    _objc_release(lVar9);
    _objc_retain(plVar1);
    lVar9 = plVar7[6];
    plVar7[6] = (long)plVar1;
    _objc_release(lVar9);
    plVar7[10] = 0;
    func_0x00010be39860(plVar7);
    _objc_initWeak(auStack_188,plVar7);
    lVar9 = plVar7[6];
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(lVar9);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(plVar1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(plVar4);
  return plVar7;
}



/* Entry: 1054d9384; end: 1054d95ef; -[SCAdaptiveContentFetcher initWithCircumstanceEngine:experimentReader:acfConfigKey:defaultAcfConfig:featureProvidedSignals:contentDeliveryLazy:simpleContentFetcherLazy:externalFetchersList:queue:] */

undefined8 *
FUN_1054d9384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126e8ad0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    puVar1[10] = 0;
    func_0x00010be39860(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = puVar1[6];
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 1054d95f0; end: 1054d9623;  */

void FUN_1054d95f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4cd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d9624; end: 1054d96b3; -[SCAdaptiveContentFetcher fetchContentResultForItemId:] */

void FUN_1054d9624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  FUN_1054d96b4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xd0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054d96b4; end: 1054d9763;  */

void FUN_1054d96b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc(PTR_PTR_1126ae560);
    func_0x00010c01bf20();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054d9764; end: 1054d97f3; -[SCAdaptiveContentFetcher fetchContentResultForRemoteAssetContentKey:] */

void FUN_1054d9764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  FUN_1054d96b4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xd0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054d97f4; end: 1054d9883; -[SCAdaptiveContentFetcher fetchContentStatusForRemoteAssetContentKey:] */

void FUN_1054d97f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  FUN_1054d96b4(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xd0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054d9884; end: 1054d99db; -[SCAdaptiveContentFetcher resolveNewAssetListForACFItemId:remoteAssetList:] */

void FUN_1054d9884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc();
  func_0x00010c01bf20();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1054d99dc;
  puStack_70 = &UNK_110850cf8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(puVar1);
  puStack_58 = puVar1;
  func_0x000100a0df38(uVar3,&puStack_88);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054d99dc; end: 1054d9a13;  */

void FUN_1054d99dc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d9a14; end: 1054d9acb; -[SCAdaptiveContentFetcher setFeatureState:] */

void FUN_1054d9a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054d9acc;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000100a0df38(uVar1,&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054d9acc; end: 1054d9aff;  */

void FUN_1054d9acc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054d9b00; end: 1054d9bd7; -[SCAdaptiveContentFetcher setFeatureProvidedSignals:] */

void FUN_1054d9b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054d9bd8;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100a0df38(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054d9bd8; end: 1054d9c53;  */

void FUN_1054d9bd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be4cd80();
    _objc_release(lVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea5000();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


