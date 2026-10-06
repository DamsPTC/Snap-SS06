/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058bcaac; end: 1058bcac3;  */

void FUN_1058bcaac(void)

{
  return;
}



/* Entry: 1058bcac4; end: 1058bcd1b; -[SCMemoriesMashupSnapDocFactoryImpl updateSnapDocForAnimatedCollageIfNecessaryWithSnapDoc:collageUCOLensID:isBeatSynced:] */

void FUN_1058bcac4(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,ulong param_5)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  puVar10 = puVar2;
  func_0x00010be1cf60(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (((param_5 & 1) != 0) || (lVar3 != 0)) {
    lVar4 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar4 = lVar6;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_140;
    param_4 = auStack_100;
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar12 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(lVar4);
          }
          uVar7 = *(undefined8 *)(lStack_138 + lVar11 * 8);
          func_0x00010c2787a0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          puVar9 = PTR_PTR_1126afff0;
          _objc_opt_new(PTR_PTR_1126afff0);
          func_0x00010c209a20();
          func_0x00010bdcabe0(param_1,param_2,lVar3,0);
          fVar1 = (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) * 1000.0;
          uVar13 = SUB41(fVar1,0);
          uVar14 = (undefined1)((uint)fVar1 >> 8);
          uVar15 = (undefined1)((uint)fVar1 >> 0x10);
          uVar16 = (undefined1)((uint)fVar1 >> 0x18);
          func_0x00010c192d40(puVar9,param_2,(long)fVar1);
          func_0x00010c21a4e0(uVar8,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(uVar8);
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        puVar10 = &uStack_140;
        param_4 = auStack_100;
        lVar5 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,puVar10,param_4,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(param_4);
  func_0x00010bf8cb40(uVar7,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0060(param_3,param_2,uVar7,param_4);
  _objc_release(param_4);
  func_0x00010becb180(param_3,param_2,uVar7);
  uVar8 = uVar7;
  func_0x00010c23fe00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1058bcd1c; end: 1058bcdaf; -[SCMemoriesMashupSnapDocFactoryImpl updateSnapDoc:withMusicAsset:] */

void FUN_1058bcd1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010bf8cb40(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0060(param_1,param_2,uVar2,param_4);
  _objc_release(param_4);
  func_0x00010becb180(param_1,param_2,uVar2);
  uVar1 = uVar2;
  func_0x00010c23fe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058bcdb0; end: 1058bcdbf; -[SCMemoriesMashupSnapDocFactoryImpl _temporaryFixRemovingExtraEmptyAudioRenderEffect:] */

void FUN_1058bcdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_updateSnapDoc__112680238,&PTR___NSConcreteGlobalBlock_1108bc628);
  return;
}



/* Entry: 1058bcdc0; end: 1058bd1f7;  */

void FUN_1058bcdc0(undefined8 param_1,long param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined *puVar16;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
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
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bfda540();
  if ((int)lVar14 != 0) {
    lVar14 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar14;
    func_0x00010bfd8fa0();
    _objc_release(lVar14);
    if ((int)lVar11 != 0) {
      lVar14 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar14;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bfdb0c0();
      _objc_release(lVar11);
      _objc_release(lVar14);
      if ((int)lVar13 != 0) {
        lVar14 = param_2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar14;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar11;
        func_0x00010c12fae0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar13;
        func_0x00010c12fb20();
        _objc_release(lVar13);
        _objc_release(lVar11);
        _objc_release(lVar14);
        if (lVar1 != 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          lStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          plStack_220 = (long *)0x0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          lVar14 = param_2;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar14;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          func_0x00010c12fae0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar13;
          func_0x00010c12fb00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          _objc_release(lVar11);
          _objc_release(lVar14);
          lVar14 = lVar1;
          func_0x00010bf52a60();
          if (lVar14 != 0) {
            lVar11 = *plStack_220;
            do {
              lVar13 = 0;
              do {
                if (*plStack_220 != lVar11) {
                  _objc_enumerationMutation(lVar1);
                }
                lVar12 = *(long *)(lStack_228 + lVar13 * 8);
                lVar3 = lVar12;
                func_0x00010c14fb60();
                if ((int)lVar3 == 1) {
                  uStack_248 = 0;
                  uStack_250 = 0;
                  uStack_238 = 0;
                  uStack_240 = 0;
                  lStack_268 = 0;
                  uStack_270 = 0;
                  uStack_258 = 0;
                  plStack_260 = (long *)0x0;
                  func_0x00010c12f9a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lVar12;
                  func_0x00010bf52a60();
                  if (lVar3 == 0) {
                    _objc_release(lVar12);
                  }
                  else {
                    iVar15 = 0;
                    lVar10 = *plStack_260;
                    do {
                      lVar9 = 0;
                      do {
                        if (*plStack_260 != lVar10) {
                          _objc_enumerationMutation(lVar12);
                        }
                        lVar4 = *(long *)(lStack_268 + lVar9 * 8);
                        func_0x00010c12fa60();
                        if (lVar4 != 0) {
                          iVar15 = iVar15 + 1;
                        }
                        lVar9 = lVar9 + 1;
                      } while (lVar3 != lVar9);
                      lVar3 = lVar12;
                      func_0x00010bf52a60();
                    } while (lVar3 != 0);
                    _objc_release(lVar12);
                    if (iVar15 != 0) goto LAB_1058bd084;
                  }
                  func_0x00010befa120(puVar2);
                }
LAB_1058bd084:
                lVar13 = lVar13 + 1;
              } while (lVar13 != lVar14);
              lVar14 = lVar1;
              func_0x00010bf52a60();
            } while (lVar14 != 0);
          }
          _objc_release(lVar1);
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          plStack_2a0 = (long *)0x0;
          _objc_retain(puVar2);
          param_3 = &uStack_2b0;
          param_4 = auStack_1f0;
          puVar5 = puVar2;
          func_0x00010bf52a60();
          if (puVar5 != (undefined *)0x0) {
            lVar14 = *plStack_2a0;
            do {
              puVar16 = (undefined *)0x0;
              do {
                if (*plStack_2a0 != lVar14) {
                  _objc_enumerationMutation(puVar2);
                }
                lVar11 = param_2;
                func_0x00010c0fee00();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar11;
                func_0x00010c0c4c40();
                _objc_retainAutoreleasedReturnValue();
                lVar1 = lVar13;
                func_0x00010c12fae0();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar1;
                func_0x00010c12fb00();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12d360();
                _objc_release(lVar3);
                _objc_release(lVar1);
                _objc_release(lVar13);
                _objc_release(lVar11);
                puVar16 = puVar16 + 1;
              } while (puVar5 != puVar16);
              param_3 = &uStack_2b0;
              param_4 = auStack_1f0;
              puVar5 = puVar2;
              func_0x00010bf52a60();
            } while (puVar5 != (undefined *)0x0);
          }
          _objc_release(puVar2);
          _objc_release(puVar2);
        }
      }
    }
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126b3080;
    _objc_retain(param_3);
    puVar6 = param_4;
    func_0x00010bf63640(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar7 = param_3;
    func_0x00010c265b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b25c8;
    _objc_opt_new(PTR_PTR_1126b25c8);
    func_0x00010c1c4880();
    func_0x00010c16a960(puVar5);
    puVar16 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    puVar8 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_retain(param_4);
    func_0x00010c2849a0(param_3);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_4);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar2);
    return;
  }
  return;
}



/* Entry: 1058bd1f8; end: 1058bd38f; -[SCMemoriesMashupSnapDocFactoryImpl _updateSnapDocEditor:withMusicAsset:] */

void FUN_1058bd1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b3080;
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c265b80(param_3,param_2,puVar2,0xb);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b25c8;
  _objc_opt_new(PTR_PTR_1126b25c8);
  func_0x00010c1c4880();
  func_0x00010c16a960(puVar3,param_2,2);
  puVar4 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  func_0x00010c1c4020();
  puVar5 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(param_3,param_2,puVar4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1058bd390;
  puStack_60 = &UNK_110853ea0;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c2849a0(param_3,param_2,&puStack_78);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1058bd390; end: 1058bd45f;  */

void FUN_1058bd390(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfac0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1ca400(param_2);
  _objc_release(puVar1);
  func_0x00010c277e80(*(undefined8 *)(param_1 + 0x20));
  uVar2 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c218f80();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4d360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c182620(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058bd460; end: 1058bd64f; -[SCMemoriesMashupSnapDocFactoryImpl _updateSnapDocEditor:withMusicPickerTrack:] */

void FUN_1058bd460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x0001058b9a6c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  uVar2 = param_4;
  func_0x0001058b99dc(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1863a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(param_3,param_2,puVar1,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1058bd580;
  puStack_40 = &UNK_110853ea0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c2849a0(param_3,param_2,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058bd650; end: 1058bd6bf; -[SCMemoriesMashupSnapDocFactoryImpl _animateDurationForLens:lensDurationTweakEnabled:] */

double FUN_1058bd650(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  double dVar1;
  
  _objc_retain(param_4);
  dVar1 = 0.0;
  if ((param_5 & 1) == 0) {
    if (param_4 == 0) {
      func_0x000108ec15c4(*(undefined8 *)(param_2 + 0x38));
      dVar1 = (double)(ulong)(uint)(float)param_1;
    }
    else {
      func_0x00010bf02de0(param_4);
      dVar1 = param_1;
    }
  }
  _objc_release(param_4);
  return dVar1;
}



/* Entry: 1058bd6c0; end: 1058bd7a3; -[SCMemoriesMashupSnapDocFactoryImpl _checkIsSnapDocCompatible:] */

undefined1 FUN_1058bd6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010bfea600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be500();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1058bd7a4; end: 1058bd82f;  */

void FUN_1058bd7a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c06ed40();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058bd830; end: 1058bd977; -[SCMemoriesMashupSnapDocFactoryImpl _generateSoundSyncSnapDocWithMusicSyncServices:] */

void FUN_1058bd830(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058bd978;
    puStack_60 = &UNK_1108683b8;
    puStack_58 = puVar2;
    _objc_retain(param_3);
    lStack_50 = param_3;
    uStack_48 = uVar5;
    _objc_retain(uVar5);
    func_0x00010bf54280(puVar3,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lStack_50);
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058bd978; end: 1058bda4b;  */

void FUN_1058bd978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf590a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058bda4c; end: 1058bdb47;  */

void FUN_1058bda4c(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126af5d0;
    if (puVar1 != (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = param_2;
      func_0x00010c23fe00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_release(puVar2);
      goto LAB_1058bdb18;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
LAB_1058bdb18:
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058bdb48; end: 1058bdc5f; -[SCMemoriesMashupSnapDocFactoryImpl _generateTemplateBasedSnapDocWithTemplate:mediaSegments:] */

void FUN_1058bdb48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1058bdc60;
  puStack_68 = &UNK_110866f10;
  uStack_60 = uVar4;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = uVar3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar1,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058bdc60; end: 1058bdd53;  */

void FUN_1058bdc60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058bdd54; end: 1058bde07;  */

void FUN_1058bdd54(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if ((param_3 == 0) && (param_2 != 0)) {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058bde08; end: 1058bdf2f; -[SCMemoriesMashupSnapDocFactoryImpl _regenerateSnapDocWithOverlayImageGenerator:] */

void FUN_1058bde08(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae6b8;
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1058bdf30;
    puStack_68 = &UNK_110866f10;
    puStack_60 = puVar1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    lStack_50 = param_1;
    uStack_48 = uVar3;
    _objc_retain(uVar3);
    func_0x00010bf54280(puVar2,param_2,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_58);
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058bdf30; end: 1058be023;  */

void FUN_1058bdf30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbfdc0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058be024; end: 1058be153;  */

void FUN_1058be024(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (puVar1 != (undefined *)0x0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb7e0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af5d0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
  }
  _objc_release(puVar4);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058be154; end: 1058be2c7; -[SCMemoriesMashupSnapDocFactoryImpl _getAnimatedCollageLensIdWithLensId:] */

void FUN_1058be154(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar10;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000108ec10d4();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010c095ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x22 = lVar10;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar2);
        }
        puVar9 = *(undefined **)(lStack_128 + lVar10 * 8);
        unaff_x24 = puVar9;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_3;
        puVar7 = (undefined8 *)unaff_x24;
        func_0x00010c0720c0();
        _objc_release(unaff_x24);
        if ((unaff_x25 & 1) != 0) {
          _objc_retain(puVar9);
          goto LAB_1058be270;
        }
        lVar10 = lVar10 + 1;
      } while (unaff_x22 != lVar10);
      unaff_x22 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_1058be270:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1058be2c8;
    lStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = puVar9;
    lStack_160 = unaff_x22;
    lStack_158 = lVar2;
    lStack_150 = lVar1;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)puVar7;
    func_0x00010c277e80();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010c277e80(puVar7);
      func_0x00010c0df880(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a098);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010c277ce0();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010c277ce0(puVar7);
      func_0x00010c0df880(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a0b8);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010c24fb60();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar8 != 0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010c24fb60(puVar7);
      func_0x00010c0df820(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a0d8);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010bf17940();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010bf17940(puVar7);
      func_0x00010c0df880(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a0f8);
      _objc_release(puVar9);
    }
    puVar9 = (undefined *)puVar7;
    func_0x00010c2662a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined *)puVar7;
      func_0x00010c2662a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      if (puVar4 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar5 = (undefined *)puVar7;
          func_0x00010c2662a0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c296de0();
          func_0x00010c0df880(puVar4,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar5);
          puVar8 = puVar8 + 1;
          puVar4 = (undefined *)puVar7;
          func_0x00010c2662a0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf529e0();
          _objc_release(puVar4);
        } while (puVar8 < puVar5);
      }
      puVar8 = puVar9;
      func_0x00010bf51e00(puVar9);
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a118);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = (undefined *)puVar7;
      func_0x00010c2662c0(puVar7);
      func_0x00010c0df840(puVar8,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a138);
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010bfb0e40();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010bfb0e40(puVar7);
      func_0x00010c0df880(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a158);
      _objc_release(puVar9);
    }
    puVar9 = (undefined *)puVar7;
    func_0x00010bf88720();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined *)puVar7;
      func_0x00010bf88720();
      if (puVar8 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar5 = (undefined *)puVar7;
          func_0x00010bf88700(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c296de0();
          func_0x00010c0df880(puVar4,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar5);
          puVar8 = puVar8 + 1;
          puVar4 = (undefined *)puVar7;
          func_0x00010bf88720();
        } while (puVar8 < puVar4);
      }
      puVar8 = puVar9;
      func_0x00010bf51e00(puVar9);
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a178);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = (undefined *)puVar7;
      func_0x00010bf88720(puVar7);
      func_0x00010c0df840(puVar8,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a198);
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010c266900();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)puVar8 != 0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010c266900(puVar7);
      func_0x00010c0df6e0(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a1b8);
      _objc_release(puVar9);
    }
    puVar8 = (undefined *)puVar7;
    func_0x00010c0ddca0();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)puVar7;
      func_0x00010c0ddca0(puVar7);
      func_0x00010c0df880(puVar9,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,&PTR____CFConstantStringClassReference_110e0a1d8);
      _objc_release(puVar9);
    }
    puVar9 = (undefined *)puVar7;
    func_0x00010beffbc0();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined *)puVar7;
      func_0x00010beffbc0();
      if (puVar8 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar5 = (undefined *)puVar7;
          func_0x00010beffba0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c296de0();
          func_0x00010c0df880(puVar4,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar5);
          puVar8 = puVar8 + 1;
          puVar4 = (undefined *)puVar7;
          func_0x00010beffbc0();
        } while (puVar8 < puVar4);
      }
      puVar8 = puVar9;
      func_0x00010bf51e00(puVar9);
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a1f8);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = (undefined *)puVar7;
      func_0x00010beffbc0(puVar7);
      func_0x00010c0df840(puVar8,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110e0a218);
      _objc_release(puVar8);
      _objc_release(puVar9);
    }
    lStack_188 = 0;
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,1,&lStack_188
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
    if ((puVar8 != (undefined *)0x0) && (lStack_188 == 0)) {
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1058be2c8; end: 1058be90f; -[SCMemoriesMashupSnapDocFactoryImpl _convertMusicBeatSyncDataToDictionary:] */

void FUN_1058be2c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c277e80();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c277e80(param_3);
    func_0x00010c0df880(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a098);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c277ce0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c277ce0(param_3);
    func_0x00010c0df880(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a0b8);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c24fb60();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c24fb60(param_3);
    func_0x00010c0df820(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a0d8);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010bf17940();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010bf17940(param_3);
    func_0x00010c0df880(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a0f8);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c2662a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c2662a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = param_3;
        func_0x00010c2662a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c296de0();
        func_0x00010c0df880(puVar6,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
        uVar3 = param_3;
        func_0x00010c2662a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        _objc_release(uVar3);
      } while (uVar5 < uVar4);
    }
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a118);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = param_3;
    func_0x00010c2662c0(param_3);
    func_0x00010c0df840(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a138);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010bfb0e40();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010bfb0e40(param_3);
    func_0x00010c0df880(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a158);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010bf88720();
  if (uVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf88720();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = param_3;
        func_0x00010bf88700(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c296de0();
        func_0x00010c0df880(puVar6,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
        uVar3 = param_3;
        func_0x00010bf88720();
      } while (uVar5 < uVar3);
    }
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a178);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = param_3;
    func_0x00010bf88720(param_3);
    func_0x00010c0df840(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a198);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c266900();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c266900(param_3);
    func_0x00010c0df6e0(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a1b8);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010c0ddca0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0ddca0(param_3);
    func_0x00010c0df880(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a1d8);
    _objc_release(puVar2);
  }
  uVar5 = param_3;
  func_0x00010beffbc0();
  if (uVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010beffbc0();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = param_3;
        func_0x00010beffba0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c296de0();
        func_0x00010c0df880(puVar6,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
        uVar3 = param_3;
        func_0x00010beffbc0();
      } while (uVar5 < uVar3);
    }
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a1f8);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = param_3;
    func_0x00010beffbc0(param_3);
    func_0x00010c0df840(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e0a218);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  lStack_58 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,1,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)0x0;
  if ((puVar2 != (undefined *)0x0) && (lStack_58 == 0)) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058be910; end: 1058be99f; -[SCMemoriesMashupSnapDocFactoryImpl .cxx_destruct] */

void FUN_1058be910(long param_1)

{
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



/* Entry: 1058be9a0; end: 1058beaf7; +[SCMemoriesMashupSnapDocFactoryImpl shouldStripUnsupportedCollageLayer:] */

byte FUN_1058be9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cc820();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0b760();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_3;
    func_0x00010bf5cc00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar7 == 7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf0b760();
  _objc_release(uVar2);
  _objc_release(param_3);
  return ((int)uVar4 == 6 || (int)uVar3 == 2) | bVar1 | (int)uVar5 == 6;
}



/* Entry: 1058beaf8; end: 1058beb37;  */

void FUN_1058beaf8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058beb38; end: 1058bedd3; -[SCMemoriesMashupSnapDocServiceProvider _memoriesMashupSnapDocFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058beb38(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126bfab8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11272b8fc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c0efa80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272b900;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c2400c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272b904;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010c2400c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272b908;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar13;
  func_0x00010bf2fa20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272b90c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar14;
  func_0x00010bf51700();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272b910;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar15;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272b914;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272b918;
    _objc_loadWeakRetained();
  }
  lVar9 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047940(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058bedd4; end: 1058beebf; -[SCMemoriesMashupSnapDocServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058bedd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b918);
  _objc_destroyWeak(param_1 + _DAT_11272b914);
  _objc_destroyWeak(param_1 + _DAT_11272b910);
  _objc_destroyWeak(param_1 + _DAT_11272b90c);
  _objc_destroyWeak(param_1 + _DAT_11272b908);
  _objc_destroyWeak(param_1 + _DAT_11272b904);
  _objc_destroyWeak(param_1 + _DAT_11272b900);
  _objc_destroyWeak(param_1 + _DAT_11272b8fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b8f8);
  return;
}



/* Entry: 1058beec0; end: 1058bef1b; -[SCMemoriesDbServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058beec0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b92c);
  _objc_destroyWeak(param_1 + _DAT_11272b928);
  _objc_destroyWeak(param_1 + _DAT_11272b924);
  _objc_destroyWeak(param_1 + _DAT_11272b920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b91c);
  return;
}



/* Entry: 1058bef1c; end: 1058bef23; -[SCMemoriesDbManager dataObjectContext] */

undefined8 FUN_1058bef1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1058bef24; end: 1058bef2b; -[SCMemoriesDbManager encryptedDb] */

undefined8 FUN_1058bef24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1058bef2c; end: 1058bef33; -[SCMemoriesDbManager mergedDataSource] */

undefined8 FUN_1058bef2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1058bef34; end: 1058bef3b; -[SCMemoriesDbManager profile] */

undefined8 FUN_1058bef34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1058bef3c; end: 1058bef43; -[SCMemoriesDbManager queriesPerformer] */

undefined8 FUN_1058bef3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1058bef44; end: 1058bf003; -[SCMemoriesDbManager .cxx_destruct] */

void FUN_1058bef44(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058bf004; end: 1058bf1af; -[SCMemoriesLocationRepositoryImpl initWithDbManager:configProvider:] */

undefined1 *
FUN_1058bf004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = &uStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126eab80;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x10) = (char)uVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    puStack_68 = puVar5;
    puStack_60 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_d8,param_7);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_100,auStack_d8);
  uStack_f8 = param_1;
  uStack_f0 = param_2;
  uStack_e8 = param_3;
  uStack_e0 = param_4;
  func_0x00010bf6ab80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_7 + 8);
  func_0x00010c11d060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25ffc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1058bf1b0; end: 1058bf2d7; -[SCMemoriesLocationRepositoryImpl observeSnapIdsForMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_1058bf1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_5);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_80,auStack_58);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + 8);
  func_0x00010c11d060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ffc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058bf2d8; end: 1058bf36f;  */

void FUN_1058bf2d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x0001058bef98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    func_0x00010be66b40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058bf370; end: 1058bf533; -[SCMemoriesLocationRepositoryImpl _observeQueryForMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_1058bf370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  
  _objc_initWeak(auStack_88,param_5);
  uVar1 = *(undefined8 *)(param_5 + 8);
  func_0x00010bf93a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e09a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + 8);
  func_0x00010c11d060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_88);
  uVar7 = uVar6;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  func_0x00010bfb2660(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1058bf534; end: 1058bf53b;  */

void FUN_1058bf534(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1058bf53c; end: 1058bf737;  */

void FUN_1058bf53c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar9 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x0001058bef98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(puVar1 + 8);
    func_0x00010c0cadc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e0960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c11d060(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0e0ea0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    puVar7 = puVar6;
    func_0x00010c0b8600(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010be13fa0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c2519e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1058bf738; end: 1058bf79b;  */

void FUN_1058bf738(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001058bef98();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be13fa0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1058bf79c; end: 1058bfeaf; -[SCMemoriesLocationRepositoryImpl _fetchSnapIdsForMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_1058bf79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_5 + 8);
  func_0x00010bf93a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2412a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar5 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000107f49238();
      if ((int)lVar6 != 0) {
        func_0x00010c1d0640(puVar4);
      }
      _objc_release(lVar5);
      lVar22 = lVar22 + 1;
    } while (lVar2 != lVar22);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar7 = puVar4;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 8);
    func_0x00010bf63f40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar10 = PTR_PTR_1126af4d0;
    puVar7 = puVar4;
    func_0x00010bf002e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaa560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    _objc_retain(puVar10);
    puVar7 = puVar10;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar10);
        }
        puVar24 = *(undefined **)((long)puVar20 * 8);
        puVar12 = PTR_PTR_1126af4c0;
        func_0x00010bfa9800();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 != (undefined *)0x0) {
          puVar13 = puVar24;
          func_0x00010c0d21e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c08fa60();
          _objc_release(puVar13);
          puVar13 = puVar24;
          if (puVar14 == (undefined *)0x0) {
            puVar14 = puVar12;
            func_0x00010bfbdda0();
            func_0x00010b5fa33c();
            if (puVar14 == (undefined *)0x4) {
              puVar13 = puVar12;
              func_0x00010bf97200(puVar12);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010c241220(puVar24);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010c0d21e0(puVar24);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar14 = puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar14 == (undefined *)0x0) {
LAB_1058bfb30:
            func_0x00010c1d0640(puVar11);
          }
          else {
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010bf59960(puVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar24;
            func_0x00010bf433a0();
            _objc_release(puVar15);
            _objc_release(puVar24);
            if (puVar16 == (undefined *)0xffffffffffffffff) goto LAB_1058bfb30;
          }
          _objc_release(puVar14);
          _objc_release(puVar13);
        }
        _objc_release(puVar12);
        puVar20 = puVar20 + 1;
      } while (puVar7 != puVar20);
      puVar7 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    puVar7 = puVar11;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = puVar11;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010c246cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(puVar12);
      func_0x00010bf0a0e0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
      _objc_retain(puVar12);
      puVar7 = puVar12;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar7 != (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar12);
          }
          uVar21 = *(undefined8 *)((long)puVar24 * 8);
          uVar17 = uVar21;
          func_0x00010c241220(uVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          if (puVar13 != (undefined *)0x0) {
            uVar17 = uVar21;
            func_0x00010b5f7a24(uVar21);
            _objc_retainAutoreleasedReturnValue();
            if (*(char *)(param_5 + 0x10) == '\x01') {
              uVar18 = uVar21;
              func_0x00010c23ff80(uVar21);
              _objc_retainAutoreleasedReturnValue();
              uVar23 = uVar18;
              func_0x000107e649e4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar18);
            }
            else {
              uVar23 = 0;
            }
            puVar14 = PTR_PTR_1126bfaf0;
            _objc_alloc(PTR_PTR_1126bfaf0);
            func_0x00010c241220(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51c80(puVar13);
            uVar18 = uVar8;
            func_0x00010c26f320(uVar17);
            func_0x00010c047bc0(uVar8,param_2,uVar18,puVar14);
            _objc_release(uVar21);
            func_0x00010befa120(puVar20);
            _objc_release(puVar14);
            _objc_release(uVar23);
            _objc_release(uVar17);
          }
          _objc_release(puVar13);
          puVar24 = puVar24 + 1;
        } while (puVar7 != puVar24);
        puVar7 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      puVar7 = PTR_PTR_1126af5d0;
      puVar24 = puVar20;
      func_0x00010bf51e00(puVar20);
      func_0x00010c2619e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      _objc_release(puVar20);
      _objc_release(puVar12);
    }
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 1058bfeb0; end: 1058bfedf; -[SCMemoriesLocationRepositoryImpl .cxx_destruct] */

void FUN_1058bfeb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058bfee0; end: 1058bff53; -[SCMemoriesPlaybackRepositoryImpl initWithDbManager:] */

undefined1 * FUN_1058bfee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eab88;
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



/* Entry: 1058bff54; end: 1058c0083; -[SCMemoriesPlaybackRepositoryImpl fetchPlaybackItemsForMultiSnap:] */

void FUN_1058bff54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11d060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25ffc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058c0084; end: 1058c011f;  */

void FUN_1058c0084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bfa9460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058c0120; end: 1058c0447; -[SCMemoriesPlaybackRepositoryImpl fetchPlaybackItemsForMultiSnapSync:] */

void FUN_1058c0120(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (puVar5 == (undefined *)0x4) {
      puVar7 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf529e0();
      puVar8 = PTR_PTR_1126af5d0;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar10 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      else {
        func_0x00010bf529e0(puVar7);
        func_0x00010bf0a0e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar7);
        puVar8 = puVar7;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar7);
            }
            uVar2 = *(undefined8 *)((long)puVar10 * 8);
            puVar6 = PTR_PTR_1126bfaf8;
            _objc_alloc(PTR_PTR_1126bfaf8);
            func_0x00010c241220(uVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c047a40(puVar6);
            func_0x00010befa120(puVar5);
            _objc_release(puVar6);
            _objc_release(uVar2);
            puVar10 = puVar10 + 1;
          } while (puVar8 != puVar10);
          puVar8 = puVar7;
          func_0x00010bf52a60();
        }
        _objc_release(puVar7);
        puVar8 = PTR_PTR_1126af5d0;
        puVar10 = puVar5;
        func_0x00010bf51e00(puVar5);
        func_0x00010c2619e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar5);
      }
      goto LAB_1058c03ec;
    }
  }
  puVar8 = PTR_PTR_1126af5d0;
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
LAB_1058c03ec:
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1058c0448; end: 1058c0453; -[SCMemoriesPlaybackRepositoryImpl .cxx_destruct] */

void FUN_1058c0448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c0454; end: 1058c054f; -[SCCloudSyncNetworker initWithRequestManager:networkConnectivityMonitor:userTrackedLogger:headerProvider:] */

undefined1 *
FUN_1058c0454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eab90;
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



/* Entry: 1058c0550; end: 1058c067f; -[SCCloudSyncNetworker networkResumeableDownloadRequestWithUrl:key:SOJURequest:isSmallFile:additionalHTTPHeaders:contexts:trackingInfo:] */

void FUN_1058c0550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000108016a44();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfb00;
  _objc_alloc(PTR_PTR_1126bfb00);
  func_0x00010bde4a60(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar1 = 3;
  if (param_6 != 0) {
    uVar1 = 4;
  }
  func_0x00010c057880(puVar2,param_2,param_3,param_1,param_4,param_8,uVar1,1,param_9,param_5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058c0680; end: 1058c075b; -[SCCloudSyncNetworker submitDownloadRequest:callbackQueue:completionBlock:] */

void FUN_1058c0680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058c075c;
  puStack_40 = &UNK_1108bc7f0;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c25f5e0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1058c075c; end: 1058c077b;  */

void FUN_1058c075c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 1058c077c; end: 1058c0857; -[SCCloudSyncNetworker submitResumeableRequest:callbackQueue:completionBlock:] */

void FUN_1058c077c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058c0858;
  puStack_40 = &UNK_1108bc7f0;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c25f5e0(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1058c0858; end: 1058c0877;  */

void FUN_1058c0858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 1058c0878; end: 1058c0b23; -[SCCloudSyncNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:successBlock:failureBlock:] */

void FUN_1058c0878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  puVar1 = param_5;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_5 = puVar3;
  }
  puVar3 = PTR_PTR_1126b4960;
  uVar5 = param_4;
  func_0x000108016a44(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bde4a60(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58700(puVar3,param_2,param_3,uVar5,0,lVar4,param_5,param_6,3,1,param_7,2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = param_10;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1058c0b24;
  puStack_78 = &UNK_1108ab730;
  uStack_70 = param_9;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1058c0b40;
  puStack_a0 = &UNK_1108a0d30;
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c25f660(uVar5,param_2,puVar3,param_8,param_8,&puStack_90,&puStack_b8);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c0b24; end: 1058c0b5b;  */

void FUN_1058c0b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c0b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1058c0b5c; end: 1058c0dd3; -[SCCloudSyncNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:completionBlock:] */

void FUN_1058c0b5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  puVar1 = param_5;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_5 = puVar3;
  }
  puVar3 = PTR_PTR_1126b4960;
  uVar5 = param_4;
  func_0x000108016a44(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bde4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58700(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(lVar4);
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126bfb08;
  _objc_opt_class(PTR_PTR_1126bfb08);
  _objc_opt_isKindOfClass(param_7,puVar1);
  _objc_release(param_7);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  func_0x00010c25f5e0(uVar5);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(param_9);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c0dd4; end: 1058c0efb;  */

void FUN_1058c0dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_4;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        puVar1 = PTR_PTR_1126bbf20;
        func_0x00010bdc1920(PTR_PTR_1126bbf20);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0f3f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(puVar1);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_3,puVar3,param_5);
  }
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058c0efc; end: 1058c12cf; -[SCCloudSyncNetworker submitPostRequestToEndpoint:SOJURequest:additionalHTTPHeaders:key:contexts:requestParser:authenticated:shouldTrace:callbackQueue:successBlock:failureBlock:] */

void FUN_1058c0efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058c12d0;
  puStack_88 = &UNK_1108ab6d0;
  _objc_retain(param_13);
  uStack_80 = param_13;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  ppuVar1 = &puStack_a0;
  _objc_retainBlock();
  puVar2 = param_6;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar2);
    param_6 = puVar3;
  }
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    puVar3 = param_5;
    func_0x00010c0d3c80(param_5);
  }
  puVar2 = PTR_PTR_1126bfb10;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf48f60();
  func_0x00010c25d340(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e0a2d8);
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b4960;
  uVar6 = param_3;
  func_0x00010801b7a8(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x000108016a44(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar5 = param_1;
  func_0x00010bde4a60(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58740(puVar2,param_2,uVar6,uVar4,0,lVar5,param_6,param_7,5,1,param_8,3,1,
                      (undefined1)param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  func_0x00010c201480(puVar2,param_2,param_9._1_1_);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1058c12e4;
  puStack_b0 = &UNK_1108ab730;
  uStack_a8 = param_12;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1058c1300;
  puStack_e8 = &UNK_1108ac1f8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = param_3;
  lStack_d8 = param_1;
  ppuStack_d0 = ppuVar1;
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  _objc_retain(param_12);
  func_0x00010c25f660(uVar6,param_2,puVar2,param_11,param_11,&puStack_c8,&puStack_100);
  _objc_release(param_11);
  _objc_release(uVar6);
  _objc_release(uStack_e0);
  _objc_release(ppuStack_d0);
  _objc_release(uStack_a8);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(param_12);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1058c12d0; end: 1058c12ff;  */

void FUN_1058c12d0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c12dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1058c1300; end: 1058c14af;  */

void FUN_1058c1300(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = param_3;
    func_0x00010c252ee0();
    if (puVar1 == (undefined *)0xc8) {
      puVar1 = param_4;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf9c200(param_3);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = (undefined *)0x3;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x18);
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110e0a2f8,
                          &PTR____CFConstantStringClassReference_110daafd8,puVar4,puVar9);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (puVar1 == (undefined *)0x0) {
        _objc_release(puVar2);
      }
      _objc_release(puVar1);
    }
    puVar1 = param_4;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(param_6);
    _objc_retain(puVar9);
    _objc_retain(puVar1);
    _objc_opt_new();
  }
  else {
    _objc_retain(param_6);
    _objc_retain(puVar9);
    _objc_retain(puVar1);
    func_0x00010c0d3c80();
    puVar2 = param_5;
  }
  puVar3 = PTR_PTR_1126bfb10;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48f60();
  func_0x00010c25d340(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b4960;
  puVar6 = puVar1;
  func_0x00010801b7a8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010bde4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar7;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf58160(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c201480(puVar4);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c25f660(uVar5);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 1058c14b0; end: 1058c1787; -[SCCloudSyncNetworker submitPostRequestToEndpoint:proto:additionalHTTPHeaders:callbackQueue:successBlock:failureBlock:] */

void FUN_1058c14b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_5 == (undefined *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_opt_new();
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0d3c80();
    puVar1 = param_5;
  }
  puVar3 = PTR_PTR_1126bfb10;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf48f60();
  func_0x00010c25d340(puVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e0a2d8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b4960;
  uVar7 = param_3;
  func_0x00010801b7a8(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bde4a60(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = lVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf58160(puVar6,param_2,uVar7,param_4,lVar4,puVar3,
                      &PTR__OBJC_CLASS___NSConstantArray_11117efb8,5,3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  func_0x00010c201480(puVar6,param_2,0);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1058c1788;
  puStack_70 = &UNK_1108ab730;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1058c17a4;
  puStack_98 = &UNK_1108a0d30;
  uStack_90 = param_8;
  uStack_68 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c25f660(uVar7,param_2,puVar6,param_6,param_6,&puStack_88,&puStack_b0);
  _objc_release(param_6);
  _objc_release(uVar7);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058c1788; end: 1058c17bf;  */

void FUN_1058c1788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c179c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1058c17c0; end: 1058c1a3b; -[SCCloudSyncNetworker submitPutRequestToURL:uploadData:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:] */

void FUN_1058c17c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  puVar1 = param_6;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_6 = puVar3;
  }
  puVar3 = PTR_PTR_1126b4960;
  lVar4 = param_1;
  func_0x00010bde4a60(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar3,param_2,param_3,0,param_4,lVar4,param_6,param_7,2,1,2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = param_10;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1058c1a3c;
  puStack_70 = &UNK_1108ab730;
  uStack_68 = param_9;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1058c1a58;
  puStack_98 = &UNK_1108a0d30;
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c25f660(uVar5,param_2,puVar3,param_8,param_8,&puStack_88,&puStack_b0);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c1a3c; end: 1058c1a73;  */

void FUN_1058c1a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c1a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1058c1a74; end: 1058c1d0f; -[SCCloudSyncNetworker submitPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:progressBlock:successBlock:failureBlock:] */

void FUN_1058c1a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  puVar1 = param_6;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_6 = puVar3;
  }
  puVar3 = PTR_PTR_1126b4960;
  lVar4 = param_1;
  func_0x00010bde4a60(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf59d20(puVar3,param_2,param_3,0,param_4,lVar4,param_6,param_7,2,1,2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar4);
  if (param_9 != 0) {
    func_0x00010c0d0d80(puVar3,param_2,param_9);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = param_11;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1058c1d10;
  puStack_78 = &UNK_1108ab730;
  uStack_70 = param_10;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1058c1d2c;
  puStack_a0 = &UNK_1108a0d30;
  _objc_retain(param_11);
  _objc_retain(param_10);
  func_0x00010c25f660(uVar5,param_2,puVar3,param_8,param_8,&puStack_90,&puStack_b8);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c1d10; end: 1058c1d47;  */

void FUN_1058c1d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c1d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1058c1d48; end: 1058c1fbb; -[SCCloudSyncNetworker submitBackgroundPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:] */

void FUN_1058c1d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  puVar1 = param_6;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    param_6 = puVar3;
  }
  puVar3 = PTR_PTR_1126b4960;
  lVar4 = param_1;
  func_0x00010bde4a60(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54bc0(puVar3,param_2,param_3,0,param_4,lVar4,param_6,param_7,4,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = param_10;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1058c1fbc;
  puStack_70 = &UNK_1108ab730;
  uStack_68 = param_9;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1058c1fd8;
  puStack_98 = &UNK_1108a0d30;
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c25f660(uVar5,param_2,puVar3,param_8,param_8,&puStack_88,&puStack_b0);
  _objc_release(param_8);
  _objc_release(uVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c1fbc; end: 1058c1ff3;  */

void FUN_1058c1fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058c1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1058c1ff4; end: 1058c205f; -[SCCloudSyncNetworker _configureAdditionalHTTPHeadersIfNeeded:] */

void FUN_1058c1ff4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfe02e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058c2060; end: 1058c20e7; -[SCCloudSyncNetworker .cxx_destruct] */

void FUN_1058c2060(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c20e8; end: 1058c22f7; -[SCMemoriesNetworkerServiceProvider _buildNetworker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c20e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272b978;
    _objc_loadWeakRetained(lVar8);
  }
  lVar1 = lVar8;
  func_0x00010bfdfdc0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar2 = PTR_PTR_1126bfb20;
  _objc_alloc(PTR_PTR_1126bfb20);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272b968;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bf10b80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272b970;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010c0d79a0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_1058c22f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f300(puVar2,param_2,lVar3,lVar4,lVar6,lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  puVar7 = PTR_PTR_1126bfb28;
  _objc_alloc(PTR_PTR_1126bfb28);
  lVar3 = param_1;
  FUN_1058c22f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11272b96c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c273160(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f700(puVar7,param_2,puVar2,lVar9,lVar4,lVar1);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058c22f8; end: 1058c231b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c22f8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b974);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058c231c; end: 1058c2383; -[SCMemoriesNetworkerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c231c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b978);
  _objc_destroyWeak(param_1 + _DAT_11272b974);
  _objc_destroyWeak(param_1 + _DAT_11272b970);
  _objc_destroyWeak(param_1 + _DAT_11272b96c);
  _objc_destroyWeak(param_1 + _DAT_11272b968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b964);
  return;
}



/* Entry: 1058c2384; end: 1058c257b; +[SCMemoriesOpportunisticRetranscodeDatabase schema] */

void FUN_1058c2384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f30618b);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f306808);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR_PTR_1126b8500;
  puStack_68 = puVar2;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f306a92);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar4,param_2,1,2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar8,param_2,2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar8 = *(undefined **)(puVar7 + 8);
    _objc_retain(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1058c257c; end: 1058c25a3; -[SCMemoriesOpportunisticRetranscodeDatabase getConn] */

void FUN_1058c257c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058c25a4; end: 1058c262b; -[SCMemoriesOpportunisticRetranscodeDatabase initWithSqliteConnection:] */

undefined1 * FUN_1058c25a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eab98;
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



/* Entry: 1058c262c; end: 1058c26af; -[SCMemoriesOpportunisticRetranscodeDatabase .cxx_destruct] */

void FUN_1058c262c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c26b0; end: 1058c26bb; -[SCMemoriesOpportunisticRetranscodeDatabase .cxx_construct] */

void FUN_1058c26b0(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1058c26bc; end: 1058c281f;  */

void FUN_1058c26bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc0040,0x84);
      func_0x0001005fcac0();
      func_0x0001005fcb64(lVar1,FUN_1058c2820);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1058c2764;
    }
  }
  lVar1 = 0;
LAB_1058c2764:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058c2820; end: 1058c28af;  */

void FUN_1058c2820(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bfb30;
  _objc_alloc(PTR_PTR_1126bfb30);
  uVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  func_0x0001005ff748(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1058c3240(puVar1,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058c28b0; end: 1058c29d7;  */

void FUN_1058c28b0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc00c5,0x7a);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_1058c29d8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058c29d8; end: 1058c2a73;  */

void FUN_1058c29d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfb38;
  _objc_alloc(PTR_PTR_1126bfb38);
  uVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  func_0x00010b5ef2a0(param_1,2);
  FUN_1058c341c(puVar1,uVar2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058c2a74; end: 1058c2bf3;  */

void FUN_1058c2a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x20;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddc0140,0xc9);
      iStack_44 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eeb94(lVar2,&iStack_44,param_4);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058c2bf4; end: 1058c2d5f;  */

void FUN_1058c2bf4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10ddc020a,0x8c);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_4);
      func_0x00010bccb848(param_1,lVar1,2);
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058c2d60; end: 1058c2edf;  */

void FUN_1058c2d60(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar4,&UNK_10ddc0297,0x3e,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      func_0x00010b5ef0d0(plStack_38);
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058c2ee0; end: 1058c2f03; -[SCTranscodeRecords copyWithZone:] */

undefined8 FUN_1058c2ee0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058c2f04; end: 1058c2f8f; -[SCTranscodeRecords hash] */

long * FUN_1058c2f04(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  plVar2 = &lStack_48;
  func_0x000100505190(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
LAB_1058c3030:
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1058c303c;
    plVar5 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar3 & 1) != 0) && ((plVar2[1] == param_3[1] && (plVar2[3] == param_3[3])))) {
      lVar4 = plVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        plVar5 = (long *)plVar2[4];
        if (plVar5 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_1058c303c;
        }
        goto LAB_1058c3030;
      }
    }
    plVar5 = (long *)0x0;
  }
LAB_1058c303c:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1058c2f90; end: 1058c3057; -[SCTranscodeRecords isEqual:] */

long FUN_1058c2f90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1058c3030:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1058c303c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1058c303c;
        }
        goto LAB_1058c3030;
      }
    }
    lVar3 = 0;
  }
LAB_1058c303c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1058c3058; end: 1058c3087; -[SCTranscodeRecords .cxx_destruct] */

void FUN_1058c3058(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1058c3088; end: 1058c30ab; -[SCRetranscodeRequests copyWithZone:] */

undefined8 FUN_1058c3088(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058c30ac; end: 1058c314f; -[SCRetranscodeRequests hash] */

long * FUN_1058c30ac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar1;
  if (-1 < lVar1) {
    lStack_48 = lVar1;
  }
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  plVar4 = &lStack_48;
  uStack_40 = uVar3;
  func_0x000100505190(plVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_1058c320c:
    plVar7 = (long *)0x1;
  }
  else {
    plVar7 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1058c3218;
    plVar7 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar7);
    if ((((ulong)plVar5 & 1) != 0) && ((plVar4[1] == param_3[1] && (plVar4[3] == param_3[3])))) {
      dVar9 = ABS((double)plVar4[4] - (double)param_3[4]);
      dVar8 = ABS((double)plVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        plVar7 = (long *)plVar4[2];
        if (plVar7 != (long *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1058c3218;
        }
        goto LAB_1058c320c;
      }
    }
    plVar7 = (long *)0x0;
  }
LAB_1058c3218:
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 1058c3150; end: 1058c3233; -[SCRetranscodeRequests isEqual:] */

long FUN_1058c3150(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1058c320c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1058c3218;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1058c3218;
        }
        goto LAB_1058c320c;
      }
    }
    lVar4 = 0;
  }
LAB_1058c3218:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1058c3234; end: 1058c323f; -[SCRetranscodeRequests .cxx_destruct] */

void FUN_1058c3234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1058c3240; end: 1058c32cb;  */

undefined1 * FUN_1058c3240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126eabb0;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1058c32cc; end: 1058c32ef; -[SCRecordForAssetIdentifier copyWithZone:] */

undefined8 FUN_1058c32cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058c32f0; end: 1058c3357; -[SCRecordForAssetIdentifier hash] */

long * FUN_1058c32f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1058c33dc;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_1058c33dc;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1058c33dc;
    }
  }
  plVar5 = (long *)0x1;
LAB_1058c33dc:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1058c3358; end: 1058c33f7; -[SCRecordForAssetIdentifier isEqual:] */

long FUN_1058c3358(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1058c33dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1058c33dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1058c33dc;
    }
  }
  lVar3 = 1;
LAB_1058c33dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1058c33f8; end: 1058c340f;  */

undefined8 FUN_1058c33f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1058c3410; end: 1058c341b; -[SCRecordForAssetIdentifier .cxx_destruct] */

void FUN_1058c3410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


