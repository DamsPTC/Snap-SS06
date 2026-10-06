/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10518e4e4; end: 10518e4eb; -[SCVoiceMLLensCurveWindowRange start] */

undefined8 FUN_10518e4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10518e4ec; end: 10518e4f3; -[SCVoiceMLLensCurveWindowRange setStart:] */

void FUN_10518e4ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10518e4f4; end: 10518e4fb; -[SCVoiceMLLensCurveWindowRange end] */

undefined8 FUN_10518e4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10518e4fc; end: 10518e503; -[SCVoiceMLLensCurveWindowRange setEnd:] */

void FUN_10518e4fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10518e504; end: 10518e587; -[SCVoiceMLLensActivityWavesCurve initWithMaxAmplitude:delegate:] */

undefined1 *
FUN_10518e504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6a48;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    func_0x00010be950e0(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10518e588; end: 10518e603; -[SCVoiceMLLensActivityWavesCurve yPositionForRelativeX:] */

double FUN_10518e588(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_2 + 0x20);
  _sin();
  param_1 = param_1 * *(double *)(param_2 + 0x28);
  dVar2 = 1.0 / (param_1 * param_1 + 1.0);
  dVar1 = *(double *)(param_2 + 0x18) * ABS(dVar1) * -0.30000001192092896 * dVar2 * dVar2;
  if (dVar1 <= -1.0) {
    dVar1 = -1.0;
  }
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  return *(double *)(param_2 + 0x10) * dVar2;
}



/* Entry: 10518e604; end: 10518e697; -[SCVoiceMLLensActivityWavesCurve incrementTick] */

void FUN_10518e604(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_1 + 0x20);
  dVar3 = dVar1 + 0.1 + *(double *)(param_1 + 0x30) * 0.05;
  _sin();
  dVar2 = dVar3;
  _sin();
  if (((dVar1 <= 0.0) && (0.0 < dVar2)) || ((0.0 < dVar1 && (dVar2 <= 0.0)))) {
    if (*(double *)(param_1 + 0x38) <= 0.05) {
      return;
    }
    func_0x00010be950e0(param_1);
  }
  *(double *)(param_1 + 0x20) = dVar3;
  return;
}



/* Entry: 10518e698; end: 10518e6f7; -[SCVoiceMLLensActivityWavesCurve _respawn] */

void FUN_10518e698(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  func_0x00010be1bb80();
  *(undefined8 *)(param_2 + 0x40) = param_1;
  _rand();
  *(double *)(param_2 + 0x30) = (double)((float)iVar1 / 2.1474836e+09);
  _rand();
  *(double *)(param_2 + 0x28) = ((double)iVar1 / 2147483647.0) * 0.5 + 1.0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x38);
  return;
}



/* Entry: 10518e6f8; end: 10518e803; -[SCVoiceMLLensActivityWavesCurve _generateSeed] */

double FUN_10518e6f8(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar7;
  long lVar6;
  
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4bc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c246d00(lVar3,param_3,PTR_s_compare__1125ae690);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010beeb4a0(param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010be5fa60(param_2,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010becd960(param_2,param_3,lVar5);
  iVar1 = (int)lVar6;
  dVar7 = 0.5;
  if (0.0 < 1.0 - param_1) {
    _rand();
    dVar7 = (1.0 - param_1) * (double)((float)iVar1 / 2.1474836e+09);
    func_0x00010be9d1a0(dVar7,param_2,param_3,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  return dVar7;
}



/* Entry: 10518e804; end: 10518e953; -[SCVoiceMLLensActivityWavesCurve _seedFromAvailableSeed:sortedMergedRanges:] */

double FUN_10518e804(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_488 [128];
  long lStack_408;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  double dStack_180;
  double dStack_178;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar12 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf52a60();
  if (lVar8 == 0) {
    dVar13 = 0.0;
  }
  else {
    lVar7 = *plStack_120;
    dVar13 = 0.0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c24d960(uVar6);
        if (param_1 + dVar13 < dVar12) goto LAB_10518e904;
        func_0x00010c24d960(uVar6);
        dVar12 = dVar12 - dVar13;
        param_1 = param_1 - dVar12;
        func_0x00010bf940a0(uVar6);
        lVar9 = lVar9 + 1;
        dVar13 = dVar12;
      } while (lVar8 != lVar9);
      lVar8 = param_4;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
LAB_10518e904:
  _objc_release(param_4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1 + dVar13;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_180 = dVar13;
  dStack_178 = param_1;
  _objc_retain(puVar4);
  dVar12 = 0.0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar1 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  if (puVar1 == (undefined1 *)0x0) {
    dVar14 = 0.0;
  }
  else {
    lVar8 = *plStack_240;
    dVar14 = 0.0;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        dVar13 = dVar12;
        if (*plStack_240 != lVar8) {
          _objc_enumerationMutation(puVar4);
        }
        uVar6 = *(undefined8 *)(lStack_248 + (long)puVar10 * 8);
        func_0x00010bf940a0(uVar6);
        dVar12 = dVar13;
        func_0x00010c24d960(uVar6);
        dVar12 = dVar13 - dVar12;
        dVar14 = dVar14 + dVar12;
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar1 = (undefined1 *)puVar4;
      puVar5 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return dVar14;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_380;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_2b0 = dVar13;
  dStack_2a8 = dVar14;
  _objc_retain(puVar5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar12 = 0.0;
  lStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  plStack_370 = (long *)0x0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  _objc_retain(puVar5);
  puVar1 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar8 = *plStack_370;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        dVar13 = dVar12;
        if (*plStack_370 != lVar8) {
          _objc_enumerationMutation(puVar5);
          dVar13 = dVar12;
        }
        uVar6 = *(undefined8 *)(lStack_378 + (long)puVar10 * 8);
        puVar3 = puVar2;
        func_0x00010bf529e0();
        dVar12 = dVar13;
        if (puVar3 == (undefined *)0x0) {
LAB_10518eb60:
          func_0x00010befa120(puVar2,param_3,uVar6);
        }
        else {
          puVar3 = puVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf940a0();
          dVar14 = dVar13;
          func_0x00010c24d960(uVar6);
          dVar12 = dVar14;
          _objc_release(puVar3);
          if (dVar13 < dVar14) goto LAB_10518eb60;
          func_0x00010bf940a0(uVar6);
          puVar3 = puVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195da0();
          _objc_release(puVar3);
        }
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar1 = (undefined1 *)puVar5;
      puVar4 = &uStack_380;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
    ___stack_chk_fail();
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar12 = 0.0;
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    _objc_retain(puVar4);
    puVar1 = (undefined1 *)puVar4;
    func_0x00010bf52a60(puVar4,param_3,&uStack_4d0,auStack_488,0x10);
    if (puVar1 != (undefined1 *)0x0) {
      lVar8 = *plStack_4c0;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          fVar11 = SUB84(dVar12,0);
          if (*plStack_4c0 != lVar8) {
            _objc_enumerationMutation(puVar4);
          }
          uVar6 = *(undefined8 *)(lStack_4c8 + (long)puVar10 * 8);
          puVar3 = PTR_PTR_1126b58c0;
          _objc_alloc_init(PTR_PTR_1126b58c0);
          func_0x00010bfb2c80(uVar6);
          dVar12 = 0.0;
          if (0.0 <= (double)fVar11 + -0.15) {
            dVar12 = (double)fVar11 + -0.15;
          }
          fVar11 = SUB84(dVar12,0);
          func_0x00010c209380(puVar3);
          func_0x00010bfb2c80(uVar6);
          dVar12 = (double)NEON_fminnm((double)fVar11 + 0.15,0x3ff0000000000000);
          func_0x00010c195da0(puVar3);
          func_0x00010befa120(puVar2,param_3,puVar3);
          _objc_release(puVar3);
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        puVar1 = (undefined1 *)puVar4;
        func_0x00010bf52a60(puVar4,param_3,&uStack_4d0,auStack_488,0x10);
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
      ___stack_chk_fail();
      return *(double *)((long)puVar4 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return dVar12;
}



/* Entry: 10518e954; end: 10518ea73; -[SCVoiceMLLensActivityWavesCurve _totalSizeFromMergedRanges:] */

double FUN_10518e954(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d9;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  long lStack_2d8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  double dStack_180;
  double dStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar12 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = param_3;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    dVar14 = 0.0;
  }
  else {
    lVar7 = *plStack_110;
    dVar14 = 0.0;
    do {
      lVar8 = 0;
      do {
        unaff_d9 = dVar12;
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        func_0x00010bf940a0(uVar6);
        dVar12 = unaff_d9;
        func_0x00010c24d960(uVar6);
        dVar12 = unaff_d9 - dVar12;
        dVar14 = dVar14 + dVar12;
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar14;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_180 = unaff_d9;
  dStack_178 = dVar14;
  _objc_retain(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar12 = 0.0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar5);
  puVar2 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_240;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        dVar14 = dVar12;
        if (*plStack_240 != lVar9) {
          _objc_enumerationMutation(puVar5);
          dVar14 = dVar12;
        }
        uVar6 = *(undefined8 *)(lStack_248 + (long)puVar10 * 8);
        puVar3 = puVar1;
        func_0x00010bf529e0();
        dVar12 = dVar14;
        if (puVar3 == (undefined *)0x0) {
LAB_10518eb60:
          func_0x00010befa120(puVar1,param_2,uVar6);
        }
        else {
          puVar3 = puVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf940a0();
          dVar13 = dVar14;
          func_0x00010c24d960(uVar6);
          dVar12 = dVar13;
          _objc_release(puVar3);
          if (dVar14 < dVar13) goto LAB_10518eb60;
          func_0x00010bf940a0(uVar6);
          puVar3 = puVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195da0();
          _objc_release(puVar3);
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar2 = (undefined1 *)puVar5;
      puVar4 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar12 = 0.0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    plStack_390 = (long *)0x0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    _objc_retain(puVar4);
    puVar2 = (undefined1 *)puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_3a0,auStack_358,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar9 = *plStack_390;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          fVar11 = SUB84(dVar12,0);
          if (*plStack_390 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          uVar6 = *(undefined8 *)(lStack_398 + (long)puVar10 * 8);
          puVar3 = PTR_PTR_1126b58c0;
          _objc_alloc_init(PTR_PTR_1126b58c0);
          func_0x00010bfb2c80(uVar6);
          dVar12 = 0.0;
          if (0.0 <= (double)fVar11 + -0.15) {
            dVar12 = (double)fVar11 + -0.15;
          }
          fVar11 = SUB84(dVar12,0);
          func_0x00010c209380(puVar3);
          func_0x00010bfb2c80(uVar6);
          dVar12 = (double)NEON_fminnm((double)fVar11 + 0.15,0x3ff0000000000000);
          func_0x00010c195da0(puVar3);
          func_0x00010befa120(puVar1,param_2,puVar3);
          _objc_release(puVar3);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = (undefined1 *)puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_3a0,auStack_358,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
      ___stack_chk_fail();
      return *(double *)((long)puVar4 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return dVar12;
}



/* Entry: 10518ea74; end: 10518ec17; -[SCVoiceMLLensActivityWavesCurve _mergeOverlappingSortedWindowRanges:] */

double FUN_10518ea74(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar13 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        dVar11 = dVar13;
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
          dVar11 = dVar13;
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar2 = puVar1;
        func_0x00010bf529e0();
        dVar13 = dVar11;
        if (puVar2 == (undefined *)0x0) {
LAB_10518eb60:
          func_0x00010befa120(puVar1,param_2,uVar5);
        }
        else {
          puVar2 = puVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf940a0();
          dVar12 = dVar11;
          func_0x00010c24d960(uVar5);
          dVar13 = dVar12;
          _objc_release(puVar2);
          if (dVar11 < dVar12) goto LAB_10518eb60;
          func_0x00010bf940a0(uVar5);
          puVar2 = puVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195da0();
          _objc_release(puVar2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_3;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar13 = 0.0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    _objc_retain(puVar4);
    puVar3 = (undefined1 *)puVar4;
    func_0x00010bf52a60(puVar4,param_2,&uStack_280,auStack_238,0x10);
    if (puVar3 != (undefined1 *)0x0) {
      lVar7 = *plStack_270;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          fVar10 = SUB84(dVar13,0);
          if (*plStack_270 != lVar7) {
            _objc_enumerationMutation(puVar4);
          }
          uVar5 = *(undefined8 *)(lStack_278 + (long)puVar9 * 8);
          puVar2 = PTR_PTR_1126b58c0;
          _objc_alloc_init(PTR_PTR_1126b58c0);
          func_0x00010bfb2c80(uVar5);
          dVar13 = 0.0;
          if (0.0 <= (double)fVar10 + -0.15) {
            dVar13 = (double)fVar10 + -0.15;
          }
          fVar10 = SUB84(dVar13,0);
          func_0x00010c209380(puVar2);
          func_0x00010bfb2c80(uVar5);
          dVar13 = (double)NEON_fminnm((double)fVar10 + 0.15,0x3ff0000000000000);
          func_0x00010c195da0(puVar2);
          func_0x00010befa120(puVar1,param_2,puVar2);
          _objc_release(puVar2);
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = (undefined1 *)puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_280,auStack_238,0x10);
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      return *(double *)((long)puVar4 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return dVar13;
}



/* Entry: 10518ec18; end: 10518edbf; -[SCVoiceMLLensActivityWavesCurve _windowRangesFromContendingSeeds:] */

undefined8 FUN_10518ec18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_150,auStack_108,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_140;
    do {
      lVar6 = 0;
      do {
        fVar7 = (float)uVar4;
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_148 + lVar6 * 8);
        puVar3 = PTR_PTR_1126b58c0;
        _objc_alloc_init(PTR_PTR_1126b58c0);
        func_0x00010bfb2c80(uVar4);
        dVar8 = 0.0;
        if (0.0 <= (double)fVar7 + -0.15) {
          dVar8 = (double)fVar7 + -0.15;
        }
        fVar7 = SUB84(dVar8,0);
        func_0x00010c209380(puVar3);
        func_0x00010bfb2c80(uVar4);
        uVar4 = NEON_fminnm((double)fVar7 + 0.15,0x3ff0000000000000);
        func_0x00010c195da0(puVar3);
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_150,auStack_108,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return uVar4;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(param_3 + 0x38);
}



/* Entry: 10518edc0; end: 10518edc7; -[SCVoiceMLLensActivityWavesCurve rollingAverageLevel] */

undefined8 FUN_10518edc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10518edc8; end: 10518edcf; -[SCVoiceMLLensActivityWavesCurve setRollingAverageLevel:] */

void FUN_10518edc8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 10518edd0; end: 10518edd7; -[SCVoiceMLLensActivityWavesCurve seed] */

undefined8 FUN_10518edd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10518edd8; end: 10518eddf; -[SCVoiceMLLensActivityWavesCurve .cxx_destruct] */

void FUN_10518edd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10518ede0; end: 10518ef03; -[SCVoiceMLLensActivityWavesView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10518ede0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 *puVar5;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126e6a50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b58c8;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11271e514);
    *(undefined **)((long)puVar2 + (long)_DAT_11271e514) = puVar3;
    _objc_release(uVar6);
    puVar5 = (undefined1 *)puVar2;
    func_0x00010befbb60();
    iVar1 = (int)puVar5;
    func_0x0001008522a8();
    uVar6 = 0x404b000000000000;
    if (iVar1 == 0) {
      uVar6 = 0x4014000000000000;
    }
    puVar3 = PTR_PTR_1126b58d0;
    _objc_alloc();
    func_0x00010c005ec0(uVar6,0x4018000000000000);
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11271e518);
    *(undefined **)((long)puVar2 + (long)_DAT_11271e518) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(puVar2);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10518ef04; end: 10518efab; -[SCVoiceMLLensActivityWavesView setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518ef04(double param_1,long param_2)

{
  double dVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6a50;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setFrame__112645658);
  func_0x00010bf20c00(param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11271e518));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar1 = param_1 + -300.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,dVar1,param_1,0x4072c00000000000,*(undefined8 *)(param_2 + _DAT_11271e514));
  return;
}



/* Entry: 10518efac; end: 10518efb3; -[SCVoiceMLLensActivityWavesView pointInside:withEvent:] */

undefined8 FUN_10518efac(void)

{
  return 0;
}



/* Entry: 10518efb4; end: 10518f06b; -[SCVoiceMLLensActivityWavesView renderActivitySample:] */

void FUN_10518efb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_40 = 0x10518f03c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10518f06c; end: 10518f0ab; -[SCVoiceMLLensActivityWavesView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f06c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e518,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e514,0);
  return;
}



/* Entry: 10518f0ac; end: 10518f1fb; -[SCVoiceMLLensActivityWavesWave initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10518f0ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *unaff_x20;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &uStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1126e6a58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined1 *)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    unaff_x20 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_50 = unaff_x20;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_48 = puVar2;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e51c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e51c) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(unaff_x20);
    func_0x00010bde49e0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10518f1fc;
  puStack_88 = PTR_PTR_1126e6a58;
  puStack_90 = puVar5;
  puStack_80 = unaff_x20;
  puStack_78 = (undefined1 *)puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_90,PTR_s_setFrame__112645658);
  func_0x00010bde49e0(puVar5);
  return puVar5;
}



/* Entry: 10518f1fc; end: 10518f243; -[SCVoiceMLLensActivityWavesWave setFrame:] */

void FUN_10518f1fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setFrame__112645658);
  func_0x00010bde49e0(param_1);
  return;
}



/* Entry: 10518f244; end: 10518f24b; -[SCVoiceMLLensActivityWavesWave pointInside:withEvent:] */

undefined8 FUN_10518f244(void)

{
  return 0;
}



/* Entry: 10518f24c; end: 10518f387; -[SCVoiceMLLensActivityWavesWave updateWithLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f24c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_5 + _DAT_11271e520);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    dVar17 = 0.7;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        func_0x00010c1414a0(uVar13);
        dVar17 = param_1 * 0.7 + dVar17 * 0.3;
        func_0x00010c1ee620(uVar13);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar11;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  func_0x00010c1cbd40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5;
  _UIGraphicsGetCurrentContext();
  func_0x00010bf20c00(param_5);
  _CGContextClearRect(lVar1);
  lVar11 = param_5;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1607a0();
  _objc_release(lVar11);
  _CGContextFillRect(dVar17,param_2,param_3,param_4,lVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar18 = dVar17;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  lVar11 = (long)_DAT_11271e520;
  lVar1 = *(long *)(param_5 + lVar11);
  func_0x00010bf529e0();
  uVar7 = 0;
  if (lVar1 != 0) {
    uVar12 = 0;
    dVar19 = 0.3;
    do {
      uVar2 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010bfec920();
      _UIGraphicsGetCurrentContext();
      uVar3 = uVar13;
      _CGPathCreateMutable();
      _CGContextSaveGState(uVar13);
      func_0x00010c156e80(uVar2);
      dVar19 = dVar18 * dVar19 * 0.8 + dVar18 * 0.1;
      dVar21 = -3.0;
      do {
        dVar20 = dVar21;
        func_0x00010c2becc0(dVar21,uVar2);
        if (dVar21 == -3.0) {
          _CGPathMoveToPoint();
        }
        else {
          _CGPathAddLineToPoint(dVar19 + dVar18 * 0.25 * dVar21,dVar17 + dVar20,uVar3,0);
        }
        dVar21 = dVar21 + 0.01;
      } while (dVar21 <= 3.0);
      _CGPathCloseSubpath(uVar3);
      _CGContextAddPath(uVar13,uVar3);
      _CGContextClip(uVar13);
      dVar21 = 0.0;
      uVar4 = uVar2;
      func_0x00010c2becc0(0);
      _CGColorSpaceCreateDeviceRGB();
      puVar5 = *(undefined8 **)(param_5 + _DAT_11271e51c);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGColorGetComponents();
      uStack_218 = puVar10[1];
      uStack_220 = *puVar10;
      uStack_210 = puVar10[2];
      uStack_208 = 0x3ff0000000000000;
      uStack_200 = *puVar10;
      uStack_1f8 = puVar10[1];
      uStack_1f0 = puVar10[2];
      uStack_1e8 = 0x3fc99999a0000000;
      uStack_228 = 0x3ff0000000000000;
      uStack_230 = 0;
      uVar6 = uVar4;
      _CGGradientCreateWithColorComponents(uVar4,&uStack_220,&uStack_230,2);
      puVar10 = (undefined8 *)0x2;
      _CGContextDrawRadialGradient
                (dVar19,dVar17,dVar18 * 0.5,dVar19,dVar17,ABS(dVar21) * 0.3,uVar13,uVar6);
      _CGContextRestoreGState(uVar13);
      _CGPathRelease(uVar3);
      _CGColorSpaceRelease(uVar4);
      _CGGradientRelease(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar2);
      uVar12 = uVar12 + 1;
      uVar7 = *(ulong *)(param_5 + lVar11);
      func_0x00010bf529e0();
    } while (uVar12 < uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    dVar17 = 0.0;
    lVar15 = *(long *)(uVar7 + (long)_DAT_11271e520);
    _objc_retain(lVar15);
    lVar1 = lVar15;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar15);
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((undefined8 *)*(undefined1 **)(lVar16 * 8) != puVar10) {
          func_0x00010c156e80();
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(puVar9);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    ___stack_chk_fail();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar11 = (long)_DAT_11271e51c;
    func_0x00010bf529e0(*(undefined8 *)((long)puVar10 + lVar11));
    func_0x00010bffc4a0();
    func_0x00010bf20c00(puVar10);
    _CGRectGetHeight();
    lVar1 = *(long *)((long)puVar10 + lVar11);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar7 = 0;
      do {
        puVar9 = PTR_PTR_1126b58d8;
        _objc_alloc(PTR_PTR_1126b58d8);
        func_0x00010c028ba0(dVar17 + -2.0);
        func_0x00010befa120(puVar8);
        _objc_release(puVar9);
        uVar7 = uVar7 + 1;
        uVar12 = *(ulong *)((long)puVar10 + lVar11);
        func_0x00010bf529e0();
      } while (uVar7 < uVar12);
    }
    uVar13 = *(undefined8 *)((long)puVar10 + (long)_DAT_11271e520);
    *(undefined **)((long)puVar10 + (long)_DAT_11271e520) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar13);
    return;
  }
  return;
}



/* Entry: 10518f388; end: 10518f6cf; -[SCVoiceMLLensActivityWavesWave drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f388(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
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
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5;
  _UIGraphicsGetCurrentContext();
  func_0x00010bf20c00(param_5);
  _CGContextClearRect(lVar1);
  lVar16 = param_5;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1607a0();
  _objc_release(lVar16);
  _CGContextFillRect(param_1,param_2,param_3,param_4,lVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar19 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  lVar16 = (long)_DAT_11271e520;
  lVar1 = *(long *)(param_5 + lVar16);
  func_0x00010bf529e0();
  uVar8 = 0;
  if (lVar1 != 0) {
    uVar13 = 0;
    dVar17 = 0.3;
    do {
      uVar2 = *(undefined8 *)(param_5 + lVar16);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      func_0x00010bfec920();
      _UIGraphicsGetCurrentContext();
      uVar3 = uVar11;
      _CGPathCreateMutable();
      _CGContextSaveGState(uVar11);
      func_0x00010c156e80(uVar2);
      dVar17 = dVar19 * dVar17 * 0.8 + dVar19 * 0.1;
      dVar20 = -3.0;
      do {
        dVar18 = dVar20;
        func_0x00010c2becc0(dVar20,uVar2);
        if (dVar20 == -3.0) {
          _CGPathMoveToPoint();
        }
        else {
          _CGPathAddLineToPoint(dVar17 + dVar19 * 0.25 * dVar20,param_1 + dVar18,uVar3,0);
        }
        dVar20 = dVar20 + 0.01;
      } while (dVar20 <= 3.0);
      _CGPathCloseSubpath(uVar3);
      _CGContextAddPath(uVar11,uVar3);
      _CGContextClip(uVar11);
      dVar20 = 0.0;
      uVar4 = uVar2;
      func_0x00010c2becc0(0);
      _CGColorSpaceCreateDeviceRGB();
      puVar5 = *(undefined8 **)(param_5 + _DAT_11271e51c);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGColorGetComponents();
      uStack_e8 = puVar6[1];
      uStack_f0 = *puVar6;
      uStack_e0 = puVar6[2];
      uStack_d8 = 0x3ff0000000000000;
      uStack_d0 = *puVar6;
      uStack_c8 = puVar6[1];
      uStack_c0 = puVar6[2];
      uStack_b8 = 0x3fc99999a0000000;
      uStack_f8 = 0x3ff0000000000000;
      uStack_100 = 0;
      uVar7 = uVar4;
      _CGGradientCreateWithColorComponents(uVar4,&uStack_f0,&uStack_100,2);
      param_7 = 2;
      _CGContextDrawRadialGradient
                (dVar17,param_1,dVar19 * 0.5,dVar17,param_1,ABS(dVar20) * 0.3,uVar11,uVar7);
      _CGContextRestoreGState(uVar11);
      _CGPathRelease(uVar3);
      _CGColorSpaceRelease(uVar4);
      _CGGradientRelease(uVar7);
      _objc_release(puVar5);
      _objc_release(uVar2);
      uVar13 = uVar13 + 1;
      uVar8 = *(ulong *)(param_5 + lVar16);
      func_0x00010bf529e0();
    } while (uVar13 < uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar19 = 0.0;
  lVar14 = *(long *)(uVar8 + (long)_DAT_11271e520);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar14);
      }
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (*(long *)(lVar15 * 8) != param_7) {
        func_0x00010c156e80();
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(puVar10);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar16 = (long)_DAT_11271e51c;
  func_0x00010bf529e0(*(undefined8 *)(param_7 + lVar16));
  func_0x00010bffc4a0();
  func_0x00010bf20c00(param_7);
  _CGRectGetHeight();
  lVar1 = *(long *)(param_7 + lVar16);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar8 = 0;
    do {
      puVar10 = PTR_PTR_1126b58d8;
      _objc_alloc(PTR_PTR_1126b58d8);
      func_0x00010c028ba0(dVar19 + -2.0);
      func_0x00010befa120(puVar9);
      _objc_release(puVar10);
      uVar8 = uVar8 + 1;
      uVar13 = *(ulong *)(param_7 + lVar16);
      func_0x00010bf529e0();
    } while (uVar8 < uVar13);
  }
  uVar11 = *(undefined8 *)(param_7 + _DAT_11271e520);
  *(undefined **)(param_7 + _DAT_11271e520) = puVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 10518f6d0; end: 10518f83b; -[SCVoiceMLLensActivityWavesWave contendingSeedsForCurve:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f6d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  dVar10 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + _DAT_11271e520);
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (*(long *)(lStack_128 + lVar9 * 8) != param_3) {
          func_0x00010c156e80();
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar2);
          _objc_release(puVar2);
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar6 = (long)_DAT_11271e51c;
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010bf529e0(uVar3);
  func_0x00010bffc4a0(puVar1,param_2,uVar3);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  lVar4 = *(long *)(param_3 + lVar6);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar7 = 0;
    do {
      puVar2 = PTR_PTR_1126b58d8;
      _objc_alloc(PTR_PTR_1126b58d8);
      func_0x00010c028ba0(dVar10 + -2.0);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_3 + lVar6);
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_11271e520);
  *(undefined **)(param_3 + _DAT_11271e520) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10518f83c; end: 10518f91b; -[SCVoiceMLLensActivityWavesWave _configure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f83c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar6 = (long)_DAT_11271e51c;
  uVar2 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010bf529e0(uVar2);
  func_0x00010bffc4a0(puVar1,param_3,uVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar3 = *(long *)(param_2 + lVar6);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      puVar4 = PTR_PTR_1126b58d8;
      _objc_alloc(PTR_PTR_1126b58d8);
      func_0x00010c028ba0(param_1 + -2.0);
      func_0x00010befa120(puVar1,param_3,puVar4);
      _objc_release(puVar4);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_2 + lVar6);
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_11271e520);
  *(undefined **)(param_2 + _DAT_11271e520) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10518f91c; end: 10518f95b; -[SCVoiceMLLensActivityWavesWave .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518f91c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e51c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e520,0);
  return;
}



/* Entry: 10518f95c; end: 10518fa63; -[SCVoiceMLLensBorderView initWithCornerRadius:lineWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10518f95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e6a60;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e524) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e528) = param_2;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bde6100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e52c);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271e52c) = puVar2;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bde6100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e530);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11271e530) = puVar2;
    _objc_release(uVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10518fa64; end: 10518fb2b; -[SCVoiceMLLensBorderView setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518fa64(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6a60;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setFrame__112645658);
  func_0x00010bf20c00(param_1);
  lVar1 = param_1;
  func_0x00010be49f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + _DAT_11271e52c));
  _objc_release(lVar1);
  func_0x00010bf20c00(param_1);
  lVar1 = param_1;
  func_0x00010be97460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + _DAT_11271e530));
  _objc_release(lVar1);
  return;
}



/* Entry: 10518fb2c; end: 10518fb33; -[SCVoiceMLLensBorderView pointInside:withEvent:] */

undefined8 FUN_10518fb2c(void)

{
  return 0;
}



/* Entry: 10518fb34; end: 10518fc03; -[SCVoiceMLLensBorderView _configuredShapeLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518fb34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x9c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd00(*(double *)(param_1 + _DAT_11271e528) + *(double *)(param_1 + _DAT_11271e528),
                      puVar1);
  func_0x00010c20e9a0(0,puVar1);
  func_0x00010c20e920(0x3ff0000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518fc04; end: 10518fd67; -[SCVoiceMLLensBorderView _leftBezierBorderPathForFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518fc04(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  dVar3 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  dVar4 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010c0d18c0(dVar3,dVar4,puVar1);
  lVar2 = (long)_DAT_11271e524;
  uVar5 = *(undefined8 *)(param_5 + lVar2);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010bef98c0(uVar5,dVar3,puVar1);
  uVar5 = *(undefined8 *)(param_5 + lVar2);
  dVar3 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010bef6d40(uVar5,dVar3 - *(double *)(param_5 + lVar2),*(double *)(param_5 + lVar2),
                      0x3ff921fb54442d18,0x400921fb54442d18,puVar1,param_6,1);
  func_0x00010bef98c0(0,*(undefined8 *)(param_5 + lVar2),puVar1);
  uVar5 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bef6d40(uVar5,uVar5,uVar5,0x400921fb54442d18,0x4012d97c7f3321d2,puVar1,param_6,1);
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  func_0x00010bef98c0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518fd68; end: 10518ff17; -[SCVoiceMLLensBorderView _rightBezierBorderPathForFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518fd68(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  dVar3 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010c0d18c0(dVar3,dVar5,puVar1);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar2 = (long)_DAT_11271e524;
  dVar4 = *(double *)(param_5 + lVar2);
  dVar5 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010bef98c0(dVar3 - dVar4,dVar5,puVar1);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar4 = *(double *)(param_5 + lVar2);
  dVar5 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010bef6d40(dVar3 - dVar4,dVar5 - *(double *)(param_5 + lVar2),
                      *(double *)(param_5 + lVar2),0x3ff921fb54442d18,0,puVar1,param_6,0);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010bef98c0(puVar1);
  dVar3 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar5 = *(double *)(param_5 + lVar2);
  func_0x00010bef6d40(dVar3 - dVar5,dVar5,dVar5,0,0x4012d97c7f3321d2,puVar1,param_6,0);
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  func_0x00010bef98c0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518ff18; end: 10518ff57; -[SCVoiceMLLensBorderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518ff18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e530,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e52c,0);
  return;
}



/* Entry: 10518ff58; end: 10518fffb; -[SCVoiceMLLensBitmojiFetcher initWithBitmojiImageFetcher:bitmojiAvatarProvider:] */

undefined1 *
FUN_10518ff58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6a68;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10518fffc; end: 105190063; -[SCVoiceMLLensBitmojiFetcher fetchBitmojiImageWithCompletion:] */

void FUN_10518fffc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010bdd1d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ff80(param_1,param_2,uVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105190064; end: 1051900ef; -[SCVoiceMLLensBitmojiFetcher _fetchBitmojiImageWithAvatarId:completion:] */

void FUN_105190064(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *(code **)(param_4 + 0x10);
    _objc_retain(param_4);
    (*pcVar2)(param_4,0);
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_1;
    func_0x00010bdd47e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ffe0(param_1);
    _objc_release(param_4);
    param_4 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051900f0; end: 1051901e7; -[SCVoiceMLLensBitmojiFetcher _fetchBitmojiImageWithParams:completion:] */

void FUN_1051900f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfa5420(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051901e8; end: 1051901f3;  */

void FUN_1051901e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051901f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1051901f4; end: 10519023b; -[SCVoiceMLLensBitmojiFetcher _avatarId] */

void FUN_1051901f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10519023c; end: 1051902db; -[SCVoiceMLLensBitmojiFetcher _bitmojiImageParametersWithAvatarId:] */

void FUN_10519023c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b58e0;
  _objc_opt_new(PTR_PTR_1126b58e0);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar1,param_2,3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051902dc; end: 10519030b; -[SCVoiceMLLensBitmojiFetcher .cxx_destruct] */

void FUN_1051902dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10519030c; end: 105190637; -[SCVoiceMLLensPresenter initWithFeatureContainerView:lensCarouselManager:didLoadEffectObservable:lensPerformerProvider:vmlNotificationsPresenter:vmlBitmojiFetcher:vmlFeatureSettings:vmlLogger:infoCardsScopeOnCameraObservable:deeplinkSendToScopeObservable:lensModalObservable:onboardingListener:circumstanceEngine:] */

undefined8 *
FUN_10519030c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e6a70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_15;
    func_0x00010c067f00();
    *(int *)(puVar1 + 0x17) = (int)uVar2;
    _objc_retain(param_8);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
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
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1272e0(puVar1);
    func_0x00010c067d20(puVar1);
  }
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 105190638; end: 10519065b; -[SCVoiceMLLensPresenter begin] */

void FUN_105190638(undefined8 param_1)

{
  func_0x00010bec6fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bec6bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnDidLoadEffectEvents_11258f4a0);
  return;
}



/* Entry: 10519065c; end: 1051906ab; -[SCVoiceMLLensPresenter end] */

void FUN_10519065c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03b00(param_1);
  _objc_release(uVar1);
  func_0x00010c13a100(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unsubscribeObservables_112592220);
  return;
}



/* Entry: 1051906ac; end: 1051906e3; -[SCVoiceMLLensPresenter _didLoadEffectId:] */

void FUN_1051906ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be45900(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentOnboarding_11257cd48);
    return;
  }
  return;
}



/* Entry: 1051906e4; end: 10519084b; -[SCVoiceMLLensPresenter _didReceiveSelectedLens:] */

void FUN_1051906e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  ppuVar5 = *(undefined ***)(param_1 + 0x38);
  _objc_retain(ppuVar5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  ppuVar2 = ppuVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = *(undefined ***)(param_1 + 0x38);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar2);
  if (ppuVar2 != ppuVar3) {
    ppuVar2 = ppuVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c094540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0720c0(ppuVar3,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_105190828;
    }
    ppuVar2 = ppuVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc94b8;
    }
    else {
      ppuVar3 = ppuVar5;
      func_0x00010c094540(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
    func_0x00010be03b00(param_1,param_2,ppuVar3);
    _objc_release(ppuVar3);
  }
LAB_105190828:
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10519084c; end: 10519092f; -[SCVoiceMLLensPresenter _didReceiveInfoCardsScopeOnCameraEvent:] */

void FUN_10519084c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be640(param_3);
  if (*(char *)(puStack_38 + 3) != *(char *)(param_1 + 0x40)) {
    func_0x00010becd000(param_1);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105190930; end: 105190953;  */

void FUN_105190930(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105190954; end: 105190a37; -[SCVoiceMLLensPresenter _didReceiveDeeplinkSendToScopeEvent:] */

void FUN_105190954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bfc60(param_3);
  if (*(char *)(puStack_38 + 3) != *(char *)(param_1 + 0x40)) {
    func_0x00010becd000(param_1);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105190a38; end: 105190a5b;  */

void FUN_105190a38(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105190a5c; end: 105190b3f; -[SCVoiceMLLensPresenter _didReceiveLensModalEvent:] */

void FUN_105190a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be9a0(param_3);
  if (*(char *)(puStack_38 + 3) != *(char *)(param_1 + 0x40)) {
    func_0x00010becd000(param_1);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105190b40; end: 105190b63;  */

void FUN_105190b40(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105190b64; end: 105190c3b; -[SCVoiceMLLensPresenter _toggleVoiceServices:] */

void FUN_105190b64(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be5b3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105190c3c; end: 105190cbb;  */

void FUN_105190c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar2 = lVar1;
      func_0x00010be45900();
      if ((int)lVar2 != 0) {
        func_0x00010be7cea0(lVar1);
      }
    }
    else {
      func_0x00010c094540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be03b00(lVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105190cbc; end: 105190e0b; -[SCVoiceMLLensPresenter _subscribeOnSelectedLensChangedUpdates] */

void FUN_105190cbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105190e0c; end: 105190e7f;  */

void FUN_105190e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdff9c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105190e80; end: 105190f27; -[SCVoiceMLLensPresenter _subscribeOnDidLoadEffectEvents] */

void FUN_105190e80(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0e33e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105190f28; end: 10519103f;  */

void FUN_105190f28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0e0ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105191040; end: 1051910b3;  */

void FUN_105191040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf8cda0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe780(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051910b4; end: 105191203; -[SCVoiceMLLensPresenter _subscribeOnInfoCardsScopeOnCameraLifecycleUpdates] */

void FUN_1051910b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105191204; end: 10519124b;  */

void FUN_105191204(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519124c; end: 10519139b; -[SCVoiceMLLensPresenter _subscribeOnDeeplinkSendToScopeLifecycleUpdates] */

void FUN_10519124c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf687c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10519139c; end: 1051913eb;  */

void FUN_10519139c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdff320(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051913ec; end: 10519153b; -[SCVoiceMLLensPresenter _subscribeOnLensModalLifecycleUpdates] */

void FUN_1051913ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c095440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10519153c; end: 10519158b;  */

void FUN_10519153c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdff480(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519158c; end: 105191593; -[SCVoiceMLLensPresenter _unsubscribeObservables] */

void FUN_10519158c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105191594; end: 1051915e3; -[SCVoiceMLLensPresenter _reportOnboardingLifecycleEvent:] */

void FUN_105191594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288180();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051915e4; end: 105191653; -[SCVoiceMLLensPresenter _reportOnboardingBegan] */

void FUN_1051915e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b58e8;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7d80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fec0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105191654; end: 105191697; -[SCVoiceMLLensPresenter _reportOnboardingEnded:] */

void FUN_105191654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b58e8;
  func_0x00010c0e7f60(PTR_PTR_1126b58e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fec0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105191698; end: 1051919bf; -[SCVoiceMLLensPresenter instantiateLazyVariablesWithLensPerformerProvider:featureContainerView:tooltipDelegate:bitmojiFetcher:] */

void FUN_105191698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1051919c0;
  puStack_a8 = &UNK_11086da70;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_6);
  uStack_90 = param_6;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_e8 = puVar2;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105191a20;
  puStack_d0 = &UNK_110845cb0;
  _objc_copyWeak(auStack_c8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_110 = puVar2;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105191a70;
  puStack_f8 = &UNK_110845cb0;
  _objc_copyWeak(auStack_f0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_138 = puVar2;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105191ac0;
  puStack_120 = &UNK_110845cb0;
  _objc_copyWeak(auStack_118,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_140,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051919c0; end: 105191b5f;  */

void FUN_1051919c0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b58f0;
    _objc_alloc(PTR_PTR_1126b58f0);
    func_0x00010c025320();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105191b60; end: 105191b73; -[SCVoiceMLLensPresenter _isVoiceMLLens:] */

long FUN_105191b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0838d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isVoiceMLLens_1125fe840);
    return param_3;
  }
  return 0;
}



/* Entry: 105191b74; end: 105191b77; -[SCVoiceMLLensPresenter _onboardingFinished:] */

void FUN_105191b74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8feb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportOnboardingEnded__112581948);
  return;
}



/* Entry: 105191b78; end: 105191ba7; -[SCVoiceMLLensPresenter _enableVoiceServices] */

void FUN_105191b78(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be64d20(param_1,param_2,1);
  func_0x00010be64f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7f530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentVoiceActivityWavesIfNece_11257d6e8);
  return;
}



/* Entry: 105191ba8; end: 105191c0f; -[SCVoiceMLLensPresenter _dismissVoiceServices:] */

void FUN_105191ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be64d20(param_1);
  func_0x00010be029a0(param_1);
  func_0x00010be037e0(param_1);
  _objc_release(param_3);
  func_0x00010be028e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be03af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissVoiceActivityWavesIfNece_11255e858);
  return;
}



/* Entry: 105191c10; end: 105191d0f; -[SCVoiceMLLensPresenter _notifyListeningStateChanged:] */

void FUN_105191c10(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((byte)param_1[0x40] != param_3) {
    param_1[0x40] = (char)param_3;
    param_1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1049a0(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_c0,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar8);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105191ec0;
  puStack_d0 = &UNK_110842a38;
  puVar6 = auStack_c0;
  _objc_copyWeak(auStack_c8,puVar6);
  ppuVar3 = &puStack_e8;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)(param_1 + 0x88);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110dc9538;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dc9558;
  ppuVar4 = ppuVar3;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_a0 = ppuVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_c8);
  puVar5 = auStack_c0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x00010bdffc60(puVar5);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105191d10; end: 105191ebf; -[SCVoiceMLLensPresenter _notifyRegisterationForVoiceActivityUpdates] */

void FUN_105191d10(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar7);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105191ec0;
  puStack_80 = &UNK_110842a38;
  puVar6 = auStack_70;
  _objc_copyWeak(auStack_78,puVar6);
  ppuVar2 = &puStack_98;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dc9538;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110dc9558;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_78);
  puVar5 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x00010bdffc60(puVar5);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105191ec0; end: 105191f0f;  */

void FUN_105191ec0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdffc60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105191f10; end: 105191f57; -[SCVoiceMLLensPresenter _mainQueuePerformer] */

void FUN_105191f10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105191f58; end: 105191fa7; -[SCVoiceMLLensPresenter _shouldPresentVoiceControlNotifyingElements] */

byte FUN_105191f58(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd39c0();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x53);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 105191fa8; end: 105191ffb; -[SCVoiceMLLensPresenter _shouldPresentFirstTimeOnboarding] */

byte FUN_105191fa8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd39c0();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x53) ^ 1;
  }
  else {
    bVar3 = 0;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 105191ffc; end: 10519203f; -[SCVoiceMLLensPresenter _shouldPresentVoiceControlOnboardingBanner] */

bool FUN_105191ffc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0920();
  _objc_release(lVar1);
  return lVar2 < 2;
}



/* Entry: 105192040; end: 105192077; -[SCVoiceMLLensPresenter _presentOnboarding] */

void FUN_105192040(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb4de0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentOnboardingDialogIfNecess_11257cd50)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7ef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTapToEnterIfNecessary_11257d570);
  return;
}



/* Entry: 105192078; end: 105192127; -[SCVoiceMLLensPresenter _presentOnboardingDialogIfNecessary] */

void FUN_105192078(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105192128;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105192128; end: 10519217b;  */

void FUN_105192128(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be8fe80(param_1);
    lVar1 = param_1;
    func_0x00010beb4e20();
    if ((int)lVar1 == 0) {
      func_0x00010be7af60(param_1);
    }
    else {
      func_0x00010bee7480(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519217c; end: 105192237; -[SCVoiceMLLensPresenter _presentTapToEnterIfNecessary] */

void FUN_10519217c(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (((*(byte *)(param_1 + 0x42) & 1) == 0) &&
     (lVar1 = param_1, func_0x00010beb4fe0(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105192238;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105192238; end: 105192273;  */

void FUN_105192238(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be8fe80(param_1);
    func_0x00010be7ef20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105192274; end: 105192443; -[SCVoiceMLLensPresenter _presentBannerIfNecessary] */

void FUN_105192274(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010beb4fe0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010beb5000();
    lVar2 = param_1;
    func_0x00010beea3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5b20();
    _objc_release(lVar2);
    if ((int)lVar1 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae558;
      uVar4 = uVar3;
      func_0x0001051962a4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x0001051961e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x0001051961f8();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      uVar8 = uVar3;
      func_0x00010c10c080();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar8;
      _objc_release(uVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010be905e0(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 105192444; end: 105192477;  */

void FUN_105192444(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be028e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105192478; end: 1051924db; -[SCVoiceMLLensPresenter _presentDialog] */

void FUN_105192478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc4c0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x41) = 1;
  func_0x00010beea3c0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051924dc; end: 1051929f3; -[SCVoiceMLLensPresenter _presentTapToEnter] */

void FUN_1051924dc(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c222380(puVar1,param_6,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010befbb60(puVar2,param_6,puVar3);
  func_0x00010c160fc0(puVar2,param_6,&PTR____CFConstantStringClassReference_110dc95d8);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar3,param_6,puVar4);
  uVar5 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar5);
  func_0x00010c14c940(puVar2);
  func_0x000100594f4c();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar5 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010bf30a20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cd20();
  dVar20 = param_1 + param_3 + param_4 + 16.0;
  _objc_release(uVar5);
  func_0x00010c14c960(0,0,dVar20,0,puVar3);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar3,param_6,puVar6);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf348e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 0.5;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar9 = puVar7;
  func_0x00010bf493c0(dVar20 * 0.5 - dVar19,puVar7,param_6,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  puStack_90 = puVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010bf34860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493a0(puVar10,param_6,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  puStack_88 = puVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493a0(puVar13,param_6,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_90,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17,param_6,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  puVar17 = puVar7;
  func_0x000105196210();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar7,param_6,puVar17);
  _objc_release(puVar17);
  func_0x00010c21ad00(puVar7,param_6,4);
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7,param_6,puVar17);
  _objc_release(puVar17);
  func_0x00010c219b60(puVar7,param_6,0);
  func_0x00010c1cfce0(puVar7,param_6,2);
  func_0x00010c213040(puVar7,param_6,1);
  func_0x00010c23d620(puVar7);
  func_0x00010befbb60(puVar6,param_6,puVar7);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf348e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_6,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  puStack_a0 = puVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  func_0x00010bf34860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_6,puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 2;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17,param_6,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  *(undefined1 *)(param_5 + 0x42) = 1;
  uVar5 = 0;
  func_0x00010beea3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5ba0();
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  puVar17 = puVar1;
  func_0x00010beb4e20();
  if ((int)puVar17 == 0) {
    if (puVar1[0x41] == '\x01') {
      func_0x00010c132b00(puVar1,param_6,uVar18);
      func_0x00010be929e0(puVar1);
      func_0x00010be6cb40(puVar1,param_6,uVar18);
      if ((int)uVar5 != 0) {
        func_0x00010bec6d80(puVar1);
        func_0x00010bec6b80(puVar1);
        func_0x00010bec6e00(puVar1);
        func_0x00010be09240(puVar1);
      }
    }
  }
  else {
    func_0x00010bee7460(puVar1,param_6,uVar5,uVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 1051929f4; end: 105192a9b; -[SCVoiceMLLensPresenter _dismissDialogIfNecessary:dismissedLensId:] */

void FUN_1051929f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beb4e20();
  if ((int)lVar1 == 0) {
    if (*(char *)(param_1 + 0x41) == '\x01') {
      func_0x00010c132b00(param_1,param_2,param_4);
      func_0x00010be929e0(param_1);
      func_0x00010be6cb40(param_1,param_2,param_4);
      if ((int)param_3 != 0) {
        func_0x00010bec6d80(param_1);
        func_0x00010bec6b80(param_1);
        func_0x00010bec6e00(param_1);
        func_0x00010be09240(param_1);
      }
    }
  }
  else {
    func_0x00010bee7460(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105192a9c; end: 105192bb3; -[SCVoiceMLLensPresenter _dismissTapToEnterIfNecessary:dismissedLensId:] */

void FUN_105192a9c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    func_0x00010c133e20(param_1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_4);
    uStack_40 = param_3;
    func_0x00010bf6f440(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105192bb4; end: 105192c2b;  */

void FUN_105192bb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be93fe0(lVar1);
    func_0x00010be6cb40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010be7a420(lVar1);
      func_0x00010bec6d80(lVar1);
      func_0x00010bec6b80(lVar1);
      func_0x00010bec6e00(lVar1);
      func_0x00010be09240(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105192c2c; end: 105192c3b; -[SCVoiceMLLensPresenter _dismissCurrentBanner] */

void FUN_105192c2c(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x70),PTR_s_dismissPresenter_1125bea28);
    return;
  }
  return;
}



/* Entry: 105192c3c; end: 105192c93; -[SCVoiceMLLensPresenter _resetDialog] */

void FUN_105192c3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010beb4e20();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee74b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__v2_resetDialog_1125976d0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eba0();
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}


