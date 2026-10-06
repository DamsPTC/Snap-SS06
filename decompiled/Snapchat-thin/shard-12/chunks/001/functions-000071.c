/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ceef30; end: 108ceefb3; -[SCVideoTranscodingSpectaclesConfigurationProvider _cameraSize] */

undefined1  [16] FUN_108ceef30(long param_1)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x70);
  }
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c07f940();
  _objc_release(uVar4);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    uVar5 = 0;
    dVar6 = 0.0;
    dVar1 = 0.0;
    if ((uVar2 & 1) == 0) goto LAB_108ceef88;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x88);
    dVar6 = *(double *)(lVar3 + 0x90);
    if ((int)uVar2 == 0) goto LAB_108ceef88;
    dVar1 = dVar6 * 0.5;
  }
  dVar6 = dVar1;
LAB_108ceef88:
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 108ceefb4; end: 108cef05b; -[SCVideoTranscodingSpectaclesConfigurationProvider targetSizeForSending] */

void FUN_108ceefb4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x70);
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010c07ccc0();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126fe458;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_targetSizeForSending_112678270);
  }
  else {
    func_0x00010c26a100(param_1);
    NEON_fmov(0x3fe0000000000000,8);
  }
  return;
}



/* Entry: 108cef05c; end: 108cef313; -[SCVideoTranscodingSpectaclesConfigurationProvider targetSizeForSaving] */

undefined1  [16] FUN_108cef05c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  long lStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x70);
  }
  _objc_retain(uVar6);
  uVar2 = uVar6;
  func_0x00010c07ccc0();
  _objc_release(uVar6);
  if ((uVar2 & 1) == 0) {
    puStack_48 = PTR_PTR_1126fe458;
    lStack_50 = param_1;
    auVar13 = _objc_msgSendSuper2(&lStack_50,PTR_s_targetSizeForSaving_112678268);
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      dVar12 = 0.0;
      dVar8 = 0.0;
    }
    else {
      dVar8 = *(double *)(lVar5 + 0x98);
      dVar12 = *(double *)(lVar5 + 0xa0);
    }
    auVar13._8_8_ = dVar12;
    auVar13._0_8_ = dVar8;
    bVar1 = false;
    if ((dVar8 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(dVar12) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = dVar12 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      auVar13 = func_0x00010bdd9480(param_1);
      dVar12 = auVar13._8_8_;
      dVar8 = auVar13._0_8_;
      if (*(long *)(param_1 + 8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x70);
      }
      _objc_retain(uVar6);
      uVar2 = uVar6;
      func_0x00010c06e8e0();
      _objc_release(uVar6);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_1 + 8) == 0) ||
           (dVar9 = *(double *)(*(long *)(param_1 + 8) + 0x30), dVar9 == 0.0)) {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = dVar12;
          auVar13 = auVar10 << 0x40;
        }
        else if (dVar9 == INFINITY) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = dVar8;
        }
        else {
          auVar13._8_8_ = dVar12;
          auVar13._0_8_ = dVar12 * dVar9;
          if (dVar8 <= dVar12 * dVar9) {
            auVar13._8_8_ = dVar8 / dVar9;
            auVar13._0_8_ = dVar8;
          }
        }
      }
      else {
        if (dVar12 <= dVar8) {
          dVar12 = dVar8;
        }
        if (*(long *)(param_1 + 8) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x70);
        }
        _objc_retain(uVar7);
        uVar3 = uVar7;
        func_0x00010bfda740();
        _objc_release(uVar7);
        if ((int)uVar3 != 0) {
          dVar12 = dVar12 + (double)(long)(dVar12 * 0.025 * 0.125) * 8.0 * -2.0;
        }
        if (*(long *)(param_1 + 8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x70);
        }
        _objc_retain(lVar5);
        lVar4 = lVar5;
        func_0x00010c299740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar5);
        lVar5 = *(long *)(param_1 + 8);
        if (lVar4 == 0) {
          if (lVar5 == 0) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = *(double *)(lVar5 + 0x30);
          }
          dVar9 = (double)_hypot(0x3ff0000000000000,dVar8);
          auVar10 = NEON_fmov(0x3fc0000000000000,8);
          auVar11 = NEON_fmov(0x4020000000000000,8);
          auVar13._8_8_ = (double)(long)((dVar12 / dVar9) * auVar10._8_8_) * auVar11._8_8_;
          auVar13._0_8_ = (double)(long)(dVar8 * (dVar12 / dVar9) * auVar10._0_8_) * auVar11._0_8_;
        }
        else {
          if (lVar5 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar5 + 0x70);
          }
          _objc_retain(uVar7);
          uVar3 = uVar7;
          func_0x00010c299740(uVar7);
          _objc_retainAutoreleasedReturnValue();
          dVar8 = (double)func_0x00010c0f0ba0();
          _objc_release(uVar3);
          _objc_release(uVar7);
          dVar12 = dVar12 + (double)(long)(dVar8 * (dVar12 / (dVar8 * -2.0 + 1.0)) * 0.125) * 8.0;
          auVar13._8_8_ = dVar12;
          auVar13._0_8_ = dVar12;
        }
      }
    }
  }
  return auVar13;
}



/* Entry: 108cef314; end: 108cef363; -[SCVideoTranscodingSpectaclesConfigurationProvider transcodingCodecType] */

void FUN_108cef314(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010beb44c0();
  if ((int)uVar1 != 0) {
    puStack_28 = PTR_PTR_1126fe458;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_transcodingCodecType_11267c1f0);
  }
  return;
}



/* Entry: 108cef364; end: 108cef36b; -[SCVideoTranscodingSpectaclesConfigurationProvider enableStereoAudio] */

undefined8 FUN_108cef364(void)

{
  return 1;
}



/* Entry: 108cef36c; end: 108cef38f; -[SCVideoTranscodingSpectaclesConfigurationProvider maxFrameRate] */

long FUN_108cef36c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x40);
    lVar1 = 0x3c;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  return 0x3c;
}



/* Entry: 108cef390; end: 108cef4a7; -[SCVideoTranscodingSpectaclesConfigurationProvider _targetBitrateForSpectaclesVideoWithTargetSize:bitsPerPixel:] */

long FUN_108cef390(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(long *)(param_4 + 8);
  if (lVar1 == 0) {
    dVar6 = 10.0;
    dVar3 = param_1 * param_2 * 10.0;
    dVar5 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar5 = *(double *)(lVar1 + 0x18);
    dVar6 = *(double *)(lVar1 + 0x28);
    if (dVar6 <= 0.0) {
      dVar6 = 10.0;
    }
    dVar3 = param_1 * param_2 * dVar6;
    dVar7 = (double)*(long *)(lVar1 + 0x48);
  }
  dVar7 = dVar3 * param_3 - dVar7;
  dVar4 = dVar3 * 0.71;
  if (dVar3 * 0.71 <= dVar7) {
    dVar4 = dVar7;
  }
  fVar2 = (float)((double)(long)dVar4 / dVar6);
  dVar7 = (double)(ulong)(uint)fVar2;
  if (dVar5 <= 1.1920928955078125e-07) {
LAB_108cef434:
    dVar5 = param_1 * param_2 * 7.09;
    if (dVar5 <= (double)SUB84(dVar7,0)) {
      dVar7 = (double)(ulong)(uint)(float)dVar5;
    }
    dVar5 = dVar7;
    if (lVar1 == 0) goto LAB_108cef468;
  }
  else {
    if ((lVar1 == 0) || (*(char *)(lVar1 + 8) != '\x01')) {
      dVar7 = (double)(ulong)(uint)fVar2;
      if (dVar5 <= (double)fVar2) {
        dVar7 = (double)(ulong)(uint)(float)dVar5;
      }
      goto LAB_108cef434;
    }
    dVar5 = param_1 * param_2 * 7.09;
    if (dVar5 <= (double)fVar2) {
      fVar2 = (float)dVar5;
    }
    dVar7 = (double)(ulong)(uint)fVar2;
  }
  dVar5 = (double)(ulong)(uint)(SUB84(dVar7,0) * 5.0);
  if (0.0 <= *(double *)(lVar1 + 0x38)) {
    dVar5 = dVar7;
  }
LAB_108cef468:
  fVar2 = SUB84(dVar5,0);
  func_0x00010bdd44c0(dVar5);
  return (long)(dVar5 * (double)fVar2);
}



/* Entry: 108cef4a8; end: 108cef4bf; -[SCVideoTranscodingSpectaclesConfigurationProvider _bitRateMultiplier] */

undefined8 FUN_108cef4a8(void)

{
  func_0x00010beb2460();
  return 0x3ff0000000000000;
}



/* Entry: 108cef4c0; end: 108cef4c7; -[SCVideoTranscodingSpectaclesConfigurationProvider _shouldLeverageDefaultCodecType] */

undefined8 FUN_108cef4c0(void)

{
  return 0;
}



/* Entry: 108cef4c8; end: 108cef563; -[SCVideoTranscodingSpectaclesConfigurationProvider _shoudEnableTranscodingBitrateMultiplier] */

byte FUN_108cef4c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x70);
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010c06e8e0();
  if ((uVar1 & 1) != 0) {
    bVar4 = 0;
    goto LAB_108cef52c;
  }
  if (*(long *)(param_1 + 8) == 0) {
    _objc_retain(0);
    lVar3 = 0;
LAB_108cef55c:
    bVar4 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x60);
    _objc_retain(lVar3);
    if (lVar3 == 0) goto LAB_108cef55c;
    bVar4 = *(byte *)(lVar3 + 0x13) ^ 1;
  }
  _objc_release(lVar3);
LAB_108cef52c:
  _objc_release(uVar2);
  return bVar4 & 1;
}



/* Entry: 108cef564; end: 108cef5d7; -[SCMediaCapabilityDetectorImpl initWithSCDevice:] */

undefined1 * FUN_108cef564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cef5d8; end: 108cef5df; -[SCMediaCapabilityDetectorImpl supportsHEVC] */

void FUN_108cef5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isSimilarToIphone7orNewer_1125fd280);
  return;
}



/* Entry: 108cef5e0; end: 108cef607; -[SCMediaCapabilityDetectorImpl .cxx_destruct] */

void FUN_108cef5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cef608; end: 108cef67f;  */

void FUN_108cef608(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar3 = (undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ef2418,0,0);
    uVar1 = (int)lVar2 - 1;
    puVar3 = (undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
    if (uVar1 < 3) {
      puVar3 = (undefined8 *)(&PTR__AVVideoProfileLevelH264Main41_110ac1e08)[uVar1];
    }
  }
  uVar4 = *puVar3;
  _objc_retain(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108cef680; end: 108cef6ab; +[SCGrapheneTranscodeConfigMetric spotlightAvcReasons] */

void FUN_108cef680(void)

{
  _objc_alloc(PTR_PTR_1126dbb90);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cef6ac; end: 108cef74b; -[SCGrapheneTranscodeConfigMetric description] */

void FUN_108cef6ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef2438;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ef2438,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fe468;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108cef74c; end: 108cef90b; -[SCGrapheneRegistry transcodeConfigGraphene] */

void FUN_108cef74c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108cef7d4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e418 != -1) {
    func_0x000107c27d9c(0x11372e418,&puStack_48);
  }
  uVar1 = uRam000000011372e410;
  _objc_retain(uRam000000011372e410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cef90c; end: 108cef917;  */

bool FUN_108cef90c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108cef918; end: 108cef993;  */

undefined * FUN_108cef918(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e428 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef2498,
                        &UNK_10df9fa68,&UNK_10df9fa84,3,FUN_108cef994,0);
    do {
      if (puRam000000011372e428 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e428;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e428,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e428 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e428;
}



/* Entry: 108cef994; end: 108cef99f;  */

bool FUN_108cef994(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108cef9a0; end: 108cefa1b;  */

undefined * FUN_108cef9a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e430 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef24b8,
                        &UNK_10df9fa90,&UNK_10df9fab8,4,FUN_108cefa1c,0);
    do {
      if (puRam000000011372e430 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e430;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e430,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e430 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e430;
}



/* Entry: 108cefa1c; end: 108cefa27;  */

bool FUN_108cefa1c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108cefa28; end: 108cefaa3;  */

undefined * FUN_108cefa28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e438 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef24d8,
                        &UNK_10df9fac8,&UNK_10df9faf8,3,FUN_108cefaa4,0);
    do {
      if (puRam000000011372e438 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e438;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e438,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e438 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e438;
}



/* Entry: 108cefaa4; end: 108cefaaf;  */

bool FUN_108cefaa4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108cefab0; end: 108cefb17; +[VideoTranscodingConfiguration descriptor] */

void FUN_108cefab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf340,
                        &PTR____CFConstantStringClassReference_110ef24f8,&PTR_DAT_113296a28,
                        &PTR_s_resolutionWidth_113296be0,5,0x20,0x1c);
    puRam000000011372e440 = puVar1;
  }
  return;
}



/* Entry: 108cefb18; end: 108cefb7f; +[Codec descriptor] */

void FUN_108cefb18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf390,
                        &PTR____CFConstantStringClassReference_110ef2518,&PTR_DAT_113296a28,
                        &PTR_s_profile_113296a60,2,0xc,0x1c);
    puRam000000011372e448 = puVar1;
  }
  return;
}



/* Entry: 108cefb80; end: 108cefbe7; +[EncoderCodecConfiguration descriptor] */

void FUN_108cefb80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf3e0,
                        &PTR____CFConstantStringClassReference_110ef2538,&PTR_DAT_113296a28,
                        &PTR_DAT_113296a40,1,0x10,0x1c);
    puRam000000011372e450 = puVar1;
  }
  return;
}



/* Entry: 108cefbe8; end: 108cefc4f; +[ConfigurationCategory descriptor] */

void FUN_108cefbe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf430,
                        &PTR____CFConstantStringClassReference_110ef2558,&PTR_DAT_113296a28,
                        &PTR_DAT_113296ae0,4,0x28,0x1c);
    puRam000000011372e458 = puVar1;
  }
  return;
}



/* Entry: 108cefc50; end: 108cefcb7; +[ImageTranscodingConfiguration descriptor] */

void FUN_108cefc50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf480,
                        &PTR____CFConstantStringClassReference_110ef2578,&PTR_DAT_113296a28,
                        &PTR_s_resolutionWidth_113296b60,4,0x18,0x1c);
    puRam000000011372e460 = puVar1;
  }
  return;
}



/* Entry: 108cefcb8; end: 108cefd1f; +[ImageCodec descriptor] */

void FUN_108cefcb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbf4d0,
                        &PTR____CFConstantStringClassReference_110ef2598,&PTR_DAT_113296a28,
                        &PTR_DAT_113296aa0,2,0xc,0x1c);
    puRam000000011372e468 = puVar1;
  }
  return;
}



/* Entry: 108cefd20; end: 108cefe37; -[SCMultiSnapCollectionViewFlowLayout initialLayoutAttributesForAppearingItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cefd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  long lVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_initialLayoutAttributesForAppear_112527a18;
  ppuVar2 = &puStack_60;
  if (param_5[_DAT_11277ad14] == '\x01') {
    puStack_58 = PTR_PTR_1126fe470;
    puStack_60 = param_5;
    _objc_retain(param_7);
    _objc_msgSendSuper2(&puStack_60,puVar1,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    param_5 = (undefined1 *)ppuVar2;
  }
  else {
    _objc_retain(param_7);
    func_0x00010c08c980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar3 = param_7;
    func_0x00010c0840e0(param_7);
    _objc_release(param_7);
    func_0x00010c19f0e0((double)(lVar3 + -1) * 60.0 + 15.5,param_2,param_3,param_4,param_5);
    func_0x00010c227920(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108cefe38; end: 108cefe47; -[SCMultiSnapCollectionViewFlowLayout disableAppearanceAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cefe38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277ad14);
}



/* Entry: 108cefe48; end: 108cefe57; -[SCMultiSnapCollectionViewFlowLayout setDisableAppearanceAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cefe48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ad14) = param_3;
  return;
}



/* Entry: 108cefe58; end: 108ceff8b; -[SCMultiSnapCollectionView initWithFrame:] */

undefined1 *
FUN_108cefe58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR_PTR_1126dbb98;
  _objc_opt_new(PTR_PTR_1126dbb98);
  func_0x00010c1f7ac0();
  func_0x00010c1c8300(0x4014000000000000,puVar1);
  func_0x00010c1f93e0(0x403e000000000000,0x4034000000000000,0x4020000000000000,0x4034000000000000,
                      puVar1);
  puStack_58 = PTR_PTR_1126fe478;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c167a00(puVar2);
    func_0x00010c167680(puVar2);
    func_0x00010c2026e0(puVar2);
    func_0x00010c2025c0(puVar2);
    func_0x00010c1fbe00(puVar2);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 108ceff8c; end: 108ceffcf; -[SCMultiSnapCollectionView setContentSize:] */

void FUN_108ceff8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be76de0();
  puStack_28 = PTR_PTR_1126fe478;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setContentSize__11263e410);
  return;
}



/* Entry: 108ceffd0; end: 108cf0013; -[SCMultiSnapCollectionView setDisableAppearanceAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceffd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ad18) = param_3;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cf0014; end: 108cf008f; -[SCMultiSnapCollectionView changeLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cf0014(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x4053800000000000;
  if (param_3 == 0) {
    uVar2 = 0x4046000000000000;
  }
  uVar3 = 0x4046000000000000;
  if (param_3 == 0) {
    uVar3 = 0x4053800000000000;
  }
  lVar1 = param_1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6260(uVar2,uVar3);
  _objc_release(lVar1);
  *(char *)(param_1 + _DAT_11277ad1c) = (char)param_3;
  return;
}



/* Entry: 108cf0090; end: 108cf0153; -[SCMultiSnapCollectionView _preferredContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108cf0090(double param_1,double param_2,long param_3)

{
  char cVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar2 = param_3;
  func_0x00010bf4de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    cVar1 = *(char *)(param_3 + _DAT_11277ad1c);
    param_2 = param_1;
    func_0x00010bf322a0(param_3);
    param_2 = param_2 + -15.5;
    dVar3 = 39.0;
    if (cVar1 == '\0') {
      dVar3 = 22.0;
    }
    dVar3 = param_2 - dVar3;
    func_0x00010c106b60(param_3);
    param_1 = param_1 + dVar3;
  }
  else {
    func_0x00010bf4de80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1069a0();
    _objc_release(param_3);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108cf0154; end: 108cf01bb; -[SCMultiSnapCollectionView cardsContentLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cf0154(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_1;
  func_0x00010c0deec0(param_1,param_2,0);
  dVar2 = 78.0;
  if (*(char *)(param_1 + _DAT_11277ad1c) == '\0') {
    dVar2 = 44.0;
  }
  return dVar2 * (double)lVar1 + 31.0 + (double)(lVar1 + -1) * 16.0;
}



/* Entry: 108cf01bc; end: 108cf0227; -[SCMultiSnapCollectionView lastCardCenterOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108cf01bc(long param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = param_1;
  func_0x00010c0deec0(param_1,param_2,0);
  dVar2 = 78.0;
  if (*(char *)(param_1 + _DAT_11277ad1c) == '\0') {
    dVar2 = 44.0;
  }
  return dVar2 * ((double)lVar1 + -0.5) + 15.5 + (double)(lVar1 + -1) * 16.0;
}



/* Entry: 108cf0228; end: 108cf024f; -[SCMultiSnapCollectionView secondLastCardCenterOffset] */

double FUN_108cf0228(double param_1)

{
  func_0x00010c0884c0();
  return param_1 + -44.0 + -16.0;
}



/* Entry: 108cf0250; end: 108cf0277; -[SCMultiSnapCollectionView preferredHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cf0250(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4053800000000000;
  if (*(char *)(param_1 + _DAT_11277ad1c) == '\0') {
    uVar1 = 0x405b000000000000;
  }
  return uVar1;
}



/* Entry: 108cf0278; end: 108cf0413; -[SCMultiSnapCollectionView pointInside:withEvent:] */

byte FUN_108cf0278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar1 = param_1;
  func_0x00010c29fc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1);
  _objc_release(uVar1);
  if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
    func_0x00010c2a00c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf97e80(param_1);
    _objc_release(param_1);
    bVar2 = *(byte *)(puStack_78 + 3);
    _objc_release(param_3);
  }
  else {
    bVar2 = 1;
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 108cf0414; end: 108cf0523;  */

void FUN_108cf0414(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_2);
  func_0x00010bf51200(uVar1,uVar2,param_2);
  uVar1 = param_2;
  func_0x00010c102b20();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 108cf0524; end: 108cf0533; -[SCMultiSnapCollectionView disableAppearanceAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cf0524(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277ad18);
}



/* Entry: 108cf0534; end: 108cf0553; -[SCMultiSnapCollectionView contentWidthDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cf0534(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ad20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cf0554; end: 108cf0567; -[SCMultiSnapCollectionView setContentWidthDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cf0554(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ad20,param_3);
  return;
}



/* Entry: 108cf0568; end: 108cf0577; -[SCMultiSnapCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cf0568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277ad20);
  return;
}



/* Entry: 108cf0578; end: 108cf065b; -[SCMultiSnapSegmentImpl initWithThumbnail:editedThumbnail:thumbnailTime:timeRange:] */

undefined1 *
FUN_108cf0578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe480;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar3 = param_5[1];
    uVar2 = *param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_5[2];
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar3 = param_6[1];
    uVar2 = *param_6;
    uVar4 = param_6[2];
    uVar6 = param_6[5];
    uVar5 = param_6[4];
    *(undefined8 *)((long)puVar1 + 0x78) = param_6[3];
    *(undefined8 *)((long)puVar1 + 0x70) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x88) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar3 = param_6[1];
    uVar2 = *param_6;
    uVar4 = param_6[2];
    uVar6 = param_6[5];
    uVar5 = param_6[4];
    *(undefined8 *)((long)puVar1 + 0xa8) = param_6[3];
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar4;
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar6;
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x98) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cf065c; end: 108cf0707; -[SCMultiSnapSegmentImpl initWithThumbnail:thumbnailTime:] */

undefined8
FUN_108cf065c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [48];
  
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _objc_retain(param_3);
  _CMTimeRangeMake(auStack_60,&uStack_80,&uStack_a0);
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  func_0x00010c051ce0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108cf0708; end: 108cf0767; -[SCMultiSnapSegmentImpl initWithTimeRange:trimmedTimeRange:editedThumbnails:thumbnailFutures:] */

void FUN_108cf0708(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  uStack_18 = param_3[5];
  uStack_20 = param_3[4];
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  uStack_88 = 0x100000001;
  uStack_90 = 2;
  uStack_80 = 0;
  func_0x00010c0525c0(param_1,param_2,&uStack_40,&uStack_70,param_5,param_6,&uStack_90);
  return;
}



/* Entry: 108cf0768; end: 108cf0877; -[SCMultiSnapSegmentImpl initWithTimeRange:trimmedTimeRange:editedThumbnails:thumbnailFutures:minimumSegmentDuration:] */

undefined1 *
FUN_108cf0768(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe480;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    uVar4 = param_3[2];
    uVar6 = param_3[5];
    uVar5 = param_3[4];
    *(undefined8 *)((long)puVar1 + 0x78) = param_3[3];
    *(undefined8 *)((long)puVar1 + 0x70) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x88) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x80) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x68) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    if (((((*(byte *)((long)param_4 + 0xc) & 1) == 0) ||
         ((*(byte *)((long)param_4 + 0x24) & 1) == 0)) || (param_4[5] != 0)) ||
       ((long)param_4[3] < 0)) {
      param_4 = param_3;
    }
    uVar3 = param_4[1];
    uVar2 = *param_4;
    uVar4 = param_4[2];
    uVar6 = param_4[5];
    uVar5 = param_4[4];
    *(undefined8 *)((long)puVar1 + 0xa8) = param_4[3];
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar4;
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar6;
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x98) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar3 = param_7[1];
    uVar2 = *param_7;
    *(undefined8 *)((long)puVar1 + 0x58) = param_7[2];
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108cf0878; end: 108cf087f; -[SCMultiSnapSegmentImpl setUniqueId:] */

void FUN_108cf0878(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108cf0880; end: 108cf08f7; -[SCMultiSnapSegmentImpl setTrimmedTimeRange:] */

void FUN_108cf0880(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  puVar1 = &uStack_50;
  _CMTimeRangeEqual(puVar1,&uStack_80);
  if ((int)puVar1 != 0) {
    param_3 = (undefined8 *)(param_1 + 0x60);
  }
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar4 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0xa8) = param_3[3];
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return;
}



/* Entry: 108cf08f8; end: 108cf08ff; -[SCMultiSnapSegmentImpl editedThumbnail] */

undefined8 FUN_108cf08f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cf0900; end: 108cf0907; -[SCMultiSnapSegmentImpl editedThumbnails] */

undefined8 FUN_108cf0900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cf0908; end: 108cf090f; -[SCMultiSnapSegmentImpl thumbnail] */

undefined8 FUN_108cf0908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cf0910; end: 108cf0923; -[SCMultiSnapSegmentImpl thumbnailTime] */

void FUN_108cf0910(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 108cf0924; end: 108cf0937; -[SCMultiSnapSegmentImpl timeRange] */

void FUN_108cf0924(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x68);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[5] = *(undefined8 *)(param_2 + 0x88);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cf0938; end: 108cf094b; -[SCMultiSnapSegmentImpl trimmedTimeRange] */

void FUN_108cf0938(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  param_1[5] = *(undefined8 *)(param_2 + 0xb8);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108cf094c; end: 108cf095f; -[SCMultiSnapSegmentImpl minimumSegmentDuration] */

void FUN_108cf094c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x58);
  return;
}



/* Entry: 108cf0960; end: 108cf0967; -[SCMultiSnapSegmentImpl thumbnailFutures] */

undefined8 FUN_108cf0960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cf0968; end: 108cf096f; -[SCMultiSnapSegmentImpl uniqueId] */

undefined8 FUN_108cf0968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cf0970; end: 108cf09b7; -[SCMultiSnapSegmentImpl .cxx_destruct] */

void FUN_108cf0970(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cf09b8; end: 108cf0ae3; -[SCMultiSnapConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_108cf09b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fe488;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x18) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    *(undefined2 *)((long)puVar1 + 0x31) = 0x101;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cf0ae4; end: 108cf0bef; -[SCMultiSnapConfigurationImpl setSegments:] */

void FUN_108cf0ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  func_0x00010c0d3c80();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar2,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      func_0x00010c21b740();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = uVar2;
      func_0x00010c280560(uVar2);
      func_0x00010c0df780(puVar4,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar8,param_2,puVar3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
  return;
}



/* Entry: 108cf0bf0; end: 108cf0c17; -[SCMultiSnapConfigurationImpl segments] */

void FUN_108cf0bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cf0c18; end: 108cf0d2b; -[SCMultiSnapConfigurationImpl timeRanges] */

void FUN_108cf0c18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108cf0cb4;
  puStack_30 = &UNK_110ac1e20;
  _objc_retain();
  puStack_28 = puVar2;
  func_0x00010bf97e80(uVar1,param_2,&puStack_48);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cf0d2c; end: 108cf0e0f; -[SCMultiSnapConfigurationImpl forceSplittedTimeRanges] */

void FUN_108cf0d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
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
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMakeWithSeconds(&uStack_38,0x4024000000000000,10);
  _CMTimeMakeWithSeconds(&uStack_50,0x4026000000000000,10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108cf0e10;
  puStack_90 = &UNK_110ac1e50;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_70 = uStack_40;
  uStack_60 = uStack_30;
  uStack_68 = uStack_38;
  uStack_58 = uStack_28;
  puStack_88 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97e80(uVar3,param_2,&puStack_a8);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_88);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cf0e10; end: 108cf105b;  */

void FUN_108cf0e10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_90,param_2);
  }
  uStack_d8 = uStack_70;
  uStack_e0 = uStack_78;
  uStack_d0 = uStack_68;
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = &uStack_e0;
  _CMTimeCompare(puVar4,&uStack_130);
  iVar3 = (int)puVar4;
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uVar7 = uStack_130;
  uVar1 = uStack_128;
  uVar2 = uStack_120;
  uStack_130 = uStack_78;
  uStack_128 = uStack_70;
  uStack_120 = uStack_68;
  while (PTR__OBJC_CLASS___NSValue_1126afdf8 = puVar5, -1 < iVar3) {
    uStack_a8 = 0x100000001;
    uStack_b0 = 2;
    uStack_a0 = 0;
    uStack_78 = uStack_130;
    uStack_70 = uStack_128;
    uStack_68 = uStack_120;
    _CMTimeSubtract(&uStack_e0,&uStack_130,&uStack_b0);
    uStack_128 = *(undefined8 *)(param_1 + 0x48);
    uStack_130 = *(undefined8 *)(param_1 + 0x40);
    uStack_120 = *(undefined8 *)(param_1 + 0x50);
    _CMTimeMinimum(&uStack_b0,&uStack_130,&uStack_e0);
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_120 = uStack_80;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_f0 = uStack_a0;
    _CMTimeRangeMake(&uStack_e0,&uStack_130,&uStack_100);
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    _CMTimeRangeGetEnd(&uStack_100,&uStack_130);
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    _CMTimeRangeGetEnd(auStack_148,&uStack_130);
    _CMTimeRangeFromTimeToTime(&uStack_130,&uStack_100,auStack_148);
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7);
    _objc_release(puVar5);
    uStack_d8 = uStack_70;
    uStack_e0 = uStack_78;
    uStack_d0 = uStack_68;
    uStack_128 = *(undefined8 *)(param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x28);
    uStack_120 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = &uStack_e0;
    _CMTimeCompare(puVar4,&uStack_130);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar7 = uStack_130;
    uVar1 = uStack_128;
    uVar2 = uStack_120;
    uStack_130 = uStack_78;
    uStack_128 = uStack_70;
    uStack_120 = uStack_68;
    iVar3 = (int)puVar4;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = uStack_130;
  uStack_130 = uVar7;
  uStack_c0 = uStack_128;
  uStack_128 = uVar1;
  uStack_b8 = uStack_120;
  uStack_120 = uVar2;
  uStack_e0 = uStack_90;
  uStack_d8 = uStack_88;
  uStack_d0 = uStack_80;
  uStack_78 = uStack_c8;
  uStack_70 = uStack_c0;
  uStack_68 = uStack_b8;
  func_0x00010c297240(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 108cf105c; end: 108cf1173; -[SCMultiSnapConfigurationImpl timeRangesForCameraRollSaving] */

void FUN_108cf105c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108cf10fc;
  puStack_30 = &UNK_110ac1e20;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(uVar3,param_2,&puStack_48);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cf1174; end: 108cf1263; -[SCMultiSnapConfigurationImpl forceSplittedTimeRangesCount] */

undefined8 FUN_108cf1174(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  _CMTimeMakeWithSeconds(auStack_58,0x4024000000000000,10);
  _CMTimeMakeWithSeconds(auStack_70,0x4026000000000000,10);
  func_0x00010bf97e80(*(undefined8 *)(param_1 + 8));
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 108cf1264; end: 108cf1443;  */

void FUN_108cf1264(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_70,param_2);
  }
  uStack_b8 = uStack_50;
  uStack_c0 = uStack_58;
  uStack_b0 = uStack_48;
  uStack_108 = *(undefined8 *)(param_1 + 0x30);
  uStack_110 = *(undefined8 *)(param_1 + 0x28);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  puVar5 = &uStack_c0;
  _CMTimeCompare(puVar5,&uStack_110);
  iVar4 = (int)puVar5;
  uVar1 = uStack_110;
  uVar2 = uStack_108;
  uVar3 = uStack_100;
  uStack_110 = uStack_58;
  uStack_108 = uStack_50;
  uStack_100 = uStack_48;
  while (uStack_58 = uStack_110, uStack_50 = uStack_108, uStack_48 = uStack_100, -1 < iVar4) {
    uStack_88 = 0x100000001;
    uStack_90 = 2;
    uStack_80 = 0;
    _CMTimeSubtract(&uStack_c0,&uStack_110,&uStack_90);
    uStack_108 = *(undefined8 *)(param_1 + 0x48);
    uStack_110 = *(undefined8 *)(param_1 + 0x40);
    uStack_100 = *(undefined8 *)(param_1 + 0x50);
    _CMTimeMinimum(&uStack_90,&uStack_110,&uStack_c0);
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_100 = uStack_60;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    _CMTimeRangeMake(&uStack_c0,&uStack_110,&uStack_e0);
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    _CMTimeRangeGetEnd(&uStack_e0,&uStack_110);
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_e8 = uStack_48;
    uStack_f0 = uStack_50;
    _CMTimeRangeGetEnd(auStack_128,&uStack_110);
    _CMTimeRangeFromTimeToTime(&uStack_110,&uStack_e0,auStack_128);
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    uStack_b8 = uStack_f0;
    uStack_c0 = uStack_f8;
    uStack_b0 = uStack_e8;
    uStack_108 = *(undefined8 *)(param_1 + 0x30);
    uStack_110 = *(undefined8 *)(param_1 + 0x28);
    uStack_100 = *(undefined8 *)(param_1 + 0x38);
    puVar5 = &uStack_c0;
    _CMTimeCompare(puVar5,&uStack_110);
    uVar1 = uStack_110;
    uVar2 = uStack_108;
    uVar3 = uStack_100;
    uStack_110 = uStack_58;
    uStack_108 = uStack_50;
    uStack_100 = uStack_48;
    iVar4 = (int)puVar5;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
  uStack_110 = uVar1;
  uStack_108 = uVar2;
  uStack_100 = uVar3;
  _objc_release(param_2);
  return;
}



/* Entry: 108cf1444; end: 108cf149f; -[SCMultiSnapConfigurationImpl isLongSnap] */

bool FUN_108cf1444(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = param_1;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 1) {
    func_0x00010bfb4f60(param_1);
    bVar3 = 1 < param_1;
  }
  else {
    bVar3 = false;
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 108cf14a0; end: 108cf15d7; -[SCMultiSnapConfigurationImpl anySegmentTrimmed] */

undefined1 * FUN_108cf14a0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        lVar9 = *(long *)(lStack_108 + lVar11 * 8);
        if (lVar9 == 0) {
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010c26f620(&uStack_140,lVar9);
          func_0x00010c27c900(&uStack_170,lVar9);
        }
        puVar2 = &uStack_140;
        _CMTimeRangeEqual(puVar2,&uStack_170);
        if ((int)puVar2 == 0) {
          puVar7 = (undefined1 *)0x1;
          goto LAB_108cf1598;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar6;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar7 = (undefined1 *)0x0;
  }
LAB_108cf1598:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_290;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lVar6 = *(long *)(lVar6 + 8);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_280;
    do {
      lVar11 = 0;
      do {
        if (*plStack_280 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        lVar3 = *(long *)(lStack_288 + lVar11 * 8);
        func_0x00010c26db80();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar9 == 0) {
          puVar7 = (undefined1 *)0x0;
          goto LAB_108cf16bc;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar6;
      puVar2 = &uStack_290;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined1 *)0x1;
LAB_108cf16bc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010befa120(*(undefined8 *)(lVar6 + 8));
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
  func_0x00010c21b740(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(lVar6 + 8));
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  func_0x00010c280560(puVar2);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return (undefined1 *)puVar2;
}



/* Entry: 108cf15d8; end: 108cf16ff; -[SCMultiSnapConfigurationImpl segmentsHaveThumbnailFutures] */

undefined1 * FUN_108cf15d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        lVar1 = *(long *)(lStack_118 + lVar11 * 8);
        func_0x00010c26db80();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        if (lVar2 == 0) {
          puVar8 = (undefined1 *)0x0;
          goto LAB_108cf16bc;
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar7;
      puVar6 = &uStack_120;
      func_0x00010bf52a60(lVar7,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  puVar8 = (undefined1 *)0x1;
LAB_108cf16bc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010befa120(*(undefined8 *)(lVar7 + 8),param_2,puVar6);
  *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
  func_0x00010c21b740(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)(lVar7 + 8);
  func_0x00010bf529e0(lVar3);
  func_0x00010c0df840(puVar4,param_2,lVar3 + -1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  puVar8 = (undefined1 *)puVar6;
  func_0x00010c280560(puVar6);
  func_0x00010c0df780(puVar5,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar9,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return (undefined1 *)puVar6;
}



/* Entry: 108cf1700; end: 108cf17c3; -[SCMultiSnapConfigurationImpl addMultiSnapSegment:] */

void FUN_108cf1700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  func_0x00010c21b740(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0(lVar1);
  func_0x00010c0df840(puVar2,param_2,lVar1 + -1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108cf17c4; end: 108cf184b; -[SCMultiSnapConfigurationImpl updateSegment:atIndex:] */

void FUN_108cf17c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0dfd40(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c280560();
  _objc_release(uVar2);
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  func_0x00010c21b740(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cf184c; end: 108cf19ab; -[SCMultiSnapConfigurationImpl totalContentDuration] */

void FUN_108cf184c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_2 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        if (*(long *)(lStack_118 + lVar6 * 8) == 0) {
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_150);
        }
        uStack_168 = param_1[1];
        uStack_170 = *param_1;
        uStack_160 = param_1[2];
        uStack_188 = uStack_130;
        uStack_190 = uStack_138;
        uStack_180 = uStack_128;
        _CMTimeAdd(param_1,&uStack_170,&uStack_190);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar4 + 8);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a5e0();
  _objc_release(uVar3);
  return;
}



/* Entry: 108cf19ac; end: 108cf1a07; -[SCMultiSnapConfigurationImpl updateSegmentTrimmedTimeRange:atIndex:] */

void FUN_108cf19ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a5e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 108cf1a08; end: 108cf1b37; -[SCMultiSnapConfigurationImpl deleteSegmentAtIndex:] */

void FUN_108cf1a08(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c280560();
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  *(undefined1 *)(param_1 + 0x30) = 1;
  while( true ) {
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (uVar5 <= param_3) break;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c280560();
    func_0x00010c0df780(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1,param_2,puVar6,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar6);
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 108cf1b38; end: 108cf1dbf; -[SCMultiSnapConfigurationImpl generateThumbnailsForDemotedStatesWithAVAsset:] */

void FUN_108cf1b38(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar2 = lVar1;
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      func_0x00010bf8b160(auStack_a0,param_4);
      _CMTimeGetSeconds(auStack_a0);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      if (0.0 < param_1 + -1.0) {
        dVar8 = 0.0;
        do {
          puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          _CMTimeMakeWithSeconds(auStack_a0,dVar8,600);
          func_0x00010c297200(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar5);
          dVar8 = dVar8 + 10.0;
        } while (dVar8 < param_1 + -1.0);
      }
      func_0x00010bf8b160(auStack_b8,param_4);
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(auStack_a0,&uStack_d0,auStack_b8);
      puVar5 = PTR_PTR_1126affb0;
      func_0x000107c2a980();
      func_0x00010bfc04a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ae558;
      func_0x00010beffb40(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      _objc_retain(puVar3);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010bfbc3e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_108cf1d88;
    }
  }
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
LAB_108cf1d88:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108cf1dc0; end: 108cf1e7b;  */

void FUN_108cf1dc0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126affb8;
    _objc_alloc(PTR_PTR_1126affb8);
    func_0x00010c0525a0();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108cf1e7c; end: 108cf2433; -[SCMultiSnapConfigurationImpl generateThumbnailsForSelectedStatesWithAVAsset:withPlayerHandler:] */

void FUN_108cf1e7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  double dVar16;
  double dStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  double dStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010bf529e0();
    _objc_release(uVar15);
    if (uVar2 == 0) {
      dStack_a8 = 0.0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      dStack_c0 = 0.0;
    }
    else {
      func_0x00010c26f620(&dStack_c0,uVar2);
    }
    uStack_108 = uStack_a0;
    dStack_110 = dStack_a8;
    uStack_100 = uStack_98;
    dVar16 = dStack_a8;
    _CMTimeGetSeconds(&dStack_110);
    lVar1 = 3;
    if (3.0 <= dVar16) {
      lVar1 = 4;
    }
    lVar13 = 5;
    if (dVar16 < 4.0) {
      lVar13 = lVar1;
    }
    lVar1 = 6;
    if (dVar16 < 5.0) {
      lVar1 = lVar13;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 < (long)uVar3) {
      lVar13 = 0;
      do {
        puVar12 = PTR_PTR_1126ae558;
        uVar15 = uVar2;
        func_0x00010bf8c620(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar15;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe9ca0(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(puVar4);
        _objc_release(puVar12);
        _objc_release(uVar3);
        _objc_release(uVar15);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = 0;
      do {
        if (uVar2 == 0) {
          dStack_a8 = 0.0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          dStack_c0 = 0.0;
        }
        else {
          func_0x00010c26f620(&dStack_c0,uVar2);
        }
        uStack_d8 = uStack_a0;
        dStack_e0 = dStack_a8;
        uStack_d0 = uStack_98;
        _CMTimeMultiplyByRatio(&dStack_110,&dStack_e0,lVar13,lVar1);
        puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar5);
        uStack_b8 = uStack_108;
        dStack_c0 = dStack_110;
        uStack_b0 = uStack_100;
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar12);
        _objc_release(puVar5);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      if (0 < (long)uVar3) {
        uVar15 = 0;
        do {
          puVar5 = PTR_PTR_1126ae558;
          uVar11 = uVar2;
          func_0x00010bf8c620(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe9ca0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(puVar4);
          _objc_release(puVar5);
          _objc_release(uVar6);
          _objc_release(uVar11);
          puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (uVar2 == 0) {
            uVar11 = 0;
            dStack_110 = 0.0;
            uStack_108 = 0;
            uStack_100 = 0;
          }
          else {
            func_0x00010c26e320(&dStack_110,uVar2);
            uVar11 = uStack_108 & 0xffffffff;
          }
          _CMTimeMake(&dStack_c0,(long)((double)uVar15 * 10.0),uVar11);
          func_0x00010c297200(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(puVar12);
          _objc_release(puVar5);
          uVar15 = uVar15 + 1;
        } while (uVar3 != uVar15);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = 0;
      do {
        puVar14 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar8 = puVar14;
        _objc_opt_isKindOfClass(puVar14,puVar7);
        _objc_release(puVar14);
        if (((ulong)puVar8 & 1) != 0) {
          puVar14 = puVar12;
          func_0x00010c0dfd40(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(puVar14);
        }
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      uVar9 = param_4;
      func_0x00010c26dba0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar5;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          puVar7 = puVar5;
          func_0x00010c0dfd40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0(puVar12);
          _objc_release(puVar7);
          uVar10 = uVar9;
          func_0x00010c0dfd40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(puVar4);
          _objc_release(uVar10);
          puVar14 = puVar14 + 1;
          puVar7 = puVar5;
          func_0x00010bf529e0();
        } while (puVar14 < puVar7);
      }
      _objc_release(uVar9);
      _objc_release(puVar5);
      _objc_release(puVar12);
    }
    puVar12 = PTR_PTR_1126affb8;
    _objc_alloc(PTR_PTR_1126affb8);
    if (uVar2 == 0) {
      dStack_a8 = 0.0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      dStack_c0 = 0.0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      dStack_110 = 0.0;
    }
    else {
      func_0x00010c26f620(&dStack_c0,uVar2);
      func_0x00010c26f620(&dStack_110,uVar2);
    }
    uVar15 = uVar2;
    func_0x00010bf8c620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0525a0(puVar12);
    _objc_release(uVar2);
    _objc_release(uVar15);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108cf2434; end: 108cf25d7; -[SCMultiSnapConfigurationImpl fetchAndSetThumbnailsForCapturedSingleSegmentWithPlayerHandler:isDelayThumbnailGenerationEnabled:] */

void FUN_108cf2434(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5fa60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_4 == 0) {
    lVar3 = param_1;
    func_0x00010bfc0560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c2899c0(param_1);
    }
    func_0x00010bf43d60(puVar2);
    _objc_release(lVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108cf25d8; end: 108cf270b;  */

void FUN_108cf25d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfc0540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = uVar4;
    _objc_retain(uVar4);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108cf270c; end: 108cf27af;  */

void FUN_108cf270c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      func_0x00010c2899c0(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010bfc0560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c2899c0(lVar1);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cf27b0; end: 108cf2ce7; -[SCMultiSnapConfigurationImpl originalThumbnailsForDemotedStateAtIndex:completion:] */

void FUN_108cf27b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _dispatch_group_create();
  if (uVar3 == 0) {
    ppuStack_110 = (undefined8 **)0x0;
    ppuStack_108 = (undefined8 **)0x0;
    uStack_100 = 0;
    pppuVar5 = &ppuStack_110;
    FUN_108cfa398();
    ppuStack_c8 = (undefined8 ***)0x0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = (undefined8 ***)0x0;
    ppuStack_e0 = (undefined8 ***)0x0;
  }
  else {
    func_0x00010c27c900(&ppuStack_e0,uVar3);
    ppuStack_108 = (undefined8 **)uStack_c0;
    ppuStack_110 = ppuStack_c8;
    uStack_100 = uStack_b8;
    pppuVar5 = &ppuStack_110;
    FUN_108cfa398();
    func_0x00010c26f620(&ppuStack_e0,uVar3);
  }
  ppuStack_108 = (undefined8 **)uStack_c0;
  ppuStack_110 = ppuStack_c8;
  uStack_100 = uStack_b8;
  pppuVar6 = &ppuStack_110;
  pppuVar15 = (undefined8 ***)ppuStack_c8;
  FUN_108cfa398();
  uVar11 = uVar3;
  func_0x00010c26db80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010bf529e0();
  _objc_release(uVar11);
  if (uVar3 == 0) {
    ppuStack_110 = (undefined8 **)0x0;
    ppuStack_108 = (undefined8 **)0x0;
    uStack_100 = 0;
    _CMTimeGetSeconds(&ppuStack_110);
    ppuStack_c8 = (undefined8 ***)0x0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = (undefined8 ***)0x0;
    ppuStack_e0 = (undefined8 ***)0x0;
  }
  else {
    func_0x00010c26f620(&ppuStack_e0,uVar3);
    ppuStack_108 = ppuStack_d8;
    ppuStack_110 = ppuStack_e0;
    uStack_100 = uStack_d0;
    pppuVar15 = (undefined8 ***)ppuStack_e0;
    _CMTimeGetSeconds(&ppuStack_110);
    func_0x00010c27c900(&ppuStack_e0,uVar3);
  }
  ppuStack_108 = ppuStack_d8;
  ppuStack_110 = ppuStack_e0;
  uStack_100 = uStack_d0;
  pppuVar16 = (undefined8 ***)ppuStack_e0;
  _CMTimeGetSeconds(&ppuStack_110);
  if (uVar3 == 0) {
    ppuStack_c8 = (undefined8 ***)0x0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = (undefined8 ***)0x0;
    ppuStack_e0 = (undefined8 ***)0x0;
  }
  else {
    func_0x00010c27c900(&ppuStack_e0,uVar3);
  }
  ppuStack_108 = (undefined8 **)uStack_c0;
  ppuStack_110 = ppuStack_c8;
  uStack_100 = uStack_b8;
  pppuVar17 = (undefined8 ***)ppuStack_c8;
  _CMTimeGetSeconds(&ppuStack_110);
  lVar8 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if ((lVar8 == 1) && (0 < (long)pppuVar5)) {
    pppuVar14 = (undefined8 ***)0x0;
    do {
      if (uVar3 == 0) {
        ppuStack_c8 = (undefined8 ***)0x0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        ppuStack_d8 = (undefined8 ***)0x0;
        ppuStack_e0 = (undefined8 ***)0x0;
        ppuStack_108 = (undefined8 **)0x0;
        ppuStack_110 = (undefined8 ***)0x0;
        uStack_f8 = 0;
        uStack_100 = 0;
      }
      else {
        func_0x00010c26f620(&ppuStack_e0,uVar3);
        func_0x00010c27c900(&ppuStack_110,uVar3);
      }
      pppuVar9 = &ppuStack_e0;
      _CMTimeRangeEqual(pppuVar9,&ppuStack_110);
      dVar19 = (((double)pppuVar16 - (double)pppuVar15) +
               (double)pppuVar14 * ((double)pppuVar17 / (double)(long)pppuVar5)) / 10.0;
      if ((int)pppuVar9 != 0) {
        dVar19 = (double)pppuVar14;
      }
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x00010befa120(puVar1);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if (uVar3 == 0) {
        uVar11 = 0;
        ppuStack_c8 = (undefined8 ***)0x0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        ppuStack_d8 = (undefined8 ***)0x0;
        ppuStack_e0 = (undefined8 ***)0x0;
      }
      else {
        func_0x00010c26f620(&ppuStack_e0,uVar3);
        uVar11 = uStack_c0 & 0xffffffff;
      }
      dVar18 = (double)NEON_fminnm((double)(long)(((float)(long)dVar19 / (float)(long)pppuVar6) *
                                                 (float)(long)uVar7),0x4014000000000000);
      _CMTimeMakeWithSeconds(&ppuStack_110,(double)(long)dVar19 * 10.0,uVar11);
      func_0x00010c297200(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar10);
      uVar11 = uVar3;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf529e0();
      _objc_release(uVar11);
      if ((ulong)(long)dVar18 < uVar12) {
        ppuStack_d8 = &ppuStack_e0;
        ppuStack_e0 = (undefined8 ***)0x0;
        uStack_d0 = 0x2020000000;
        ppuStack_c8 = pppuVar14;
        _dispatch_group_enter(uVar4);
        uVar11 = uVar3;
        func_0x00010c26db80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_140 = 0xc2000000;
        pcStack_138 = FUN_108cf2ce8;
        puStack_130 = &UNK_1108e64f0;
        _objc_retain(puVar1);
        ppuStack_118 = &ppuStack_e0;
        uVar13 = uVar4;
        puStack_128 = puVar1;
        _objc_retain(uVar4);
        uStack_120 = uVar4;
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar12);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uStack_120);
        _objc_release(puStack_128);
        __Block_object_dispose(&ppuStack_e0,8);
      }
      pppuVar14 = (undefined8 ***)((long)pppuVar14 + 1);
    } while (pppuVar5 != pppuVar14);
  }
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_108cf2d24;
  puStack_168 = &UNK_11084a9e8;
  puStack_160 = puVar1;
  puStack_158 = puVar2;
  uStack_150 = param_4;
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x000107c27d98(uVar4,PTR___dispatch_main_q_11034be20,&puStack_180);
  _objc_release(puStack_158);
  _objc_release(puStack_160);
  _objc_release(uStack_150);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 108cf2ce8; end: 108cf2d23;  */

void FUN_108cf2ce8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108cf2d24; end: 108cf2d37;  */

void FUN_108cf2d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108cf2d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108cf2d38; end: 108cf2e33; -[SCMultiSnapConfigurationImpl updateCaptureSegmentWithFinalDuration:] */

void FUN_108cf2d38(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126affb8;
  _objc_alloc(PTR_PTR_1126affb8);
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_70 = param_3[2];
  _CMTimeRangeMake(auStack_60,&uStack_b0,&uStack_80);
  uVar3 = uVar1;
  func_0x00010bf8c620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_98 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  func_0x00010c0525a0(puVar2);
  _objc_release(uVar3);
  func_0x00010c2899c0(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108cf2e34; end: 108cf3017; +[SCMultiSnapConfigurationImpl generateThumbnailsFromVideoAsset:atTimes:withImageSize:] */

void FUN_108cf2e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_80 = uVar5;
  puStack_78 = (undefined8 *)uVar6;
  uStack_70 = uVar4;
  func_0x00010c1ec3e0(puVar1);
  uStack_80 = uVar5;
  puStack_78 = (undefined8 *)uVar6;
  uStack_70 = uVar4;
  func_0x00010c1ec3c0(puVar1);
  puVar2 = puVar1;
  func_0x00010c1c3cc0(param_1,param_2);
  _dispatch_group_create();
  _dispatch_group_enter();
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108cf3018;
  uStack_60 = 0x108cf3028;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_78 = &uStack_80;
  _objc_opt_new();
  puStack_58 = puVar3;
  _objc_retain(param_6);
  _objc_retain(puVar2);
  func_0x00010bfbf180(puVar1);
  _dispatch_group_wait(puVar2,0xffffffffffffffff);
  uVar4 = puStack_78[5];
  func_0x00010bf51e00(uVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108cf3018; end: 108cf302f;  */

void FUN_108cf3018(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108cf3030; end: 108cf3123;  */

void FUN_108cf3030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_6);
  if (param_5 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) goto LAB_108cf30c4;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cfe0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),puVar2,param_2
                      ,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_108cf30c4:
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                      puVar2);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 == lVar4) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108cf3124; end: 108cf3337; +[SCMultiSnapConfigurationImpl generateThumbnailFuturesFromVideoAsset:atTimes:withImageSize:] */

void FUN_108cf3124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_6;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar2 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        func_0x00010befa120(puVar1,param_4,puVar2);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c089820(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        uVar7 = uVar7 + 1;
        uVar4 = param_6;
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
    puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
    func_0x00010bff41a0();
    func_0x00010c169b80();
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_80 = uVar8;
    uStack_78 = uVar9;
    uStack_70 = uVar6;
    func_0x00010c1ec3e0(puVar2,param_4,&uStack_80);
    uStack_80 = uVar8;
    uStack_78 = uVar9;
    uStack_70 = uVar6;
    func_0x00010c1ec3c0(puVar2,param_4,&uStack_80);
    func_0x00010c1c3cc0(param_1,param_2,puVar2);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108cf3338;
    puStack_98 = &UNK_1108e8b80;
    _objc_retain(param_6);
    uStack_90 = param_6;
    puStack_88 = puVar1;
    _objc_retain(puVar1);
    func_0x00010bfbf180(puVar2,param_4,param_6,&puStack_b0);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108cf3338; end: 108cf345b;  */

void FUN_108cf3338(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_x4;
  undefined8 in_x5;
  long lVar3;
  
  _objc_retain(in_x5);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar1);
  if (lVar3 != 0x7fffffffffffffff) {
    if (in_x4 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60();
      _objc_release(uVar2);
    }
    else {
      puVar1 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0();
    }
    _objc_release(puVar1);
  }
  _objc_release(in_x5);
  return;
}



/* Entry: 108cf345c; end: 108cf35fb; +[SCMultiSnapConfigurationImpl generateThumbnailFuturesWithVideoAsset:] */

void FUN_108cf345c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  double dVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    dStack_78 = 0.0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_78,param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_58 = uStack_70;
  dStack_60 = dStack_78;
  uStack_50 = uStack_68;
  dVar5 = dStack_78;
  _CMTimeGetSeconds(&dStack_60);
  iVar4 = 3;
  if (3.0 <= dVar5) {
    iVar4 = 4;
  }
  iVar1 = 5;
  if (dVar5 < 4.0) {
    iVar1 = iVar4;
  }
  iVar4 = 6;
  if (dVar5 < 5.0) {
    iVar4 = iVar1;
  }
  uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_60 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_a8 = uStack_70;
  dStack_b0 = dStack_78;
  uStack_a0 = uStack_68;
  _CMTimeMultiplyByRatio(&uStack_90,&dStack_b0,1,iVar4);
  do {
    uStack_a8 = uStack_58;
    dStack_b0 = dStack_60;
    uStack_a0 = uStack_50;
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    uStack_a8 = uStack_58;
    dStack_b0 = dStack_60;
    uStack_a0 = uStack_50;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_c0 = uStack_80;
    _CMTimeAdd(&dStack_60,&dStack_b0,&uStack_d0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  func_0x000107c2a980();
  func_0x00010bfc04a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cf35fc; end: 108cf3607; +[SCMultiSnapConfigurationImpl generateMultiSnapSegmentsWithVideoAsset:] */

void FUN_108cf35fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc0910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generatingMultiSnapSegmentsWithD_1125cdbe8,0,param_3);
  return;
}



/* Entry: 108cf3608; end: 108cf3833; +[SCMultiSnapConfigurationImpl generatingMultiSnapSegmentsWithDelayThumbnailsGeneration:videoAsset:] */

undefined *
FUN_108cf3608(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  if (param_5 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_b0,param_5);
  }
  _CMTimeGetSeconds(&uStack_b0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (0.0 < param_1 + -1.0) {
    dVar4 = 0.0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds(&uStack_b0,dVar4,600);
      func_0x00010c297200(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      dVar4 = dVar4 + 10.0;
    } while (dVar4 < param_1 + -1.0);
  }
  if (param_5 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_e0,param_5);
  }
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(&uStack_b0,&uStack_110,&uStack_e0);
  if ((param_4 & 1) == 0) {
    func_0x000107c2a980();
    func_0x00010bfc0580(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_2 = 0;
  }
  puVar2 = PTR_PTR_1126affb8;
  _objc_alloc();
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_f8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_100 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_f0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  func_0x00010c0525a0();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)*(byte *)(param_5 + 0x30);
}



/* Entry: 108cf3834; end: 108cf383b; -[SCMultiSnapConfigurationImpl hasDeletion] */

undefined1 FUN_108cf3834(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}


