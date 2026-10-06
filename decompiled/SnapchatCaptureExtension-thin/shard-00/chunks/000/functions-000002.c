/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100018778; end: 1000187db;  */

void FUN_100018778(void)

{
  _objc_opt_self(&PTR_PTR_10005c7d8);
  return;
}



/* Entry: 1000187dc; end: 1000189ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1000187dc(double param_1,double param_2,double param_3,double param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong uStack_100;
  long lStack_b0;
  long lStack_50;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100050780;
  lVar15 = *(long *)(unaff_x20 + _DAT_10005fdf8);
  lStack_50 = lVar15;
  dVar20 = param_1;
  func_0x00010003b740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d840();
  dVar24 = dVar20;
  _objc_release_x20();
  if ((param_1 <= dVar20) && (func_0x00010003c720(lVar15), dVar24 <= param_1)) {
    lStack_50 = 0;
    lVar6 = lVar15;
    func_0x00010003c6e0();
    if ((int)lVar6 == 0) {
      _objc_retain_x20();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release_x19();
      _swift_willThrow();
      _swift_errorRelease(lStack_50);
    }
    else {
      _objc_retain_x20();
      func_0x00010003d4e0(lVar15);
      func_0x00010003d7e0(lVar15);
      dVar24 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar14) {
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = dVar24;
    return auVar27;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_100050780;
  uVar16 = *(undefined8 *)(lStack_50 + _DAT_10005fdf8);
  lStack_b0 = 0;
  uVar7 = uVar16;
  dVar20 = dVar24;
  dVar22 = param_2;
  func_0x00010003c6e0();
  if ((int)uVar7 == 0) {
    _objc_retain_x20();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    _swift_errorRelease();
  }
  else {
    _objc_retain_x20();
    func_0x00010003cec0(uVar16);
    func_0x00010003d7e0();
    dVar20 = dVar24;
    dVar22 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar14) {
    auVar28._8_8_ = dVar22;
    auVar28._0_8_ = dVar20;
    return auVar28;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_100050780;
  uVar17 = *(ulong *)(lStack_b0 + _DAT_10005fdf8);
  uStack_100 = 0;
  uVar8 = uVar17;
  func_0x00010003c6e0();
  if ((int)uVar8 == 0) {
    _objc_retain_x21();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    uVar8 = uStack_100;
    _swift_errorRelease();
    uVar5 = (uint)uVar8;
  }
  else {
    _objc_retain_x21();
    func_0x00010003cea0(uVar17);
    uVar8 = uVar17;
    func_0x00010003d7e0();
    uVar5 = (uint)uVar8;
    uStack_100 = uVar17;
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar14) {
    auVar29._8_8_ = dVar22;
    auVar29._0_8_ = dVar20;
    return auVar29;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_100050780;
  uVar17 = *(ulong *)(uStack_100 + _DAT_10005fdf8);
  uVar8 = uVar17;
  func_0x00010003c100();
  if (((int)uVar8 != 0) &&
     (uVar8 = uVar17, func_0x00010003d740(), (uVar5 & 1) != (uint)(uVar8 == 1))) {
    uVar19 = uVar17;
    func_0x00010003c6e0();
    uStack_100 = uVar19;
    _objc_retain_x8(0);
    if ((int)uVar19 == 0) {
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release_x19();
      _swift_willThrow();
      uVar8 = uStack_100;
      _swift_errorRelease();
    }
    else {
      func_0x00010003d400(uVar17);
      func_0x00010003d7e0();
      uVar8 = uVar17;
      uStack_100 = uVar19;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar14) {
    auVar30._8_8_ = dVar22;
    auVar30._0_8_ = dVar20;
    return auVar30;
  }
  ___stack_chk_fail();
  uVar9 = *(ulong *)(uStack_100 + _DAT_10005fe00);
  dVar24 = param_3;
  dVar25 = param_4;
  func_0x00010003c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  func_0x0001000190c0();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  _objc_release_x20();
  uVar18 = *(ulong *)PTR__AVLayerVideoGravityResize_1000506a8;
  uVar19 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar17 = uVar10;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar19 == uVar18 && uVar10 == uVar17) {
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar10);
    uVar9 = uVar17;
  }
  else {
    uVar12 = uVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar19,uVar10,uVar18,uVar17,0);
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease();
    if ((uVar19 & 1) == 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar19 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar19 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar19 = uVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        uVar17 = uVar19;
      }
      if (uVar19 != 0) {
        uVar10 = *(ulong *)PTR__AVMediaTypeVideo_1000506c8;
        lVar14 = 4;
        do {
          uVar18 = lVar14 - 4;
          if ((uVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fe0);
              (*pcVar2)();
            }
            _objc_retain_x8(*(undefined8 *)(uVar9 + lVar14 * 8));
            uVar11 = uVar17;
            uVar13 = uVar12;
          }
          else {
            uVar11 = uVar18;
            uVar13 = uVar9;
            __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
          }
          uVar1 = lVar14 - 3;
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fdc);
            (*pcVar2)();
          }
          uVar18 = uVar11;
          func_0x00010003c700();
          _objc_retainAutoreleasedReturnValue();
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar12 = uVar10;
          uVar17 = uVar13;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          if ((uVar18 == uVar12) && (uVar13 == uVar17)) {
            uVar12 = uVar17;
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar13);
            _swift_bridgeObjectRelease(uVar17);
LAB_100018cdc:
            func_0x00010003bfe0();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = 0;
            if (uVar11 != 0) {
              lVar15 = 1;
              _CMVideoFormatDescriptionGetCleanAperture();
              dVar26 = dVar25 / dVar24;
              uVar19 = *(ulong *)PTR__AVLayerVideoGravityResizeAspect_1000506b0;
              uVar17 = uVar8;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              lVar14 = lVar15;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              if ((uVar17 == uVar19) && (lVar15 == lVar14)) {
                _swift_bridgeObjectRelease(lVar15);
                _swift_bridgeObjectRelease(lVar14);
LAB_100018e54:
                if (param_3 / param_4 <= dVar26) {
                  dVar26 = param_3 / dVar26;
                  dVar23 = 0.5;
                  dVar25 = (param_4 - dVar26) * 0.5;
                  dVar24 = dVar26 + dVar25;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar25 <= dVar22) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(dVar22) && !NAN(dVar24)) {
                      bVar3 = dVar22 == dVar24;
                      bVar4 = dVar24 <= dVar22;
                    }
                  }
                  dVar21 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar21 = (dVar22 - dVar25) / dVar26;
                    dVar26 = dVar20 / param_3;
                    goto LAB_100018ec4;
                  }
                }
                else {
                  dVar26 = param_4 * dVar26;
                  dVar23 = 0.5;
                  dVar25 = (param_3 - dVar26) * 0.5;
                  dVar24 = dVar26 + dVar25;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar25 <= dVar20) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(dVar20) && !NAN(dVar24)) {
                      bVar3 = dVar20 == dVar24;
                      bVar4 = dVar24 <= dVar20;
                    }
                  }
                  dVar21 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar21 = dVar22 / param_4;
                    dVar26 = (dVar20 - dVar25) / dVar26;
LAB_100018ec4:
                    dVar23 = 1.0 - dVar26;
                  }
                }
              }
              else {
                lVar6 = lVar15;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar17,lVar15,uVar19,lVar14,0);
                _swift_bridgeObjectRelease(lVar15);
                _swift_bridgeObjectRelease(lVar14);
                if ((uVar17 & 1) != 0) goto LAB_100018e54;
                uVar17 = *(ulong *)PTR__AVLayerVideoGravityResizeAspectFill_1000506b8;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar14 = lVar6;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                if ((uVar8 == uVar17) && (lVar6 == lVar14)) {
                  _swift_bridgeObjectRelease(lVar6);
                  _swift_bridgeObjectRelease(lVar14);
LAB_100018f7c:
                  if (param_3 / param_4 <= dVar26) {
                    dVar25 = dVar25 * (param_4 / dVar24);
                    dVar23 = 1.0 - (dVar20 + (dVar25 - param_3) * 0.5) / dVar25;
                    dVar21 = dVar22 / param_4;
                  }
                  else {
                    dVar24 = dVar24 * (param_3 / dVar25);
                    dVar21 = (dVar22 + (dVar24 - param_4) * 0.5) / dVar24;
                    dVar23 = (param_3 - dVar20) / param_3;
                  }
                }
                else {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar8,lVar6,uVar17,lVar14,0);
                  _swift_bridgeObjectRelease(lVar6);
                  _swift_bridgeObjectRelease(lVar14);
                  dVar23 = 0.5;
                  dVar21 = 0.5;
                  if ((uVar8 & 1) != 0) goto LAB_100018f7c;
                }
              }
              _swift_bridgeObjectRelease(uVar9);
              _objc_release_x25();
              _objc_release_x20();
              goto LAB_100018c60;
            }
          }
          else {
            uVar12 = uVar13;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar13);
            _swift_bridgeObjectRelease();
            if ((uVar18 & 1) != 0) goto LAB_100018cdc;
          }
          _objc_release_x20();
          lVar14 = lVar14 + 1;
        } while (uVar1 != uVar19);
      }
      _swift_bridgeObjectRelease(uVar9);
      dVar21 = 0.5;
      dVar23 = 0.5;
      goto LAB_100018c60;
    }
  }
  _swift_bridgeObjectRelease(uVar9);
  dVar21 = dVar22 / param_4;
  dVar23 = 1.0 - dVar20 / param_3;
LAB_100018c60:
  auVar31._8_8_ = dVar23;
  auVar31._0_8_ = dVar21;
  return auVar31;
}



/* Entry: 1000189ac; end: 100018b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1000189ac(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100050780;
  uVar16 = *(ulong *)(unaff_x20 + _DAT_10005fdf8);
  uStack_40 = 0;
  uVar6 = uVar16;
  func_0x00010003c6e0(uVar16,param_6,&uStack_40);
  uVar15 = uStack_40;
  if ((int)uVar6 == 0) {
    _objc_retain_x21();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release_x19();
    _swift_willThrow();
    uVar6 = uVar15;
    _swift_errorRelease();
    uVar5 = (uint)uVar6;
  }
  else {
    _objc_retain_x21();
    func_0x00010003cea0(uVar16);
    uVar15 = uVar16;
    func_0x00010003d7e0();
    uVar5 = (uint)uVar15;
    uVar15 = uVar16;
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lStack_38) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = param_1;
    return auVar23;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_100050780;
  uVar16 = *(ulong *)(uVar15 + _DAT_10005fdf8);
  uVar6 = uVar16;
  func_0x00010003c100();
  if (((int)uVar6 != 0) &&
     (uVar6 = uVar16, func_0x00010003d740(), (uVar5 & 1) != (uint)(uVar6 == 1))) {
    uVar7 = uVar16;
    func_0x00010003c6e0();
    uVar15 = uVar7;
    _objc_retain_x8(0);
    if ((int)uVar7 == 0) {
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release_x19();
      _swift_willThrow();
      uVar6 = uVar15;
      _swift_errorRelease();
    }
    else {
      func_0x00010003d400(uVar16);
      func_0x00010003d7e0();
      uVar6 = uVar16;
      uVar15 = uVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100050780 == lVar14) {
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = param_1;
    return auVar24;
  }
  ___stack_chk_fail();
  uVar7 = *(ulong *)(uVar15 + _DAT_10005fe00);
  dVar20 = param_3;
  dVar21 = param_4;
  func_0x00010003c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x0001000190c0();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  _objc_release_x20();
  uVar17 = *(ulong *)PTR__AVLayerVideoGravityResize_1000506a8;
  uVar16 = uVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar15 = uVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar16 == uVar17 && uVar8 == uVar15) {
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar8);
    uVar7 = uVar15;
  }
  else {
    uVar10 = uVar8;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar16,uVar8,uVar17,uVar15,0);
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease();
    if ((uVar16 & 1) == 0) {
      if (uVar7 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar16 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar16 = uVar7;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        uVar15 = uVar16;
      }
      if (uVar16 != 0) {
        uVar8 = *(ulong *)PTR__AVMediaTypeVideo_1000506c8;
        lVar14 = 4;
        do {
          uVar17 = lVar14 - 4;
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fe0);
              (*pcVar2)();
            }
            _objc_retain_x8(*(undefined8 *)(uVar7 + lVar14 * 8));
            uVar9 = uVar15;
            uVar11 = uVar10;
          }
          else {
            uVar9 = uVar17;
            uVar11 = uVar7;
            __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
          }
          uVar1 = lVar14 - 3;
          if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fdc);
            (*pcVar2)();
          }
          uVar17 = uVar9;
          func_0x00010003c700();
          _objc_retainAutoreleasedReturnValue();
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar10 = uVar8;
          uVar15 = uVar11;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          if ((uVar17 == uVar10) && (uVar11 == uVar15)) {
            uVar10 = uVar15;
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar11);
            _swift_bridgeObjectRelease(uVar15);
LAB_100018cdc:
            func_0x00010003bfe0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = 0;
            if (uVar9 != 0) {
              lVar12 = 1;
              _CMVideoFormatDescriptionGetCleanAperture();
              dVar22 = dVar21 / dVar20;
              uVar16 = *(ulong *)PTR__AVLayerVideoGravityResizeAspect_1000506b0;
              uVar15 = uVar6;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              lVar14 = lVar12;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              if ((uVar15 == uVar16) && (lVar12 == lVar14)) {
                _swift_bridgeObjectRelease(lVar12);
                _swift_bridgeObjectRelease(lVar14);
LAB_100018e54:
                if (param_3 / param_4 <= dVar22) {
                  dVar22 = param_3 / dVar22;
                  dVar19 = 0.5;
                  dVar21 = (param_4 - dVar22) * 0.5;
                  dVar20 = dVar22 + dVar21;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar21 <= param_2) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(param_2) && !NAN(dVar20)) {
                      bVar3 = param_2 == dVar20;
                      bVar4 = dVar20 <= param_2;
                    }
                  }
                  dVar18 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar18 = (param_2 - dVar21) / dVar22;
                    dVar22 = param_1 / param_3;
                    goto LAB_100018ec4;
                  }
                }
                else {
                  dVar22 = param_4 * dVar22;
                  dVar19 = 0.5;
                  dVar21 = (param_3 - dVar22) * 0.5;
                  dVar20 = dVar22 + dVar21;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar21 <= param_1) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(param_1) && !NAN(dVar20)) {
                      bVar3 = param_1 == dVar20;
                      bVar4 = dVar20 <= param_1;
                    }
                  }
                  dVar18 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar18 = param_2 / param_4;
                    dVar22 = (param_1 - dVar21) / dVar22;
LAB_100018ec4:
                    dVar19 = 1.0 - dVar22;
                  }
                }
              }
              else {
                lVar13 = lVar12;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar15,lVar12,uVar16,lVar14,0);
                _swift_bridgeObjectRelease(lVar12);
                _swift_bridgeObjectRelease(lVar14);
                if ((uVar15 & 1) != 0) goto LAB_100018e54;
                uVar15 = *(ulong *)PTR__AVLayerVideoGravityResizeAspectFill_1000506b8;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar14 = lVar13;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                if ((uVar6 == uVar15) && (lVar13 == lVar14)) {
                  _swift_bridgeObjectRelease(lVar13);
                  _swift_bridgeObjectRelease(lVar14);
LAB_100018f7c:
                  if (param_3 / param_4 <= dVar22) {
                    dVar21 = dVar21 * (param_4 / dVar20);
                    dVar19 = 1.0 - (param_1 + (dVar21 - param_3) * 0.5) / dVar21;
                    dVar18 = param_2 / param_4;
                  }
                  else {
                    dVar20 = dVar20 * (param_3 / dVar21);
                    dVar18 = (param_2 + (dVar20 - param_4) * 0.5) / dVar20;
                    dVar19 = (param_3 - param_1) / param_3;
                  }
                }
                else {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar6,lVar13,uVar15,lVar14,0);
                  _swift_bridgeObjectRelease(lVar13);
                  _swift_bridgeObjectRelease(lVar14);
                  dVar19 = 0.5;
                  dVar18 = 0.5;
                  if ((uVar6 & 1) != 0) goto LAB_100018f7c;
                }
              }
              _swift_bridgeObjectRelease(uVar7);
              _objc_release_x25();
              _objc_release_x20();
              goto LAB_100018c60;
            }
          }
          else {
            uVar10 = uVar11;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar11);
            _swift_bridgeObjectRelease();
            if ((uVar17 & 1) != 0) goto LAB_100018cdc;
          }
          _objc_release_x20();
          lVar14 = lVar14 + 1;
        } while (uVar1 != uVar16);
      }
      _swift_bridgeObjectRelease(uVar7);
      dVar18 = 0.5;
      dVar19 = 0.5;
      goto LAB_100018c60;
    }
  }
  _swift_bridgeObjectRelease(uVar7);
  dVar18 = param_2 / param_4;
  dVar19 = 1.0 - param_1 / param_3;
LAB_100018c60:
  auVar25._8_8_ = dVar19;
  auVar25._0_8_ = dVar18;
  return auVar25;
}



/* Entry: 100018b50; end: 10001900b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100018b50(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_10005fe00);
  dVar18 = param_3;
  dVar19 = param_4;
  func_0x00010003c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  func_0x0001000190c0();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  _objc_release_x20();
  uVar13 = *(ulong *)PTR__AVLayerVideoGravityResize_1000506a8;
  uVar15 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar12 = uVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (uVar15 == uVar13 && uVar6 == uVar12) {
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = uVar12;
  }
  else {
    uVar8 = uVar6;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar15,uVar6,uVar13,uVar12,0);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease();
    if ((uVar15 & 1) == 0) {
      if (uVar5 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar15 = uVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        uVar12 = uVar15;
      }
      if (uVar15 != 0) {
        uVar6 = *(ulong *)PTR__AVMediaTypeVideo_1000506c8;
        lVar14 = 4;
        do {
          uVar13 = lVar14 - 4;
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fe0);
              (*pcVar2)();
            }
            _objc_retain_x8(*(undefined8 *)(uVar5 + lVar14 * 8));
            uVar7 = uVar12;
            uVar9 = uVar8;
          }
          else {
            uVar7 = uVar13;
            uVar9 = uVar5;
            __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
          }
          uVar1 = lVar14 - 3;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100018fdc);
            (*pcVar2)();
          }
          uVar13 = uVar7;
          func_0x00010003c700();
          _objc_retainAutoreleasedReturnValue();
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar8 = uVar6;
          uVar12 = uVar9;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          if ((uVar13 == uVar8) && (uVar9 == uVar12)) {
            uVar8 = uVar12;
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar9);
            _swift_bridgeObjectRelease(uVar12);
LAB_100018cdc:
            func_0x00010003bfe0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = 0;
            if (uVar7 != 0) {
              lVar10 = 1;
              _CMVideoFormatDescriptionGetCleanAperture();
              dVar20 = dVar19 / dVar18;
              uVar15 = *(ulong *)PTR__AVLayerVideoGravityResizeAspect_1000506b0;
              uVar12 = param_5;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              lVar14 = lVar10;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              if ((uVar12 == uVar15) && (lVar10 == lVar14)) {
                _swift_bridgeObjectRelease(lVar10);
                _swift_bridgeObjectRelease(lVar14);
LAB_100018e54:
                if (param_3 / param_4 <= dVar20) {
                  dVar20 = param_3 / dVar20;
                  dVar17 = 0.5;
                  dVar19 = (param_4 - dVar20) * 0.5;
                  dVar18 = dVar20 + dVar19;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar19 <= param_2) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(param_2) && !NAN(dVar18)) {
                      bVar3 = param_2 == dVar18;
                      bVar4 = dVar18 <= param_2;
                    }
                  }
                  dVar16 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar16 = (param_2 - dVar19) / dVar20;
                    dVar20 = param_1 / param_3;
                    goto LAB_100018ec4;
                  }
                }
                else {
                  dVar20 = param_4 * dVar20;
                  dVar17 = 0.5;
                  dVar19 = (param_3 - dVar20) * 0.5;
                  dVar18 = dVar20 + dVar19;
                  bVar3 = false;
                  bVar4 = true;
                  if (dVar19 <= param_1) {
                    bVar3 = false;
                    bVar4 = true;
                    if (!NAN(param_1) && !NAN(dVar18)) {
                      bVar3 = param_1 == dVar18;
                      bVar4 = dVar18 <= param_1;
                    }
                  }
                  dVar16 = 0.5;
                  if (!bVar4 || bVar3) {
                    dVar16 = param_2 / param_4;
                    dVar20 = (param_1 - dVar19) / dVar20;
LAB_100018ec4:
                    dVar17 = 1.0 - dVar20;
                  }
                }
              }
              else {
                lVar11 = lVar10;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar12,lVar10,uVar15,lVar14,0);
                _swift_bridgeObjectRelease(lVar10);
                _swift_bridgeObjectRelease(lVar14);
                if ((uVar12 & 1) != 0) goto LAB_100018e54;
                uVar12 = *(ulong *)PTR__AVLayerVideoGravityResizeAspectFill_1000506b8;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar14 = lVar11;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                if ((param_5 == uVar12) && (lVar11 == lVar14)) {
                  _swift_bridgeObjectRelease(lVar11);
                  _swift_bridgeObjectRelease(lVar14);
LAB_100018f7c:
                  if (param_3 / param_4 <= dVar20) {
                    dVar19 = dVar19 * (param_4 / dVar18);
                    dVar17 = 1.0 - (param_1 + (dVar19 - param_3) * 0.5) / dVar19;
                    dVar16 = param_2 / param_4;
                  }
                  else {
                    dVar18 = dVar18 * (param_3 / dVar19);
                    dVar16 = (param_2 + (dVar18 - param_4) * 0.5) / dVar18;
                    dVar17 = (param_3 - param_1) / param_3;
                  }
                }
                else {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (param_5,lVar11,uVar12,lVar14,0);
                  _swift_bridgeObjectRelease(lVar11);
                  _swift_bridgeObjectRelease(lVar14);
                  dVar17 = 0.5;
                  dVar16 = 0.5;
                  if ((param_5 & 1) != 0) goto LAB_100018f7c;
                }
              }
              _swift_bridgeObjectRelease(uVar5);
              _objc_release_x25();
              _objc_release_x20();
              goto LAB_100018c60;
            }
          }
          else {
            uVar8 = uVar9;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _objc_release_x26();
            _swift_bridgeObjectRelease(uVar9);
            _swift_bridgeObjectRelease();
            if ((uVar13 & 1) != 0) goto LAB_100018cdc;
          }
          _objc_release_x20();
          lVar14 = lVar14 + 1;
        } while (uVar1 != uVar15);
      }
      _swift_bridgeObjectRelease(uVar5);
      dVar16 = 0.5;
      dVar17 = 0.5;
      goto LAB_100018c60;
    }
  }
  _swift_bridgeObjectRelease(uVar5);
  dVar16 = param_2 / param_4;
  dVar17 = 1.0 - param_1 / param_3;
LAB_100018c60:
  auVar21._8_8_ = dVar17;
  auVar21._0_8_ = dVar16;
  return auVar21;
}



/* Entry: 10001900c; end: 100019067; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraManagedCaptureDevice init] */

void FUN_10001900c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraManagedCaptureDevice",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100019038);
  (*pcVar1)();
}



/* Entry: 100019068; end: 10001909f; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraManagedCaptureDevice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019068(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fdf8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fe00));
  return;
}



/* Entry: 1000190a0; end: 100019103;  */

void FUN_1000190a0(void)

{
  _objc_opt_self(&PTR_PTR_10005c8b8);
  return;
}



/* Entry: 100019104; end: 1000191eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100019104(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  lVar1 = _DAT_10005fe48;
  puVar4 = &stack0xffffffffffffffb0;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  puVar3 = PTR__OBJC_CLASS___AVCaptureSession_100050718;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + _DAT_10005fe40) = puVar3;
  FUN_100019d60();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_10005b548);
  _objc_retain_x19();
  puVar5 = puVar4;
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(puVar4 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003d200(puVar5);
  _objc_release_x19();
  FUN_1000198c4();
  _objc_release_x21();
  return puVar4;
}



/* Entry: 1000191ec; end: 10001920b; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession init] */

void FUN_1000191ec(void)

{
  FUN_100019104();
  return;
}



/* Entry: 10001920c; end: 10001923f;  */

void FUN_10001920c(void)

{
  func_0x000100019a90();
  FUN_100019d60();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100019240; end: 100019283; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession dealloc] */

void FUN_100019240(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100019a90();
  FUN_100019d60();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100019284; end: 1000192bb; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019284(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fe40));
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(*(undefined8 *)(param_1 + _DAT_10005fe48));
  return;
}



/* Entry: 1000192bc; end: 1000193f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000192bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = param_1;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar1 = _DAT_10005fe40;
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003c460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  uVar3 = 0;
  FUN_100019d80(0,0x10005fe80,&PTR__OBJC_CLASS___AVCaptureInput_1000506e8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(lVar2,uVar3);
  _objc_release_x23();
  uVar5 = *(ulong *)(param_1 + _DAT_10005fe00);
  FUN_10001a318(uVar5,lVar2);
  _swift_bridgeObjectRelease();
  if ((uVar5 & 1) == 0) {
    __s11SwiftSCLock4LockC4lockyyF();
    _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
    __s11SwiftSCLock4LockC6unlockyyF();
    func_0x00010003bba0();
    lVar4 = lVar2;
    _objc_release_x22();
    if ((int)lVar2 != 0) {
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003b800(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1000193f4; end: 1000195d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000193f4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    uVar6 = param_1;
    lVar1 = _DAT_10005fe40;
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar6 = uVar7;
    lVar1 = _DAT_10005fe40;
  }
  _DAT_10005fe40 = lVar1;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10001959c);
          (*pcVar2)();
        }
        _objc_retain_x8(*(undefined8 *)(param_1 + uVar8 * 8 + 0x20));
      }
      else {
        uVar6 = uVar8;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar8,param_1);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100019574);
        (*pcVar2)();
      }
      uVar9 = uVar8 + 1;
      uVar3 = uVar6;
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003c460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x26();
      uVar4 = 0;
      FUN_100019d80(0,0x10005fe80,&PTR__OBJC_CLASS___AVCaptureInput_1000506e8);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
      _objc_release_x27();
      uVar5 = uVar6;
      FUN_10001a318(uVar6,uVar3);
      _swift_bridgeObjectRelease();
      if ((uVar5 & 1) != 0) {
LAB_100019574:
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_1000508c0)(uVar6);
        return;
      }
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003bba0();
      uVar5 = uVar3;
      _objc_release_x26();
      if ((int)uVar3 == 0) goto LAB_100019574;
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003b800(uVar5);
      _objc_release();
      _objc_release_x26();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar7);
  }
  return;
}



/* Entry: 1000195d4; end: 10001974b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000195d4(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  uVar2 = 0;
  FUN_100019d80(0,0x10005fe78,&PTR__OBJC_CLASS___AVCaptureOutput_100050700);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar2);
  uVar3 = param_1;
  _objc_release_x20();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar3 = uVar7;
  }
  if (uVar7 != 0) {
    if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001974c);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        _objc_retain_x8(*(undefined8 *)(param_1 + uVar8 * 8 + 0x20));
        uVar4 = uVar3;
      }
      else {
        uVar4 = uVar8;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar8,param_1);
      }
      uVar5 = uVar4;
      func_0x00010003bd00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      if (uVar5 != 0) {
        func_0x00010003c600();
        uVar6 = uVar5;
        if (((int)uVar3 != 0) &&
           (uVar3 = uVar5, func_0x00010003c5e0(), uVar6 = uVar4, (uVar3 & 1) == 0)) {
          func_0x00010003d4c0();
          uVar3 = uVar5;
        }
        _objc_release_x8(uVar6);
      }
      uVar8 = uVar8 + 1;
      _objc_release_x23();
    } while (uVar7 != uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_1);
  return;
}



/* Entry: 10001974c; end: 1000198c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001974c(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  uVar3 = 0;
  FUN_100019d80(0,0x10005fe78,&PTR__OBJC_CLASS___AVCaptureOutput_100050700);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar3);
  uVar4 = param_1;
  _objc_release_x22();
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar4 = uVar5;
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000198a8);
          (*pcVar2)();
        }
        _objc_retain_x8(*(undefined8 *)(param_1 + uVar6 * 8 + 0x20));
      }
      else {
        uVar4 = uVar6;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar6,param_1);
      }
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000198a4);
        (*pcVar2)();
      }
      func_0x00010003bd00();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        _objc_release_x24();
        break;
      }
      func_0x00010003d160();
      _objc_release_x24();
      _objc_release_x25();
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_1);
  return;
}



/* Entry: 1000198c4; end: 100019c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000198c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_100050300;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x00010003be20();
  _objc_retainAutoreleasedReturnValue();
  __s11SwiftSCLock4LockC4lockyyF();
  lVar1 = _DAT_10005fe40;
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003b880(puVar3);
  _objc_release_x22();
  _objc_release_x25();
  puVar3 = puVar2;
  func_0x00010003be20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003b880(puVar3);
  _objc_release_x22();
  _objc_release_x25();
  puVar3 = puVar2;
  func_0x00010003be20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003b880(puVar3);
  _objc_release_x22();
  _objc_release_x25();
  func_0x00010003be20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(unaff_x20 + lVar1));
  __s11SwiftSCLock4LockC6unlockyyF();
  func_0x00010003b880(puVar2);
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar3);
  return;
}



/* Entry: 100019c2c; end: 100019c2f;  */

void FUN_100019c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019c30; end: 100019cab;  */

void FUN_100019c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019cac; end: 100019d5f; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession handleSessionDidStartRunning:] */

void FUN_100019cac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long extraout_x8;
  code *pcVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar3 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10002e6c4();
  pcVar2 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_3) + 0x118);
  _objc_retain_x8();
  (*pcVar2)();
  _objc_release_x20();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019d60; end: 100019d7f;  */

void FUN_100019d60(void)

{
  _objc_opt_self(&PTR_PTR_10005ca08);
  return;
}



/* Entry: 100019d80; end: 100019dbf;  */

void FUN_100019d80(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 100019dc0; end: 100019dc3; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession handleSessionInterruptionEnded:] */

void FUN_100019dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019dc4; end: 100019dc7; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession handleSessionWasInterrupted:] */

void FUN_100019dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019dc8; end: 100019dcb; -[_TtC28SnapchatCaptureExtension_lib33LockedCameraManagedCaptureSession handleSessionRuntimeError:] */

void FUN_100019dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar2 + 0x40));
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 100019dcc; end: 100019ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100019dcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = _DAT_10005fe88;
  lVar2 = *(long *)(unaff_x20 + _DAT_10005fe88);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x10005fed8;
    FUN_100011744(0x10005fed8,&UNK_1000411e0);
    _swift_allocObject();
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_10005fe90))[1];
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_10005fe90);
    *(undefined8 *)(lVar3 + 0x18) = 8;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_10005fe98);
    uVar5 = ((undefined8 *)(unaff_x20 + _DAT_10005fea0))[1];
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_10005fea0);
    *(undefined8 *)(lVar3 + 0x38) = ((undefined8 *)(unaff_x20 + _DAT_10005fe98))[1];
    *(undefined8 *)(lVar3 + 0x30) = uVar7;
    *(undefined8 *)(lVar3 + 0x48) = uVar5;
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_10005fea8);
    *(undefined8 *)(lVar3 + 0x58) = ((undefined8 *)(unaff_x20 + _DAT_10005fea8))[1];
    *(undefined8 *)(lVar3 + 0x50) = uVar5;
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(uVar4);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(lVar3);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 100019ec0; end: 100019f53; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraFeatureProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019ec0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_10005fe88) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001f,0x800000010004c0f0,
             "SnapchatCaptureExtension_lib/LockedCameraFeatureProvider.swift",0x3e,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100019f24);
  (*pcVar1)();
}



/* Entry: 100019f54; end: 100019fbb; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraFeatureProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019f54(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_10005fe88));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_10005fe90));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_10005fe98));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_10005fea0));
                    /* WARNING: Could not recover jumptable at 0x00010003b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100050d70)(*(undefined8 *)(param_1 + _DAT_10005fea8));
  return;
}



/* Entry: 100019fbc; end: 100019fdb;  */

void FUN_100019fbc(void)

{
  _objc_opt_self(&PTR_PTR_10005cb70);
  return;
}



/* Entry: 100019fdc; end: 10001a253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100019fdc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + _DAT_10005fe88) = 0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_10005fff8);
  lVar3 = 0;
  func_0x0001000108a8();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_unknownObjectWeakAssign(lVar3 + 0x10,uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_10005fe90);
  *plVar1 = lVar3;
  plVar1[1] = (long)&PTR_DAT_100051300;
  uVar4 = *(undefined8 *)(param_1 + _DAT_100060000);
  lVar3 = 0;
  func_0x0001000107b8();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_unknownObjectWeakAssign(lVar3 + 0x10,uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_10005fe98);
  *plVar1 = lVar3;
  plVar1[1] = (long)&PTR_DAT_100051300;
  uVar4 = *(undefined8 *)(param_1 + _DAT_10005fff0);
  lVar3 = 0;
  func_0x0001000109ac();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar3 + 0x10,0);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  _swift_unknownObjectWeakAssign(lVar3 + 0x10,uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_10005fea0);
  *plVar1 = lVar3;
  plVar1[1] = (long)&PTR_DAT_100051300;
  uVar4 = 0;
  func_0x000100011b30();
  _swift_allocObject();
  _objc_retain_x22();
  FUN_100011b54();
  _objc_release_x22();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_10005fea8);
  *puVar2 = uVar4;
  puVar2[1] = &PTR_DAT_1000513b0;
  FUN_100019fbc();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_10005b548);
  return;
}



/* Entry: 10001a254; end: 10001a2af; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraFeaturesService init] */

void FUN_10001a254(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraFeaturesService",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001a280);
  (*pcVar1)();
}



/* Entry: 10001a2b0; end: 10001a2f7; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraFeaturesService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001a2b0(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fee0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fee8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005fef0));
  return;
}



/* Entry: 10001a2f8; end: 10001a317;  */

void FUN_10001a2f8(void)

{
  _objc_opt_self(&PTR_PTR_10005cc70);
  return;
}



/* Entry: 10001a318; end: 10001a523;  */

bool FUN_10001a318(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar4 = param_1;
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar4 = uVar7;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar6 = uVar4;
  }
  uVar3 = 0;
  do {
    uVar5 = uVar3;
    if (uVar6 == uVar5) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001a3e8);
        (*pcVar2)();
      }
      _objc_retain_x8(*(undefined8 *)(param_2 + uVar5 * 8 + 0x20));
    }
    else {
      uVar4 = uVar5;
      __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(uVar5,param_2);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001a3e4);
      (*pcVar2)();
    }
    FUN_10001c0f4(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,param_1);
    uVar3 = uVar4;
    _objc_release_x24();
    uVar1 = uVar4 & 1;
    uVar4 = uVar3;
    uVar3 = uVar5 + 1;
  } while (uVar1 == 0);
  return uVar6 != uVar5;
}



/* Entry: 10001a524; end: 10001a58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001a524(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_10005ff38;
  lVar3 = *(long *)(unaff_x20 + _DAT_10005ff38);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = 0;
    FUN_100018778();
    _objc_allocWithZone();
    func_0x00010003c1e0();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10001a58c; end: 10001a5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10001a58c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = _DAT_10005ff58;
  puVar2 = &DAT_10005ff58;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_10005ff58);
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    func_0x00010001a3fc();
    uVar3 = 0;
    FUN_1000143a8(0);
    _objc_allocWithZone();
    (*(code *)0x100013e44)(puVar2,uVar3);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    _objc_retain();
    _objc_release_x20();
    puVar4 = (undefined *)0x0;
    puVar5 = puVar2;
  }
  _objc_retain_x8(puVar4);
  return puVar5;
}



/* Entry: 10001a5c4; end: 10001a64f;  */

long * FUN_10001a5c4(long *param_1,code *param_2,code *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *param_1;
  plVar2 = *(long **)(unaff_x20 + lVar4);
  plVar3 = plVar2;
  if (plVar2 == (long *)0x0) {
    func_0x00010001a3fc();
    uVar1 = 0;
    (*param_2)(0);
    _objc_allocWithZone();
    (*param_3)(param_1,uVar1);
    *(long **)(unaff_x20 + lVar4) = param_1;
    _objc_retain();
    _objc_release_x20();
    plVar2 = (long *)0x0;
    plVar3 = param_1;
  }
  _objc_retain_x8(plVar2);
  return plVar3;
}



/* Entry: 10001a650; end: 10001a79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10001a650(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = _DAT_10005ff68;
  plVar4 = &lStack_40;
  puVar5 = *(undefined1 **)(unaff_x20 + _DAT_10005ff68);
  puVar6 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    func_0x00010001a3fc();
    lVar2 = 0;
    FUN_100015858();
    lVar3 = lVar2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar3 + _DAT_10005fc68) = param_1;
    lStack_40 = lVar3;
    lStack_38 = lVar2;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_10005b548);
    *(long **)(unaff_x20 + lVar1) = plVar4;
    _objc_retain();
    _objc_release_x21();
    puVar5 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)plVar4;
  }
  _objc_retain_x8(puVar5);
  return puVar6;
}



/* Entry: 10001a79c; end: 10001aac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10001a79c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff38) = 0;
  lVar2 = _DAT_10005ff48;
  uVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005ff70) = 0;
  *(long *)(unaff_x20 + _DAT_10005ff40) = param_1;
  lVar2 = 0;
  FUN_100019d60();
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(long *)(unaff_x20 + _DAT_10005ff30) = lVar2;
  _objc_retain_x22();
  __s11SwiftSCLock4LockC4lockyyF();
  _objc_retain_x8(*(undefined8 *)(lVar2 + _DAT_10005fe40));
  __s11SwiftSCLock4LockC6unlockyyF();
  _objc_release_x23();
  puVar3 = PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_100050720;
  _objc_allocWithZone();
  func_0x00010003c3e0();
  _objc_release_x22();
  *(undefined **)(unaff_x20 + _DAT_10005ff20) = puVar3;
  func_0x00010003d4a0();
  FUN_10001bf60();
  puVar4 = (undefined8 *)&stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar4,PTR_s_init_10005b548);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_100032230();
  uVar7 = (ulong)(param_1 == 2);
  pcVar8 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar5) + 0xd0);
  _objc_retain_x8();
  (*pcVar8)(uVar7);
  _objc_release_x20();
  func_0x00010001a3fc();
  puVar3 = &UNK_1000519b0;
  _swift_allocObject(&UNK_1000519b0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,puVar4);
  pcStack_60 = FUN_10001bfa4;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_1000519c8;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003c820(uVar7);
  __Block_release(ppuVar6);
  _objc_release_x21();
  _objc_release_x19();
  return puVar4;
}



/* Entry: 10001aac8; end: 10001abb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001aac8(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  FUN_10001a58c();
  lVar2 = _DAT_10005fa90;
  func_0x00010003c6c0(*(undefined8 *)(param_1 + _DAT_10005fa90));
  bVar1 = *(byte *)(param_1 + _DAT_10005fa98);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010003d7c0(uVar3);
  _objc_release_x19();
  if ((bVar1 & 1) == 0) {
    func_0x00010001a3fc();
    puVar4 = &UNK_1000519b0;
    _swift_allocObject(&UNK_1000519b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    uStack_40 = 0x10001c08c;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_100051b30;
    puStack_38 = puVar4;
    __Block_copy(&puStack_60);
    _swift_release(puStack_38);
    func_0x00010003c820(uVar3);
    __Block_release(ppuVar5);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001abb4; end: 10001b0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001abb4(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    bVar2 = *(long *)(param_1 + _DAT_10005ff40) != 2;
    uVar1 = 1;
    if (bVar2) {
      uVar1 = 2;
    }
    lVar3 = param_1;
    func_0x00010001a3fc();
    puVar4 = &UNK_1000519b0;
    _swift_allocObject(&UNK_1000519b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10,param_1);
    puVar5 = &UNK_100051b68;
    _swift_allocObject(&UNK_100051b68,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    pcStack_68 = FUN_10001c0b8;
    puStack_88 = PTR___NSConcreteStackBlock_100050768;
    uStack_80 = 0x42000000;
    pcStack_78 = FUN_1000272d0;
    puStack_70 = &UNK_100051b80;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    __Block_copy();
    _swift_release(puStack_60);
    func_0x00010003c820(lVar3);
    __Block_release();
    _objc_release_x20();
    FUN_100032230();
    pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*ppuVar6) + 0xd0);
    _objc_retain_x8();
    (*pcVar7)(bVar2);
    _objc_release_x19();
    _objc_release_x20();
  }
  return;
}



/* Entry: 10001b0d0; end: 10001b277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001b0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  lVar2 = param_5;
  FUN_10001a58c();
  lVar3 = _DAT_10005fa90;
  func_0x00010003c6c0(*(undefined8 *)(lVar2 + _DAT_10005fa90));
  cVar1 = *(char *)(lVar2 + _DAT_10005fa98);
  lVar3 = *(long *)(lVar2 + lVar3);
  func_0x00010003d7c0();
  _objc_release_x20();
  if (cVar1 == '\x01') {
    func_0x00010001a5a8();
    lVar2 = _DAT_10005ff48;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_10005ff48);
    _swift_retain(uVar6);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_10005ff50);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    _objc_retain_x25();
    _swift_retain(uVar6);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(uVar6);
    uVar6 = *(undefined8 *)(lVar3 + _DAT_10005fcf8);
    puVar4 = &UNK_100051a00;
    _swift_allocObject(&UNK_100051a00,0x50,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = lVar3;
    *(long *)(puVar4 + 0x20) = param_5;
    *(undefined8 *)(puVar4 + 0x28) = param_6;
    *(undefined8 *)(puVar4 + 0x30) = param_1;
    *(undefined8 *)(puVar4 + 0x38) = param_2;
    *(undefined8 *)(puVar4 + 0x40) = param_3;
    *(undefined8 *)(puVar4 + 0x48) = param_4;
    pcStack_80 = FUN_10001c004;
    puStack_a0 = PTR___NSConcreteStackBlock_100050768;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1000272d0;
    puStack_88 = &UNK_100051a18;
    puStack_78 = puVar4;
    __Block_copy(&puStack_a0);
    puVar4 = puStack_78;
    _objc_retain_x23();
    _objc_retain_x22();
    _objc_retain_x21();
    _objc_retain_x19();
    _swift_release(puVar4);
    func_0x00010003c820(uVar6);
    __Block_release(ppuVar5);
    _objc_release_x22();
    _objc_release_x23();
  }
  return;
}



/* Entry: 10001b278; end: 10001be4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001b278(undefined *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x21;
  long lVar15;
  undefined *unaff_x22;
  undefined *unaff_x23;
  long lVar16;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar17;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [24];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100050780;
  puVar6 = auStack_80;
  _swift_beginAccess(param_1 + 0x10,puVar6,0,0);
  puVar17 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  puVar5 = (undefined *)0x0;
  puStack_138 = unaff_x27;
  if (puVar17 == (undefined *)0x0) goto LAB_10001b7d8;
  puStack_88 = PTR___swiftEmptyArrayStorage_100050c50;
  unaff_x20 = puVar17;
  FUN_10001a524();
  param_1 = _DAT_10005ff40;
  unaff_x21 = *(undefined **)(puVar17 + (long)_DAT_10005ff40);
  if (unaff_x21 == (undefined *)0x1) {
    puVar5 = unaff_x20;
    FUN_100018540();
    if (puVar5 == (undefined *)0x0) goto LAB_10001b324;
LAB_10001b310:
    _objc_release_x20();
LAB_10001b364:
    unaff_x20 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1000506e0;
    _objc_allocWithZone();
    puStack_90 = (undefined *)0x0;
    unaff_x22 = unaff_x20;
    _objc_retain_x22();
    func_0x00010003c2e0();
    unaff_x21 = puStack_90;
    if (unaff_x20 == (undefined *)0x0) {
      _objc_retain_x21();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release_x20();
      _swift_willThrow();
      _objc_release_x22();
      puVar5 = unaff_x21;
      _swift_errorRelease();
      unaff_x23 = unaff_x21;
    }
    else {
      _objc_retain_x21();
      _objc_release_x22();
      puStack_c0 = param_1;
      uVar12 = *(undefined8 *)(puVar17 + (long)param_1);
      puVar5 = (undefined *)0x0;
      FUN_1000190a0();
      puVar6 = puVar5;
      _objc_allocWithZone();
      *(undefined8 *)(puVar6 + _DAT_10005fe08) = uVar12;
      *(undefined **)(puVar6 + _DAT_10005fdf8) = unaff_x22;
      *(undefined **)(puVar6 + _DAT_10005fe00) = unaff_x20;
      unaff_x24 = PTR_s_init_10005b548;
      puStack_a8 = puVar6;
      puStack_a0 = puVar5;
      _objc_retain_x22();
      puStack_d0 = puVar6;
      _objc_retain_x20();
      ppuVar7 = &puStack_a8;
      _objc_msgSendSuper2(ppuVar7,unaff_x24);
      lVar2 = _DAT_10005ff48;
      uVar12 = *(undefined8 *)(puVar17 + _DAT_10005ff48);
      _swift_retain(uVar12);
      __s11SwiftSCLock4LockC4lockyyF();
      _swift_release(uVar12);
      *(undefined ***)(puVar17 + _DAT_10005ff50) = ppuVar7;
      _objc_retain_x22();
      _objc_release_x20();
      puVar5 = *(undefined **)(puVar17 + lVar2);
      _swift_retain(puVar5);
      __s11SwiftSCLock4LockC6unlockyyF();
      _objc_release_x22();
      _swift_release();
      _objc_retain_x21();
      __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
      uVar8 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
      uVar1 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x18);
      if (uVar1 >> 1 <= uVar8) {
        __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                  (1 < uVar1,uVar8 + 1,1);
      }
      puVar6 = puVar5;
      __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5();
      puVar4 = puStack_88;
      _objc_retain_x8(*(undefined8 *)(puVar17 + _DAT_10005ff38));
      func_0x000100018328();
      _objc_release_x21();
      puStack_c8 = puVar5;
      if (uVar8 != 0) {
        puVar9 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1000506e0;
        _objc_allocWithZone();
        puStack_90 = (undefined *)0x0;
        _objc_retain_x20();
        func_0x00010003c2e0();
        puVar5 = puStack_90;
        if (puVar9 == (undefined *)0x0) {
          _objc_retain_x21();
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar5);
          _objc_release_x20();
          _swift_willThrow();
          _objc_release_x25();
          _swift_errorRelease(puVar5);
          _objc_release_x25();
        }
        else {
          _objc_retain_x21();
          _objc_release_x25();
          _objc_retain_x20();
          __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
          uVar8 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
          uVar1 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x18);
          if (uVar1 >> 1 <= uVar8) {
            __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                      (1 < uVar1,uVar8 + 1,1);
          }
          __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5(uVar8);
          _objc_release_x21();
          _objc_release_x25();
          puVar6 = puVar9;
          puVar4 = puStack_88;
        }
      }
      puVar5 = _DAT_10005ff30;
      _objc_retain_x8(*(undefined8 *)(puVar17 + (long)_DAT_10005ff30));
      puVar9 = puVar4;
      FUN_1000193f4();
      _objc_release_x20();
      puStack_e0 = puVar5;
      _objc_retain_x8(*(undefined8 *)(puVar17 + (long)puVar5));
      unaff_x25 = puVar9;
      FUN_10001a58c();
      FUN_100013d20();
      unaff_x26 = unaff_x25;
      _objc_release_x20();
      uVar12 = _DAT_10005fe48;
      __s11SwiftSCLock4LockC4lockyyF();
      lVar2 = _DAT_10005fe40;
      uStack_b0 = uVar12;
      _objc_retain_x8(*(undefined8 *)(puVar9 + _DAT_10005fe40));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003ba60();
      _objc_release_x26();
      puStack_d8 = puVar4;
      puStack_b8 = puVar17;
      if ((ulong)unaff_x25 >> 0x3e == 0) {
        puVar17 = *(undefined **)(((ulong)unaff_x25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar17 = (undefined *)((ulong)unaff_x25 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < unaff_x25) {
          puVar17 = unaff_x25;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        unaff_x26 = puVar17;
      }
      if (puVar17 != (undefined *)0x0) {
        if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001b814);
          (*pcVar3)();
        }
        puVar5 = (undefined *)0x0;
        do {
          if (((ulong)unaff_x25 & 0xc000000000000001) == 0) {
            _objc_retain_x8(*(undefined8 *)(unaff_x25 + (long)puVar5 * 8 + 0x20));
            unaff_x28 = unaff_x26;
          }
          else {
            unaff_x28 = puVar5;
            puVar6 = unaff_x25;
            __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
          }
          unaff_x24 = unaff_x28;
          __s11SwiftSCLock4LockC4lockyyF();
          _objc_retain_x8(*(undefined8 *)(puVar9 + lVar2));
          __s11SwiftSCLock4LockC6unlockyyF();
          func_0x00010003bbc0();
          unaff_x26 = unaff_x24;
          _objc_release_x23();
          if ((int)unaff_x24 != 0) {
            __s11SwiftSCLock4LockC4lockyyF();
            _objc_retain_x8(*(undefined8 *)(puVar9 + lVar2));
            __s11SwiftSCLock4LockC6unlockyyF();
            func_0x00010003b8a0();
            _objc_release_x23();
          }
          puVar5 = puVar5 + 1;
          _objc_release_x28();
        } while (puVar17 != puVar5);
      }
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(puVar9 + lVar2));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003bcc0(unaff_x26);
      _objc_release_x21();
      unaff_x21 = unaff_x25;
      _swift_bridgeObjectRelease();
      _objc_release_x26();
      param_1 = puStack_b8;
      puVar17 = puStack_c0;
      unaff_x23 = puStack_e0;
      unaff_x20 = (undefined *)(ulong)(*(long *)(puStack_b8 + (long)puStack_c0) == 1);
      _objc_retain_x8(*(undefined8 *)(puStack_b8 + (long)puStack_e0));
      FUN_10001974c();
      _objc_release_x21();
      if (*(long *)(param_1 + (long)puVar17) == 2) {
        _objc_retain_x8(*(undefined8 *)(param_1 + (long)unaff_x23));
        FUN_1000195d4();
        puVar5 = puStack_d8;
        _swift_bridgeObjectRelease();
        _objc_release_x20();
      }
      else {
        puVar5 = puStack_d8;
        _swift_bridgeObjectRelease();
        unaff_x20 = unaff_x21;
      }
      unaff_x22 = puStack_c8;
      puVar17 = puStack_d0;
      _objc_release_x19();
    }
    _objc_release_x22();
  }
  else {
    if ((unaff_x21 == (undefined *)0x2) &&
       (puVar5 = unaff_x20, FUN_100018420(), puVar5 != (undefined *)0x0)) goto LAB_10001b310;
LAB_10001b324:
    puVar4 = PTR__OBJC_CLASS___AVCaptureDevice_1000506d0;
    _objc_opt_self();
    func_0x00010003be40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_release_x20();
    unaff_x22 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) goto LAB_10001b364;
  }
  _objc_release_x27();
  puStack_138 = puVar17;
LAB_10001b7d8:
  if (*(long *)PTR____stack_chk_guard_100050780 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x10001b840;
  puStack_140 = unaff_x28;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  puStack_100 = unaff_x20;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _swift_beginAccess(puVar5 + 0x10,auStack_158,0,0);
  puVar5 = puVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_10005ff48;
  if (puVar5 != (undefined *)0x0) {
    if ((puVar6 != (undefined *)0x0) && (puVar6 != *(undefined **)(puVar5 + (long)_DAT_10005ff40)))
    {
      uVar12 = *(undefined8 *)(puVar5 + _DAT_10005ff48);
      _swift_retain(uVar12);
      __s11SwiftSCLock4LockC4lockyyF();
      _swift_release(uVar12);
      lVar15 = _DAT_10005ff50;
      lVar16 = *(long *)(puVar5 + _DAT_10005ff50);
      lVar13 = *(long *)(puVar5 + lVar2);
      _objc_retain_x23();
      _swift_retain(lVar13);
      __s11SwiftSCLock4LockC6unlockyyF();
      _swift_release();
      if (lVar16 != 0) {
        _objc_retain_x27();
        lVar10 = lVar13;
        __s11SwiftSCLock4LockC4lockyyF();
        lVar16 = _DAT_10005fe40;
        _objc_retain_x8(*(undefined8 *)(lVar13 + _DAT_10005fe40));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003ba60(lVar10);
        _objc_release_x24();
        puVar17 = puVar5;
        func_0x00010001badc(puVar5,uVar12,puVar6);
        __s11SwiftSCLock4LockC4lockyyF();
        _objc_retain_x8(*(undefined8 *)(lVar13 + lVar16));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003bcc0(puVar17);
        _objc_release_x23();
        _objc_release_x22();
        uVar12 = *(undefined8 *)(puVar5 + lVar2);
        _swift_retain(uVar12);
        __s11SwiftSCLock4LockC4lockyyF();
        _swift_release();
        lVar15 = *(long *)(puVar5 + lVar15);
        uVar14 = *(undefined8 *)(puVar5 + lVar2);
        _objc_retain_x21();
        _swift_retain(uVar14);
        __s11SwiftSCLock4LockC6unlockyyF();
        _swift_release(uVar14);
        if (lVar15 != 0) {
          func_0x00010001a5a8();
          pcVar11 = "setLastSavedZoomFactor(of:)";
          func_0x00010003a450("setLastSavedZoomFactor(of:)");
          _objc_retainAutoreleasedReturnValue();
          puVar6 = &UNK_100051bb8;
          _swift_allocObject(&UNK_100051bb8,0x18,7);
          _swift_unknownObjectWeakInit(puVar6 + 0x10,uVar14);
          puVar17 = &UNK_100051be0;
          _swift_allocObject(&UNK_100051be0,0x20,7);
          *(undefined **)(puVar17 + 0x10) = puVar6;
          *(undefined8 *)(puVar17 + 0x18) = uVar12;
          pcStack_168 = FUN_10001c0ec;
          puStack_188 = PTR___NSConcreteStackBlock_100050768;
          uStack_180 = 0x42000000;
          pcStack_178 = FUN_1000272d0;
          puStack_170 = &UNK_100051bf8;
          ppuVar7 = &puStack_188;
          puStack_160 = puVar17;
          __Block_copy(ppuVar7);
          puVar6 = puStack_160;
          _objc_retain_x22();
          _swift_release(puVar6);
          func_0x00010003c820(pcVar11);
          __Block_release(ppuVar7);
          _objc_release_x22();
          _objc_release_x20();
          _objc_release_x19();
          _objc_release_x26();
          _swift_unknownObjectRelease(pcVar11);
          return;
        }
        _objc_release_x19();
        _objc_release_x26();
        return;
      }
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001be4c; end: 10001bea7; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraDataSource init] */

void FUN_10001be4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraDataSource",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001be78);
  (*pcVar1)();
}



/* Entry: 10001bea8; end: 10001bf5f; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001bea8(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff20));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff28));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff30));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff38));
  _swift_release(*(undefined8 *)(param_1 + _DAT_10005ff48));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff50));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff58));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff60));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ff68));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005ff70));
  return;
}



/* Entry: 10001bf60; end: 10001bfa3;  */

void FUN_10001bf60(void)

{
  _objc_opt_self(&PTR_PTR_10005cd58);
  return;
}



/* Entry: 10001bfa4; end: 10001bfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001bfa4(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *unaff_x20;
  long lVar15;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar16;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar17;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [24];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100050780;
  puVar6 = auStack_80;
  _swift_beginAccess(unaff_x20 + 0x10,puVar6,0,0);
  puVar17 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  puVar5 = (undefined *)0x0;
  puVar12 = unaff_x20;
  puStack_138 = unaff_x27;
  if (puVar17 == (undefined *)0x0) goto LAB_10001b7d8;
  puStack_88 = PTR___swiftEmptyArrayStorage_100050c50;
  puVar12 = puVar17;
  FUN_10001a524();
  unaff_x20 = _DAT_10005ff40;
  unaff_x21 = *(undefined **)(puVar17 + (long)_DAT_10005ff40);
  if (unaff_x21 == (undefined *)0x1) {
    puVar5 = puVar12;
    FUN_100018540();
    if (puVar5 == (undefined *)0x0) goto LAB_10001b324;
LAB_10001b310:
    _objc_release_x20();
LAB_10001b364:
    puVar12 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1000506e0;
    _objc_allocWithZone();
    puStack_90 = (undefined *)0x0;
    unaff_x22 = puVar12;
    _objc_retain_x22();
    func_0x00010003c2e0();
    unaff_x21 = puStack_90;
    if (puVar12 == (undefined *)0x0) {
      _objc_retain_x21();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release_x20();
      _swift_willThrow();
      _objc_release_x22();
      puVar5 = unaff_x21;
      _swift_errorRelease();
      unaff_x23 = unaff_x21;
    }
    else {
      _objc_retain_x21();
      _objc_release_x22();
      puStack_c0 = unaff_x20;
      uVar11 = *(undefined8 *)(puVar17 + (long)unaff_x20);
      puVar5 = (undefined *)0x0;
      FUN_1000190a0();
      puVar6 = puVar5;
      _objc_allocWithZone();
      *(undefined8 *)(puVar6 + _DAT_10005fe08) = uVar11;
      *(undefined **)(puVar6 + _DAT_10005fdf8) = unaff_x22;
      *(undefined **)(puVar6 + _DAT_10005fe00) = puVar12;
      unaff_x24 = PTR_s_init_10005b548;
      puStack_a8 = puVar6;
      puStack_a0 = puVar5;
      _objc_retain_x22();
      puStack_d0 = puVar6;
      _objc_retain_x20();
      ppuVar7 = &puStack_a8;
      _objc_msgSendSuper2(ppuVar7,unaff_x24);
      lVar2 = _DAT_10005ff48;
      uVar11 = *(undefined8 *)(puVar17 + _DAT_10005ff48);
      _swift_retain(uVar11);
      __s11SwiftSCLock4LockC4lockyyF();
      _swift_release(uVar11);
      *(undefined ***)(puVar17 + _DAT_10005ff50) = ppuVar7;
      _objc_retain_x22();
      _objc_release_x20();
      puVar5 = *(undefined **)(puVar17 + lVar2);
      _swift_retain(puVar5);
      __s11SwiftSCLock4LockC6unlockyyF();
      _objc_release_x22();
      _swift_release();
      _objc_retain_x21();
      __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
      uVar8 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
      uVar1 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x18);
      if (uVar1 >> 1 <= uVar8) {
        __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                  (1 < uVar1,uVar8 + 1,1);
      }
      puVar6 = puVar5;
      __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5();
      puVar12 = puStack_88;
      _objc_retain_x8(*(undefined8 *)(puVar17 + _DAT_10005ff38));
      func_0x000100018328();
      _objc_release_x21();
      puStack_c8 = puVar5;
      if (uVar8 != 0) {
        puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceInput_1000506e0;
        _objc_allocWithZone();
        puStack_90 = (undefined *)0x0;
        _objc_retain_x20();
        func_0x00010003c2e0();
        puVar5 = puStack_90;
        if (puVar4 == (undefined *)0x0) {
          _objc_retain_x21();
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar5);
          _objc_release_x20();
          _swift_willThrow();
          _objc_release_x25();
          _swift_errorRelease(puVar5);
          _objc_release_x25();
        }
        else {
          _objc_retain_x21();
          _objc_release_x25();
          _objc_retain_x20();
          __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
          uVar8 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
          uVar1 = *(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x18);
          if (uVar1 >> 1 <= uVar8) {
            __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                      (1 < uVar1,uVar8 + 1,1);
          }
          __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5(uVar8);
          _objc_release_x21();
          _objc_release_x25();
          puVar6 = puVar4;
          puVar12 = puStack_88;
        }
      }
      puVar5 = _DAT_10005ff30;
      _objc_retain_x8(*(undefined8 *)(puVar17 + (long)_DAT_10005ff30));
      puVar4 = puVar12;
      FUN_1000193f4();
      _objc_release_x20();
      puStack_e0 = puVar5;
      _objc_retain_x8(*(undefined8 *)(puVar17 + (long)puVar5));
      unaff_x25 = puVar4;
      FUN_10001a58c();
      FUN_100013d20();
      unaff_x26 = unaff_x25;
      _objc_release_x20();
      uVar11 = _DAT_10005fe48;
      __s11SwiftSCLock4LockC4lockyyF();
      lVar2 = _DAT_10005fe40;
      uStack_b0 = uVar11;
      _objc_retain_x8(*(undefined8 *)(puVar4 + _DAT_10005fe40));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003ba60();
      _objc_release_x26();
      puStack_d8 = puVar12;
      puStack_b8 = puVar17;
      if ((ulong)unaff_x25 >> 0x3e == 0) {
        puVar17 = *(undefined **)(((ulong)unaff_x25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar17 = (undefined *)((ulong)unaff_x25 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < unaff_x25) {
          puVar17 = unaff_x25;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        unaff_x26 = puVar17;
      }
      if (puVar17 != (undefined *)0x0) {
        if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001b814);
          (*pcVar3)();
        }
        puVar5 = (undefined *)0x0;
        do {
          if (((ulong)unaff_x25 & 0xc000000000000001) == 0) {
            _objc_retain_x8(*(undefined8 *)(unaff_x25 + (long)puVar5 * 8 + 0x20));
            unaff_x28 = unaff_x26;
          }
          else {
            unaff_x28 = puVar5;
            puVar6 = unaff_x25;
            __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5();
          }
          unaff_x24 = unaff_x28;
          __s11SwiftSCLock4LockC4lockyyF();
          _objc_retain_x8(*(undefined8 *)(puVar4 + lVar2));
          __s11SwiftSCLock4LockC6unlockyyF();
          func_0x00010003bbc0();
          unaff_x26 = unaff_x24;
          _objc_release_x23();
          if ((int)unaff_x24 != 0) {
            __s11SwiftSCLock4LockC4lockyyF();
            _objc_retain_x8(*(undefined8 *)(puVar4 + lVar2));
            __s11SwiftSCLock4LockC6unlockyyF();
            func_0x00010003b8a0();
            _objc_release_x23();
          }
          puVar5 = puVar5 + 1;
          _objc_release_x28();
        } while (puVar17 != puVar5);
      }
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(puVar4 + lVar2));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003bcc0(unaff_x26);
      _objc_release_x21();
      unaff_x21 = unaff_x25;
      _swift_bridgeObjectRelease();
      _objc_release_x26();
      unaff_x20 = puStack_b8;
      puVar17 = puStack_c0;
      unaff_x23 = puStack_e0;
      puVar12 = (undefined *)(ulong)(*(long *)(puStack_b8 + (long)puStack_c0) == 1);
      _objc_retain_x8(*(undefined8 *)(puStack_b8 + (long)puStack_e0));
      FUN_10001974c();
      _objc_release_x21();
      if (*(long *)(unaff_x20 + (long)puVar17) == 2) {
        _objc_retain_x8(*(undefined8 *)(unaff_x20 + (long)unaff_x23));
        FUN_1000195d4();
        puVar5 = puStack_d8;
        _swift_bridgeObjectRelease();
        _objc_release_x20();
      }
      else {
        puVar5 = puStack_d8;
        _swift_bridgeObjectRelease();
        puVar12 = unaff_x21;
      }
      unaff_x22 = puStack_c8;
      puVar17 = puStack_d0;
      _objc_release_x19();
    }
    _objc_release_x22();
  }
  else {
    if ((unaff_x21 == (undefined *)0x2) &&
       (puVar5 = puVar12, FUN_100018420(), puVar5 != (undefined *)0x0)) goto LAB_10001b310;
LAB_10001b324:
    puVar4 = PTR__OBJC_CLASS___AVCaptureDevice_1000506d0;
    _objc_opt_self();
    func_0x00010003be40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_release_x20();
    unaff_x22 = (undefined *)0x0;
    if (puVar4 != (undefined *)0x0) goto LAB_10001b364;
  }
  _objc_release_x27();
  puStack_138 = puVar17;
LAB_10001b7d8:
  if (*(long *)PTR____stack_chk_guard_100050780 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x10001b840;
  puStack_140 = unaff_x28;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  puStack_100 = puVar12;
  puStack_f8 = unaff_x20;
  puStack_f0 = &stack0xfffffffffffffff0;
  _swift_beginAccess(puVar5 + 0x10,auStack_158,0,0);
  puVar5 = puVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_10005ff48;
  if (puVar5 != (undefined *)0x0) {
    if ((puVar6 != (undefined *)0x0) && (puVar6 != *(undefined **)(puVar5 + (long)_DAT_10005ff40)))
    {
      uVar11 = *(undefined8 *)(puVar5 + _DAT_10005ff48);
      _swift_retain(uVar11);
      __s11SwiftSCLock4LockC4lockyyF();
      _swift_release(uVar11);
      lVar15 = _DAT_10005ff50;
      lVar16 = *(long *)(puVar5 + _DAT_10005ff50);
      lVar13 = *(long *)(puVar5 + lVar2);
      _objc_retain_x23();
      _swift_retain(lVar13);
      __s11SwiftSCLock4LockC6unlockyyF();
      _swift_release();
      if (lVar16 != 0) {
        _objc_retain_x27();
        lVar9 = lVar13;
        __s11SwiftSCLock4LockC4lockyyF();
        lVar16 = _DAT_10005fe40;
        _objc_retain_x8(*(undefined8 *)(lVar13 + _DAT_10005fe40));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003ba60(lVar9);
        _objc_release_x24();
        puVar17 = puVar5;
        func_0x00010001badc(puVar5,uVar11,puVar6);
        __s11SwiftSCLock4LockC4lockyyF();
        _objc_retain_x8(*(undefined8 *)(lVar13 + lVar16));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003bcc0(puVar17);
        _objc_release_x23();
        _objc_release_x22();
        uVar11 = *(undefined8 *)(puVar5 + lVar2);
        _swift_retain(uVar11);
        __s11SwiftSCLock4LockC4lockyyF();
        _swift_release();
        lVar15 = *(long *)(puVar5 + lVar15);
        uVar14 = *(undefined8 *)(puVar5 + lVar2);
        _objc_retain_x21();
        _swift_retain(uVar14);
        __s11SwiftSCLock4LockC6unlockyyF();
        _swift_release(uVar14);
        if (lVar15 != 0) {
          func_0x00010001a5a8();
          pcVar10 = "setLastSavedZoomFactor(of:)";
          func_0x00010003a450("setLastSavedZoomFactor(of:)");
          _objc_retainAutoreleasedReturnValue();
          puVar6 = &UNK_100051bb8;
          _swift_allocObject(&UNK_100051bb8,0x18,7);
          _swift_unknownObjectWeakInit(puVar6 + 0x10,uVar14);
          puVar17 = &UNK_100051be0;
          _swift_allocObject(&UNK_100051be0,0x20,7);
          *(undefined **)(puVar17 + 0x10) = puVar6;
          *(undefined8 *)(puVar17 + 0x18) = uVar11;
          pcStack_168 = FUN_10001c0ec;
          puStack_188 = PTR___NSConcreteStackBlock_100050768;
          uStack_180 = 0x42000000;
          pcStack_178 = FUN_1000272d0;
          puStack_170 = &UNK_100051bf8;
          ppuVar7 = &puStack_188;
          puStack_160 = puVar17;
          __Block_copy(ppuVar7);
          puVar6 = puStack_160;
          _objc_retain_x22();
          _swift_release(puVar6);
          func_0x00010003c820(pcVar10);
          __Block_release(ppuVar7);
          _objc_release_x22();
          _objc_release_x20();
          _objc_release_x19();
          _objc_release_x26();
          _swift_unknownObjectRelease(pcVar10);
          return;
        }
        _objc_release_x19();
        _objc_release_x26();
        return;
      }
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001bfc8; end: 10001c003;  */

void FUN_10001bfc8(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c004; end: 10001c017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  if (lVar4 != 0) {
    ppuVar8 = &puStack_b0;
    uVar9 = *(undefined8 *)(lVar4 + _DAT_10005fdf8);
    uVar10 = uVar11;
    _objc_retain();
    func_0x00010003d860(uVar9);
    uVar9 = *(undefined8 *)(lVar4 + _DAT_10005fe08);
    pcVar5 = "forwardPanGesture(_:device:containerView:cameraTimerFrameInContainerView:)";
    func_0x00010003a450("forwardPanGesture(_:device:containerView:cameraTimerFrameInContainerView:)"
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &UNK_1000517a8;
    _swift_allocObject(&UNK_1000517a8,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10,uVar2);
    puVar7 = &UNK_1000517d0;
    _swift_allocObject(&UNK_1000517d0,0x60,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = uVar9;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar3;
    *(undefined8 *)(puVar7 + 0x30) = uVar10;
    *(undefined8 *)(puVar7 + 0x38) = uVar11;
    *(undefined8 *)(puVar7 + 0x40) = uVar12;
    *(undefined8 *)(puVar7 + 0x48) = uVar13;
    *(undefined8 *)(puVar7 + 0x50) = uVar14;
    *(long *)(puVar7 + 0x58) = lVar4;
    pcStack_90 = FUN_100017eac;
    puStack_b0 = PTR___NSConcreteStackBlock_100050768;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1000272d0;
    puStack_98 = &UNK_1000517e8;
    puStack_88 = puVar7;
    __Block_copy(&puStack_b0);
    puVar6 = puStack_88;
    _objc_retain_x22();
    _objc_retain_x20();
    _objc_retain_x19();
    _swift_release(puVar6);
    func_0x00010003c820(pcVar5);
    __Block_release(ppuVar8);
    _objc_release_x22();
    _swift_unknownObjectRelease(pcVar5);
  }
  return;
}



/* Entry: 10001c018; end: 10001c04b;  */

void FUN_10001c018(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c04c; end: 10001c057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c04c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  if (lVar2 != 0) {
    ppuVar6 = &puStack_80;
    uVar8 = *(undefined8 *)(lVar2 + _DAT_10005fdf8);
    _objc_retain();
    func_0x00010003d860(uVar8);
    uVar8 = *(undefined8 *)(lVar2 + _DAT_10005fe08);
    pcVar3 = "forwardPinchGesture(_:device:)";
    func_0x00010003a450("forwardPinchGesture(_:device:)");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &UNK_1000517a8;
    _swift_allocObject(&UNK_1000517a8,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10,uVar1);
    puVar5 = &UNK_100051870;
    _swift_allocObject(&UNK_100051870,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar8;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    *(long *)(puVar5 + 0x30) = lVar2;
    pcStack_60 = FUN_100017f40;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_100051888;
    puStack_58 = puVar5;
    __Block_copy(&puStack_80);
    puVar4 = puStack_58;
    _objc_retain_x21();
    _objc_retain_x19();
    _swift_release(puVar4);
    func_0x00010003c820(pcVar3);
    __Block_release(ppuVar6);
    _objc_release_x21();
    _swift_unknownObjectRelease(pcVar3);
  }
  return;
}



/* Entry: 10001c058; end: 10001c083;  */

void FUN_10001c058(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c084; end: 10001c093;  */

void FUN_10001c084(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000100018a6c(0);
  }
  pcVar2 = "didStopRecording(withDevice:)";
  func_0x00010003a450("didStopRecording(withDevice:)");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_1000515e8;
  _swift_allocObject(&UNK_1000515e8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,uVar1);
  pcStack_40 = FUN_1000154e8;
  puStack_60 = PTR___NSConcreteStackBlock_100050768;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000272d0;
  puStack_48 = &UNK_100051628;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x00010003c820(pcVar2);
  __Block_release(ppuVar4);
  _swift_unknownObjectRelease(pcVar2);
  return;
}



/* Entry: 10001c094; end: 10001c0b7;  */

void FUN_10001c094(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c0b8; end: 10001c0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c0b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_10005ff48;
  if (lVar3 != 0) {
    if ((lVar12 != 0) && (lVar12 != *(long *)(lVar3 + _DAT_10005ff40))) {
      uVar9 = *(undefined8 *)(lVar3 + _DAT_10005ff48);
      _swift_retain(uVar9);
      __s11SwiftSCLock4LockC4lockyyF();
      _swift_release(uVar9);
      lVar2 = _DAT_10005ff50;
      lVar13 = *(long *)(lVar3 + _DAT_10005ff50);
      lVar10 = *(long *)(lVar3 + lVar1);
      _objc_retain_x23();
      _swift_retain(lVar10);
      __s11SwiftSCLock4LockC6unlockyyF();
      _swift_release();
      if (lVar13 != 0) {
        _objc_retain_x27();
        lVar4 = lVar10;
        __s11SwiftSCLock4LockC4lockyyF();
        lVar13 = _DAT_10005fe40;
        _objc_retain_x8(*(undefined8 *)(lVar10 + _DAT_10005fe40));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003ba60(lVar4);
        _objc_release_x24();
        lVar4 = lVar3;
        func_0x00010001badc(lVar3,uVar9,lVar12);
        __s11SwiftSCLock4LockC4lockyyF();
        _objc_retain_x8(*(undefined8 *)(lVar10 + lVar13));
        __s11SwiftSCLock4LockC6unlockyyF();
        func_0x00010003bcc0(lVar4);
        _objc_release_x23();
        _objc_release_x22();
        uVar9 = *(undefined8 *)(lVar3 + lVar1);
        _swift_retain(uVar9);
        __s11SwiftSCLock4LockC4lockyyF();
        _swift_release();
        lVar12 = *(long *)(lVar3 + lVar2);
        uVar11 = *(undefined8 *)(lVar3 + lVar1);
        _objc_retain_x21();
        _swift_retain(uVar11);
        __s11SwiftSCLock4LockC6unlockyyF();
        _swift_release(uVar11);
        if (lVar12 != 0) {
          func_0x00010001a5a8();
          pcVar5 = "setLastSavedZoomFactor(of:)";
          func_0x00010003a450("setLastSavedZoomFactor(of:)");
          _objc_retainAutoreleasedReturnValue();
          puVar6 = &UNK_100051bb8;
          _swift_allocObject(&UNK_100051bb8,0x18,7);
          _swift_unknownObjectWeakInit(puVar6 + 0x10,uVar11);
          puVar7 = &UNK_100051be0;
          _swift_allocObject(&UNK_100051be0,0x20,7);
          *(undefined **)(puVar7 + 0x10) = puVar6;
          *(undefined8 *)(puVar7 + 0x18) = uVar9;
          pcStack_88 = FUN_10001c0ec;
          puStack_a8 = PTR___NSConcreteStackBlock_100050768;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_1000272d0;
          puStack_90 = &UNK_100051bf8;
          ppuVar8 = &puStack_a8;
          puStack_80 = puVar7;
          __Block_copy(ppuVar8);
          puVar6 = puStack_80;
          _objc_retain_x22();
          _swift_release(puVar6);
          func_0x00010003c820(pcVar5);
          __Block_release(ppuVar8);
          _objc_release_x22();
          _objc_release_x20();
          _objc_release_x19();
          _objc_release_x26();
          _swift_unknownObjectRelease(pcVar5);
          return;
        }
        _objc_release_x19();
        _objc_release_x26();
        return;
      }
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001c0c0; end: 10001c0eb;  */

void FUN_10001c0c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c0ec; end: 10001c0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c0ec(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    plVar1 = (long *)&DAT_10005fd20;
    if (*(long *)(lVar2 + _DAT_10005fe08) != 2) {
      plVar1 = (long *)&DAT_10005fd28;
    }
    dVar7 = *(double *)(*(long *)(lVar3 + *plVar1) + _DAT_10005fd70);
    dVar8 = *(double *)(*(long *)(lVar3 + *plVar1) + _DAT_10005fd78);
    uVar6 = *(undefined8 *)(lVar3 + _DAT_10005fcf8);
    puVar4 = &UNK_100051910;
    _swift_allocObject(&UNK_100051910,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(double *)(puVar4 + 0x18) = dVar7 * dVar8;
    uStack_78 = 0x100017fb0;
    puStack_98 = PTR___NSConcreteStackBlock_100050768;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000272d0;
    puStack_80 = &UNK_100051928;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    __Block_copy(ppuVar5);
    puVar4 = puStack_70;
    _objc_retain_x23();
    _objc_retain_x19();
    _swift_release(puVar4);
    func_0x00010003c820(uVar6);
    __Block_release(ppuVar5);
    _objc_release_x24();
    _objc_release_x23();
  }
  return;
}



/* Entry: 10001c0f4; end: 10001c137;  */

void FUN_10001c0f4(void)

{
  undefined *puVar1;
  
  if (puRam000000010005fe80 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVCaptureInput_1000506e8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000010005fe80 = puVar1;
  return;
}



/* Entry: 10001c138; end: 10001c17b;  */

void FUN_10001c138(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001c17c; end: 10001c1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001c17c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = _DAT_10005ffa8;
  lVar3 = *(long *)(unaff_x20 + _DAT_10005ffa8);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_10005ffa0);
    uVar2 = 0;
    FUN_10001bf60(0);
    _objc_allocWithZone();
    FUN_10001a79c(lVar4,uVar2);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    _objc_retain();
    _objc_release_x20();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar4;
}



/* Entry: 10001c200; end: 10001c25b; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraHardwareService init] */

void FUN_10001c200(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraHardwareService",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001c22c);
  (*pcVar1)();
}



/* Entry: 10001c25c; end: 10001c26b; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraHardwareService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005ffa8));
  return;
}



/* Entry: 10001c26c; end: 10001c28b;  */

void FUN_10001c26c(void)

{
  _objc_opt_self(&PTR_PTR_10005cfc8);
  return;
}



/* Entry: 10001c28c; end: 10001c363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c28c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_10005ffd8;
  uVar2 = 0;
  func_0x00010001c8ec();
  uVar3 = uVar2;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_10005ffe0;
  uVar3 = uVar2;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_10005ffe8;
  uVar3 = uVar2;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_10005fff0;
  uVar3 = uVar2;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_10005fff8;
  uVar3 = uVar2;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_100060000;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  FUN_10001c42c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_10005b548);
  return;
}



/* Entry: 10001c364; end: 10001c383; -[_TtC28SnapchatCaptureExtension_lib40LockedCameraOverlayViewContainerProvider init] */

void FUN_10001c364(void)

{
  FUN_10001c28c();
  return;
}



/* Entry: 10001c384; end: 10001c3b3;  */

void FUN_10001c384(void)

{
  FUN_10001c42c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001c3b4; end: 10001c42b; -[_TtC28SnapchatCaptureExtension_lib40LockedCameraOverlayViewContainerProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c3b4(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ffd8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ffe0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005ffe8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fff0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005fff8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060000));
  return;
}



/* Entry: 10001c42c; end: 10001c44b;  */

void FUN_10001c42c(void)

{
  _objc_opt_self(&PTR_PTR_10005d0a8);
  return;
}



/* Entry: 10001c44c; end: 10001c4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001c44c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060030;
  lVar3 = *(long *)(unaff_x20 + _DAT_100060030);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = 0;
    FUN_10001c42c();
    _objc_allocWithZone();
    func_0x00010003c1e0();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10001c4b4; end: 10001c4fb; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraUIService init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c4b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_100060030) = 0;
  lVar1 = param_1;
  FUN_10001c53c();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10005b548);
  return;
}



/* Entry: 10001c4fc; end: 10001c52b;  */

void FUN_10001c4fc(void)

{
  FUN_10001c53c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001c52c; end: 10001c53b; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraUIService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060030));
  return;
}



/* Entry: 10001c53c; end: 10001c55b;  */

void FUN_10001c53c(void)

{
  _objc_opt_self(&PTR_PTR_10005d188);
  return;
}



/* Entry: 10001c55c; end: 10001c5b7; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraViewContainer init] */

undefined1 * FUN_10001c55c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = &uStack_30;
  uVar1 = param_1;
  func_0x00010001c8ec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(0,0,0,0,&uStack_30,PTR_s_initWithFrame__10005b5a0);
  func_0x00010003d440();
  return (undefined1 *)puVar2;
}



/* Entry: 10001c5b8; end: 10001c60f; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraViewContainer initWithFrame:] */

void FUN_10001c5b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraViewContainer.swift",0x3c,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001c610);
  (*pcVar1)();
}



/* Entry: 10001c610; end: 10001c667; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraViewContainer initWithCoder:] */

void FUN_10001c610(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraViewContainer.swift",0x3c,2,0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001c668);
  (*pcVar1)();
}



/* Entry: 10001c668; end: 10001c6bf; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraViewContainer addSubview:] */

void FUN_10001c668(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000003c,0x800000010004c260,
             "SnapchatCaptureExtension_lib/LockedCameraViewContainer.swift",0x3c,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001c6c0);
  (*pcVar1)();
}



/* Entry: 10001c6c0; end: 10001c8bb;  */

void FUN_10001c6c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010001c8ec();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_addSubview__10005b308,param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar2 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar3 = param_1;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar3 = param_1;
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar3 = param_1;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x21();
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  uVar3 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar3);
  _swift_release(lVar2);
  func_0x00010003b700(puVar1);
  _objc_release_x21();
  return;
}



/* Entry: 10001c8bc; end: 10001c90b;  */

void FUN_10001c8bc(void)

{
  func_0x00010001c8ec();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001c90c; end: 10001ca9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001c90c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060088;
  lVar3 = *(long *)(unaff_x20 + _DAT_100060088);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    func_0x00010001c96c();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 10001caa0; end: 10001cc93;  */

undefined * FUN_10001caa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e696b6e696c62,0xee0074736f68675f);
  puVar1 = PTR__OBJC_CLASS___UIImage_100050440;
  _objc_opt_self();
  func_0x00010003c140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010003c180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x20();
  }
  puVar1 = PTR__OBJC_CLASS___UIImageView_100050448;
  _objc_allocWithZone();
  func_0x00010003c360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  func_0x00010003cd40(puVar1);
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(puVar1);
  _objc_release_x21();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  puVar4 = puVar1;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd80(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  *(undefined **)(lVar3 + 0x28) = puVar4;
  uVar5 = 0;
  FUN_10001d7e8(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar5);
  _swift_release(lVar3);
  func_0x00010003b700(puVar2);
  _objc_release_x19();
  _objc_release_x22();
  return puVar1;
}



/* Entry: 10001cc94; end: 10001cd03; -[_TtC28SnapchatCaptureExtension_lib29LockedCameraCoolRecordingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001cc94(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060088) = 0;
  *(undefined8 *)(param_1 + _DAT_100060090) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraCoolRecordingView.swift",0x40,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001cd04);
  (*pcVar1)();
}



/* Entry: 10001cd04; end: 10001cd73; -[_TtC28SnapchatCaptureExtension_lib29LockedCameraCoolRecordingView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001cd04(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060088) = 0;
  *(undefined8 *)(param_1 + _DAT_100060090) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraCoolRecordingView.swift",0x40,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001cd74);
  (*pcVar1)();
}



/* Entry: 10001cd74; end: 10001d1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001cd74(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  double dVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x00010001ca44();
  func_0x00010003cf40();
  _objc_release_x19();
  lVar1 = _DAT_100060090;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_100060090);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100050568 + 8);
  puStack_a0 = *(undefined **)PTR__CGAffineTransformIdentity_100050568;
  puStack_88 = *(undefined **)(PTR__CGAffineTransformIdentity_100050568 + 0x18);
  pcStack_90 = *(code **)(PTR__CGAffineTransformIdentity_100050568 + 0x10);
  puStack_78 = *(undefined **)(PTR__CGAffineTransformIdentity_100050568 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100050568 + 0x20);
  _CGAffineTransformScale(&puStack_d0,0x3f847ae147ae147b,0x3f847ae147ae147b,&puStack_a0);
  uStack_98 = uStack_c8;
  puStack_a0 = puStack_d0;
  puStack_88 = (undefined *)uStack_b8;
  pcStack_90 = (code *)uStack_c0;
  puStack_78 = (undefined *)uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010003d420(uVar8);
  _objc_allocWithZone(PTR__OBJC_CLASS___UISpringTimingParameters_100050498);
  func_0x00010003c2a0(0x3fe4cccccccccccd,0x4024000000000000,0x4024000000000000);
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1000504c0;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIViewPropertyAnimator_1000504c0);
  func_0x00010003c300(0x3fd3333333333333);
  puVar3 = &UNK_100051c30;
  _swift_allocObject(&UNK_100051c30,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  uStack_80 = 0x10001d7e0;
  puStack_a0 = PTR___NSConcreteStackBlock_100050768;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1000272d0;
  puStack_88 = &UNK_100051c70;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  __Block_copy(ppuVar4);
  _swift_release(puStack_78);
  func_0x00010003b780(puVar2);
  __Block_release(ppuVar4);
  func_0x00010003d620(param_1,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_100050608;
  _objc_allocWithZone(PTR__OBJC_CLASS___CAAnimationGroup_100050608);
  func_0x00010003c1e0();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974696361706f,0xe700000000000000);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_100050610;
  _objc_opt_self();
  puVar5 = puVar2;
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_retain_x26();
  func_0x00010003cde0(0x3fd3333333333333);
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(1);
  func_0x00010003cf20(puVar5);
  _objc_release_x26();
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010003d3e0(puVar5);
  _objc_release_x26();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_100050628;
  _objc_opt_self(PTR__OBJC_CLASS___CAMediaTimingFunction_100050628);
  _objc_retain_x26();
  func_0x00010003c020(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d380(puVar5);
  _objc_release_x28();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974696361706f,0xe700000000000000);
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x28();
  _objc_retain_x25();
  func_0x00010003cc80(0x3fd3333333333333);
  func_0x00010003cde0(0x3fd999999999999a,puVar2);
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010003cf20(puVar2);
  _objc_release_x28();
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(1);
  func_0x00010003d3e0(puVar2);
  _objc_release_x28();
  func_0x00010003c020(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x26();
  func_0x00010003d380(puVar2);
  _objc_release_x27();
  lVar7 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  dVar9 = 9.88131291682493e-324;
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined **)(lVar7 + 0x20) = puVar5;
  *(undefined **)(lVar7 + 0x28) = puVar2;
  uVar8 = 0;
  FUN_10001d7e8(0,0x1000600d8,&PTR__OBJC_CLASS___CAAnimation_100050600);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar8);
  _swift_release(lVar7);
  func_0x00010003cc00(puVar3);
  _objc_release_x27();
  _objc_retain_x24();
  _CACurrentMediaTime();
  func_0x00010003cc80(param_1 + dVar9 + 1.0,puVar3);
  func_0x00010003d1c0(0x7f7fffff,puVar3);
  func_0x00010003cde0(0x3ff0000000000000,puVar3);
  _objc_release_x24();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974696361706f,0xe700000000000000);
  func_0x00010003b760(uVar8);
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x24();
  _objc_release_x23();
  _objc_release_x25();
  _objc_release_x20();
  _objc_release_x22();
  return;
}



/* Entry: 10001d1b4; end: 10001d22f;  */

void FUN_10001d1b4(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010001ca44();
    _objc_release_x20();
    func_0x00010003d420(param_1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001d230; end: 10001d31f;  */

void FUN_10001d230(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  FUN_10001c90c();
  func_0x00010003cbe0(0);
  _objc_release_x19();
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar2 = &UNK_100051c30;
  _swift_allocObject(&UNK_100051c30,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  pcStack_50 = FUN_10001d7bc;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_100051c48;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  _swift_release(puStack_48);
  func_0x00010003b980(0x3fb999999999999a,param_1,puVar1);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 10001d320; end: 10001d383;  */

void FUN_10001d320(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10001c90c();
    _objc_release_x20();
    func_0x00010003cbe0(0x3ff0000000000000,param_1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001d384; end: 10001d6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001d384(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  FUN_10001c90c();
  func_0x00010003d700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  _objc_release_x19();
  lVar1 = _DAT_100060088;
  if (param_1 == (undefined *)0x0) {
    func_0x00010003b8e0();
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
    _objc_opt_self();
    lVar3 = 0x10005fba0;
    FUN_100011744(0x10005fba0,&UNK_100040c80);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003bb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(lVar3 + 0x38) = uVar4;
    uVar4 = 0;
    FUN_10001d7e8(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar4);
    _swift_release(lVar3);
    func_0x00010003b700();
  }
  _objc_release_x21();
  func_0x00010001ca44();
  func_0x00010003d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  lVar1 = _DAT_100060090;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010003cf40(*(undefined8 *)(unaff_x20 + _DAT_100060090));
    func_0x00010003b8e0();
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
    _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    puVar6 = (undefined *)0x10005fba0;
    FUN_100011744(0x10005fba0,&UNK_100040c80);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 5;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003bc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(puVar6 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd40(0x4037000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x20();
    *(undefined8 *)(puVar6 + 0x28) = uVar4;
    uVar4 = 0;
    FUN_10001d7e8(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    puVar2 = puVar6;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,uVar4);
    _swift_release(puVar6);
    func_0x00010003b700(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10001d700; end: 10001d72f;  */

void FUN_10001d700(void)

{
  FUN_10001d778();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001d730; end: 10001d777; -[_TtC28SnapchatCaptureExtension_lib29LockedCameraCoolRecordingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001d730(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060088));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060090));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_1000600a0));
  return;
}



/* Entry: 10001d778; end: 10001d7bb;  */

void FUN_10001d778(void)

{
  _objc_opt_self(&PTR_PTR_10005d310);
  return;
}



/* Entry: 10001d7bc; end: 10001d7e7;  */

void FUN_10001d7bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_10001c90c();
    _objc_release_x20();
    func_0x00010003cbe0(0x3ff0000000000000,lVar1);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10001d7e8; end: 10001d827;  */

void FUN_10001d7e8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10001d828; end: 10001d82f;  */

void FUN_10001d828(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 10001d830; end: 10001d90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10001d830(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000600e8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_1000600e8);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    puVar2 = puVar3;
    func_0x00010003d440();
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x19();
    _objc_release_x22();
    puVar3 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar3);
  return puVar2;
}



/* Entry: 10001d910; end: 10001d9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10001d910(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_30;
  long lStack_28;
  
  plVar4 = &lStack_30;
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  FUN_10001d778();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_100060088) = 0;
  *(undefined8 *)(lVar3 + _DAT_100060090) = 0;
  *(undefined8 *)(lVar3 + _DAT_100060098) = 0x4034000000000000;
  *(undefined **)(lVar3 + _DAT_1000600a0) = puVar1;
  *(undefined8 *)(lVar3 + _DAT_1000600a8) = 0x4018000000000000;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,&lStack_30,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  func_0x00010003d460(plVar4);
  _objc_release_x19();
  return (undefined1 *)plVar4;
}



/* Entry: 10001d9ec; end: 10001dbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10001d9ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1000600e0;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_1000600e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000600f0) = 0;
  lVar1 = _DAT_100060108;
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_100050460;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_1000600f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_100060100) = param_1;
  FUN_10001edb0();
  puVar2 = PTR_s_initWithFrame__10005b5a0;
  _objc_retain_x19();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffa0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10001e2f8();
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8);
  puVar3 = puVar2;
  _objc_retain_x20();
  func_0x00010003c420(puVar2);
  func_0x00010003d0c0();
  func_0x00010003b7e0(puVar3);
  _objc_allocWithZone(PTR__OBJC_CLASS___UIPinchGestureRecognizer_100050480);
  func_0x00010003c420();
  func_0x00010003b7e0(puVar3);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8);
  func_0x00010003c420();
  _objc_release_x20();
  func_0x00010003d0c0(puVar2);
  func_0x00010003cac0(puVar2);
  func_0x00010003b7e0(puVar3);
  _objc_release_x20();
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x22();
  _objc_release_x23();
  return puVar3;
}



/* Entry: 10001dbac; end: 10001dc57; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dbac(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_1000600e0;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(param_1 + _DAT_1000600e8) = 0;
  *(undefined8 *)(param_1 + _DAT_1000600f0) = 0;
  lVar1 = _DAT_100060108;
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_100050460;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraOverlayView.swift",0x3a,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001dc58);
  (*pcVar2)();
}



/* Entry: 10001dc58; end: 10001dd03; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dc58(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_1000600e0;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(param_1 + _DAT_1000600e8) = 0;
  *(undefined8 *)(param_1 + _DAT_1000600f0) = 0;
  lVar1 = _DAT_100060108;
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_100050460;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraOverlayView.swift",0x3a,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001dd04);
  (*pcVar2)();
}



/* Entry: 10001dd04; end: 10001ded3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dd04(undefined8 param_1,byte param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  if ((param_3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
    puVar5 = &UNK_100051ca8;
    puVar2 = puVar5;
    _swift_allocObject(&UNK_100051ca8,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar3 = &UNK_100051cd0;
    _swift_allocObject(&UNK_100051cd0,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = param_2 & 1;
    puVar2 = PTR___NSConcreteStackBlock_100050768;
    pcStack_60 = FUN_10001ee18;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_100051ce8;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    _swift_release(puStack_58);
    _swift_allocObject(&UNK_100051ca8,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar3 = &UNK_100051d20;
    _swift_allocObject(&UNK_100051d20,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    puVar3[0x18] = param_2 & 1;
    pcStack_60 = (code *)0x10001ee40;
    puStack_80 = puVar2;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10002a4a4;
    puStack_68 = &UNK_100051d38;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    _swift_release(puStack_58);
    func_0x00010003b960(param_1,puVar1);
    __Block_release(ppuVar6);
    __Block_release(ppuVar4);
    return;
  }
  FUN_10001d830();
  uVar7 = 0;
  if ((param_2 & 1) == 0) {
    uVar7 = 0x3ff0000000000000;
  }
  func_0x00010003cbe0(uVar7);
  _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)
            (*(undefined8 *)(unaff_x20 + _DAT_1000600e8),PTR_s_setHidden__10005b8a0,param_2 & 1);
  return;
}


