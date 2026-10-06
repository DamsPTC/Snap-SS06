/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d1aa70; end: 105d1aba3; -[SCPreviewAlignmentTranslationDetector _isDirectionLocked:] */

undefined *
FUN_105d1aa70(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,undefined *param_9,undefined8 param_10,
             undefined *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint extraout_w8;
  long lVar13;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dStack_660;
  double dStack_5f0;
  undefined1 auStack_510 [176];
  long lStack_460;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined auStack_370 [128];
  long lStack_2f0;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_9;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  while (puVar15 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(puVar3);
      }
      lVar17 = *(long *)((long)puVar20 * 8);
      lVar16 = lVar17;
      func_0x00010c252440();
      if (lVar16 == 0) {
        func_0x00010beffae0(lVar17);
        puVar19 = param_9;
        func_0x00010becf600();
        if (puVar19 == param_11) {
          puVar15 = (undefined *)0x1;
          goto LAB_105d1ab60;
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar15 != puVar20);
    puVar15 = puVar3;
    func_0x00010bf52a60();
  }
  puVar15 = (undefined *)0x0;
LAB_105d1ab60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = 0.0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar15 = puVar3;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_208;
  puVar12 = (undefined1 *)0x10;
  puVar20 = puVar15;
  func_0x00010bf52a60();
  if (puVar20 != (undefined *)0x0) {
    lVar18 = *plStack_240;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_240 != lVar18) {
          _objc_enumerationMutation(puVar15);
        }
        lVar16 = *(long *)(lStack_248 + (long)puVar19 * 8);
        lVar13 = lVar16;
        func_0x00010c252440();
        if (lVar13 == 0) {
          func_0x00010beffae0(lVar16);
          puVar21 = puVar3;
          func_0x00010becf600();
          if (puVar21 == (undefined *)0x1) {
            func_0x00010bf345e0(lVar16);
          }
          else if (puVar21 == (undefined *)0x0) {
            func_0x00010bf345e0(lVar16);
          }
        }
        puVar19 = puVar19 + 1;
      } while (puVar20 != puVar19);
      puVar11 = auStack_208;
      puVar12 = (undefined1 *)0x10;
      puVar20 = puVar15;
      puVar5 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar20 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_3b0;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puVar20 = puVar15;
  func_0x00010bf20b20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = 0;
  puVar4 = puVar12;
  puVar3 = (undefined *)puVar5;
  puVar19 = puVar20;
  dVar24 = dVar23;
  dVar39 = param_2;
  dVar40 = param_3;
  dVar45 = param_4;
  dVar51 = param_5;
  dVar54 = param_6;
  func_0x00010be16980(puVar15);
  _objc_release(puVar20);
  puVar20 = (undefined *)puVar5;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar20 != (undefined *)0x0) {
    dVar24 = 0.0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(puVar11);
    puVar3 = auStack_370;
    lVar18 = 0x10;
    puVar4 = puVar11;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar13 = *plStack_3a0;
      do {
        puVar22 = (undefined1 *)0x0;
        do {
          if (*plStack_3a0 != lVar13) {
            _objc_enumerationMutation(puVar11);
          }
          puVar20 = *(undefined **)(lStack_3a8 + (long)puVar22 * 8);
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = (undefined *)puVar5;
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar20);
          if (puVar20 != puVar3) {
            puVar3 = puVar15;
            func_0x00010c0e0380();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar3;
            dVar24 = dVar23;
            dVar39 = param_2;
            dVar40 = param_3;
            dVar45 = param_4;
            dVar51 = param_5;
            dVar54 = param_6;
            func_0x00010be16980(puVar15);
            _objc_release(puVar3);
          }
          puVar22 = puVar22 + 1;
        } while (puVar4 != puVar22);
        puVar3 = auStack_370;
        lVar18 = 0x10;
        puVar4 = puVar11;
        puVar10 = &uStack_3b0;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puVar11);
    puVar4 = (undefined1 *)puVar10;
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return (undefined *)puVar5;
  }
  ___stack_chk_fail();
  lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = dVar24;
  dVar34 = dVar39;
  dStack_5f0 = dVar40;
  dVar46 = dVar45;
  dVar57 = dVar54;
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  _objc_retain(lVar18);
  _objc_retain(puVar19);
  puVar15 = puVar3;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(puVar3);
  dVar25 = dVar23;
  dVar35 = dVar34;
  dVar41 = dStack_5f0;
  dVar47 = dVar46;
  if (puVar15 != (undefined *)0x0) {
    puVar20 = puVar3;
    func_0x00010beff9c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(puVar4);
    dVar25 = dVar23;
    dVar35 = dVar34;
    dVar41 = dStack_5f0;
    dVar47 = dVar46;
    _objc_release(puVar20);
  }
  _objc_release(puVar15);
  func_0x00010beff9a0(lVar18);
  lVar13 = lVar18;
  func_0x00010beff9c0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(puVar4);
  _objc_release(lVar13);
  _CGAffineTransformMakeTranslation(auStack_510,dVar40,dVar45);
  dVar26 = dVar23;
  dVar36 = dVar34;
  dVar42 = dStack_5f0;
  dVar48 = dVar46;
  _CGRectApplyAffineTransform(auStack_510);
  dVar27 = dVar26;
  dVar37 = dVar36;
  dVar43 = dVar42;
  dVar49 = dVar48;
  func_0x00010bf20c00(puVar4);
  dVar52 = dVar27;
  dVar53 = dVar37;
  dVar38 = dVar43;
  dVar29 = dVar49;
  func_0x00010bf20c00(puVar4);
  dVar28 = dVar52;
  dVar33 = dVar53;
  dVar44 = dVar38;
  dVar50 = dVar29;
  func_0x00010bf8c0c0(puVar5);
  dVar52 = dVar52 + dVar33;
  dVar53 = dVar53 + dVar28;
  dVar38 = dVar38 - (dVar33 + dVar50);
  dVar29 = dVar29 - (dVar28 + dVar44);
  puVar15 = (undefined *)puVar5;
  dVar28 = dVar38;
  dVar33 = dVar53;
  func_0x00010bf8f780();
  if ((lVar18 == 0) && ((int)puVar15 != 0)) {
    puVar15 = (undefined *)puVar5;
    func_0x00010bf6b020(puVar5);
    _objc_retainAutoreleasedReturnValue();
    dVar30 = dVar26;
    _CGRectGetMinY(dVar26,dVar36,dVar42,dVar48);
    dVar31 = dVar52;
    dVar28 = dVar53;
    dVar44 = dVar38;
    dVar50 = dVar29;
    _CGRectGetMinY(dVar52,dVar53);
    if (dVar31 <= dVar30) {
      dVar30 = dVar26;
      _CGRectGetMaxY(dVar26,dVar36,dVar42,dVar48);
      dVar31 = dVar52;
      dVar28 = dVar53;
      dVar44 = dVar38;
      dVar50 = dVar29;
      _CGRectGetMaxY(dVar52,dVar53);
      if (((dVar31 < dVar30) &&
          (dVar30 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetMaxY(dVar52,dVar53),
          dVar28 = dVar39, dVar30 < dVar39)) &&
         (dVar39 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetWidth(dVar52,dVar53),
         dVar28 = dVar24, dVar39 * 0.5 + -50.0 <= dVar24)) {
        dVar44 = dVar38;
        dVar50 = dVar29;
        _CGRectGetWidth(dVar52,dVar53);
      }
    }
    func_0x00010bf6fb60(puVar15);
    _objc_release(puVar15);
  }
  dVar24 = 0.0;
  _objc_retain(puVar19);
  puVar15 = puVar19;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  iVar9 = (int)param_10;
  if (puVar15 != (undefined *)0x0) {
    dVar39 = *(double *)PTR__CGPointZero_110347540;
    uVar32 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar19);
        }
        uVar6 = *(ulong *)((long)puVar20 * 8);
        func_0x00010c067fc0();
        dVar50 = dVar49;
        dVar44 = dVar43;
        dVar28 = dVar37;
        dVar24 = dVar27;
        if (1 < uVar6) {
          dVar50 = dVar29;
          dVar44 = dVar38;
          dVar28 = dVar53;
          dVar24 = dVar52;
        }
        dVar55 = dVar47;
        dVar30 = dVar41;
        dVar31 = dVar35;
        dVar56 = dVar25;
        if (lVar18 == 0) {
          dVar55 = dVar50;
          dVar30 = dVar44;
          dVar31 = dVar28;
          dVar56 = dVar24;
        }
        puVar21 = (undefined *)puVar5;
        dVar24 = dVar47;
        dVar33 = dVar35;
        func_0x00010becf600();
        if (puVar21 == (undefined *)0x1) {
          puVar21 = (undefined *)puVar5;
          func_0x00010c231040();
          uVar14 = (uint)(ABS(dVar54) < 200.0);
          if (((ulong)puVar21 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar21 == (undefined *)0x0) {
            puVar21 = (undefined *)puVar5;
            func_0x00010c231020();
            uVar14 = (uint)(ABS(dVar51) < 200.0);
            if (((ulong)puVar21 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar14 = 1;
          }
LAB_105d1b3c8:
          lVar16 = lVar18;
          func_0x00010beff9c0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = (undefined *)puVar5;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          if (puVar21 == (undefined *)0x0) {
            dStack_660 = 1.0;
          }
          else {
            puVar7 = puVar21;
            func_0x00010c252440();
            dStack_660 = 14.0;
            if (puVar7 != (undefined *)0x0) {
              dStack_660 = 1.0;
            }
          }
          puVar7 = (undefined *)puVar5;
          func_0x00010be33b40();
          param_10 = 1;
          uVar8 = uVar6;
          dVar24 = dVar26;
          dVar28 = dVar36;
          dVar44 = dVar42;
          dVar50 = dVar48;
          dVar33 = dVar56;
          dVar57 = dVar31;
          param_7 = dVar30;
          param_8 = dVar55;
          FUN_105d1b840(dVar26,dVar36);
          uVar1 = (uint)uVar8 & uVar14;
          uVar2 = 0;
          if (lVar18 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar8 = uVar6;
            dVar24 = dVar26;
            dVar28 = dVar36;
            dVar44 = dVar42;
            dVar50 = dVar48;
            dVar33 = dVar56;
            dVar57 = dVar31;
            param_7 = dVar30;
            param_8 = dVar55;
            FUN_105d1b840(dVar26,dVar36);
            uVar1 = (uint)uVar8 & uVar14;
          }
          if (puVar21 == (undefined *)0x0) {
            if ((((uint)puVar7 & uVar1 ^ 1) & uVar1) == 1) {
              dVar33 = dVar23;
              _CGRectGetMidX(dVar23,dVar34,dStack_5f0,dVar46);
              dVar33 = dVar40 + dVar33;
              dStack_660 = dVar23;
              _CGRectGetMidY(dVar23,dVar34);
              dVar57 = dVar45 + dStack_660;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar6 < 3) {
                if (uVar6 == 0) {
                  _CGRectGetMidX();
                  dStack_660 = dVar56;
                  dVar33 = dVar56;
                }
                else if (uVar6 == 1) {
                  _CGRectGetMidY();
                  dStack_660 = dVar56;
                  dVar57 = dVar56;
                }
                else if (uVar6 == 2) {
                  _CGRectGetMinX(dVar56,dVar31,dVar30,dVar55);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar56 = dVar56 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar6 == 3) {
                _CGRectGetMaxX(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_660 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 - dStack_660;
                }
                else {
                  dVar56 = dVar56 + 10.0;
LAB_105d1b658:
                  dStack_660 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 + dStack_660;
                }
              }
              else if (uVar6 == 4) {
                _CGRectGetMinY(dVar56,dVar31,dVar30,dVar55);
                dVar24 = dVar39;
                _CGRectGetMidY(dVar39,uVar32);
                dStack_660 = -(dVar24 + 10.0);
                if (uVar2 == 0) {
                  dStack_660 = dVar24;
                }
                dVar57 = dVar56 + dStack_660;
                func_0x00010bf8f780();
              }
              else if (uVar6 == 5) {
                _CGRectGetMaxY(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
                  dStack_660 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 - dStack_660;
                }
                else {
                  dStack_660 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 + 10.0 + dStack_660;
                }
                func_0x00010bf8f780();
              }
              puVar21 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar16 = lVar18;
              func_0x00010beff9c0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(puVar5);
              dVar24 = dVar25;
              dVar28 = dVar35;
              dVar44 = dVar41;
              dVar50 = dVar47;
              func_0x00010c030780(dVar25,dVar35,puVar21);
              _objc_release(lVar16);
              func_0x00010bdc7020(puVar5);
            }
            else {
              puVar21 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar7 = puVar21;
            func_0x00010c252440();
            if (puVar7 == (undefined *)0x1) {
              func_0x00010be8c3c0(puVar5);
            }
            else {
              func_0x00010c1a2f00(puVar21);
            }
          }
          _objc_release(puVar21);
        }
LAB_105d1b7a0:
        puVar20 = puVar20 + 1;
      } while (puVar15 != puVar20);
      puVar15 = puVar19;
      func_0x00010bf52a60();
      iVar9 = (int)param_10;
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release(puVar19);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_460) {
    return puVar4;
  }
  ___stack_chk_fail();
  uVar14 = extraout_w8;
  if ((long)puVar4 < 3) {
    if (puVar4 == (undefined1 *)0x0) {
      dVar23 = dVar24;
      _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_660 < dVar23) {
        _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_660 + dVar33;
LAB_105d1bd4c:
        uVar14 = (uint)(dVar24 < dVar33);
        goto LAB_105d1bde8;
      }
    }
    else if (puVar4 == (undefined1 *)0x1) {
      dVar23 = dVar24;
      _CGRectGetMidY(dVar24,dVar28,dVar44);
      dVar39 = dVar33;
      _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_660 < dVar23) {
        _CGRectGetMidY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_660 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (puVar4 != (undefined1 *)0x2) goto LAB_105d1bde8;
      if (iVar9 == 0) {
        dVar23 = dVar24;
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_660 + dVar39 + -10.0) {
          _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar23 = dVar24;
        _CGRectGetMinX();
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_660 + dVar39) {
          _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (puVar4 == (undefined1 *)0x3) {
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_660 < dVar23) {
        _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd40:
        dVar33 = dVar33 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxX();
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_660 < dVar23) {
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd48:
        dVar33 = dStack_660 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (puVar4 == (undefined1 *)0x4) {
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_660 + dVar39 + -10.0) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdcc:
        dVar33 = dVar33 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMinY();
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_660 + dVar39) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdd4:
        uVar14 = (uint)(dVar33 - dStack_660 < dVar24);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (puVar4 != (undefined1 *)0x5) goto LAB_105d1bde8;
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_660 < dVar23) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxY();
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_660 < dVar23) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar14 = 0;
LAB_105d1bde8:
  return (undefined *)(ulong)(uVar14 & 1);
}



/* Entry: 105d1aba4; end: 105d1ad03; -[SCPreviewAlignmentTranslationDetector _centerForLockedGuides:] */

undefined *
FUN_105d1aba4(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,undefined *param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint extraout_w8;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined1 *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dStack_540;
  double dStack_4d0;
  undefined1 auStack_3f0 [176];
  long lStack_340;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined auStack_250 [128];
  long lStack_1d0;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar22 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = param_9;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_e8;
  puVar14 = (undefined1 *)0x10;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar17 = *plStack_120;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(puVar3);
        }
        lVar16 = *(long *)(lStack_128 + (long)puVar18 * 8);
        lVar20 = lVar16;
        func_0x00010c252440();
        if (lVar20 == 0) {
          func_0x00010beffae0(lVar16);
          puVar5 = param_9;
          func_0x00010becf600();
          if (puVar5 == (undefined *)0x1) {
            func_0x00010bf345e0(lVar16);
          }
          else if (puVar5 == (undefined *)0x0) {
            func_0x00010bf345e0(lVar16);
          }
        }
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar13 = auStack_e8;
      puVar14 = (undefined1 *)0x10;
      puVar4 = puVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_290;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  puVar18 = puVar3;
  func_0x00010bf20b20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = 0;
  puVar6 = puVar14;
  puVar4 = (undefined *)puVar7;
  puVar5 = puVar18;
  dVar23 = dVar22;
  dVar38 = param_2;
  dVar39 = param_3;
  dVar44 = param_4;
  dVar50 = param_5;
  dVar53 = param_6;
  func_0x00010be16980(puVar3);
  _objc_release(puVar18);
  puVar18 = (undefined *)puVar7;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar18 != (undefined *)0x0) {
    dVar23 = 0.0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    _objc_retain(puVar13);
    puVar4 = auStack_250;
    lVar17 = 0x10;
    puVar6 = puVar13;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar20 = *plStack_280;
      do {
        puVar21 = (undefined1 *)0x0;
        do {
          if (*plStack_280 != lVar20) {
            _objc_enumerationMutation(puVar13);
          }
          puVar18 = *(undefined **)(lStack_288 + (long)puVar21 * 8);
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined *)puVar7;
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar18);
          if (puVar18 != puVar4) {
            puVar4 = puVar3;
            func_0x00010c0e0380();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            dVar23 = dVar22;
            dVar38 = param_2;
            dVar39 = param_3;
            dVar44 = param_4;
            dVar50 = param_5;
            dVar53 = param_6;
            func_0x00010be16980(puVar3);
            _objc_release(puVar4);
          }
          puVar21 = puVar21 + 1;
        } while (puVar6 != puVar21);
        puVar4 = auStack_250;
        lVar17 = 0x10;
        puVar6 = puVar13;
        puVar12 = &uStack_290;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar13);
    puVar6 = (undefined1 *)puVar12;
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return (undefined *)puVar7;
  }
  ___stack_chk_fail();
  lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar22 = dVar23;
  dVar33 = dVar38;
  dStack_4d0 = dVar39;
  dVar45 = dVar44;
  dVar56 = dVar53;
  _objc_retain(puVar6);
  _objc_retain(puVar4);
  _objc_retain(lVar17);
  _objc_retain(puVar5);
  puVar3 = puVar4;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(puVar4);
  dVar24 = dVar22;
  dVar34 = dVar33;
  dVar40 = dStack_4d0;
  dVar46 = dVar45;
  if (puVar3 != (undefined *)0x0) {
    puVar18 = puVar4;
    func_0x00010beff9c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(puVar6);
    dVar24 = dVar22;
    dVar34 = dVar33;
    dVar40 = dStack_4d0;
    dVar46 = dVar45;
    _objc_release(puVar18);
  }
  _objc_release(puVar3);
  func_0x00010beff9a0(lVar17);
  lVar20 = lVar17;
  func_0x00010beff9c0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(puVar6);
  _objc_release(lVar20);
  _CGAffineTransformMakeTranslation(auStack_3f0,dVar39,dVar44);
  dVar25 = dVar22;
  dVar35 = dVar33;
  dVar41 = dStack_4d0;
  dVar47 = dVar45;
  _CGRectApplyAffineTransform(auStack_3f0);
  dVar26 = dVar25;
  dVar36 = dVar35;
  dVar42 = dVar41;
  dVar48 = dVar47;
  func_0x00010bf20c00(puVar6);
  dVar51 = dVar26;
  dVar52 = dVar36;
  dVar37 = dVar42;
  dVar28 = dVar48;
  func_0x00010bf20c00(puVar6);
  dVar27 = dVar51;
  dVar32 = dVar52;
  dVar43 = dVar37;
  dVar49 = dVar28;
  func_0x00010bf8c0c0(puVar7);
  dVar51 = dVar51 + dVar32;
  dVar52 = dVar52 + dVar27;
  dVar37 = dVar37 - (dVar32 + dVar49);
  dVar28 = dVar28 - (dVar27 + dVar43);
  puVar3 = (undefined *)puVar7;
  dVar27 = dVar37;
  dVar32 = dVar52;
  func_0x00010bf8f780();
  if ((lVar17 == 0) && ((int)puVar3 != 0)) {
    puVar3 = (undefined *)puVar7;
    func_0x00010bf6b020(puVar7);
    _objc_retainAutoreleasedReturnValue();
    dVar29 = dVar25;
    _CGRectGetMinY(dVar25,dVar35,dVar41,dVar47);
    dVar30 = dVar51;
    dVar27 = dVar52;
    dVar43 = dVar37;
    dVar49 = dVar28;
    _CGRectGetMinY(dVar51,dVar52);
    if (dVar30 <= dVar29) {
      dVar29 = dVar25;
      _CGRectGetMaxY(dVar25,dVar35,dVar41,dVar47);
      dVar30 = dVar51;
      dVar27 = dVar52;
      dVar43 = dVar37;
      dVar49 = dVar28;
      _CGRectGetMaxY(dVar51,dVar52);
      if (((dVar30 < dVar29) &&
          (dVar29 = dVar51, dVar43 = dVar37, dVar49 = dVar28, _CGRectGetMaxY(dVar51,dVar52),
          dVar27 = dVar38, dVar29 < dVar38)) &&
         (dVar38 = dVar51, dVar43 = dVar37, dVar49 = dVar28, _CGRectGetWidth(dVar51,dVar52),
         dVar27 = dVar23, dVar38 * 0.5 + -50.0 <= dVar23)) {
        dVar43 = dVar37;
        dVar49 = dVar28;
        _CGRectGetWidth(dVar51,dVar52);
      }
    }
    func_0x00010bf6fb60(puVar3);
    _objc_release(puVar3);
  }
  dVar23 = 0.0;
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  iVar11 = (int)param_10;
  if (puVar3 != (undefined *)0x0) {
    dVar38 = *(double *)PTR__CGPointZero_110347540;
    uVar31 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar5);
        }
        uVar8 = *(ulong *)((long)puVar18 * 8);
        func_0x00010c067fc0();
        dVar49 = dVar48;
        dVar43 = dVar42;
        dVar27 = dVar36;
        dVar23 = dVar26;
        if (1 < uVar8) {
          dVar49 = dVar28;
          dVar43 = dVar37;
          dVar27 = dVar52;
          dVar23 = dVar51;
        }
        dVar54 = dVar46;
        dVar29 = dVar40;
        dVar30 = dVar34;
        dVar55 = dVar24;
        if (lVar17 == 0) {
          dVar54 = dVar49;
          dVar29 = dVar43;
          dVar30 = dVar27;
          dVar55 = dVar23;
        }
        puVar19 = (undefined *)puVar7;
        dVar23 = dVar46;
        dVar32 = dVar34;
        func_0x00010becf600();
        if (puVar19 == (undefined *)0x1) {
          puVar19 = (undefined *)puVar7;
          func_0x00010c231040();
          uVar15 = (uint)(ABS(dVar53) < 200.0);
          if (((ulong)puVar19 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar19 == (undefined *)0x0) {
            puVar19 = (undefined *)puVar7;
            func_0x00010c231020();
            uVar15 = (uint)(ABS(dVar50) < 200.0);
            if (((ulong)puVar19 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar15 = 1;
          }
LAB_105d1b3c8:
          lVar16 = lVar17;
          func_0x00010beff9c0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = (undefined *)puVar7;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          if (puVar19 == (undefined *)0x0) {
            dStack_540 = 1.0;
          }
          else {
            puVar9 = puVar19;
            func_0x00010c252440();
            dStack_540 = 14.0;
            if (puVar9 != (undefined *)0x0) {
              dStack_540 = 1.0;
            }
          }
          puVar9 = (undefined *)puVar7;
          func_0x00010be33b40();
          param_10 = 1;
          uVar10 = uVar8;
          dVar23 = dVar25;
          dVar27 = dVar35;
          dVar43 = dVar41;
          dVar49 = dVar47;
          dVar32 = dVar55;
          dVar56 = dVar30;
          param_7 = dVar29;
          param_8 = dVar54;
          FUN_105d1b840(dVar25,dVar35);
          uVar1 = (uint)uVar10 & uVar15;
          uVar2 = 0;
          if (lVar17 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar10 = uVar8;
            dVar23 = dVar25;
            dVar27 = dVar35;
            dVar43 = dVar41;
            dVar49 = dVar47;
            dVar32 = dVar55;
            dVar56 = dVar30;
            param_7 = dVar29;
            param_8 = dVar54;
            FUN_105d1b840(dVar25,dVar35);
            uVar1 = (uint)uVar10 & uVar15;
          }
          if (puVar19 == (undefined *)0x0) {
            if ((((uint)puVar9 & uVar1 ^ 1) & uVar1) == 1) {
              dVar32 = dVar22;
              _CGRectGetMidX(dVar22,dVar33,dStack_4d0,dVar45);
              dVar32 = dVar39 + dVar32;
              dStack_540 = dVar22;
              _CGRectGetMidY(dVar22,dVar33);
              dVar56 = dVar44 + dStack_540;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar8 < 3) {
                if (uVar8 == 0) {
                  _CGRectGetMidX();
                  dStack_540 = dVar55;
                  dVar32 = dVar55;
                }
                else if (uVar8 == 1) {
                  _CGRectGetMidY();
                  dStack_540 = dVar55;
                  dVar56 = dVar55;
                }
                else if (uVar8 == 2) {
                  _CGRectGetMinX(dVar55,dVar30,dVar29,dVar54);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar55 = dVar55 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar8 == 3) {
                _CGRectGetMaxX(dVar55,dVar30,dVar29,dVar54);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_540 = dVar38;
                  _CGRectGetMidX();
                  dVar32 = dVar55 - dStack_540;
                }
                else {
                  dVar55 = dVar55 + 10.0;
LAB_105d1b658:
                  dStack_540 = dVar38;
                  _CGRectGetMidX();
                  dVar32 = dVar55 + dStack_540;
                }
              }
              else if (uVar8 == 4) {
                _CGRectGetMinY(dVar55,dVar30,dVar29,dVar54);
                dVar23 = dVar38;
                _CGRectGetMidY(dVar38,uVar31);
                dStack_540 = -(dVar23 + 10.0);
                if (uVar2 == 0) {
                  dStack_540 = dVar23;
                }
                dVar56 = dVar55 + dStack_540;
                func_0x00010bf8f780();
              }
              else if (uVar8 == 5) {
                _CGRectGetMaxY(dVar55,dVar30,dVar29,dVar54);
                if (uVar2 == 0) {
                  dStack_540 = dVar38;
                  _CGRectGetMidY();
                  dVar56 = dVar55 - dStack_540;
                }
                else {
                  dStack_540 = dVar38;
                  _CGRectGetMidY();
                  dVar56 = dVar55 + 10.0 + dStack_540;
                }
                func_0x00010bf8f780();
              }
              puVar19 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar16 = lVar17;
              func_0x00010beff9c0(lVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(puVar7);
              dVar23 = dVar24;
              dVar27 = dVar34;
              dVar43 = dVar40;
              dVar49 = dVar46;
              func_0x00010c030780(dVar24,dVar34,puVar19);
              _objc_release(lVar16);
              func_0x00010bdc7020(puVar7);
            }
            else {
              puVar19 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar9 = puVar19;
            func_0x00010c252440();
            if (puVar9 == (undefined *)0x1) {
              func_0x00010be8c3c0(puVar7);
            }
            else {
              func_0x00010c1a2f00(puVar19);
            }
          }
          _objc_release(puVar19);
        }
LAB_105d1b7a0:
        puVar18 = puVar18 + 1;
      } while (puVar3 != puVar18);
      puVar3 = puVar5;
      func_0x00010bf52a60();
      iVar11 = (int)param_10;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(lVar17);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_340) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar15 = extraout_w8;
  if ((long)puVar6 < 3) {
    if (puVar6 == (undefined1 *)0x0) {
      dVar22 = dVar23;
      _CGRectGetMidX(dVar23,dVar27,dVar43,dVar49);
      dVar38 = dVar32;
      _CGRectGetMidX(dVar32,dVar56,param_7,param_8);
      if (dVar38 - dStack_540 < dVar22) {
        _CGRectGetMidX(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMidX(dVar32,dVar56,param_7,param_8);
        dVar32 = dStack_540 + dVar32;
LAB_105d1bd4c:
        uVar15 = (uint)(dVar23 < dVar32);
        goto LAB_105d1bde8;
      }
    }
    else if (puVar6 == (undefined1 *)0x1) {
      dVar22 = dVar23;
      _CGRectGetMidY(dVar23,dVar27,dVar43);
      dVar38 = dVar32;
      _CGRectGetMidY(dVar32,dVar56,param_7,param_8);
      if (dVar38 - dStack_540 < dVar22) {
        _CGRectGetMidY(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMidY(dVar32,dVar56,param_7,param_8);
        dVar32 = dStack_540 + dVar32;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (puVar6 != (undefined1 *)0x2) goto LAB_105d1bde8;
      if (iVar11 == 0) {
        dVar22 = dVar23;
        _CGRectGetMaxX(dVar23,dVar27,dVar43,dVar49);
        dVar38 = dVar32;
        _CGRectGetMinX(dVar32,dVar56,param_7,param_8);
        if (dVar22 < dStack_540 + dVar38 + -10.0) {
          _CGRectGetMaxX(dVar23,dVar27,dVar43,dVar49);
          _CGRectGetMinX(dVar32,dVar56,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar22 = dVar23;
        _CGRectGetMinX();
        dVar38 = dVar32;
        _CGRectGetMinX(dVar32,dVar56,param_7,param_8);
        if (dVar22 < dStack_540 + dVar38) {
          _CGRectGetMinX(dVar23,dVar27,dVar43,dVar49);
          _CGRectGetMinX(dVar32,dVar56,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (puVar6 == (undefined1 *)0x3) {
    if (iVar11 == 0) {
      dVar22 = dVar23;
      _CGRectGetMinX(dVar23,dVar27,dVar43,dVar49);
      dVar38 = dVar32;
      _CGRectGetMaxX(dVar32,dVar56,param_7,param_8);
      if ((dVar38 + 10.0) - dStack_540 < dVar22) {
        _CGRectGetMinX(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMaxX(dVar32,dVar56,param_7,param_8);
LAB_105d1bd40:
        dVar32 = dVar32 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar22 = dVar23;
      _CGRectGetMaxX();
      dVar38 = dVar32;
      _CGRectGetMaxX(dVar32,dVar56,param_7,param_8);
      if (dVar38 - dStack_540 < dVar22) {
        _CGRectGetMaxX(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMaxX(dVar32,dVar56,param_7,param_8);
LAB_105d1bd48:
        dVar32 = dStack_540 + dVar32;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (puVar6 == (undefined1 *)0x4) {
    if (iVar11 == 0) {
      dVar22 = dVar23;
      _CGRectGetMaxY(dVar23,dVar27,dVar43,dVar49);
      dVar38 = dVar32;
      _CGRectGetMinY(dVar32,dVar56,param_7,param_8);
      if (dVar22 < dStack_540 + dVar38 + -10.0) {
        _CGRectGetMaxY(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMinY(dVar32,dVar56,param_7,param_8);
LAB_105d1bdcc:
        dVar32 = dVar32 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar22 = dVar23;
      _CGRectGetMinY();
      dVar38 = dVar32;
      _CGRectGetMinY(dVar32,dVar56,param_7,param_8);
      if (dVar22 < dStack_540 + dVar38) {
        _CGRectGetMinY(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMinY(dVar32,dVar56,param_7,param_8);
LAB_105d1bdd4:
        uVar15 = (uint)(dVar32 - dStack_540 < dVar23);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (puVar6 != (undefined1 *)0x5) goto LAB_105d1bde8;
    if (iVar11 == 0) {
      dVar22 = dVar23;
      _CGRectGetMinY(dVar23,dVar27,dVar43,dVar49);
      dVar38 = dVar32;
      _CGRectGetMaxY(dVar32,dVar56,param_7,param_8);
      if ((dVar38 + 10.0) - dStack_540 < dVar22) {
        _CGRectGetMinY(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMaxY(dVar32,dVar56,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar22 = dVar23;
      _CGRectGetMaxY();
      dVar38 = dVar32;
      _CGRectGetMaxY(dVar32,dVar56,param_7,param_8);
      if (dVar38 - dStack_540 < dVar22) {
        _CGRectGetMaxY(dVar23,dVar27,dVar43,dVar49);
        _CGRectGetMaxY(dVar32,dVar56,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar15 = 0;
LAB_105d1bde8:
  return (undefined *)(ulong)(uVar15 & 1);
}



/* Entry: 105d1ad04; end: 105d1af5b; -[SCPreviewAlignmentTranslationDetector _findGuidesForView:objectViews:touchLocation:guideContainerView:translation:velocity:] */

undefined *
FUN_105d1ad04(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,long param_9,undefined8 param_10,
             undefined *param_11,long param_12,undefined1 *param_13)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint extraout_w8;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dStack_410;
  double dStack_3a0;
  undefined1 auStack_2c0 [176];
  long lStack_210;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined auStack_120 [128];
  long lStack_a0;
  
  puVar11 = &uStack_160;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar3 = param_9;
  func_0x00010bf20b20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 0;
  puVar9 = param_13;
  puVar4 = param_11;
  lVar13 = lVar3;
  dVar18 = param_1;
  dVar35 = param_2;
  dVar28 = param_3;
  dVar40 = param_4;
  dVar46 = param_5;
  dVar49 = param_6;
  func_0x00010be16980(param_9);
  _objc_release(lVar3);
  puVar16 = param_11;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar16 != (undefined *)0x0) {
    dVar18 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(param_12);
    puVar4 = auStack_120;
    lVar12 = 0x10;
    lVar3 = param_12;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar17 = *plStack_150;
      do {
        lVar12 = 0;
        do {
          if (*plStack_150 != lVar17) {
            _objc_enumerationMutation(param_12);
          }
          puVar16 = *(undefined **)(lStack_158 + lVar12 * 8);
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_11;
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar16);
          if (puVar16 != puVar4) {
            lVar15 = param_9;
            func_0x00010c0e0380();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar15;
            dVar18 = param_1;
            dVar35 = param_2;
            dVar28 = param_3;
            dVar40 = param_4;
            dVar46 = param_5;
            dVar49 = param_6;
            func_0x00010be16980(param_9);
            _objc_release(lVar15);
          }
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        puVar4 = auStack_120;
        lVar12 = 0x10;
        lVar3 = param_12;
        puVar11 = &uStack_160;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_12);
    puVar9 = (undefined1 *)puVar11;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_11;
  }
  ___stack_chk_fail();
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar19 = dVar18;
  dVar30 = dVar35;
  dStack_3a0 = dVar28;
  dVar41 = dVar40;
  dVar52 = dVar49;
  _objc_retain(puVar9);
  _objc_retain(puVar4);
  _objc_retain(lVar12);
  _objc_retain(lVar13);
  puVar16 = puVar4;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(puVar4);
  dVar20 = dVar19;
  dVar31 = dVar30;
  dVar36 = dStack_3a0;
  dVar42 = dVar41;
  if (puVar16 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010beff9c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(puVar9);
    dVar20 = dVar19;
    dVar31 = dVar30;
    dVar36 = dStack_3a0;
    dVar42 = dVar41;
    _objc_release(puVar5);
  }
  _objc_release(puVar16);
  func_0x00010beff9a0(lVar12);
  lVar3 = lVar12;
  func_0x00010beff9c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(puVar9);
  _objc_release(lVar3);
  _CGAffineTransformMakeTranslation(auStack_2c0,dVar28,dVar40);
  dVar21 = dVar19;
  dVar32 = dVar30;
  dVar37 = dStack_3a0;
  dVar43 = dVar41;
  _CGRectApplyAffineTransform(auStack_2c0);
  dVar22 = dVar21;
  dVar33 = dVar32;
  dVar38 = dVar37;
  dVar44 = dVar43;
  func_0x00010bf20c00(puVar9);
  dVar47 = dVar22;
  dVar48 = dVar33;
  dVar34 = dVar38;
  dVar24 = dVar44;
  func_0x00010bf20c00(puVar9);
  dVar23 = dVar47;
  dVar29 = dVar48;
  dVar39 = dVar34;
  dVar45 = dVar24;
  func_0x00010bf8c0c0(param_11);
  dVar47 = dVar47 + dVar29;
  dVar48 = dVar48 + dVar23;
  dVar34 = dVar34 - (dVar29 + dVar45);
  dVar24 = dVar24 - (dVar23 + dVar39);
  puVar16 = param_11;
  dVar23 = dVar34;
  dVar29 = dVar48;
  func_0x00010bf8f780();
  if ((lVar12 == 0) && ((int)puVar16 != 0)) {
    puVar16 = param_11;
    func_0x00010bf6b020(param_11);
    _objc_retainAutoreleasedReturnValue();
    dVar25 = dVar21;
    _CGRectGetMinY(dVar21,dVar32,dVar37,dVar43);
    dVar26 = dVar47;
    dVar23 = dVar48;
    dVar39 = dVar34;
    dVar45 = dVar24;
    _CGRectGetMinY(dVar47,dVar48);
    if (dVar26 <= dVar25) {
      dVar25 = dVar21;
      _CGRectGetMaxY(dVar21,dVar32,dVar37,dVar43);
      dVar26 = dVar47;
      dVar23 = dVar48;
      dVar39 = dVar34;
      dVar45 = dVar24;
      _CGRectGetMaxY(dVar47,dVar48);
      if (((dVar26 < dVar25) &&
          (dVar25 = dVar47, dVar39 = dVar34, dVar45 = dVar24, _CGRectGetMaxY(dVar47,dVar48),
          dVar23 = dVar35, dVar25 < dVar35)) &&
         (dVar35 = dVar47, dVar39 = dVar34, dVar45 = dVar24, _CGRectGetWidth(dVar47,dVar48),
         dVar23 = dVar18, dVar35 * 0.5 + -50.0 <= dVar18)) {
        dVar39 = dVar34;
        dVar45 = dVar24;
        _CGRectGetWidth(dVar47,dVar48);
      }
    }
    func_0x00010bf6fb60(puVar16);
    _objc_release(puVar16);
  }
  dVar18 = 0.0;
  _objc_retain(lVar13);
  lVar17 = lVar13;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  iVar10 = (int)param_10;
  if (lVar17 != 0) {
    dVar35 = *(double *)PTR__CGPointZero_110347540;
    uVar27 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar13);
        }
        uVar6 = *(ulong *)(lVar15 * 8);
        func_0x00010c067fc0();
        dVar45 = dVar44;
        dVar39 = dVar38;
        dVar23 = dVar33;
        dVar18 = dVar22;
        if (1 < uVar6) {
          dVar45 = dVar24;
          dVar39 = dVar34;
          dVar23 = dVar48;
          dVar18 = dVar47;
        }
        dVar50 = dVar42;
        dVar25 = dVar36;
        dVar26 = dVar31;
        dVar51 = dVar20;
        if (lVar12 == 0) {
          dVar50 = dVar45;
          dVar25 = dVar39;
          dVar26 = dVar23;
          dVar51 = dVar18;
        }
        puVar16 = param_11;
        dVar18 = dVar42;
        dVar29 = dVar31;
        func_0x00010becf600();
        if (puVar16 == (undefined *)0x1) {
          puVar16 = param_11;
          func_0x00010c231040();
          uVar14 = (uint)(ABS(dVar49) < 200.0);
          if (((ulong)puVar16 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar16 == (undefined *)0x0) {
            puVar16 = param_11;
            func_0x00010c231020();
            uVar14 = (uint)(ABS(dVar46) < 200.0);
            if (((ulong)puVar16 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar14 = 1;
          }
LAB_105d1b3c8:
          lVar7 = lVar12;
          func_0x00010beff9c0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = param_11;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          if (puVar16 == (undefined *)0x0) {
            dStack_410 = 1.0;
          }
          else {
            puVar5 = puVar16;
            func_0x00010c252440();
            dStack_410 = 14.0;
            if (puVar5 != (undefined *)0x0) {
              dStack_410 = 1.0;
            }
          }
          puVar5 = param_11;
          func_0x00010be33b40();
          param_10 = 1;
          uVar8 = uVar6;
          dVar18 = dVar21;
          dVar23 = dVar32;
          dVar39 = dVar37;
          dVar45 = dVar43;
          dVar29 = dVar51;
          dVar52 = dVar26;
          param_7 = dVar25;
          param_8 = dVar50;
          FUN_105d1b840(dVar21,dVar32);
          uVar1 = (uint)uVar8 & uVar14;
          uVar2 = 0;
          if (lVar12 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar8 = uVar6;
            dVar18 = dVar21;
            dVar23 = dVar32;
            dVar39 = dVar37;
            dVar45 = dVar43;
            dVar29 = dVar51;
            dVar52 = dVar26;
            param_7 = dVar25;
            param_8 = dVar50;
            FUN_105d1b840(dVar21,dVar32);
            uVar1 = (uint)uVar8 & uVar14;
          }
          if (puVar16 == (undefined *)0x0) {
            if ((((uint)puVar5 & uVar1 ^ 1) & uVar1) == 1) {
              dVar29 = dVar19;
              _CGRectGetMidX(dVar19,dVar30,dStack_3a0,dVar41);
              dVar29 = dVar28 + dVar29;
              dStack_410 = dVar19;
              _CGRectGetMidY(dVar19,dVar30);
              dVar52 = dVar40 + dStack_410;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar6 < 3) {
                if (uVar6 == 0) {
                  _CGRectGetMidX();
                  dStack_410 = dVar51;
                  dVar29 = dVar51;
                }
                else if (uVar6 == 1) {
                  _CGRectGetMidY();
                  dStack_410 = dVar51;
                  dVar52 = dVar51;
                }
                else if (uVar6 == 2) {
                  _CGRectGetMinX(dVar51,dVar26,dVar25,dVar50);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar51 = dVar51 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar6 == 3) {
                _CGRectGetMaxX(dVar51,dVar26,dVar25,dVar50);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_410 = dVar35;
                  _CGRectGetMidX();
                  dVar29 = dVar51 - dStack_410;
                }
                else {
                  dVar51 = dVar51 + 10.0;
LAB_105d1b658:
                  dStack_410 = dVar35;
                  _CGRectGetMidX();
                  dVar29 = dVar51 + dStack_410;
                }
              }
              else if (uVar6 == 4) {
                _CGRectGetMinY(dVar51,dVar26,dVar25,dVar50);
                dVar18 = dVar35;
                _CGRectGetMidY(dVar35,uVar27);
                dStack_410 = -(dVar18 + 10.0);
                if (uVar2 == 0) {
                  dStack_410 = dVar18;
                }
                dVar52 = dVar51 + dStack_410;
                func_0x00010bf8f780();
              }
              else if (uVar6 == 5) {
                _CGRectGetMaxY(dVar51,dVar26,dVar25,dVar50);
                if (uVar2 == 0) {
                  dStack_410 = dVar35;
                  _CGRectGetMidY();
                  dVar52 = dVar51 - dStack_410;
                }
                else {
                  dStack_410 = dVar35;
                  _CGRectGetMidY();
                  dVar52 = dVar51 + 10.0 + dStack_410;
                }
                func_0x00010bf8f780();
              }
              puVar16 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar7 = lVar12;
              func_0x00010beff9c0(lVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(param_11);
              dVar18 = dVar20;
              dVar23 = dVar31;
              dVar39 = dVar36;
              dVar45 = dVar42;
              func_0x00010c030780(dVar20,dVar31,puVar16);
              _objc_release(lVar7);
              func_0x00010bdc7020(param_11);
            }
            else {
              puVar16 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar5 = puVar16;
            func_0x00010c252440();
            if (puVar5 == (undefined *)0x1) {
              func_0x00010be8c3c0(param_11);
            }
            else {
              func_0x00010c1a2f00(puVar16);
            }
          }
          _objc_release(puVar16);
        }
LAB_105d1b7a0:
        lVar15 = lVar15 + 1;
      } while (lVar17 != lVar15);
      lVar17 = lVar13;
      func_0x00010bf52a60();
      iVar10 = (int)param_10;
    } while (lVar17 != 0);
  }
  _objc_release(lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return puVar9;
  }
  ___stack_chk_fail();
  uVar14 = extraout_w8;
  if ((long)puVar9 < 3) {
    if (puVar9 == (undefined1 *)0x0) {
      dVar35 = dVar18;
      _CGRectGetMidX(dVar18,dVar23,dVar39,dVar45);
      dVar28 = dVar29;
      _CGRectGetMidX(dVar29,dVar52,param_7,param_8);
      if (dVar28 - dStack_410 < dVar35) {
        _CGRectGetMidX(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMidX(dVar29,dVar52,param_7,param_8);
        dVar29 = dStack_410 + dVar29;
LAB_105d1bd4c:
        uVar14 = (uint)(dVar18 < dVar29);
        goto LAB_105d1bde8;
      }
    }
    else if (puVar9 == (undefined1 *)0x1) {
      dVar35 = dVar18;
      _CGRectGetMidY(dVar18,dVar23,dVar39);
      dVar28 = dVar29;
      _CGRectGetMidY(dVar29,dVar52,param_7,param_8);
      if (dVar28 - dStack_410 < dVar35) {
        _CGRectGetMidY(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMidY(dVar29,dVar52,param_7,param_8);
        dVar29 = dStack_410 + dVar29;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (puVar9 != (undefined1 *)0x2) goto LAB_105d1bde8;
      if (iVar10 == 0) {
        dVar35 = dVar18;
        _CGRectGetMaxX(dVar18,dVar23,dVar39,dVar45);
        dVar28 = dVar29;
        _CGRectGetMinX(dVar29,dVar52,param_7,param_8);
        if (dVar35 < dStack_410 + dVar28 + -10.0) {
          _CGRectGetMaxX(dVar18,dVar23,dVar39,dVar45);
          _CGRectGetMinX(dVar29,dVar52,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar35 = dVar18;
        _CGRectGetMinX();
        dVar28 = dVar29;
        _CGRectGetMinX(dVar29,dVar52,param_7,param_8);
        if (dVar35 < dStack_410 + dVar28) {
          _CGRectGetMinX(dVar18,dVar23,dVar39,dVar45);
          _CGRectGetMinX(dVar29,dVar52,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (puVar9 == (undefined1 *)0x3) {
    if (iVar10 == 0) {
      dVar35 = dVar18;
      _CGRectGetMinX(dVar18,dVar23,dVar39,dVar45);
      dVar28 = dVar29;
      _CGRectGetMaxX(dVar29,dVar52,param_7,param_8);
      if ((dVar28 + 10.0) - dStack_410 < dVar35) {
        _CGRectGetMinX(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMaxX(dVar29,dVar52,param_7,param_8);
LAB_105d1bd40:
        dVar29 = dVar29 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar35 = dVar18;
      _CGRectGetMaxX();
      dVar28 = dVar29;
      _CGRectGetMaxX(dVar29,dVar52,param_7,param_8);
      if (dVar28 - dStack_410 < dVar35) {
        _CGRectGetMaxX(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMaxX(dVar29,dVar52,param_7,param_8);
LAB_105d1bd48:
        dVar29 = dStack_410 + dVar29;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (puVar9 == (undefined1 *)0x4) {
    if (iVar10 == 0) {
      dVar35 = dVar18;
      _CGRectGetMaxY(dVar18,dVar23,dVar39,dVar45);
      dVar28 = dVar29;
      _CGRectGetMinY(dVar29,dVar52,param_7,param_8);
      if (dVar35 < dStack_410 + dVar28 + -10.0) {
        _CGRectGetMaxY(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMinY(dVar29,dVar52,param_7,param_8);
LAB_105d1bdcc:
        dVar29 = dVar29 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar35 = dVar18;
      _CGRectGetMinY();
      dVar28 = dVar29;
      _CGRectGetMinY(dVar29,dVar52,param_7,param_8);
      if (dVar35 < dStack_410 + dVar28) {
        _CGRectGetMinY(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMinY(dVar29,dVar52,param_7,param_8);
LAB_105d1bdd4:
        uVar14 = (uint)(dVar29 - dStack_410 < dVar18);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (puVar9 != (undefined1 *)0x5) goto LAB_105d1bde8;
    if (iVar10 == 0) {
      dVar35 = dVar18;
      _CGRectGetMinY(dVar18,dVar23,dVar39,dVar45);
      dVar28 = dVar29;
      _CGRectGetMaxY(dVar29,dVar52,param_7,param_8);
      if ((dVar28 + 10.0) - dStack_410 < dVar35) {
        _CGRectGetMinY(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMaxY(dVar29,dVar52,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar35 = dVar18;
      _CGRectGetMaxY();
      dVar28 = dVar29;
      _CGRectGetMaxY(dVar29,dVar52,param_7,param_8);
      if (dVar28 - dStack_410 < dVar35) {
        _CGRectGetMaxY(dVar18,dVar23,dVar39,dVar45);
        _CGRectGetMaxY(dVar29,dVar52,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar14 = 0;
LAB_105d1bde8:
  return (undefined *)(ulong)(uVar14 & 1);
}



/* Entry: 105d1af5c; end: 105d1b83f; -[SCPreviewAlignmentTranslationDetector _findGuidesInContainerView:draggingView:nearbyView:touchLocation:translation:velocity:guides:] */

ulong FUN_105d1af5c(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7,double param_8,undefined *param_9,
                   undefined8 param_10,ulong param_11,long param_12,long param_13,long param_14)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  uint extraout_w8;
  uint uVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dStack_2b0;
  double dStack_240;
  undefined1 auStack_160 [176];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = param_1;
  dVar24 = param_2;
  dStack_240 = param_3;
  dVar34 = param_4;
  dVar43 = param_6;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  lVar5 = param_12;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(param_12);
  dVar16 = dVar15;
  dVar25 = dVar24;
  dVar30 = dStack_240;
  dVar35 = dVar34;
  if (lVar5 != 0) {
    lVar6 = param_12;
    func_0x00010beff9c0(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(param_11);
    dVar16 = dVar15;
    dVar25 = dVar24;
    dVar30 = dStack_240;
    dVar35 = dVar34;
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  func_0x00010beff9a0(param_13);
  lVar5 = param_13;
  func_0x00010beff9c0(param_13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(param_11);
  _objc_release(lVar5);
  _CGAffineTransformMakeTranslation(auStack_160,param_3,param_4);
  dVar17 = dVar15;
  dVar26 = dVar24;
  dVar31 = dStack_240;
  dVar36 = dVar34;
  _CGRectApplyAffineTransform(auStack_160);
  dVar18 = dVar17;
  dVar27 = dVar26;
  dVar32 = dVar31;
  dVar37 = dVar36;
  func_0x00010bf20c00(param_11);
  dVar39 = dVar18;
  dVar40 = dVar27;
  dVar28 = dVar32;
  dVar20 = dVar37;
  func_0x00010bf20c00(param_11);
  dVar19 = dVar39;
  dVar23 = dVar40;
  dVar33 = dVar28;
  dVar38 = dVar20;
  func_0x00010bf8c0c0(param_9);
  dVar39 = dVar39 + dVar23;
  dVar40 = dVar40 + dVar19;
  dVar28 = dVar28 - (dVar23 + dVar38);
  dVar20 = dVar20 - (dVar19 + dVar33);
  puVar14 = param_9;
  dVar19 = dVar28;
  dVar23 = dVar40;
  func_0x00010bf8f780();
  if ((param_13 == 0) && ((int)puVar14 != 0)) {
    puVar14 = param_9;
    func_0x00010bf6b020(param_9);
    _objc_retainAutoreleasedReturnValue();
    dVar21 = dVar17;
    _CGRectGetMinY(dVar17,dVar26,dVar31,dVar36);
    dVar29 = dVar39;
    dVar19 = dVar40;
    dVar33 = dVar28;
    dVar38 = dVar20;
    _CGRectGetMinY(dVar39,dVar40);
    if (dVar29 <= dVar21) {
      dVar21 = dVar17;
      _CGRectGetMaxY(dVar17,dVar26,dVar31,dVar36);
      dVar29 = dVar39;
      dVar19 = dVar40;
      dVar33 = dVar28;
      dVar38 = dVar20;
      _CGRectGetMaxY(dVar39,dVar40);
      if (((dVar29 < dVar21) &&
          (dVar21 = dVar39, dVar33 = dVar28, dVar38 = dVar20, _CGRectGetMaxY(dVar39,dVar40),
          dVar19 = param_2, dVar21 < param_2)) &&
         (dVar21 = dVar39, dVar33 = dVar28, dVar38 = dVar20, _CGRectGetWidth(dVar39,dVar40),
         dVar19 = param_1, dVar21 * 0.5 + -50.0 <= param_1)) {
        dVar33 = dVar28;
        dVar38 = dVar20;
        _CGRectGetWidth(dVar39,dVar40);
      }
    }
    func_0x00010bf6fb60(puVar14);
    _objc_release(puVar14);
  }
  dVar21 = 0.0;
  _objc_retain(param_14);
  lVar6 = param_14;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  iVar11 = (int)param_10;
  if (lVar6 != 0) {
    dVar29 = *(double *)PTR__CGPointZero_110347540;
    uVar22 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_14);
        }
        uVar7 = *(ulong *)(lVar13 * 8);
        func_0x00010c067fc0();
        dVar38 = dVar37;
        dVar33 = dVar32;
        dVar19 = dVar27;
        dVar23 = dVar18;
        if (1 < uVar7) {
          dVar38 = dVar20;
          dVar33 = dVar28;
          dVar19 = dVar40;
          dVar23 = dVar39;
        }
        dVar41 = dVar35;
        dVar3 = dVar30;
        dVar4 = dVar25;
        dVar42 = dVar16;
        if (param_13 == 0) {
          dVar41 = dVar38;
          dVar3 = dVar33;
          dVar4 = dVar19;
          dVar42 = dVar23;
        }
        puVar14 = param_9;
        dVar21 = dVar35;
        dVar23 = dVar25;
        func_0x00010becf600();
        if (puVar14 == (undefined *)0x1) {
          puVar14 = param_9;
          func_0x00010c231040();
          uVar12 = (uint)(ABS(param_6) < 200.0);
          if (((ulong)puVar14 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar14 == (undefined *)0x0) {
            puVar14 = param_9;
            func_0x00010c231020();
            uVar12 = (uint)(ABS(param_5) < 200.0);
            if (((ulong)puVar14 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar12 = 1;
          }
LAB_105d1b3c8:
          lVar8 = param_13;
          func_0x00010beff9c0(param_13);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = param_9;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          if (puVar14 == (undefined *)0x0) {
            dStack_2b0 = 1.0;
          }
          else {
            puVar9 = puVar14;
            func_0x00010c252440();
            dStack_2b0 = 14.0;
            if (puVar9 != (undefined *)0x0) {
              dStack_2b0 = 1.0;
            }
          }
          puVar9 = param_9;
          func_0x00010be33b40();
          param_10 = 1;
          uVar10 = uVar7;
          dVar21 = dVar17;
          dVar19 = dVar26;
          dVar33 = dVar31;
          dVar38 = dVar36;
          dVar23 = dVar42;
          dVar43 = dVar4;
          param_7 = dVar3;
          param_8 = dVar41;
          FUN_105d1b840(dVar17,dVar26);
          uVar1 = (uint)uVar10 & uVar12;
          uVar2 = 0;
          if (param_13 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar10 = uVar7;
            dVar21 = dVar17;
            dVar19 = dVar26;
            dVar33 = dVar31;
            dVar38 = dVar36;
            dVar23 = dVar42;
            dVar43 = dVar4;
            param_7 = dVar3;
            param_8 = dVar41;
            FUN_105d1b840(dVar17,dVar26);
            uVar1 = (uint)uVar10 & uVar12;
          }
          if (puVar14 == (undefined *)0x0) {
            if ((((uint)puVar9 & uVar1 ^ 1) & uVar1) == 1) {
              dVar23 = dVar15;
              _CGRectGetMidX(dVar15,dVar24,dStack_240,dVar34);
              dVar23 = param_3 + dVar23;
              dStack_2b0 = dVar15;
              _CGRectGetMidY(dVar15,dVar24);
              dVar43 = param_4 + dStack_2b0;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar7 < 3) {
                if (uVar7 == 0) {
                  _CGRectGetMidX();
                  dStack_2b0 = dVar42;
                  dVar23 = dVar42;
                }
                else if (uVar7 == 1) {
                  _CGRectGetMidY();
                  dStack_2b0 = dVar42;
                  dVar43 = dVar42;
                }
                else if (uVar7 == 2) {
                  _CGRectGetMinX(dVar42,dVar4,dVar3,dVar41);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar42 = dVar42 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar7 == 3) {
                _CGRectGetMaxX(dVar42,dVar4,dVar3,dVar41);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_2b0 = dVar29;
                  _CGRectGetMidX();
                  dVar23 = dVar42 - dStack_2b0;
                }
                else {
                  dVar42 = dVar42 + 10.0;
LAB_105d1b658:
                  dStack_2b0 = dVar29;
                  _CGRectGetMidX();
                  dVar23 = dVar42 + dStack_2b0;
                }
              }
              else if (uVar7 == 4) {
                _CGRectGetMinY(dVar42,dVar4,dVar3,dVar41);
                dVar43 = dVar29;
                _CGRectGetMidY(dVar29,uVar22);
                dStack_2b0 = -(dVar43 + 10.0);
                if (uVar2 == 0) {
                  dStack_2b0 = dVar43;
                }
                dVar43 = dVar42 + dStack_2b0;
                func_0x00010bf8f780();
              }
              else if (uVar7 == 5) {
                _CGRectGetMaxY(dVar42,dVar4,dVar3,dVar41);
                if (uVar2 == 0) {
                  dStack_2b0 = dVar29;
                  _CGRectGetMidY();
                  dVar43 = dVar42 - dStack_2b0;
                }
                else {
                  dStack_2b0 = dVar29;
                  _CGRectGetMidY();
                  dVar43 = dVar42 + 10.0 + dStack_2b0;
                }
                func_0x00010bf8f780();
              }
              puVar14 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar8 = param_13;
              func_0x00010beff9c0(param_13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(param_9);
              dVar21 = dVar16;
              dVar19 = dVar25;
              dVar33 = dVar30;
              dVar38 = dVar35;
              func_0x00010c030780(dVar16,dVar25,puVar14);
              _objc_release(lVar8);
              func_0x00010bdc7020(param_9);
            }
            else {
              puVar14 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar9 = puVar14;
            func_0x00010c252440();
            if (puVar9 == (undefined *)0x1) {
              func_0x00010be8c3c0(param_9);
            }
            else {
              func_0x00010c1a2f00(puVar14);
            }
          }
          _objc_release(puVar14);
        }
LAB_105d1b7a0:
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = param_14;
      func_0x00010bf52a60();
      iVar11 = (int)param_10;
    } while (lVar6 != 0);
  }
  _objc_release(param_14);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return param_11;
  }
  ___stack_chk_fail();
  uVar12 = extraout_w8;
  if ((long)param_11 < 3) {
    if (param_11 == 0) {
      dVar15 = dVar21;
      _CGRectGetMidX(dVar21,dVar19,dVar33,dVar38);
      dVar16 = dVar23;
      _CGRectGetMidX(dVar23,dVar43,param_7,param_8);
      if (dVar16 - dStack_2b0 < dVar15) {
        _CGRectGetMidX(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMidX(dVar23,dVar43,param_7,param_8);
        dVar23 = dStack_2b0 + dVar23;
LAB_105d1bd4c:
        uVar12 = (uint)(dVar21 < dVar23);
        goto LAB_105d1bde8;
      }
    }
    else if (param_11 == 1) {
      dVar15 = dVar21;
      _CGRectGetMidY(dVar21,dVar19,dVar33);
      dVar16 = dVar23;
      _CGRectGetMidY(dVar23,dVar43,param_7,param_8);
      if (dVar16 - dStack_2b0 < dVar15) {
        _CGRectGetMidY(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMidY(dVar23,dVar43,param_7,param_8);
        dVar23 = dStack_2b0 + dVar23;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (param_11 != 2) goto LAB_105d1bde8;
      if (iVar11 == 0) {
        dVar15 = dVar21;
        _CGRectGetMaxX(dVar21,dVar19,dVar33,dVar38);
        dVar16 = dVar23;
        _CGRectGetMinX(dVar23,dVar43,param_7,param_8);
        if (dVar15 < dStack_2b0 + dVar16 + -10.0) {
          _CGRectGetMaxX(dVar21,dVar19,dVar33,dVar38);
          _CGRectGetMinX(dVar23,dVar43,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar15 = dVar21;
        _CGRectGetMinX();
        dVar16 = dVar23;
        _CGRectGetMinX(dVar23,dVar43,param_7,param_8);
        if (dVar15 < dStack_2b0 + dVar16) {
          _CGRectGetMinX(dVar21,dVar19,dVar33,dVar38);
          _CGRectGetMinX(dVar23,dVar43,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (param_11 == 3) {
    if (iVar11 == 0) {
      dVar15 = dVar21;
      _CGRectGetMinX(dVar21,dVar19,dVar33,dVar38);
      dVar16 = dVar23;
      _CGRectGetMaxX(dVar23,dVar43,param_7,param_8);
      if ((dVar16 + 10.0) - dStack_2b0 < dVar15) {
        _CGRectGetMinX(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMaxX(dVar23,dVar43,param_7,param_8);
LAB_105d1bd40:
        dVar23 = dVar23 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar15 = dVar21;
      _CGRectGetMaxX();
      dVar16 = dVar23;
      _CGRectGetMaxX(dVar23,dVar43,param_7,param_8);
      if (dVar16 - dStack_2b0 < dVar15) {
        _CGRectGetMaxX(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMaxX(dVar23,dVar43,param_7,param_8);
LAB_105d1bd48:
        dVar23 = dStack_2b0 + dVar23;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (param_11 == 4) {
    if (iVar11 == 0) {
      dVar15 = dVar21;
      _CGRectGetMaxY(dVar21,dVar19,dVar33,dVar38);
      dVar16 = dVar23;
      _CGRectGetMinY(dVar23,dVar43,param_7,param_8);
      if (dVar15 < dStack_2b0 + dVar16 + -10.0) {
        _CGRectGetMaxY(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMinY(dVar23,dVar43,param_7,param_8);
LAB_105d1bdcc:
        dVar23 = dVar23 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar15 = dVar21;
      _CGRectGetMinY();
      dVar16 = dVar23;
      _CGRectGetMinY(dVar23,dVar43,param_7,param_8);
      if (dVar15 < dStack_2b0 + dVar16) {
        _CGRectGetMinY(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMinY(dVar23,dVar43,param_7,param_8);
LAB_105d1bdd4:
        uVar12 = (uint)(dVar23 - dStack_2b0 < dVar21);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (param_11 != 5) goto LAB_105d1bde8;
    if (iVar11 == 0) {
      dVar15 = dVar21;
      _CGRectGetMinY(dVar21,dVar19,dVar33,dVar38);
      dVar16 = dVar23;
      _CGRectGetMaxY(dVar23,dVar43,param_7,param_8);
      if ((dVar16 + 10.0) - dStack_2b0 < dVar15) {
        _CGRectGetMinY(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMaxY(dVar23,dVar43,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar15 = dVar21;
      _CGRectGetMaxY();
      dVar16 = dVar23;
      _CGRectGetMaxY(dVar23,dVar43,param_7,param_8);
      if (dVar16 - dStack_2b0 < dVar15) {
        _CGRectGetMaxY(dVar21,dVar19,dVar33,dVar38);
        _CGRectGetMaxY(dVar23,dVar43,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar12 = 0;
LAB_105d1bde8:
  return (ulong)(uVar12 & 1);
}



/* Entry: 105d1b840; end: 105d1be07;  */

byte FUN_105d1b840(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,int param_10)

{
  byte in_w8;
  double dVar1;
  double dVar2;
  double in_stack_00000000;
  
  if (param_9 < 3) {
    if (param_9 == 0) {
      dVar1 = param_1;
      _CGRectGetMidX(param_1,param_2,param_3,param_4);
      dVar2 = param_5;
      _CGRectGetMidX(param_5,param_6,param_7,param_8);
      if (dVar2 - in_stack_00000000 < dVar1) {
        _CGRectGetMidX(param_1,param_2,param_3,param_4);
        _CGRectGetMidX(param_5,param_6,param_7,param_8);
        in_stack_00000000 = in_stack_00000000 + param_5;
LAB_105d1bd4c:
        in_w8 = param_1 < in_stack_00000000;
        goto LAB_105d1bde8;
      }
    }
    else if (param_9 == 1) {
      dVar1 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3);
      dVar2 = param_5;
      _CGRectGetMidY(param_5,param_6,param_7,param_8);
      if (dVar2 - in_stack_00000000 < dVar1) {
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        _CGRectGetMidY(param_5,param_6,param_7,param_8);
        in_stack_00000000 = in_stack_00000000 + param_5;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (param_9 != 2) goto LAB_105d1bde8;
      if (param_10 == 0) {
        dVar1 = param_1;
        _CGRectGetMaxX(param_1,param_2,param_3,param_4);
        dVar2 = param_5;
        _CGRectGetMinX(param_5,param_6,param_7,param_8);
        if (dVar1 < in_stack_00000000 + dVar2 + -10.0) {
          _CGRectGetMaxX(param_1,param_2,param_3,param_4);
          _CGRectGetMinX(param_5,param_6,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar1 = param_1;
        _CGRectGetMinX();
        dVar2 = param_5;
        _CGRectGetMinX(param_5,param_6,param_7,param_8);
        if (dVar1 < in_stack_00000000 + dVar2) {
          _CGRectGetMinX(param_1,param_2,param_3,param_4);
          _CGRectGetMinX(param_5,param_6,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (param_9 == 3) {
    if (param_10 == 0) {
      dVar1 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      dVar2 = param_5;
      _CGRectGetMaxX(param_5,param_6,param_7,param_8);
      if ((dVar2 + 10.0) - in_stack_00000000 < dVar1) {
        _CGRectGetMinX(param_1,param_2,param_3,param_4);
        _CGRectGetMaxX(param_5,param_6,param_7,param_8);
LAB_105d1bd40:
        param_5 = param_5 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar1 = param_1;
      _CGRectGetMaxX();
      dVar2 = param_5;
      _CGRectGetMaxX(param_5,param_6,param_7,param_8);
      if (dVar2 - in_stack_00000000 < dVar1) {
        _CGRectGetMaxX(param_1,param_2,param_3,param_4);
        _CGRectGetMaxX(param_5,param_6,param_7,param_8);
LAB_105d1bd48:
        in_stack_00000000 = in_stack_00000000 + param_5;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (param_9 == 4) {
    if (param_10 == 0) {
      dVar1 = param_1;
      _CGRectGetMaxY(param_1,param_2,param_3,param_4);
      dVar2 = param_5;
      _CGRectGetMinY(param_5,param_6,param_7,param_8);
      if (dVar1 < in_stack_00000000 + dVar2 + -10.0) {
        _CGRectGetMaxY(param_1,param_2,param_3,param_4);
        _CGRectGetMinY(param_5,param_6,param_7,param_8);
LAB_105d1bdcc:
        param_5 = param_5 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar1 = param_1;
      _CGRectGetMinY();
      dVar2 = param_5;
      _CGRectGetMinY(param_5,param_6,param_7,param_8);
      if (dVar1 < in_stack_00000000 + dVar2) {
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
        _CGRectGetMinY(param_5,param_6,param_7,param_8);
LAB_105d1bdd4:
        in_w8 = param_5 - in_stack_00000000 < param_1;
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (param_9 != 5) goto LAB_105d1bde8;
    if (param_10 == 0) {
      dVar1 = param_1;
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      dVar2 = param_5;
      _CGRectGetMaxY(param_5,param_6,param_7,param_8);
      if ((dVar2 + 10.0) - in_stack_00000000 < dVar1) {
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
        _CGRectGetMaxY(param_5,param_6,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar1 = param_1;
      _CGRectGetMaxY();
      dVar2 = param_5;
      _CGRectGetMaxY(param_5,param_6,param_7,param_8);
      if (dVar2 - in_stack_00000000 < dVar1) {
        _CGRectGetMaxY(param_1,param_2,param_3,param_4);
        _CGRectGetMaxY(param_5,param_6,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  in_w8 = 0;
LAB_105d1bde8:
  return in_w8 & 1;
}



/* Entry: 105d1be08; end: 105d1be1f; -[SCPreviewAlignmentTranslationDetector delegate] */

void FUN_105d1be08(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d1be20; end: 105d1be2b; -[SCPreviewAlignmentTranslationDetector setDelegate:] */

void FUN_105d1be20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105d1be2c; end: 105d1be33; -[SCPreviewAlignmentTranslationDetector boundingGuides] */

undefined8 FUN_105d1be2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d1be34; end: 105d1be3b; -[SCPreviewAlignmentTranslationDetector setBoundingGuides:] */

void FUN_105d1be34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105d1be3c; end: 105d1be43; -[SCPreviewAlignmentTranslationDetector objectsGuides] */

undefined8 FUN_105d1be3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d1be44; end: 105d1be4b; -[SCPreviewAlignmentTranslationDetector setObjectsGuides:] */

void FUN_105d1be44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105d1be4c; end: 105d1be57; -[SCPreviewAlignmentTranslationDetector edgeMargins] */

undefined8 FUN_105d1be4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105d1be58; end: 105d1be63; -[SCPreviewAlignmentTranslationDetector setEdgeMargins:] */

void FUN_105d1be58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x40) = param_1;
  *(undefined8 *)(param_5 + 0x48) = param_2;
  *(undefined8 *)(param_5 + 0x50) = param_3;
  *(undefined8 *)(param_5 + 0x58) = param_4;
  return;
}



/* Entry: 105d1be64; end: 105d1be6b; -[SCPreviewAlignmentTranslationDetector enableBoundaryHint] */

undefined1 FUN_105d1be64(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105d1be6c; end: 105d1be73; -[SCPreviewAlignmentTranslationDetector setEnableBoundaryHint:] */

void FUN_105d1be6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105d1be74; end: 105d1be7b; -[SCPreviewAlignmentTranslationDetector guides] */

undefined8 FUN_105d1be74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105d1be7c; end: 105d1beab; -[SCPreviewAlignmentTranslationDetector setGuides:] */

void FUN_105d1be7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d1beac; end: 105d1beb3; -[SCPreviewAlignmentTranslationDetector shouldIgnoreTransaltionX] */

undefined1 FUN_105d1beac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105d1beb4; end: 105d1bebb; -[SCPreviewAlignmentTranslationDetector setShouldIgnoreTransaltionX:] */

void FUN_105d1beb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105d1bebc; end: 105d1bec3; -[SCPreviewAlignmentTranslationDetector shouldIgnoreTransaltionY] */

undefined1 FUN_105d1bebc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105d1bec4; end: 105d1becb; -[SCPreviewAlignmentTranslationDetector setShouldIgnoreTransaltionY:] */

void FUN_105d1bec4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 105d1becc; end: 105d1bed3; -[SCPreviewAlignmentTranslationDetector beginDraggingLocation] */

undefined1  [16] FUN_105d1becc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 105d1bed4; end: 105d1bedb; -[SCPreviewAlignmentTranslationDetector setBeginDraggingLocation:] */

void FUN_105d1bed4(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x30) = param_1;
  *(undefined8 *)(param_3 + 0x38) = param_2;
  return;
}



/* Entry: 105d1bedc; end: 105d1bf1f; -[SCPreviewAlignmentTranslationDetector .cxx_destruct] */

void FUN_105d1bedc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105d1bf20; end: 105d1bf4f;  */

void FUN_105d1bf20(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c2288;
  ppuRam00000001136c2288 = &PTR__OBJC_CLASS___NSConstantArray_11117f4f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d1bf50; end: 105d1c067; -[SCPreviewAlignmentTranslationGuide initWithObject:contentFrame:alignmentType:center:edgeMargins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105d1bf50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_9);
  puStack_88 = PTR_PTR_1126ecf10;
  puVar2 = &uStack_90;
  uStack_90 = param_7;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112734ac0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_9;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112734ac4);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112734ac8) = param_10;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112734acc);
    *puVar1 = in_stack_00000000;
    puVar1[1] = in_stack_00000008;
    puVar1[2] = in_stack_00000010;
    puVar1[3] = in_stack_00000018;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112734ad0) = param_5;
    ((undefined8 *)((long)puVar2 + (long)_DAT_112734ad0))[1] = param_6;
  }
  _objc_release(param_9);
  return puVar2;
}



/* Entry: 105d1c068; end: 105d1c0ff; -[SCPreviewAlignmentTranslationGuide showGuideInView:] */

void FUN_105d1c068(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_showGuideInView__11266b8d8);
  lVar1 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be48bc0(param_1);
  }
  else {
    func_0x00010be49420();
  }
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189460();
  _objc_release(param_1);
  return;
}



/* Entry: 105d1c100; end: 105d1c49b; -[SCPreviewAlignmentTranslationGuide _layoutAlignmentGuide] */

void FUN_105d1c100(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
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
  
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar4 = param_1;
  dVar3 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf8c0c0(param_5);
  dVar8 = param_1 + dVar3;
  dVar7 = param_2 + dVar4;
  dVar6 = param_3 - (dVar3 + dVar6);
  dVar5 = param_4 - (dVar4 + dVar5);
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar1 = param_5;
  func_0x00010beffae0();
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      _CGAffineTransformMakeRotation(&uStack_130,0x3ff921fb54442d18);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      func_0x00010c219960();
      _objc_release(lVar1);
      _CGRectGetMidX(param_1,param_2,param_3,param_4);
      dVar4 = -0.5;
      dVar8 = param_1;
      goto LAB_105d1c36c;
    }
    if (lVar1 == 1) {
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960();
      _objc_release(lVar1);
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      dVar3 = -0.5;
      dVar8 = param_1;
LAB_105d1c3ec:
      dVar5 = dVar8 + dVar3;
      goto LAB_105d1c448;
    }
    if (lVar1 != 2) {
      return;
    }
    _CGAffineTransformMakeRotation(&uStack_a0,0x3ff921fb54442d18);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    func_0x00010c219960();
    _objc_release(lVar1);
    _CGRectGetMinX(dVar8,dVar7,dVar6,dVar5);
  }
  else {
    if (lVar1 != 3) {
      if (lVar1 != 4) {
        if (lVar1 != 5) {
          return;
        }
        lVar1 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        func_0x00010c219960();
        _objc_release(lVar1);
        _CGRectGetMaxY(dVar8,dVar7,dVar6,dVar5);
        dVar3 = -1.0;
        goto LAB_105d1c3ec;
      }
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960();
      _objc_release(lVar1);
      _CGRectGetMinY(dVar8,dVar7,dVar6,dVar5);
      dVar5 = dVar8;
LAB_105d1c448:
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = 0.0;
      dVar3 = 1.0;
      goto LAB_105d1c46c;
    }
    _CGAffineTransformMakeRotation(&uStack_100,0x3ff921fb54442d18);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    func_0x00010c219960();
    _objc_release(lVar1);
    _CGRectGetMaxX(dVar8,dVar7,dVar6,dVar5);
    dVar4 = -1.0;
LAB_105d1c36c:
    dVar8 = dVar8 + dVar4;
  }
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 0.0;
  dVar4 = 1.0;
LAB_105d1c46c:
  func_0x00010c19f0e0(dVar8,dVar5,dVar4,dVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 105d1c49c; end: 105d1c8e7; -[SCPreviewAlignmentTranslationGuide _layoutObjectAlignmentGuide] */

void FUN_105d1c49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010beffae0();
  if (lVar1 < 3) {
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        lVar1 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        dVar3 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        dStack_70 = dVar3;
        func_0x00010c219960();
        _objc_release(lVar1);
        func_0x00010bf4c5a0(param_5);
        _CGRectGetMidY();
        dVar4 = -0.5;
        goto LAB_105d1c87c;
      }
      if (lVar1 != 2) {
        return;
      }
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      dStack_70 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219960();
      _objc_release(lVar1);
      uVar5 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1739e0(0,0,uVar5,0x3ff0000000000000);
      _objc_release(lVar1);
      _CGAffineTransformMakeRotation(&uStack_c0,0x3ff921fb54442d18);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      uStack_68 = uStack_98;
      dStack_70 = dStack_a0;
      func_0x00010c219960();
      _objc_release(lVar1);
      func_0x00010bf4c5a0(param_5);
      _CGRectGetMinX();
      dVar3 = -5.0;
LAB_105d1c7a0:
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a6a0(dStack_a0 + dVar3,param_1);
      goto LAB_105d1c8c0;
    }
    _CGAffineTransformMakeRotation(&uStack_120,0x3ff921fb54442d18);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_68 = uStack_f8;
    dStack_70 = dStack_100;
    func_0x00010c219960();
    _objc_release(lVar1);
    func_0x00010bf4c5a0(param_5);
    _CGRectGetMidX();
    dVar4 = dStack_100 + -0.5;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = 0.0;
    uVar5 = 0x3ff0000000000000;
  }
  else {
    if (lVar1 == 3) {
      uVar5 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(0,0,uVar5,0x3ff0000000000000);
      _objc_release(lVar1);
      _CGAffineTransformMakeRotation(&uStack_f0,0x3ff921fb54442d18);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
      uStack_68 = uStack_c8;
      dStack_70 = dStack_d0;
      func_0x00010c219960();
      _objc_release(lVar1);
      func_0x00010bf4c5a0(param_5);
      _CGRectGetMaxX();
      dVar3 = 5.0;
      dStack_a0 = dStack_d0;
      goto LAB_105d1c7a0;
    }
    if (lVar1 == 4) {
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      dVar3 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      dStack_70 = dVar3;
      func_0x00010c219960();
      _objc_release(lVar1);
      func_0x00010bf4c5a0(param_5);
      _CGRectGetMinY();
      dVar4 = -5.0;
    }
    else {
      if (lVar1 != 5) {
        return;
      }
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      dVar3 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      dStack_70 = dVar3;
      func_0x00010c219960();
      _objc_release(lVar1);
      func_0x00010bf4c5a0(param_5);
      _CGRectGetMaxY();
      dVar4 = 5.0;
    }
LAB_105d1c87c:
    dVar3 = dVar3 + dVar4;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 0.0;
    uVar5 = param_1;
    param_1 = 0x3ff0000000000000;
  }
  func_0x00010c19f0e0(dVar4,dVar3,uVar5,param_1);
LAB_105d1c8c0:
  _objc_release(param_5);
  return;
}



/* Entry: 105d1c8e8; end: 105d1c8f7; -[SCPreviewAlignmentTranslationGuide alignmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d1c8e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734ac8);
}



/* Entry: 105d1c8f8; end: 105d1c90b; -[SCPreviewAlignmentTranslationGuide center] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105d1c8f8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112734ad0);
}



/* Entry: 105d1c90c; end: 105d1c91b; -[SCPreviewAlignmentTranslationGuide object] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d1c90c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734ac0);
}



/* Entry: 105d1c91c; end: 105d1c933; -[SCPreviewAlignmentTranslationGuide contentFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d1c91c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734ac4);
}



/* Entry: 105d1c934; end: 105d1c94b; -[SCPreviewAlignmentTranslationGuide setContentFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1c934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112734ac4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 105d1c94c; end: 105d1c963; -[SCPreviewAlignmentTranslationGuide edgeMargins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d1c94c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734acc);
}



/* Entry: 105d1c964; end: 105d1c97b; -[SCPreviewAlignmentTranslationGuide setEdgeMargins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112734acc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 105d1c97c; end: 105d1c98f; -[SCPreviewAlignmentTranslationGuide .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1c97c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734ac0,0);
  return;
}



/* Entry: 105d1c990; end: 105d1c9df; -[SCPreviewBottomBoundaryHintView initWithFrame:] */

undefined1 * FUN_105d1c990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecf18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d1c9e0; end: 105d1d077; -[SCPreviewBottomBoundaryHintView _setupViews] */

undefined8 ***
FUN_105d1c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar2 = (undefined8 ***)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  ppuStack_f8 = pppuVar2;
  func_0x00010c16e440(puVar3);
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(puVar4);
  func_0x00010c1677c0(0x3fd3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  puStack_f0 = puVar4;
  _objc_opt_new();
  func_0x00010c1a9f00();
  func_0x00010c182220(puVar5);
  func_0x00010c219b60(puVar5);
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010c16e440(ppuVar13);
  ppuVar16 = ppuVar13;
  func_0x00010c08c0e0(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4032000000000000);
  _objc_release(ppuVar16);
  func_0x00010c1677c0(0x3fd3333333333333,ppuVar13);
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(puVar3);
  func_0x00010befbb60(param_1);
  puStack_170 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar4;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  puStack_108 = puVar4;
  puStack_e8 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar6;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  puStack_120 = puVar6;
  puStack_118 = puVar5;
  puStack_e0 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_128 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar4;
  puStack_d8 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_140 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_150 = puVar5;
  puStack_d0 = puVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  puStack_158 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar7;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_168 = puVar4;
  puStack_c8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  puStack_178 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar7;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_188 = puVar5;
  puStack_c0 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  puStack_190 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_198 = uVar7;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_1a0 = puVar4;
  puStack_b8 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar5;
  func_0x00010bf49420(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_1b8 = puVar5;
  puStack_b0 = puVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar4;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar13;
  puStack_1c8 = puVar4;
  puStack_a8 = puVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puStack_1d0 = ppuVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar4;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar13;
  puStack_1e0 = ppuVar16;
  puStack_a0 = ppuVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = ppuVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar13;
  puStack_1a8 = ppuVar13;
  puStack_98 = ppuVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = ppuVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined8 **)0xd;
  ppuVar11 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = ppuVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar11;
  func_0x00010beef8c0(puStack_170);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(puVar5);
  _objc_release(ppuVar13);
  _objc_release(ppuVar9);
  _objc_release(puVar4);
  _objc_release(ppuVar16);
  _objc_release(ppuVar8);
  _objc_release(param_1);
  _objc_release(puStack_1e8);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a0);
  _objc_release(uStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(uStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_168);
  _objc_release(uStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_1a8);
  _objc_release(puStack_118);
  _objc_release(puStack_f0);
  _objc_release(puVar3);
  pppuVar2 = (undefined8 ***)ppuStack_f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_105d1d078;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_250 = ppuVar16;
  puStack_248 = ppuVar8;
  puStack_240 = ppuVar10;
  puStack_238 = puVar5;
  uStack_230 = param_1;
  puStack_228 = ppuVar11;
  puStack_220 = ppuVar13;
  puStack_218 = puVar4;
  puStack_210 = puVar3;
  puStack_208 = ppuVar9;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  _objc_retain(ppuVar15);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puStack_1f0);
  puStack_270 = PTR_PTR_1126ecf20;
  pppuVar12 = &ppuStack_278;
  ppuStack_278 = pppuVar2;
  _objc_msgSendSuper2(pppuVar12,PTR_s_init_1125d9248);
  puVar1 = puStack_1e8;
  if (pppuVar12 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar14);
    ppuVar13 = pppuVar12[1];
    pppuVar12[1] = ppuVar14;
    _objc_release(ppuVar13);
    _objc_retain(ppuVar15);
    ppuVar13 = pppuVar12[2];
    pppuVar12[2] = ppuVar15;
    _objc_release(ppuVar13);
    _objc_retain(param_5);
    ppuVar13 = pppuVar12[7];
    pppuVar12[7] = param_5;
    _objc_release(ppuVar13);
    _objc_retain(param_6);
    ppuVar13 = pppuVar12[3];
    pppuVar12[3] = param_6;
    _objc_release(ppuVar13);
    _objc_retain(param_7);
    ppuVar13 = pppuVar12[5];
    pppuVar12[5] = param_7;
    _objc_release(ppuVar13);
    _objc_retain(param_8);
    ppuVar13 = pppuVar12[4];
    pppuVar12[4] = param_8;
    _objc_release(ppuVar13);
    _objc_retain(puStack_1f0);
    ppuVar13 = pppuVar12[6];
    pppuVar12[6] = (undefined8 **)puStack_1f0;
    _objc_release(ppuVar13);
    pppuVar12[0xc] = (undefined8 **)0x0;
    ppuVar13 = (undefined8 **)PTR_PTR_1126c4160;
    _objc_alloc();
    func_0x00010c00a2c0();
    ppuVar16 = pppuVar12[9];
    pppuVar12[9] = ppuVar13;
    _objc_release(ppuVar16);
    ppuVar13 = (undefined8 **)PTR_PTR_1126c4168;
    _objc_alloc();
    func_0x00010c00a2c0();
    ppuVar16 = pppuVar12[10];
    pppuVar12[10] = ppuVar13;
    _objc_release(ppuVar16);
    puStack_268 = pppuVar12[9];
    puStack_260 = pppuVar12[10];
    ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = pppuVar12[0xb];
    pppuVar12[0xb] = ppuVar13;
    _objc_release(ppuVar16);
    *(undefined1 *)(pppuVar12 + 0x15) = 1;
    pppuVar12[0x14] = (undefined8 **)puVar1;
  }
  _objc_release(puStack_1f0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  return (undefined8 ***)0x7fffffff;
}



/* Entry: 105d1d078; end: 105d1d2b7; -[SCPreviewFeatureAlignmentImpl initWithBitmojiSelfieFetcher:valdiRuntimeProvider:configuration:creativeExpressionsManager:snapCrop:stickerContainer:userInfoServices:previewToolbarIconStyle:] */

undefined8 *
FUN_105d1d078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126ecf20;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar1[0xc] = 0;
    puVar3 = PTR_PTR_1126c4160;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c4168;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    uStack_78 = puVar1[9];
    uStack_70 = puVar1[10];
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x15) = 1;
    puVar1[0x14] = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0x7fffffff;
}



/* Entry: 105d1d2b8; end: 105d1d2bf; -[SCPreviewFeatureAlignmentImpl responderChainPriority] */

undefined8 FUN_105d1d2b8(void)

{
  return 0x7fffffff;
}



/* Entry: 105d1d2c0; end: 105d1d367; -[SCPreviewFeatureAlignmentImpl configureWithView:] */

void FUN_105d1d2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bf4cf40(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c013de0();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bf4af80(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c013de0();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined **)(param_1 + 0xb8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1d368; end: 105d1d36b; -[SCPreviewFeatureAlignmentImpl activate] */

void FUN_105d1d368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createAndSetupSubviewsIfNeeded_1125584b8);
  return;
}



/* Entry: 105d1d36c; end: 105d1d427; -[SCPreviewFeatureAlignmentImpl setBoundaryHintType:] */

void FUN_105d1d36c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 auStack_98 [5];
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [5];
  
  if (*(long *)(param_1 + 0x60) != param_3) {
    *(long *)(param_1 + 0x60) = param_3;
    func_0x00010be8b560();
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 == 0) {
      pcVar3 = (code *)0x105d1d50c;
      puVar1 = auStack_98;
    }
    else if (lVar2 == 1) {
      pcVar3 = FUN_105d1d428;
      puVar1 = auStack_48;
    }
    else {
      if (lVar2 != 2) {
        return;
      }
      pcVar3 = FUN_105d1d4a0;
      puVar1 = auStack_70;
    }
    *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar1[1] = 0xc2000000;
    puVar1[2] = pcVar3;
    puVar1[3] = &UNK_110842e18;
    puVar1[4] = param_1;
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,puVar1,0);
  }
  return;
}



/* Entry: 105d1d428; end: 105d1d49f;  */

/* WARNING: Possible PIC construction at 0x000105d1d450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d1d470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d1d454) */
/* WARNING: Removing unreachable block (ram,0x000105d1d474) */

void FUN_105d1d428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe6666666666666,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d1d4a0; end: 105d1d573;  */

/* WARNING: Possible PIC construction at 0x000105d1d4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d1d4e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d1d4c0) */
/* WARNING: Removing unreachable block (ram,0x000105d1d4e4) */

void FUN_105d1d4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d1d574; end: 105d1d5c7; -[SCPreviewFeatureAlignmentImpl alignableViewOfTouchTarget:] */

void FUN_105d1d574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_1126a51b8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d1d5c8; end: 105d1d68f; -[SCPreviewFeatureAlignmentImpl trashContainsGesture:] */

undefined8 FUN_105d1d5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c273600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_3,param_2,uVar2);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c273600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105d1d690; end: 105d1d697; -[SCPreviewFeatureAlignmentImpl translateView:gesture:] */

void FUN_105d1d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__findGuidesForView_gesture_gestu_1125633e8,param_3,param_4,0);
  return;
}



/* Entry: 105d1d698; end: 105d1d69f; -[SCPreviewFeatureAlignmentImpl rotateView:gesture:] */

void FUN_105d1d698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__findGuidesForView_gesture_gestu_1125633e8,param_3,param_4,1);
  return;
}



/* Entry: 105d1d6a0; end: 105d1d70f; -[SCPreviewFeatureAlignmentImpl processTrackingView:gesture:] */

void FUN_105d1d6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdfba20(param_1,param_2,param_4);
  if (lVar1 != 3) {
    func_0x00010be82880(param_1,param_2,param_3,param_4,lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1d710; end: 105d1d92f; -[SCPreviewFeatureAlignmentImpl viewDidLayoutSubviews] */

void FUN_105d1d710(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = *(long *)(param_5 + 0x40);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar1 = lVar6;
    func_0x00010bf4b2a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxY();
    uVar5 = *(undefined8 *)(param_5 + 0x90);
    dVar9 = param_1;
    func_0x00010c273600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    param_1 = param_1 + dVar9 * -0.5;
    param_2 = 0xc034000000000000;
    dVar9 = param_1 + -20.0;
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf201e0(lVar6,param_6,0);
    _CGRectGetMidY();
    dVar9 = param_1;
  }
  _objc_release(lVar2);
  lVar2 = lVar6;
  func_0x00010bf4b2a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar7 = param_1;
  _objc_release(lVar2);
  lVar2 = *(long *)(param_5 + 0x38);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_5 + 0x38);
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf91760();
    _objc_release(uVar3);
    _objc_release(lVar2);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf1fbc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c40(uVar5,param_6,lVar2);
      dVar8 = dVar7;
      _objc_release(lVar2);
      _objc_release(uVar5);
      lVar2 = lVar6;
      func_0x00010bf4b2a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      _CGRectGetMaxY(dVar7,param_2,param_3,param_4);
      dVar9 = dVar9 - (dVar8 - dVar7);
      _objc_release(lVar2);
    }
  }
  uVar5 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010c273600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,dVar9);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105d1d930; end: 105d1d963; -[SCPreviewFeatureAlignmentImpl setTransform:] */

void FUN_105d1d930(long param_1,undefined8 param_2,undefined8 *param_3)

{
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
  func_0x00010c219960(*(undefined8 *)(param_1 + 0xb0),param_2,&uStack_40);
  return;
}



/* Entry: 105d1d964; end: 105d1dbc3; -[SCPreviewFeatureAlignmentImpl _createAndSetupSubviewsIfNeeded] */

void FUN_105d1d964(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  if ((*(byte *)(param_4 + 0x98) & 1) == 0) {
    lVar1 = param_4;
    func_0x00010bdec000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + 0x68);
    *(long *)(param_4 + 0x68) = lVar1;
    _objc_release(uVar3);
    lVar1 = param_4;
    func_0x00010bdebfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + 0x70);
    *(long *)(param_4 + 0x70) = lVar1;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c4170;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_4 + 0xb8));
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_4 + 0x78);
    *(undefined **)(param_4 + 0x78) = puVar2;
    _objc_release(uVar3);
    dVar4 = 0.0;
    func_0x00010c1677c0(*(undefined8 *)(param_4 + 0x78));
    func_0x00010c229940(*(undefined8 *)(param_4 + 0x78),param_5,0,0);
    func_0x00010be983e0(param_4);
    if (0.0 < dVar4) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      dVar5 = dVar4;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)(param_4 + 0xb8));
      _CGRectGetWidth();
      func_0x00010c013de0(0,0,dVar5,dVar4);
      uVar3 = *(undefined8 *)(param_4 + 0x80);
      *(undefined **)(param_4 + 0x80) = puVar2;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_4 + 0x80);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar3,param_5,puVar2);
      _objc_release(puVar2);
      dVar4 = 0.0;
      func_0x00010c1677c0(0,*(undefined8 *)(param_4 + 0x80));
    }
    if (0.0 < param_3) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)(param_4 + 0xb8));
      _CGRectGetHeight();
      dVar5 = dVar4 - param_3;
      func_0x00010bf20c00(*(undefined8 *)(param_4 + 0xb8));
      _CGRectGetWidth();
      func_0x00010c013de0(0,dVar5,dVar4,param_3);
      uVar3 = *(undefined8 *)(param_4 + 0x88);
      *(undefined **)(param_4 + 0x88) = puVar2;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_4 + 0x88);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar3,param_5,puVar2);
      _objc_release(puVar2);
      func_0x00010c1677c0(0,*(undefined8 *)(param_4 + 0x88));
    }
    puVar2 = PTR_PTR_1126c3e40;
    func_0x00010bf15ae0(PTR_PTR_1126c3e40,param_5,8,*(undefined8 *)(param_4 + 0xa0),param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    *(undefined **)(param_4 + 0x90) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_4 + 0x90);
    func_0x00010c273600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar3);
    *(undefined1 *)(param_4 + 0x98) = 1;
  }
  return;
}



/* Entry: 105d1dbc4; end: 105d1dd33; -[SCPreviewFeatureAlignmentImpl _findGuidesForView:gesture:gestureType:] */

void FUN_105d1dbc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined1 *puVar19;
  long unaff_x28;
  long lVar20;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar14 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar16 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar16);
  puVar8 = auStack_f0;
  lVar15 = 0x10;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar16);
        }
        unaff_x25 = *(long *)(lStack_128 + unaff_x28 * 8);
        lVar15 = unaff_x25;
        func_0x00010bfc1d00();
        if (lVar15 == param_5) {
          unaff_x26 = param_1;
          func_0x00010bdc9f40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befd9c0(unaff_x25);
          _objc_release(unaff_x26);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      puVar8 = auStack_f0;
      lVar15 = 0x10;
      lVar2 = lVar16;
      puVar14 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar16);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105d1dd34;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    lStack_168 = lVar16;
    lStack_160 = param_1;
    lStack_158 = param_5;
    uStack_150 = param_4;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar14);
    _objc_retain(puVar8);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar17 = *(long *)(lVar2 + 0x58);
    _objc_retain(lVar17);
    lVar16 = lVar17;
    func_0x00010bf52a60();
    if (lVar16 != 0) {
      unaff_x26 = *plStack_250;
      do {
        unaff_x27 = 0;
        do {
          if (*plStack_250 != unaff_x26) {
            _objc_enumerationMutation(lVar17);
          }
          unaff_x25 = *(long *)(lStack_258 + unaff_x27 * 8);
          lVar20 = unaff_x25;
          func_0x00010bfc1d00();
          if (lVar20 == lVar15) {
            func_0x00010c115680(unaff_x25);
          }
          unaff_x27 = unaff_x27 + 1;
        } while (lVar16 != unaff_x27);
        lVar16 = lVar17;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (lVar16 != 0);
    }
    _objc_release(lVar17);
    _objc_release(puVar8);
    puVar3 = (undefined1 *)puVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar12 = &uStack_450;
      pcStack_268 = FUN_105d1de84;
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lStack_2c0 = unaff_x28;
      lStack_2b8 = unaff_x27;
      lStack_2b0 = unaff_x26;
      lStack_2a8 = unaff_x25;
      uStack_2a0 = unaff_x24;
      lStack_298 = lVar17;
      lStack_290 = lVar2;
      lStack_288 = lVar15;
      puStack_280 = puVar8;
      puStack_278 = (undefined1 *)puVar14;
      ppuStack_270 = &puStack_140;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = *(long *)(puVar3 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar15;
      func_0x00010bfa1b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      lStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      plStack_400 = (long *)0x0;
      lVar15 = lVar2;
      func_0x00010bf009a0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf52a60();
      if (lVar16 != 0) {
        lVar17 = *plStack_400;
        do {
          lVar20 = 0;
          do {
            if (*plStack_400 != lVar17) {
              _objc_enumerationMutation(lVar15);
            }
            puVar5 = PTR_PTR_1126c4178;
            uVar18 = *(ulong *)(lStack_408 + lVar20 * 8);
            _objc_retain(uVar18);
            _objc_opt_class(puVar5);
            uVar6 = uVar18;
            _objc_opt_isKindOfClass(uVar18,puVar5);
            uVar1 = uVar18;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar18);
            if (uVar1 != 0) {
              func_0x00010befa120(puVar4);
            }
            _objc_release(uVar1);
            lVar20 = lVar20 + 1;
          } while (lVar16 != lVar20);
          lVar16 = lVar15;
          func_0x00010bf52a60();
        } while (lVar16 != 0);
      }
      _objc_release(lVar15);
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      plStack_440 = (long *)0x0;
      lVar16 = *(long *)(puVar3 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar16;
      func_0x00010c252c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      lVar16 = lVar15;
      func_0x00010bf52a60();
      if (lVar16 != 0) {
        lVar17 = *plStack_440;
        do {
          lVar20 = 0;
          do {
            if (*plStack_440 != lVar17) {
              _objc_enumerationMutation(lVar15);
            }
            func_0x00010befa120(puVar4);
            lVar20 = lVar20 + 1;
          } while (lVar16 != lVar20);
          lVar16 = lVar15;
          puVar12 = &uStack_450;
          func_0x00010bf52a60();
        } while (lVar16 != 0);
      }
      _objc_release(lVar15);
      puVar5 = puVar4;
      func_0x00010bf51e00();
      _objc_release(lVar2);
      _objc_release(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
        return;
      }
      ___stack_chk_fail();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar12);
      puVar3 = (undefined1 *)puVar12;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)puVar12;
      func_0x00010bf03d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar8 != (undefined1 *)0x0) {
        puVar19 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          puVar9 = (undefined1 *)puVar12;
          func_0x00010bf03c40(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c086900();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010c296f80(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = puVar9;
          func_0x00010c086900(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220240(puVar12);
          _objc_release(puVar10);
          _objc_release(puVar11);
          _objc_release(puVar9);
          puVar19 = puVar19 + 1;
        } while (puVar8 != puVar19);
        puVar8 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
      func_0x00010c12aaa0(puVar12);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return;
      }
      ___stack_chk_fail();
      uVar13 = *(undefined8 *)((long)puVar12 + 0x68);
      func_0x00010c08c0e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c4c0(puVar12);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar12 + 0x78);
      func_0x00010c08c0e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c4c0(puVar12);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar12 + 0x70);
      func_0x00010c08c0e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c4c0(puVar12);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar12 + 0x80);
      func_0x00010c08c0e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c4c0(puVar12);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)((long)puVar12 + 0x88);
      func_0x00010c08c0e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c4c0(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar13);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105d1dd34; end: 105d1de83; -[SCPreviewFeatureAlignmentImpl _processView:gesture:gestureType:] */

void FUN_105d1dd34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_1a0;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar17 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar17);
  lVar2 = lVar17;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar17);
      }
      lVar19 = *(long *)(lVar20 * 8);
      lVar3 = lVar19;
      func_0x00010bfc1d00();
      if (lVar3 == param_5) {
        func_0x00010c115680(lVar19);
      }
      lVar20 = lVar20 + 1;
    } while (lVar2 != lVar20);
    lVar2 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = &uStack_320;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfa1b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  lVar5 = lVar2;
  func_0x00010bf009a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar5;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar17 = *plStack_2d0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_2d0 != lVar17) {
          _objc_enumerationMutation(lVar5);
        }
        puVar6 = PTR_PTR_1126c4178;
        uVar18 = *(ulong *)(lStack_2d8 + lVar20 * 8);
        _objc_retain(uVar18);
        _objc_opt_class(puVar6);
        uVar7 = uVar18;
        _objc_opt_isKindOfClass(uVar18,puVar6);
        uVar1 = uVar18;
        if ((uVar7 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar18);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(uVar1);
        lVar20 = lVar20 + 1;
      } while (lVar16 != lVar20);
      lVar16 = lVar5;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lVar5);
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  lVar16 = *(long *)(param_3 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar16;
  func_0x00010c252c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = lVar5;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar17 = *plStack_310;
    do {
      lVar20 = 0;
      do {
        if (*plStack_310 != lVar17) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010befa120(puVar4);
        lVar20 = lVar20 + 1;
      } while (lVar16 != lVar20);
      lVar16 = lVar5;
      puVar14 = &uStack_320;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(lVar5);
  puVar6 = puVar4;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar8 = (undefined1 *)puVar14;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)puVar14;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar10 != (undefined1 *)0x0) {
    puVar21 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar9);
      }
      puVar11 = (undefined1 *)puVar14;
      func_0x00010bf03c40(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c086900();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c296f80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar11;
      func_0x00010c086900(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar11);
      puVar21 = puVar21 + 1;
    } while (puVar10 != puVar21);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  func_0x00010c12aaa0(puVar14);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)((long)puVar14 + 0x68);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x78);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x70);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x80);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x88);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 105d1de84; end: 105d1e0f7; -[SCPreviewFeatureAlignmentImpl _allObjectViews] */

void FUN_105d1de84(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  puVar14 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa1b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar3 = lVar4;
  func_0x00010bf009a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar17 = *plStack_1a0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1a0 != lVar17) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR_PTR_1126c4178;
        uVar16 = *(ulong *)(lStack_1a8 + lVar19 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar5);
        uVar6 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar5);
        uVar1 = uVar16;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        if (uVar1 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(uVar1);
        lVar19 = lVar19 + 1;
      } while (lVar7 != lVar19);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c252c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar17 = *plStack_1e0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1e0 != lVar17) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010befa120(puVar2);
        lVar19 = lVar19 + 1;
      } while (lVar7 != lVar19);
      lVar7 = lVar3;
      puVar14 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(lVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar8 = (undefined1 *)puVar14;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)puVar14;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar10 != (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar9);
      }
      puVar11 = (undefined1 *)puVar14;
      func_0x00010bf03c40(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c086900();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c296f80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar11;
      func_0x00010c086900(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar13);
      _objc_release(puVar11);
      puVar18 = puVar18 + 1;
    } while (puVar10 != puVar18);
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  func_0x00010c12aaa0(puVar14);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)((long)puVar14 + 0x68);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x78);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x70);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x80);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)((long)puVar14 + 0x88);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 105d1e0f8; end: 105d1e2af; -[SCPreviewFeatureAlignmentImpl _removeInFlightAnimationsForLayer:] */

void FUN_105d1e0f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf03d40();
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
        lVar4 = param_3;
        func_0x00010bf03c40(param_3,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c086900();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010c296f80(lVar1,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = lVar4;
        func_0x00010c086900(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220240(param_3,param_2,lVar6,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c12aaa0(param_3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + 0x78);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + 0x70);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_3 + 0x88);
  func_0x00010c08c0e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_3,param_2,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105d1e2b0; end: 105d1e38f; -[SCPreviewFeatureAlignmentImpl _removeAllViewAnimations] */

void FUN_105d1e2b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c4c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d1e390; end: 105d1e71f; -[SCPreviewFeatureAlignmentImpl _addAllSubViews] */

void FUN_105d1e390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdeac60();
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8));
    func_0x00010bf1fec0(*(undefined8 *)(param_1 + 0x80));
    func_0x00010c2172c0(*(undefined8 *)(param_1 + 0x68));
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf1fec0(*(undefined8 *)(param_1 + 0x80));
    func_0x00010c28c120(uVar1,param_2,0);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0xb8));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf4b2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  lVar13 = *(long *)(param_1 + 0x40);
  lVar2 = lVar13;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c1618a0(lVar13,param_2,1,PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1618a0(lVar13,param_2,1,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  lVar13 = *(long *)(param_1 + 0x90);
  func_0x00010c273600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar13);
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b2a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c273600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar1,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c08e400(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = uVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c1408a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0xb8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b9e78;
    func_0x00010c072be0();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    }
    return;
  }
  return;
}



/* Entry: 105d1e720; end: 105d1e75f; -[SCPreviewFeatureAlignmentImpl _safeAreaInsets] */

void FUN_105d1e720(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  }
  return;
}



/* Entry: 105d1e760; end: 105d1e7bb; -[SCPreviewFeatureAlignmentImpl _removeAllSubViews] */

void FUN_105d1e760(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x80));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010c161890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setActionButtonsHidden__112636040,0);
  return;
}



/* Entry: 105d1e7bc; end: 105d1e85f; -[SCPreviewFeatureAlignmentImpl _detectorGestureTypeForGesture:] */

undefined8 FUN_105d1e7bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = 0;
  if ((uVar4 & 1) == 0) {
    uVar1 = 3;
  }
  puVar3 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = 2;
  if ((uVar4 & 1) == 0) {
    uVar2 = uVar1;
  }
  puVar3 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_opt_class(PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  _objc_release(param_3);
  if ((uVar4 & 1) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 105d1e860; end: 105d1e96b; -[SCPreviewFeatureAlignmentImpl detectorWillStart:gesture:] */

void FUN_105d1e860(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_6);
  func_0x00010bdc5d00(param_4);
  uVar2 = param_6;
  func_0x00010bf6b1a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 != 0) && (cVar1 = *(char *)(param_4 + 0xa8), _objc_release(), cVar1 == '\x01')) {
    func_0x00010c23a9a0(*(undefined8 *)(param_4 + 0x90));
  }
  func_0x00010be983e0(param_4);
  dVar5 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x68));
  _CGRectGetHeight();
  param_1 = param_1 + dVar5;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + 0x70));
  _CGRectGetHeight();
  func_0x00010c193440(param_1,0,param_3 + dVar5,0,*(undefined8 *)(param_4 + 0x48));
  puVar3 = PTR_PTR_1126c4180;
  _objc_retain(param_6);
  _objc_opt_class(puVar3);
  uVar4 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar3);
  uVar2 = param_6;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_6);
  if (uVar2 != 0) {
    func_0x00010be983e0(param_4);
    func_0x00010c193440(param_6);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105d1e96c; end: 105d1e9ef; -[SCPreviewFeatureAlignmentImpl detectorDidFindGuide:] */

void FUN_105d1e96c(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  func_0x00010c083820();
  if (param_3 != 0) {
    func_0x00010bdc9f40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf529e0();
    _objc_release(param_1);
    if (uVar1 < 3) {
      puVar2 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 105d1e9f0; end: 105d1e9f3; -[SCPreviewFeatureAlignmentImpl detectorDidRemoveGuide:] */

void FUN_105d1e9f0(void)

{
  return;
}



/* Entry: 105d1e9f4; end: 105d1e9f7; -[SCPreviewFeatureAlignmentImpl detectorDidHintBoundary:] */

void FUN_105d1e9f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c173970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBoundaryHintType__11263a878);
  return;
}



/* Entry: 105d1e9f8; end: 105d1ead7; -[SCPreviewFeatureAlignmentImpl detectorDidFinish:gesture:] */

void FUN_105d1e9f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c27afa0();
  if ((uVar1 & 1) == 0) {
    func_0x00010be8b520(param_1);
    uVar1 = param_3;
    func_0x00010bf6b1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      func_0x00010bfe2c80(*(undefined8 *)(param_1 + 0x90));
    }
  }
  func_0x00010c173960(param_1);
  puVar2 = PTR_PTR_1126c4180;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010c193440(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1ead8; end: 105d1ed2b; -[SCPreviewFeatureAlignmentImpl didTouchContainerView:alignableView:deleteAnimationCompletion:] */

void FUN_105d1ead8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_4;
  func_0x00010bf6b1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = param_4;
    func_0x00010c2321e0(param_4,param_2,param_3);
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      lVar3 = param_4;
      func_0x00010bf6b1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      _objc_retain(uVar5);
      lVar4 = param_3;
      func_0x00010c252440();
      if (lVar4 == 1) {
        func_0x00010bf21300(*(undefined8 *)(param_1 + 0x40),param_2,lVar3);
      }
      else {
        lVar4 = param_3;
        func_0x00010c252440();
        if (lVar4 == 2) {
          func_0x00010c27afa0(param_1,param_2,param_3);
          if ((int)param_1 == 0) {
            func_0x00010c1677c0(0x3ff0000000000000,lVar3);
            func_0x00010c23b3e0(uVar5);
          }
          else {
            func_0x00010c1677c0(0x3fd3333333333333,lVar3);
            func_0x00010bfcf9e0(uVar5);
          }
        }
        else {
          lVar4 = param_3;
          func_0x00010c252440();
          if ((((lVar4 == 3) || (lVar4 = param_3, func_0x00010c252440(), lVar4 == 4)) ||
              (lVar4 = param_3, func_0x00010c252440(), lVar4 == 5)) &&
             (lVar4 = param_1, func_0x00010c27afa0(param_1,param_2,param_3), (int)lVar4 != 0)) {
            func_0x00010be8b520(param_1);
            func_0x00010bfe2c80(uVar5);
            puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0xc2000000;
            pcStack_80 = FUN_105d1ed2c;
            puStack_78 = &UNK_110841f80;
            _objc_retain(lVar3);
            lStack_70 = lVar3;
            _objc_retain(uVar5);
            puStack_b8 = puVar1;
            uStack_b0 = 0xc2000000;
            pcStack_a8 = FUN_105d1ee10;
            puStack_a0 = &UNK_110842508;
            uStack_68 = uVar5;
            _objc_retain(param_5);
            uStack_98 = param_5;
            func_0x00010bf03440(0x3fc999999999999a,0,puVar2,param_2,4,&puStack_90,&puStack_b8);
            _objc_release(uStack_98);
            _objc_release(uStack_68);
            _objc_release(lStack_70);
          }
        }
      }
      _objc_release(uVar5);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d1ed2c; end: 105d1ee0f;  */

void FUN_105d1ed2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  _CGAffineTransformMakeScale(&uStack_70,0x3f847ae147ae147b,0x3f847ae147ae147b);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_a0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c273600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_50;
  uVar5 = uStack_60;
  func_0x00010bf345e0(uVar1);
  uVar3 = uVar1;
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(uVar4,uVar5,uVar2,param_2,uVar3);
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d1ee10; end: 105d1ee23;  */

void FUN_105d1ee10(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105d1ee1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105d1ee24; end: 105d1ef13; -[SCPreviewFeatureAlignmentImpl _createChromeHintHeaderView] */

void FUN_105d1ee24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126c4188;
  _objc_alloc();
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0xb8));
  _CGRectGetWidth();
  func_0x00010c013de0(0,0,param_1,0x404e000000000000);
  func_0x00010c1677c0(0);
  lVar2 = param_2;
  func_0x00010bddea80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229c40(puVar1,param_3,lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d1ef14;
  puStack_40 = &UNK_1108e6048;
  _objc_retain(puVar1);
  puStack_38 = puVar1;
  func_0x00010be100a0(param_2,param_3,&puStack_58);
  func_0x00010c1cbe20(puVar1);
  _objc_release(puStack_38);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d1ef14; end: 105d1ef27;  */

void FUN_105d1ef14(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a98d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIconView_showBackground_showA_112648058,
             param_2,1,0);
  return;
}



/* Entry: 105d1ef28; end: 105d1efa7; -[SCPreviewFeatureAlignmentImpl _createChromeHintFooterView] */

void FUN_105d1ef28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf30e80();
  if (uVar1 < 3) {
    func_0x00010bdf4120(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar1 - 3 < 2) {
    func_0x00010bdf3ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c1677c0(0,param_1);
  func_0x00010c219b60(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d1efa8; end: 105d1f02b; -[SCPreviewFeatureAlignmentImpl _createSpotlightChromeHintFooterView] */

void FUN_105d1efa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c4190;
  _objc_alloc(PTR_PTR_1126c4190);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar1,param_2,0,0,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d1f02c; end: 105d1f05b; -[SCPreviewFeatureAlignmentImpl _createStoryChromeHintFooterView] */

void FUN_105d1f02c(void)

{
  _objc_alloc(PTR_PTR_1126c4198);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d1f05c; end: 105d1f1c7; -[SCPreviewFeatureAlignmentImpl _chromeHintHeaderViewProperties] */

void FUN_105d1f05c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x30);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar4 = *(undefined ***)(param_1 + 0x30);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release();
  ppuVar2 = ppuVar1;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_48 = ppuVar2;
  }
  FUN_105d1f6b0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = &ppuStack_48;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar7);
  if (pppuVar7 != (undefined ***)0x0) {
    ppuVar2 = ppuVar3;
    func_0x00010bdd4a20();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      param_2 = 0;
      (*(code *)pppuVar7[2])(pppuVar7);
    }
    else {
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_105d1f33c;
      puStack_c0 = &UNK_110860500;
      _objc_retain(pppuVar7);
      ppuVar1 = &puStack_d8;
      pppuStack_b8 = pppuVar7;
      _objc_retainBlock();
      puVar6 = ppuVar3[1];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110e28c78;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa020(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar1);
      _objc_release(pppuStack_b8);
    }
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 == 0) {
    (*(code *)pppuVar7[4][2])(pppuVar7[4],0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c182220();
    (*(code *)pppuVar7[4][2])(pppuVar7[4],puVar5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d1f1c8; end: 105d1f33b; -[SCPreviewFeatureAlignmentImpl _fetchBitmojiSelfieWithCompletion:] */

void FUN_105d1f1c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bdd4a20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      param_2 = 0;
      (**(code **)(param_3 + 0x10))(param_3);
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105d1f33c;
      puStack_60 = &UNK_110860500;
      _objc_retain(param_3);
      ppuVar2 = &puStack_78;
      lStack_58 = param_3;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_50 = &PTR____CFConstantStringClassReference_110e28c78;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa020(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(ppuVar2);
      _objc_release(lStack_58);
    }
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c182220();
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d1f33c; end: 105d1f3bf;  */

void FUN_105d1f33c(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c182220();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d1f3c0; end: 105d1f533; -[SCPreviewFeatureAlignmentImpl _bitmojiSelfieRequest] */

void FUN_105d1f3c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afd38;
    _objc_opt_new(PTR_PTR_1126afd38);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2923e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc360(puVar4,param_2,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c2a8ea0(puVar4,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf1c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8160(puVar4,param_2,uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    func_0x00010c2b78c0(puVar4,param_2,3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105d1f534; end: 105d1f53b; -[SCPreviewFeatureAlignmentImpl guideContainerView] */

undefined8 FUN_105d1f534(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105d1f53c; end: 105d1f56b; -[SCPreviewFeatureAlignmentImpl setGuideContainerView:] */

void FUN_105d1f53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d1f56c; end: 105d1f573; -[SCPreviewFeatureAlignmentImpl boundaryContainerView] */

undefined8 FUN_105d1f56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105d1f574; end: 105d1f5a3; -[SCPreviewFeatureAlignmentImpl setBoundaryContainerView:] */

void FUN_105d1f574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d1f5a4; end: 105d1f5ab; -[SCPreviewFeatureAlignmentImpl isDeletionEnabled] */

undefined1 FUN_105d1f5a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 105d1f5ac; end: 105d1f5b3; -[SCPreviewFeatureAlignmentImpl setIsDeletionEnabled:] */

void FUN_105d1f5ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 105d1f5b4; end: 105d1f6af; -[SCPreviewFeatureAlignmentImpl .cxx_destruct] */

void FUN_105d1f5b4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105d1f6b0; end: 105d1f6c7;  */

void FUN_105d1f6b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc4238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc4238,
                      &PTR____CFConstantStringClassReference_110e28c98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105d1f6c8; end: 105d1f6d3; +[SCCSpotlightChromeHintFooterView componentPath] */

undefined ** FUN_105d1f6c8(void)

{
  return &PTR____CFConstantStringClassReference_110e28cb8;
}



/* Entry: 105d1f6d4; end: 105d1f707; -[SCCSpotlightChromeHintFooterView initWithViewModel:componentContext:runtime:] */

void FUN_105d1f6d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ecf28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105d1f708; end: 105d1f757; -[SCCSpotlightChromeHintFooterView setViewModel:] */

void FUN_105d1f708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d1f758; end: 105d1f79b; -[SCCSpotlightChromeHintFooterView viewModel] */

void FUN_105d1f758(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d1f79c; end: 105d1f853; -[SCPreviewFeatureAttachmentStickerImpl initWithStickerContainer:itemViewService:] */

undefined1 *
FUN_105d1f79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecf30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d1f854; end: 105d1f8bb; -[SCPreviewFeatureAttachmentStickerImpl updateAttachmentStickerWithUrlString:] */

void FUN_105d1f854(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12ad20();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010be3c960(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1f8bc; end: 105d1f90f; -[SCPreviewFeatureAttachmentStickerImpl previewStickerViewIsAttachmentStickerView:] */

uint FUN_105d1f8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bb358;
  _objc_opt_class(PTR_PTR_1126bb358);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 105d1f910; end: 105d1faaf; -[SCPreviewFeatureAttachmentStickerImpl _insertStickerWithAttachmentUrl:] */

void FUN_105d1f910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b13b0;
  func_0x00010bf0d320(PTR_PTR_1126b13b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc960;
  func_0x00010c290480(PTR_PTR_1126bc960);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = uVar4;
  func_0x00010c0e0460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d1fab0; end: 105d1fb3f;  */

void FUN_105d1fab0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d1fb40; end: 105d1fc83;  */

void FUN_105d1fb40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ba910;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0846e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020180(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ba960;
  _objc_alloc(PTR_PTR_1126ba960);
  func_0x00010c04c640();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1340(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0ec0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar5);
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d1fc84; end: 105d1fc87;  */

void FUN_105d1fc84(void)

{
  return;
}



/* Entry: 105d1fc88; end: 105d1fcbf; -[SCPreviewFeatureAttachmentStickerImpl .cxx_destruct] */

void FUN_105d1fc88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


