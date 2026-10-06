/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10856b3b4; end: 10856b573; -[SCVideoTranscodingImageProcessorProvider _createUpgradedIppTimedProcessorWithSourceSize:targetSize:] */

void FUN_10856b3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(long *)(param_5 + 8) == 0) {
    _objc_retain(0);
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_5 + 8) + 8);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      bVar1 = false;
      lVar6 = *(long *)(lVar4 + 0x10);
      goto LAB_10856b408;
    }
  }
  lVar6 = 0;
  bVar1 = true;
LAB_10856b408:
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    if (bVar1) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar4 + 8);
    }
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010911c750(lVar6,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126da128;
    _objc_alloc(PTR_PTR_1126da128);
    if (lVar2 == 0) {
      _objc_retain(0);
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
    }
    _objc_retain(uVar8);
    puVar3 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    if (bVar1) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar4 + 0x10);
    }
    _objc_retain(uVar9);
    func_0x00010c01e1a0(param_3,param_4,param_1,param_2,puVar5);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10856b574; end: 10856bbd3; -[SCVideoTranscodingImageProcessorProvider _createTimedImageProcessorWithVideoSourceSize:targetSize:orientation:overlayImageDataHandler:] */

void FUN_10856b574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_8);
  if (*(long *)(param_5 + 8) == 0) {
    _objc_retain(0);
    lVar10 = 0;
LAB_10856bb80:
    lVar6 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_5 + 8) + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_10856bb80;
    lVar6 = *(long *)(lVar10 + 8);
  }
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010911c884(lVar6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar10);
  lVar10 = lVar1;
  func_0x00010bf529e0();
  if (lVar10 != 1) {
    puVar12 = (undefined *)0x0;
    goto LAB_10856bb38;
  }
  lVar10 = lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar10 + 0x20);
  }
  _objc_retain(lVar6);
  _objc_release(lVar10);
  if (*(long *)(param_5 + 8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_5 + 8) + 0x10);
  }
  _objc_retain(lVar10);
  lVar14 = lVar10;
  func_0x00010bf529e0();
  if (lVar14 == 1) {
    _objc_release(lVar10);
LAB_10856b6c8:
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    if (*(long *)(param_5 + 8) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(param_5 + 8) + 0x10);
    }
    uStack_b0 = uVar15;
    puStack_a8 = puVar16;
    uStack_a0 = uVar11;
    _objc_retain(lVar10);
    lVar14 = lVar10;
    func_0x00010bf529e0();
    _objc_release(lVar10);
    if (lVar14 == 1) {
      puStack_f0 = &uStack_e8;
      uStack_e8 = 0;
      uStack_d8 = 0x3810000000;
      pcStack_d0 = "";
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10856bbd4;
      puStack_f8 = &UNK_110a55458;
      puStack_e0 = puStack_f0;
      uStack_c8 = uVar15;
      puStack_c0 = puVar16;
      uStack_b8 = uVar11;
      func_0x00010bf97e80(lVar6);
      uStack_158 = puStack_e0[5];
      uStack_160 = puStack_e0[4];
      uStack_150 = puStack_e0[6];
      uStack_190 = uVar15;
      puStack_188 = puVar16;
      uStack_180 = uVar11;
      _CMTimeRangeMake(&uStack_140,&uStack_190,&uStack_160);
      if (*(long *)(param_5 + 8) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x10);
      }
      _objc_retain(uVar11);
      uVar15 = uVar11;
      func_0x00010bfb1920(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puStack_188 = puStack_138;
      uStack_190 = uStack_140;
      pcStack_178 = pcStack_128;
      uStack_180 = uStack_130;
      puStack_168 = puStack_118;
      uStack_170 = uStack_120;
      func_0x00010be1ba60(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 != 0) {
        func_0x00010befa120(puVar3);
        _objc_release(param_5);
        _objc_release(uVar15);
        __Block_object_dispose(&uStack_e8,8);
        goto LAB_10856ba78;
      }
      puStack_188 = puStack_138;
      uStack_190 = uStack_140;
      pcStack_178 = pcStack_128;
      uStack_180 = uStack_130;
      puStack_168 = puStack_118;
      uStack_170 = uStack_120;
      puVar16 = &uStack_190;
      FUN_10856bc88(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar16);
      _objc_release(uVar15);
      __Block_object_dispose(&uStack_e8,8);
LAB_10856bb20:
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar13 = 0;
      bVar9 = false;
      while( true ) {
        if (*(long *)(param_5 + 8) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(ulong *)(*(long *)(param_5 + 8) + 0x10);
        }
        _objc_retain(uVar7);
        uVar4 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
        if (uVar4 <= uVar13) break;
        lVar10 = lVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)(param_5 + 8) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x10);
        }
        _objc_retain(uVar11);
        uVar15 = uVar11;
        func_0x00010c0dfd40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (lVar10 == 0) {
          _objc_retain(0);
LAB_10856b930:
          lVar14 = 0;
          uStack_140 = 0;
          puStack_138 = (undefined8 *)0x0;
          uStack_130 = 0;
        }
        else {
          lVar14 = *(long *)(lVar10 + 0x20);
          _objc_retain(lVar14);
          if (lVar14 == 0) goto LAB_10856b930;
          func_0x00010bdc1140(&uStack_140,lVar14);
        }
        puStack_188 = puStack_a8;
        uStack_190 = uStack_b0;
        uStack_180 = uStack_a0;
        _CMTimeRangeMake(&uStack_e8,&uStack_190,&uStack_140);
        _objc_release(lVar14);
        puStack_138 = puStack_e0;
        uStack_140 = uStack_e8;
        pcStack_128 = pcStack_d0;
        uStack_130 = uStack_d8;
        puStack_118 = puStack_c0;
        uStack_120 = uStack_c8;
        lVar14 = param_5;
        func_0x00010be1ba60(param_1,param_2,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
          puStack_138 = puStack_e0;
          uStack_140 = uStack_e8;
          pcStack_128 = pcStack_d0;
          uStack_130 = uStack_d8;
          puStack_118 = puStack_c0;
          uStack_120 = uStack_c8;
          puVar16 = &uStack_140;
          FUN_10856bc88(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar16);
          if (lVar10 == 0) goto LAB_10856ba18;
LAB_10856b9bc:
          lVar8 = *(long *)(lVar10 + 0x20);
          _objc_retain(lVar8);
          if (lVar8 == 0) goto LAB_10856ba20;
          func_0x00010bdc1140(&uStack_140,lVar8);
        }
        else {
          func_0x00010befa120(puVar3);
          bVar9 = true;
          if (lVar10 != 0) goto LAB_10856b9bc;
LAB_10856ba18:
          _objc_retain(0);
LAB_10856ba20:
          lVar8 = 0;
          uStack_140 = 0;
          puStack_138 = (undefined8 *)0x0;
          uStack_130 = 0;
        }
        puStack_188 = puStack_a8;
        uStack_190 = uStack_b0;
        uStack_180 = uStack_a0;
        _CMTimeAdd(&uStack_b0,&uStack_190,&uStack_140);
        _objc_release(lVar8);
        _objc_release(lVar14);
        _objc_release(uVar15);
        _objc_release(lVar10);
        uVar13 = uVar13 + 1;
      }
      if (!bVar9) goto LAB_10856bb20;
LAB_10856ba78:
      puVar12 = PTR_PTR_1126da130;
      _objc_alloc(PTR_PTR_1126da130);
      puVar5 = PTR_PTR_1126bf4d0;
      func_0x00010c22bec0(PTR_PTR_1126bf4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01cd20(param_3,param_4,puVar12);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  else {
    lVar14 = lVar6;
    func_0x00010bf529e0();
    if (*(long *)(param_5 + 8) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_5 + 8) + 0x10);
    }
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    _objc_release(lVar10);
    if (lVar14 == lVar2) goto LAB_10856b6c8;
    puVar12 = (undefined *)0x0;
  }
  _objc_release(lVar6);
LAB_10856bb38:
  _objc_release(lVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10856bbd4; end: 10856bc87;  */

void FUN_10856bbd4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    _objc_retain(0);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      func_0x00010bdc1140(&uStack_38,lVar1);
      goto LAB_10856bc20;
    }
  }
  lVar1 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
LAB_10856bc20:
  _objc_release(lVar1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uStack_68 = *(undefined8 *)(lVar1 + 0x28);
  uStack_70 = *(undefined8 *)(lVar1 + 0x20);
  uStack_60 = *(undefined8 *)(lVar1 + 0x30);
  uStack_88 = uStack_30;
  uStack_90 = uStack_38;
  uStack_80 = uStack_28;
  _CMTimeAdd(&uStack_50,&uStack_70,&uStack_90);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *(undefined8 *)(lVar1 + 0x20) = uStack_50;
  *(undefined8 *)(lVar1 + 0x30) = uStack_40;
  return;
}



/* Entry: 10856bc88; end: 10856be0f;  */

void FUN_10856bc88(double *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  double *pdVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  undefined8 in_d3;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dStack_360;
  double *pdStack_358;
  double dStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  double *pdStack_328;
  double dStack_320;
  code *pcStack_318;
  double dStack_310;
  double dStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  double *pdStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  double *pdStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_210;
  double *pdStack_208;
  double dStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double *pdStack_1d8;
  double dStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  double *pdStack_1a8;
  double dStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR_PTR_1126bf6b8;
  _objc_alloc();
  dStack_88 = param_1[1];
  dStack_90 = *param_1;
  dStack_78 = param_1[3];
  dStack_80 = param_1[2];
  dStack_68 = param_1[5];
  dStack_70 = param_1[4];
  puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126da0a0;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar22 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar25 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar21 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  pdVar7 = &dStack_90;
  lVar8 = 2;
  puVar9 = puVar3;
  dStack_c0 = dVar22;
  uStack_b0 = uVar25;
  uStack_a0 = uVar21;
  dStack_90 = dVar22;
  dStack_88 = (double)uStack_b8;
  dStack_80 = (double)uVar25;
  dStack_78 = (double)uStack_a8;
  dStack_70 = (double)uVar21;
  dStack_68 = (double)uStack_98;
  func_0x00010b7432f8(puVar13,puVar20,pdVar7,&dStack_c0,2,puVar3,puVar5,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(lVar8);
  _objc_retain(puVar9);
  pdStack_1d8 = *(double **)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar10 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  pcStack_1c8 = *(code **)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar26 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_1b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_1c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_1e0 = dVar10;
  dStack_1d0 = dVar26;
  dStack_1b0 = dVar10;
  pdStack_1a8 = pdStack_1d8;
  dStack_1a0 = dVar26;
  pcStack_198 = pcStack_1c8;
  uStack_190 = uStack_1c0;
  uStack_188 = uStack_1b8;
  if (lVar8 == 0) {
    _objc_retain(0);
    lVar11 = 0;
LAB_10856bfa8:
    lVar14 = 0;
  }
  else {
    lVar11 = *(long *)(lVar8 + 8);
    _objc_retain(lVar11);
    if (lVar11 == 0) goto LAB_10856bfa8;
    lVar14 = *(long *)(lVar11 + 0xa0);
  }
  _objc_retain(lVar14);
  _objc_release(lVar14);
  _objc_release(lVar11);
  if (lVar14 != 0) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar31 = dVar26;
    if (lVar8 == 0) {
      _objc_retain(0);
      _objc_release(0);
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lVar11 = 0;
      lVar14 = 0;
      dVar29 = 0.0;
LAB_10856bfe8:
      lVar19 = 0;
      pcStack_1f8 = (code *)0x0;
      dStack_200 = 0.0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      pdStack_208 = (double *)0x0;
      dStack_210 = 0.0;
    }
    else {
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) {
        dVar29 = 0.0;
      }
      else {
        dVar23 = *(double *)(lVar11 + 0xa8);
        dVar29 = 0.0;
        if (((dVar23 != 0.0) && (dVar31 = 0.0, dVar29 = dVar10, dVar23 != INFINITY)) &&
           (dVar29 = dVar26 * dVar23, dVar31 = dVar26, dVar10 <= dVar26 * dVar23)) {
          dVar29 = dVar10;
          dVar31 = dVar10 / dVar23;
        }
      }
      _objc_release(lVar11);
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar14 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(lVar14 + 0xa0);
      }
      _objc_retain(lVar19);
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar19 == 0) goto LAB_10856bfe8;
      if (lVar11 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar11 + 0xa8);
      }
      func_0x00010bf27a80(&dStack_210,uVar24,dVar10,dVar26,dVar29,dVar31,lVar19);
    }
    pdStack_1a8 = pdStack_208;
    dStack_1b0 = dStack_210;
    pcStack_198 = pcStack_1f8;
    dStack_1a0 = dStack_200;
    uStack_188 = uStack_1e8;
    uStack_190 = uStack_1f0;
    _objc_release(lVar11);
    _objc_release(lVar19);
    _objc_release(lVar14);
    if (lVar8 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lVar14 = 0;
      lVar11 = 0;
LAB_10856c0a4:
      lVar19 = 0;
      pcStack_1f8 = (code *)0x0;
      dStack_200 = 0.0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      pdStack_208 = (double *)0x0;
      dStack_210 = 0.0;
    }
    else {
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(lVar11 + 0xa0);
      }
      _objc_retain(lVar19);
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar19 == 0) goto LAB_10856c0a4;
      if (lVar14 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar14 + 0xa8);
      }
      func_0x00010bf27840(&dStack_210,uVar24,dVar10,dVar26,dVar29,dVar31,dVar22,uVar25,lVar19);
    }
    pdStack_1d8 = pdStack_208;
    dStack_1e0 = dStack_210;
    pcStack_1c8 = pcStack_1f8;
    dStack_1d0 = dStack_200;
    uStack_1b8 = uStack_1e8;
    uStack_1c0 = uStack_1f0;
    _objc_release(lVar14);
    _objc_release(lVar19);
    _objc_release(lVar11);
  }
  pdStack_208 = &dStack_210;
  dStack_210 = 0.0;
  dStack_200 = 1.02270250269256e-312;
  pcStack_1f8 = FUN_10856cdc8;
  uStack_1f0 = 0x10856cdd8;
  uStack_1e8 = 0;
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x3032000000;
  pcStack_228 = FUN_10856cdc8;
  uStack_220 = 0x10856cdd8;
  uStack_218 = 0;
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x3032000000;
  pcStack_258 = FUN_10856cdc8;
  uStack_250 = 0x10856cdd8;
  uStack_248 = 0;
  puVar13 = puVar20;
  func_0x00010be3eec0();
  if (lVar8 == 0) {
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    lVar11 = 0;
LAB_10856cb78:
    uVar24 = 0;
LAB_10856c3d0:
    _objc_retain(uVar24);
    uVar27 = uVar24;
    func_0x00010bfd94e0();
    _objc_release(uVar24);
    _objc_release(lVar11);
    if ((int)uVar27 == 0) {
      if (lVar8 == 0) {
        _objc_retain(0);
        lVar11 = 0;
LAB_10856cca0:
        lVar14 = 0;
      }
      else {
        lVar11 = *(long *)(lVar8 + 8);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_10856cca0;
        lVar14 = *(long *)(lVar11 + 0x90);
      }
      _objc_retain(lVar14);
      lVar19 = lVar14;
      func_0x00010bf529e0();
      if (lVar19 == 0) {
        if (lVar8 == 0) {
          _objc_retain(0);
          lVar19 = 0;
LAB_10856cd18:
          lVar15 = 0;
        }
        else {
          lVar19 = *(long *)(lVar8 + 8);
          _objc_retain(lVar19);
          if (lVar19 == 0) goto LAB_10856cd18;
          lVar15 = *(long *)(lVar19 + 0x70);
        }
        _objc_retain(lVar15);
        _objc_release(lVar15);
        _objc_release(lVar19);
        _objc_release(lVar14);
        _objc_release(lVar11);
        if (lVar15 == 0) goto LAB_10856c76c;
      }
      else {
        _objc_release(lVar14);
        _objc_release(lVar11);
      }
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar8 == 0) {
        _objc_retain(0);
        lVar11 = 0;
LAB_10856ccf0:
        uVar24 = 0;
      }
      else {
        lVar11 = *(long *)(lVar8 + 8);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_10856ccf0;
        uVar24 = *(undefined8 *)(lVar11 + 0x70);
      }
      _objc_retain(uVar24);
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      dVar10 = pdStack_208[5];
      pdStack_208[5] = (double)puVar13;
      _objc_release(dVar10);
      _objc_release(uVar24);
      _objc_release(lVar11);
      if (lVar8 == 0) {
        _objc_retain(0);
        lVar11 = 0;
LAB_10856cd04:
        uVar24 = 0;
      }
      else {
LAB_10856c738:
        lVar11 = *(long *)(lVar8 + 8);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_10856cd04;
        uVar24 = *(undefined8 *)(lVar11 + 0x90);
      }
      _objc_retain(uVar24);
      lVar14 = puStack_268[5];
      puStack_268[5] = uVar24;
    }
    else {
      lVar11 = 0;
      _dispatch_semaphore_create();
      if (lVar8 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        lVar19 = 0;
        lVar14 = 0;
        uVar24 = 0;
LAB_10856cc88:
        uVar27 = 0;
        uVar28 = 0;
      }
      else {
        lVar14 = *(long *)(lVar8 + 8);
        _objc_retain(lVar14);
        if (lVar14 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = *(undefined8 *)(lVar14 + 0xe0);
        }
        _objc_retain(uVar24);
        lVar19 = *(long *)(lVar8 + 8);
        _objc_retain(lVar19);
        if (lVar19 == 0) goto LAB_10856cc88;
        uVar28 = *(undefined8 *)(lVar19 + 0x118);
        uVar27 = *(undefined8 *)(lVar19 + 0x120);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pdStack_328 = (double *)pdVar7[4];
      dVar10 = pdVar7[3];
      dStack_320 = pdVar7[5];
      dStack_330 = dVar10;
      _CMTimeGetSeconds(&dStack_330);
      func_0x00010c0df720(dVar10 * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        uVar30 = 0;
        lVar15 = 0;
        lVar12 = 0;
        uVar17 = 0;
        uVar18 = 0;
      }
      else {
        lVar12 = *(long *)(lVar8 + 0x10);
        _objc_retain(lVar12);
        if (lVar12 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lVar12 + 0x60);
        }
        _objc_retain(uVar17);
        lVar15 = *(long *)(lVar8 + 8);
        _objc_retain(lVar15);
        if (lVar15 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined8 *)(lVar15 + 0x78);
        }
        uVar30 = *(undefined8 *)(lVar8 + 8);
        _objc_retain(uVar30);
      }
      puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2f8 = 0xc2000000;
      uStack_2f0 = 0x10856ceb4;
      puStack_2e8 = &UNK_110a55428;
      pdStack_2d8 = &dStack_210;
      puStack_2d0 = &uStack_240;
      puStack_2c8 = &uStack_270;
      uStack_2c0 = (char)puVar13;
      _objc_retain(lVar11);
      lStack_2e0 = lVar11;
      func_0x00010bfbfd80(uVar28,uVar27,uVar21,in_d3,uVar18,uVar24);
      _objc_release(uVar30);
      _objc_release(lVar15);
      _objc_release(uVar17);
      _objc_release(lVar12);
      _objc_release(puVar2);
      _objc_release(lVar19);
      _objc_release(uVar24);
      _objc_release(lVar14);
      _dispatch_semaphore_wait(lVar11,0xffffffffffffffff);
      lVar14 = lStack_2e0;
    }
LAB_10856c760:
    _objc_release(lVar14);
    _objc_release(lVar11);
  }
  else {
    lVar11 = *(long *)(lVar8 + 8);
    _objc_retain(lVar11);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0xb) == '\x01')) {
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar14 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar14 + 0xe0);
      }
      _objc_retain(uVar24);
      uVar27 = uVar24;
      func_0x00010bfd94e0();
      _objc_release(uVar24);
      _objc_release(lVar14);
      _objc_release(lVar11);
      if ((int)uVar27 == 0) goto LAB_10856c334;
      if (*(long *)(puVar20 + 8) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(*(long *)(puVar20 + 8) + 0x10);
      }
      _objc_retain(uVar24);
      func_0x00010bfecde0();
      _objc_release(uVar24);
      lVar11 = 0;
      _dispatch_semaphore_create();
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar14 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar14 + 0xe0);
      }
      _objc_retain(uVar24);
      lVar19 = *(long *)(lVar8 + 8);
      _objc_retain(lVar19);
      if (lVar19 == 0) {
        uVar27 = 0;
        uVar28 = 0;
      }
      else {
        uVar28 = *(undefined8 *)(lVar19 + 0x118);
        uVar27 = *(undefined8 *)(lVar19 + 0x120);
      }
      lVar15 = *(long *)(lVar8 + 0x10);
      _objc_retain(lVar15);
      if (lVar15 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(lVar15 + 0x60);
      }
      _objc_retain(uVar18);
      lVar12 = *(long *)(lVar8 + 8);
      _objc_retain(lVar12);
      if (lVar12 == 0) {
        uVar30 = 0;
      }
      else {
        uVar30 = *(undefined8 *)(lVar12 + 0x78);
      }
      uVar17 = *(undefined8 *)(lVar8 + 8);
      _objc_retain(uVar17);
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_10856cde0;
      puStack_2a0 = &UNK_110a55428;
      pdStack_290 = &dStack_210;
      puStack_288 = &uStack_240;
      puStack_280 = &uStack_270;
      uStack_278 = (char)puVar13;
      _objc_retain(lVar11);
      lStack_298 = lVar11;
      func_0x00010bfbfd60(uVar28,uVar27,uVar21,in_d3,uVar30,uVar24);
      _objc_release(uVar17);
      _objc_release(lVar12);
      _objc_release(uVar18);
      _objc_release(lVar15);
      _objc_release(lVar19);
      _objc_release(uVar24);
      _objc_release(lVar14);
      _dispatch_semaphore_wait(lVar11,0xffffffffffffffff);
      lVar14 = lStack_298;
      goto LAB_10856c760;
    }
    _objc_release(lVar11);
LAB_10856c334:
    lVar11 = *(long *)(lVar8 + 8);
    _objc_retain(lVar11);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0xb) == '\x01')) {
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar14 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(lVar14 + 0x90);
      }
      _objc_retain(lVar19);
      lVar15 = lVar19;
      func_0x00010bf529e0();
      if (lVar15 == 0) {
        lVar15 = *(long *)(lVar8 + 8);
        _objc_retain(lVar15);
        if (lVar15 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar15 + 0x70);
        }
        _objc_retain(lVar12);
        _objc_release(lVar12);
        _objc_release(lVar15);
        _objc_release(lVar19);
        _objc_release(lVar14);
        _objc_release(lVar11);
        if (lVar12 == 0) goto LAB_10856c39c;
      }
      else {
        _objc_release(lVar19);
        _objc_release(lVar14);
        _objc_release(lVar11);
      }
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = *(undefined8 *)(lVar11 + 0x70);
      }
      _objc_retain(uVar24);
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      dVar10 = pdStack_208[5];
      pdStack_208[5] = (double)puVar13;
      _objc_release(dVar10);
      _objc_release(uVar24);
      _objc_release(lVar11);
      goto LAB_10856c738;
    }
    _objc_release(lVar11);
LAB_10856c39c:
    lVar11 = *(long *)(lVar8 + 8);
    _objc_retain(lVar11);
    if (lVar11 == 0) {
      _objc_release(0);
LAB_10856c3bc:
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) goto LAB_10856cb78;
      uVar24 = *(undefined8 *)(lVar11 + 0xe0);
      goto LAB_10856c3d0;
    }
    bVar1 = *(byte *)(lVar11 + 0xb);
    _objc_release(lVar11);
    if ((bVar1 & 1) == 0) goto LAB_10856c3bc;
  }
LAB_10856c76c:
  if ((pdStack_208[5] == 0.0) && (puStack_238[5] != 0)) {
    puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    dVar10 = pdStack_208[5];
    pdStack_208[5] = (double)puVar13;
    _objc_release(dVar10);
  }
  if (lVar8 == 0) {
    _objc_retain(0);
LAB_10856cb88:
    _objc_release(0);
  }
  else {
    lVar11 = *(long *)(lVar8 + 0x10);
    _objc_retain(lVar11);
    if (lVar11 == 0) goto LAB_10856cb88;
    bVar1 = *(byte *)(lVar11 + 8);
    _objc_release(lVar11);
    if ((puVar9 != (undefined *)0x0) && ((bVar1 & 1) != 0)) {
      (**(code **)(puVar9 + 0x10))(puVar9,puStack_238[5],0);
    }
  }
  puVar2 = PTR_PTR_1126da138;
  _objc_alloc();
  if (lVar8 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uVar27 = 0;
    uVar24 = 0;
    uVar28 = 0;
  }
  else {
    uVar27 = *(undefined8 *)(lVar8 + 8);
    _objc_retain(uVar27);
    uVar24 = *(undefined8 *)(lVar8 + 8);
    _objc_retain(uVar24);
    uVar28 = *(undefined8 *)(lVar8 + 0x10);
  }
  _objc_retain(uVar28);
  func_0x00010c029da0(dVar22,uVar25,uVar21,in_d3);
  _objc_release(uVar28);
  _objc_release(uVar24);
  _objc_release(uVar27);
  func_0x00010be43ec0();
  uVar25 = 2;
  if ((int)puVar20 != 0) {
    uVar25 = 3;
  }
  if (lVar8 == 0) {
    _objc_retain(0);
    lVar11 = 0;
LAB_10856cbd0:
    uVar16 = 0;
  }
  else {
    lVar11 = *(long *)(lVar8 + 8);
    _objc_retain(lVar11);
    if (lVar11 == 0) goto LAB_10856cbd0;
    uVar16 = *(ulong *)(lVar11 + 0xd0);
  }
  _objc_retain(uVar16);
  uVar6 = uVar16;
  func_0x00010bf529e0();
  _objc_release(uVar16);
  _objc_release(lVar11);
  if (uVar6 < 2) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = PTR_PTR_1126bfba8;
    _objc_alloc();
    if (lVar8 == 0) {
      _objc_retain(0);
      lVar11 = 0;
LAB_10856cbec:
      uVar21 = 0;
    }
    else {
      lVar11 = *(long *)(lVar8 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) goto LAB_10856cbec;
      uVar21 = *(undefined8 *)(lVar11 + 0xd0);
    }
    _objc_retain(uVar21);
    uVar24 = uVar21;
    func_0x00010c0dfd40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      _objc_retain(0);
      lVar14 = 0;
LAB_10856cc00:
      uVar27 = 0;
    }
    else {
      lVar14 = *(long *)(lVar8 + 8);
      _objc_retain(lVar14);
      if (lVar14 == 0) goto LAB_10856cc00;
      uVar27 = *(undefined8 *)(lVar14 + 0xd0);
    }
    _objc_retain(uVar27);
    uVar28 = uVar27;
    func_0x00010c0dfd40(uVar27);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0541c0();
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(lVar14);
    _objc_release(uVar24);
    _objc_release(uVar21);
    _objc_release(lVar11);
  }
  puVar3 = puVar2;
  func_0x00010bfbf560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfbf1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010bf529e0();
  if ((puVar13 == (undefined *)0x0) &&
     (puVar13 = puVar4, func_0x00010bf529e0(), puVar13 == (undefined *)0x0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126bf6b8;
    _objc_alloc(PTR_PTR_1126bf6b8);
    pdStack_328 = (double *)pdVar7[1];
    dStack_330 = *pdVar7;
    pcStack_318 = (code *)pdVar7[3];
    dStack_320 = pdVar7[2];
    dStack_308 = pdVar7[5];
    dStack_310 = pdVar7[4];
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    pdStack_328 = pdStack_1a8;
    dStack_330 = dStack_1b0;
    pcStack_318 = pcStack_198;
    dStack_320 = dStack_1a0;
    dStack_308 = (double)uStack_188;
    dStack_310 = (double)uStack_190;
    pdStack_358 = pdStack_1d8;
    dStack_360 = dStack_1e0;
    pcStack_348 = pcStack_1c8;
    dStack_350 = dStack_1d0;
    uStack_338 = uStack_1b8;
    uStack_340 = uStack_1c0;
    func_0x00010b7432f8(puVar13,puVar5,&dStack_330,&dStack_360,uVar25,puVar3,puVar4,0,puVar20);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar20);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_270,8);
  _objc_release(uStack_248);
  __Block_object_dispose(&uStack_240,8);
  _objc_release(uStack_218);
  __Block_object_dispose(&dStack_210,8);
  _objc_release(uStack_1e8);
  _objc_release(puVar9);
  _objc_release(lVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10856be10; end: 10856cdc7; -[SCVideoTranscodingImageProcessorProvider _generateRenderEffectDAGWithTimeRange:videoSourceSize:targetSize:orientation:configuration:overlayImageDataHandler:] */

void FUN_10856be10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,double *param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  double *pdStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  double *pdStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double *pdStack_138;
  double dStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  dStack_108 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar7 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar21 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_110 = dVar7;
  dStack_100 = dVar21;
  dStack_e0 = dVar7;
  dStack_d8 = dStack_108;
  dStack_d0 = dVar21;
  uStack_c8 = uStack_f8;
  uStack_c0 = uStack_f0;
  uStack_b8 = uStack_e8;
  if (param_9 == 0) {
    _objc_retain(0);
    lVar8 = 0;
LAB_10856bfa8:
    lVar11 = 0;
  }
  else {
    lVar8 = *(long *)(param_9 + 8);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_10856bfa8;
    lVar11 = *(long *)(lVar8 + 0xa0);
  }
  _objc_retain(lVar11);
  _objc_release(lVar11);
  _objc_release(lVar8);
  if (lVar11 != 0) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar26 = dVar21;
    if (param_9 == 0) {
      _objc_retain(0);
      _objc_release(0);
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lVar8 = 0;
      lVar11 = 0;
      dVar24 = 0.0;
LAB_10856bfe8:
      lVar16 = 0;
      pcStack_128 = (code *)0x0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      pdStack_138 = (double *)0x0;
      dStack_140 = 0.0;
    }
    else {
      lVar8 = *(long *)(param_9 + 8);
      _objc_retain(lVar8);
      if (lVar8 == 0) {
        dVar24 = 0.0;
      }
      else {
        dVar19 = *(double *)(lVar8 + 0xa8);
        dVar24 = 0.0;
        if (((dVar19 != 0.0) && (dVar26 = 0.0, dVar24 = dVar7, dVar19 != INFINITY)) &&
           (dVar24 = dVar21 * dVar19, dVar26 = dVar21, dVar7 <= dVar21 * dVar19)) {
          dVar24 = dVar7;
          dVar26 = dVar7 / dVar19;
        }
      }
      _objc_release(lVar8);
      lVar11 = *(long *)(param_9 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(long *)(lVar11 + 0xa0);
      }
      _objc_retain(lVar16);
      lVar8 = *(long *)(param_9 + 8);
      _objc_retain(lVar8);
      if (lVar16 == 0) goto LAB_10856bfe8;
      if (lVar8 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar8 + 0xa8);
      }
      func_0x00010bf27a80(&dStack_140,uVar20,dVar7,dVar21,dVar24,dVar26,lVar16);
    }
    dStack_d8 = (double)pdStack_138;
    dStack_e0 = dStack_140;
    uStack_c8 = pcStack_128;
    dStack_d0 = dStack_130;
    uStack_b8 = uStack_118;
    uStack_c0 = uStack_120;
    _objc_release(lVar8);
    _objc_release(lVar16);
    _objc_release(lVar11);
    if (param_9 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lVar11 = 0;
      lVar8 = 0;
LAB_10856c0a4:
      lVar16 = 0;
      pcStack_128 = (code *)0x0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      pdStack_138 = (double *)0x0;
      dStack_140 = 0.0;
    }
    else {
      lVar8 = *(long *)(param_9 + 8);
      _objc_retain(lVar8);
      if (lVar8 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(long *)(lVar8 + 0xa0);
      }
      _objc_retain(lVar16);
      lVar11 = *(long *)(param_9 + 8);
      _objc_retain(lVar11);
      if (lVar16 == 0) goto LAB_10856c0a4;
      if (lVar11 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar11 + 0xa8);
      }
      func_0x00010bf27840(&dStack_140,uVar20,dVar7,dVar21,dVar24,dVar26,param_1,param_2,lVar16);
    }
    dStack_108 = (double)pdStack_138;
    dStack_110 = dStack_140;
    uStack_f8 = pcStack_128;
    dStack_100 = dStack_130;
    uStack_e8 = uStack_118;
    uStack_f0 = uStack_120;
    _objc_release(lVar11);
    _objc_release(lVar16);
    _objc_release(lVar8);
  }
  pdStack_138 = &dStack_140;
  dStack_140 = 0.0;
  dStack_130 = 1.02270250269256e-312;
  pcStack_128 = FUN_10856cdc8;
  uStack_120 = 0x10856cdd8;
  uStack_118 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_10856cdc8;
  uStack_150 = 0x10856cdd8;
  uStack_148 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_10856cdc8;
  uStack_180 = 0x10856cdd8;
  uStack_178 = 0;
  lVar8 = param_5;
  func_0x00010be3eec0();
  if (param_9 == 0) {
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    lVar11 = 0;
LAB_10856cb78:
    uVar20 = 0;
LAB_10856c3d0:
    _objc_retain(uVar20);
    uVar22 = uVar20;
    func_0x00010bfd94e0();
    _objc_release(uVar20);
    _objc_release(lVar11);
    if ((int)uVar22 == 0) {
      if (param_9 == 0) {
        _objc_retain(0);
        lVar8 = 0;
LAB_10856cca0:
        lVar11 = 0;
      }
      else {
        lVar8 = *(long *)(param_9 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_10856cca0;
        lVar11 = *(long *)(lVar8 + 0x90);
      }
      _objc_retain(lVar11);
      lVar16 = lVar11;
      func_0x00010bf529e0();
      if (lVar16 == 0) {
        if (param_9 == 0) {
          _objc_retain(0);
          lVar16 = 0;
LAB_10856cd18:
          lVar18 = 0;
        }
        else {
          lVar16 = *(long *)(param_9 + 8);
          _objc_retain(lVar16);
          if (lVar16 == 0) goto LAB_10856cd18;
          lVar18 = *(long *)(lVar16 + 0x70);
        }
        _objc_retain(lVar18);
        _objc_release(lVar18);
        _objc_release(lVar16);
        _objc_release(lVar11);
        _objc_release(lVar8);
        if (lVar18 == 0) goto LAB_10856c76c;
      }
      else {
        _objc_release(lVar11);
        _objc_release(lVar8);
      }
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (param_9 == 0) {
        _objc_retain(0);
        lVar8 = 0;
LAB_10856ccf0:
        uVar20 = 0;
      }
      else {
        lVar8 = *(long *)(param_9 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_10856ccf0;
        uVar20 = *(undefined8 *)(lVar8 + 0x70);
      }
      _objc_retain(uVar20);
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      dVar7 = pdStack_138[5];
      pdStack_138[5] = (double)puVar2;
      _objc_release(dVar7);
      _objc_release(uVar20);
      _objc_release(lVar8);
      if (param_9 == 0) {
        _objc_retain(0);
        lVar11 = 0;
LAB_10856cd04:
        uVar20 = 0;
      }
      else {
LAB_10856c738:
        lVar11 = *(long *)(param_9 + 8);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_10856cd04;
        uVar20 = *(undefined8 *)(lVar11 + 0x90);
      }
      _objc_retain(uVar20);
      lVar8 = puStack_198[5];
      puStack_198[5] = uVar20;
    }
    else {
      lVar11 = 0;
      _dispatch_semaphore_create();
      if (param_9 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        lVar18 = 0;
        lVar16 = 0;
        uVar20 = 0;
LAB_10856cc88:
        uVar22 = 0;
        uVar23 = 0;
      }
      else {
        lVar16 = *(long *)(param_9 + 8);
        _objc_retain(lVar16);
        if (lVar16 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(undefined8 *)(lVar16 + 0xe0);
        }
        _objc_retain(uVar20);
        lVar18 = *(long *)(param_9 + 8);
        _objc_retain(lVar18);
        if (lVar18 == 0) goto LAB_10856cc88;
        uVar23 = *(undefined8 *)(lVar18 + 0x118);
        uVar22 = *(undefined8 *)(lVar18 + 0x120);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      dStack_258 = param_7[4];
      dVar7 = param_7[3];
      dStack_250 = param_7[5];
      dStack_260 = dVar7;
      _CMTimeGetSeconds(&dStack_260);
      func_0x00010c0df720(dVar7 * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      if (param_9 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        uVar25 = 0;
        lVar12 = 0;
        lVar9 = 0;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        lVar9 = *(long *)(param_9 + 0x10);
        _objc_retain(lVar9);
        if (lVar9 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar9 + 0x60);
        }
        _objc_retain(uVar14);
        lVar12 = *(long *)(param_9 + 8);
        _objc_retain(lVar12);
        if (lVar12 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar12 + 0x78);
        }
        uVar25 = *(undefined8 *)(param_9 + 8);
        _objc_retain(uVar25);
      }
      puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_228 = 0xc2000000;
      uStack_220 = 0x10856ceb4;
      puStack_218 = &UNK_110a55428;
      pdStack_208 = &dStack_140;
      puStack_200 = &uStack_170;
      puStack_1f8 = &uStack_1a0;
      uStack_1f0 = (char)lVar8;
      _objc_retain(lVar11);
      lStack_210 = lVar11;
      func_0x00010bfbfd80(uVar23,uVar22,param_3,param_4,uVar15,uVar20);
      _objc_release(uVar25);
      _objc_release(lVar12);
      _objc_release(uVar14);
      _objc_release(lVar9);
      _objc_release(puVar2);
      _objc_release(lVar18);
      _objc_release(uVar20);
      _objc_release(lVar16);
      _dispatch_semaphore_wait(lVar11,0xffffffffffffffff);
      lVar8 = lStack_210;
    }
LAB_10856c760:
    _objc_release(lVar8);
    _objc_release(lVar11);
  }
  else {
    lVar11 = *(long *)(param_9 + 8);
    _objc_retain(lVar11);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0xb) == '\x01')) {
      lVar16 = *(long *)(param_9 + 8);
      _objc_retain(lVar16);
      if (lVar16 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar16 + 0xe0);
      }
      _objc_retain(uVar20);
      uVar22 = uVar20;
      func_0x00010bfd94e0();
      _objc_release(uVar20);
      _objc_release(lVar16);
      _objc_release(lVar11);
      if ((int)uVar22 == 0) goto LAB_10856c334;
      if (*(long *)(param_5 + 8) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(param_5 + 8) + 0x10);
      }
      _objc_retain(uVar20);
      func_0x00010bfecde0();
      _objc_release(uVar20);
      lVar11 = 0;
      _dispatch_semaphore_create();
      lVar16 = *(long *)(param_9 + 8);
      _objc_retain(lVar16);
      if (lVar16 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar16 + 0xe0);
      }
      _objc_retain(uVar20);
      lVar18 = *(long *)(param_9 + 8);
      _objc_retain(lVar18);
      if (lVar18 == 0) {
        uVar22 = 0;
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined8 *)(lVar18 + 0x118);
        uVar22 = *(undefined8 *)(lVar18 + 0x120);
      }
      lVar12 = *(long *)(param_9 + 0x10);
      _objc_retain(lVar12);
      if (lVar12 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar12 + 0x60);
      }
      _objc_retain(uVar15);
      lVar9 = *(long *)(param_9 + 8);
      _objc_retain(lVar9);
      if (lVar9 == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = *(undefined8 *)(lVar9 + 0x78);
      }
      uVar14 = *(undefined8 *)(param_9 + 8);
      _objc_retain(uVar14);
      puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1e0 = 0xc2000000;
      pcStack_1d8 = FUN_10856cde0;
      puStack_1d0 = &UNK_110a55428;
      pdStack_1c0 = &dStack_140;
      puStack_1b8 = &uStack_170;
      puStack_1b0 = &uStack_1a0;
      uStack_1a8 = (char)lVar8;
      _objc_retain(lVar11);
      lStack_1c8 = lVar11;
      func_0x00010bfbfd60(uVar23,uVar22,param_3,param_4,uVar25,uVar20);
      _objc_release(uVar14);
      _objc_release(lVar9);
      _objc_release(uVar15);
      _objc_release(lVar12);
      _objc_release(lVar18);
      _objc_release(uVar20);
      _objc_release(lVar16);
      _dispatch_semaphore_wait(lVar11,0xffffffffffffffff);
      lVar8 = lStack_1c8;
      goto LAB_10856c760;
    }
    _objc_release(lVar11);
LAB_10856c334:
    lVar11 = *(long *)(param_9 + 8);
    _objc_retain(lVar11);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0xb) == '\x01')) {
      lVar16 = *(long *)(param_9 + 8);
      _objc_retain(lVar16);
      if (lVar16 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(lVar16 + 0x90);
      }
      _objc_retain(lVar18);
      lVar12 = lVar18;
      func_0x00010bf529e0();
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_9 + 8);
        _objc_retain(lVar12);
        if (lVar12 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar12 + 0x70);
        }
        _objc_retain(lVar9);
        _objc_release(lVar9);
        _objc_release(lVar12);
        _objc_release(lVar18);
        _objc_release(lVar16);
        _objc_release(lVar11);
        if (lVar9 == 0) goto LAB_10856c39c;
      }
      else {
        _objc_release(lVar18);
        _objc_release(lVar16);
        _objc_release(lVar11);
      }
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      lVar8 = *(long *)(param_9 + 8);
      _objc_retain(lVar8);
      if (lVar8 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar8 + 0x70);
      }
      _objc_retain(uVar20);
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      dVar7 = pdStack_138[5];
      pdStack_138[5] = (double)puVar2;
      _objc_release(dVar7);
      _objc_release(uVar20);
      _objc_release(lVar8);
      goto LAB_10856c738;
    }
    _objc_release(lVar11);
LAB_10856c39c:
    lVar11 = *(long *)(param_9 + 8);
    _objc_retain(lVar11);
    if (lVar11 == 0) {
      _objc_release(0);
LAB_10856c3bc:
      lVar11 = *(long *)(param_9 + 8);
      _objc_retain(lVar11);
      if (lVar11 == 0) goto LAB_10856cb78;
      uVar20 = *(undefined8 *)(lVar11 + 0xe0);
      goto LAB_10856c3d0;
    }
    bVar1 = *(byte *)(lVar11 + 0xb);
    _objc_release(lVar11);
    if ((bVar1 & 1) == 0) goto LAB_10856c3bc;
  }
LAB_10856c76c:
  if ((pdStack_138[5] == 0.0) && (puStack_168[5] != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    dVar7 = pdStack_138[5];
    pdStack_138[5] = (double)puVar2;
    _objc_release(dVar7);
  }
  if (param_9 == 0) {
    _objc_retain(0);
LAB_10856cb88:
    _objc_release(0);
  }
  else {
    lVar8 = *(long *)(param_9 + 0x10);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_10856cb88;
    bVar1 = *(byte *)(lVar8 + 8);
    _objc_release(lVar8);
    if ((param_10 != 0) && ((bVar1 & 1) != 0)) {
      (**(code **)(param_10 + 0x10))(param_10,puStack_168[5],0);
    }
  }
  puVar2 = PTR_PTR_1126da138;
  _objc_alloc();
  if (param_9 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uVar22 = 0;
    uVar20 = 0;
    uVar23 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(param_9 + 8);
    _objc_retain(uVar22);
    uVar20 = *(undefined8 *)(param_9 + 8);
    _objc_retain(uVar20);
    uVar23 = *(undefined8 *)(param_9 + 0x10);
  }
  _objc_retain(uVar23);
  func_0x00010c029da0(param_1,param_2,param_3,param_4);
  _objc_release(uVar23);
  _objc_release(uVar20);
  _objc_release(uVar22);
  func_0x00010be43ec0();
  uVar20 = 2;
  if ((int)param_5 != 0) {
    uVar20 = 3;
  }
  if (param_9 == 0) {
    _objc_retain(0);
    lVar8 = 0;
LAB_10856cbd0:
    uVar13 = 0;
  }
  else {
    lVar8 = *(long *)(param_9 + 8);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_10856cbd0;
    uVar13 = *(ulong *)(lVar8 + 0xd0);
  }
  _objc_retain(uVar13);
  uVar3 = uVar13;
  func_0x00010bf529e0();
  _objc_release(uVar13);
  _objc_release(lVar8);
  if (uVar3 < 2) {
    puVar17 = (undefined *)0x0;
    goto LAB_10856c9bc;
  }
  puVar17 = PTR_PTR_1126bfba8;
  _objc_alloc();
  if (param_9 == 0) {
    _objc_retain(0);
    lVar8 = 0;
LAB_10856cbec:
    uVar22 = 0;
  }
  else {
    lVar8 = *(long *)(param_9 + 8);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_10856cbec;
    uVar22 = *(undefined8 *)(lVar8 + 0xd0);
  }
  _objc_retain(uVar22);
  uVar23 = uVar22;
  func_0x00010c0dfd40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == 0) {
    _objc_retain(0);
    lVar11 = 0;
LAB_10856cc00:
    uVar15 = 0;
  }
  else {
    lVar11 = *(long *)(param_9 + 8);
    _objc_retain(lVar11);
    if (lVar11 == 0) goto LAB_10856cc00;
    uVar15 = *(undefined8 *)(lVar11 + 0xd0);
  }
  _objc_retain(uVar15);
  uVar25 = uVar15;
  func_0x00010c0dfd40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0541c0();
  _objc_release(uVar25);
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(lVar8);
LAB_10856c9bc:
  puVar4 = puVar2;
  func_0x00010bfbf560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfbf1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf529e0();
  if ((puVar10 == (undefined *)0x0) &&
     (puVar10 = puVar5, func_0x00010bf529e0(), puVar10 == (undefined *)0x0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126bf6b8;
    _objc_alloc(PTR_PTR_1126bf6b8);
    dStack_258 = param_7[1];
    dStack_260 = *param_7;
    dStack_248 = param_7[3];
    dStack_250 = param_7[2];
    dStack_238 = param_7[5];
    dStack_240 = param_7[4];
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    dStack_258 = dStack_d8;
    dStack_260 = dStack_e0;
    dStack_248 = (double)uStack_c8;
    dStack_250 = dStack_d0;
    dStack_238 = (double)uStack_b8;
    dStack_240 = (double)uStack_c0;
    dStack_288 = dStack_108;
    dStack_290 = dStack_110;
    uStack_278 = uStack_f8;
    dStack_280 = dStack_100;
    uStack_268 = uStack_e8;
    uStack_270 = uStack_f0;
    func_0x00010b7432f8(puVar10,puVar6,&dStack_260,&dStack_290,uVar20,puVar4,puVar5,0,puVar17);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar17);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&dStack_140,8);
  _objc_release(uStack_118);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10856cdc8; end: 10856cddf;  */

void FUN_10856cdc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10856cde0; end: 10856cf87;  */

void FUN_10856cde0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10856cf88; end: 10856d033; -[SCVideoTranscodingImageProcessorProvider _isSpectaclesMediaWithConfiguration:] */

bool FUN_10856cf88(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lVar3 = 0;
    lVar2 = 0;
LAB_10856d02c:
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_3 + 8);
    _objc_retain(lVar2);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) == 5)) {
      bVar1 = true;
      goto LAB_10856cff0;
    }
    lVar3 = *(long *)(param_3 + 8);
    _objc_retain(lVar3);
    if (lVar3 == 0) goto LAB_10856d02c;
    bVar1 = *(long *)(lVar3 + 0x10) == 6;
  }
  _objc_release(lVar3);
LAB_10856cff0:
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10856d034; end: 10856d0a7; -[SCVideoTranscodingImageProcessorProvider _isCircularSpectaclesMediaWithConfiguration:] */

undefined8 FUN_10856d034(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    _objc_retain(0);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      goto LAB_10856d05c;
    }
  }
  uVar3 = 0;
LAB_10856d05c:
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c06e8e0(uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 10856d0a8; end: 10856d0fb; -[SCVideoTranscodingImageProcessorProvider .cxx_destruct] */

void FUN_10856d0a8(long param_1)

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



/* Entry: 10856d0fc; end: 10856d3bf; -[SCVideoTranscodingProcessor initWithRequestInput:requestOutput:logger:parameterProvider:targetTrajectoryFactory:backgroundTaskWrapper:audioProcessingSessionFactory:spectaclesImageProcessCommandFactory:circumstanceEngine:previewAssetVideoProviderFactory:ippCommandProvider:] */

undefined8 *
FUN_10856d0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fcd28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[0x19];
    puVar1[0x19] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_4;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126be4e8;
    _objc_opt_new();
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[0x21];
    puVar1[0x21] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar4);
  }
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 10856d3c0; end: 10856d3c7; -[SCVideoTranscodingProcessor processWithOutputHandler:progressHandler:] */

void FUN_10856d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1156f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_processWithOutputHandler_progres_112622fd8,param_3,param_4,0);
  return;
}



/* Entry: 10856d3c8; end: 10856e5ab; -[SCVideoTranscodingProcessor processWithOutputHandler:progressHandler:statusHandler:] */

void FUN_10856d3c8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  long lStack_498;
  long lStack_490;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_3b8;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined4 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar20 = param_3;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar20;
  _objc_release(uVar15);
  uVar20 = param_4;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar20;
  _objc_release(uVar15);
  uVar20 = param_5;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  _objc_release(uVar15);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3010000000;
  pcStack_c8 = "";
  uStack_b8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_c0 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_10856e5ac;
  uStack_1b0 = 0x10856e5bc;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(long *)(param_1 + 200) == 0) {
    _objc_retain(0);
    lVar16 = 0;
LAB_10856e324:
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar16 = *(long *)(*(long *)(param_1 + 200) + 8);
    _objc_retain(lVar16);
    if (lVar16 == 0) goto LAB_10856e324;
    puVar18 = *(undefined **)(lVar16 + 8);
  }
  _objc_retain(puVar18);
  puVar3 = puVar18;
  func_0x00010911c884(puVar18,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(lVar16);
  if (*(long *)(param_1 + 200) == 0) {
    _objc_retain(0);
    lVar16 = 0;
LAB_10856e338:
    uVar19 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(param_1 + 200) + 8);
    _objc_retain(lVar16);
    if (lVar16 == 0) goto LAB_10856e338;
    uVar19 = *(ulong *)(lVar16 + 8);
  }
  _objc_retain(uVar19);
  uVar4 = uVar19;
  func_0x00010911c884(uVar19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  _objc_release(lVar16);
  for (puVar18 = (undefined *)0x0; puVar5 = puVar3, func_0x00010bf529e0(), puVar18 < puVar5;
      puVar18 = puVar18 + 1) {
    puVar5 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(puVar5 + 0x20);
    }
    _objc_retain(uVar20);
    _objc_release(puVar5);
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_10856e5c4;
    puStack_210 = &UNK_110a55488;
    uStack_1d8 = SUB84(puVar18,0);
    puStack_208 = param_1;
    puStack_200 = &uStack_100;
    puStack_1f8 = &uStack_e0;
    puStack_1f0 = &uStack_160;
    puStack_1e8 = &uStack_180;
    puStack_1e0 = &uStack_1d0;
    func_0x00010bf97e80(uVar20);
    _objc_release(uVar20);
  }
  for (uVar19 = 0; uVar24 = uVar4, func_0x00010bf529e0(), uVar19 < uVar24; uVar19 = uVar19 + 1) {
    uVar24 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar24 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(uVar24 + 0x20);
    }
    _objc_retain(uVar20);
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_10856eab0;
    puStack_258 = &UNK_110a554b8;
    uStack_230 = (undefined4)uVar19;
    puStack_250 = param_1;
    puStack_248 = &uStack_120;
    puStack_240 = &uStack_1a0;
    puStack_238 = &uStack_140;
    func_0x00010bf97e80(uVar20);
    _objc_release(uVar20);
    _objc_release(uVar24);
  }
  uVar19 = uVar4;
  func_0x00010bf529e0();
  param_1[0x50] = uVar19 != 0;
  puVar18 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar18 == (undefined *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(puVar18 + 0x10);
  }
  _objc_retain(lVar16);
  lVar6 = lVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(puVar18);
  lVar16 = *(long *)(param_1 + 200);
  _objc_retain(lVar16);
  if (lVar16 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(ulong *)(lVar16 + 0x10);
  }
  _objc_retain(uVar19);
  uVar24 = uVar19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar24 == 0) {
    _objc_retain(0);
    uVar25 = 0;
LAB_10856d958:
    _objc_release(uVar25);
LAB_10856d960:
    _objc_release(uVar24);
  }
  else {
    lVar23 = *(long *)(uVar24 + 8);
    _objc_retain(lVar23);
    uVar25 = 0;
    if (lVar23 == 0) goto LAB_10856d958;
    bVar1 = *(byte *)(lVar23 + 0xc);
    _objc_release(lVar23);
    _objc_release(uVar24);
    _objc_release(uVar19);
    if ((bVar1 & 1) == 0) goto LAB_10856d974;
    if (lVar16 == 0) {
      _objc_retain(0);
      lVar23 = 0;
LAB_10856e49c:
      uVar24 = 0;
    }
    else {
      lVar23 = *(long *)(lVar16 + 8);
      _objc_retain(lVar23);
      if (lVar23 == 0) goto LAB_10856e49c;
      uVar24 = *(ulong *)(lVar23 + 8);
    }
    _objc_retain(uVar24);
    uVar19 = uVar24;
    func_0x00010911c884(uVar24,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    _objc_release(lVar23);
    uVar24 = uVar19;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (uVar24 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(ulong *)(uVar24 + 0x20);
    }
    _objc_retain(uVar25);
    uVar28 = uVar25;
    func_0x00010bf529e0();
    _objc_release(uVar25);
    _objc_release(uVar24);
    if (uVar28 < 2) {
      uVar25 = uVar19;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar25 == 0) {
        uVar28 = 0;
      }
      else {
        uVar28 = *(ulong *)(uVar25 + 0x20);
      }
      _objc_retain(uVar28);
      uVar24 = uVar28;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar28);
      _objc_release(uVar25);
      if ((uVar24 != 0) && (*(long *)(uVar24 + 0x10) != 2)) {
        uVar25 = uVar24;
        func_0x000109120c74();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar25 == 0) || (uVar28 = uVar25, func_0x00010c074fe0(), (uVar28 & 1) == 0)) {
          _objc_release(uVar25);
          _objc_release(uVar24);
          _objc_release(uVar19);
          _objc_release(lVar16);
          puVar18 = puVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (puVar18 == (undefined *)0x0) {
            lVar23 = 0;
          }
          else {
            lVar23 = *(long *)(puVar18 + 0x20);
          }
          _objc_retain(lVar23);
          lVar7 = lVar23;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar7;
          func_0x000109120c74();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar23);
          _objc_release(puVar18);
          puVar2 = puStack_d8;
          uVar20 = puStack_f8[3];
          uVar15 = *(undefined8 *)(param_1 + 0x40);
          puVar18 = (undefined *)puStack_178[3];
          if (*(long *)(param_1 + 200) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(*(long *)(param_1 + 200) + 8);
          }
          _objc_retain(uVar8);
          puVar5 = param_1;
          func_0x00010bee9100(puVar2[4],puVar2[5],uVar20,uVar15);
          _objc_release(uVar8);
          if ((lVar16 != 0) && (puVar5 == (undefined *)0x0)) {
            func_0x00010be33140(puStack_f8[3],puStack_118[3],param_1);
            goto LAB_10856e118;
          }
          goto LAB_10856d974;
        }
        goto LAB_10856d958;
      }
      goto LAB_10856d960;
    }
  }
  _objc_release(uVar19);
LAB_10856d974:
  _objc_release(lVar16);
  puVar18 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar18 == (undefined *)0x0) goto LAB_10856e364;
  lVar16 = *(long *)(puVar18 + 0x20);
  puVar5 = puVar18;
  do {
    _objc_retain(lVar16);
    _objc_release();
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 200) == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x10);
    }
    _objc_retain(uVar20);
    uVar15 = uVar20;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    if (lVar6 == 0) {
      _objc_retain(0);
      lVar23 = 0;
LAB_10856e380:
      lVar7 = 0;
    }
    else {
      lVar23 = *(long *)(lVar6 + 8);
      _objc_retain(lVar23);
      if (lVar23 == 0) goto LAB_10856e380;
      lVar7 = *(long *)(lVar23 + 0xf0);
    }
    _objc_retain();
    _objc_release(lVar23);
    if ((lVar7 == 0) || (*(double *)(lVar7 + 0x38) <= 0.0)) {
      uStack_288 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_290 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_280 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    else {
      _CMTimeMakeWithSeconds(&uStack_290,1000000000);
    }
    puVar18 = param_1;
    func_0x00010c135920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar18 == (undefined *)0x0) {
      _objc_retain(0);
      lVar23 = 0;
LAB_10856e394:
      uVar20 = 0;
    }
    else {
      lVar23 = *(long *)(puVar18 + 8);
      _objc_retain(lVar23);
      if (lVar23 == 0) goto LAB_10856e394;
      uVar20 = *(undefined8 *)(lVar23 + 8);
    }
    _objc_retain(uVar20);
    func_0x00010911cc8c(&uStack_310,uVar20);
    uStack_2d8 = uStack_288;
    uStack_2e0 = uStack_290;
    uStack_2d0 = uStack_280;
    _CMTimeRangeMake(&uStack_2c0,&uStack_2e0,&uStack_310);
    _objc_release(uVar20);
    _objc_release(lVar23);
    _objc_release(puVar18);
    puVar18 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lVar23 = 0;
      lStack_498 = 0;
      lStack_490 = 0;
      uStack_3b8 = 0;
      uVar20 = 0;
LAB_10856e3d4:
      uVar8 = 0;
    }
    else {
      lStack_498 = *(long *)(lVar6 + 8);
      _objc_retain(lStack_498);
      if (lStack_498 == 0) {
        uStack_3b8 = 0;
      }
      else {
        uStack_3b8 = *(undefined8 *)(lStack_498 + 0x28);
      }
      _objc_retain(uStack_3b8);
      lStack_490 = *(long *)(lVar6 + 8);
      _objc_retain(lStack_490);
      if (lStack_490 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lStack_490 + 0x30);
      }
      _objc_retain(uVar20);
      lVar23 = *(long *)(lVar6 + 8);
      _objc_retain(lVar23);
      if (lVar23 == 0) goto LAB_10856e3d4;
      uVar8 = *(undefined8 *)(lVar23 + 0x38);
    }
    _objc_retain();
    func_0x00010bf529e0();
    puVar2 = puStack_d8;
    if (lVar6 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      _objc_retain(0);
      lStack_478 = 0;
      uVar26 = 0;
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined8 *)(lVar6 + 8);
      _objc_retain(uVar21);
      uVar26 = *(undefined8 *)(lVar6 + 8);
      _objc_retain(uVar26);
      lStack_478 = *(long *)(lVar6 + 8);
      _objc_retain(lStack_478);
      if (lStack_478 == 0) {
        lStack_478 = 0;
      }
    }
    if (lVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + 0x18);
    }
    _objc_retain();
    if (lVar6 == 0) {
      _objc_retain(0);
LAB_10856e424:
      lStack_470 = 0;
      uVar30 = 0;
    }
    else {
      lStack_470 = *(long *)(lVar6 + 8);
      _objc_retain(lStack_470);
      if (lStack_470 == 0) goto LAB_10856e424;
      uVar30 = *(undefined8 *)(lStack_470 + 0x78);
    }
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      _objc_retain(0);
      _objc_retain(0);
      uVar22 = 0;
      uVar29 = 0;
    }
    else {
      uVar29 = *(undefined8 *)(lVar6 + 8);
      _objc_retain(uVar29);
      uVar22 = *(undefined8 *)(lVar6 + 8);
      _objc_retain(uVar22);
    }
    if (lVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar7 + 0x10);
    }
    uVar31 = *(undefined4 *)(puStack_158 + 3);
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_retain(0);
      lVar17 = 0;
LAB_10856e478:
      uVar27 = 0;
    }
    else {
      lVar17 = *(long *)(lVar6 + 8);
      _objc_retain(lVar17);
      if (lVar17 == 0) goto LAB_10856e478;
      uVar27 = *(undefined8 *)(lVar17 + 0xe8);
    }
    _objc_retain(uVar27);
    uStack_308 = uStack_2b8;
    uStack_310 = uStack_2c0;
    uStack_2f8 = uStack_2a8;
    uStack_300 = uStack_2b0;
    uStack_2e8 = uStack_298;
    uStack_2f0 = uStack_2a0;
    func_0x00010c24e360(puVar2[4],puVar2[5],uVar30,uVar31,puVar18);
    _objc_release(uVar27);
    _objc_release(lVar17);
    _objc_release(uVar10);
    _objc_release(uVar22);
    _objc_release(uVar29);
    _objc_release(lStack_470);
    _objc_release(uVar9);
    _objc_release(lStack_478);
    _objc_release(uVar26);
    _objc_release(uVar21);
    _objc_release(uVar8);
    _objc_release(lVar23);
    _objc_release(uVar20);
    _objc_release(lStack_490);
    _objc_release(uStack_3b8);
    _objc_release(lStack_498);
    _objc_release(puVar18);
    if (lVar7 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(lVar7 + 0x40);
    }
    _objc_retain(lVar23);
    _objc_release(lVar23);
    if (lVar23 != 0) {
      puVar18 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(lVar7 + 0x40);
      }
      _objc_retain(uVar20);
      func_0x00010c0bb9e0(puVar18);
      _objc_release(uVar20);
      _objc_release(puVar18);
    }
    puVar18 = param_1;
    func_0x00010bf2f540();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar18;
    func_0x00010c06e0e0();
    _objc_release(puVar18);
    if ((int)puVar11 == 0) {
      lVar23 = lVar16;
      func_0x00010bf529e0();
      if (lVar23 == 0) {
LAB_10856e08c:
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be33120(param_1);
      }
      else {
        puVar11 = param_1;
        func_0x00010c135fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = (undefined *)(ulong)(puVar11 == (undefined *)0x0);
        _objc_release();
        if (puVar11 == (undefined *)0x0) goto LAB_10856e08c;
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain();
        func_0x00010bf97e80(puVar3);
        puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar13 = PTR_PTR_1126da140;
        _objc_alloc();
        func_0x00010c0396e0();
        puVar18 = PTR_PTR_1126da148;
        puStack_b0 = puVar13;
        _objc_opt_new();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_a8 = puVar18;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar18);
        puVar14 = puVar12;
        func_0x00010bf529e0();
        if (puVar14 == (undefined *)0x0) {
          func_0x00010be981e0(param_1);
        }
        else {
          puVar18 = PTR_PTR_1126da150;
          _objc_alloc();
          func_0x00010c03a540();
          _objc_retain(puVar5);
          func_0x00010c1153e0(puVar18);
          _objc_release(puVar5);
          _objc_release(puVar18);
        }
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      _objc_release(puVar11);
    }
    else {
      func_0x00010be33100(param_1);
    }
    _objc_release(lVar7);
    _objc_release(uVar15);
    _objc_release(puVar5);
LAB_10856e118:
    _objc_release(lVar16);
    _objc_release(lVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(ppuStack_1a8);
    __Block_object_dispose(&uStack_1a0,8);
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    __Block_object_dispose(&uStack_100,8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return;
    }
    ___stack_chk_fail();
LAB_10856e364:
    lVar16 = 0;
    puVar5 = puVar18;
  } while( true );
}



/* Entry: 10856e5ac; end: 10856e5c3;  */

void FUN_10856e5ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10856e5c4; end: 10856e977;  */

void FUN_10856e5c4(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_f8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10856e5ac;
  uStack_70 = 0x10856e5bc;
  uStack_68 = 0;
  puStack_120 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10856e5ac;
  uStack_a0 = 0x10856e5bc;
  uStack_98 = 0;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
  }
  puStack_b8 = puStack_120;
  puStack_88 = puStack_f8;
  _objc_retain(uVar4);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10856e978;
  puStack_d8 = &UNK_11084df30;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10856ea40;
  puStack_100 = &UNK_11084e6b0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x10856ea78;
  puStack_128 = &UNK_11084d758;
  puStack_d0 = puStack_120;
  puStack_c8 = puStack_f8;
  func_0x00010c0bc940(uVar4);
  _objc_release(uVar4);
  lVar2 = puStack_88[5];
  if (lVar2 == 0) {
    if (puStack_b8[5] == 0) goto LAB_10856e8f0;
    if (param_2 == 0) {
      _objc_retain(0);
LAB_10856e8c4:
      lVar5 = 0;
      dStack_170 = 0.0;
      dStack_168 = 0.0;
      dStack_160 = 0.0;
    }
    else {
      lVar5 = *(long *)(param_2 + 0x20);
      _objc_retain(lVar5);
      if (lVar5 == 0) goto LAB_10856e8c4;
      func_0x00010bdc1140(&dStack_170,lVar5);
    }
    dVar8 = (double)_CMTimeGetSeconds(&dStack_170);
    *(double *)(*(long *)(param_1 + 0x20) + 0x40) =
         dVar8 + *(double *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  else {
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_10856e8f0;
    if (puStack_88[5] == 0) {
      dStack_170 = 0.0;
      dStack_168 = 0.0;
      dStack_160 = 0.0;
    }
    else {
      func_0x00010bf8b160(&dStack_170);
    }
    dVar8 = (double)_CMTimeGetSeconds(&dStack_170);
    dVar9 = *(double *)(*(long *)(param_1 + 0x20) + 0x40);
    *(double *)(*(long *)(param_1 + 0x20) + 0x40) = dVar8 + dVar9;
    lVar2 = lVar5;
    func_0x00010c276aa0();
    *(long *)(*(long *)(param_1 + 0x20) + 0x48) =
         *(long *)(*(long *)(param_1 + 0x20) + 0x48) + lVar2;
    dVar10 = *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    fVar6 = (float)func_0x00010bf99700(lVar5);
    dVar8 = (double)fVar6;
    if ((double)fVar6 <= dVar10) {
      dVar8 = dVar10;
    }
    *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = dVar8;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x51) & 1) == 0) {
      uVar1 = (undefined1)puStack_88[5];
      func_0x000109126a88();
      lVar2 = *(long *)(param_1 + 0x20);
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(lVar2 + 0x51) = uVar1;
    dVar10 = (double)func_0x00010c0d5d20(lVar5);
    func_0x00010c106f40(&dStack_170,lVar5);
    dVar8 = dStack_160 * dVar9 + dStack_170 * dVar10;
    dVar9 = dStack_158 * dVar9 + dStack_168 * dVar10;
    dVar8 = (double)((ulong)dVar8 ^ ((ulong)dVar8 ^ (ulong)-dVar8) & -(ulong)(dVar8 < 0.0));
    dVar9 = (double)((ulong)dVar9 ^ ((ulong)dVar9 ^ (ulong)-dVar9) & -(ulong)(dVar9 < 0.0));
    if (dVar9 <= dVar8) {
      dVar8 = dVar9;
    }
    dVar9 = *(double *)(*(long *)(param_1 + 0x20) + 0x58);
    if (dVar8 <= dVar9) {
      dVar8 = dVar9;
    }
    *(double *)(*(long *)(param_1 + 0x20) + 0x58) = dVar8;
    if (param_3 == 0) {
      uVar4 = func_0x00010bde4520(*(undefined8 *)(param_1 + 0x20));
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      *(double *)(lVar2 + 0x28) = dVar9;
      uVar7 = func_0x00010c0da9e0(lVar5);
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar7;
      uVar4 = puStack_88[5];
      func_0x00010c299760();
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18);
      func_0x000109128d28();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar5);
LAB_10856e8f0:
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10856e978; end: 10856ea3f;  */

void FUN_10856e978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c074fe0();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
  }
  else {
    uVar4 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c14d020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10856ea40; end: 10856eaaf;  */

void FUN_10856ea40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856eab0; end: 10856ecb3;  */

void FUN_10856eab0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_a0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10856e5ac;
  uStack_50 = 0x10856e5bc;
  uStack_48 = 0;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
  }
  puStack_68 = puStack_a0;
  _objc_retain(uVar4);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  fVar5 = -32.0;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10856ecb4;
  puStack_80 = &UNK_11084e620;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10856ecfc;
  puStack_a8 = &UNK_11084e6b0;
  puStack_78 = puStack_a0;
  func_0x00010c0bc940(uVar4);
  _objc_release(uVar4);
  lVar1 = puStack_68[5];
  if (lVar1 != 0) {
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010c276aa0();
      *(long *)(*(long *)(param_1 + 0x20) + 0x48) =
           *(long *)(*(long *)(param_1 + 0x20) + 0x48) + lVar1;
      if (param_3 == 0) {
        func_0x00010bf99700(lVar2);
        *(double *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (double)fVar5;
        uVar4 = puStack_68[5];
        func_0x00010bf0eec0();
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
      }
      lStack_c8 = -1;
      func_0x000109125e70(lVar2,0,0,&lStack_c8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      lVar1 = *(long *)(lVar3 + 0x18);
      if (lVar1 <= lStack_c8) {
        lVar1 = lStack_c8;
      }
      *(long *)(lVar3 + 0x18) = lVar1;
    }
    _objc_release(lVar2);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10856ecb4; end: 10856ed33;  */

void FUN_10856ecb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10856ed34; end: 10856edb7;  */

void FUN_10856ed34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    _objc_retain(0);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x10);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      goto LAB_10856ed5c;
    }
  }
  uVar3 = 0;
LAB_10856ed5c:
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010bf43280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10856edb8; end: 10856edbf;  */

void FUN_10856edb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 10856edc0; end: 10856ee03;  */

void FUN_10856edc0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
  }
  _objc_retain(uVar2);
  func_0x00010befa160(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10856ee04; end: 10856ee2b;  */

void FUN_10856ee04(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be981f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__runWithTaskId_trackSegments_pro_112583a18,
               *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be33130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleVideoProcessingDidFailWit_11256a5e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10856ee2c; end: 10856eebf; -[SCVideoTranscodingProcessor cancel] */

void FUN_10856ee2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf2f540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e0e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bf2f540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar1);
  func_0x00010c29bb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2efa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10856eec0; end: 10856f253; -[SCVideoTranscodingProcessor _runWithTaskId:trackSegments:processedReason:] */

void FUN_10856eec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar7 + 0x10);
  }
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_retain();
    lVar4 = 0;
LAB_10856f1e8:
    uVar5 = 0;
  }
  else {
    lVar4 = *(long *)(lVar7 + 8);
    _objc_retain(lVar4);
    if (lVar4 == 0) goto LAB_10856f1e8;
    uVar5 = *(undefined8 *)(lVar4 + 8);
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010911de44(uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_retain();
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar7 + 8);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      goto LAB_10856efdc;
    }
  }
  uVar5 = 0;
LAB_10856efdc:
  _objc_retain(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar7 + 8);
  }
  _objc_retain(uVar6);
  func_0x00010beb6d00(param_1);
  _objc_release(uVar6);
  _objc_release(lVar7);
  if (lVar1 == 0) {
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    lVar7 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + 8);
    _objc_retain(lVar7);
    if (lVar7 == 0) {
      uVar6 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + 0x108);
      uVar6 = *(undefined8 *)(lVar7 + 0x110);
    }
    _objc_release(lVar7);
    lVar7 = *(long *)(lVar1 + 0x10);
    _objc_retain(lVar7);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(lVar1 + 0x10);
      _objc_retain(uVar8);
      _objc_release(uVar8);
    }
  }
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + 8);
  }
  _objc_retain(uVar8);
  lVar4 = param_1;
  func_0x00010be8e1c0(uVar9,uVar6,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  puVar3 = PTR_PTR_1126bf6c0;
  _objc_alloc(PTR_PTR_1126bf6c0);
  func_0x00010b743b10();
  lVar7 = param_1;
  func_0x00010bee68a0(uVar9,uVar6);
  if ((int)lVar7 == 0) {
    func_0x00010be98200(uVar9,uVar6,param_1);
  }
  else {
    func_0x00010be981c0(param_1);
  }
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10856f254; end: 10856fae7; -[SCVideoTranscodingProcessor _runWithVideoAssetMutatorForTaskId:composition:processedNGSMESnap:trackSegments:videoRenderSize:runIPPThroughCustomCompositor:processedReason:] */

void FUN_10856f254(double param_1,double param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_110;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar10 = param_3;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = ppuVar10[2];
  }
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(ppuVar10);
  lStack_c8 = 0;
  ppuVar10 = param_3;
  dVar22 = param_1;
  dVar17 = param_2;
  func_0x00010bee6620(param_1,param_2);
  ppuVar2 = param_3;
  if ((int)ppuVar10 == 0) {
    ppuStack_d0 = (undefined **)0x0;
    func_0x00010bdd65a0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuStack_d0;
    _objc_retain(ppuStack_d0);
  }
  else {
    func_0x00010bdd6040();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)0x0;
    param_1 = dVar22;
    param_2 = dVar17;
  }
  if (ppuVar2 == (undefined **)0x0) {
    _objc_retain(0);
    _objc_retain(0);
    puStack_110 = (undefined *)0x0;
LAB_10856f544:
    ppuVar13 = ppuVar10;
    func_0x00010befe960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    uStack_c0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dae278;
    if (ppuVar13 != (undefined **)0x0) {
      ppuStack_a8 = ppuVar13;
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(ppuVar11);
    _objc_release(puVar7);
    _objc_release(puVar9);
    func_0x00010be33120(param_3);
    puVar9 = (undefined *)0x0;
    ppuVar6 = param_6;
    goto LAB_10856fa08;
  }
  puVar9 = ppuVar2[1];
  _objc_retain(puVar9);
  puStack_110 = ppuVar2[3];
  _objc_retain();
  if (puVar9 == (undefined *)0x0) goto LAB_10856f544;
  if (param_3[0x17] == (undefined *)0x0) {
    puVar7 = puVar9;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bde4520(param_3);
    dVar22 = param_1;
    func_0x00010bf99700(puVar4);
    lVar8 = param_8;
    func_0x00010bf529e0();
    if (lVar8 == 1) {
      func_0x00010c299760(puVar9);
      if (puVar4 != (undefined *)0x0) goto LAB_10856f454;
LAB_10856f46c:
      puStack_e8 = (undefined *)0x0;
      puStack_f0 = (undefined *)0x0;
      puStack_d8 = (undefined *)0x0;
      puStack_e0 = (undefined *)0x0;
      puStack_f8 = (undefined *)0x0;
      puStack_100 = (undefined *)0x0;
    }
    else {
      if (puVar4 == (undefined *)0x0) goto LAB_10856f46c;
LAB_10856f454:
      func_0x00010c106f40(&puStack_100,puVar4);
    }
    ppuVar13 = &puStack_100;
    func_0x00010b691288();
    param_3[1] = (undefined *)ppuVar13;
    dVar17 = param_1;
    dVar23 = param_2;
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(0);
      _objc_retain(0);
      lVar12 = 0;
      lVar8 = 0;
    }
    else {
      lVar12 = *(long *)(puVar1 + 8);
      _objc_retain(lVar12);
      if (lVar12 == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(lVar12 + 0xd);
      }
      lVar8 = *(long *)(puVar1 + 8);
      _objc_retain(lVar8);
      if ((((lVar8 != 0) && ((bVar5 & 1) != 0)) && (puVar7 = param_3[0xb], 0.0 < (double)puVar7)) &&
         ((dVar18 = *(double *)(lVar8 + 0x108), 0.0 < dVar18 &&
          (dVar20 = *(double *)(lVar8 + 0x110), 0.0 < dVar20)))) {
        dVar21 = dVar18;
        if (dVar20 <= dVar18) {
          dVar21 = dVar20;
        }
        if ((double)puVar7 < dVar21) {
          fVar16 = (float)(int)(dVar18 * ((double)puVar7 / dVar21) * 0.5);
          fVar14 = (float)(int)(dVar20 * ((double)puVar7 / dVar21) * 0.5);
          dVar17 = (double)(fVar16 + fVar16);
          dVar23 = (double)(fVar14 + fVar14);
        }
      }
    }
    _objc_release(lVar8);
    _objc_release(lVar12);
    ppuVar13 = param_3;
    func_0x00010bdf4fa0(dVar17,dVar23,(double)SUB84(dVar22,0),param_3[8]);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3[0x17];
    param_3[0x17] = (undefined *)ppuVar13;
    _objc_release(puVar7);
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(0);
      lVar8 = 0;
      uVar3 = 0;
    }
    else {
      lVar8 = *(long *)(puVar1 + 8);
      _objc_retain(lVar8);
      if (lVar8 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar8 + 0x88);
      }
    }
    puVar7 = param_3[0x17];
    if (puVar7 == (undefined *)0x0) {
      uVar19 = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(puVar7 + 0x50);
      uVar19 = *(undefined8 *)(puVar7 + 0x58);
    }
    func_0x00010b69119c(&puStack_100,uVar15,uVar19,uVar3);
    param_3[3] = puStack_f8;
    param_3[2] = puStack_100;
    param_3[5] = puStack_e8;
    param_3[4] = puStack_f0;
    param_3[7] = puStack_d8;
    param_3[6] = puStack_e0;
    _objc_release(lVar8);
    _objc_release(puVar4);
  }
  else {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  func_0x00010be0a3a0(param_3);
  func_0x00010be0a500(param_1,param_2,param_3);
  ppuVar6 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_128 = param_6;
  ppuStack_120 = ppuVar10;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(0);
  }
  else {
    lVar8 = *(long *)(puVar1 + 8);
    _objc_retain(lVar8);
    if (lVar8 != 0) {
      dVar22 = *(double *)(lVar8 + 0x78);
      _objc_release();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (dVar22 < 0.0) {
        func_0x000107c31920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x000107c31298();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfad300();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar10;
        func_0x00010bdc2c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        _objc_release(lVar8);
        _objc_release(puVar7);
        if (ppuVar11 != (undefined **)0x0) {
          _objc_retain(ppuVar11);
          ppuVar13 = ppuVar11;
          goto LAB_10856f83c;
        }
      }
      goto LAB_10856f80c;
    }
  }
  _objc_release(0);
LAB_10856f80c:
  ppuVar10 = param_3;
  func_0x00010c135fe0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) goto LAB_10856faa8;
  ppuVar11 = (undefined **)ppuVar10[1];
  while( true ) {
    _objc_retain(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar13 = (undefined **)0x0;
LAB_10856f83c:
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lStack_c8 < 1) {
      puVar7 = ppuVar2[2];
      _objc_retain(puVar7);
      _objc_release(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = ppuVar2[2];
        _objc_retain(puVar7);
        puVar4 = puVar7;
        func_0x00010c0d3c80(puVar7);
        _objc_release(puVar7);
        func_0x00010c17e9a0(puVar4);
        func_0x00010c17ea60(puVar4);
        func_0x00010c17eb20(puVar4);
        ppuVar10 = (undefined **)PTR_PTR_1126da158;
        _objc_alloc();
        func_0x00010911aa24();
        _objc_release(ppuVar2);
        puVar7 = PTR_PTR_1126da160;
        _objc_alloc(PTR_PTR_1126da160);
        func_0x00010c060cc0();
        _objc_release(puVar4);
        ppuVar2 = ppuVar10;
      }
      ppuVar10 = param_3;
      func_0x00010be1c3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212860(param_3);
      _objc_release(ppuVar10);
      ppuVar10 = param_3;
      func_0x00010c26a840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd31a0(param_3);
      _objc_release(ppuVar10);
    }
    else {
      puVar4 = ppuVar6[0x9a];
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010be33120(param_3);
    }
    _objc_release(puVar7);
    ppuVar6 = ppuStack_128;
    ppuVar10 = ppuStack_120;
LAB_10856fa08:
    _objc_release(ppuVar11);
    _objc_release(ppuVar13);
    _objc_release(puStack_110);
    _objc_release(puVar9);
    _objc_release(ppuVar2);
    _objc_release(ppuVar10);
    _objc_release(puVar1);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(ppuVar6);
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) break;
    ___stack_chk_fail();
LAB_10856faa8:
    ppuVar11 = (undefined **)0x0;
  }
  return;
}



/* Entry: 10856fae8; end: 10857020b; -[SCVideoTranscodingProcessor _useDirectAssetPathForComposition:videoRenderSize:] */

long FUN_10856fae8(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar7 = param_3;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_5);
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) goto LAB_10856fc2c;
  if (lVar7 == 0) goto LAB_1085700e4;
  lVar8 = *(long *)(lVar7 + 0x10);
  do {
    _objc_retain(lVar8);
    lVar13 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    if (lVar13 == 1) {
      if (lVar7 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      _objc_retain(lVar8);
      lVar13 = lVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(lVar13 + 8);
      }
      _objc_retain(lVar9);
      _objc_release(lVar13);
      _objc_release(lVar8);
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(lVar9 + 0xb0);
      }
      _objc_retain(uVar10);
      uVar11 = uVar10;
      func_0x00010bf529e0();
      if (uVar11 != 0) goto LAB_10856fc1c;
      if (lVar9 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulong *)(lVar9 + 0xb8);
      }
      _objc_retain(uVar11);
      uVar15 = uVar11;
      func_0x00010bf529e0();
      if (uVar15 != 0) goto LAB_10856fc14;
      if (lVar7 == 0) {
        _objc_retain(0);
        lVar8 = 0;
LAB_108570198:
        lVar13 = 0;
      }
      else {
        lVar8 = *(long *)(lVar7 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_108570198;
        lVar13 = *(long *)(lVar8 + 0x18);
      }
      _objc_retain(lVar13);
      lVar2 = lVar13;
      func_0x00010bf529e0();
      _objc_release(lVar13);
      _objc_release(lVar8);
      _objc_release(uVar11);
      _objc_release(uVar10);
      if (lVar2 != 0) goto LAB_10856fc24;
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(lVar9 + 0x70);
      }
      _objc_retain(uVar10);
      uVar11 = uVar10;
      func_0x00010c08fa60();
      if (uVar11 != 0) goto LAB_10856fc1c;
      if (lVar9 == 0) {
        _objc_retain(0);
        lVar8 = 0;
      }
      else {
        uVar11 = *(ulong *)(lVar9 + 0x68);
        _objc_retain(uVar11);
        if (uVar11 != 0) goto LAB_10856fc14;
        lVar8 = *(long *)(lVar9 + 0x90);
      }
      _objc_retain(lVar8);
      lVar13 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      _objc_release(uVar10);
      if (lVar13 != 0) {
LAB_10856fc24:
        _objc_release(lVar9);
        goto LAB_10856fc2c;
      }
      if (lVar9 == 0) {
        dVar16 = 0.0;
      }
      else {
        dVar16 = *(double *)(lVar9 + 0x78);
      }
      if (((2.2250738585072014e-308 <= ABS(dVar16 + -1.0)) &&
          (ABS(dVar16 + 1.0) * 2.220446049250313e-16 <= ABS(dVar16 + -1.0))) ||
         ((lVar9 != 0 && ((*(byte *)(lVar9 + 9) & 1) != 0)))) goto LAB_10856fc24;
      uVar10 = param_5;
      func_0x00010911c884(param_5,0);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf529e0();
      if (uVar11 != 1) {
LAB_10856fc1c:
        _objc_release(uVar10);
        goto LAB_10856fc24;
      }
      uVar11 = uVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar11 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(uVar11 + 0x20);
      }
      _objc_retain(lVar8);
      lVar13 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      _objc_release(uVar11);
      if (lVar13 != 1) goto LAB_10856fc1c;
      uVar11 = param_5;
      func_0x00010911c884(param_5,1);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x00010bf529e0();
      if (uVar15 != 1) {
LAB_10856fc14:
        _objc_release(uVar11);
        goto LAB_10856fc1c;
      }
      uVar15 = uVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar15 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(uVar15 + 0x20);
      }
      _objc_retain(lVar8);
      lVar13 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      _objc_release(uVar15);
      if (lVar13 != 1) goto LAB_10856fc14;
      if (param_5 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(param_5 + 8);
      }
      _objc_retain(lVar8);
      lVar13 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      if ((lVar13 != 2) || (uVar15 = param_5, func_0x00010911e848(), (uVar15 & 1) != 0))
      goto LAB_10856fc14;
      uVar15 = uVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (uVar15 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(ulong *)(uVar15 + 0x20);
      }
      _objc_retain(uVar14);
      uVar3 = uVar14;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(uVar15);
      if (uVar3 == 0) {
        dVar16 = 0.0;
      }
      else {
        dVar16 = *(double *)(uVar3 + 0x30);
      }
      if ((2.2250738585072014e-308 <= ABS(dVar16 + -1.0)) &&
         (ABS(dVar16 + 1.0) * 2.220446049250313e-16 <= ABS(dVar16 + -1.0))) {
        _objc_release(uVar3);
        goto LAB_10856fc14;
      }
      if (lVar7 == 0) {
        _objc_retain(0);
        lVar8 = 0;
LAB_1085701f4:
        lVar13 = 0;
      }
      else {
        lVar8 = *(long *)(lVar7 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_1085701f4;
        lVar13 = *(long *)(lVar8 + 8);
      }
      _objc_retain(lVar13);
      lVar2 = lVar13;
      func_0x00010911c884(lVar13,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar8);
      lVar8 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulong *)(lVar8 + 0x20);
      }
      _objc_retain(uVar15);
      _objc_release(lVar8);
      uVar14 = uVar15;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (uVar14 != 0) {
        uVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(uVar15);
          }
          if ((*(long *)(uVar12 * 8) != 0) && (*(double *)(*(long *)(uVar12 * 8) + 0x30) < 0.0))
          goto LAB_108570070;
          uVar12 = uVar12 + 1;
        } while (uVar14 != uVar12);
        uVar14 = uVar15;
        func_0x00010bf52a60();
      }
      _objc_release(uVar15);
      uVar15 = uVar3;
      func_0x000109120c74();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar15;
      func_0x00010c072e60();
      if (((int)uVar14 == 0) || (uVar14 = uVar15, func_0x00010c074fe0(), (uVar14 & 1) != 0)) {
LAB_108570070:
        uVar14 = 0;
      }
      else {
        uVar14 = uVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (uVar14 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(ulong *)(uVar14 + 0x20);
        }
        _objc_retain(uVar12);
        uVar4 = uVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000109120c74();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar12);
        _objc_release(uVar14);
        uVar14 = uVar5;
        func_0x00010c071ae0();
        _objc_release(uVar5);
      }
      _objc_release(uVar15);
      _objc_release(lVar2);
      _objc_release(uVar3);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(lVar9);
      _objc_release(param_5);
      _objc_release(lVar7);
      _objc_release(lVar7);
      if ((uVar14 & 1) == 0) goto LAB_10856fc44;
      lVar7 = *(long *)(param_3 + 0x98);
      func_0x00010bf1f440();
    }
    else {
LAB_10856fc2c:
      _objc_release(param_5);
      _objc_release(lVar7);
      _objc_release(lVar7);
LAB_10856fc44:
      lVar7 = 0;
    }
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return lVar7;
    }
    ___stack_chk_fail();
LAB_1085700e4:
    lVar8 = 0;
  } while( true );
}



/* Entry: 10857020c; end: 1085706b3; -[SCVideoTranscodingProcessor _useStaticImageProviderForProcessedNGSMESnap:videoRenderSize:runIPPThroughCustomCompositor:] */

undefined8
FUN_10857020c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
             ulong param_6)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_5);
  if ((param_6 & 1) != 0) goto LAB_1085703d0;
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) goto LAB_1085703d0;
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar2 + 0x10);
  }
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar10 != 1) goto LAB_1085703d0;
  if (param_5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulong *)(param_5 + 8);
  }
  _objc_retain(uVar8);
  uVar3 = uVar8;
  func_0x00010911e848();
  _objc_release(uVar8);
  if ((uVar3 & 1) != 0) goto LAB_1085703d0;
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar2 + 0x10);
  }
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar10 + 8);
  }
  _objc_retain(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar7);
  if (param_5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_5 + 0x10);
  }
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulong *)(lVar10 + 0x28);
  }
  _objc_retain(uVar8);
  uVar3 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(lVar7);
  if (1 < uVar3) goto LAB_1085703c8;
  if (lVar9 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0xb0);
  }
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    if (lVar9 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(lVar9 + 0xb8);
    }
    _objc_retain(lVar10);
    lVar11 = lVar10;
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      _objc_release(lVar10);
      goto LAB_1085703c0;
    }
    if (param_5 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_5 + 0x18);
    }
    _objc_retain(lVar11);
    lVar12 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar7);
    if (lVar12 == 0) {
      if (lVar9 == 0) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = *(double *)(lVar9 + 0x78);
      }
      if ((((ABS(dVar13 + -1.0) < 2.2250738585072014e-308) ||
           (ABS(dVar13 + -1.0) < ABS(dVar13 + 1.0) * 2.220446049250313e-16)) &&
          ((lVar9 == 0 || ((*(byte *)(lVar9 + 9) & 1) == 0)))) &&
         (lVar7 = param_5, func_0x000109122928(), (int)lVar7 != 0)) {
        if (param_5 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(param_5 + 8);
        }
        _objc_retain(lVar10);
        lVar7 = lVar10;
        func_0x00010911c884(lVar10,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        lVar10 = lVar7;
        func_0x00010bf529e0();
        if (lVar10 == 0) {
          if (param_5 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(param_5 + 8);
          }
          _objc_retain(lVar10);
          lVar11 = lVar10;
          func_0x00010911c884(lVar10,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar10);
          lVar10 = lVar11;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(lVar10 + 0x20);
          }
          _objc_retain(lVar12);
          lVar4 = lVar12;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          _objc_release(lVar10);
          if (lVar4 == 0) {
            _objc_retain(0);
          }
          else {
            lVar10 = *(long *)(lVar4 + 0x28);
            _objc_retain(lVar10);
            if (lVar10 != 0) {
              func_0x00010bdc1140(&uStack_88,lVar10);
              goto LAB_108570608;
            }
          }
          lVar10 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
LAB_108570608:
          uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          puVar5 = &uStack_88;
          _CMTimeCompare(puVar5,&uStack_a0);
          _objc_release(lVar10);
          _objc_release(lVar4);
          _objc_release(lVar11);
          _objc_release(lVar7);
          _objc_release(lVar9);
          _objc_release(param_5);
          _objc_release(lVar2);
          _objc_release(param_5);
          _objc_release(lVar2);
          if ((int)puVar5 != 0) {
            return 0;
          }
          uVar6 = *(undefined8 *)(param_3 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (uVar6,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
                     &PTR____CFConstantStringClassReference_110ee2ed8,0,0);
          return uVar6;
        }
        goto LAB_1085703c0;
      }
    }
  }
  else {
LAB_1085703c0:
    _objc_release(lVar7);
  }
LAB_1085703c8:
  _objc_release(lVar9);
LAB_1085703d0:
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(lVar2);
  return 0;
}



/* Entry: 1085706b4; end: 10857087f; -[SCVideoTranscodingProcessor _imageSnapFrameRateOverrideForSnap:] */

void FUN_1085706b4(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
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
  func_0x000109122b88();
  if (param_3 == 0) goto LAB_108570838;
  unaff_x20 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (unaff_x20 == 0) goto LAB_108570878;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  while( true ) {
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar2 != 0) break;
LAB_1085707ec:
    _objc_release(lVar6);
    _objc_release(unaff_x20);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c067f00(uVar4,param_2,&PTR____CFConstantStringClassReference_110ee2ef8,0xf,0);
    uVar1 = (uint)uVar4 & ((int)(uint)uVar4 >> 0x1f ^ 0xffffffffU);
    if (0x3b < (int)uVar1) {
      uVar1 = 0x3c;
    }
LAB_10857083c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail(uVar1);
LAB_108570878:
    lVar6 = 0;
  }
  lVar8 = *plStack_120;
LAB_108570748:
  lVar9 = 0;
LAB_10857074c:
  if (*plStack_120 != lVar8) {
    _objc_enumerationMutation(lVar6);
  }
  lVar5 = *(long *)(lStack_128 + lVar9 * 8);
  if (lVar5 == 0) {
    _objc_retain(0);
    lVar5 = 0;
LAB_1085707c8:
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_1085707c8;
    lVar7 = *(long *)(lVar5 + 0x20);
  }
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar5);
  if (lVar3 == 0) goto code_r0x0001085707ac;
  _objc_release(lVar6);
  _objc_release(unaff_x20);
LAB_108570838:
  uVar1 = 0;
  goto LAB_10857083c;
code_r0x0001085707ac:
  lVar9 = lVar9 + 1;
  if (lVar2 == lVar9) goto LAB_1085707d0;
  goto LAB_10857074c;
LAB_1085707d0:
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 == 0) goto LAB_1085707ec;
  goto LAB_108570748;
}



/* Entry: 108570880; end: 10857097f; -[SCVideoTranscodingProcessor _buildDirectAssetMutatorOutputForComposition:] */

void FUN_108570880(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010911c884(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bfb1920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar1);
  uVar5 = uVar2;
  func_0x000109120c74(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126da158;
  _objc_alloc(PTR_PTR_1126da158);
  func_0x00010911aa24();
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108570980; end: 108570d8b; -[SCVideoTranscodingProcessor _runWithStaticImageProviderForTaskId:processedNGSMESnap:processedReason:] */

void FUN_108570980(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar7 = param_3;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x10);
  }
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar7);
  if (param_6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_6 + 8);
  }
  _objc_retain(lVar7);
  lVar6 = lVar7;
  func_0x00010911c884(lVar7,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x20);
  }
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  lVar7 = param_3;
  func_0x00010be0db60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be33120(param_3);
    _objc_release(puVar3);
    goto LAB_108570d08;
  }
  func_0x00010c23d0a0(lVar7);
  dVar9 = param_1;
  func_0x00010c14e120(lVar7);
  param_1 = param_1 * dVar9;
  func_0x00010c23d0a0(lVar7);
  func_0x00010c14e120(lVar7);
  if (*(long *)(param_3 + 0xb8) == 0) {
    *(undefined8 *)(param_3 + 8) = 0;
    lVar8 = param_3;
    func_0x00010bdf4fa0(param_1,param_2 * dVar9,0,*(undefined8 *)(param_3 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0xb8);
    *(long *)(param_3 + 0xb8) = lVar8;
    _objc_release(uVar4);
    if (lVar1 == 0) {
      _objc_retain(0);
      lVar8 = 0;
LAB_108570d70:
      uVar4 = 0;
    }
    else {
      lVar8 = *(long *)(lVar1 + 8);
      _objc_retain(lVar8);
      if (lVar8 == 0) goto LAB_108570d70;
      uVar4 = *(undefined8 *)(lVar8 + 0x88);
    }
    lVar5 = *(long *)(param_3 + 0xb8);
    if (lVar5 == 0) {
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar5 + 0x50);
      uVar11 = *(undefined8 *)(lVar5 + 0x58);
    }
    func_0x00010b69119c(&uStack_a0,uVar10,uVar11,uVar4);
    *(undefined8 *)(param_3 + 0x18) = uStack_98;
    *(undefined8 *)(param_3 + 0x10) = uStack_a0;
    *(undefined8 *)(param_3 + 0x28) = uStack_88;
    *(undefined8 *)(param_3 + 0x20) = uStack_90;
    *(undefined8 *)(param_3 + 0x38) = uStack_78;
    *(undefined8 *)(param_3 + 0x30) = uStack_80;
    _objc_release(lVar8);
  }
  func_0x00010be0a3a0(param_3);
  func_0x00010be0a500(param_1,param_2 * dVar9,param_3);
  if (lVar2 == 0) {
    _objc_retain(0);
LAB_108570c14:
    lVar8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    lVar8 = *(long *)(lVar2 + 0x20);
    _objc_retain(lVar8);
    if (lVar8 == 0) goto LAB_108570c14;
    func_0x00010bdc1140(&uStack_a0,lVar8);
  }
  _CMTimeGetSeconds(&uStack_a0);
  _objc_release(lVar8);
  func_0x00010be37760();
  puVar3 = PTR_PTR_1126da168;
  _objc_alloc(PTR_PTR_1126da168);
  lVar8 = param_3;
  func_0x00010c135fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar8 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010bfef640(param_1,puVar3);
  func_0x00010c212860(param_3);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010c26a840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd31a0(param_3);
  _objc_release(lVar8);
LAB_108570d08:
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108570d8c; end: 108570eb7; -[SCVideoTranscodingProcessor _extractImageFromSegment:] */

void FUN_108570d8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10856e5ac;
  uStack_40 = 0x10856e5bc;
  uStack_38 = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar1);
  func_0x00010c0bc940(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108570eb8; end: 108570f47;  */

void FUN_108570eb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074fe0();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108570f48; end: 108570f4b;  */

void FUN_108570f48(void)

{
  return;
}



/* Entry: 108570f4c; end: 108570f83;  */

void FUN_108570f4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108570f84; end: 108571163; -[SCVideoTranscodingProcessor _ensureAudioProcessingWrapperForConfiguration:] */

void FUN_108570f84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xf8) != 0) goto LAB_10857103c;
  if (param_3 == 0) {
    _objc_retain(0);
LAB_108571124:
    _objc_retain(0);
    lVar4 = 0;
LAB_108571130:
    _objc_retain(0);
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 8);
    _objc_retain(lVar4);
    if (lVar4 == 0) goto LAB_108571124;
    lVar5 = *(long *)(lVar4 + 0x98);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_108571130;
    lVar6 = *(long *)(lVar5 + 8);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_3 + 8);
      _objc_retain(lVar7);
      if (lVar7 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar7 + 0xb0);
      }
      _objc_retain(lVar8);
      lVar9 = lVar8;
      func_0x00010bf529e0();
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_3 + 8);
        _objc_retain(lVar9);
        if (lVar9 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(lVar9 + 0xb8);
        }
        _objc_retain(lVar10);
        lVar1 = lVar10;
        func_0x00010bf529e0();
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar1 != 0) goto LAB_10857103c;
        puVar2 = PTR_PTR_1126d24a8;
        _objc_alloc_init();
        uVar3 = *(undefined8 *)(param_1 + 0xf8);
        *(undefined **)(param_1 + 0xf8) = puVar2;
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0xf8);
        lVar4 = *(long *)(param_3 + 8);
        _objc_retain(lVar4);
        if (lVar4 == 0) {
          _objc_retain(0);
          lVar5 = 0;
LAB_10857115c:
          lVar6 = 0;
        }
        else {
          lVar5 = *(long *)(lVar4 + 0x98);
          _objc_retain(lVar5);
          if (lVar5 == 0) goto LAB_10857115c;
          lVar6 = *(long *)(lVar5 + 8);
        }
        _objc_retain(lVar6);
        func_0x00010c1d8f60(uVar3,param_2,lVar6);
      }
      else {
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
    }
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_10857103c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108571164; end: 1085713b7; -[SCVideoTranscodingProcessor _ensureImageProcessorForTaskId:processedNGSMESnap:sourceSize:runIPPThroughCustomCompositor:] */

void FUN_108571164(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_7 & 1) == 0) && (*(long *)(param_3 + 0xe8) == 0)) {
    puVar6 = *(undefined **)(param_3 + 200);
    _objc_retain(puVar6);
    lVar2 = param_3;
    func_0x00010beb74e0();
    puVar3 = puVar6;
    if ((int)lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + 0x98);
      func_0x00010bf1f440();
      if (iVar1 != 0) {
        puVar3 = PTR_PTR_1126bf7c0;
        _objc_alloc(PTR_PTR_1126bf7c0);
        if (*(long *)(param_3 + 200) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(param_3 + 200) + 0x10);
        }
        _objc_retain(uVar7);
        func_0x00010af1fd14(puVar3,param_6,uVar7);
        _objc_release(puVar6);
        _objc_release(uVar7);
      }
    }
    puVar6 = PTR_PTR_1126da170;
    _objc_alloc();
    func_0x00010c03f0a0();
    lVar2 = param_3;
    func_0x00010c29baa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar2 + 0x50);
      uVar7 = *(undefined8 *)(lVar2 + 0x58);
    }
    lVar4 = param_3;
    func_0x00010c135920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 8);
    }
    _objc_retain(uVar8);
    func_0x00010beb74e0(param_3);
    _objc_retain(param_5);
    puVar5 = puVar6;
    func_0x00010bfbf600(param_1,param_2,uVar9,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0xe8);
    *(undefined **)(param_3 + 0xe8) = puVar5;
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1085713b8; end: 1085713d7;  */

void FUN_1085713b8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be33130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleVideoProcessingDidFailWit_11256a5e8,
               *(undefined8 *)(param_1 + 0x28),param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setOverlayImageData__1126537b0,param_2);
  return;
}



/* Entry: 1085713d8; end: 1085714cb; -[SCVideoTranscodingProcessor _beginBackgroundTaskAndStartTranscodingTaskItem:] */

void FUN_1085713d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar2;
  func_0x00010bec1dc0(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085714cc; end: 108571527;  */

void FUN_1085714cc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108571528; end: 108571623; -[SCVideoTranscodingProcessor _buildMutatorOutputForProcessedNGSMESnap:videoRenderSize:runIPPThroughCustomCompositor:errorType:outVideoAssetMutator:] */

void FUN_108571528(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126da178;
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c02d3c0(param_1,param_2);
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  func_0x0001091286b8(uVar2);
  func_0x00010c21d880(puVar1,param_4,uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  func_0x0001091286cc(uVar2);
  func_0x00010c166be0(puVar1,param_4,uVar2);
  func_0x00010be37760(param_3,param_4,param_5);
  _objc_release(param_5);
  func_0x00010c2213c0(puVar1,param_4,param_3);
  puVar3 = puVar1;
  _objc_retainAutorelease(puVar1);
  *param_8 = puVar1;
  func_0x00010bfbfc20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108571624; end: 10857184f; -[SCVideoTranscodingProcessor _createTranscodingConfigurationWithVideoSourceSize:sourceBitrate:sourceDuration:sourceVideoCodec:] */

void FUN_108571624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = param_5;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + 0x10);
  }
  _objc_retain(lVar6);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108571850;
  puStack_b8 = &UNK_110a55598;
  lVar3 = lVar6;
  lStack_b0 = param_5;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_4;
  uStack_90 = param_3;
  uStack_88 = param_7;
  func_0x00010c0b8600(lVar6,param_6,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ulong *)(lVar2 + 0x10);
  }
  _objc_retain(uVar7);
  uVar4 = uVar7;
  func_0x00010bf529e0();
  if (uVar4 < 2) {
LAB_1085717f8:
    _objc_release(uVar7);
    _objc_release(lVar2);
  }
  else {
    lVar6 = param_5;
    func_0x00010c135920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x10);
    }
    _objc_retain(lVar8);
    lVar5 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_retain();
LAB_1085717d8:
      _objc_release(0);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(lVar6);
      goto LAB_1085717f8;
    }
    lVar9 = *(long *)(lVar5 + 8);
    _objc_retain(lVar9);
    if (lVar9 == 0) goto LAB_1085717d8;
    cVar1 = *(char *)(lVar9 + 0xb);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(uVar7);
    _objc_release(lVar2);
    if (cVar1 == '\x01') {
      func_0x00010bdf4f80(param_5,param_6,lVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108571818;
    }
  }
  param_5 = lVar3;
  func_0x00010bfb1920(lVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_108571818:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108571850; end: 108571deb;  */

void FUN_108571850(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined4 uStack_cc;
  long lStack_c8;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    _objc_release(0);
    _objc_retain(0);
    lStack_e8 = 0;
    uVar21 = 0;
    uVar22 = 0;
LAB_108571cc8:
    _objc_release(0);
LAB_108571918:
    dVar23 = 0.0;
    if (*(double *)(param_1 + 0x28) != 0.0) {
      dVar23 = INFINITY;
      if (*(double *)(param_1 + 0x30) != 0.0) {
        dVar23 = *(double *)(param_1 + 0x28) / *(double *)(param_1 + 0x30);
      }
    }
    dVar20 = *(double *)(param_1 + 0x38);
    if (param_2 != 0) goto LAB_108571960;
    _objc_retain(0);
    lVar10 = 0;
LAB_108571954:
    dVar24 = 0.0;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) {
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined8 *)(lVar10 + 0xf8);
      uVar21 = *(undefined8 *)(lVar10 + 0x100);
    }
    _objc_release(lVar10);
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) {
      lStack_e8 = 0;
    }
    else {
      lStack_e8 = *(long *)(lVar10 + 0x40);
    }
    _objc_release(lVar10);
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_108571cc8;
    dVar23 = *(double *)(lVar10 + 0x80);
    _objc_release(lVar10);
    dVar20 = ABS(dVar23);
    bVar1 = true;
    if ((0.0 < dVar23) && (bVar1 = false, !NAN(dVar20))) {
      bVar1 = dVar20 < 2.2250738585072014e-308;
    }
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(dVar20) && !NAN(dVar20 * 2.220446049250313e-16))) {
      bVar2 = dVar20 < dVar20 * 2.220446049250313e-16;
    }
    if (bVar2) goto LAB_108571918;
    dVar20 = *(double *)(param_1 + 0x38);
LAB_108571960:
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_108571954;
    dVar24 = *(double *)(lVar10 + 0x78);
  }
  _objc_release(lVar10);
  dVar25 = 1.0;
  if ((ABS(dVar24) < 2.2250738585072014e-308) ||
     (ABS(dVar24) < ABS(dVar24 + 0.0) * 2.220446049250313e-16)) goto LAB_1085719e4;
  if (param_2 == 0) {
    _objc_retain(0);
    lVar10 = 0;
LAB_108571d90:
    dVar25 = 0.0;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_108571d90;
    dVar25 = *(double *)(lVar10 + 0x78);
  }
  _objc_release(lVar10);
  dVar24 = -dVar25;
  if (0.0 <= dVar25) {
    dVar24 = dVar25;
  }
  dVar20 = dVar20 / dVar24;
LAB_1085719e4:
  puVar3 = PTR_PTR_1126c4910;
  if (param_2 == 0) {
    _objc_retain(0);
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar11);
  }
  func_0x00010bf5a260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126da0b0;
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  if (param_2 == 0) {
    _objc_retain(0);
    uStack_cc = (undefined4)*(undefined8 *)(param_1 + 0x20);
    func_0x00010beb2a20();
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(0);
    lVar10 = 0;
    lVar15 = 0;
    lVar12 = 0;
    lVar13 = 0;
    lVar19 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    lStack_c8 = 0;
    uStack_f0 = 0;
    bVar9 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar18 = 0;
    bVar8 = 0;
  }
  else {
    lStack_c8 = *(long *)(param_2 + 8);
    _objc_retain(lStack_c8);
    if (lStack_c8 == 0) {
      uStack_f0 = 0;
    }
    else {
      uStack_f0 = *(undefined8 *)(lStack_c8 + 0x50);
    }
    uStack_cc = (undefined4)*(undefined8 *)(param_1 + 0x20);
    func_0x00010beb2a20();
    lStack_d8 = *(long *)(param_2 + 8);
    _objc_retain(lStack_d8);
    if (lStack_d8 == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = *(byte *)(lStack_d8 + 9);
    }
    lStack_e0 = *(long *)(param_2 + 8);
    _objc_retain(lStack_e0);
    if (lStack_e0 == 0) {
      uStack_100 = 0;
    }
    else {
      uStack_100 = *(undefined8 *)(lStack_e0 + 0x60);
    }
    lVar19 = *(long *)(param_2 + 8);
    _objc_retain(lVar19);
    if (lVar19 == 0) {
      uStack_108 = 0;
    }
    else {
      uStack_108 = *(undefined8 *)(lVar19 + 0x48);
    }
    lVar13 = *(long *)(param_2 + 8);
    _objc_retain(lVar13);
    if (lVar13 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(lVar13 + 0x10);
    }
    lVar12 = *(long *)(param_2 + 8);
    _objc_retain(lVar12);
    if (lVar12 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(lVar12 + 0x58);
    }
    lVar15 = *(long *)(param_2 + 0x10);
    _objc_retain(lVar15);
    if (lVar15 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(lVar15 + 0x60);
    }
    _objc_retain(uVar18);
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    lVar10 = *(long *)(param_2 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = *(byte *)(lVar10 + 0xe);
    }
  }
  func_0x00010b68e0e4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),uVar22,uVar21,
                      uVar11,(double)lStack_e8,dVar20,dVar23,puVar4,uStack_f0,0,uStack_cc,bVar9 & 1,
                      uStack_100,uStack_108,uVar17,dVar25,puVar3,uVar16,uVar18,0xffffffffffffffff,
                      uVar14,bVar8 & 1);
  _objc_release(lVar10);
  _objc_release(uVar18);
  _objc_release(lVar15);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_c8);
  puVar5 = PTR_PTR_1126bc3e0;
  _objc_opt_new(PTR_PTR_1126bc3e0);
  puVar6 = PTR_PTR_1126da0b8;
  _objc_alloc(PTR_PTR_1126da0b8);
  puVar7 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040e80(puVar6);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010c29bac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108571dec; end: 1085722ff; -[SCVideoTranscodingProcessor _createTranscodingConfigurationForClipsEditing:] */

void FUN_108571dec(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_138;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = 0;
  uVar30 = 0;
  uVar29 = 0;
  if (lVar7 != 0) {
    uVar29 = *(undefined8 *)(lVar7 + 0x50);
    uVar30 = *(undefined8 *)(lVar7 + 0x58);
  }
  _objc_release();
  lVar7 = param_3;
  func_0x00010c0bc7a0();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    uVar28 = *(undefined8 *)(lVar8 + 0x10);
  }
  func_0x00010c0df720(uVar28,puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(lVar8 + 0x18);
  }
  func_0x00010c0df720(uVar28,puVar9);
  fVar26 = (float)uVar28;
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df840(puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar8);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df840(puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar8);
  puVar9 = PTR_PTR_1126da120;
  _objc_alloc();
  lVar8 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar8 + 8);
  }
  lVar14 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(lVar14 + 9);
  }
  lVar15 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar15 + 10);
  }
  lVar16 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(lVar16 + 0xb);
  }
  func_0x00010bfb2c80(lVar10);
  fVar27 = fVar26;
  func_0x00010bfb2c80(lVar11);
  lVar17 = lVar12;
  func_0x00010c2827c0();
  lVar18 = lVar13;
  func_0x00010c2827c0();
  lVar19 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar19 == 0) {
    uStack_138 = 0;
  }
  else {
    uStack_138 = *(undefined8 *)(lVar19 + 0x30);
  }
  lVar20 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar20 == 0) {
    bVar24 = 0;
  }
  else {
    bVar24 = *(byte *)(lVar20 + 0xc);
  }
  lVar21 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
  if (lVar21 == 0) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(undefined8 *)(lVar21 + 0x40);
  }
  lVar22 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)puVar5;
  lVar23 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  bVar6 = (int)lVar7 == 0;
  if (bVar6) {
    uVar30 = 0x4094000000000000;
  }
  if (bVar6) {
    uVar29 = 0x4086800000000000;
  }
  func_0x00010b68dc3c(uVar29,uVar30,(double)fVar26,(double)fVar27,uVar28,puVar9,bVar1 & 1,bVar2 & 1,
                      bVar3 & 1,bVar4 & 1,lVar17,lVar18,uStack_138,uVar25,bVar24 & 1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108572300; end: 10857232b;  */

bool FUN_108572300(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_2 == 0) {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar2 = *(double *)(param_2 + 0x50);
    dVar1 = *(double *)(param_2 + 0x58);
  }
  return dVar1 == *(double *)(param_1 + 0x28) && dVar2 == *(double *)(param_1 + 0x20);
}



/* Entry: 10857232c; end: 10857248b;  */

void FUN_10857232c(float param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = *(double *)(param_4 + 0x10);
  }
  func_0x00010bfb2c80(param_3);
  if (dVar3 <= (double)param_1) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    if (param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_4 + 0x10);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar2,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10857248c; end: 1085725c7;  */

void FUN_10857248c(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010c2827c0();
    if (puVar1 == (undefined *)0x0) goto LAB_108572500;
  }
  else {
    puVar2 = *(undefined **)(param_3 + 0x20);
    puVar1 = param_2;
    func_0x00010c2827c0();
    if (puVar1 <= puVar2) {
LAB_108572500:
      _objc_retain(param_2);
      puVar1 = param_2;
      goto LAB_10857250c;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
LAB_10857250c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085725c8; end: 10857274b; -[SCVideoTranscodingProcessor _shouldBlendOverlay] */

bool FUN_1085725c8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  if (lVar2 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
LAB_108572688:
    lVar7 = 0;
LAB_1085726dc:
    _objc_retain(lVar7);
    lVar3 = lVar7;
    func_0x00010bf529e0(lVar7);
    bVar1 = lVar3 != 0;
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 8);
    _objc_retain(lVar4);
    if (lVar4 == 0) {
      _objc_retain(0);
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x68);
      _objc_retain(lVar5);
      if (lVar5 != 0) {
        bVar1 = true;
        goto LAB_10857271c;
      }
    }
    lVar5 = *(long *)(lVar2 + 8);
    _objc_retain(lVar5);
    if (lVar5 == 0) {
      _objc_retain(0);
LAB_1085726c8:
      lVar6 = *(long *)(lVar2 + 8);
      _objc_retain(lVar6);
      if (lVar6 == 0) goto LAB_108572688;
      lVar7 = *(long *)(lVar6 + 0x90);
      goto LAB_1085726dc;
    }
    lVar6 = *(long *)(lVar5 + 0x70);
    _objc_retain(lVar6);
    if (lVar6 == 0) goto LAB_1085726c8;
    bVar1 = true;
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = 0;
LAB_10857271c:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10857274c; end: 1085728cb; -[SCVideoTranscodingProcessor _shouldEnableContentAdaptiveVideoExportWithVideoAsset:rawDataURL:] */

bool FUN_10857274c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x10);
  }
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010bf70a80();
  if (iVar2 == 0) {
    bVar4 = false;
    goto LAB_10857286c;
  }
  if (lVar3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    lVar6 = 0;
    lVar5 = 0;
LAB_1085728b0:
    lVar7 = 0;
LAB_108572800:
    _objc_retain(lVar7);
    lVar8 = lVar7;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      if (lVar3 == 0) {
        _objc_retain(0);
        lVar8 = 0;
LAB_1085728c4:
        bVar4 = false;
      }
      else {
        lVar8 = *(long *)(lVar3 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_1085728c4;
        bVar4 = 0.0 < *(double *)(lVar8 + 0x78);
      }
      bVar1 = false;
      if (param_4 != 0) {
        bVar1 = bVar4;
      }
      bVar4 = false;
      if (param_3 != 0) {
        bVar4 = bVar1;
      }
      _objc_release(lVar8);
    }
    else {
      bVar4 = false;
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  else {
    lVar5 = *(long *)(lVar3 + 8);
    _objc_retain(lVar5);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 8) & 1) == 0)) {
      lVar6 = *(long *)(lVar3 + 8);
      _objc_retain(lVar6);
      if (lVar6 == 0) goto LAB_1085728b0;
      lVar7 = *(long *)(lVar6 + 0x90);
      goto LAB_108572800;
    }
    bVar4 = false;
  }
  _objc_release(lVar5);
LAB_10857286c:
  _objc_release(lVar3);
  return bVar4;
}



/* Entry: 1085728cc; end: 108572997; -[SCVideoTranscodingProcessor _generateTranscodingTaskItemsWithTaskId:videoAsset:videoCompositionOutputBuilder:assetAudioMix:outputURL:processedReason:] */

void FUN_1085728cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da168;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c050e60();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108572998; end: 10857329b; -[SCVideoTranscodingProcessor _startTranscodingTask:completion:] */

void FUN_108572998(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uStack_138;
  undefined *puStack_110;
  undefined1 auStack_d8 [8];
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
  lVar10 = param_1;
  func_0x00010bf2f540();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c06e0e0();
  _objc_release(lVar10);
  if ((int)lVar11 != 0) {
    uVar3 = param_3;
    func_0x00010c26a800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be33100(param_1);
    _objc_release(uVar3);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    goto LAB_108573238;
  }
  if (*(long *)(param_1 + 200) == 0) {
    _objc_retain(0);
    lVar10 = 0;
LAB_108572da8:
    lVar11 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 200) + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_108572da8;
    lVar11 = *(long *)(lVar10 + 8);
  }
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010911c884(lVar11,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar10);
  lVar10 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = *(undefined **)(lVar10 + 0x20);
  }
  _objc_retain(puVar16);
  _objc_release(lVar10);
  if (*(long *)(param_1 + 200) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 200) + 0x10);
  }
  _objc_retain(lVar10);
  lVar11 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    _objc_retain();
    lVar12 = 0;
LAB_108572dc8:
    uVar2 = 0;
  }
  else {
    lVar12 = *(long *)(lVar11 + 8);
    _objc_retain(lVar12);
    if (lVar12 == 0) goto LAB_108572dc8;
    uVar2 = *(undefined8 *)(lVar12 + 0xd8);
  }
  _objc_retain();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  if (*(long *)(param_1 + 200) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 200) + 0x10);
  }
  _objc_retain(lVar10);
  lVar11 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    _objc_retain();
    lVar12 = 0;
LAB_108572de0:
    lVar13 = 0;
  }
  else {
    lVar12 = *(long *)(lVar11 + 8);
    _objc_retain(lVar12);
    if (lVar12 == 0) goto LAB_108572de0;
    lVar13 = *(long *)(lVar12 + 0xf0);
  }
  _objc_retain(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  uVar3 = *(ulong *)(param_1 + 0x98);
  func_0x00010bf1f440();
  puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_110 = (undefined *)0x0;
  if (((uVar3 & 1) == 0) && (lVar13 != 0)) {
    if (*(double *)(lVar13 + 0x38) <= 0.0) {
      puStack_110 = (undefined *)0x0;
    }
    else {
      _CMTimeMakeWithSeconds(&uStack_a0,1000000000);
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar15;
    }
  }
  uVar3 = param_3;
  func_0x00010c065b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar7 = param_3;
  if (uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar15);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
LAB_108572d6c:
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar15 == (undefined *)0x0) goto LAB_108572d6c;
      puVar5 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      if (puVar5 == (undefined *)0x0) {
        _objc_retain();
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_b8 = 0;
        _objc_retain(0);
        lVar10 = 0;
LAB_108572e00:
        lVar11 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
      }
      else {
        lVar10 = *(long *)(puVar5 + 0x18);
        _objc_retain(lVar10);
        if (lVar10 == 0) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
        }
        else {
          func_0x00010bdc1140(&uStack_b8,lVar10);
        }
        lVar11 = *(long *)(puVar5 + 0x20);
        _objc_retain(lVar11);
        if (lVar11 == 0) goto LAB_108572e00;
        func_0x00010bdc1140(&uStack_d0,lVar11);
      }
      _CMTimeRangeMake(&uStack_a0,&uStack_b8,&uStack_d0);
      func_0x00010c297240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(puVar5);
    }
    uVar3 = param_3;
    func_0x00010c2991a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(puVar5 + 0x38);
    }
    _objc_retain(uVar14);
    lVar10 = param_1;
    func_0x00010beb3680();
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126da0c0;
    _objc_alloc(PTR_PTR_1126da0c0);
    func_0x00010c2991a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar10 == 0) {
      uStack_138 = 0;
    }
    else {
      puVar5 = puVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        uStack_138 = 0;
      }
      else {
        uStack_138 = *(undefined8 *)(puVar5 + 0x38);
      }
      _objc_retain(uStack_138);
    }
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    uStack_90 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf0af40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf0b5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e1e0(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar8);
    if ((int)lVar10 != 0) {
      _objc_release(uStack_138);
      goto LAB_108572fd0;
    }
  }
  else {
    puVar6 = PTR_PTR_1126da0c0;
    _objc_alloc(PTR_PTR_1126da0c0);
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065b80();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c065b60(param_3);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e1e0(puVar6);
LAB_108572fd0:
    _objc_release(puVar5);
  }
  _objc_release(uVar7);
  _objc_release(puVar15);
  uVar3 = param_3;
  func_0x00010c0ef100(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29baa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bfe8780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf0f8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bee9120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2221e0(param_1);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar3);
  lVar10 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26a800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb4e0(lVar10);
  _objc_release(puVar15);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_initWeak(&uStack_a0,param_1);
  lVar10 = param_1;
  func_0x00010c29bb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,&uStack_a0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bea17c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2505c0(lVar10);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(&uStack_a0);
  _objc_release(puVar6);
  _objc_release(puStack_110);
  _objc_release(lVar13);
  _objc_release(uVar2);
  _objc_release(puVar16);
  _objc_release(lVar1);
LAB_108573238:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10857329c; end: 1085734fb;  */

void FUN_10857329c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    goto LAB_1085734c8;
  }
  puVar5 = puVar1;
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c252d60();
  _objc_release(puVar5);
  if (puVar2 < (undefined *)0x3) {
    puVar2 = puVar1;
    func_0x00010c29bb00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c29bb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252d60();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar5);
      puVar5 = puVar3;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26a800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be33120(puVar1);
    _objc_release(uVar4);
LAB_1085734b4:
    _objc_release(puVar5);
  }
  else {
    if (puVar2 == (undefined *)0x3) {
      puVar5 = *(undefined **)(param_1 + 0x20);
      func_0x00010c26a800(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be33100(puVar1);
      goto LAB_1085734b4;
    }
    if (puVar2 == (undefined *)0x4) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0ef100(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      puVar5 = puVar1;
      func_0x00010be33160();
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_48);
      if (((ulong)puVar5 & 1) != 0) goto LAB_1085734c8;
    }
  }
  func_0x00010bde3440(puVar1);
LAB_1085734c8:
  _objc_release(puVar1);
  return;
}



/* Entry: 1085734fc; end: 10857354b;  */

void FUN_1085734fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
  }
  else {
    func_0x00010bde3440(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10857354c; end: 108573627; -[SCVideoTranscodingProcessor _sessionStatusBlock] */

void FUN_10857354c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x70);
  _objc_retainBlock();
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1085735dc;
    puStack_30 = &UNK_110a55688;
    _objc_retain(lVar1);
    ppuVar2 = &puStack_48;
    lStack_28 = lVar1;
    _objc_retainBlock(ppuVar2);
    _objc_release(lStack_28);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108573628; end: 10857363b; -[SCVideoTranscodingProcessor _completeTranscodingTaskWithCompletion:] */

void FUN_108573628(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108573634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10857363c; end: 108573fe7; -[SCVideoTranscodingProcessor _handleVideoProcessingDidSuccessIntermediateUrl:completion:] */

undefined8
FUN_10857363c(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_110 [8];
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_2;
  func_0x00010c135fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(puVar2 + 0x10);
  }
  _objc_retain(lVar15);
  lVar3 = lVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126da180;
  func_0x00010af203a8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(puVar1 + 8);
  }
  _objc_retain(uVar13);
  func_0x00010af203c8(puVar2,uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar4 = param_2;
  func_0x00010c0ef9a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af2040c(puVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lVar3 == 0) {
    _objc_retain(0);
LAB_1085737b0:
    _objc_release(0);
LAB_1085737b8:
    puVar4 = param_2;
    func_0x00010c29baa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = param_2;
      func_0x00010c29baa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        uVar13 = 1;
      }
      else {
        uVar13 = 1;
        if (*(long *)(puVar4 + 0x30) == 1) {
          uVar13 = 2;
        }
      }
      if (puVar2 != (undefined *)0x0) {
        *(undefined8 *)(puVar2 + 0x18) = uVar13;
        _objc_retain(puVar2);
      }
      _objc_release(puVar2);
      goto LAB_108573818;
    }
  }
  else {
    lVar15 = *(long *)(lVar3 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) goto LAB_1085737b0;
    dVar21 = *(double *)(lVar15 + 0x78);
    _objc_release(lVar15);
    if (0.0 <= dVar21) goto LAB_1085737b8;
    puVar4 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      *(undefined8 *)(puVar2 + 0x18) = 1;
      _objc_retain(puVar2);
    }
LAB_108573818:
    _objc_release(puVar4);
  }
  puVar4 = puVar2;
  func_0x00010af20450();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    _objc_retain();
    lVar15 = 0;
LAB_108573b20:
    uVar13 = 0;
  }
  else {
    lVar15 = *(long *)(puVar5 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) goto LAB_108573b20;
    uVar13 = *(undefined8 *)(lVar15 + 8);
  }
  _objc_retain(uVar13);
  func_0x00010911cc8c(&uStack_c8,uVar13);
  _CMTimeGetSeconds(&uStack_c8);
  fVar22 = (float)param_1;
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(puVar5);
  fVar20 = -1.0;
  if (0.0 < fVar22) {
    lVar15 = *(long *)(param_2 + 0xe0);
    func_0x00010bfb6e80();
    fVar20 = (float)lVar15 / fVar22;
  }
  if (lVar3 == 0) {
    _objc_retain(0);
LAB_108573b30:
    _objc_release(0);
  }
  else {
    lVar15 = *(long *)(lVar3 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) goto LAB_108573b30;
    dVar21 = *(double *)(lVar15 + 0x78);
    _objc_release(lVar15);
    if (dVar21 < 0.0) {
      lVar15 = *(long *)(lVar3 + 8);
      _objc_retain(lVar15);
      if (lVar15 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar15 + 0x88);
      }
      puVar5 = param_2;
      func_0x00010c29baa0();
      _objc_retainAutoreleasedReturnValue();
      dVar21 = 0.0;
      uVar19 = 0;
      uVar18 = 0;
      if (puVar5 != (undefined *)0x0) {
        uVar18 = *(undefined8 *)(puVar5 + 0x50);
        uVar19 = *(undefined8 *)(puVar5 + 0x58);
      }
      func_0x00010b69119c(&uStack_c8,uVar18,uVar19,uVar13);
      _objc_release(puVar5);
      _objc_release(lVar15);
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010c29baa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        dVar21 = (double)(long)*(double *)(puVar6 + 0x10);
      }
      _objc_release();
      puVar6 = PTR_PTR_1126da188;
      _objc_alloc(PTR_PTR_1126da188);
      if (puVar1 == (undefined *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(puVar1 + 8);
      }
      _objc_retain(uVar13);
      puVar7 = param_2;
      func_0x00010c29baa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        uVar18 = 0;
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined8 *)(puVar7 + 0x50);
        uVar18 = *(undefined8 *)(puVar7 + 0x58);
      }
      uVar16 = *(undefined8 *)(lVar3 + 8);
      _objc_retain(uVar16);
      uStack_f8 = uStack_c0;
      uStack_100 = uStack_c8;
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      uStack_d8 = uStack_a0;
      uStack_e0 = uStack_a8;
      func_0x00010c060c00(dVar21,uVar19,uVar18,puVar6);
      _objc_release(uVar16);
      _objc_release(puVar7);
      _objc_release(uVar13);
      _objc_initWeak(&uStack_100,param_2);
      _objc_copyWeak(auStack_110,&uStack_100);
      _objc_retain(param_5);
      _objc_retain(puVar1);
      _objc_retain(lVar3);
      fStack_108 = fVar22;
      fStack_104 = fVar20;
      _objc_retain(param_4);
      _objc_retain(puVar4);
      func_0x00010c1156a0(puVar6);
      _objc_release(puVar4);
      _objc_release(param_4);
      _objc_release(lVar3);
      _objc_release(puVar1);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(&uStack_100);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar13 = 1;
      goto LAB_108573eb4;
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(puVar1 + 8);
  }
  _objc_retain(uVar13);
  uVar18 = uVar13;
  func_0x00010c0f5800(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad040();
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(uVar13);
  _objc_release(puVar5);
  if (lVar3 == 0) {
    _objc_retain(0);
LAB_108573f24:
    _objc_retain(0);
    uVar13 = 0;
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(lVar3 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) goto LAB_108573f24;
    uVar13 = *(undefined8 *)(lVar15 + 0xf0);
    _objc_retain(uVar13);
  }
  _objc_release(uVar13);
  _objc_release(lVar15);
  puVar5 = param_2;
  func_0x00010c26a840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1157e0();
  _objc_release(puVar5);
  if (puVar1 == (undefined *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(puVar1 + 8);
  }
  _objc_retain(uVar13);
  FUN_108574510(uVar13,&uStack_c8,&uStack_100);
  _objc_release(uVar13);
  puVar5 = param_2;
  func_0x00010c26a840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_retain(0);
    lVar15 = 0;
LAB_108573f50:
    uVar13 = 0;
  }
  else {
    lVar15 = *(long *)(lVar3 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) goto LAB_108573f50;
    uVar13 = *(undefined8 *)(lVar15 + 0x38);
  }
  _objc_retain();
  puVar7 = param_2;
  func_0x00010be375c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_2;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_2;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(puVar9 + 0x50);
    uVar18 = *(undefined8 *)(puVar9 + 0x58);
  }
  puVar10 = param_2;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_2;
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeda0();
  if (lVar3 == 0) {
    _objc_retain(0);
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar3 + 8);
    _objc_retain(uVar16);
  }
  puVar12 = param_2;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_retain(0);
    lVar14 = 0;
LAB_108573f94:
    uVar17 = 0;
  }
  else {
    lVar14 = *(long *)(lVar3 + 8);
    _objc_retain(lVar14);
    if (lVar14 == 0) goto LAB_108573f94;
    uVar17 = *(undefined8 *)(lVar14 + 0x28);
  }
  _objc_retain(uVar17);
  func_0x00010be51460(uVar19,uVar18,fVar20,param_2);
  _objc_release(uVar17);
  _objc_release(lVar14);
  _objc_release(puVar12);
  _objc_release(uVar16);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(puVar6);
  _objc_release(puVar5);
  lVar15 = *(long *)(param_2 + 0x60);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x10))(lVar15,0,puVar4,0);
  }
  uVar13 = 0;
LAB_108573eb4:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar13;
}



/* Entry: 108573fe8; end: 10857450f;  */

void FUN_108573fe8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10857444c;
  if (param_2 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    func_0x00010c26a840(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c26a800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be33120(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar12);
    _objc_release(puVar2);
    goto LAB_10857444c;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  _objc_retain(uVar15);
  uVar17 = uVar15;
  func_0x00010c0f5800(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(puVar2);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  _objc_retain(uVar15);
  FUN_108574510(uVar15,auStack_90,auStack_98);
  _objc_release(uVar15);
  lVar12 = lVar1;
  func_0x00010c26a840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
    lVar13 = 0;
LAB_1085744a4:
    uVar15 = 0;
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar13);
    if (lVar13 == 0) goto LAB_1085744a4;
    uVar15 = *(undefined8 *)(lVar13 + 0x38);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_1085744b4:
    _objc_retain(0);
    uVar17 = 0;
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar16);
    if (lVar16 == 0) goto LAB_1085744b4;
    uVar17 = *(undefined8 *)(lVar16 + 0xf0);
    _objc_retain(uVar17);
  }
  lVar5 = lVar1;
  func_0x00010bfe8780();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfe8580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar20 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar8 + 0x50);
    uVar20 = *(undefined8 *)(lVar8 + 0x58);
  }
  lVar9 = lVar1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeda0();
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar18);
  }
  uVar22 = *(undefined4 *)(param_1 + 0x5c);
  lVar11 = lVar1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
    lVar14 = 0;
LAB_108574508:
    uVar19 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(lVar14);
    if (lVar14 == 0) goto LAB_108574508;
    uVar19 = *(undefined8 *)(lVar14 + 0x28);
  }
  _objc_retain(uVar19);
  func_0x00010be51460(uVar21,uVar20,uVar22,lVar1);
  _objc_release(uVar19);
  _objc_release(lVar14);
  _objc_release(lVar11);
  _objc_release(uVar18);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar2);
  lVar12 = *(long *)(lVar1 + 0x60);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x10))(lVar12,0,*(undefined8 *)(param_1 + 0x40),0);
  }
LAB_10857444c:
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108574510; end: 108574677;  */

void FUN_108574510(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x00010c26f620(auStack_70,puVar3);
      uStack_88 = uStack_50;
      dStack_90 = dStack_58;
      uStack_80 = uStack_48;
      dVar6 = dStack_58;
      _CMTimeGetSeconds(&dStack_90);
      lVar5 = (long)(dVar6 * 1000.0);
    }
    *param_2 = lVar5;
    if (puVar4 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x00010c26f620(auStack_70,puVar4);
      uStack_88 = uStack_50;
      dStack_90 = dStack_58;
      uStack_80 = uStack_48;
      _CMTimeGetSeconds(&dStack_90);
      lVar5 = (long)(dStack_58 * 1000.0);
    }
    *param_3 = lVar5;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108574678; end: 108574903; -[SCVideoTranscodingProcessor _imageProcessCommandInfo] */

void FUN_108574678(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  ppuVar1 = param_1;
  func_0x00010bfe8780();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar5 = param_1;
    func_0x00010c135920();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = ppuVar5[1];
    }
    _objc_retain(puVar7);
    ppuVar6 = param_1;
    func_0x00010beb74e0(param_1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    if (((ulong)ppuVar6 & 1) == 0) {
      func_0x00010bfe8780(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = param_1;
      func_0x00010bfe8580();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      goto LAB_1085748c0;
    }
  }
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    _objc_retain();
    puVar7 = (undefined *)0x0;
LAB_1085748f4:
    ppuVar5 = (undefined **)0x0;
  }
  else {
    puVar7 = param_1[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) goto LAB_1085748f4;
    ppuVar5 = *(undefined ***)(puVar7 + 0x10);
  }
  _objc_retain(ppuVar5);
  _objc_release(puVar7);
  _objc_release(param_1);
  ppuVar1 = ppuVar5;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar6 = (undefined **)0x0;
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      ppuVar1 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar1 == (undefined **)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = ppuVar1[1];
      }
      _objc_retain(puVar7);
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar5;
      func_0x00010c0dfd40(ppuVar5,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar1 == (undefined **)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = ppuVar1[5];
      }
      _objc_retain(puVar9);
      _objc_release(ppuVar1);
      puVar2 = puVar9;
      func_0x00010c0b8600(puVar9,param_2,&PTR___NSConcreteGlobalBlock_110a55708);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ee2f78);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar8;
      func_0x00010c25ce40(ppuVar8,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar7);
      ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      ppuVar4 = ppuVar5;
      func_0x00010bf529e0();
      ppuVar8 = ppuVar1;
    } while (ppuVar6 < ppuVar4);
  }
LAB_1085748c0:
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108574904; end: 10857491b;  */

void FUN_108574904(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10857491c; end: 108574a2f; -[SCVideoTranscodingProcessor _markFrameStatisticsForTaskId:] */

void FUN_10857491c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_1;
    func_0x00010c29bb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb6e80();
    func_0x00010c0df7a0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c29bb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0d4440();
    func_0x00010c0df7c0(puVar5,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb660(lVar1,param_2,param_3,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108574a30; end: 108574b9b; -[SCVideoTranscodingProcessor _handleVideoProcessingDidFailWithTaskId:error:] */

void FUN_108574a30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be5d480(param_1);
  lVar6 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfe8780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe8580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe86e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f540();
  func_0x00010c255ce0(lVar6);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,2,0,param_4);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108574b9c; end: 10857533f; -[SCVideoTranscodingProcessor _handleVideoProcessingDidSkipTranscoding:videoBitrate:audioBitrate:sourceVideoCodec:] */

/* WARNING: Removing unreachable block (ram,0x000108574c4c) */

void FUN_108574b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_f0;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_108575160;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
  }
  _objc_retain(uVar11);
  func_0x00010bf52020(puVar1);
  _objc_retain(0);
  _objc_release(uVar11);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar2 + 0x10);
  }
  _objc_retain(lVar12);
  lVar3 = lVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
  }
  _objc_retain(uVar11);
  uVar5 = uVar11;
  func_0x00010c0f5800(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad040();
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    lVar10 = 0;
    lVar15 = 0;
    lVar14 = 0;
    uVar11 = 0;
    uStack_158 = 0;
LAB_1085751f8:
    uVar5 = 0;
  }
  else {
    lVar14 = *(long *)(lVar3 + 8);
    _objc_retain(lVar14);
    if (lVar14 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar14 + 0x28);
    }
    _objc_retain(uVar11);
    lVar15 = *(long *)(lVar3 + 8);
    _objc_retain(lVar15);
    if (lVar15 == 0) {
      uStack_158 = 0;
    }
    else {
      uStack_158 = *(undefined8 *)(lVar15 + 0x30);
    }
    _objc_retain();
    lVar10 = *(long *)(lVar3 + 8);
    _objc_retain(lVar10);
    if (lVar10 == 0) goto LAB_1085751f8;
    uVar5 = *(undefined8 *)(lVar10 + 0x38);
  }
  _objc_retain();
  lVar6 = param_1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29baa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar7 + 0x50);
    uVar17 = *(undefined8 *)(lVar7 + 0x58);
  }
  if (lVar3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uStack_118 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
LAB_108575244:
    _objc_retain(0);
    _objc_retain(0);
    if (lVar3 != 0) {
      uVar8 = 0;
      lStack_140 = 0;
      lStack_138 = 0;
      goto LAB_108574ee0;
    }
    _objc_retain(0);
    _objc_retain(0);
    lStack_148 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uVar8 = 0;
    uVar19 = 0;
LAB_108575288:
    _objc_retain(0);
    uVar9 = 0;
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lStack_168 = 0;
      lStack_160 = 0;
      goto LAB_108574f44;
    }
    _objc_retain(0);
    lVar16 = 0;
    lStack_168 = 0;
    lStack_160 = 0;
LAB_1085752bc:
    uVar13 = 0;
  }
  else {
    uStack_f0 = *(undefined8 *)(lVar3 + 8);
    _objc_retain(uStack_f0);
    uStack_108 = *(undefined8 *)(lVar3 + 8);
    _objc_retain(uStack_108);
    uStack_118 = *(undefined8 *)(lVar3 + 8);
    _objc_retain(uStack_118);
    lStack_138 = *(long *)(lVar3 + 8);
    _objc_retain(lStack_138);
    if (lStack_138 == 0) goto LAB_108575244;
    lStack_140 = *(long *)(lStack_138 + 0xf0);
    _objc_retain(lStack_140);
    if (lStack_140 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lStack_140 + 0x18);
    }
    _objc_retain();
LAB_108574ee0:
    lStack_148 = *(long *)(lVar3 + 8);
    _objc_retain(lStack_148);
    if (lStack_148 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined8 *)(lStack_148 + 0x78);
    }
    lStack_160 = *(long *)(lVar3 + 8);
    _objc_retain(lStack_160);
    if (lStack_160 == 0) goto LAB_108575288;
    lStack_168 = *(long *)(lStack_160 + 0xf0);
    _objc_retain(lStack_168);
    if (lStack_168 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lStack_168 + 0x10);
    }
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
LAB_108574f44:
    lVar16 = *(long *)(lVar3 + 8);
    _objc_retain(lVar16);
    if (lVar16 == 0) goto LAB_1085752bc;
    uVar13 = *(undefined8 *)(lVar16 + 0xe8);
  }
  _objc_retain(uVar13);
  func_0x00010c0afac0(uVar18,uVar17,uVar19,lVar2);
  _objc_release(uVar13);
  _objc_release(lVar16);
  _objc_release(uVar9);
  _objc_release(lStack_168);
  _objc_release(lStack_160);
  _objc_release(lStack_148);
  _objc_release(uVar8);
  _objc_release(lStack_140);
  _objc_release(lStack_138);
  _objc_release(uStack_118);
  _objc_release(uStack_108);
  _objc_release(uStack_f0);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar10);
  _objc_release(uStack_158);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126da180;
  func_0x00010af203a8();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
  }
  _objc_retain(uVar11);
  func_0x00010af203c8(puVar1,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  lVar2 = param_1;
  func_0x00010c0ef9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af2040c(puVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (puVar1 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  puVar4 = puVar1;
  func_0x00010af20450(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x60) + 0x10))(*(long *)(param_1 + 0x60),0,puVar4,0);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(0);
LAB_108575160:
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(0x3f800000);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108575340; end: 1085755e7; -[SCVideoTranscodingProcessor _logCameraVideoTranscodingMultipleOutputSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputVideoFilesNumber:outputVideoFileIndex:outputFrameRate:keyframeInterval:captureSessionId:] */

void FUN_108575340(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
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
  undefined1 uStack_90;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000008);
  iVar4 = (int)*(undefined8 *)(param_4 + 0x78);
  _objc_retain(in_stack_00000048);
  _objc_retain(param_7);
  func_0x00010bf929a0();
  if (iVar4 != 0) {
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1085755e8;
    puStack_f8 = &UNK_110a55728;
    uStack_d8 = param_8;
    _objc_retain(param_9);
    uStack_f0 = param_9;
    uStack_d0 = param_10;
    _objc_retain(in_stack_00000008);
    uStack_e8 = in_stack_00000008;
    uStack_b8 = in_stack_00000010;
    uStack_b0 = in_stack_00000018;
    uStack_90 = in_stack_00000020;
    uStack_a8 = in_stack_00000028;
    uStack_a0 = in_stack_00000030;
    uStack_98 = in_stack_00000038;
    uStack_c8 = param_1;
    uStack_c0 = param_2;
    _objc_retain(param_6);
    uStack_e0 = param_6;
    func_0x000107c312cc("APPSTORE",&puStack_110);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
  }
  func_0x00010be5d480(param_4);
  lVar1 = param_4;
  func_0x00010c0b3760(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe86e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f540();
  func_0x00010c255d00(param_1,param_2,param_3,lVar1);
  _objc_release(in_stack_00000048);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(in_stack_00000008);
  _objc_release(param_9);
  _objc_release(param_6);
  return;
}



/* Entry: 1085755e8; end: 10857592f;  */

void FUN_1085755e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b3130;
  func_0x00010c22bc20(PTR_PTR_1126b3130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9ae0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_10858904c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar14 = &PTR____CFConstantStringClassReference_110ee3118;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(ppuVar14);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be5d480(puVar13);
  puVar1 = puVar13;
  func_0x00010c0b3760(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010bfe8780(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe8580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar13;
  func_0x00010c29bb00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f540();
  func_0x00010c255cc0(puVar1);
  _objc_release(ppuVar14);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  lVar15 = *(long *)(puVar13 + 0x60);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x10))(lVar15,1,0,0);
  }
  if (*(long *)(puVar13 + 0x68) != 0) {
    (**(code **)(*(long *)(puVar13 + 0x68) + 0x10))(0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108575930; end: 108575a9f; -[SCVideoTranscodingProcessor _handleVideoProcessingDidCancelWithTaskId:] */

void FUN_108575930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be5d480(param_1);
  lVar6 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfe8780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe8580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f540();
  func_0x00010c255cc0(lVar6);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,1,0,0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108575aa0; end: 108575c2f; -[SCVideoTranscodingProcessor _computeVideoSourceSizeWithVideoTrack:] */

undefined1  [16]
FUN_108575aa0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_80 [16];
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_5);
  func_0x00010c135920();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x10);
  }
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(param_3);
  if (lVar4 == 0) {
    _objc_retain(0);
    lVar5 = 0;
LAB_108575c10:
    dVar24 = 0.0;
    dVar25 = 0.0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 8);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_108575c10;
    dVar25 = *(double *)(lVar5 + 0x108);
    dVar24 = *(double *)(lVar5 + 0x110);
  }
  dVar26 = *(double *)PTR__CGSizeZero_110347620;
  dVar27 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  _objc_release(lVar5);
  bVar3 = false;
  if ((dVar25 == dVar26) && (bVar3 = false, !NAN(dVar24) && !NAN(dVar27))) {
    bVar3 = dVar24 == dVar27;
  }
  if (bVar3) {
    dVar24 = (double)func_0x00010c0d5d20(param_5);
    if (param_5 == 0) {
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      dStack_70 = 0.0;
      dStack_68 = 0.0;
    }
    else {
      func_0x00010c106f40(auStack_80,param_5);
      uVar16 = (undefined1)auStack_80._8_8_;
      uVar17 = SUB81(auStack_80._8_8_,1);
      uVar18 = SUB81(auStack_80._8_8_,2);
      uVar19 = SUB81(auStack_80._8_8_,3);
      uVar20 = SUB81(auStack_80._8_8_,4);
      uVar21 = SUB81(auStack_80._8_8_,5);
      uVar22 = SUB81(auStack_80._8_8_,6);
      uVar23 = SUB81(auStack_80._8_8_,7);
      uVar8 = (undefined1)auStack_80._0_8_;
      uVar9 = SUB81(auStack_80._0_8_,1);
      uVar10 = SUB81(auStack_80._0_8_,2);
      uVar11 = SUB81(auStack_80._0_8_,3);
      uVar12 = SUB81(auStack_80._0_8_,4);
      uVar13 = SUB81(auStack_80._0_8_,5);
      uVar14 = SUB81(auStack_80._0_8_,6);
      uVar15 = SUB81(auStack_80._0_8_,7);
    }
    dVar25 = dStack_70 * param_2 +
             (double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(uVar11
                                                  ,CONCAT12(uVar10,CONCAT11(uVar9,uVar8))))))) *
             dVar24;
    dVar26 = dStack_68 * param_2 +
             (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19
                                                  ,CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))))) *
             dVar24;
    auVar6._0_8_ = -(ulong)(dVar25 < 0.0);
    auVar6._8_8_ = -(ulong)(dVar26 < 0.0);
    dVar24 = -dVar26;
    auVar1._8_8_ = dVar26;
    auVar1._0_8_ = dVar25;
    auVar2[8] = SUB81(dVar24,0);
    auVar2._0_8_ = -dVar25;
    auVar2[9] = (char)((ulong)dVar24 >> 8);
    auVar2[10] = (char)((ulong)dVar24 >> 0x10);
    auVar2[0xb] = (char)((ulong)dVar24 >> 0x18);
    auVar2[0xc] = (char)((ulong)dVar24 >> 0x20);
    auVar2[0xd] = (char)((ulong)dVar24 >> 0x28);
    auVar2[0xe] = (char)((ulong)dVar24 >> 0x30);
    auVar2[0xf] = (char)((ulong)dVar24 >> 0x38);
    auVar7._8_8_ = dVar26;
    auVar7._0_8_ = dVar25;
    auVar7 = auVar7 ^ (auVar1 ^ auVar2) & auVar6;
    goto LAB_108575bc0;
  }
  if (lVar4 == 0) {
    _objc_retain(0);
    lVar5 = 0;
LAB_108575c28:
    auVar7 = ZEXT316(0);
  }
  else {
    lVar5 = *(long *)(lVar4 + 8);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_108575c28;
    auVar7 = *(undefined1 (*) [16])(lVar5 + 0x108);
  }
  _objc_release(lVar5);
LAB_108575bc0:
  _objc_release(lVar4);
  _objc_release(param_5);
  return auVar7;
}



/* Entry: 108575c30; end: 108575d43; -[SCVideoTranscodingProcessor _videoTranscodingSessionWithInputMediaProvider:outputVideoURL:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:] */

void FUN_108575c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da0d0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e080();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108575d44; end: 108575e13; -[SCVideoTranscodingProcessor _shouldTriggerIPPCommandThroughCustomCompositor:] */

uint FUN_108575d44(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(param_3);
  func_0x00010bf1f440(uVar4);
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010911c884(uVar5,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010beb74e0();
  _objc_release(param_3);
  uVar1 = 0;
  if ((int)param_1 != 0) {
    uVar1 = (uint)(1 < uVar3) | (uint)uVar4;
  }
  return uVar1 & 1;
}



/* Entry: 108575e14; end: 108575eeb; -[SCVideoTranscodingProcessor _shouldUseUpgradedIpp:] */

undefined4 FUN_108575e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x10);
  }
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + 0x28);
  }
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar6);
  _objc_release(param_3);
  uVar3 = uVar6;
  func_0x00010911e848(uVar6);
  _objc_release(uVar6);
  uVar4 = (undefined4)uVar3;
  if (lVar2 != 0) {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 108575eec; end: 10857627b; -[SCVideoTranscodingProcessor _renderEffectsFrom:videoRenderSize:useOverlayImageAsMask:] */

void FUN_108575eec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  _objc_retain(param_5);
  uVar6 = param_3;
  func_0x00010beb74e0();
  if ((uVar6 & 1) == 0) {
    if (param_5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_5 + 0x10);
    }
    _objc_retain(uVar6);
    goto LAB_1085761e0;
  }
  if (param_5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_5 + 8);
  }
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010911c884(lVar4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    if (param_5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_5 + 0x10);
    }
    _objc_retain(uVar6);
  }
  else {
    if (param_5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_5 + 8);
    }
    _objc_retain(uVar5);
    func_0x00010911cc8c(auStack_90,uVar5);
    _objc_release(uVar5);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc0000000;
    pcStack_a0 = FUN_10857627c;
    puStack_98 = &UNK_110a55758;
    lVar4 = lVar1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar2 + 0x20);
      }
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bf529e0();
      _objc_release(lVar7);
      _objc_release(lVar2);
      if (lVar3 != 1) goto LAB_108576160;
      lVar2 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar2 + 0x20);
      }
      _objc_retain(lVar7);
      lVar3 = lVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + 8);
      }
      _objc_retain(uVar5);
      _objc_release(lVar3);
      _objc_release(lVar7);
      _objc_release(lVar2);
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3032000000;
      pcStack_c8 = FUN_10856e5ac;
      uStack_c0 = 0x10856e5bc;
      uStack_b8 = 0;
      func_0x00010c0bc940(uVar5);
      if (puStack_d8[5] == 0) {
        if (param_5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(ulong *)(param_5 + 0x10);
        }
        _objc_retain(uVar6);
      }
      else {
        func_0x00010be1b740(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == 0) {
          if (param_5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(ulong *)(param_5 + 0x10);
          }
          _objc_retain(uVar6);
        }
        else {
          _objc_retain(param_3);
          uVar6 = param_3;
        }
        _objc_release(param_3);
      }
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(uStack_b8);
      _objc_release(uVar5);
    }
    else {
LAB_108576160:
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(param_5 + 0x10);
      }
      _objc_retain(uVar6);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
LAB_1085761e0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10857627c; end: 10857640f;  */

bool FUN_10857627c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    if (param_2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
    }
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_retain();
LAB_108576328:
      lVar6 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      lVar6 = *(long *)(lVar2 + 0x18);
      _objc_retain(lVar6);
      if (lVar6 == 0) goto LAB_108576328;
      func_0x00010bdc1140(&uStack_58,lVar6);
    }
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar4);
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    uStack_60 = uStack_48;
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar3 = &uStack_70;
    _CMTimeCompare(puVar3,&uStack_90);
    if ((int)puVar3 == 0) {
      if (param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
      }
      _objc_retain(uVar5);
      func_0x00010911fcd0(&uStack_70,uVar5);
      _objc_release(uVar5);
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uStack_80 = uStack_60;
      uStack_a8 = *(undefined8 *)(param_1 + 0x28);
      uStack_b0 = *(undefined8 *)(param_1 + 0x20);
      uStack_a0 = *(undefined8 *)(param_1 + 0x30);
      puVar3 = &uStack_90;
      _CMTimeCompare(puVar3,&uStack_b0);
      bVar1 = (int)puVar3 == 0;
      goto LAB_1085763e4;
    }
  }
  bVar1 = false;
LAB_1085763e4:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108576410; end: 108576417;  */

void FUN_108576410(void)

{
  return;
}



/* Entry: 108576418; end: 10857644f;  */

void FUN_108576418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576450; end: 10857694b; -[SCVideoTranscodingProcessor _generateNewDagWithNGSMESnap:overlayImage:videoRenderSize:useOverlayImageAsMask:] */

void FUN_108576450(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,int param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar8 = param_6;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (param_7 == 0) {
    _CGImageRetain();
    if (lVar8 == 0) goto LAB_1085768ec;
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = uVar1;
    func_0x00010bf1cbe0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar1;
    func_0x00010bf1cbc0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b690c88(param_1,param_2);
    if (lVar8 == 0) {
LAB_1085768ec:
      puStack_1b8 = (undefined *)0x0;
      goto LAB_1085768f0;
    }
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = uVar1;
    func_0x00010c0d0fe0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar1;
    func_0x00010c0d0fc0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  lStack_1f0 = lVar8;
  lStack_1e8 = param_6;
  if (param_5 == 0) goto LAB_108576944;
  lVar8 = *(long *)(param_5 + 0x10);
  while( true ) {
    _objc_retain(lVar8);
    puStack_1b8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar13 = *plStack_140;
      do {
        lVar14 = 0;
        do {
          if (*plStack_140 != lVar13) {
            _objc_enumerationMutation(lVar8);
          }
          lVar15 = *(long *)(lStack_148 + lVar14 * 8);
          if (lVar15 == 0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            puVar12 = *(undefined **)(lVar15 + 0x28);
          }
          _objc_retain(puVar12);
          puVar3 = puVar12;
          func_0x000109122694();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf529e0();
          puVar6 = puVar3;
          if (puVar4 == (undefined *)0x0) {
            if (param_5 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *(long *)(param_5 + 8);
            }
            _objc_retain(lVar9);
            lVar5 = lVar9;
            func_0x00010911c884(lVar9,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar9);
            lVar9 = lVar5;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(long *)(lVar9 + 0x18);
            }
            _objc_retain(lVar10);
            _objc_release(lVar9);
            if (lVar10 != 0) {
              puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
              lStack_108 = lVar10;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
            }
            _objc_release(lVar10);
            _objc_release(lVar5);
          }
          uVar7 = *(undefined8 *)(param_3 + 0xb0);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar7;
          func_0x00010bfcce00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          if (lVar15 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar15 + 0x28);
          }
          _objc_retain(uVar7);
          func_0x00010befa160(puVar3);
          _objc_release(uVar7);
          func_0x00010befa120(puVar3);
          puVar4 = PTR_PTR_1126bf6b8;
          _objc_alloc(PTR_PTR_1126bf6b8);
          if (lVar15 == 0) {
            _objc_retain(0);
            uVar11 = 0;
            uVar7 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(lVar15 + 8);
            _objc_retain(uVar11);
            uStack_178 = *(undefined8 *)(lVar15 + 0x40);
            uStack_180 = *(undefined8 *)(lVar15 + 0x38);
            uStack_168 = *(undefined8 *)(lVar15 + 0x50);
            uStack_170 = *(undefined8 *)(lVar15 + 0x48);
            uStack_158 = *(undefined8 *)(lVar15 + 0x60);
            uStack_160 = *(undefined8 *)(lVar15 + 0x58);
            uStack_188 = *(undefined8 *)(lVar15 + 0x90);
            uStack_190 = *(undefined8 *)(lVar15 + 0x88);
            uStack_198 = *(undefined8 *)(lVar15 + 0x80);
            uStack_1a0 = *(undefined8 *)(lVar15 + 0x78);
            uStack_1a8 = *(undefined8 *)(lVar15 + 0x70);
            uStack_1b0 = *(undefined8 *)(lVar15 + 0x68);
            uVar7 = *(undefined8 *)(lVar15 + 0x10);
          }
          func_0x00010b7432f8(puVar4,uVar11,&uStack_180,&uStack_1b0,uVar7,0,0,puVar3,0);
          _objc_release(uVar11);
          func_0x00010befa120(puStack_1b8);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(uVar1);
          _objc_release(puVar6);
          _objc_release(puVar12);
          lVar14 = lVar14 + 1;
        } while (lVar2 != lVar14);
        lVar2 = lVar8;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar8);
    _CGImageRelease(lStack_1f0);
    _objc_release(lVar8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c8);
    param_6 = lStack_1e8;
LAB_1085768f0:
    _objc_release(param_6);
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
LAB_108576944:
    lVar8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1b8);
  return;
}



/* Entry: 10857694c; end: 108576d93; -[SCVideoTranscodingProcessor _videoTranscodingReasons:sourceSize:sourceBitrate:sourceDuration:sourceVideoCodec:sourceAudioCodec:NGSMESnap:] */

undefined *
FUN_10857694c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_98 [24];
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  if (param_7 == 0) {
    _objc_retain(0);
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_7 + 8);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      puVar7 = *(undefined **)(lVar4 + 0x20);
      goto LAB_1085769c0;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_1085769c0:
  _objc_retain(puVar7);
  _objc_release(lVar4);
  puVar9 = PTR_PTR_1126c4910;
  if (puVar7 == (undefined *)0x0) {
    if (param_7 == 0) {
      _objc_retain(0);
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_7 + 8);
      _objc_retain(uVar6);
    }
    func_0x00010bf5a260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar7 = puVar9;
  }
  puVar9 = PTR_PTR_1126da108;
  if (param_7 == 0) {
    _objc_retain(0);
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_7 + 8);
    _objc_retain(uVar6);
  }
  func_0x00010bf91b20();
  _objc_release(uVar6);
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x400;
  }
  else {
    puVar9 = (undefined *)0x800;
    if ((1.0 <= param_1) && (1.0 <= param_2)) {
      func_0x00010bdf4fa0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126da080;
      _CMTimeMake(auStack_98,(long)(param_4 * 1000.0),1000);
      if (param_10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_10 + 8);
      }
      _objc_retain(uVar6);
      uVar1 = uVar6;
      func_0x00010911cde4();
      _objc_retainAutoreleasedReturnValue();
      if (param_10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_10 + 0x10);
      }
      _objc_retain(uVar8);
      func_0x00010bf529e0();
      if (param_10 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_10 + 0x18);
      }
      _objc_retain(uVar5);
      func_0x00010bf529e0(uVar5);
      if (param_7 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        uVar10 = 0;
        lVar4 = 0;
        uVar11 = 0;
      }
      else {
        lVar4 = *(long *)(param_7 + 8);
        _objc_retain(lVar4);
        if (lVar4 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar4 + 0x78);
        }
        uVar10 = *(undefined8 *)(param_7 + 8);
        _objc_retain(uVar10);
      }
      func_0x00010c137a60(uVar11,puVar9);
      _objc_release(uVar10);
      _objc_release(lVar4);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar1);
      _objc_release(uVar6);
      if ((puVar7 == (undefined *)0x0) || ((puVar7[0x13] & 1) == 0)) {
        puVar2 = PTR_PTR_1126da190;
        func_0x00010b68e754();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b68e7f8();
        _objc_retainAutoreleasedReturnValue();
        if (param_7 == 0) {
          _objc_retain(0);
          lVar4 = 0;
          uVar6 = 0;
        }
        else {
          lVar4 = *(long *)(param_7 + 8);
          _objc_retain(lVar4);
          if (lVar4 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(lVar4 + 0x10);
          }
        }
        if (puVar2 != (undefined *)0x0) {
          *(undefined8 *)(puVar2 + 0x78) = uVar6;
          _objc_retain(puVar2);
          *(undefined8 *)(puVar2 + 0x28) = param_3;
          _objc_retain(puVar2);
        }
        puVar3 = puVar2;
        func_0x00010b68e774(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar2);
        _objc_release(lVar4);
        _objc_release(puVar2);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126da080;
        func_0x00010c137a40(param_1,param_2,PTR_PTR_1126da080);
        puVar9 = (undefined *)((ulong)puVar2 | (ulong)puVar9);
        _objc_release(puVar3);
      }
      _objc_release(param_5);
    }
  }
  _objc_release(puVar7);
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar9;
}



/* Entry: 108576d94; end: 108576d9b; -[SCVideoTranscodingProcessor videoTranscodingConfiguration] */

undefined8 FUN_108576d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108576d9c; end: 108576da3; -[SCVideoTranscodingProcessor processorId] */

undefined8 FUN_108576d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108576da4; end: 108576dd3; -[SCVideoTranscodingProcessor setProcessorId:] */

void FUN_108576da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576dd4; end: 108576ddb; -[SCVideoTranscodingProcessor requestInput] */

undefined8 FUN_108576dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108576ddc; end: 108576e0b; -[SCVideoTranscodingProcessor setRequestInput:] */

void FUN_108576ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576e0c; end: 108576e13; -[SCVideoTranscodingProcessor requestOutput] */

undefined8 FUN_108576e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108576e14; end: 108576e43; -[SCVideoTranscodingProcessor setRequestOutput:] */

void FUN_108576e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576e44; end: 108576e4b; -[SCVideoTranscodingProcessor cancelable] */

undefined8 FUN_108576e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108576e4c; end: 108576e7b; -[SCVideoTranscodingProcessor setCancelable:] */

void FUN_108576e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576e7c; end: 108576e83; -[SCVideoTranscodingProcessor videoTranscodingSession] */

undefined8 FUN_108576e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108576e84; end: 108576eb3; -[SCVideoTranscodingProcessor setVideoTranscodingSession:] */

void FUN_108576e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576eb4; end: 108576ebb; -[SCVideoTranscodingProcessor imageProcessor] */

undefined8 FUN_108576eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108576ebc; end: 108576eeb; -[SCVideoTranscodingProcessor setImageProcessor:] */

void FUN_108576ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576eec; end: 108576ef3; -[SCVideoTranscodingProcessor overlayImageData] */

undefined8 FUN_108576eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108576ef4; end: 108576f23; -[SCVideoTranscodingProcessor setOverlayImageData:] */

void FUN_108576ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576f24; end: 108576f2b; -[SCVideoTranscodingProcessor audioProcessingWrapper] */

undefined8 FUN_108576f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108576f2c; end: 108576f5b; -[SCVideoTranscodingProcessor setAudioProcessingWrapper:] */

void FUN_108576f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576f5c; end: 108576f63; -[SCVideoTranscodingProcessor taskItem] */

undefined8 FUN_108576f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108576f64; end: 108576f93; -[SCVideoTranscodingProcessor setTaskItem:] */

void FUN_108576f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576f94; end: 108576f9b; -[SCVideoTranscodingProcessor logger] */

undefined8 FUN_108576f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108576f9c; end: 108576fcb; -[SCVideoTranscodingProcessor setLogger:] */

void FUN_108576f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108576fcc; end: 1085770eb; -[SCVideoTranscodingProcessor .cxx_destruct] */

void FUN_108576fcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 1085770ec; end: 108577223; -[SCVideoTranscodingRequestScheduler initWithPerformer:lensProcessingTranscodingProvider:transcodingProcessorFactory:inProgressTracker:] */

undefined1 *
FUN_1085770ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fcd30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108577224; end: 10857722b; -[SCVideoTranscodingRequestScheduler submitVideoTranscodingRequestWithInput:output:outputHandler:progressHandler:] */

void FUN_108577224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_submitVideoTranscodingRequestWit_112675868);
  return;
}


