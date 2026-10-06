/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080c02d0; end: 1080c0437; -[SCValdiTextViewEffectsLayoutManager _drawStaticCustomUnderlines:animationRanges:glyphsToShow:glyphsOrigin:context:] */

void FUN_1080c02d0(double param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,long param_7,undefined *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  double dVar17;
  double dVar18;
  undefined *apuStack_4c0 [2];
  undefined *apuStack_430 [2];
  undefined8 uStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_350;
  undefined auStack_280 [8];
  long lStack_278;
  long *plStack_270;
  undefined auStack_240 [128];
  undefined8 uStack_1c0;
  long lStack_138;
  long *plStack_130;
  
  puVar5 = param_8;
  func_0x0001080c1e48();
  puVar6 = param_5;
  lVar11 = param_7;
  func_0x0001080c1c44();
  func_0x0001080c1d08();
  func_0x0001080c1e9c();
  puVar2 = param_2;
  func_0x00010bf62aa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar2 == (undefined *)0x0) || (func_0x0001080c1dc0(), puVar2 == (undefined *)0x0)) {
    func_0x0001080c1d30();
  }
  else {
    func_0x0001080c1d30();
    if (param_7 != 0) {
      _CGContextSaveGState(param_8);
      func_0x00010bf62aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _CGContextSetLineWidth(param_8);
      func_0x0001080c1d30();
      param_3 = param_2;
      func_0x00010bf62aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_8;
      FUN_1080a04d4();
      func_0x0001080c1d30();
      func_0x0001080c1fa0();
      func_0x0001080c1d38();
      func_0x0001080c1c24();
      if (puVar2 != (undefined *)0x0) {
        lVar12 = *plStack_130;
        do {
          puVar13 = (undefined *)0x0;
          do {
            func_0x0001080c1f2c();
            if (extraout_x8_00 != lVar12) {
              func_0x0001080c1ea4();
            }
            param_4 = *(undefined **)(lStack_138 + (long)puVar13 * 8);
            puVar3 = param_2;
            puVar6 = param_5;
            lVar11 = param_7;
            func_0x0001080c1d9c();
            puVar5 = param_8;
            func_0x00010be067e0();
            puVar13 = puVar13 + 1;
            in_ZR = puVar13 == puVar2;
          } while (puVar13 < puVar2);
          func_0x0001080c1c24();
          puVar2 = puVar3;
        } while (puVar3 != (undefined *)0x0);
      }
      func_0x0001080c1ccc();
      _CGContextRestoreGState();
      puVar2 = param_8;
    }
  }
  func_0x0001080c1d10();
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar3 = puVar2;
  puVar13 = puVar6;
  func_0x0001080c1c44();
  uStack_1c0 = extraout_x8_01;
  func_0x00010bf62aa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) {
    func_0x0001080c1bd0(uStack_1c0);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    _objc_release();
    if (lVar11 != 0) {
      func_0x0001080c2010();
      func_0x00010bf62aa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _CGContextSetLineWidth(puVar5);
      func_0x0001080c1ccc();
      param_3 = puVar2;
      func_0x00010bf62aa0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1080a04d4(puVar5);
      func_0x0001080c1ccc();
      func_0x0001080c1f90();
      func_0x00010c26c860();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bdf7a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1ccc();
      param_4 = auStack_280;
      puVar13 = auStack_240;
      puVar4 = puVar3;
      func_0x0001080c1cc4();
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_270;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_270 != lVar11) {
              _objc_enumerationMutation(puVar3);
            }
            func_0x00010c11f2a0(*(undefined8 *)(lStack_278 + (long)puVar13 * 8));
            func_0x0001080c212c();
            param_3 = puVar6;
            _NSIntersectionRange();
            if (param_3 != (undefined *)0x0) {
              func_0x00010bf40c40();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080c1d9c(puVar2);
              func_0x00010be06520();
              func_0x0001080c1ebc();
            }
            puVar13 = puVar13 + 1;
            in_ZR = puVar13 == puVar4;
          } while (puVar13 < puVar4);
          param_4 = auStack_280;
          puVar13 = auStack_240;
          puVar4 = puVar3;
          func_0x0001080c1cc4();
        } while (puVar4 != (undefined *)0x0);
      }
      func_0x0001080c1d30();
      _CGContextRestoreGState();
      puVar3 = puVar5;
    }
    func_0x0001080c1bd0(uStack_1c0);
    if ((bool)in_ZR) {
      return;
    }
  }
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_350 = extraout_x8_02;
  func_0x0001080c1d08();
  puVar2 = param_4;
  func_0x00010c11f2a0();
  puVar6 = puVar3;
  func_0x00010c26c860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _NSIntersectionRange(puVar2,param_3,0,puVar6);
  puVar6 = param_3;
  func_0x0001080c1db8();
  if (param_3 != (undefined *)0x0) {
    func_0x00010c0e8ca0(param_4);
    puVar5 = PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8;
    uVar1 = param_1 == 0.0;
    if (0.0 < param_1) {
      puVar4 = puVar2;
      while (uVar1 = puVar4 == puVar2 + (long)param_3, puVar4 < puVar2 + (long)param_3) {
        func_0x0001080c1ecc();
        func_0x00010bfcd220();
        func_0x00010c099260(puVar3);
        puVar7 = puVar3;
        func_0x00010bf35a00();
        puVar4 = puVar2;
        puVar9 = param_3;
        _NSIntersectionRange(puVar2,param_3,puVar7,puVar6);
        if (puVar9 == (undefined *)0x0) {
          puVar4 = puVar7 + (long)puVar6;
          puVar6 = puVar9;
        }
        else {
          puVar7 = puVar4;
          puVar10 = puVar9;
          func_0x0001080c1fc0();
          func_0x0001080c1eac();
          puVar8 = puVar7;
          puVar6 = puVar10;
          func_0x0001080c1ecc();
          func_0x00010c26ba20();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080c1ecc();
          func_0x00010bf20b60();
          _CGRectIsEmpty();
          if (((ulong)puVar8 & 1) == 0) {
            func_0x0001080c20ec();
            _CGRectGetMidX();
            dVar18 = unaff_d9 + param_1;
            func_0x0001080c20ec();
            _CGRectGetMidY();
            dVar17 = unaff_d8 + param_1;
            _CGContextSaveGState(puVar13);
            func_0x00010c0e8ca0(param_4);
            _CGContextSetAlpha(puVar13);
            func_0x00010c27ae20(param_4);
            dVar15 = dVar18;
            _CGContextTranslateCTM(dVar18,dVar17 + param_1,puVar13);
            func_0x00010c14e120(param_4);
            dVar16 = dVar15;
            func_0x00010c14e120(param_4);
            _CGContextScaleCTM(dVar15,dVar16,puVar13);
            puVar6 = puVar13;
            _CGContextTranslateCTM(-dVar18,-dVar17);
            param_1 = 0.0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            uStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_418 = 0;
            uStack_420 = 0;
            uStack_408 = 0;
            plStack_410 = (long *)0x0;
            func_0x0001080c1fc0();
            func_0x00010be6e900();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x0001080c1cc4();
            if (puVar8 != (undefined *)0x0) {
              lVar11 = *plStack_410;
              do {
                puVar14 = (undefined *)0x0;
                do {
                  if (*plStack_410 != lVar11) {
                    _objc_enumerationMutation(puVar6);
                  }
                  func_0x00010c26c860(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080c1d9c(puVar3);
                  func_0x00010be066c0();
                  func_0x0001080c1ebc();
                  puVar14 = puVar14 + 1;
                } while (puVar14 < puVar8);
                puVar8 = puVar6;
                func_0x0001080c1cc4();
              } while (puVar8 != (undefined *)0x0);
            }
            func_0x0001080c1d28();
            func_0x0001080c1ed8();
            puVar6 = puVar5;
            apuStack_430[0] = puVar3;
            func_0x0001080c1d54(apuStack_430,puVar5,puVar7,puVar10);
            func_0x0001080c1fc0();
            func_0x0001080c1d9c();
            func_0x00010be06540();
            _CGContextRestoreGState();
          }
          puVar4 = puVar4 + (long)puVar9;
          func_0x0001080c1d20();
        }
      }
    }
  }
  _objc_release();
  func_0x0001080c1bd0(uStack_350);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar2 = param_4;
  func_0x0001080c1ed8();
  apuStack_4c0[0] = puVar2;
  _objc_msgSendSuper2(apuStack_4c0,PTR_s_drawBackgroundForGlyphRange_atPo_11253b4d8);
  puVar2 = param_4;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2144();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  func_0x0001080c1d10();
  if (puVar2 != puVar3) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x0001080c1eac();
    func_0x0001080c20bc();
    func_0x0001080c1d10();
    func_0x0001080c1c84();
    puVar2 = param_4;
    _objc_retain();
    func_0x0001080c1f00();
    func_0x00010bf97d80();
    func_0x0001080c20e0();
    func_0x00010be816a0();
    _UIGraphicsGetCurrentContext();
    _CGContextSaveGState();
    func_0x0001080c1d9c(puVar2);
    _CGContextTranslateCTM();
    func_0x00010bf51e00(param_4);
    func_0x0001080c1ef4();
    func_0x00010be06680();
    func_0x0001080c1d28();
    _CGContextRestoreGState(puVar2);
    func_0x0001080c1f38();
    func_0x0001080c1d10();
  }
  return;
}



/* Entry: 1080c0438; end: 1080c0653; -[SCValdiTextViewEffectsLayoutManager _drawCustomUnderlinesInRange:glyphsToShow:glyphsOrigin:context:] */

void FUN_1080c0438(double param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,long param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  double unaff_d8;
  double unaff_d9;
  double dVar16;
  double dVar17;
  undefined *apuStack_380 [2];
  undefined *apuStack_2f0 [2];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_210;
  undefined auStack_140 [8];
  long lStack_138;
  long *plStack_130;
  undefined auStack_100 [128];
  undefined8 uStack_80;
  
  func_0x0001080c1e48();
  puVar3 = param_2;
  puVar12 = param_5;
  func_0x0001080c1c44();
  uStack_80 = extraout_x8;
  func_0x00010bf62aa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) || (param_5 == (undefined *)0x0)) {
    func_0x0001080c1bd0(uStack_80);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    _objc_release();
    if (param_7 != 0) {
      func_0x0001080c2010();
      func_0x00010bf62aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _CGContextSetLineWidth(param_8);
      func_0x0001080c1ccc();
      param_3 = param_2;
      func_0x00010bf62aa0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1080a04d4(param_8);
      func_0x0001080c1ccc();
      func_0x0001080c1f90();
      func_0x00010c26c860();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010bdf7a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1ccc();
      param_4 = auStack_140;
      puVar12 = auStack_100;
      puVar4 = puVar3;
      func_0x0001080c1cc4();
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_130;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar11) {
              _objc_enumerationMutation(puVar3);
            }
            func_0x00010c11f2a0(*(undefined8 *)(lStack_138 + (long)puVar12 * 8));
            func_0x0001080c212c();
            param_3 = param_5;
            _NSIntersectionRange();
            if (param_3 != (undefined *)0x0) {
              func_0x00010bf40c40();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080c1d9c(param_2);
              func_0x00010be06520();
              func_0x0001080c1ebc();
            }
            puVar12 = puVar12 + 1;
            in_ZR = puVar12 == puVar4;
          } while (puVar12 < puVar4);
          param_4 = auStack_140;
          puVar12 = auStack_100;
          puVar4 = puVar3;
          func_0x0001080c1cc4();
        } while (puVar4 != (undefined *)0x0);
      }
      func_0x0001080c1d30();
      _CGContextRestoreGState();
      puVar3 = param_8;
    }
    func_0x0001080c1bd0(uStack_80);
    if ((bool)in_ZR) {
      return;
    }
  }
  uVar2 = 0;
  ___stack_chk_fail();
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_210 = extraout_x8_00;
  func_0x0001080c1d08();
  puVar4 = param_4;
  func_0x00010c11f2a0();
  puVar5 = puVar3;
  func_0x00010c26c860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _NSIntersectionRange(puVar4,param_3,0,puVar5);
  puVar5 = param_3;
  func_0x0001080c1db8();
  if (param_3 != (undefined *)0x0) {
    func_0x00010c0e8ca0(param_4);
    puVar1 = PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8;
    uVar2 = param_1 == 0.0;
    if (0.0 < param_1) {
      puVar7 = puVar4;
      while (uVar2 = puVar7 == puVar4 + (long)param_3, puVar7 < puVar4 + (long)param_3) {
        func_0x0001080c1ecc();
        func_0x00010bfcd220();
        func_0x00010c099260(puVar3);
        puVar6 = puVar3;
        func_0x00010bf35a00();
        puVar7 = puVar4;
        puVar9 = param_3;
        _NSIntersectionRange(puVar4,param_3,puVar6,puVar5);
        if (puVar9 == (undefined *)0x0) {
          puVar7 = puVar6 + (long)puVar5;
          puVar5 = puVar9;
        }
        else {
          puVar6 = puVar7;
          puVar10 = puVar9;
          func_0x0001080c1fc0();
          func_0x0001080c1eac();
          puVar8 = puVar6;
          puVar5 = puVar10;
          func_0x0001080c1ecc();
          func_0x00010c26ba20();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080c1ecc();
          func_0x00010bf20b60();
          _CGRectIsEmpty();
          if (((ulong)puVar8 & 1) == 0) {
            func_0x0001080c20ec();
            _CGRectGetMidX();
            dVar17 = unaff_d9 + param_1;
            func_0x0001080c20ec();
            _CGRectGetMidY();
            dVar16 = unaff_d8 + param_1;
            _CGContextSaveGState(puVar12);
            func_0x00010c0e8ca0(param_4);
            _CGContextSetAlpha(puVar12);
            func_0x00010c27ae20(param_4);
            dVar14 = dVar17;
            _CGContextTranslateCTM(dVar17,dVar16 + param_1,puVar12);
            func_0x00010c14e120(param_4);
            dVar15 = dVar14;
            func_0x00010c14e120(param_4);
            _CGContextScaleCTM(dVar14,dVar15,puVar12);
            puVar5 = puVar12;
            _CGContextTranslateCTM(-dVar17,-dVar16);
            param_1 = 0.0;
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_2c8 = 0;
            plStack_2d0 = (long *)0x0;
            func_0x0001080c1fc0();
            func_0x00010be6e900();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x0001080c1cc4();
            if (puVar8 != (undefined *)0x0) {
              lVar11 = *plStack_2d0;
              do {
                puVar13 = (undefined *)0x0;
                do {
                  if (*plStack_2d0 != lVar11) {
                    _objc_enumerationMutation(puVar5);
                  }
                  func_0x00010c26c860(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080c1d9c(puVar3);
                  func_0x00010be066c0();
                  func_0x0001080c1ebc();
                  puVar13 = puVar13 + 1;
                } while (puVar13 < puVar8);
                puVar8 = puVar5;
                func_0x0001080c1cc4();
              } while (puVar8 != (undefined *)0x0);
            }
            func_0x0001080c1d28();
            func_0x0001080c1ed8();
            puVar5 = puVar1;
            apuStack_2f0[0] = puVar3;
            func_0x0001080c1d54(apuStack_2f0,puVar1,puVar6,puVar10);
            func_0x0001080c1fc0();
            func_0x0001080c1d9c();
            func_0x00010be06540();
            _CGContextRestoreGState();
          }
          puVar7 = puVar7 + (long)puVar9;
          func_0x0001080c1d20();
        }
      }
    }
  }
  _objc_release();
  func_0x0001080c1bd0(uStack_210);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar12 = param_4;
  func_0x0001080c1ed8();
  apuStack_380[0] = puVar12;
  _objc_msgSendSuper2(apuStack_380,PTR_s_drawBackgroundForGlyphRange_atPo_11253b4d8);
  puVar12 = param_4;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2144();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  func_0x0001080c1d10();
  if (puVar12 != puVar3) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x0001080c1eac();
    func_0x0001080c20bc();
    func_0x0001080c1d10();
    func_0x0001080c1c84();
    puVar12 = param_4;
    _objc_retain();
    func_0x0001080c1f00();
    func_0x00010bf97d80();
    func_0x0001080c20e0();
    func_0x00010be816a0();
    _UIGraphicsGetCurrentContext();
    _CGContextSaveGState();
    func_0x0001080c1d9c(puVar12);
    _CGContextTranslateCTM();
    func_0x00010bf51e00(param_4);
    func_0x0001080c1ef4();
    func_0x00010be06680();
    func_0x0001080c1d28();
    _CGContextRestoreGState(puVar12);
    func_0x0001080c1f38();
    func_0x0001080c1d10();
  }
  return;
}



/* Entry: 1080c0654; end: 1080c09c3; -[SCValdiTextViewEffectsLayoutManager _drawAnimatedRange:glyphsOrigin:context:] */

void FUN_1080c0654(double param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  double dVar15;
  double dVar16;
  undefined *apuStack_220 [2];
  undefined *apuStack_190 [2];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_b0;
  
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_b0 = extraout_x8;
  func_0x0001080c1d08();
  puVar2 = param_4;
  func_0x00010c11f2a0();
  puVar3 = param_2;
  func_0x00010c26c860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _NSIntersectionRange(puVar2,param_3,0,puVar3);
  puVar3 = param_3;
  func_0x0001080c1db8();
  if (param_3 != (undefined *)0x0) {
    func_0x00010c0e8ca0(param_4);
    puVar1 = PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8;
    in_ZR = param_1 == 0.0;
    if (0.0 < param_1) {
      puVar5 = puVar2;
      while (in_ZR = puVar5 == puVar2 + (long)param_3, puVar5 < puVar2 + (long)param_3) {
        func_0x0001080c1ecc();
        func_0x00010bfcd220();
        func_0x00010c099260(param_2);
        puVar4 = param_2;
        func_0x00010bf35a00();
        puVar5 = puVar2;
        puVar9 = param_3;
        _NSIntersectionRange(puVar2,param_3,puVar4,puVar3);
        if (puVar9 == (undefined *)0x0) {
          puVar5 = puVar4 + (long)puVar3;
          puVar3 = puVar9;
        }
        else {
          puVar4 = puVar5;
          puVar10 = puVar9;
          func_0x0001080c1fc0();
          func_0x0001080c1eac();
          puVar6 = puVar4;
          puVar3 = puVar10;
          func_0x0001080c1ecc();
          func_0x00010c26ba20();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080c1ecc();
          func_0x00010bf20b60();
          _CGRectIsEmpty();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x0001080c20ec();
            _CGRectGetMidX();
            dVar16 = unaff_d9 + param_1;
            func_0x0001080c20ec();
            _CGRectGetMidY();
            dVar15 = unaff_d8 + param_1;
            _CGContextSaveGState(param_5);
            func_0x00010c0e8ca0(param_4);
            _CGContextSetAlpha(param_5);
            func_0x00010c27ae20(param_4);
            dVar13 = dVar16;
            _CGContextTranslateCTM(dVar16,dVar15 + param_1,param_5);
            func_0x00010c14e120(param_4);
            dVar14 = dVar13;
            func_0x00010c14e120(param_4);
            _CGContextScaleCTM(dVar13,dVar14,param_5);
            uVar7 = param_5;
            _CGContextTranslateCTM(-dVar16,-dVar15);
            param_1 = 0.0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            plStack_170 = (long *)0x0;
            func_0x0001080c1fc0();
            func_0x00010be6e900();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x0001080c1cc4();
            if (uVar8 != 0) {
              lVar11 = *plStack_170;
              do {
                uVar12 = 0;
                do {
                  if (*plStack_170 != lVar11) {
                    _objc_enumerationMutation(uVar7);
                  }
                  func_0x00010c26c860(param_2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080c1d9c(param_2);
                  func_0x00010be066c0();
                  func_0x0001080c1ebc();
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar8);
                uVar8 = uVar7;
                func_0x0001080c1cc4();
              } while (uVar8 != 0);
            }
            func_0x0001080c1d28();
            func_0x0001080c1ed8();
            puVar3 = puVar1;
            apuStack_190[0] = param_2;
            func_0x0001080c1d54(apuStack_190,puVar1,puVar4,puVar10);
            func_0x0001080c1fc0();
            func_0x0001080c1d9c();
            func_0x00010be06540();
            _CGContextRestoreGState();
          }
          puVar5 = puVar5 + (long)puVar9;
          func_0x0001080c1d20();
        }
      }
    }
  }
  _objc_release();
  func_0x0001080c1bd0(uStack_b0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar2 = param_4;
  func_0x0001080c1ed8();
  apuStack_220[0] = puVar2;
  _objc_msgSendSuper2(apuStack_220,PTR_s_drawBackgroundForGlyphRange_atPo_11253b4d8);
  puVar2 = param_4;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2144();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  func_0x0001080c1d10();
  if (puVar2 != param_2) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x0001080c1eac();
    func_0x0001080c20bc();
    func_0x0001080c1d10();
    func_0x0001080c1c84();
    puVar2 = param_4;
    _objc_retain();
    func_0x0001080c1f00();
    func_0x00010bf97d80();
    func_0x0001080c20e0();
    func_0x00010be816a0();
    _UIGraphicsGetCurrentContext();
    _CGContextSaveGState();
    func_0x0001080c1d9c(puVar2);
    _CGContextTranslateCTM();
    func_0x00010bf51e00(param_4);
    func_0x0001080c1ef4();
    func_0x00010be06680();
    func_0x0001080c1d28();
    _CGContextRestoreGState(puVar2);
    func_0x0001080c1f38();
    func_0x0001080c1d10();
  }
  return;
}



/* Entry: 1080c09c4; end: 1080c0b03; -[SCValdiTextViewEffectsLayoutManager drawBackgroundForGlyphRange:atPoint:] */

void FUN_1080c09c4(long param_1)

{
  long lVar1;
  long unaff_x21;
  long alStack_50 [2];
  
  func_0x0001080c1e48();
  lVar1 = param_1;
  func_0x0001080c1ed8();
  alStack_50[0] = lVar1;
  _objc_msgSendSuper2(alStack_50,PTR_s_drawBackgroundForGlyphRange_atPo_11253b4d8);
  lVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2144();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  func_0x0001080c1d10();
  if (lVar1 != unaff_x21) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x0001080c1eac();
    func_0x0001080c20bc();
    func_0x0001080c1d10();
    func_0x0001080c1c84();
    lVar1 = param_1;
    _objc_retain();
    func_0x0001080c1f00();
    func_0x00010bf97d80();
    func_0x0001080c20e0();
    func_0x00010be816a0();
    _UIGraphicsGetCurrentContext();
    _CGContextSaveGState();
    func_0x0001080c1d9c(lVar1);
    _CGContextTranslateCTM();
    func_0x00010bf51e00(param_1);
    func_0x0001080c1ef4();
    func_0x00010be06680();
    func_0x0001080c1d28();
    _CGContextRestoreGState(lVar1);
    func_0x0001080c1f38();
    func_0x0001080c1d10();
  }
  return;
}



/* Entry: 1080c0b04; end: 1080c0cab;  */

void FUN_1080c0b04(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar4 = param_2;
  func_0x0001080c1e78();
  func_0x00010bf35a00(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1da8();
  func_0x0001080c1d30();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1fc0();
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1d30();
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = uVar1;
    func_0x00010c11f420();
    func_0x00010c08fa60();
    if (uVar3 + lVar4 < uVar1) {
      func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1fc0();
      func_0x00010c11f340();
      func_0x0001080c1d30();
      func_0x00010bf20b60(*(undefined8 *)(unaff_x20 + 0x20));
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010bf14260(uVar5);
    func_0x0001080c1c08(uVar5);
    func_0x00010bdc8f20();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x0001080c1fcc();
    func_0x00010c2971a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    func_0x0001080c1d28();
  }
  func_0x0001080c1db8();
  func_0x0001080c1d18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c0cac; end: 1080c0cbb; -[SCValdiTextViewEffectsLayoutManager _addVerticalPaddingTo:padding:] */

void FUN_1080c0cac(void)

{
  return;
}



/* Entry: 1080c0cbc; end: 1080c0d13; -[SCValdiTextViewEffectsLayoutManager _processLineRects:] */

void FUN_1080c0cbc(ulong param_1)

{
  ulong unaff_x20;
  ulong uVar1;
  
  func_0x0001080c1bf8();
  func_0x0001080c1dc0();
  if (1 < param_1) {
    for (uVar1 = 1; func_0x0001080c1dc0(), uVar1 < param_1; uVar1 = uVar1 + 1) {
      param_1 = unaff_x20;
      func_0x00010be81680();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c0d14; end: 1080c0fd7; -[SCValdiTextViewEffectsLayoutManager _processLineRectAtIndex:maxIndex:lineRects:] */

void FUN_1080c0d14(double param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5
                  ,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  uVar3 = param_5;
  func_0x0001080c1eb4();
  func_0x0001080c1dc0();
  if ((param_8 < param_7 || param_7 < 1) || uVar3 < 2) goto LAB_1080c0fac;
  func_0x0001080c1ef4();
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1f40();
  dVar6 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  func_0x0001080c1d20();
  lVar5 = param_7 + -1;
  uVar4 = param_9;
  func_0x00010c0dfd20(param_9,param_6,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar10 = dVar6;
  func_0x0001080c1db8();
  func_0x0001080c1cec();
  bVar1 = false;
  if ((dVar6 < param_1) && (bVar1 = false, !NAN(param_1 - dVar6) && !NAN(dVar10 + dVar10))) {
    bVar1 = param_1 - dVar6 < dVar10 + dVar10;
  }
  if (bVar1) {
    bVar1 = true;
    dVar10 = param_4;
  }
  else {
    dVar10 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    dVar7 = dVar6;
    func_0x0001080c2044(dVar6,uVar8,uVar9);
    dVar10 = dVar10 - dVar7;
    func_0x0001080c1cec();
    if (dVar10 <= dVar7 * -2.0) {
      bVar1 = false;
      dVar10 = dVar7 * -2.0;
    }
    else {
      dVar7 = param_1;
      func_0x0001080c1db0(param_1,param_2,param_3);
      dVar10 = dVar6;
      func_0x0001080c2044(dVar6,uVar8,uVar9);
      bVar1 = dVar7 < dVar10;
    }
  }
  func_0x0001080c1cec();
  bVar2 = false;
  if ((param_1 < dVar6) && (bVar2 = false, !NAN(dVar6 - param_1) && !NAN(dVar10 + dVar10))) {
    bVar2 = dVar6 - param_1 < dVar10 + dVar10;
  }
  if (bVar2) {
LAB_1080c0f64:
    func_0x0001080c1fcc();
    func_0x0001080c20ec();
    func_0x00010c2971a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(param_9,param_6,lVar5,uVar4);
    func_0x0001080c1d28();
  }
  else {
    dVar10 = dVar6;
    func_0x0001080c1ee4(dVar6,uVar8,uVar9);
    dVar7 = param_1;
    func_0x0001080c1cd4(param_1,param_2);
    dVar10 = dVar10 - dVar7;
    func_0x0001080c1cec();
    if (dVar7 * -2.0 < dVar10) {
      dVar10 = dVar6;
      func_0x0001080c1ee4(dVar6,uVar8,uVar9);
      func_0x0001080c1cd4(param_1,param_2);
      if (dVar10 < param_1) goto LAB_1080c0f64;
    }
    if (!bVar1) goto LAB_1080c0fac;
    func_0x0001080c1fcc();
    func_0x00010c2971a0(dVar6,param_2,uVar9,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1ef4();
    func_0x00010c130f40();
    func_0x0001080c1d20();
    lVar5 = param_7 + 1;
  }
  func_0x00010be81680(param_5,param_6,lVar5,param_8,param_9);
LAB_1080c0fac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 1080c0fd8; end: 1080c179f; -[SCValdiTextViewEffectsLayoutManager _drawLineRects:] */

void FUN_1080c0fd8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar10;
  double unaff_d13;
  double unaff_d15;
  
  func_0x0001080c1d08();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_opt_new();
  puVar5 = (undefined *)0x0;
  puVar4 = puVar3;
  while (func_0x0001080c1dc0(), puVar5 < puVar4) {
    func_0x0001080c1ef4();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f40();
    func_0x0001080c210c();
    func_0x0001080c1d20();
    dVar10 = param_1;
    dVar8 = param_3;
    dVar9 = param_4;
    if (puVar5 == (undefined *)0x0) {
      func_0x0001080c1bbc();
      _CGRectGetMinX();
      dVar10 = param_1;
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c38();
      dVar7 = param_1;
      func_0x00010c0d18c0(param_1,unaff_d13 + dVar10,puVar3);
      func_0x0001080c1bbc();
      _CGRectGetMinX();
      func_0x0001080c1c6c();
      dVar10 = param_1 + dVar7;
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      puVar4 = puVar3;
      dVar8 = unaff_d11;
      dVar9 = unaff_d10;
      func_0x00010befac40(dVar10,dVar7);
      func_0x0001080c1bbc();
      _CGRectGetMaxX();
      func_0x0001080c1c6c();
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      param_2 = dVar10;
      func_0x0001080c1c78();
      func_0x0001080c1bbc();
      _CGRectGetMaxX();
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c38();
      unaff_d13 = unaff_d13 + dVar10;
      func_0x0001080c1bbc();
      _CGRectGetMaxX();
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c9c();
    }
    puVar5 = puVar5 + 1;
    func_0x0001080c1dc0();
    param_1 = dVar10;
    param_3 = dVar8;
    param_4 = dVar9;
    if (puVar5 < puVar4) {
      func_0x0001080c1ef4();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1f40();
      dVar7 = dVar10;
      func_0x0001080c1d20();
      func_0x0001080c1c08();
      func_0x0001080c1db0();
      dVar6 = dVar10;
      func_0x0001080c2044(dVar10,param_2,dVar8);
      dVar7 = dVar7 - dVar6;
      param_3 = dVar8;
      if (dVar7 <= 0.0) {
        unaff_d13 = param_2;
        if (0.0 <= dVar7) {
          func_0x0001080c1d48();
          _CGRectGetMaxX();
          func_0x0001080c1d48();
          param_4 = dVar9;
          _CGRectGetMinY();
          param_1 = dVar7;
          func_0x0001080c1cec();
          param_2 = dVar7 + param_1;
          func_0x0001080c1d60();
          unaff_d9 = dVar7;
          unaff_d10 = dVar8;
          unaff_d11 = dVar9;
          unaff_d15 = dVar10;
        }
        else {
          func_0x0001080c1c08();
          _CGRectGetMaxX();
          dVar8 = dVar10;
          func_0x0001080c1c90(dVar10,param_2);
          func_0x0001080c1c38();
          func_0x0001080c1ff8();
          func_0x0001080c1c08();
          func_0x0001080c1ee4();
          func_0x0001080c1c38();
          dVar8 = param_2 + dVar8;
          dVar9 = dVar10;
          func_0x0001080c1c90(dVar10,param_2);
          dVar7 = unaff_d11;
          func_0x0001080c1ee4(unaff_d11,unaff_d10,unaff_d9);
          func_0x0001080c1be4();
          _CGRectGetMinY();
          func_0x0001080c1e20();
          func_0x00010befac40(dVar8,dVar9,dVar7);
          func_0x0001080c1be4();
          _CGRectGetMaxX();
          func_0x0001080c1cec();
          func_0x0001080c1be4();
          _CGRectGetMinY();
          param_2 = dVar8;
          func_0x0001080c1d60();
          func_0x0001080c1be4();
          _CGRectGetMaxX();
          func_0x0001080c1be4();
          _CGRectGetMinY();
          unaff_d10 = dVar8;
          func_0x0001080c1cec();
          unaff_d9 = dVar8 + unaff_d10;
          func_0x0001080c1be4();
          _CGRectGetMaxX();
          param_1 = unaff_d10;
          func_0x0001080c1be4();
          _CGRectGetMinY();
          func_0x0001080c1e20();
          func_0x0001080c1e54();
          param_3 = unaff_d10;
          func_0x00010befac40();
          param_4 = unaff_d15;
          unaff_d15 = dVar10;
        }
      }
      else {
        dVar7 = unaff_d11;
        _CGRectGetMaxX(unaff_d11,unaff_d10,unaff_d9,unaff_d15);
        dVar6 = dVar7;
        func_0x0001080c1bbc();
        _CGRectGetMaxY();
        func_0x0001080c1c38();
        func_0x0001080c1c78();
        func_0x0001080c1bbc();
        _CGRectGetMaxX();
        func_0x0001080c1c6c();
        dVar7 = dVar7 - dVar6;
        func_0x0001080c1bbc();
        _CGRectGetMaxY();
        func_0x0001080c1bbc();
        _CGRectGetMaxX();
        _CGRectGetMaxY(unaff_d11,unaff_d10,unaff_d9,unaff_d15);
        func_0x0001080c1e20();
        func_0x0001080c2078(dVar7);
        _CGRectGetMaxX(dVar10,param_2,dVar8);
        func_0x0001080c1c6c();
        func_0x0001080c1cf4();
        func_0x0001080c1c78();
        param_1 = dVar10;
        func_0x0001080c1db0(dVar10,param_2,dVar8);
        dVar7 = param_1;
        func_0x0001080c1cf4();
        func_0x0001080c1c38();
        func_0x0001080c1db0();
        func_0x0001080c1cf4();
        func_0x0001080c1e20();
        func_0x0001080c2078();
        param_4 = dVar9;
        unaff_d9 = dVar10;
        unaff_d10 = dVar8;
        unaff_d13 = dVar6 + dVar7;
      }
    }
  }
  func_0x0001080c1dc0();
  puVar5 = puVar4;
  do {
    while( true ) {
      do {
        puVar1 = puVar5 + -1;
        if ((long)puVar1 < 0) {
          func_0x00010bf3dc80(puVar3);
          func_0x00010bf13d40(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19bbe0();
          func_0x0001080c1d18();
          func_0x00010bfad4a0(puVar3);
          func_0x0001080c1d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(param_7);
          return;
        }
        func_0x0001080c1ef4();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        func_0x0001080c210c();
        func_0x0001080c1db8();
        func_0x0001080c1dc0();
        dVar10 = param_1;
        if (puVar5 == puVar4) {
          func_0x0001080c1bbc();
          _CGRectGetMaxX();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          func_0x0001080c1c38();
          func_0x0001080c1c78();
          func_0x0001080c1bbc();
          _CGRectGetMaxX();
          func_0x0001080c1c6c();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          func_0x0001080c1bbc();
          _CGRectGetMaxX();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          func_0x0001080c1c9c();
          func_0x0001080c1bbc();
          _CGRectGetMinX();
          func_0x0001080c1c6c();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          param_2 = param_1;
          func_0x0001080c1c78();
          func_0x0001080c1bbc();
          _CGRectGetMinX();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          func_0x0001080c1c38();
          func_0x0001080c1bbc();
          _CGRectGetMinX();
          func_0x0001080c1bbc();
          _CGRectGetMaxY();
          func_0x0001080c1c9c();
          dVar10 = param_1;
        }
        puVar2 = puVar5 + -2;
        puVar5 = puVar1;
        param_1 = dVar10;
      } while ((long)puVar2 < 0);
      puVar4 = param_7;
      func_0x00010c0dfd40(param_7,param_6,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1f40();
      dVar8 = dVar10;
      func_0x0001080c1d20();
      func_0x0001080c1c08();
      _CGRectGetMinX();
      dVar9 = dVar10;
      _CGRectGetMinX(dVar10,param_2,param_3,param_4);
      dVar8 = dVar8 - dVar9;
      if (0.0 <= dVar8) break;
      func_0x0001080c1c08();
      _CGRectGetMinX();
      dVar9 = dVar8;
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c38();
      func_0x0001080c1c78();
      func_0x0001080c1bbc();
      _CGRectGetMinX();
      func_0x0001080c1c6c();
      dVar8 = dVar8 + dVar9;
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      dVar7 = dVar9;
      func_0x0001080c1bbc();
      _CGRectGetMinX();
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1e20();
      func_0x00010befac40(dVar8,dVar9,dVar7);
      _CGRectGetMinX(dVar10,param_2,param_3);
      func_0x0001080c1c6c();
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c78();
      param_1 = dVar10;
      func_0x0001080c2018(dVar10,param_2);
      dVar8 = param_1;
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1c38();
      func_0x0001080c2018(dVar10,param_2);
      func_0x0001080c1bbc();
      _CGRectGetMinY();
      func_0x0001080c1e20();
      param_2 = param_2 - dVar8;
      param_3 = dVar10;
      dVar10 = unaff_d15;
LAB_1080c16f4:
      func_0x00010befac40();
      unaff_d15 = dVar10;
    }
    if (0.0 < dVar8) {
      func_0x0001080c1c08();
      _CGRectGetMinX();
      func_0x0001080c1d48();
      _CGRectGetMaxY();
      func_0x0001080c1c38();
      func_0x0001080c1ff8();
      func_0x0001080c1c08();
      _CGRectGetMinX();
      func_0x0001080c1c38();
      dVar8 = param_2 - dVar8;
      dVar9 = dVar10;
      _CGRectGetMaxY(dVar10,param_2,param_3,param_4);
      dVar7 = dVar9;
      func_0x0001080c1c08();
      _CGRectGetMinX();
      func_0x0001080c1be4();
      _CGRectGetMaxY();
      func_0x0001080c1e20();
      func_0x00010befac40(dVar8,dVar9,dVar7);
      func_0x0001080c1be4();
      _CGRectGetMinX();
      func_0x0001080c1cec();
      func_0x0001080c1be4();
      _CGRectGetMaxY();
      param_2 = dVar8;
      func_0x0001080c1d60();
      func_0x0001080c1be4();
      _CGRectGetMinX();
      func_0x0001080c1be4();
      _CGRectGetMaxY();
      func_0x0001080c1cec();
      func_0x0001080c1be4();
      _CGRectGetMinX();
      param_1 = dVar8;
      func_0x0001080c1be4();
      _CGRectGetMaxY();
      func_0x0001080c1e20();
      func_0x0001080c1e54();
      param_3 = dVar8;
      param_4 = unaff_d15;
      goto LAB_1080c16f4;
    }
    func_0x0001080c1d48();
    _CGRectGetMinX();
    func_0x0001080c1d48();
    _CGRectGetMaxY();
    param_1 = dVar8;
    func_0x0001080c1cec();
    param_2 = dVar8 - param_1;
    func_0x0001080c1d60();
    unaff_d15 = dVar10;
  } while( true );
}



/* Entry: 1080c17a0; end: 1080c17ab; -[SCValdiTextViewEffectsLayoutManager effects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c17a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746ac);
}



/* Entry: 1080c17ac; end: 1080c17d7; -[SCValdiTextViewEffectsLayoutManager setEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c17ac(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c17d8; end: 1080c17e3; -[SCValdiTextViewEffectsLayoutManager customUnderlineStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c17d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746bc);
}



/* Entry: 1080c17e4; end: 1080c17ef; -[SCValdiTextViewEffectsLayoutManager customUnderlineSourceAttributedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c17e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746c0);
}



/* Entry: 1080c17f0; end: 1080c17fb; -[SCValdiTextViewEffectsLayoutManager customUnderlineCharacterRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c17f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746c4);
}



/* Entry: 1080c17fc; end: 1080c1807; -[SCValdiTextViewEffectsLayoutManager customUnderlineFallbackColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c17fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746c8);
}



/* Entry: 1080c1808; end: 1080c1813; -[SCValdiTextViewEffectsLayoutManager processedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746b0);
}



/* Entry: 1080c1814; end: 1080c1823; -[SCValdiTextViewEffectsLayoutManager hasActiveAnimationRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080c1814(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127746a8);
}



/* Entry: 1080c1824; end: 1080c1833; -[SCValdiTextViewEffectsLayoutManager setHasActiveAnimationRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c1824(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127746a8) = param_3;
  return;
}



/* Entry: 1080c1834; end: 1080c1853; -[SCValdiTextViewEffectsLayoutManager textAnimationCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c1834(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127746b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080c1854; end: 1080c185f; -[SCValdiTextViewEffectsLayoutManager textAnimationBasePartIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746a4);
}



/* Entry: 1080c1860; end: 1080c187f; -[SCValdiTextViewEffectsLayoutManager valdiViewNode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c1860(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127746b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080c1880; end: 1080c188b; -[SCValdiTextViewEffectsLayoutManager animationEntries] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746cc);
}



/* Entry: 1080c188c; end: 1080c18b7; -[SCValdiTextViewEffectsLayoutManager setAnimationEntries:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c188c(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c18b8; end: 1080c18c3; -[SCValdiTextViewEffectsLayoutManager cachedAnimationRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c18b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746d0);
}



/* Entry: 1080c18c4; end: 1080c18ef; -[SCValdiTextViewEffectsLayoutManager setCachedAnimationRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c18c4(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c18f0; end: 1080c18fb; -[SCValdiTextViewEffectsLayoutManager cachedVisibleAnimationRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c18f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746d4);
}



/* Entry: 1080c18fc; end: 1080c1927; -[SCValdiTextViewEffectsLayoutManager setCachedVisibleAnimationRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c18fc(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c1928; end: 1080c1933; -[SCValdiTextViewEffectsLayoutManager cachedOutlineRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746d8);
}



/* Entry: 1080c1934; end: 1080c195f; -[SCValdiTextViewEffectsLayoutManager setCachedOutlineRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c1934(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c1960; end: 1080c196b; -[SCValdiTextViewEffectsLayoutManager cachedCustomUnderlineRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746dc);
}



/* Entry: 1080c196c; end: 1080c1997; -[SCValdiTextViewEffectsLayoutManager setCachedCustomUnderlineRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c196c(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c1998; end: 1080c19a3; -[SCValdiTextViewEffectsLayoutManager animationStartTimes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c1998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746e0);
}



/* Entry: 1080c19a4; end: 1080c19cf; -[SCValdiTextViewEffectsLayoutManager setAnimationStartTimes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c19a4(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c19d0; end: 1080c19db; -[SCValdiTextViewEffectsLayoutManager storedAnimationProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c19d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127746e4);
}



/* Entry: 1080c19dc; end: 1080c1a07; -[SCValdiTextViewEffectsLayoutManager setStoredAnimationProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c19dc(void)

{
  func_0x0001080c1d84();
  func_0x0001080c1d08();
  func_0x0001080c1e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c1a08; end: 1080c1ab7; -[SCValdiTextViewEffectsLayoutManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c1a08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127746e4,0);
  func_0x0001080c1c54((long)_DAT_1127746e0);
  func_0x0001080c1c54((long)_DAT_1127746dc);
  func_0x0001080c1c54((long)_DAT_1127746d8);
  func_0x0001080c1c54((long)_DAT_1127746d4);
  func_0x0001080c1c54((long)_DAT_1127746d0);
  func_0x0001080c1c54((long)_DAT_1127746cc);
  _objc_destroyWeak(param_1 + _DAT_1127746b8);
  _objc_destroyWeak(param_1 + _DAT_1127746b4);
  func_0x0001080c1c54((long)_DAT_1127746b0);
  func_0x0001080c1c54((long)_DAT_1127746c8);
  func_0x0001080c1c54((long)_DAT_1127746c4);
  func_0x0001080c1c54((long)_DAT_1127746c0);
  func_0x0001080c1c54((long)_DAT_1127746bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127746ac,0);
  return;
}



/* Entry: 1080c1ab8; end: 1080c1b0b;  */

bool FUN_1080c1ab8(double param_1,double param_2)

{
  double dVar1;
  
  _objc_retain();
  func_0x0001080c2034();
  func_0x0001080c202c();
  func_0x0001080c1f0c();
  dVar1 = param_1;
  func_0x0001080c1ccc();
  func_0x0001080c1e54();
  if ((ABS(dVar1) <= 2.220446049250313e-16) && (ABS(param_2 + -1.0) <= 2.220446049250313e-16)) {
    return 2.220446049250313e-16 < ABS(param_1 + -1.0);
  }
  return true;
}



/* Entry: 1080c1b0c; end: 1080c1b57;  */

bool FUN_1080c1b0c(double param_1,double param_2,double param_3)

{
  if ((ABS(param_1) <= 2.220446049250313e-16) && (ABS(param_2 + -1.0) <= 2.220446049250313e-16)) {
    return 2.220446049250313e-16 < ABS(param_3 + -1.0);
  }
  return true;
}



/* Entry: 1080c1b58; end: 1080c1bbb;  */

undefined8 FUN_1080c1b58(void)

{
  if (lRam00000001137292c8 != -1) {
    func_0x000107c27d9c(0x1137292c8,&PTR___NSConcreteGlobalBlock_110a1d838);
  }
  return uRam00000001137292c0;
}



/* Entry: 1080c1bbc; end: 1080c2197;  */

void FUN_1080c1bbc(void)

{
  return;
}



/* Entry: 1080c2198; end: 1080c22af; -[SCValdiTimePicker initWithFrame:] */

undefined1 * FUN_1080c2198(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fc668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189bc0(puVar1);
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51e00();
    FUN_1080c2a74();
    func_0x00010c26fda0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c2b1c();
    func_0x00010c215860();
    FUN_1080c2a74();
    func_0x00010c175640(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf27b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puVar1);
    _objc_release(puVar2);
    FUN_1080c2a74();
    func_0x00010c1dff00(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x0001080c2aac();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080c22b0; end: 1080c2343; -[SCValdiTimePicker sizeThatFits:] */

void FUN_1080c22b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_3;
  func_0x00010c1069e0();
  if (lVar1 == 2) {
    dVar2 = *(double *)PTR__UILayoutFittingCompressedSize_110345d28;
    dVar3 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
    func_0x00010c267060(param_3);
    if ((0.0 < dVar2) && (0.0 < dVar3)) {
      return;
    }
  }
  puStack_38 = PTR_PTR_1126fc668;
  lStack_40 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_40,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1080c2344; end: 1080c2347; -[SCValdiTimePicker convertPoint:fromView:] */

void FUN_1080c2344(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080c2348; end: 1080c234b; -[SCValdiTimePicker convertPoint:toView:] */

void FUN_1080c2348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080c234c; end: 1080c2353; -[SCValdiTimePicker willEnqueueIntoValdiPool] */

undefined8 FUN_1080c234c(void)

{
  return 1;
}



/* Entry: 1080c2354; end: 1080c2397; -[SCValdiTimePicker valdi_setTextColor:] */

undefined8 FUN_1080c2354(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c220220();
  func_0x00010c220220(param_1,param_2,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110ed5418);
  return 1;
}



/* Entry: 1080c2398; end: 1080c23cb; -[SCValdiTimePicker valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c2398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080c2b40();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127746e8);
  *(undefined8 *)(param_1 + _DAT_1127746e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080c23cc; end: 1080c25a7; -[SCValdiTimePicker _handleOnChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c23cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long lVar3;
  
  func_0x00010bf27b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2af0();
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2a7c();
  func_0x0001080c2a74();
  uVar1 = unaff_x20;
  func_0x00010bfe4740();
  func_0x00010c0ce880();
  lVar2 = param_1;
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_1080c29ac();
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2a94();
  _objc_release();
  func_0x0001080c2b2c();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2a10();
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2a94();
  _objc_release();
  func_0x0001080c2b2c();
  _objc_release(lVar2);
  lVar3 = (long)_DAT_1127746e8;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010b97f424();
    func_0x00010b97f5e4();
    func_0x00010b97f8e0(lVar2,uVar1);
    FUN_1080c29ac();
    func_0x0001080c2b34();
    func_0x00010b97f8e0(lVar2,unaff_x20);
    func_0x0001080c2a10();
    func_0x0001080c2b34();
    func_0x00010c0f9540(*(undefined8 *)(param_1 + lVar3));
    func_0x0001080c2b0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c25a8; end: 1080c26ab; -[SCValdiTimePicker _dateFromDate:withCalendarComponent:setTo:] */

void FUN_1080c25a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x0001080c2b40();
  puVar1 = param_1;
  func_0x00010bf27b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2b2c();
  func_0x00010c2201c0(param_1,param_2,param_5,param_4);
  puVar2 = param_1;
  func_0x00010bfe4740(param_1);
  func_0x0001080c2af0();
  func_0x00010c0ce880();
  func_0x00010c154b60(param_1);
  puVar3 = puVar1;
  func_0x00010bf64ea0(puVar1,param_2,param_5,puVar2,param_1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2aac();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080c2a74();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080c26ac; end: 1080c279b; +[SCValdiTimePicker bindAttributes:] */

void FUN_1080c26ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080c2b40();
  func_0x0001080c2a88();
  func_0x0001080c2a88();
  func_0x0001080c2a88();
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1d978,&PTR___NSConcreteGlobalBlock_110a1d9b8)
  ;
  func_0x00010bf1a0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf658,0,
                      &PTR___NSConcreteGlobalBlock_110a1d9f8,&PTR___NSConcreteGlobalBlock_110a1da18)
  ;
  func_0x00010bf1a100(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5498,1,
                      &PTR___NSConcreteGlobalBlock_110a1da38,&PTR___NSConcreteGlobalBlock_110a1da58)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1da78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c279c; end: 1080c2903;  */

undefined8 FUN_1080c279c(void)

{
  func_0x0001080c2adc();
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2af0();
  func_0x00010bdf80a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2a7c();
  func_0x0001080c2ab4();
  func_0x0001080c2a74();
  func_0x0001080c2aac();
  return 1;
}



/* Entry: 1080c2904; end: 1080c291f;  */

undefined8 FUN_1080c2904(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1c8520(param_2);
  return 1;
}



/* Entry: 1080c2920; end: 1080c2953;  */

void FUN_1080c2920(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setMinuteInterval__11264fb70,1);
  return;
}



/* Entry: 1080c2954; end: 1080c296f;  */

undefined8 FUN_1080c2954(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1dff00(param_2);
  return 1;
}



/* Entry: 1080c2970; end: 1080c297b;  */

void FUN_1080c2970(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setPreferredDatePickerStyle__1126559e8,1);
  return;
}



/* Entry: 1080c297c; end: 1080c2997;  */

void FUN_1080c297c(void)

{
  _objc_opt_new(PTR_PTR_1126d93e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080c2998; end: 1080c29ab; -[SCValdiTimePicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c2998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127746e8,0);
  return;
}



/* Entry: 1080c29ac; end: 1080c2a73;  */

undefined8 FUN_1080c29ac(void)

{
  if (lRam00000001137292d8 != -1) {
    func_0x000107c27d9c(0x1137292d8,&PTR___NSConcreteGlobalBlock_110a1da98);
  }
  return uRam00000001137292d0;
}



/* Entry: 1080c2a74; end: 1080c2b5f;  */

void FUN_1080c2a74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c2b60; end: 1080c2beb; -[SCValdiJSAction initWithJSRuntime:functionName:objectID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1080c2b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fc670;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127746ec) = param_3;
    func_0x0001003b1eb0((undefined1 *)((long)puVar1 + (long)_DAT_1127746f0),param_4);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127746f4) = param_5;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080c2bec; end: 1080c2c47; -[SCValdiJSAction performWithSender:] */

void FUN_1080c2bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b963478(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(param_1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c2c48; end: 1080c2cef; -[SCValdiJSAction performWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080c2c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lStack_38;
  long lStack_30;
  char cStack_28;
  byte bStack_27;
  
  func_0x00010b980484(&lStack_30,param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127746ec);
  uVar2 = *(undefined4 *)(param_1 + _DAT_1127746f4);
  lStack_38 = 0;
  if (((cStack_28 == '\t') && ((bStack_27 & 1) != 0)) && (lStack_38 = lStack_30, lStack_30 != 0)) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010b8f2244(uVar5,uVar2,param_1 + _DAT_1127746f0,&lStack_38);
  func_0x000104bddf60(lStack_38);
  func_0x00010b9a8d98(&lStack_30);
  return 0;
}



/* Entry: 1080c2cf0; end: 1080c2cff; -[SCValdiJSAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c2cf0(long param_1)

{
  func_0x00010007e5d0(param_1 + _DAT_1127746f0);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 1080c2d00; end: 1080c2d3f; -[SCValdiJSAction .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c2d00(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127746ec) = 0;
  *(undefined8 *)(param_1 + _DAT_1127746f0) = 0;
  return;
}



/* Entry: 1080c2d40; end: 1080c2da7;  */

long FUN_1080c2d40(long param_1,undefined8 param_2)

{
  func_0x00010b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 1;
  }
  else {
    func_0x0001080c2d1c(param_2);
    func_0x00010c076f00(param_1);
  }
  func_0x0001080c2eac();
  return param_1;
}



/* Entry: 1080c2da8; end: 1080c2ea3;  */

void FUN_1080c2da8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_40;
  long lStack_38;
  
  func_0x00010b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (long *)0x0) {
    func_0x00010b99dc78();
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    (**(code **)(*param_1 + 0x28))();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  else {
    lStack_38 = (long)*(char *)((long)param_3 + 0x17);
    puStack_40 = param_3;
    if (lStack_38 < 0) {
      puStack_40 = (undefined8 *)*param_3;
      lStack_38 = param_3[1];
    }
    ppuVar1 = &puStack_40;
    func_0x00010b9812a4(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c2d1c(param_2);
    func_0x00010c0eeea0(param_1);
    _objc_release(ppuVar1);
  }
  func_0x0001080c2eac();
  return;
}



/* Entry: 1080c2ea4; end: 1080c2eb3;  */

void FUN_1080c2ea4(void)

{
  return;
}



/* Entry: 1080c2eb4; end: 1080c2eeb;  */

void FUN_1080c2eb4(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (**(code **)param_1[1])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1080c2eec; end: 1080c2f17;  */

void FUN_1080c2eec(undefined8 param_1,char *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  char *pcVar7;
  char *pcStack_40;
  code *pcStack_38;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_3 != 0) {
    _objc_retain();
    if ((bRam0000000113817d78 & 1) == 0) {
      iVar2 = 0x13817d78;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        pcVar6 = (code *)0xffffffffffffffff;
        _dlsym(0xffffffffffffffff,"dispatch_sync_f");
        pcRam0000000113817d70 = pcVar6;
        ___cxa_guard_release(0x113817d78);
      }
    }
    pcStack_38 = FUN_1080c2eb4;
    pcStack_40 = param_2;
    (*pcRam0000000113817d70)(puVar1,&pcStack_40,&UNK_100029ddc);
    _objc_release(puVar1);
    return;
  }
  pcVar6 = FUN_1080c2eb4;
  pcVar7 = param_2;
  _objc_retain();
  if ((bRam0000000113817ce8 & 1) == 0) {
    iVar2 = 0x13817ce8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      pcVar7 = "dispatch_async_f";
      pcVar5 = (code *)0xffffffffffffffff;
      _dlsym(0xffffffffffffffff,"dispatch_async_f");
      pcRam0000000113817ce0 = pcVar5;
      ___cxa_guard_release(0x113817ce8);
    }
  }
  puVar3 = (undefined8 *)0x10;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    __ZSt9terminatev();
    func_0x000104bd46a0();
    pcStack_38 = (code *)&UNK_104c62d88;
    pcStack_40 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pcVar7);
    _objc_retain(pcVar6);
    if ((bRam0000000113817d28 & 1) == 0) {
      iVar2 = 0x13817d28;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        pcVar5 = (code *)0xffffffffffffffff;
        _dlsym(0xffffffffffffffff,"dispatch_group_async");
        pcRam0000000113817d20 = pcVar5;
        ___cxa_guard_release(0x113817d28);
      }
    }
    pcVar5 = pcRam0000000113817d20;
    pcVar4 = pcVar6;
    func_0x00010002a3a8(pcVar6);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar5)(puVar3,pcVar7,pcVar4);
    _objc_release(pcVar4);
    _objc_release(pcVar6);
    _objc_release(pcVar7);
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = FUN_1080c2eb4;
    (*pcRam0000000113817ce0)(puVar1,puVar3,&UNK_10028db1c);
    puVar3 = (undefined8 *)puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1080c2f18; end: 1080c2f5b;  */

void FUN_1080c2f18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 400);
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_110a1dbb0,&PTR_DAT_110a1dc08,0), lVar1 != 0))
  {
    func_0x00010c067b40(*(undefined8 *)(lVar1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080c2f5c; end: 1080c2f83;  */

long FUN_1080c2f5c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1080c2f84; end: 1080c2f87;  */

long FUN_1080c2f84(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1080c2f88; end: 1080c2f9b;  */

void FUN_1080c2f88(void)

{
  FUN_1080c2f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c2f9c; end: 1080c30df;  */

void FUN_1080c2f9c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_1080c2f18(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c323c();
  func_0x00010c124ec0(param_2);
  func_0x00010bfc1a60(param_2);
  puVar4 = PTR_PTR_1126bce48;
  _objc_alloc(PTR_PTR_1126bce48);
  lStack_48 = *param_3;
  if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_48 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010c004200();
  func_0x000105276914(lStack_48);
  lVar5 = *param_3;
  func_0x00010b981514(&uStack_50,puVar4);
  func_0x00010b8c28bc(lVar5,&uStack_50);
  func_0x000104bddf04(uStack_50);
  func_0x00010c0b7980(*(undefined8 *)(param_1 + 8));
  func_0x0001080c323c();
  _objc_release(param_2);
  return;
}



/* Entry: 1080c30e0; end: 1080c3147;  */

void FUN_1080c30e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  FUN_1080dd5d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_28 = 0;
  func_0x00010b8c28bc(param_3,&uStack_28);
  func_0x000104bddf04(uStack_28);
  func_0x00010c0e36a0(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1080c3148; end: 1080c3187;  */

void FUN_1080c3148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1080dd62c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13740();
  func_0x00010c0dd0c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c3188; end: 1080c31bf;  */

void FUN_1080c3188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1080dd62c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c31c0; end: 1080c31c7;  */

void FUN_1080c31c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_makeWeak_11260b8d8);
  return;
}



/* Entry: 1080c31c8; end: 1080c321f;  */

void FUN_1080c31c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126caff0;
  _objc_alloc();
  func_0x00010c01e460();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c3220; end: 1080c3243;  */

void FUN_1080c3220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c3244; end: 1080c331b;  */

void FUN_1080c3244(double param_1)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001080c458c();
  *unaff_x20 = &PTR_FUN_110a1dc30;
  unaff_x20[1] = &PTR_DAT_110a1dcd0;
  unaff_x20[2] = &UNK_10dd5b8b0;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  unaff_x20[8] = 0;
  unaff_x20[9] = 0;
  unaff_x20[7] = 0;
  func_0x0001080c465c();
  unaff_x20[10] = unaff_x19;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x0001080c4648();
  *(float *)(unaff_x20 + 0xb) = (float)param_1;
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c331c; end: 1080c336b;  */

undefined8 * FUN_1080c331c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1dc30;
  param_1[1] = &PTR_DAT_110a1dcd0;
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_release(param_1[8]);
  FUN_1080c400c(param_1 + 2);
  return param_1;
}



/* Entry: 1080c336c; end: 1080c3377;  */

undefined8 * FUN_1080c336c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1dc30;
  param_1[1] = &PTR_DAT_110a1dcd0;
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_release(param_1[8]);
  FUN_1080c400c(param_1 + 2);
  return param_1;
}



/* Entry: 1080c3378; end: 1080c338b;  */

void FUN_1080c3378(void)

{
  FUN_1080c331c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c338c; end: 1080c3393;  */

void FUN_1080c338c(long param_1)

{
  FUN_1080c331c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c3394; end: 1080c363f;  */

void FUN_1080c3394(long param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  
  uVar4 = *param_2;
  func_0x0001080c40f0();
  lVar7 = 0;
  plVar13 = (long *)(param_1 + 0x10);
  uVar9 = uVar4 >> 7;
  uVar8 = *(ulong *)(param_1 + 0x28);
  while( true ) {
    uVar9 = uVar9 & uVar8;
    uVar10 = *(ulong *)(*plVar13 + uVar9);
    uVar11 = uVar10 ^ (uVar4 & 0x7f) * 0x101010101010101;
    for (uVar11 = uVar11 + 0xfefefefefefefeff & (uVar11 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar12 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar9 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar8;
      if (*(ulong *)(*(long *)(param_1 + 0x18) + uVar12 * 0x10) == *param_2) {
        if (uVar8 == uVar12) goto LAB_1080c345c;
        puVar14 = *(ulong **)(*(long *)(param_1 + 0x18) + uVar12 * 0x10 + 8);
        func_0x0001080c4628();
        goto LAB_1080c35f0;
      }
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar9 = lVar7 + uVar9;
  }
LAB_1080c345c:
  puVar14 = param_2;
  func_0x00010b98101c();
  _objc_retainAutoreleasedReturnValue();
  _NSClassFromString();
  if (puVar14 == (ulong *)0x0) {
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010c076f00();
    if ((int)puVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(puVar14);
      _objc_release(puVar6);
    }
    func_0x0001080c45c4();
    puVar14 = (ulong *)PTR_PTR_1126d93f0;
    _objc_opt_class();
  }
  uVar4 = *param_2;
  func_0x0001080c40f0();
  lVar7 = 0;
  uVar9 = uVar4 >> 7;
  while( true ) {
    uVar9 = uVar9 & *(ulong *)(param_1 + 0x28);
    uVar11 = *(ulong *)(*(long *)(param_1 + 0x10) + uVar9);
    uVar8 = uVar11 ^ (uVar4 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar10 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      if (*(ulong *)(*(long *)(param_1 + 0x18) +
                    (uVar9 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) &
                    *(ulong *)(param_1 + 0x28)) * 0x10) == *param_2) goto LAB_1080c35e8;
    }
    if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar9 = lVar7 + uVar9;
  }
  FUN_1080c4114(plVar13,uVar4);
  puVar5 = (ulong *)(*(long *)(param_1 + 0x18) + (long)plVar13 * 0x10);
  uVar9 = *param_2;
  if (uVar9 != 0) {
    piVar1 = (int *)(uVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar5 = uVar9;
  func_0x0001080c4628();
  puVar5[1] = (ulong)puVar14;
  *(byte *)(*(long *)(param_1 + 0x10) + (long)plVar13) = (byte)uVar4 & 0x7f;
  func_0x0001080c4630();
LAB_1080c35e8:
  func_0x0001080c4628();
  func_0x0001080c45cc();
LAB_1080c35f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1080c3640; end: 1080c365f;  */

void FUN_1080c3640(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  int extraout_w10;
  long lStack_28;
  long lVar3;
  
  FUN_1080dd8f4(&lStack_28,param_3,param_2 + 8);
  lVar1 = lStack_28;
  lVar3 = lStack_28;
  FUN_1080dd780();
  uVar2 = (undefined1)lVar3;
  func_0x0001080dd740();
  *(undefined1 *)(lVar1 + 0xa9) = uVar2;
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x0001080de270();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_28;
  func_0x0001080de20c();
  return;
}



/* Entry: 1080c3660; end: 1080c379f;  */

void FUN_1080c3660(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  
  param_2 = param_2 + 0x20;
  FUN_1080dd62c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee400();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c45c4();
  func_0x00010b9a8f84(auStack_50,param_4);
  func_0x00010b980ac4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c4650();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_opt_isKindOfClass(param_4,puVar1);
  func_0x0001080c4628();
  func_0x0001080c4648();
  func_0x00010c0f95a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001080c45c4();
  func_0x0001080c45cc();
  func_0x0001080c45bc();
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c37a0; end: 1080c37bb;  */

void FUN_1080c37a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  
  param_2 = param_2 + 0x20;
  FUN_1080dd62c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee400();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c45c4();
  func_0x00010b9a8f84(auStack_50,param_4);
  func_0x00010b980ac4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c4650();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_opt_isKindOfClass(param_4,puVar1);
  func_0x0001080c4628();
  func_0x0001080c4648();
  func_0x00010c0f95a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001080c45c4();
  func_0x0001080c45cc();
  func_0x0001080c45bc();
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c37bc; end: 1080c3843;  */

void FUN_1080c37bc(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137292f8 & 1) == 0) {
    iVar5 = 0x137292f8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001003a83dc(0x1137292f0,&UNK_10f479e36);
      ___cxa_guard_release(0x1137292f8);
    }
  }
  lVar4 = lRam00000001137292f0;
  if (lRam00000001137292f0 != 0) {
    piVar1 = (int *)(lRam00000001137292f0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080c3844; end: 1080c3847;  */

void FUN_1080c3844(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137292f8 & 1) == 0) {
    iVar5 = 0x137292f8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x0001003a83dc(0x1137292f0,&UNK_10f479e36);
      ___cxa_guard_release(0x1137292f8);
    }
  }
  lVar4 = lRam00000001137292f0;
  if (lRam00000001137292f0 != 0) {
    piVar1 = (int *)(lRam00000001137292f0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080c3848; end: 1080c391f;  */

void FUN_1080c3848(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1080c3394();
  while( true ) {
    if (param_2 == (undefined *)0x0) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_class();
    if (param_2 == puVar1) break;
    puVar1 = PTR__OBJC_CLASS___UIResponder_1126c6df8;
    _objc_opt_class();
    if (param_2 == puVar1) {
      return;
    }
    _NSStringFromClass(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_48);
    func_0x000104bdd2f0(param_1,&uStack_48);
    func_0x0001003a8cb8(uStack_48);
    func_0x0001080c45cc();
    func_0x00010c262c40();
  }
  return;
}



/* Entry: 1080c3920; end: 1080c3927;  */

void FUN_1080c3920(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  puVar2 = (undefined *)(param_2 + -8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1080c3394();
  while( true ) {
    if (puVar2 == (undefined *)0x0) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_class();
    if (puVar2 == puVar1) break;
    puVar1 = PTR__OBJC_CLASS___UIResponder_1126c6df8;
    _objc_opt_class();
    if (puVar2 == puVar1) {
      return;
    }
    _NSStringFromClass(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003ad8f8(&uStack_48);
    func_0x000104bdd2f0(param_1,&uStack_48);
    func_0x0001003a8cb8(uStack_48);
    func_0x0001080c45cc();
    func_0x00010c262c40();
  }
  return;
}



/* Entry: 1080c3928; end: 1080c39ff;  */

void FUN_1080c3928(code *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  
  FUN_1080c3394();
  pcVar2 = (code *)PTR__OBJC_CLASS___UIResponder_1126c6df8;
  _objc_opt_class();
  puVar1 = PTR_s_bindAttributes__112526c00;
  if (param_1 != pcVar2) {
    pcVar2 = param_1;
    func_0x00010c0cc960();
    if ((pcVar2 != (code *)0x0) &&
       ((pcVar3 = param_1, func_0x00010c262c40(), pcVar3 == (code *)0x0 ||
        (func_0x00010c0cc960(), pcVar3 != pcVar2)))) {
      puVar4 = PTR_PTR_1126d93f8;
      _objc_alloc(PTR_PTR_1126d93f8);
      func_0x00010c02dec0();
      (*pcVar2)(param_1,puVar1,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 1080c3a00; end: 1080c3a07;  */

void FUN_1080c3a00(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  
  pcVar5 = (code *)(param_1 + -8);
  FUN_1080c3394();
  pcVar2 = (code *)PTR__OBJC_CLASS___UIResponder_1126c6df8;
  _objc_opt_class();
  puVar1 = PTR_s_bindAttributes__112526c00;
  if (pcVar5 != pcVar2) {
    pcVar2 = pcVar5;
    func_0x00010c0cc960();
    if ((pcVar2 != (code *)0x0) &&
       ((pcVar3 = pcVar5, func_0x00010c262c40(), pcVar3 == (code *)0x0 ||
        (func_0x00010c0cc960(), pcVar3 != pcVar2)))) {
      puVar4 = PTR_PTR_1126d93f8;
      _objc_alloc(PTR_PTR_1126d93f8);
      func_0x00010c02dec0();
      (*pcVar2)(pcVar5,puVar1,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 1080c3a08; end: 1080c3b5f;  */

void FUN_1080c3a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)param_7[1];
  for (puVar4 = (undefined8 *)*param_7; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*puVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d9400;
  _objc_alloc(PTR_PTR_1126d9400);
  func_0x00010c007b20(param_2,param_3,param_4);
  func_0x00010c18eae0();
  func_0x00010b96ddac(param_1,puVar3);
  func_0x0001080c4648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1080c3b60; end: 1080c3b87;  */

void FUN_1080c3b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)param_7[1];
  for (puVar4 = (undefined8 *)*param_7; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*puVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d9400;
  _objc_alloc(PTR_PTR_1126d9400);
  func_0x00010c007b20(param_2,param_3,param_4);
  func_0x00010c18eae0();
  func_0x00010b96ddac(param_1,puVar3);
  func_0x0001080c4648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1080c3b88; end: 1080c3c47;  */

void FUN_1080c3b88(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126d9408;
  _objc_alloc(PTR_PTR_1126d9408);
  func_0x00010c062040();
  if (param_3 == 0) {
    func_0x00010b981514(&uStack_38,puVar1);
    func_0x0001080c4678();
    func_0x000104bddf04(uStack_38);
  }
  else {
    _objc_alloc(PTR_PTR_1126caff0);
    func_0x00010c01e460();
    func_0x00010b981514(&uStack_38);
    func_0x0001080c4678();
    func_0x000104bddf04(uStack_38);
    func_0x0001080c45cc();
  }
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c3c48; end: 1080c3c4b;  */

void FUN_1080c3c48(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126d9408;
  _objc_alloc(PTR_PTR_1126d9408);
  func_0x00010c062040();
  if (param_3 == 0) {
    func_0x00010b981514(&uStack_38,puVar1);
    func_0x0001080c4678();
    func_0x000104bddf04(uStack_38);
  }
  else {
    _objc_alloc(PTR_PTR_1126caff0);
    func_0x00010c01e460();
    func_0x00010b981514(&uStack_38);
    func_0x0001080c4678();
    func_0x000104bddf04(uStack_38);
    func_0x0001080c45cc();
  }
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c3c4c; end: 1080c3c6f;  */

void FUN_1080c3c4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080c458c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


