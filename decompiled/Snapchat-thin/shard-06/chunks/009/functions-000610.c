/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fb2918; end: 104fb291f;  */

void FUN_104fb2918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 104fb2920; end: 104fb2967; -[SCPulsingView didMoveToSuperview] */

void FUN_104fb2920(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e56c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010be71500(param_1);
  return;
}



/* Entry: 104fb2968; end: 104fb29af; -[SCPulsingView didMoveToWindow] */

void FUN_104fb2968(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e56c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010be71500(param_1);
  return;
}



/* Entry: 104fb29b0; end: 104fb29f7; -[SCPulsingView setHidden:] */

void FUN_104fb29b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e56c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHidden__1126479f8);
  func_0x00010be71500(param_1);
  return;
}



/* Entry: 104fb29f8; end: 104fb2a07; -[SCPulsingView startingAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb29f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718aac);
}



/* Entry: 104fb2a08; end: 104fb2a17; -[SCPulsingView setStartingAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a08(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112718aac) = param_1;
  return;
}



/* Entry: 104fb2a18; end: 104fb2a27; -[SCPulsingView alternatingAlpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb2a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ab0);
}



/* Entry: 104fb2a28; end: 104fb2a37; -[SCPulsingView setAlternatingAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112718ab0) = param_1;
  return;
}



/* Entry: 104fb2a38; end: 104fb2a57; -[SCPulsingView startingTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a38(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718ab4);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fb2a58; end: 104fb2a77; -[SCPulsingView setStartingTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112718ab4);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 104fb2a78; end: 104fb2a97; -[SCPulsingView alternatingTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a78(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718ab8);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fb2a98; end: 104fb2ab7; -[SCPulsingView setAlternatingTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2a98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112718ab8);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 104fb2ab8; end: 104fb2ac7; -[SCPulsingView pulseDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb2ab8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718abc);
}



/* Entry: 104fb2ac8; end: 104fb2ad7; -[SCPulsingView setPulseDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb2ac8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112718abc) = param_1;
  return;
}



/* Entry: 104fb2ad8; end: 104fb2b2f; -[GHAttributedObject initWithAttributes:] */

long FUN_104fb2ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104fb2b30; end: 104fb2ba7; -[GHAttributedObject initWithDictionary:] */

long FUN_104fb2b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4fc0(param_1,param_2,param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x10) = 0x7fffffffffffffff;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104fb2ba8; end: 104fb2be3; -[GHAttributedObject hash] */

/* WARNING: Possible PIC construction at 0x000104fb2bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104fb2bbc) */
/* WARNING: Removing unreachable block (ram,0x000104fb2bc8) */
/* WARNING: Removing unreachable block (ram,0x000104fb2bd4) */

void FUN_104fb2ba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf27ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_calculatedHash_1125a7858);
  return;
}



/* Entry: 104fb2be4; end: 104fb2c1f; -[GHAttributedObject calculatedHash] */

undefined8 FUN_104fb2be4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104fb2c20; end: 104fb2cd7; -[GHAttributedObject isEqual:] */

long FUN_104fb2c20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar2 = 1;
  }
  else {
    lVar2 = param_3;
    _objc_opt_class();
    lVar1 = param_1;
    _objc_opt_class();
    if (lVar2 == lVar1) {
      lVar1 = param_3;
      func_0x00010bf0e700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e700(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,param_1);
      _objc_release(param_1);
      _objc_release(lVar1);
    }
    else {
      lVar2 = 0;
    }
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 104fb2cd8; end: 104fb2cdf; -[GHAttributedObject attributes] */

undefined8 FUN_104fb2cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fb2ce0; end: 104fb2ce7; -[GHAttributedObject setCalculatedHash:] */

void FUN_104fb2ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 104fb2ce8; end: 104fb2cf3; -[GHAttributedObject .cxx_destruct] */

void FUN_104fb2ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fb2cf4; end: 104fb2d27;  */

void FUN_104fb2cf4(long param_1)

{
  _objc_retainBlock();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fb2d28; end: 104fb2db7; +[GHPathUtilities quadraticBezierLengthFromStartPoint:toEndPoint:withControlPoint:andStep:] */

double FUN_104fb2d28(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = 0.0;
  dVar1 = param_7;
  dVar2 = param_2;
  dVar3 = param_1;
  while (dVar1 <= 1.0) {
    dVar6 = 1.0 - dVar1;
    dVar7 = dVar1 * (dVar6 + dVar6);
    dVar8 = param_5 * dVar7 + param_1 * dVar6 * dVar6 + param_3 * dVar1 * dVar1;
    dVar7 = param_6 * dVar7 + param_2 * dVar6 * dVar6 + param_4 * dVar1 * dVar1;
    dVar5 = dVar5 + (double)SQRT((float)((dVar7 - dVar2) * (dVar7 - dVar2) +
                                        (dVar8 - dVar3) * (dVar8 - dVar3)));
    dVar6 = param_7 + dVar1;
    bVar4 = false;
    if ((1.0 < dVar6) && (bVar4 = false, !NAN(dVar1))) {
      bVar4 = dVar1 < 1.0;
    }
    dVar1 = 1.0;
    dVar2 = dVar7;
    dVar3 = dVar8;
    if (!bVar4) {
      dVar1 = dVar6;
    }
  }
  return dVar5;
}



/* Entry: 104fb2db8; end: 104fb2e87; +[GHPathUtilities cubicSplineLengthFromStartPoint:toEndPoint:withControlPoint1:withControlPoint2:andStep:] */

double FUN_104fb2db8(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7,double param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_stack_00000000;
  
  dVar2 = 0.0;
  if (in_stack_00000000 <= 1.0) {
    dVar2 = 0.0;
    dVar3 = in_stack_00000000;
    dVar4 = param_2;
    dVar5 = param_1;
    do {
      dVar6 = param_1 + dVar3 * (param_1 * -3.0 + param_5 * 3.0 +
                                dVar3 * (param_5 * -6.0 + param_7 * 3.0 + param_1 * 3.0 +
                                        dVar3 * ((param_3 + param_7 * -3.0 + param_5 * 3.0) -
                                                param_1)));
      dVar7 = param_2 + dVar3 * (param_2 * -3.0 + param_6 * 3.0 +
                                dVar3 * (param_6 * -6.0 + param_8 * 3.0 + param_2 * 3.0 +
                                        dVar3 * ((param_4 + param_8 * -3.0 + param_6 * 3.0) -
                                                param_2)));
      dVar5 = dVar6 - dVar5;
      dVar4 = dVar7 - dVar4;
      dVar2 = dVar2 + (double)SQRT((float)(dVar4 * dVar4 + dVar5 * dVar5));
      dVar4 = in_stack_00000000 + dVar3;
      bVar1 = false;
      if ((1.0 < dVar4) && (bVar1 = false, !NAN(dVar3))) {
        bVar1 = dVar3 < 1.0;
      }
      dVar3 = 1.0;
      if (!bVar1) {
        dVar3 = dVar4;
      }
      dVar4 = dVar7;
      dVar5 = dVar6;
    } while (dVar3 <= 1.0);
  }
  return dVar2;
}



/* Entry: 104fb2e88; end: 104fb2f6b; +[GHPathUtilities calculateCubicSplineStepFromFromStartPoint:toEndPoint:withControlPoint1:withControlPoint2:] */

double FUN_104fb2e88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_1;
  func_0x00010bf5da20(PTR_PTR_1126b3280);
  dVar5 = 0.5;
  do {
    dVar4 = dVar5;
    if (dVar4 <= 0.0009765625) {
      return dVar4;
    }
    dVar3 = param_1;
    func_0x00010bf5da20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        PTR_PTR_1126b3280);
    dVar5 = ABS(dVar3 - dVar2);
    bVar1 = false;
    if ((dVar5 < dVar3 * 0.00390625) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar2 * 0.00390625))) {
      bVar1 = dVar5 < dVar2 * 0.00390625;
    }
    dVar5 = dVar4 * 0.5;
    dVar2 = dVar3;
  } while (!bVar1);
  return dVar4;
}



/* Entry: 104fb2f6c; end: 104fb3037; +[GHPathUtilities calculateQuadraticSplineStepFromStartPoint:toEndPoint:withControlPoint:] */

double FUN_104fb2f6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = param_1;
  func_0x00010c11ce00(PTR_PTR_1126b3280);
  dVar4 = 0.5;
  do {
    dVar3 = dVar4;
    if (dVar3 <= 0.0009765625) {
      return dVar3;
    }
    dVar4 = param_1;
    func_0x00010c11ce00(param_1,param_2,param_3,param_4,param_5,param_6,dVar3,PTR_PTR_1126b3280);
    dVar5 = ABS(dVar4 - dVar2);
    bVar1 = false;
    if ((dVar5 < dVar4 * 0.00390625) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar2 * 0.00390625))) {
      bVar1 = dVar5 < dVar2 * 0.00390625;
    }
    dVar4 = dVar3 * 0.5;
  } while (!bVar1);
  return dVar3;
}



/* Entry: 104fb3038; end: 104fb30bb;  */

undefined1  [16] FUN_104fb3038(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  param_3 = param_3 - param_1;
  param_4 = param_4 - param_2;
  if (param_3 != 0.0) {
    if (param_4 == 0.0) {
      dVar2 = 1.0;
      dVar1 = 0.0;
      if (param_3 <= 0.0) {
        return ZEXT816(0xbff0000000000000) << 0x40;
      }
    }
    else {
      dVar1 = (double)SQRT((float)(param_4 * param_4 + param_3 * param_3));
      dVar2 = param_3 / dVar1;
      dVar1 = -param_4 / dVar1;
    }
    auVar3._8_8_ = dVar2;
    auVar3._0_8_ = dVar1;
    return auVar3;
  }
  if (0.0 < param_4) {
    return ZEXT816(0xbff0000000000000);
  }
  if (param_4 < 0.0) {
    return ZEXT816(0x3ff0000000000000);
  }
  return ZEXT816(0x3ff0000000000000) << 0x40;
}



/* Entry: 104fb30bc; end: 104fb30c3; -[GHText cleanLineEndings] */

undefined8 FUN_104fb30bc(void)

{
  return 1;
}



/* Entry: 104fb30c4; end: 104fb3133; -[GHText fontDescriptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104fb30c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126b3288;
  lVar3 = (long)_DAT_112718acc;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d88c0(puVar2,param_2,lVar1,0);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  return lVar1;
}



/* Entry: 104fb3134; end: 104fb3187; -[GHText fontRef] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb3134(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126b3288;
  lVar3 = (long)_DAT_112718ad0;
  if (*(long *)(param_1 + lVar3) == 0) {
    lVar1 = param_1;
    func_0x00010bfb3ce0(param_1);
    func_0x00010c0d88e0(puVar2,param_2,lVar1);
    *(undefined **)(param_1 + lVar3) = puVar2;
  }
  return;
}



/* Entry: 104fb3188; end: 104fb3ba3; -[GHText children] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_104fb3188(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **unaff_x20;
  long lVar14;
  undefined **ppuVar15;
  undefined *unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar16;
  undefined **unaff_x27;
  undefined **unaff_x28;
  float fVar17;
  double dVar18;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = (undefined **)(long)_DAT_112718ad4;
  ppuVar13 = *(undefined ***)((long)param_1 + (long)ppuVar15);
  ppuStack_140 = param_1;
  if (ppuVar13 != (undefined **)0x0) goto LAB_104fb3b54;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  unaff_x24 = ppuStack_140;
  ppuVar13 = ppuStack_140;
  func_0x00010bf4df40(ppuStack_140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  _objc_release(ppuVar13);
  ppuVar13 = unaff_x24;
  func_0x00010bfb3f80();
  ppuVar3 = unaff_x24;
  ppuStack_168 = ppuVar13;
  func_0x00010bfb3ce0();
  unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  ppuStack_170 = ppuVar3;
  _objc_alloc_init();
  ppuVar3 = unaff_x24;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuVar16 = unaff_x24;
  func_0x00010bf0e700(unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110dbf178;
  func_0x00010bf72040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  ppuStack_180 = ppuVar13;
  _objc_retain(ppuVar13);
  ppuVar13 = ppuVar3;
  func_0x00010bf529e0();
  ppuStack_1a0 = ppuVar15;
  if (ppuVar13 == (undefined **)0x1) {
    ppuVar13 = ppuVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar16 = ppuVar13;
    _objc_opt_isKindOfClass(ppuVar13,puVar2);
    if (((ulong)ppuVar16 & 1) != 0) {
      ppuVar16 = ppuVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = &PTR____CFConstantStringClassReference_110dbf198;
      ppuVar4 = ppuVar16;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = ppuVar4;
      func_0x00010bf529e0();
      _objc_release(ppuVar4);
      _objc_release(ppuVar16);
      _objc_release(ppuVar13);
      if (unaff_x24 == (undefined **)0x0) goto LAB_104fb33a8;
      ppuVar13 = ppuVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar13;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar16;
    }
    _objc_release(ppuVar13);
  }
LAB_104fb33a8:
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puStack_198 = puVar1;
  _objc_retain(ppuVar3);
  param_3 = &puStack_130;
  param_4 = apuStack_f0;
  ppuVar13 = ppuVar3;
  func_0x00010bf52a60();
  unaff_x27 = unaff_x23;
  ppuStack_190 = ppuVar3;
  if (ppuVar13 == (undefined **)0x0) {
    ppuStack_138 = ppuStack_180;
  }
  else {
    lVar14 = *plStack_120;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110dbf1b8;
    ppuStack_188 = &PTR____CFConstantStringClassReference_110dbf1d8;
    ppuStack_138 = ppuStack_180;
    lStack_158 = lVar14;
    do {
      ppuVar16 = (undefined **)0x0;
      ppuStack_178 = ppuVar13;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x28 = *(undefined ***)(lStack_128 + (long)ppuVar16 * 8);
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        ppuVar4 = unaff_x28;
        _objc_opt_isKindOfClass(unaff_x28,puVar1);
        ppuVar6 = unaff_x28;
        if (((ulong)ppuVar4 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar4 = unaff_x28;
          _objc_opt_isKindOfClass(unaff_x28,puVar1);
          if (((ulong)ppuVar4 & 1) != 0) {
            _objc_retain(unaff_x28);
            ppuVar15 = ppuStack_140;
            func_0x00010bf39f00();
            if ((int)ppuVar15 != 0) {
              ppuVar6 = (undefined **)PTR_PTR_1126b3288;
              func_0x00010bf3a1c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x28);
            }
            ppuVar7 = ppuVar6;
            func_0x00010c11f340();
            ppuVar8 = ppuVar6;
            func_0x00010c08fa60();
            ppuVar4 = (undefined **)PTR_PTR_1126b3288;
            ppuVar15 = unaff_x23;
            if ((ppuVar8 != (undefined **)0x0) && (ppuVar7 != (undefined **)0x7fffffffffffffff)) {
              ppuVar15 = ppuStack_140;
              func_0x00010bf0e700(ppuStack_140);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf0e3e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar15);
              ppuVar15 = ppuStack_138;
              ppuVar7 = ppuStack_138;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar15 == ppuStack_180) {
LAB_104fb3a00:
                func_0x00010bf069e0(unaff_x23);
              }
              else {
                ppuVar15 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar15 == (undefined **)0x0) {
                  ppuVar15 = ppuVar7;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar15 != (undefined **)0x0) goto LAB_104fb380c;
                  ppuVar15 = ppuVar7;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar15 != (undefined **)0x0) goto LAB_104fb380c;
                  ppuVar15 = ppuVar7;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar15 != (undefined **)0x0) goto LAB_104fb380c;
                  ppuVar15 = ppuVar7;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar15 != (undefined **)0x0) goto LAB_104fb380c;
                  ppuVar15 = ppuVar7;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar15 == (undefined **)0x0) goto LAB_104fb3a00;
                }
                else {
LAB_104fb380c:
                  _objc_release();
                }
                ppuVar15 = unaff_x23;
                func_0x00010c08fa60();
                if ((ppuVar15 != (undefined **)0x0) &&
                   (ppuVar15 = unaff_x23, _CTLineCreateWithAttributedString(),
                   ppuVar15 != (undefined **)0x0)) {
                  ppuVar8 = ppuStack_138;
                  func_0x00010c0dff20(ppuStack_138);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126b3290;
                  _objc_alloc(PTR_PTR_1126b3290);
                  func_0x00010bff4fe0();
                  _CFRelease(ppuVar15);
                  func_0x00010befa120(puStack_198);
                  _objc_release(puVar1);
                  ppuVar3 = ppuStack_190;
                  _objc_release(ppuVar8);
                }
                ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
                _objc_alloc();
                func_0x00010bff4f40();
                _objc_release(unaff_x23);
                unaff_x23 = ppuVar15;
              }
              ppuVar15 = ppuStack_180;
              _objc_retain(ppuStack_180);
              _objc_release(ppuStack_138);
              ppuStack_138 = ppuVar15;
              goto LAB_104fb3a28;
            }
            goto LAB_104fb3a3c;
          }
        }
        else {
          _objc_retain(unaff_x28);
          ppuVar4 = unaff_x28;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar4;
          func_0x00010c0720c0();
          if ((int)ppuVar7 == 0) {
            ppuVar7 = ppuVar4;
            func_0x00010c0720c0();
            if ((int)ppuVar7 != 0) {
              ppuVar7 = unaff_x23;
              func_0x00010c08fa60();
              puVar1 = puStack_198;
              if ((ppuVar7 != (undefined **)0x0) &&
                 (ppuVar8 = unaff_x23, _CTLineCreateWithAttributedString(), ppuVar7 = ppuStack_138,
                 puVar1 = puStack_198, ppuVar8 != (undefined **)0x0)) {
                ppuVar15 = ppuStack_138;
                func_0x00010c0dff20(ppuStack_138);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126b3290;
                _objc_alloc(PTR_PTR_1126b3290);
                func_0x00010bff4fe0();
                _CFRelease(ppuVar8);
                puVar1 = puStack_198;
                func_0x00010befa120(puStack_198);
                _objc_retain(unaff_x28);
                ppuVar13 = ppuStack_178;
                _objc_release(ppuVar7);
                ppuVar3 = ppuStack_190;
                _objc_release(puVar2);
                _objc_release(ppuVar15);
                ppuVar15 = ppuVar7;
                ppuStack_138 = unaff_x28;
              }
              ppuVar7 = (undefined **)PTR_PTR_1126b3298;
              _objc_alloc(PTR_PTR_1126b3298);
              func_0x00010c00c560();
              func_0x00010c228a60();
              func_0x00010befa120(puVar1);
              unaff_x24 = unaff_x23;
              goto LAB_104fb3a28;
            }
          }
          else {
            ppuVar7 = unaff_x28;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = unaff_x28;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuStack_140;
            func_0x00010bf39f00();
            ppuVar5 = ppuVar13;
            if ((int)ppuVar8 != 0) {
              ppuVar5 = (undefined **)PTR_PTR_1126b3288;
              func_0x00010bf3a1c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar13);
            }
            ppuVar13 = ppuVar5;
            func_0x00010c11f340();
            if (ppuVar13 != (undefined **)0x7fffffffffffffff) {
              puVar1 = PTR_PTR_1126b3288;
              func_0x00010bf0e3c0(PTR_PTR_1126b3288);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar7;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar13 == (undefined **)0x0) {
                ppuVar13 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 != (undefined **)0x0) goto LAB_104fb35b8;
                ppuVar13 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 != (undefined **)0x0) goto LAB_104fb35b8;
                ppuVar13 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 != (undefined **)0x0) goto LAB_104fb35b8;
                ppuVar13 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 != (undefined **)0x0) goto LAB_104fb35b8;
                ppuVar13 = ppuVar7;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar13 != (undefined **)0x0) goto LAB_104fb35bc;
                func_0x00010bf069e0(unaff_x23);
              }
              else {
LAB_104fb35b8:
                _objc_release();
LAB_104fb35bc:
                ppuVar13 = unaff_x23;
                func_0x00010c08fa60();
                if ((ppuVar13 != (undefined **)0x0) &&
                   (ppuVar13 = unaff_x23, _CTLineCreateWithAttributedString(),
                   ppuVar13 != (undefined **)0x0)) {
                  unaff_x24 = ppuStack_138;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = (undefined **)PTR_PTR_1126b3290;
                  _objc_alloc();
                  func_0x00010bff4fe0();
                  _CFRelease(ppuVar13);
                  func_0x00010befa120(puStack_198);
                  _objc_release(ppuVar15);
                  _objc_release(unaff_x24);
                }
                ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
                _objc_alloc();
                func_0x00010bff4f40();
                _objc_release(unaff_x23);
                _objc_retain(unaff_x28);
                _objc_release(ppuStack_138);
                unaff_x23 = ppuVar13;
                ppuStack_138 = unaff_x28;
              }
              _objc_release(puVar1);
              ppuVar3 = ppuStack_190;
            }
            _objc_release(ppuVar5);
            ppuVar13 = ppuStack_178;
LAB_104fb3a28:
            _objc_release(ppuVar7);
            lVar14 = lStack_158;
          }
          _objc_release(ppuVar4);
          unaff_x27 = ppuVar4;
LAB_104fb3a3c:
          _objc_release(ppuVar6);
          unaff_x28 = ppuVar6;
        }
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar13 != ppuVar16);
      param_3 = &puStack_130;
      param_4 = apuStack_f0;
      ppuVar13 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar13 = unaff_x23;
  func_0x00010c08fa60();
  unaff_x22 = puStack_198;
  if ((ppuVar13 != (undefined **)0x0) &&
     (ppuVar13 = unaff_x23, _CTLineCreateWithAttributedString(), ppuVar13 != (undefined **)0x0)) {
    ppuVar3 = ppuStack_138;
    func_0x00010c0dff20(ppuStack_138);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = (undefined **)PTR_PTR_1126b3290;
    _objc_alloc();
    param_4 = ppuVar13;
    func_0x00010bff4fe0();
    _CFRelease(ppuVar13);
    param_3 = ppuVar15;
    func_0x00010befa120(unaff_x22);
    _objc_release(ppuVar15);
    _objc_release(ppuVar3);
  }
  puVar1 = unaff_x22;
  func_0x00010bf51e00();
  unaff_x20 = ppuStack_140;
  ppuVar13 = ppuStack_1a0;
  uVar12 = *(undefined8 *)((long)ppuStack_140 + (long)ppuStack_1a0);
  *(undefined **)((long)ppuStack_140 + (long)ppuStack_1a0) = puVar1;
  _objc_release(uVar12);
  _objc_release(ppuStack_138);
  _objc_release(ppuStack_180);
  _objc_release(ppuStack_190);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puStack_150);
  ppuVar13 = *(undefined ***)((long)unaff_x20 + (long)ppuVar13);
LAB_104fb3b54:
  ppuVar3 = ppuVar13;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
    return ppuVar13;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_2c0;
  pcStack_1a8 = FUN_104fb3ba4;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = unaff_x28;
  ppuStack_1e8 = unaff_x27;
  ppuStack_1e0 = unaff_x24;
  ppuStack_1d8 = unaff_x23;
  puStack_1d0 = unaff_x22;
  ppuStack_1c8 = ppuVar15;
  ppuStack_1c0 = unaff_x20;
  ppuStack_1b8 = ppuVar13;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  ppuVar15 = ppuVar3;
  func_0x00010bf52a60();
  fVar17 = (float)uVar12;
  if (ppuVar15 != (undefined **)0x0) {
    lVar14 = *plStack_2b0;
    do {
      ppuVar13 = (undefined **)0x0;
      do {
        if (*plStack_2b0 != lVar14) {
          _objc_enumerationMutation(ppuVar3);
        }
        func_0x00010bef9060(*(undefined8 *)(lStack_2b8 + (long)ppuVar13 * 8));
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar15 != ppuVar13);
      ppuVar15 = ppuVar3;
      puVar11 = &uStack_2c0;
      func_0x00010bf52a60();
      fVar17 = (float)uVar12;
      unaff_x22 = (undefined *)0x0;
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(param_4);
  ppuVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    pppuVar9 = &ppuStack_300;
    pcStack_2c8 = FUN_104fb3cd4;
    puStack_2f0 = unaff_x22;
    ppuStack_2e8 = ppuVar3;
    ppuStack_2e0 = param_4;
    ppuStack_2d8 = param_3;
    ppuStack_2d0 = &puStack_1b0;
    _objc_retain(puVar11);
    puStack_2f8 = PTR_PTR_1126e56c8;
    ppuStack_300 = ppuVar15;
    _objc_msgSendSuper2(&ppuStack_300,PTR_s_initWithDictionary__1125e0b28,puVar11);
    if (pppuVar9 != (undefined ***)0x0) {
      puVar10 = (undefined1 *)puVar11;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)((long)pppuVar9 + (long)_DAT_112718ad8);
      *(undefined1 **)((long)pppuVar9 + (long)_DAT_112718ad8) = puVar10;
      _objc_release(uVar12);
      puVar1 = PTR_PTR_1126b32a0;
      func_0x00010c296fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)((long)pppuVar9 + (long)_DAT_112718adc);
      *(undefined **)((long)pppuVar9 + (long)_DAT_112718adc) = puVar1;
      _objc_release(uVar12);
      puVar1 = PTR_PTR_1126b32a0;
      func_0x00010c296fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)((long)pppuVar9 + (long)_DAT_112718ae0);
      *(undefined **)((long)pppuVar9 + (long)_DAT_112718ae0) = puVar1;
      _objc_release(uVar12);
      puVar1 = PTR_PTR_1126b32a0;
      func_0x00010c296fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c08fa60();
      if (puVar2 == (undefined *)0x0) {
        dVar18 = -1.0;
      }
      else {
        func_0x00010bfb2c80(puVar1);
        dVar18 = (double)fVar17;
      }
      *(double *)((long)pppuVar9 + (long)_DAT_112718ae4) = dVar18;
      _objc_release(puVar1);
    }
    _objc_release(puVar11);
    return (undefined **)pppuVar9;
  }
  return ppuVar15;
}



/* Entry: 104fb3ba4; end: 104fb3cd3; -[GHText addGlyphsToArray:withSVGContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fb3ba4(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  fVar10 = (float)uVar7;
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010bef9060(*(undefined8 *)(lStack_118 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
      fVar10 = (float)uVar7;
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_160;
  pcStack_128 = FUN_104fb3cd4;
  uStack_150 = unaff_x22;
  lStack_148 = param_1;
  uStack_140 = param_4;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_158 = PTR_PTR_1126e56c8;
  puStack_160 = puVar2;
  _objc_msgSendSuper2(&puStack_160,PTR_s_initWithDictionary__1125e0b28,puVar6);
  if (ppuVar3 != (undefined1 **)0x0) {
    puVar2 = (undefined1 *)puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112718ad8);
    *(undefined1 **)((long)ppuVar3 + (long)_DAT_112718ad8) = puVar2;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112718adc);
    *(undefined **)((long)ppuVar3 + (long)_DAT_112718adc) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112718ae0);
    *(undefined **)((long)ppuVar3 + (long)_DAT_112718ae0) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      dVar11 = -1.0;
    }
    else {
      func_0x00010bfb2c80(puVar4);
      dVar11 = (double)fVar10;
    }
    *(double *)((long)ppuVar3 + (long)_DAT_112718ae4) = dVar11;
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 104fb3cd4; end: 104fb3e2b; -[GHText initWithDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fb3cd4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e56c8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithDictionary__1125e0b28,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718ad8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112718ad8) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718adc);
    *(undefined **)((long)puVar1 + (long)_DAT_112718adc) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718ae0);
    *(undefined **)((long)puVar1 + (long)_DAT_112718ae0) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b32a0;
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      dVar6 = -1.0;
    }
    else {
      func_0x00010bfb2c80(puVar2);
      dVar6 = (double)param_1;
    }
    *(double *)((long)puVar1 + (long)_DAT_112718ae4) = dVar6;
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104fb3e2c; end: 104fb3e9f; -[GHText calculatedHash] */

undefined1 * FUN_104fb3e2c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126e56c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_calculatedHash_1125a7858);
  func_0x00010bf4df40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return (undefined1 *)((long)plVar1 + lVar2);
}



/* Entry: 104fb3ea0; end: 104fb3fcf; -[GHText isEqual:] */

long FUN_104fb3ea0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  iVar1 = (int)&lStack_50;
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar5 = 1;
  }
  else {
    puStack_48 = PTR_PTR_1126e56c8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_isEqual__1125fa0c8,param_3);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_1;
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf4df40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c071ae0();
      if ((int)lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        func_0x00010bf38f20(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010bf38f20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c071ae0(param_1);
        _objc_release(lVar4);
        _objc_release(param_1);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 104fb3fd0; end: 104fb4a8f; -[GHText renderIntoContext:withSVGContext:] */

undefined *
FUN_104fb3fd0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,undefined *param_8)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_160 [176];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  func_0x00010bfc31c0(param_5);
  uVar3 = param_5;
  dVar30 = param_1;
  uVar23 = param_2;
  uVar25 = param_3;
  uVar27 = param_4;
  func_0x00010bf0e700();
  fVar18 = SUB84(dVar30,0);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = param_8;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar15;
  func_0x00010c0720c0();
  puVar13 = puVar4;
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar15;
    func_0x000104fc141c();
    if ((int)uVar3 == 0) {
      uVar3 = uVar15;
      func_0x00010c08fa60();
      if (uVar3 == 0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = param_8;
        func_0x00010bf40f40();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_1b8 = (undefined *)0x0;
    }
    else {
      puVar13 = param_8;
      func_0x00010c0dfd80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b32a8;
      _objc_opt_class(PTR_PTR_1126b32a8);
      puVar16 = puVar13;
      _objc_opt_isKindOfClass(puVar13,puVar5);
      puVar5 = puVar4;
      if (((ulong)puVar16 & 1) == 0) {
        puVar16 = PTR_PTR_1126b32b0;
        _objc_opt_class(PTR_PTR_1126b32b0);
        puVar14 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar16);
        if (((ulong)puVar14 & 1) == 0) {
          puStack_1b8 = (undefined *)0x0;
        }
        else {
          puVar5 = puVar13;
          func_0x00010bf0a5a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puStack_1b8 = (undefined *)0x0;
        }
      }
      else {
        _objc_retain(puVar13);
        puStack_1b8 = puVar13;
      }
    }
  }
  else {
    puStack_1b8 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar13);
  uVar3 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar6;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar6;
    func_0x000104fc141c();
    if ((int)uVar3 != 0) {
      puVar4 = param_8;
      func_0x00010c0dfd80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126b32a8;
      _objc_opt_class(PTR_PTR_1126b32a8);
      puVar16 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar13);
      if (((ulong)puVar16 & 1) == 0) {
        puVar13 = PTR_PTR_1126b32b0;
        _objc_opt_class(PTR_PTR_1126b32b0);
        puVar16 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar13);
        if (((ulong)puVar16 & 1) == 0) {
          puStack_1a8 = (undefined *)0x0;
        }
        else {
          puStack_1a8 = puVar4;
          func_0x00010bf0a5a0();
          _objc_retainAutoreleasedReturnValue();
        }
        puStack_1b0 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar4);
        puStack_1a8 = (undefined *)0x0;
        puStack_1b0 = puVar4;
      }
      _objc_release(puVar4);
      goto LAB_104fb42ac;
    }
    uVar3 = uVar6;
    func_0x00010c08fa60();
    if (uVar3 == 0) goto LAB_104fb41d8;
    puStack_1a8 = param_8;
    func_0x00010bf40f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_104fb41d8:
    puStack_1a8 = (undefined *)0x0;
  }
  puStack_1b0 = (undefined *)0x0;
LAB_104fb42ac:
  uVar3 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar7;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    dVar30 = -1.0;
  }
  else {
    func_0x00010bfb2c80(uVar7);
    dVar30 = (double)fVar18;
  }
  puVar4 = param_8;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  _CGContextSaveGState(param_7);
  func_0x00010c27a460(auStack_160,param_5);
  _CGContextConcatCTM(param_7,auStack_160);
  dVar19 = 0.0;
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
      _objc_release(param_5);
      puVar13 = puVar4;
      func_0x00010c1870c0(param_8);
      _CGContextRestoreGState(param_7);
      _objc_release(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puStack_1a8);
      _objc_release(puStack_1b0);
      _objc_release(puVar5);
      _objc_release(puStack_1b8);
      _objc_release(uVar15);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return param_8;
      }
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar13);
      uVar29 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      uVar21 = 0;
      func_0x00010bf38f20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      puVar5 = PTR_s_getBoundingBoxWithSVGContext__1125ce618;
      while (PTR_s_getBoundingBoxWithSVGContext__1125ce618 = puVar5, puVar4 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          uVar22 = uVar21;
          uVar24 = uVar23;
          uVar26 = uVar25;
          uVar28 = uVar27;
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_8);
            uVar22 = uVar21;
            uVar24 = uVar23;
            uVar26 = uVar25;
            uVar28 = uVar27;
          }
          uVar15 = *(ulong *)((long)puVar16 * 8);
          uVar3 = uVar15;
          _objc_opt_respondsToSelector(uVar15,puVar5);
          uVar21 = uVar22;
          uVar23 = uVar24;
          uVar25 = uVar26;
          uVar27 = uVar28;
          if ((uVar3 & 1) != 0) {
            func_0x00010bfc31c0();
            _CGRectIsNull(uVar29,uVar31,uVar32,uVar33);
            if (((uVar15 & 1) == 0) &&
               (_CGRectIsNull(uVar22,uVar24,uVar26,uVar28), (uVar15 & 1) == 0)) {
              _CGRectUnion();
              uVar21 = uVar29;
              uVar23 = uVar31;
              uVar25 = uVar32;
              uVar27 = uVar33;
            }
            else {
              uVar21 = uVar22;
              uVar23 = uVar24;
              uVar25 = uVar26;
              uVar27 = uVar28;
              _CGRectIsNull();
              if ((uVar15 & 1) == 0) {
                uVar29 = uVar22;
                uVar31 = uVar24;
                uVar32 = uVar26;
                uVar33 = uVar28;
              }
            }
          }
          puVar16 = puVar16 + 1;
        } while (puVar4 != puVar16);
        puVar4 = param_8;
        func_0x00010bf52a60();
        puVar5 = PTR_s_getBoundingBoxWithSVGContext__1125ce618;
      }
      _objc_release(param_8);
      _objc_release(puVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return puVar13;
      }
      ___stack_chk_fail();
      return (undefined *)0x3;
    }
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_5);
      }
      puVar12 = *(undefined **)(uVar11 * 8);
      _objc_retain(puStack_1b8);
      _objc_retain(puVar5);
      _objc_retain(puStack_1b0);
      _objc_retain(puStack_1a8);
      puVar13 = puVar12;
      func_0x00010bfad540();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar13;
      func_0x00010c08fa60();
      _objc_release(puVar13);
      puVar13 = puVar5;
      puVar14 = puStack_1b8;
      if (puVar16 != (undefined *)0x0) {
        puVar16 = puVar12;
        func_0x00010bfad540();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar16;
        func_0x00010c0720c0();
        _objc_release(puVar16);
        if (((ulong)puVar8 & 1) == 0) {
          puVar13 = puVar12;
          func_0x00010bfad540();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar13;
          func_0x00010c0720c0();
          _objc_release(puVar13);
          if ((int)puVar16 == 0) {
            puVar13 = puVar12;
            func_0x00010bfad540();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x000104fc141c();
            _objc_release(puVar13);
            _objc_release(puStack_1b8);
            if ((int)puVar16 == 0) {
              puVar16 = puVar12;
              func_0x00010bfad540(puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = param_8;
              func_0x00010bf40f40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
            }
            else {
              _objc_release(puVar5);
              puVar13 = puVar12;
              func_0x00010bfad540(puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = param_8;
              func_0x00010c0dfd80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar13);
              puVar13 = PTR_PTR_1126b32a8;
              _objc_opt_class(PTR_PTR_1126b32a8);
              puVar8 = puVar14;
              _objc_opt_isKindOfClass(puVar14,puVar13);
              puVar16 = puVar14;
              if (((ulong)puVar8 & 1) != 0) {
                _objc_retain(puVar14);
                puVar13 = (undefined *)0x0;
                goto LAB_104fb4554;
              }
              puVar13 = PTR_PTR_1126b32b0;
              _objc_opt_class(PTR_PTR_1126b32b0);
              puVar8 = puVar14;
              _objc_opt_isKindOfClass(puVar14,puVar13);
              if (((ulong)puVar8 & 1) == 0) {
                puVar13 = (undefined *)0x0;
              }
              else {
                puVar13 = puVar14;
                func_0x00010bf0a5a0();
                _objc_retainAutoreleasedReturnValue();
              }
            }
            puVar14 = (undefined *)0x0;
          }
          else {
            _objc_release(puStack_1b8);
            puVar13 = (undefined *)0x0;
            puVar14 = (undefined *)0x0;
            puVar16 = puVar5;
          }
LAB_104fb4554:
          _objc_release(puVar16);
        }
      }
      puVar16 = puVar12;
      func_0x00010c25dc00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar16;
      func_0x00010c08fa60();
      _objc_release(puVar16);
      puVar16 = puStack_1a8;
      puVar17 = puStack_1b0;
      if (puVar8 != (undefined *)0x0) {
        puVar8 = puVar12;
        func_0x00010c25dc00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0720c0();
        _objc_release(puVar8);
        if (((ulong)puVar9 & 1) == 0) {
          puVar8 = puVar12;
          func_0x00010c25dc00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0720c0();
          _objc_release(puVar8);
          if ((int)puVar9 == 0) {
            puVar8 = puVar12;
            func_0x00010c25dc00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x000104fc141c();
            _objc_release(puVar8);
            if ((int)puVar9 == 0) {
              puVar8 = puVar12;
              func_0x00010c25dc00();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010c08fa60();
              _objc_release(puVar8);
              if (puVar9 == (undefined *)0x0) goto LAB_104fb479c;
              _objc_release(puStack_1b0);
              puVar8 = puVar12;
              func_0x00010c25dc00();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = param_8;
              func_0x00010bf40f40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_1a8);
LAB_104fb477c:
              puVar17 = (undefined *)0x0;
            }
            else {
              _objc_release(puStack_1b0);
              _objc_release(puStack_1a8);
              puVar16 = puVar12;
              func_0x00010c25dc00(puVar12);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = param_8;
              func_0x00010c0dfd80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar16);
              puVar16 = PTR_PTR_1126b32a8;
              _objc_opt_class(PTR_PTR_1126b32a8);
              puVar17 = puVar8;
              _objc_opt_isKindOfClass(puVar8,puVar16);
              if (((ulong)puVar17 & 1) == 0) {
                puVar16 = PTR_PTR_1126b32b0;
                _objc_opt_class(PTR_PTR_1126b32b0);
                puVar17 = puVar8;
                _objc_opt_isKindOfClass(puVar8,puVar16);
                if (((ulong)puVar17 & 1) != 0) {
                  puVar16 = puVar8;
                  func_0x00010bf0a5a0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_104fb477c;
                }
                puVar17 = (undefined *)0x0;
                puVar16 = (undefined *)0x0;
              }
              else {
                _objc_retain(puVar8);
                puVar16 = (undefined *)0x0;
                puVar17 = puVar8;
              }
            }
          }
          else {
            _objc_release(puStack_1b0);
            puVar16 = (undefined *)0x0;
            puVar8 = puStack_1a8;
            puVar17 = (undefined *)0x0;
          }
          _objc_release(puVar8);
        }
      }
LAB_104fb479c:
      func_0x00010c25dd80(puVar12);
      bVar1 = 0.0 < dVar19;
      dVar19 = dVar30;
      if (bVar1) {
        func_0x00010c25dd80(puVar12);
      }
      dVar34 = 3.0;
      if (0.0 <= dVar19) {
        dVar34 = dVar19;
      }
      func_0x00010c1870c0(param_8);
      if (puVar13 == (undefined *)0x0) {
        dVar20 = dVar19;
        uVar29 = uVar23;
        uVar31 = uVar25;
        uVar32 = uVar27;
        if (puVar14 != (undefined *)0x0) goto LAB_104fb4830;
      }
      else {
        func_0x00010c1870c0(param_8);
        dVar20 = dVar19;
        uVar29 = uVar23;
        uVar31 = uVar25;
        uVar32 = uVar27;
        if (puVar14 == (undefined *)0x0) {
          _CGContextSaveGState(param_7);
          puVar8 = puVar13;
          _objc_retainAutorelease(puVar13);
          func_0x00010bdc0fe0();
          _CGContextSetFillColorWithColor(param_7,puVar8);
          puVar8 = puVar13;
          _objc_retainAutorelease(puVar13);
          func_0x00010bdc0fe0();
          _CGContextSetStrokeColorWithColor(param_7,puVar8);
          func_0x00010c12fd20(puVar12);
        }
        else {
LAB_104fb4830:
          _CGContextSaveGState(param_7);
          _CGContextSetTextDrawingMode(param_7,7);
          puVar8 = puVar12;
          func_0x00010c0d8dc0();
          puVar9 = puVar8;
          _CGPathGetPathBoundingBox();
          dVar19 = dVar20;
          uVar23 = uVar29;
          uVar25 = uVar31;
          uVar27 = uVar32;
          _CGRectIsEmpty();
          if (((ulong)puVar9 & 1) == 0) {
            _CGContextClipToRect(dVar20,uVar29,uVar31,uVar32,param_7);
            _CGContextAddPath(param_7,puVar8);
            func_0x00010bfad5a0(puVar14);
            dVar19 = dVar20;
            uVar23 = uVar29;
            uVar25 = uVar31;
            uVar27 = uVar32;
          }
          _CGContextSetTextDrawingMode(param_7,0);
          _CGPathRelease(puVar8);
        }
        _CGContextRestoreGState(param_7);
      }
      if (0.0 < dVar34) {
        if (puVar17 == (undefined *)0x0) {
          if (puVar16 == (undefined *)0x0) goto LAB_104fb498c;
          _CGContextSaveGState(param_7);
          puVar8 = puVar16;
          _objc_retainAutorelease(puVar16);
          func_0x00010bdc0fe0();
          _CGContextSetStrokeColorWithColor(param_7,puVar8);
          _CGContextSetTextDrawingMode(param_7,1);
          func_0x00010c12fd20(puVar12);
        }
        else {
          _CGContextSaveGState(param_7);
          _CGContextSetTextDrawingMode(param_7,5);
          _CGContextSetLineWidth(dVar34,param_7);
          func_0x00010bef9080(puVar12);
          _CGContextReplacePathWithStrokedPath(param_7);
          _CGContextClip(param_7);
          dVar19 = param_1;
          uVar23 = param_2;
          uVar25 = param_3;
          uVar27 = param_4;
          func_0x00010bfad5a0(puVar17);
          _CGContextSetTextDrawingMode(param_7,0);
        }
        _CGContextRestoreGState(param_7);
      }
LAB_104fb498c:
      _objc_release(puVar16);
      _objc_release(puVar17);
      _objc_release(puVar13);
      _objc_release(puVar14);
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    uVar3 = param_5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104fb4a90; end: 104fb4cab; -[GHText getBoundingBoxWithSVGContext:] */

undefined8
FUN_104fb4a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar8 = 0;
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_getBoundingBoxWithSVGContext__1125ce618;
  while (PTR_s_getBoundingBoxWithSVGContext__1125ce618 = puVar1, lVar3 != 0) {
    lVar7 = 0;
    do {
      uVar9 = uVar8;
      uVar10 = param_2;
      uVar11 = param_3;
      uVar12 = param_4;
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_5);
        uVar9 = uVar8;
        uVar10 = param_2;
        uVar11 = param_3;
        uVar12 = param_4;
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      uVar4 = uVar6;
      _objc_opt_respondsToSelector(uVar6,puVar1);
      uVar8 = uVar9;
      param_2 = uVar10;
      param_3 = uVar11;
      param_4 = uVar12;
      if ((uVar4 & 1) != 0) {
        func_0x00010bfc31c0();
        _CGRectIsNull(uVar13,uVar14,uVar15,uVar16);
        if (((uVar6 & 1) == 0) && (_CGRectIsNull(uVar9,uVar10,uVar11,uVar12), (uVar6 & 1) == 0)) {
          _CGRectUnion();
          uVar8 = uVar13;
          param_2 = uVar14;
          param_3 = uVar15;
          param_4 = uVar16;
        }
        else {
          uVar8 = uVar9;
          param_2 = uVar10;
          param_3 = uVar11;
          param_4 = uVar12;
          _CGRectIsNull();
          if ((uVar6 & 1) == 0) {
            uVar13 = uVar9;
            uVar14 = uVar10;
            uVar15 = uVar11;
            uVar16 = uVar12;
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_5;
    func_0x00010bf52a60();
    puVar1 = PTR_s_getBoundingBoxWithSVGContext__1125ce618;
  }
  _objc_release(param_5);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_7;
  }
  ___stack_chk_fail();
  return 3;
}



/* Entry: 104fb4cac; end: 104fb4cb3; -[GHText getClippingTypeWithSVGContext:] */

undefined8 FUN_104fb4cac(void)

{
  return 3;
}



/* Entry: 104fb4cb4; end: 104fb4d7f; -[GHText setupFontDescriptorWithBaseDescriptor:andBaseFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb4cb4(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if ((param_3 == (undefined *)0x0) || (puVar3 != (undefined *)0x0)) {
    puVar3 = PTR_PTR_1126b3288;
    func_0x00010c0d88c0(PTR_PTR_1126b3288,param_2,puVar1,param_3);
  }
  else {
    _CFRetain(param_3);
    puVar3 = param_3;
  }
  *(undefined **)(param_1 + _DAT_112718acc) = puVar3;
  puVar3 = param_1;
  func_0x00010bfb3ce0();
  if ((param_4 != 0) && (param_3 == puVar3)) {
    _CFRetain(param_4);
    *(long *)(param_1 + _DAT_112718ad0) = param_4;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fb4d80; end: 104fb4de7; -[GHText dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb4d80(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112718ad0) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + _DAT_112718acc) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126e56c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104fb4de8; end: 104fb4df7; -[GHText contents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb4de8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ad8);
}



/* Entry: 104fb4df8; end: 104fb4e07; -[GHText fillDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb4df8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718adc);
}



/* Entry: 104fb4e08; end: 104fb4e17; -[GHText strokeDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb4e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ae0);
}



/* Entry: 104fb4e18; end: 104fb4e27; -[GHText strokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb4e18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ae4);
}



/* Entry: 104fb4e28; end: 104fb4e87; -[GHText .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb4e28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718ae0,0);
  _objc_storeStrong(param_1 + _DAT_112718adc,0);
  _objc_storeStrong(param_1 + _DAT_112718ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ad4,0);
  return;
}



/* Entry: 104fb4e88; end: 104fb4f0f; -[GHTextArea initWithDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fb4e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e56d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithDictionary__1125e0b28,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112718ae8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fb4f10; end: 104fb5787; +[GHTextArea attributedStringFromTSpan:optimize:preserveLineEndings:attributes:baseFont:baseFontDescriptor:] */

undefined1 *
FUN_104fb4f10(undefined8 param_1,undefined8 param_2,undefined **param_3,int param_4,uint param_5,
             undefined **param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  int iStack_31c;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  uint uStack_2ec;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_318 = param_3;
  uStack_2ec = param_5;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc_init();
  iStack_31c = param_4;
  puStack_2b8 = puVar1;
  if (param_4 != 0) {
    func_0x00010bf17fe0(puVar1);
  }
  ppuVar9 = ppuStack_318;
  ppuVar8 = ppuStack_318;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR____CFConstantStringClassReference_110dbf3f8;
  ppuVar7 = ppuVar8;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar7;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_308 = ppuVar8;
  _objc_release(ppuVar7);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(ppuVar9);
  func_0x00010bffc4a0();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  ppuStack_2d8 = ppuVar8;
  _objc_retain(ppuVar9);
  ppuStack_2e0 = ppuVar9;
  func_0x00010bf52a60();
  if (ppuVar9 == (undefined **)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    ppuVar8 = (undefined **)*puStack_220;
    ppuStack_2d0 = &PTR____CFConstantStringClassReference_110dbf1b8;
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110dbf218;
    ppuStack_2c8 = ppuVar8;
    do {
      ppuVar10 = (undefined **)0x0;
      ppuStack_2c0 = ppuVar9;
      do {
        if ((undefined **)*puStack_220 != ppuVar8) {
          _objc_enumerationMutation(ppuStack_2e0);
        }
        uVar14 = *(ulong *)(lStack_228 + (long)ppuVar10 * 8);
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar2 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = uVar14;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar14;
          func_0x00010c2827c0();
          uVar4 = uVar2;
          func_0x00010c0720c0();
          if (((int)uVar4 != 0) ||
             (uVar4 = uVar2, func_0x00010c0720c0(), ppuVar8 = ppuStack_2c8, (int)uVar4 != 0)) {
            ppuVar9 = ppuStack_2d8;
            if (uVar12 < uVar3) {
              ppuVar8 = ppuStack_308;
              func_0x00010c260c80(ppuStack_308);
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuStack_2d8;
              func_0x00010befa120(ppuStack_2d8);
              _objc_release(ppuVar8);
              uVar12 = uVar3;
            }
            ppuVar8 = ppuStack_2c8;
            func_0x00010befa120(ppuVar9);
          }
          _objc_release(uVar14);
          _objc_release(uVar2);
          ppuVar9 = ppuStack_2c0;
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar9 != ppuVar10);
      ppuVar9 = ppuStack_2e0;
      func_0x00010bf52a60();
    } while (ppuVar9 != (undefined **)0x0);
  }
  _objc_release(ppuStack_2e0);
  ppuVar8 = ppuStack_308;
  func_0x00010c08fa60();
  ppuVar9 = ppuStack_308;
  if (uVar12 < (long)ppuVar8 - 1U) {
    func_0x00010c08fa60(ppuStack_308);
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 != (undefined **)0x0) {
      func_0x00010befa120(ppuStack_2d8);
    }
    _objc_release(ppuVar9);
  }
  ppuVar9 = ppuStack_2d8;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(ppuStack_2d8);
  ppuVar8 = ppuVar9;
  func_0x00010bf52a60();
  if (ppuVar8 != (undefined **)0x0) {
    ppuStack_2e8 = (undefined **)((ulong)ppuStack_2e8 & 0xffffffff00000000);
    ppuStack_2d0 = (undefined **)*plStack_260;
    ppuStack_2f8 = &PTR____CFConstantStringClassReference_110dbf1b8;
    ppuStack_310 = &PTR____CFConstantStringClassReference_110dbf178;
    uVar11 = uStack_2ec;
    do {
      ppuVar7 = (undefined **)0x0;
      ppuStack_300 = ppuVar8;
      do {
        if ((undefined **)*plStack_260 != ppuStack_2d0) {
          _objc_enumerationMutation(ppuStack_2d8);
        }
        ppuVar9 = *(undefined ***)(lStack_268 + (long)ppuVar7 * 8);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuStack_2c0 = ppuVar7;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        ppuVar10 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar1);
        ppuVar5 = ppuVar9;
        ppuVar7 = ppuVar9;
        if (((ulong)ppuVar10 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          ppuVar10 = ppuVar9;
          _objc_opt_isKindOfClass(ppuVar9,puVar1);
          if (((ulong)ppuVar10 & 1) != 0) {
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar5;
            func_0x00010c0720c0();
            if ((int)ppuVar10 == 0) {
              ppuVar10 = ppuVar5;
              func_0x00010c0720c0();
              uVar11 = uStack_2ec;
              if ((int)ppuVar10 == 0) goto LAB_104fb566c;
              ppuVar10 = param_6;
              func_0x00010c0d3c80(param_6);
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = ppuVar9;
              func_0x00010bf529e0();
              if (ppuVar8 != (undefined **)0x0) {
                func_0x00010c2203a0(ppuVar10);
              }
              uVar11 = uStack_2ec;
              ppuVar7 = (undefined **)PTR_PTR_1126b32b8;
              func_0x00010bf0e400();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf069e0(puStack_2b8);
              _objc_release(ppuVar7);
              _objc_release(ppuVar9);
              ppuVar8 = ppuStack_300;
              ppuStack_2c8 = ppuVar5;
            }
            else {
              ppuVar10 = (undefined **)PTR_PTR_1126b3288;
              func_0x00010bf0e3c0(PTR_PTR_1126b3288);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf069e0(puStack_2b8);
              ppuStack_2c8 = ppuVar5;
              uVar11 = uStack_2ec;
            }
            goto LAB_104fb5658;
          }
        }
        else {
          _objc_retain(ppuVar9);
          if ((uVar11 & 1) == 0) {
            ppuVar10 = ppuVar9;
            func_0x00010c0720c0();
            if ((int)ppuVar10 == 0) {
              ppuVar10 = ppuVar9;
              func_0x00010bfdcf80();
              ppuStack_2e8 = (undefined **)CONCAT44(ppuStack_2e8._4_4_,(int)ppuVar10);
              puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar9;
              ppuStack_2c8 = ppuVar9;
              func_0x00010bf44700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              lStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              plStack_2a0 = (long *)0x0;
              _objc_retain(ppuVar10);
              ppuVar8 = ppuVar10;
              func_0x00010bf52a60();
              if (ppuVar8 != (undefined **)0x0) {
                lVar13 = *plStack_2a0;
                do {
                  ppuVar7 = (undefined **)0x0;
                  do {
                    if (*plStack_2a0 != lVar13) {
                      _objc_enumerationMutation(ppuVar10);
                    }
                    ppuVar15 = *(undefined ***)(lStack_2a8 + (long)ppuVar7 * 8);
                    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                    func_0x00010c2a4bc0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c25d0a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar9);
                    ppuVar5 = ppuVar15;
                    func_0x00010c08fa60();
                    if (ppuVar5 != (undefined **)0x0) {
                      ppuVar9 = ppuVar15;
                      func_0x00010c25ce40();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar15);
                      puVar1 = PTR_PTR_1126b3288;
                      func_0x00010bf0e3c0(PTR_PTR_1126b3288);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf069e0(puStack_2b8);
                      _objc_release(puVar1);
                      ppuVar15 = ppuVar9;
                    }
                    _objc_release(ppuVar15);
                    ppuVar7 = (undefined **)((long)ppuVar7 + 1);
                  } while (ppuVar8 != ppuVar7);
                  ppuVar8 = ppuVar10;
                  func_0x00010bf52a60();
                } while (ppuVar8 != (undefined **)0x0);
              }
              _objc_release(ppuVar10);
              ppuVar7 = ppuVar9;
              ppuVar8 = ppuStack_300;
              uVar11 = uStack_2ec;
              goto LAB_104fb5658;
            }
            if (((ulong)ppuStack_2e8 & 1) == 0) {
              _objc_release(ppuVar9);
              ppuStack_2e8 = (undefined **)CONCAT44(ppuStack_2e8._4_4_,1);
              ppuVar10 = (undefined **)PTR_PTR_1126b3288;
              func_0x00010bf0e3c0(PTR_PTR_1126b3288);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf069e0(puStack_2b8);
              ppuStack_2c8 = &PTR____CFConstantStringClassReference_110db2d98;
              ppuVar7 = &PTR____CFConstantStringClassReference_110db2d98;
              goto LAB_104fb5658;
            }
            ppuStack_2e8 = (undefined **)CONCAT44(ppuStack_2e8._4_4_,1);
          }
          else {
            ppuVar10 = (undefined **)PTR_PTR_1126b3288;
            ppuStack_2c8 = ppuVar9;
            func_0x00010bf0e3c0(PTR_PTR_1126b3288);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf069e0(puStack_2b8);
LAB_104fb5658:
            _objc_release(ppuVar10);
            ppuVar5 = ppuStack_2c8;
            ppuVar9 = ppuVar7;
          }
LAB_104fb566c:
          _objc_release(ppuVar5);
        }
        ppuVar10 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        ppuVar7 = (undefined **)((long)ppuStack_2c0 + 1);
      } while (ppuVar7 != ppuVar8);
      ppuVar8 = ppuStack_2d8;
      func_0x00010bf52a60();
    } while (ppuVar8 != (undefined **)0x0);
  }
  _objc_release(ppuStack_2d8);
  if (iStack_31c != 0) {
    func_0x00010bf947e0(puStack_2b8);
  }
  _objc_release(ppuStack_2d8);
  _objc_release(ppuStack_2e0);
  _objc_release(ppuStack_308);
  _objc_release(param_6);
  ppuVar8 = ppuStack_318;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pppuVar6 = &ppuStack_360;
    ppuStack_340 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    pcStack_328 = FUN_104fb5788;
    puStack_358 = PTR_PTR_1126e56d0;
    ppuStack_360 = ppuVar8;
    ppuStack_350 = ppuVar10;
    ppuStack_348 = param_6;
    ppuStack_338 = ppuVar9;
    puStack_330 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&ppuStack_360,PTR_s_calculatedHash_1125a7858);
    func_0x00010bf6ad00(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar8;
    func_0x00010bfde980();
    _objc_release(ppuVar8);
    return (undefined1 *)((long)ppuVar10 + (long)pppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_2b8);
  return puStack_2b8;
}



/* Entry: 104fb5788; end: 104fb57fb; -[GHTextArea calculatedHash] */

undefined1 * FUN_104fb5788(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126e56d0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_calculatedHash_1125a7858);
  func_0x00010bf6ad00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return (undefined1 *)((long)plVar1 + lVar2);
}



/* Entry: 104fb57fc; end: 104fb58d3; -[GHTextArea isEqual:] */

long FUN_104fb57fc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar3 = 1;
  }
  else {
    puStack_38 = PTR_PTR_1126e56d0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(param_3);
      func_0x00010bf6ad00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf6ad00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      lVar3 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fb58d4; end: 104fb593f; -[GHTextArea cleanLineEndings] */

uint FUN_104fb58d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104fb5940; end: 104fb5a37; -[GHTextArea text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb5940(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112718aec;
  puVar6 = *(undefined **)(param_1 + lVar8);
  _objc_retain(puVar6);
  if (puVar6 == (undefined *)0x0) {
    lVar1 = param_1;
    func_0x00010bfb3ce0(param_1);
    lVar2 = param_1;
    func_0x00010bfb3f80(param_1);
    puVar5 = PTR_PTR_1126b32b8;
    uVar7 = *(undefined8 *)(param_1 + _DAT_112718ae8);
    lVar3 = param_1;
    func_0x00010bf39f00(param_1);
    lVar4 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e400(puVar5,param_2,uVar7,1,(uint)lVar3 ^ 1,lVar4,lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar6;
    _objc_release(uVar7);
    _objc_retain(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104fb5a38; end: 104fb5a93; -[GHTextArea frameSetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104fb5a38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112718af0;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _CTFramesetterCreateWithAttributedString();
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 104fb5a94; end: 104fb5c37; -[GHTextArea size] */

undefined1  [16] FUN_104fb5a94(float param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [16];
  
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if ((uVar1 == 0) || (uVar1 = uVar2, func_0x00010c0720c0(), (uVar1 & 1) != 0)) {
    dVar6 = 1.79769313486232e+308;
  }
  else {
    func_0x00010bfb2c80(uVar2);
    dVar6 = (double)param_1;
  }
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c08fa60();
  if ((uVar1 == 0) || (uVar1 = uVar3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) {
    dVar7 = 1.79769313486232e+308;
  }
  else {
    func_0x00010bfb2c80(uVar3);
    dVar7 = (double)param_1;
    if (dVar6 != 1.79769313486232e+308) goto LAB_104fb5c04;
  }
  uVar1 = param_2;
  func_0x00010bfb7000(param_2);
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _CTFramesetterSuggestFrameSizeWithConstraints(dVar7,dVar6,uVar1,0,uVar5,0,auStack_60);
  _objc_release(uVar4);
  _objc_release(param_2);
LAB_104fb5c04:
  _objc_release(uVar3);
  _objc_release(uVar2);
  auVar8._8_8_ = dVar6;
  auVar8._0_8_ = dVar7;
  return auVar8;
}



/* Entry: 104fb5c38; end: 104fb5cbb; -[GHTextArea frame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104fb5c38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112718af4;
  lVar2 = *(long *)(param_3 + lVar3);
  if (lVar2 == 0) {
    func_0x00010c23d0a0();
    uVar1 = 0;
    _CGPathCreateWithRect(0,0,param_1,param_2,0);
    lVar2 = param_3;
    func_0x00010bfb7000();
    _CTFramesetterCreateFrame();
    *(long *)(param_3 + lVar3) = lVar2;
    _CGPathRelease(uVar1);
  }
  return lVar2;
}



/* Entry: 104fb5cbc; end: 104fb5cc3; -[GHTextArea children] */

undefined8 FUN_104fb5cbc(void)

{
  return 0;
}



/* Entry: 104fb5cc4; end: 104fb5f7b; -[GHTextArea renderIntoContext:withSVGContext:] */

void FUN_104fb5cc4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,ulong param_5
                  ,undefined8 param_6,undefined8 param_7,undefined *param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010bfb68e0();
  if (uVar1 == 0) goto LAB_104fb5f50;
  func_0x00010bf20ce0(param_5);
  _CGContextSaveGState(param_7);
  uVar1 = param_5;
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
LAB_104fb5d60:
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) goto LAB_104fb5d78;
  }
  else {
    puVar3 = param_8;
    func_0x00010bf40f40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) goto LAB_104fb5d60;
LAB_104fb5d78:
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(param_7,puVar4);
    _objc_release(puVar3);
  }
  func_0x00010c27a460(&uStack_a0,param_5);
  _CGContextConcatCTM(param_7,&uStack_a0);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGContextSetTextMatrix(param_7,&uStack_a0);
  _CGContextTranslateCTM(param_1,param_2 + param_4,param_7);
  uVar9 = 0x3ff0000000000000;
  dVar10 = -1.0;
  _CGContextScaleCTM(0x3ff0000000000000,param_7);
  func_0x00010c23d0a0(param_5);
  uVar2 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c08fa60();
  if (((uVar2 != 0) && (uVar2 = uVar5, func_0x00010c0720c0(), (uVar2 & 1) == 0)) &&
     (uVar2 = uVar5, func_0x00010c0720c0(), (uVar2 & 1) == 0)) {
    uVar2 = param_5;
    func_0x00010bfb7000(param_5);
    uVar6 = param_5;
    func_0x00010c26b700(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    dVar11 = dVar10;
    _CTFramesetterSuggestFrameSizeWithConstraints(uVar9,uVar2,0,uVar8,0,&uStack_a0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (dVar11 < dVar10) {
      uVar2 = uVar5;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = uVar5;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) goto LAB_104fb5f28;
        dVar10 = -(dVar10 - dVar11);
      }
      else {
        dVar10 = (dVar10 - dVar11) * -0.5;
      }
      _CGContextTranslateCTM(0,dVar10,param_7);
    }
  }
LAB_104fb5f28:
  func_0x00010bfb68e0(param_5);
  _CTFrameDraw();
  _CGContextRestoreGState(param_7);
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_104fb5f50:
  _objc_release(param_8);
  return;
}



/* Entry: 104fb5f7c; end: 104fb605b; -[GHTextArea box] */

double FUN_104fb5f7c(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfb2c80(uVar2);
  func_0x00010bfb2c80(uVar3);
  func_0x00010c23d0a0(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return (double)param_1;
}



/* Entry: 104fb605c; end: 104fb605f; -[GHTextArea getBoundingBoxWithSVGContext:] */

void FUN_104fb605c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_box_1125a5ce0);
  return;
}



/* Entry: 104fb6060; end: 104fb60c7; -[GHTextArea dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb6060(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112718af4) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + _DAT_112718af0) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126e56d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104fb60c8; end: 104fb60d7; -[GHTextArea definition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb60c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ae8);
}



/* Entry: 104fb60d8; end: 104fb6117; -[GHTextArea .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb60d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718ae8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718aec,0);
  return;
}



/* Entry: 104fb6118; end: 104fb619b; -[TextPath renderIntoContext:withSVGContext:] */

void FUN_104fb6118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [48];
  
  _objc_retain(param_4);
  _CGContextSaveGState(param_3);
  func_0x00010c27a460(auStack_60,param_1);
  _CGContextConcatCTM(param_3,auStack_60);
  func_0x00010bef9080(param_1);
  _objc_release(param_4);
  _CGContextFillPath(param_3);
  _CGContextRestoreGState(param_3);
  return;
}



/* Entry: 104fb619c; end: 104fb6397; -[TextPath renderGlyphs:intoContext:withSVGContext:] */

void FUN_104fb619c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar12 = auStack_f0;
  uVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar14 = *(ulong *)(uVar13 * 8);
      uVar3 = uVar14;
      func_0x00010bfad540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      if ((uVar4 == 0) || (uVar4 = uVar3, func_0x00010c0720c0(), (uVar4 & 1) != 0)) {
        func_0x00010befa680(uVar14);
      }
      else {
        uVar5 = param_5;
        func_0x00010bf40f40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_4;
        _CGContextCopyPath();
        _CGContextBeginPath(param_4);
        _CGContextSaveGState(param_4);
        func_0x00010befa680(uVar14);
        uVar7 = uVar5;
        _objc_retainAutorelease(uVar5);
        func_0x00010bdc0fe0();
        _CGContextSetFillColorWithColor(param_4,uVar7);
        _CGContextFillPath(param_4);
        _CGContextRestoreGState(param_4);
        _CGContextBeginPath(param_4);
        if (lVar6 != 0) {
          _CGContextAddPath(param_4,lVar6);
          _CGPathRelease(lVar6);
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar3);
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
    puVar12 = auStack_f0;
    uVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  uVar2 = param_3;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar8);
  if (((uVar2 & 1) != 0) && (uVar2 = uVar13, func_0x00010bfda7c0(), (int)uVar2 != 0)) {
    uVar2 = uVar13;
    func_0x00010c260c00(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c0e01c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b32c0;
    _objc_opt_class(PTR_PTR_1126b32c0);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    if ((((ulong)puVar10 & 1) != 0) &&
       (puVar10 = puVar9, func_0x00010c11cfe0(), puVar10 != (undefined1 *)0x0)) {
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      func_0x00010bef9060(param_3);
      puVar11 = puVar8;
      func_0x00010bf529e0();
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c104300(PTR_PTR_1126b32c8);
        func_0x00010c12fba0(param_3);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 104fb6398; end: 104fb651b; -[TextPath addGlyphsToContext:withSVGContext:] */

void FUN_104fb6398(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if (((uVar1 & 1) != 0) && (uVar1 = uVar2, func_0x00010bfda7c0(), (int)uVar1 != 0)) {
    uVar1 = uVar2;
    func_0x00010c260c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e01c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b32c0;
    _objc_opt_class(PTR_PTR_1126b32c0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    if (((uVar5 & 1) != 0) && (uVar5 = uVar4, func_0x00010c11cfe0(), uVar5 != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      func_0x00010bef9060(param_1);
      puVar6 = puVar3;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c104300(PTR_PTR_1126b32c8);
        func_0x00010c12fba0(param_1);
      }
      _objc_release(puVar3);
    }
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fb651c; end: 104fb664f; -[GHTextLine initWithAttributes:andTextLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104fb651c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e56d8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithAttributes__1125dadb8);
  if (puVar1 != (undefined8 *)0x0) {
    *(long *)((long)puVar1 + (long)_DAT_112718af8) = param_4;
    if (param_4 != 0) {
      _CFRetain(param_4);
    }
    puVar2 = puVar1;
    func_0x00010bf0e700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = (undefined8 *)((long)puVar1 + (long)_DAT_112718afc);
    FUN_104fc1ca8(&uStack_70,puVar3);
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
    puVar2[5] = uStack_48;
    puVar2[4] = uStack_50;
    puVar2[1] = uStack_68;
    *puVar2 = uStack_70;
    puVar2 = puVar1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c08fa60();
    if (puVar2 == (undefined8 *)0x0) {
      uStack_70 = 0xbff0000000000000;
    }
    else {
      func_0x00010bf885a0(puVar4);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_112718b00) = uStack_70;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 104fb6650; end: 104fb66af; -[GHTextLine calculatedHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fb6650(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e56d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_calculatedHash_1125a7858);
  lVar2 = *(long *)(param_1 + _DAT_112718af8);
  if (lVar2 != 0) {
    _CFHash();
    plVar1 = (long *)((long)plVar1 + lVar2);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 104fb66b0; end: 104fb676b; -[GHTextLine isEqual:] */

bool FUN_104fb66b0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar2 = true;
  }
  else {
    puStack_38 = PTR_PTR_1126e56d8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      _objc_retain(param_3);
      func_0x00010c099420(param_1);
      lVar3 = param_3;
      func_0x00010c099420(param_3);
      _objc_release(param_3);
      _CFEqual(param_1,lVar3);
      bVar2 = (int)param_1 != 0;
    }
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 104fb676c; end: 104fb6873; -[GHTextLine getBoundingBoxWithSVGContext:] */

double FUN_104fb676c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = *(double *)PTR__CGRectZero_110347608;
  lVar1 = param_2;
  func_0x00010c099420();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c099420(param_2);
    _CTLineGetTypographicBounds();
    lVar1 = lVar2;
    func_0x00010c0720c0();
    if ((0.0 < param_1) && (dVar3 = param_1 * -0.5, (int)lVar1 == 0)) {
      dVar3 = 0.0;
    }
    _objc_release(lVar2);
  }
  return dVar3;
}



/* Entry: 104fb6874; end: 104fb6b77; -[GHTextLine newPath] */

long FUN_104fb6874(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_1;
  _CGPathCreateMutable();
  lVar2 = param_1;
  func_0x00010c099420();
  _CTLineGetGlyphRuns();
  lVar6 = lVar2;
  _CFArrayGetCount();
  if (0 < lVar6) {
    lVar6 = 0;
    do {
      lVar3 = lVar2;
      _CFArrayGetValueAtIndex(lVar2,lVar6);
      lVar4 = lVar3;
      _CTRunGetAttributes();
      _CFDictionaryGetValue();
      lVar7 = lVar3;
      _CTRunGetGlyphCount();
      if (0 < lVar7) {
        lVar7 = 0;
        do {
          _CTRunGetGlyphs(lVar3,lVar7,1,&uStack_100);
          _CTRunGetPositions(lVar3,lVar7,1,&uStack_d0);
          lVar5 = lVar4;
          _CTFontCreatePathForGlyph(lVar4,uStack_100 & 0xffff,0);
          _CGAffineTransformMakeTranslation(&uStack_a0,uStack_d0,uStack_c8);
          _CGPathAddPath(lVar1,&uStack_a0,lVar5);
          _CGPathRelease(lVar5);
          lVar7 = lVar7 + 1;
          lVar5 = lVar3;
          _CTRunGetGlyphCount();
        } while (lVar7 < lVar5);
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar2;
      _CFArrayGetCount();
    } while (lVar6 < lVar3);
  }
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0dff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0dff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0dff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c0dff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  fVar8 = 0.0;
  _CGAffineTransformMakeScale(&uStack_a0,0x3ff0000000000000,0xbff0000000000000);
  func_0x00010bfb2c80(lVar2);
  dVar10 = (double)fVar8;
  func_0x00010bfb2c80(lVar6);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  _CGAffineTransformTranslate(&uStack_d0,dVar10,(double)-fVar8,&uStack_100);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uVar9 = uStack_b0;
  func_0x00010bfb2c80(lVar3);
  fVar8 = (float)uVar9;
  dVar10 = (double)fVar8;
  func_0x00010bfb2c80(lVar4);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  _CGAffineTransformTranslate(&uStack_d0,dVar10,(double)-fVar8,&uStack_100);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uVar9 = uStack_b0;
  func_0x00010bfb2c80(lVar7);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  _CGAffineTransformRotate(&uStack_d0,(double)(float)uVar9,&uStack_100);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  lVar5 = lVar1;
  _CGPathCreateCopyByTransformingPath(lVar1,&uStack_a0);
  _CGPathRelease(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 104fb6b78; end: 104fb6e3f; -[GHTextLine glyphTransform] */

void FUN_104fb6b78(undefined8 *param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
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
  double dStack_90;
  undefined8 uStack_88;
  
  uVar1 = param_3;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a460(param_1,param_3);
  func_0x00010bfb2c80(uVar4);
  dVar10 = (double)param_2;
  func_0x00010bfb2c80(uVar5);
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  _CGAffineTransformTranslate(&uStack_b0,dVar10,(double)param_2,&uStack_e0);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = dStack_90;
  dVar10 = dStack_90;
  func_0x00010bfb2c80(uVar6);
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  _CGAffineTransformRotate(&uStack_b0,(double)SUB84(dVar10,0),&uStack_e0);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = dStack_90;
  dVar10 = dStack_90;
  func_0x00010bfb2c80(uVar2);
  dVar11 = (double)SUB84(dVar10,0);
  func_0x00010bfb2c80(uVar3);
  uVar7 = uVar1;
  dVar9 = dVar10;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c08fa60();
  dVar12 = dVar11;
  if (uVar8 != 0) {
    func_0x00010c099420(param_3);
    _CTLineGetTypographicBounds();
    uVar8 = uVar7;
    func_0x00010c0720c0();
    if ((uVar8 & 1) == 0) {
      uVar8 = uVar7;
      func_0x00010c0720c0();
      if ((int)uVar8 == 0) {
        uVar8 = uVar7;
        func_0x00010c0720c0();
        dVar12 = dVar11 - dVar9;
        if ((int)uVar8 == 0) {
          dVar12 = dVar11;
        }
      }
      else {
        dVar12 = dVar11 + dVar9 * -0.5;
      }
    }
  }
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  _CGAffineTransformTranslate(&uStack_b0,dVar12,(double)SUB84(dVar10,0),&uStack_e0);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = dStack_90;
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  _CGAffineTransformScale(&uStack_b0,0x3ff0000000000000,0xbff0000000000000,&uStack_e0);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = dStack_90;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104fb6e40; end: 104fb71bb; -[GHTextLine addGlyphsToArray:withSVGContext:] */

void FUN_104fb6e40(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
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
  undefined8 uStack_108;
  double dStack_f8;
  double dStack_f0;
  undefined1 auStack_e2 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c099420();
  if (lVar2 != 0) {
    _CTLineGetGlyphRuns();
    func_0x00010bfcd280(&uStack_e0,param_3);
    dVar17 = *(double *)PTR__CGPointZero_110347540;
    dVar18 = *(double *)(PTR__CGPointZero_110347540 + 8);
    lVar11 = param_5;
    func_0x00010bf529e0();
    dVar20 = param_1;
    dVar15 = dVar18;
    dVar16 = dVar17;
    dVar19 = dVar17;
    if (lVar11 != 0) {
      lVar11 = param_5;
      func_0x00010c089820(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1c40();
      dVar20 = param_1;
      func_0x00010c2a5040(lVar11);
      dVar19 = param_1 + dVar20;
      _objc_release(lVar11);
      dVar15 = param_2;
      dVar16 = param_1;
    }
    fVar13 = SUB84(dVar20,0);
    lVar11 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    if (lVar4 != 0 || lVar3 != 0) {
      func_0x00010bfb2c80(lVar4);
      dVar17 = (double)fVar13;
      func_0x00010bfb2c80(lVar3);
      dVar18 = (double)fVar13;
    }
    lVar11 = lVar2;
    _CFArrayGetCount();
    if (0 < lVar11) {
      lVar11 = 0;
      dVar20 = dVar15;
      do {
        lVar5 = lVar2;
        _CFArrayGetValueAtIndex(lVar2,lVar11);
        _CTRunGetAttributes();
        _CFDictionaryGetValue();
        lVar6 = lVar5;
        _CTRunGetAttributes(lVar5);
        lVar7 = lVar5;
        _CTRunGetGlyphCount();
        if (0 < lVar7) {
          lVar12 = 0;
          do {
            _CTRunGetGlyphs(lVar5,lVar12,1,auStack_e2);
            _CTRunGetPositions(lVar5,lVar12,1,&dStack_f8);
            dVar1 = dStack_f0;
            dVar14 = dStack_f8;
            uStack_158 = uStack_d8;
            uStack_160 = uStack_e0;
            uStack_148 = uStack_c8;
            uStack_150 = uStack_d0;
            uStack_138 = uStack_b8;
            uStack_140 = uStack_c0;
            _CGAffineTransformTranslate
                      (&uStack_130,dStack_f8 - dVar16,dStack_f0 - dVar20,&uStack_160);
            uStack_d8 = uStack_128;
            uStack_e0 = uStack_130;
            uStack_c8 = uStack_118;
            uStack_d0 = uStack_120;
            uStack_b8 = uStack_108;
            uStack_c0 = uStack_110;
            dVar16 = dVar19 + dVar14;
            dVar20 = dVar15 + dVar1;
            dVar14 = dVar17 + dVar16;
            dStack_f0 = dVar18 + dVar20;
            dStack_f8 = dVar14;
            _CTRunGetTypographicBounds(lVar5,lVar12,1,0,0,0);
            puVar8 = PTR_PTR_1126b32c8;
            _objc_alloc(PTR_PTR_1126b32c8);
            lVar9 = param_3;
            func_0x00010bf0e700(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar6;
            func_0x00010bf51e00(lVar6);
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            func_0x00010c00c600(dStack_f8,dStack_f0,dVar14,puVar8);
            _objc_release(lVar10);
            _objc_release(lVar9);
            func_0x00010befa120(param_5);
            _objc_release(puVar8);
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
        }
        lVar11 = lVar11 + 1;
        lVar5 = lVar2;
        _CFArrayGetCount();
      } while (lVar11 < lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104fb71bc; end: 104fb7377; -[GHTextLine addGlyphsToContext:withSVGContext:] */

void FUN_104fb71bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c099420();
  if (lVar1 != 0) {
    _CTLineGetGlyphRuns();
    lVar2 = lVar1;
    _CGPathCreateMutable();
    func_0x00010bfcd280(&uStack_b0,param_1);
    lVar6 = lVar1;
    _CFArrayGetCount();
    if (0 < lVar6) {
      lVar6 = 0;
      dVar8 = *(double *)PTR__CGPointZero_110347540;
      dVar9 = *(double *)(PTR__CGPointZero_110347540 + 8);
      do {
        lVar3 = lVar1;
        _CFArrayGetValueAtIndex(lVar1,lVar6);
        lVar4 = lVar3;
        _CTRunGetAttributes();
        _CFDictionaryGetValue();
        lVar7 = lVar3;
        _CTRunGetGlyphCount();
        if (0 < lVar7) {
          lVar7 = 0;
          do {
            _CTRunGetGlyphs(lVar3,lVar7,1,&uStack_b2);
            _CTRunGetPositions(lVar3,lVar7,1,&dStack_c8);
            lVar5 = lVar4;
            _CTFontCreatePathForGlyph(lVar4,uStack_b2,0);
            uStack_128 = uStack_a8;
            uStack_130 = uStack_b0;
            uStack_118 = uStack_98;
            uStack_120 = uStack_a0;
            uStack_108 = uStack_88;
            uStack_110 = uStack_90;
            _CGAffineTransformTranslate(&uStack_f8,dStack_c8 - dVar8,dStack_c0 - dVar9,&uStack_130);
            uStack_a8 = uStack_f0;
            uStack_b0 = uStack_f8;
            uStack_98 = uStack_e0;
            uStack_a0 = uStack_e8;
            uStack_88 = uStack_d0;
            uStack_90 = uStack_d8;
            _CGPathAddPath(lVar2,&uStack_b0,lVar5);
            _CGPathRelease(lVar5);
            dVar9 = dStack_c0;
            dVar8 = dStack_c8;
            lVar7 = lVar7 + 1;
            lVar5 = lVar3;
            _CTRunGetGlyphCount();
          } while (lVar7 < lVar5);
        }
        lVar6 = lVar6 + 1;
        lVar3 = lVar1;
        _CFArrayGetCount();
      } while (lVar6 < lVar3);
    }
    _CGContextAddPath(param_3,lVar2);
    _CGPathRelease(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104fb7378; end: 104fb764b; -[GHTextLine renderIntoContext:withSVGContext:] */

void FUN_104fb7378(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar1 = param_1;
  func_0x00010c099420();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0dff20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0dff20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0dff20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0dff20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CGAffineTransformMakeScale(&uStack_b0,0x3ff0000000000000,0xbff0000000000000);
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    dStack_c0 = dStack_90;
    _CGContextSetTextMatrix(param_3,&uStack_e0);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    dStack_90 = (double)uVar10;
    func_0x00010bfb2c80(uVar4);
    fVar9 = (float)uVar10;
    dVar11 = (double)fVar9;
    func_0x00010bfb2c80(uVar5);
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    dStack_f0 = dStack_90;
    _CGAffineTransformTranslate(&uStack_e0,dVar11,(double)fVar9,&uStack_110);
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    dStack_90 = dStack_c0;
    dVar11 = dStack_c0;
    func_0x00010bfb2c80(uVar6);
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    dStack_f0 = dStack_90;
    _CGAffineTransformRotate(&uStack_e0,(double)SUB84(dVar11,0),&uStack_110);
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    dStack_90 = dStack_c0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    dVar11 = dStack_c0;
    _CGContextConcatCTM(param_3,&uStack_e0);
    func_0x00010bfb2c80(uVar2);
    dVar12 = (double)SUB84(dVar11,0);
    func_0x00010bfb2c80(uVar3);
    fVar9 = SUB84(dVar11,0);
    uVar7 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    dVar13 = dVar12;
    if (uVar8 != 0) {
      func_0x00010c099420(param_1);
      _CTLineGetTypographicBounds();
      uVar8 = uVar7;
      func_0x00010c0720c0();
      if ((uVar8 & 1) == 0) {
        uVar8 = uVar7;
        func_0x00010c0720c0();
        if ((int)uVar8 == 0) {
          uVar8 = uVar7;
          func_0x00010c0720c0();
          dVar13 = dVar12 - dVar11;
          if ((int)uVar8 == 0) {
            dVar13 = dVar12;
          }
        }
        else {
          dVar13 = dVar12 + dVar11 * -0.5;
        }
      }
    }
    _CGContextSetTextPosition(dVar13,(double)fVar9,param_3);
    func_0x00010c099420(param_1);
    _CTLineDraw();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 104fb764c; end: 104fb7653; -[GHTextLine getClippingTypeWithSVGContext:] */

undefined8 FUN_104fb764c(void)

{
  return 3;
}



/* Entry: 104fb7654; end: 104fb76a7; -[GHTextLine dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb7654(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_112718af8) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126e56d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104fb76a8; end: 104fb76b7; -[GHTextLine fillDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb76a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b04);
}



/* Entry: 104fb76b8; end: 104fb76c7; -[GHTextLine strokeDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb76b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b08);
}



/* Entry: 104fb76c8; end: 104fb76d7; -[GHTextLine strokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb76c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b00);
}



/* Entry: 104fb76d8; end: 104fb76e7; -[GHTextLine lineRef] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb76d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718af8);
}



/* Entry: 104fb76e8; end: 104fb7707; -[GHTextLine transform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb76e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718afc);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fb7708; end: 104fb7747; -[GHTextLine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb7708(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718b08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b04,0);
  return;
}



/* Entry: 104fb7748; end: 104fb7b13; +[GHAttributedObject overideObjectsForPrototype:withDictionary:] */

void FUN_104fb7748(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_attributes_1125a1368);
  if ((uVar2 & 1) == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bf529e0(param_4);
    func_0x00010bf529e0(uVar2);
    func_0x00010bffc4a0(puVar3);
    uVar4 = uVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      func_0x00010bef7f60(puVar3);
    }
    func_0x00010bef7f60(puVar3);
    if (uVar4 != 0) {
      func_0x00010c1d0560(puVar3);
    }
    uVar5 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_transform_11267c340);
    if ((uVar5 & 1) != 0) {
      lVar6 = param_4;
      func_0x00010c0dff20(param_4);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_a0,param_3);
      }
      FUN_104fc1ca8(&uStack_d0,lVar6);
      uStack_f8 = uStack_c8;
      uStack_100 = uStack_d0;
      uStack_e8 = uStack_b8;
      uStack_f0 = uStack_c0;
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uVar5 = 0;
      _CGAffineTransformIsIdentity();
      if ((uVar5 & 1) == 0) {
        uStack_f8 = uStack_98;
        uStack_100 = uStack_a0;
        uStack_e8 = uStack_88;
        uStack_f0 = uStack_90;
        uStack_d8 = uStack_78;
        uStack_e0 = uStack_80;
        iVar1 = (int)&uStack_100;
        _CGAffineTransformIsIdentity();
        if (iVar1 == 0) {
          uStack_128 = uStack_98;
          uStack_130 = uStack_a0;
          uStack_118 = uStack_88;
          uStack_120 = uStack_90;
          uStack_108 = uStack_78;
          uStack_110 = uStack_80;
          uStack_158 = uStack_c8;
          uStack_160 = uStack_d0;
          uStack_148 = uStack_b8;
          uStack_150 = uStack_c0;
          uStack_138 = uStack_a8;
          uStack_140 = uStack_b0;
          _CGAffineTransformConcat(&uStack_100,&uStack_130,&uStack_160);
          uStack_128 = uStack_f8;
          uStack_130 = uStack_100;
          uStack_118 = uStack_e8;
          uStack_120 = uStack_f0;
          uStack_108 = uStack_d8;
          uStack_110 = uStack_e0;
          puVar7 = &uStack_130;
          FUN_104fc1c5c(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(puVar3);
          _objc_release(puVar7);
        }
        else {
          func_0x00010c220220(puVar3);
        }
      }
      _objc_release(lVar6);
    }
    uVar5 = uVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c08fa60();
    if ((uVar8 == 0) || (lVar9 = lVar6, func_0x00010c08fa60(), lVar9 == 0)) {
      lVar9 = lVar6;
      func_0x00010c08fa60();
      if (lVar9 != 0) {
        func_0x00010c220220(puVar3);
      }
    }
    else {
      puVar13 = PTR_PTR_1126b32a0;
      func_0x00010bf71f00(PTR_PTR_1126b32a0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b32a0;
      func_0x00010bf71f00(PTR_PTR_1126b32a0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      puVar12 = PTR_PTR_1126b32a0;
      func_0x00010c25dfc0(PTR_PTR_1126b32a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar3);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar13);
    }
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puVar10 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bf72040(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104fb7b14; end: 104fb7b73; -[GHAttributedObject cloneWithOverridingDictionary:] */

void FUN_104fb7b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b32d0;
  func_0x00010c0ef420(PTR_PTR_1126b32d0,param_2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c00c560();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104fb7b74; end: 104fb7e07; +[GHRenderableObject setupContext:withAttributes:withSVGContext:] */

void FUN_104fb7b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b32a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c296fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf378,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf598,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228ea0(PTR_PTR_1126b32a0,param_2,param_3,puVar1,puVar2,param_5);
  puVar3 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf5b8,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228fa0(PTR_PTR_1126b32a0,param_2,param_3,puVar3);
  puVar4 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf5d8,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228f80(PTR_PTR_1126b32a0,param_2,param_3,puVar4);
  puVar5 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf5f8,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228e80(PTR_PTR_1126b32a0,param_2,param_3,puVar5);
  puVar6 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf618,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d0a0(puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0(PTR_PTR_1126b32a0,param_2,&PTR____CFConstantStringClassReference_110dbf638,
                      param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228e60(PTR_PTR_1126b32a0,param_2,param_3,puVar8,puVar6);
  uVar9 = param_4;
  func_0x00010c0dff20(param_4,param_2,&PTR____CFConstantStringClassReference_110dbf658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2286a0(PTR_PTR_1126b32a0,param_2,param_3,uVar9,param_5);
  _objc_release(param_5);
  uVar10 = param_4;
  func_0x00010c0dff20(param_4,param_2,&PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c229060(PTR_PTR_1126b32a0,param_2,param_3,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fb7e08; end: 104fb7feb; +[GHRenderableObject boundingBoxForRenderableObject:withSVGContext:givenParentObjectsBounds:] */

undefined8
FUN_104fb7e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  uVar6 = param_1;
  uVar7 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bfc31c0(param_7,param_6,param_8);
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_7;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = param_7;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_104fb7fa8;
    }
    else {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    _CGAffineTransformMakeTranslation(&uStack_c0,param_1,param_2);
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    _CGAffineTransformScale(&uStack_f0,param_3,param_4,&uStack_120);
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    _CGRectApplyAffineTransform(uVar6,uVar7,uVar8,uVar9,&uStack_f0);
  }
LAB_104fb7fa8:
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 104fb7fec; end: 104fb810f; -[GHRenderableObject setupContext:withAttributes:withSVGContext:] */

void FUN_104fb7fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_5;
    func_0x00010bf40f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010c1870c0(param_5);
    }
    _objc_release(lVar4);
  }
  func_0x00010c2287c0(PTR_PTR_1126b32d8);
  puVar2 = PTR_PTR_1126b32e0;
  func_0x00010bf3d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010bfc31c0(param_1);
    func_0x00010befc0c0(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fb8110; end: 104fb815b; -[GHRenderableObject hidden] */

undefined * FUN_104fb8110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b32a0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0de40(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 104fb815c; end: 104fb8273; -[GHRenderableObject addNamedObjects:] */

void FUN_104fb815c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if (((uVar1 & 1) == 0) || (uVar1 = uVar2, func_0x00010c08fa60(), uVar1 == 0)) {
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    if (((uVar2 & 1) == 0) || (uVar4 = uVar1, func_0x00010c08fa60(), uVar2 = uVar1, uVar4 == 0))
    goto LAB_104fb8254;
  }
  func_0x00010c220220(param_3);
  uVar1 = uVar2;
LAB_104fb8254:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fb8274; end: 104fb82ef; -[GHRenderableObject valueForStyleAttribute:] */

void FUN_104fb8274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b32a0;
  _objc_retain(param_3);
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296fc0(puVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fb82f0; end: 104fb834b; -[GHRenderableObject defaultFillColor] */

void FUN_104fb82f0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c296fa0(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  ppuVar2 = param_1;
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc0518;
    _objc_retain(&PTR____CFConstantStringClassReference_110dc0518);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104fb834c; end: 104fb83ff; -[GHRenderableObject initWithDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104fb834c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e56e0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDictionary__1125e0b28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf0e700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = (undefined8 *)((long)puVar1 + (long)_DAT_112718b0c);
    FUN_104fc1ca8(&uStack_70,puVar3);
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
    puVar2[5] = uStack_48;
    puVar2[4] = uStack_50;
    puVar2[1] = uStack_68;
    *puVar2 = uStack_70;
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 104fb8400; end: 104fb8403; -[GHRenderableObject renderIntoContext:withSVGContext:] */

void FUN_104fb8400(void)

{
  return;
}



/* Entry: 104fb8404; end: 104fb8407; -[GHRenderableObject addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb8404(void)

{
  return;
}



/* Entry: 104fb8408; end: 104fb840b; -[GHRenderableObject addToClipPathForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb8408(void)

{
  return;
}



/* Entry: 104fb840c; end: 104fb8413; -[GHRenderableObject getClippingTypeWithSVGContext:] */

undefined8 FUN_104fb840c(void)

{
  return 0;
}



/* Entry: 104fb8414; end: 104fb8427; -[GHRenderableObject getBoundingBoxWithSVGContext:] */

undefined8 FUN_104fb8414(void)

{
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 104fb8428; end: 104fb842f; -[GHRenderableObject hitTest:] */

undefined8 FUN_104fb8428(void)

{
  return 0;
}



/* Entry: 104fb8430; end: 104fb8467; -[GHRenderableObject findRenderableObject:withSVGContext:] */

void FUN_104fb8430(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfe3a00();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104fb8468; end: 104fb8487; -[GHRenderableObject transform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb8468(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718b0c);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}


