/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060446ac; end: 10604473b;  */

void FUN_1060446ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3588;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c09e4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02b2e0(puVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10604473c; end: 1060447e3; -[SCComposerMediaAudio getBeatAmplitudesWithFps:callback:] */

void FUN_10604473c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1060447e4;
    puStack_60 = &UNK_11085b7b0;
    lStack_58 = param_2;
    _objc_retain(param_4);
    lStack_50 = param_4;
    uStack_48 = param_1;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1060447e4; end: 1060449e3;  */

void FUN_1060447e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  func_0x00010bff4280();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e39ab8;
    FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39ab8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar3);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar3);
  }
  else {
    func_0x00010c1d6fc0(puVar1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010604877c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7200(puVar1);
    _objc_release(uVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1060449e4;
    puStack_68 = &UNK_1109094c0;
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = puVar1;
    _objc_retain(uVar2);
    ppuVar4 = &puStack_80;
    uStack_58 = uVar2;
    _objc_retainBlock();
    func_0x00010bfc5040(*(undefined8 *)(param_1 + 0x20));
    _objc_retain(puVar1);
    _objc_retain(ppuVar4);
    func_0x00010bf9cee0(puVar1);
    _objc_release(ppuVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    _objc_release(uStack_58);
    puVar3 = puStack_60;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1060449e4; end: 106044a6b;  */

void FUN_1060449e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0ef100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106048858();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106044a6c; end: 106045383;  */

void FUN_106044a6c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double *pdVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  undefined *puVar25;
  undefined *puVar26;
  int iVar27;
  undefined8 uVar28;
  int iVar29;
  undefined *puVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined **ppuStack_2c0;
  float fStack_2b4;
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
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar5 == 3) {
    uVar22 = (uint)*(double *)(param_1 + 0x38);
    if (0 < (int)uVar22) {
      dVar33 = *(double *)(param_1 + 0x40);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      iVar24 = (int)(dVar33 * 1000.0);
      if (-1 < iVar24) {
        iVar29 = 0;
        iVar27 = 0;
        uVar4 = 0;
        if (uVar22 != 0) {
          uVar4 = 1000 / uVar22;
        }
        do {
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar15);
          _objc_release(puVar18);
          iVar27 = iVar27 + uVar4;
          iVar29 = iVar29 + (1000 - uVar4 * uVar22);
          if (iVar29 < (int)uVar22) {
            uVar1 = 0;
          }
          else {
            iVar27 = iVar27 + 1;
            uVar1 = uVar22;
          }
          iVar29 = iVar29 - uVar1;
        } while (iVar27 <= iVar24);
      }
      if (puVar15 != (undefined *)0x0) {
        uVar28 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0ef100();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
        ppuStack_2c0 = (undefined **)0x0;
        _objc_retain(puVar15);
        puVar18 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        func_0x00010bdc2c00();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
        func_0x00010bf0b620();
        _objc_retainAutoreleasedReturnValue();
        if (puVar17 == (undefined *)0x0) {
          puVar30 = (undefined *)0x0;
        }
        else {
          puVar30 = puVar18;
          func_0x00010c2791a0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar30;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar30);
          if (puVar7 == (undefined *)0x0) {
            ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e39bf8;
            FUN_1060485c8();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            puVar30 = (undefined *)0x0;
          }
          else {
            uStack_228 = 0;
            uStack_230 = 0x640001;
            uStack_218 = 0;
            uStack_220 = 0;
            uStack_110 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
            uStack_108 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_11034cf48;
            ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4450;
            puStack_d8 = PTR____kCFBooleanTrue_11034ab68;
            uStack_100 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
            uStack_f8 = *(undefined8 *)PTR__AVLinearPCMIsNonInterleaved_11034cf50;
            ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4498;
            puStack_c8 = PTR____kCFBooleanFalse_11034ab60;
            ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c44b0;
            uStack_f0 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
            uStack_e8 = *(undefined8 *)PTR__AVChannelLayoutKey_11034cf20;
            puVar30 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf64a00();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_b8 = puVar30;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar30);
            puVar9 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
            func_0x00010bf0b5e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c167a60();
            func_0x00010befa4c0(puVar17);
            puVar30 = puVar17;
            func_0x00010c250140();
            if (((ulong)puVar30 & 1) == 0) {
              ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e39c18;
              FUN_1060485c8();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              puVar30 = (undefined *)0x0;
            }
            else {
              puVar10 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
              func_0x00010bf63640();
              _objc_retainAutoreleasedReturnValue();
              puVar30 = puVar17;
              func_0x00010c252d60();
              while ((puVar30 == (undefined *)0x1 &&
                     (puVar30 = puVar9, func_0x00010bf52120(), puVar30 != (undefined *)0x0))) {
                puVar11 = puVar30;
                _CMSampleBufferGetDataBuffer();
                puVar25 = puVar11;
                _CMBlockBufferGetDataLength();
                puVar12 = puVar10;
                func_0x00010c08fa60();
                func_0x00010bfec1e0(puVar10);
                puVar26 = puVar10;
                _objc_retainAutorelease(puVar10);
                func_0x00010c0d3c60();
                _CMBlockBufferCopyDataBytes(puVar11,0,puVar25,puVar26 + (long)puVar12);
                _CFRelease(puVar30);
                puVar30 = puVar17;
                func_0x00010c252d60();
              }
              puVar30 = puVar17;
              func_0x00010c252d60();
              if (puVar30 == (undefined *)0x2) {
                uStack_248 = 0;
                uStack_250 = 0;
                uStack_238 = 0;
                uStack_240 = 0;
                lStack_268 = 0;
                uStack_270 = 0;
                uStack_258 = 0;
                plStack_260 = (long *)0x0;
                puVar30 = puVar7;
                func_0x00010bfb5b00();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar30;
                func_0x00010bf52a60();
                if (puVar11 == (undefined *)0x0) {
                  dVar33 = 0.0;
                }
                else {
                  lVar23 = *plStack_260;
                  do {
                    puVar25 = (undefined *)0x0;
                    do {
                      if (*plStack_260 != lVar23) {
                        _objc_enumerationMutation(puVar30);
                      }
                      pdVar13 = *(double **)(lStack_268 + (long)puVar25 * 8);
                      _CMAudioFormatDescriptionGetStreamBasicDescription();
                      if ((pdVar13 != (double *)0x0) && (dVar33 = *pdVar13, 0.0 < dVar33))
                      goto LAB_106045038;
                      puVar25 = puVar25 + 1;
                    } while (puVar11 != puVar25);
                    puVar11 = puVar30;
                    func_0x00010bf52a60();
                  } while (puVar11 != (undefined *)0x0);
                  dVar33 = 0.0;
                }
LAB_106045038:
                _objc_release(puVar30);
                if (dVar33 <= 0.0) {
                  dVar33 = 44100.0;
                }
                puVar11 = puVar10;
                _objc_retainAutorelease(puVar10);
                func_0x00010c0d3c60();
                puVar25 = puVar10;
                func_0x00010c08fa60();
                puVar30 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                uVar19 = (ulong)(double)(long)(dVar33 * 0.02 * 0.5);
                if (uVar19 < 2) {
                  uVar19 = 1;
                }
                func_0x00010bf529e0(puVar15);
                func_0x00010bf0a0e0();
                _objc_retainAutoreleasedReturnValue();
                dVar32 = 0.0;
                lStack_2a8 = 0;
                uStack_2b0 = 0;
                uStack_298 = 0;
                plStack_2a0 = (long *)0x0;
                uStack_288 = 0;
                uStack_290 = 0;
                uStack_278 = 0;
                uStack_280 = 0;
                _objc_retain(puVar15);
                puVar12 = puVar15;
                func_0x00010bf52a60();
                if (puVar12 != (undefined *)0x0) {
                  lVar23 = *plStack_2a0;
                  do {
                    puVar26 = (undefined *)0x0;
                    do {
                      if (*plStack_2a0 != lVar23) {
                        _objc_enumerationMutation(puVar15);
                      }
                      func_0x00010bf885a0(*(undefined8 *)(lStack_2a8 + (long)puVar26 * 8));
                      uVar21 = (ulong)(dVar33 * (dVar32 / 1000.0));
                      uVar2 = 0;
                      if (uVar19 <= uVar21) {
                        uVar2 = uVar21 - uVar19;
                      }
                      uVar3 = uVar21 + uVar19;
                      if ((ulong)puVar25 >> 2 <= uVar21 + uVar19) {
                        uVar3 = (ulong)puVar25 >> 2;
                      }
                      dVar32 = 0.0;
                      if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
                        fStack_2b4 = 0.0;
                        _vDSP_measqv(puVar11 + uVar2 * 4,1,&fStack_2b4,uVar3 - uVar2);
                        fVar31 = SQRT(fStack_2b4);
                        if (SQRT(fStack_2b4) <= 1e-12) {
                          fVar31 = 1e-12;
                        }
                        _log10f();
                        fVar31 = fVar31 * 20.0;
                        if (-80.0 <= fVar31) {
                          uVar22 = 0x40000000;
                          if (fVar31 < 0.0) {
                            uVar22 = 0;
                          }
                          dVar32 = (double)(ulong)uVar22;
                          if ((lVar5 != 0) && (fVar31 < 0.0)) {
                            fVar31 = *(float *)(lVar5 + (long)(int)(fVar31 * -9.9875) * 4);
                            dVar32 = (double)(ulong)(uint)(fVar31 + fVar31);
                          }
                        }
                      }
                      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df740();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar30);
                      _objc_release(puVar16);
                      puVar26 = puVar26 + 1;
                    } while (puVar12 != puVar26);
                    puVar12 = puVar15;
                    func_0x00010bf52a60();
                  } while (puVar12 != (undefined *)0x0);
                }
                _objc_release(puVar15);
              }
              else {
                ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e39c38;
                FUN_1060485c8();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                puVar30 = (undefined *)0x0;
              }
              _objc_release(puVar10);
            }
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          _objc_release(puVar7);
        }
        _objc_release(puVar17);
        _objc_release(puVar18);
        _objc_release(puVar15);
        _objc_retain(ppuStack_2c0);
        if (puVar30 == (undefined *)0x0) {
          if (ppuStack_2c0 == (undefined **)0x0) {
            ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e39b18;
            FUN_1060485c8();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar18 = PTR_PTR_1126b3588;
          _objc_alloc();
          ppuVar6 = ppuStack_2c0;
          func_0x00010c09e4e0(ppuStack_2c0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02b2e0();
          _objc_release(ppuVar6);
          lVar5 = *(long *)(param_1 + 0x30);
          pcVar20 = *(code **)(lVar5 + 0x10);
          puVar17 = (undefined *)0x0;
          puVar7 = puVar18;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x30);
          puVar17 = puVar30;
          func_0x00010bf51e00(puVar30);
          pcVar20 = *(code **)(lVar5 + 0x10);
          puVar18 = (undefined *)0x0;
          puVar7 = puVar17;
        }
        (*pcVar20)(lVar5,puVar17);
        _objc_release(puVar7);
        _objc_release(puVar30);
        _objc_release(ppuStack_2c0);
        _objc_release(uVar28);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
          return;
        }
        goto LAB_106045380;
      }
    }
    puVar17 = PTR_PTR_1126b3588;
    _objc_alloc();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e39af8;
LAB_106044f1c:
    FUN_1060485c8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar17 = PTR_PTR_1126b3588;
    if (lVar5 == 5) {
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e39ad8;
      goto LAB_106044f1c;
    }
    if (lVar5 != 4) {
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e39b38;
      goto LAB_106044f1c;
    }
    _objc_alloc();
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar14 = ppuVar6;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b2e0();
  _objc_release(ppuVar14);
  _objc_release(ppuVar6);
  puVar15 = *(undefined **)(param_1 + 0x30);
  puVar18 = puVar17;
  (**(code **)(puVar15 + 0x10))(puVar15,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar17);
    return;
  }
LAB_106045380:
  ___stack_chk_fail();
  _objc_retain(puVar18);
  if (puVar18 != (undefined *)0x0) {
    uVar28 = *(undefined8 *)(puVar15 + 0x28);
    _objc_retain(puVar18);
    func_0x00010c0f7fc0(uVar28);
    _objc_release(puVar18);
  }
  _objc_release(puVar18);
  return;
}



/* Entry: 106045384; end: 10604541b; -[SCComposerMediaAudio getMp4DataWithCallback:] */

void FUN_106045384(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10604541c;
    puStack_48 = &UNK_11084aaa8;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10604541c; end: 10604548f;  */

void FUN_10604541c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106045490;
  puStack_30 = &UNK_110857fa0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010be0c6c0(uVar1,param_2,0,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 106045490; end: 106045583;  */

void FUN_106045490(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106048858(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    puVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106045584; end: 1060457ab; -[SCComposerMediaAudio extractSegmentWithStartTimeMs:durationMs:callback:] */

void FUN_106045584(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106045630;
    puStack_68 = &UNK_1108bb538;
    lStack_60 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010c0f7fc0(uVar1,param_4,&puStack_80);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1060457ac; end: 106045897;  */

void FUN_1060457ac(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c7470;
    _objc_alloc(PTR_PTR_1126c7470);
    func_0x00010c051100();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar2,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    puVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106045898; end: 1060458ef; -[SCComposerMediaAudio dispose] */

void FUN_106045898(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060458f0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 1060458f0; end: 10604593f;  */

void FUN_1060458f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  _objc_release(uVar1);
  if ((*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) &&
     (*(char *)(*(long *)(param_1 + 0x20) + 0x18) == '\x01')) {
    func_0x000106048858();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106045940; end: 106045acb; -[SCComposerMediaAudio _exportAsynchronouslyWithTimeRange:completion:] */

void FUN_106045940(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 auStack_60 [48];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (*(long *)(param_1 + 8) != 0)) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
    _objc_alloc();
    func_0x00010bff4280();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e39ab8;
      FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39ab8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,ppuVar3);
    }
    else {
      func_0x00010c1d6fc0(ppuVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001060486a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7200(ppuVar1);
      _objc_release(uVar2);
      if (param_3 != 0) {
        func_0x00010bdc1120(auStack_60,param_3);
        func_0x00010c214ec0(ppuVar1);
      }
      _objc_retain(ppuVar1);
      _objc_retain(param_4);
      func_0x00010bf9cee0(ppuVar1);
      _objc_release(param_4);
      ppuVar3 = ppuVar1;
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106045acc; end: 106045b83;  */

void FUN_106045acc(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined **ppuVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 3) {
    ppuVar2 = *(undefined ***)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0ef100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar1 + 0x10);
    ppuVar3 = (undefined **)0x0;
    ppuVar5 = ppuVar2;
  }
  else {
    if (lVar1 == 5) {
      lVar1 = *(long *)(param_1 + 0x28);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e39ad8;
      FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39ad8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 4) {
        return;
      }
      ppuVar3 = *(undefined ***)(param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x00010bf987e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    pcVar4 = *(code **)(lVar1 + 0x10);
    ppuVar2 = (undefined **)0x0;
    ppuVar5 = ppuVar3;
  }
  (*pcVar4)(lVar1,ppuVar2,ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 106045b84; end: 106045b8f; -[SCComposerMediaAudio pushToValdiMarshaller:] */

void FUN_106045b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106045b90; end: 106045b97; -[SCComposerMediaAudio asset] */

undefined8 FUN_106045b90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106045b98; end: 106045bdf; -[SCComposerMediaAudio .cxx_destruct] */

void FUN_106045b98(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106045be0; end: 106045dbf;  */

long FUN_106045be0(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_38 = 3;
  uStack_40 = 2;
  uStack_48 = 1;
  uStack_50 = 0;
  lVar2 = 0xc80;
  _malloc();
  lVar3 = 0;
  do {
    dVar5 = (double)((float)uStack_40 * -0.10012516) * 0.05;
    dVar4 = (double)((float)uStack_38 * -0.10012516) * 0.05;
    dVar6 = (double)((float)uStack_50 * -0.10012516) * 0.05;
    dVar8 = (double)((float)uStack_48 * -0.10012516) * 0.05;
    ___exp10();
    ___exp10();
    ___exp10();
    ___exp10();
    dVar7 = (dVar6 + -0.0001) * 1.000100010001;
    dVar8 = (dVar8 + -0.0001) * 1.000100010001;
    dVar5 = (dVar5 + -0.0001) * 1.000100010001;
    dVar6 = (dVar4 + -0.0001) * 1.000100010001;
    _pow(SUB84(dVar6,0),0x3fe5555555555555);
    _pow(SUB84(dVar5,0),0x3fe5555555555555);
    _pow(SUB84(dVar8,0),0x3fe5555555555555);
    _pow(SUB84(dVar7,0),0x3fe5555555555555);
    auVar1._8_4_ = SUB84(dVar8,0);
    auVar1._0_8_ = dVar7;
    auVar1._12_4_ = (int)((ulong)dVar8 >> 0x20);
    ((undefined8 *)(lVar2 + lVar3))[1] = CONCAT44((float)dVar6,(float)dVar5);
    *(undefined8 *)(lVar2 + lVar3) = CONCAT44((float)auVar1._8_8_,(float)dVar7);
    uStack_40 = uStack_40 + 4;
    uStack_38 = uStack_38 + 4;
    uStack_50 = uStack_50 + 4;
    uStack_48 = uStack_48 + 4;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0xc80);
  return lVar2;
}



/* Entry: 106045dc0; end: 106045efb; -[SCComposerMediaAudioCaptureSessionAssetWriter initWithOutputFileURL:] */

undefined8 * FUN_106045dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef3f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
    _CMBufferQueueCreate(uVar4,0,uVar2,puVar1 + 3);
    uStack_48 = 0x10;
    uStack_68 = 0x40e5888000000000;
    uStack_50 = 0x100000002;
    uStack_58 = 0x100000002;
    uStack_60 = 0xc6c70636d;
    _CMAudioFormatDescriptionCreate(0,&uStack_68,0,0,0,0,0,puVar1 + 4);
    puVar3 = PTR__kCMTimeInvalid_110348648;
    uVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[8] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    puVar1[7] = uVar2;
    puVar1[9] = *(undefined8 *)(puVar3 + 0x10);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106045efc; end: 106045f53; -[SCComposerMediaAudioCaptureSessionAssetWriter dealloc] */

void FUN_106045efc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126ef3f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106045f54; end: 106046023; -[SCComposerMediaAudioCaptureSessionAssetWriter appendSampleBuffer:] */

void FUN_106045f54(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  if (param_3 != 0) {
    _CFRetain(param_3);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106045fc4;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_1;
    lStack_28 = param_3;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_50);
  }
  return;
}



/* Entry: 106046024; end: 1060460b3; -[SCComposerMediaAudioCaptureSessionAssetWriter finishWithCompletion:] */

void FUN_106046024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1060460b4;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1060460b4; end: 1060461c7;  */

void FUN_1060460b4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 1;
  lVar4 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar4 + 0x50);
  if (lVar3 == 0) {
    if (*(long *)(lVar4 + 0x28) == 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
        lVar3 = 0;
        goto LAB_1060460ec;
      }
    }
    else {
      while( true ) {
        iVar2 = (int)*(undefined8 *)(lVar4 + 0x18);
        _CMBufferQueueIsEmpty();
        if (iVar2 != 0) break;
        func_0x00010be06420();
        lVar4 = *(long *)(param_1 + 0x20);
      }
      func_0x00010bf95400(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
      func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      _objc_retain(uVar1);
      func_0x00010bfaff80(uVar5);
      _objc_release(uVar1);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
LAB_1060460ec:
                    /* WARNING: Could not recover jumptable at 0x0001060460f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar4,lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1060461c8; end: 10604624b;  */

void FUN_1060461c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10604624c;
  puStack_48 = &UNK_11084aaa8;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10604624c; end: 1060462a3;  */

void FUN_10604624c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010bf987e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1060462a4; end: 106046507; -[SCComposerMediaAudioCaptureSessionAssetWriter _prepareIfNeeded] */

void FUN_1060462a4(undefined **param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **unaff_x19;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  undefined *apuStack_130 [2];
  undefined *puStack_120;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[5] == (undefined *)0x0) {
    param_3 = param_1[1];
    ppuStack_90 = (undefined **)0x0;
    unaff_x21 = (undefined **)PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
    func_0x00010bf0bac0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = ppuStack_90;
    _objc_retain(ppuStack_90);
    puVar2 = param_1[5];
    param_1[5] = (undefined *)unaff_x21;
    _objc_release(puVar2);
    if (unaff_x19 == (undefined **)0x0) {
      func_0x00010c200aa0(param_1[5]);
      unaff_x21 = (undefined **)PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
      unaff_x22 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
      uStack_88 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
      ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c44c8;
      uStack_80 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0x40e5888000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
      ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c44e0;
      uStack_70 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
      ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c44f8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined *)unaff_x21;
      func_0x00010bf0baa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1[6];
      param_1[6] = puVar4;
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c198a40(param_1[6]);
      puVar2 = param_1[5];
      param_3 = param_1[6];
      func_0x00010bf2c460();
      if (((ulong)puVar2 & 1) == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110e39c98;
        FUN_1060485c8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_3 = param_1[6];
        func_0x00010bef93a0(param_1[5]);
        puVar2 = param_1[5];
        func_0x00010c251d20();
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x21 = (undefined **)param_1[5];
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = unaff_x21;
          FUN_1060485e4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x21);
        }
        else {
          ppuVar6 = (undefined **)0x0;
        }
      }
    }
    else {
      ppuVar6 = unaff_x19;
      FUN_1060485e4(unaff_x19,&PTR____CFConstantStringClassReference_110e39c78);
      _objc_retainAutoreleasedReturnValue();
    }
    param_1 = unaff_x19;
    _objc_release();
  }
  else {
    ppuVar6 = (undefined **)0x0;
  }
  ppuVar7 = ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_98 = FUN_106046508;
    ppuVar7 = (undefined **)0x0;
    uStack_c0 = unaff_x22;
    ppuStack_b8 = unaff_x21;
    ppuStack_b0 = ppuVar6;
    ppuStack_a8 = unaff_x19;
    puStack_a0 = &stack0xfffffffffffffff0;
    if (param_3 != (undefined *)0x0) {
      ppuVar6 = param_1;
      func_0x00010be78600();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar6 == (undefined **)0x0) {
        _CMSampleBufferGetPresentationTimeStamp(&puStack_d8,param_3);
        if ((uStack_cc & 1) == 0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110e39cf8;
          FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39cf8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if ((*(byte *)((long)param_1 + 0x44) & 1) == 0) {
            param_1[8] = (undefined *)CONCAT44(uStack_cc,uStack_d0);
            param_1[7] = puStack_d8;
            param_1[9] = puStack_c8;
            puStack_f0 = puStack_d8;
            puStack_e0 = puStack_c8;
            func_0x00010c2508a0(param_1[5]);
          }
          else {
            puStack_108 = param_1[8];
            puStack_110 = param_1[7];
            puStack_100 = param_1[9];
            apuStack_130[0] = puStack_d8;
            puStack_120 = puStack_c8;
            _CMTimeMaximum(&puStack_f0,&puStack_110,apuStack_130);
            param_1[8] = puStack_e8;
            param_1[7] = puStack_f0;
            param_1[9] = puStack_e0;
          }
          func_0x00010be06420(param_1);
          iVar1 = (int)param_1[6];
          func_0x00010c07bca0();
          if (iVar1 == 0) {
            _CMBufferQueueEnqueue(param_1[3],param_3);
          }
          else {
            func_0x00010bf06fe0(param_1[6]);
          }
          ppuVar7 = (undefined **)0x0;
        }
      }
      else {
        ppuVar7 = ppuVar6;
        FUN_1060485e4(ppuVar6,&PTR____CFConstantStringClassReference_110e39cd8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 106046508; end: 10604664b; -[SCComposerMediaAudioCaptureSessionAssetWriter _appendSampleBuffer:] */

void FUN_106046508(undefined **param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *apuStack_a0 [2];
  undefined *puStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined *puStack_38;
  
  ppuVar3 = (undefined **)0x0;
  if (param_3 != 0) {
    ppuVar2 = param_1;
    func_0x00010be78600();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      _CMSampleBufferGetPresentationTimeStamp(&puStack_48,param_3);
      if ((uStack_3c & 1) == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e39cf8;
        FUN_1060485c8(&PTR____CFConstantStringClassReference_110e39cf8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if ((*(byte *)((long)param_1 + 0x44) & 1) == 0) {
          param_1[8] = (undefined *)CONCAT44(uStack_3c,uStack_40);
          param_1[7] = puStack_48;
          param_1[9] = puStack_38;
          puStack_60 = puStack_48;
          puStack_50 = puStack_38;
          func_0x00010c2508a0(param_1[5]);
        }
        else {
          puStack_78 = param_1[8];
          puStack_80 = param_1[7];
          puStack_70 = param_1[9];
          apuStack_a0[0] = puStack_48;
          puStack_90 = puStack_38;
          _CMTimeMaximum(&puStack_60,&puStack_80,apuStack_a0);
          param_1[8] = puStack_58;
          param_1[7] = puStack_60;
          param_1[9] = puStack_50;
        }
        func_0x00010be06420(param_1);
        iVar1 = (int)param_1[6];
        func_0x00010c07bca0();
        if (iVar1 == 0) {
          _CMBufferQueueEnqueue(param_1[3],param_3);
        }
        else {
          func_0x00010bf06fe0(param_1[6]);
        }
        ppuVar3 = (undefined **)0x0;
      }
    }
    else {
      ppuVar3 = ppuVar2;
      FUN_1060485e4(ppuVar2,&PTR____CFConstantStringClassReference_110e39cd8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10604664c; end: 1060466af; -[SCComposerMediaAudioCaptureSessionAssetWriter _drainSampleBufferQueueIfNeeded] */

void FUN_10604664c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  _CMBufferQueueIsEmpty();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c07bca0();
    if (iVar1 != 0) {
      do {
        lVar2 = *(long *)(param_1 + 0x18);
        _CMBufferQueueDequeueAndRetain();
        if (lVar2 == 0) {
          return;
        }
        func_0x00010bf06fe0(*(undefined8 *)(param_1 + 0x30),param_2,lVar2);
        _CFRelease(lVar2);
        uVar3 = *(ulong *)(param_1 + 0x30);
        func_0x00010c07bca0();
      } while ((uVar3 & 1) != 0);
    }
  }
  return;
}



/* Entry: 1060466b0; end: 106046703; -[SCComposerMediaAudioCaptureSessionAssetWriter .cxx_destruct] */

void FUN_1060466b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106046704; end: 1060467eb; -[SCComposerMediaAudioCaptureSessionDelegateImpl initWithOptions:temporaryFileWriterServices:] */

undefined1 *
FUN_106046704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef3f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x0001060486a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c7478;
    _objc_alloc();
    func_0x00010c032780();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = 10;
    _vDSP_create_fftsetup(10,0);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060467ec; end: 106046833; -[SCComposerMediaAudioCaptureSessionDelegateImpl dealloc] */

void FUN_1060467ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _vDSP_destroy_fftsetup(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126ef3f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106046834; end: 106046b0f; -[SCComposerMediaAudioCaptureSessionDelegateImpl audioCaptureSession:didOutputSampleBuffer:] */

void FUN_106046834(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  long lStack_a0;
  uint auStack_98 [3];
  uint uStack_8c;
  undefined8 uStack_88;
  
  _os_unfair_lock_lock(param_2 + 0x30);
  bVar1 = *(byte *)(param_2 + 0x20);
  _os_unfair_lock_unlock(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c1498e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010c1498e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = 0;
    _CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer
              (param_5,0,auStack_98,0x18,0,0,0,&lStack_a0);
    uVar8 = (ulong)auStack_98[0];
    if (auStack_98[0] == 0) {
      param_1 = 0.0;
      if (lStack_a0 != 0) {
        _CFRelease();
      }
    }
    else {
      uVar9 = 0;
      param_1 = 0.0;
      do {
        dVar11 = 0.0;
        if (1 < (&uStack_8c)[uVar9 * 4]) {
          uVar7 = (ulong)((&uStack_8c)[uVar9 * 4] >> 1);
          dVar12 = (double)uVar7;
          psVar6 = (short *)(&uStack_88)[uVar9 * 2];
          do {
            dVar11 = dVar11 + ABS((double)(int)*psVar6) / dVar12;
            uVar7 = uVar7 - 1;
            psVar6 = psVar6 + 1;
          } while (uVar7 != 0);
        }
        dVar11 = ABS(dVar11) + 1.0;
        _log10();
        dVar11 = (dVar11 + -1.8) / 2.2;
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        dVar12 = 1.0;
        if (dVar11 <= 1.0) {
          dVar12 = dVar11;
        }
        param_1 = param_1 + dVar12;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
      if (lStack_a0 != 0) {
        _CFRelease();
        uVar8 = (ulong)auStack_98[0];
      }
      param_1 = param_1 / (double)uVar8;
    }
    (**(code **)(lVar2 + 0x10))(lVar2);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010bfb77e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149760();
  if (param_1 != 0.0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfb77e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf285c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) goto LAB_106046adc;
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfb77e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf285c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfb77e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149760();
    lStack_a0 = 0;
    _CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer
              (param_5,0,auStack_98,0x18,0,0,0,&lStack_a0);
    FUN_106046c64(uVar10,uStack_88,uStack_8c >> 1,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_a0 != 0) {
      _CFRelease();
    }
    (**(code **)(lVar4 + 0x10))(lVar4,uVar10);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
LAB_106046adc:
  func_0x00010bf06fe0(*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 106046b10; end: 106046b3f; -[SCComposerMediaAudioCaptureSessionDelegateImpl stopReadingSamples] */

void FUN_106046b10(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 106046b40; end: 106046bfb; -[SCComposerMediaAudioCaptureSessionDelegateImpl finishWithCompletion:] */

void FUN_106046b40(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c256720(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106046bfc;
  puStack_48 = &UNK_1108538b0;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010bfafe00(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106046bfc; end: 106046c27;  */

void FUN_106046bfc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000106046c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2,param_2);
    return;
  }
  return;
}



/* Entry: 106046c28; end: 106046c63; -[SCComposerMediaAudioCaptureSessionDelegateImpl .cxx_destruct] */

void FUN_106046c28(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106046c64; end: 106046ffb;  */

undefined1 * FUN_106046c64(undefined8 param_1,short *param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  float fVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  float *pfVar8;
  undefined4 *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  float *pfVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined *puStack_d0;
  undefined *puStack_c8;
  float *pfStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  float afStack_a0 [4];
  undefined8 uStack_90;
  undefined4 *puStack_88;
  float fStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = (double)param_3;
  fStack_7c = (float)(1.0 / (double)(param_3 << 1));
  uVar5 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_3 << 2);
  pfVar8 = (float *)((long)afStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pfVar10 = pfVar8;
  uVar13 = param_3;
  while (uVar5 != 0) {
    *pfVar10 = (float)(int)*param_2 / 32768.0;
    uVar13 = uVar13 - 1;
    pfVar10 = pfVar10 + 1;
    param_2 = param_2 + 1;
    uVar5 = uVar13;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)pfVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12_00;
  _vDSP_hann_window(lVar12,param_3,2);
  _vDSP_vmul(pfVar8,1,lVar12,1,lVar11,1,param_3);
  param_3 = param_3 >> 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = param_3 * 4 + 0xf & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined4 *)((lVar12 - uVar13) - uVar13);
  uStack_90 = extraout_x8_00;
  puStack_88 = puVar9;
  _vDSP_ctoz(lVar11,2,&uStack_90,1,param_3);
  _log2(dVar17);
  _vDSP_fft_zrip(param_1,&uStack_90,1,(long)dVar17,1);
  _vDSP_vsmul(uStack_90,1,&fStack_7c,uStack_90,1,param_3);
  _vDSP_vsmul(puStack_88,1,&fStack_7c,puStack_88,1,param_3);
  *puStack_88 = 0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pfVar10 = (float *)((long)puVar9 - uVar13);
  _vDSP_zvmags(&uStack_90,1,pfVar10,1,param_3);
  afStack_a0[3] = 1.0;
  _vDSP_vdbcon(pfVar10,1,afStack_a0 + 3,pfVar10,1,param_3,0);
  if (param_4 == (undefined *)0x0) {
    fVar7 = -1000.0;
    fVar14 = 1000.0;
  }
  else {
    fVar14 = 1000.0;
    fVar7 = -1000.0;
    pfVar8 = pfVar10;
    puVar1 = param_4;
    do {
      fVar16 = *pfVar8;
      if (NAN(fVar16)) {
        fVar16 = 0.0;
      }
      fVar15 = fVar16;
      if (fVar16 <= fVar7) {
        fVar15 = fVar7;
      }
      fVar7 = fVar15;
      if (fVar16 <= fVar14) {
        fVar14 = fVar16;
      }
      puVar1 = puVar1 + -1;
      pfVar8 = pfVar8 + 1;
    } while (puVar1 != (undefined *)0x0);
  }
  fVar16 = 0.0;
  if (-50.0 <= fVar7) {
    fVar16 = fVar7;
  }
  if (fVar16 == fVar14) {
    fVar7 = -128.0;
    fVar16 = 0.0;
  }
  else {
    fVar7 = fVar16 + (fVar16 - fVar14) * -0.75;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar6 = param_4;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_4 != (undefined *)0x0) {
    pfVar8 = pfVar10;
    do {
      pfVar10 = pfVar8 + 1;
      fVar14 = *pfVar8;
      if (NAN(fVar14)) {
        fVar14 = 0.0;
      }
      fVar15 = fVar7;
      if (fVar7 <= fVar14) {
        fVar15 = fVar14;
      }
      fVar14 = fVar16;
      if (fVar15 <= fVar16) {
        fVar14 = fVar15;
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740((fVar14 - fVar7) / (fVar16 - fVar7) + 0.0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010befa120(puVar1);
      _objc_release();
      param_4 = param_4 + -1;
      pfVar8 = pfVar10;
    } while (param_4 != (undefined *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_d0;
    pcStack_a8 = FUN_106046ffc;
    pfStack_c0 = pfVar10;
    uStack_b8 = 0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puStack_c8 = PTR_PTR_1126ef400;
    puStack_d0 = puVar2;
    _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      _objc_retain(puVar6);
      uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
      *(undefined **)((long)ppuVar3 + 8) = puVar6;
      _objc_release(uVar4);
    }
    _objc_release(puVar6);
    return (undefined1 *)ppuVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 106046ffc; end: 10604706f; -[SCComposerMediaAudioDataLoader initWithMediaLoader:] */

undefined1 * FUN_106046ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef400;
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



/* Entry: 106047070; end: 10604729b; -[SCComposerMediaAudioDataLoader loadAudioDataForTrackWithTrack:callback:] */

void FUN_106047070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  uVar11 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_3;
  func_0x00010bf0f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf0f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf0f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010bf93e00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ae80(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10604729c; end: 106047367;  */

void FUN_10604729c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (param_3 == 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
    }
    else {
      puVar1 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar2 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar1);
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106047368; end: 106047373; -[SCComposerMediaAudioDataLoader pushToValdiMarshaller:] */

void FUN_106047368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 106047374; end: 10604737f; -[SCComposerMediaAudioDataLoader .cxx_destruct] */

void FUN_106047374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106047380; end: 1060473f3; -[SCComposerMediaAudioFactory initWithTemporaryFileWriterServices:] */

undefined1 * FUN_106047380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef408;
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



/* Entry: 1060473f4; end: 1060474cf; -[SCComposerMediaAudioFactory getAudioFromDataWithData:callback:] */

void FUN_1060473f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1060474d0;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_4);
    uStack_48 = param_1;
    lStack_38 = param_4;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060474d0; end: 106047523;  */

void FUN_1060474d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126c7470;
  _objc_alloc(PTR_PTR_1126c7470);
  func_0x00010c0510e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106047524; end: 1060475f7; -[SCComposerMediaAudioFactory getAudioFromDataWithAVAsset:callback:] */

void FUN_106047524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060475f8;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1060475f8; end: 10604764b;  */

void FUN_1060475f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126c7470;
  _objc_alloc(PTR_PTR_1126c7470);
  func_0x00010c0510c0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10604764c; end: 106047657; -[SCComposerMediaAudioFactory pushToValdiMarshaller:] */

void FUN_10604764c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106047658; end: 106047663; -[SCComposerMediaAudioFactory .cxx_destruct] */

void FUN_106047658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106047664; end: 106047767; -[SCComposerMediaAudioPlayer initWithAudioSession:audio:shouldDisableScreenLockWhilePlaying:] */

undefined8 *
FUN_106047664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef410;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c47f0;
    _objc_alloc();
    _objc_retain(param_4);
    func_0x00010bff54a0();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106047768; end: 10604776f;  */

void FUN_106047768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_asset_1125a0568);
  return;
}



/* Entry: 106047770; end: 106047777; -[SCComposerMediaAudioPlayer play] */

void FUN_106047770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_play_11261d2f8);
  return;
}



/* Entry: 106047778; end: 10604777f; -[SCComposerMediaAudioPlayer pause] */

void FUN_106047778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 106047780; end: 1060477c7; -[SCComposerMediaAudioPlayer seekWithTimeMs:] */

void FUN_106047780(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _CMTimeMakeWithSeconds(auStack_38,param_1 / 1000.0,600);
  func_0x00010c157260(uVar1,param_3,auStack_38);
  return;
}



/* Entry: 1060477c8; end: 10604780f; -[SCComposerMediaAudioPlayer getDurationMs] */

double FUN_1060477c8(double param_1,long param_2)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 8) == 0) {
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_28);
  }
  _CMTimeGetSeconds(&uStack_28);
  return param_1 * 1000.0;
}



/* Entry: 106047810; end: 106047927; -[SCComposerMediaAudioPlayer observeCurrentTimeWithCallback:] */

void FUN_106047810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f9980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106047928;
  puStack_50 = &UNK_11085f508;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060479a4;
  puStack_78 = &UNK_110842e18;
  uStack_70 = uVar3;
  _objc_retain(uVar3);
  func_0x00010bffae00(puVar4,param_2,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106047928; end: 1060479a3;  */

void FUN_106047928(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_38,param_3);
    }
    _CMTimeGetSeconds(&uStack_38);
    (**(code **)(lVar1 + 0x10))(param_1 * 1000.0,lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060479a4; end: 1060479ab;  */

void FUN_1060479a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1060479ac; end: 1060479d7; -[SCComposerMediaAudioPlayer dispose] */

void FUN_1060479ac(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060479d8; end: 1060479e3; -[SCComposerMediaAudioPlayer pushToValdiMarshaller:] */

void FUN_1060479d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 1060479e4; end: 1060479ef; -[SCComposerMediaAudioPlayer .cxx_destruct] */

void FUN_1060479e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060479f0; end: 106047abb; -[SCComposerMediaAudioRecorder initWithAudioServices:captureServices:temporaryFileWriterServices:] */

undefined1 *
FUN_1060479f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef418;
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



/* Entry: 106047abc; end: 106047b37; -[SCComposerMediaAudioRecorder getAuthorizationHandler] */

void FUN_106047abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7480;
  _objc_alloc(PTR_PTR_1126c7480);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15fac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5480(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106047b38; end: 106047bdf; -[SCComposerMediaAudioRecorder startRecordingWithOptions:callback:] */

void FUN_106047b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bec1520(param_1,param_2,*(undefined8 *)(param_1 + 8),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106047be0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _objc_retain(param_1);
  func_0x00010bffae00(puVar1,param_2,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106047be0; end: 106047be7;  */

void FUN_106047be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106047be8; end: 106047f83; -[SCComposerMediaAudioRecorder _startRecordingWithAudioServices:options:completion:] */

void FUN_106047be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2798;
  _objc_opt_new();
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126b6dd0;
    _objc_alloc();
    func_0x00010bffcf80();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf31240();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf0ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126c7488;
    _objc_alloc();
    func_0x00010c0321e0();
    func_0x00010c18b5e0(uVar5,param_2,puVar6);
    puVar7 = PTR_PTR_1126b2798;
    _objc_opt_new();
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106047f84;
    puStack_b0 = &UNK_110909520;
    _objc_retain();
    puStack_a8 = puVar7;
    _objc_retain(param_5);
    puStack_a0 = puVar6;
    lStack_80 = param_5;
    _objc_retain(uVar5);
    uStack_98 = uVar5;
    lStack_90 = param_1;
    _objc_retain(puVar1);
    puStack_88 = puVar1;
    _objc_retain(puVar6);
    ppuVar8 = &puStack_c8;
    _objc_retainBlock();
    uVar4 = param_3;
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar11;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106048340;
    puStack_f0 = &UNK_1108ac198;
    puStack_e8 = puVar7;
    _objc_retain(param_5);
    uStack_e0 = uVar5;
    lStack_d8 = param_5;
    ppuStack_d0 = ppuVar8;
    _objc_retain(ppuVar8);
    _objc_retain(uVar5);
    _objc_retain(puVar7);
    uVar10 = uVar3;
    func_0x00010bf47660(uVar3,param_2,puVar2,puVar9,&puStack_108);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_10604851c;
    puStack_120 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_118 = param_3;
    uStack_110 = uVar10;
    _objc_retain(uVar10);
    func_0x00010bffae00(puVar11,param_2,&puStack_138);
    func_0x00010bef7460(puVar7,param_2,puVar11);
    _objc_release(puVar11);
    uVar4 = uStack_110;
    _objc_retain(puVar1);
    _objc_release(uVar4);
    _objc_release(uStack_118);
    _objc_release(uVar10);
    _objc_release(ppuStack_d0);
    _objc_release(uStack_e0);
    _objc_release(lStack_d8);
    _objc_release(puStack_e8);
    _objc_release(ppuVar8);
    _objc_release(puStack_88);
    _objc_release(uStack_98);
    _objc_release(puStack_a0);
    _objc_release(lStack_80);
    _objc_release(puStack_a8);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106047f84; end: 10604850b;  */

void FUN_106047f84(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar6);
    func_0x00010bffae00(puVar1);
    func_0x00010bef7460(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x48);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar3 = param_2;
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10604850c; end: 10604851b;  */

void FUN_10604850c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106048518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10604851c; end: 10604857f;  */

void FUN_10604851c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1288c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106048580; end: 10604858b; -[SCComposerMediaAudioRecorder pushToValdiMarshaller:] */

void FUN_106048580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 10604858c; end: 1060485c7; -[SCComposerMediaAudioRecorder .cxx_destruct] */

void FUN_10604858c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060485c8; end: 1060485e3;  */

void FUN_1060485c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110e39d38,param_1,200);
  return;
}



/* Entry: 1060485e4; end: 1060488e3;  */

void FUN_1060485e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf99260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060488e4; end: 106048957; -[SCComposerMediaMicrophoneAuthorizationHandler initWithAudioSession:] */

undefined1 * FUN_1060488e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef420;
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



/* Entry: 106048958; end: 106048a6f; -[SCComposerMediaMicrophoneAuthorizationHandler getStateWithCallback:] */

void FUN_106048958(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1060489e8;
    puStack_38 = &UNK_11084aaa8;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106048a70; end: 106048c17; -[SCComposerMediaMicrophoneAuthorizationHandler requestAuthorizationWithCallback:] */

void FUN_106048a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106048af8;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106048c18; end: 106048c23; -[SCComposerMediaMicrophoneAuthorizationHandler pushToValdiMarshaller:] */

void FUN_106048c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106048c24; end: 106048c2f; -[SCComposerMediaMicrophoneAuthorizationHandler .cxx_destruct] */

void FUN_106048c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106048c30; end: 106048cb3; -[SCComposerMediaPlayerFactory initWithAudioSessionServices:shouldDisableScreenLockWhilePlaying:] */

undefined1 *
FUN_106048c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106048cb4; end: 106048d8b; -[SCComposerMediaPlayerFactory getPlayerForAudioWithAudio:callback:] */

void FUN_106048cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106048d8c;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_40 = param_1;
    lStack_38 = param_4;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106048d8c; end: 106048eb3;  */

void FUN_106048d8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  
  puVar7 = PTR_PTR_1126c7470;
  uVar9 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar9);
  _objc_opt_class(puVar7);
  uVar2 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar7);
  uVar1 = uVar9;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  if (uVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    puVar7 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    func_0x00010c02b2e0();
    pcVar8 = *(code **)(lVar5 + 0x10);
    puVar6 = (undefined *)0x0;
    puVar10 = puVar7;
  }
  else {
    puVar6 = PTR_PTR_1126c7490;
    _objc_alloc(PTR_PTR_1126c7490);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c15fac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff54c0(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x30);
    pcVar8 = *(code **)(lVar5 + 0x10);
    puVar7 = (undefined *)0x0;
    puVar10 = puVar6;
  }
  (*pcVar8)(lVar5,puVar6,puVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106048eb4; end: 1060490ab; -[SCComposerMediaPlayerFactory startAudioSessionWithCallback:] */

void FUN_106048eb4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b6dd0;
    _objc_alloc(PTR_PTR_1126b6dd0);
    func_0x00010bffcf80();
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060490ac;
    puStack_88 = &UNK_1108538b0;
    puStack_80 = puVar3;
    _objc_retain(param_3);
    lStack_78 = param_3;
    _objc_retain(puVar3);
    uVar7 = uVar5;
    func_0x00010bf47660(uVar5,param_2,puVar2,puVar6,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1060491dc;
    puStack_b8 = &UNK_110841f80;
    lStack_b0 = param_1;
    uStack_a8 = uVar7;
    _objc_retain(uVar7);
    func_0x00010bffae00(puVar6,param_2,&puStack_d0);
    func_0x00010bef7460(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uStack_a8);
    _objc_release(uVar7);
    _objc_release(lStack_78);
    _objc_release(puStack_80);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060490ac; end: 1060491d3;  */

void FUN_1060490ac(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126b2f30;
    _objc_alloc(PTR_PTR_1126b2f30);
    lVar3 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar3);
    func_0x00010bffae00(puVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar3 = param_2;
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1060491d4; end: 1060491db;  */

void FUN_1060491d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1060491dc; end: 106049243;  */

void FUN_1060491dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0d3da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1288c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106049244; end: 10604924f; -[SCComposerMediaPlayerFactory pushToValdiMarshaller:] */

void FUN_106049244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106049250; end: 10604925b; -[SCComposerMediaPlayerFactory .cxx_destruct] */

void FUN_106049250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604925c; end: 106049357; -[SCFamilyCenterProfileSectionComposerContextProvider initWithPageLauncher:supStore:valdiRuntimeProvider:profileUserId:] */

undefined1 *
FUN_10604925c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ef430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106049358; end: 10604938b; -[SCFamilyCenterProfileSectionComposerContextProvider setUp] */

void FUN_106049358(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604938c; end: 10604938f; -[SCFamilyCenterProfileSectionComposerContextProvider tearDown] */

void FUN_10604938c(void)

{
  return;
}



/* Entry: 106049390; end: 10604948f; -[SCFamilyCenterProfileSectionComposerContextProvider valdiContext] */

void FUN_106049390(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1;
  func_0x00010bdf5680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((uVar2 == 0) || (func_0x00010bf6f140(), (uVar2 & 1) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c7498;
    _objc_opt_class(PTR_PTR_1126c7498);
    lVar5 = param_1;
    func_0x00010bdec340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf55740(uVar8,param_2,puVar4,lVar1,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(uVar8);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106049490; end: 1060494c7; -[SCFamilyCenterProfileSectionComposerContextProvider _createValdiViewModel] */

void FUN_106049490(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c74a0;
  _objc_alloc_init(PTR_PTR_1126c74a0);
  func_0x00010c17c3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060494c8; end: 10604954b; -[SCFamilyCenterProfileSectionComposerContextProvider _createComponentContext] */

void FUN_1060494c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c74a8;
  _objc_alloc(PTR_PTR_1126c74a8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033080(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10604954c; end: 106049563; -[SCFamilyCenterProfileSectionComposerContextProvider contextProviderDelegate] */

void FUN_10604954c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106049564; end: 10604956f; -[SCFamilyCenterProfileSectionComposerContextProvider setContextProviderDelegate:] */

void FUN_106049564(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106049570; end: 106049577; -[SCFamilyCenterProfileSectionComposerContextProvider updateQueuePerformer] */

undefined8 FUN_106049570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106049578; end: 1060495a7; -[SCFamilyCenterProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

void FUN_106049578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060495a8; end: 1060495af; -[SCFamilyCenterProfileSectionComposerContextProvider actionHandler] */

undefined8 FUN_1060495a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060495b0; end: 1060495df; -[SCFamilyCenterProfileSectionComposerContextProvider setActionHandler:] */

void FUN_1060495b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060495e0; end: 106049653; -[SCFamilyCenterProfileSectionComposerContextProvider .cxx_destruct] */

void FUN_1060495e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


