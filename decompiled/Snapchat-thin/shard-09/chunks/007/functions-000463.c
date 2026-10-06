/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107025f40; end: 107025f5b; -[SCFeatureTapToFocusAndExposureImpl forwardCameraOverlayTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025f40(long param_1)

{
  if (*(char *)(param_1 + _DAT_112762bf0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be826b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processTapGesture__11257e348);
    return;
  }
  return;
}



/* Entry: 107025f5c; end: 107026273; -[SCFeatureTapToFocusAndExposureImpl _processTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107025f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined1 uStack_e7;
  byte bStack_e6;
  long alStack_e0 [5];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  
  _objc_retain(param_7);
  lVar8 = param_5;
  func_0x00010bf926c0();
  if ((int)lVar8 != 0) {
    lVar10 = (long)_DAT_112762c08;
    lVar8 = param_5 + lVar10;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c09ef00(param_7);
    _objc_release(lVar8);
    lVar8 = (long)_DAT_112762c0c;
    if (*(char *)(param_5 + lVar8) == '\x01') {
      lVar2 = param_5 + lVar10;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf2bb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar10 = param_5 + lVar10;
      _objc_loadWeakRetained(lVar10);
      FUN_1070277d4(alStack_e0,param_1,param_2,0x4059000000000000);
      _objc_release(lVar10);
      if (alStack_e0[0] - 1U < 2) {
        _objc_release(lVar3);
        goto LAB_10702621c;
      }
      _objc_release(lVar3);
      param_3 = uStack_a8;
      param_4 = uStack_a0;
      uVar11 = uStack_b8;
      uVar12 = uStack_b0;
      bVar9 = bStack_98;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c760();
      _objc_release(puVar4);
      bVar9 = 0;
      uVar11 = param_1;
      uVar12 = param_2;
    }
    uVar5 = *(undefined8 *)(param_5 + _DAT_112762bc0);
    func_0x00010bfa1820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b7c0(param_1,param_2);
    _objc_release(uVar5);
    lVar10 = (long)_DAT_112762c24;
    *(undefined8 *)(param_5 + lVar10) = param_1;
    ((undefined8 *)(param_5 + lVar10))[1] = param_2;
    uVar6 = *(undefined8 *)(param_5 + _DAT_112762bd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf8f820();
    if ((int)uVar5 == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = *(byte *)(param_5 + _DAT_112762c20) ^ 1;
    }
    _objc_release(uVar6);
    uVar1 = *(undefined1 *)(param_5 + lVar8);
    _objc_initWeak(alStack_e0,param_5);
    uVar6 = *(undefined8 *)(param_5 + _DAT_112762bc8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c294d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_100,alStack_e0);
    bStack_e8 = bVar9 & 1;
    uStack_f8 = param_1;
    uStack_f0 = param_2;
    uStack_e7 = uVar1;
    bStack_e6 = bVar7 & 1;
    _objc_retain(param_7);
    func_0x00010bf51680(uVar11,uVar12,param_3,param_4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(alStack_e0);
  }
LAB_10702621c:
  _objc_release(param_7);
  return;
}



/* Entry: 107026274; end: 107026403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107026274(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  byte bStack_6f;
  undefined1 auStack_68 [8];
  
  lVar1 = param_4 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_4 + 0x41) & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c760();
      _objc_release(puVar2);
      bStack_6f = param_3 - *(double *)(lVar1 + _DAT_112762c24) < 100.0;
    }
    else {
      bStack_6f = *(byte *)(param_4 + 0x40);
    }
    puVar3 = auStack_68;
    _objc_initWeak(puVar3,lVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uStack_70 = *(undefined1 *)(param_4 + 0x42);
    uStack_78 = *(undefined8 *)(param_4 + 0x38);
    uStack_80 = *(undefined8 *)(param_4 + 0x30);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    uStack_90 = param_1;
    uStack_88 = param_2;
    _objc_retain(uVar4);
    bStack_6f = bStack_6f & 1;
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107026404; end: 1070264db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107026404(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112762bcc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5c40();
    _objc_release(uVar2);
    func_0x00010bdcec40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar1,
                        param_2,*(undefined1 *)(param_1 + 0x50));
    func_0x00010bebb5e0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar1,
                        param_2,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x51),
                        *(undefined1 *)(param_1 + 0x50));
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112762bc0);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112762bdc);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7d6a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070264dc; end: 10702689f; -[SCFeatureTapToFocusAndExposureImpl _handlePan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070264dc(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar4 == 3) {
    _objc_initWeak(auStack_68,param_3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1070268a0;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar3 = 0;
    func_0x0001008553e8(0,&puStack_90);
    uVar1 = *(undefined8 *)(param_3 + _DAT_112762c00);
    *(undefined8 *)(param_3 + _DAT_112762c00) = uVar3;
    _objc_release(uVar1);
    _dispatch_time(0,1300000000);
    func_0x00010058c530();
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else if (lVar4 == 2) {
    if (*(char *)(param_3 + _DAT_112762c28) == '\x01') {
      lVar4 = (long)_DAT_112762bc8;
      uVar1 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf9d820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2120();
      dVar8 = param_1;
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf9d820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd6e0();
      dVar7 = dVar8;
      _objc_release(uVar3);
      fVar6 = SUB84(dVar7,0);
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar5 = (long)_DAT_112762bec;
      func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
      fVar9 = SUB84(param_2 / 5000.0 + (double)fVar6,0);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar5);
      *(undefined **)(param_3 + lVar5) = puVar2;
      _objc_release(uVar3);
      func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      fVar6 = fVar9;
      func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
      if (fVar9 <= 0.0) {
        dVar7 = -4.0;
        if (-4.0 <= dVar8) {
          dVar7 = dVar8;
        }
        fVar10 = (float)dVar7;
        fVar9 = fVar10;
        if (fVar10 <= fVar6) {
          fVar9 = fVar6;
        }
        func_0x00010c0df740(fVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_3 + lVar5);
        *(undefined **)(param_3 + lVar5) = puVar2;
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_3 + _DAT_112762bfc);
        func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
        fVar6 = fVar9 / ABS(fVar10);
      }
      else {
        dVar8 = (double)NEON_fminnm(param_1,0x4010000000000000);
        fVar9 = (float)dVar8;
        if (fVar9 <= fVar6) {
          fVar6 = fVar9;
        }
        func_0x00010c0df740(fVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_3 + lVar5);
        *(undefined **)(param_3 + lVar5) = puVar2;
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_3 + _DAT_112762bfc);
        func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
        fVar6 = fVar6 / fVar9;
      }
      dVar8 = (double)fVar6;
      func_0x00010befd8e0(dVar8,uVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      fVar6 = SUB84(dVar8,0);
      func_0x00010bfb2c80(*(undefined8 *)(param_3 + lVar5));
      func_0x00010c0df740(-fVar6,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf9d820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199000();
      _objc_release(uVar3);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  else if ((lVar4 == 1) &&
          (*(bool *)(param_3 + _DAT_112762c28) = param_2 < 500.0,
          *(long *)(param_3 + _DAT_112762c00) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbde68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_block_cancel_11034c028)();
    return;
  }
  return;
}



/* Entry: 1070268a0; end: 1070268cb;  */

void FUN_1070268a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070268cc; end: 1070268d3; -[SCFeatureTapToFocusAndExposureImpl cameraUIItem] */

undefined8 FUN_1070268cc(void)

{
  return 1;
}



/* Entry: 1070268d4; end: 1070268db; -[SCFeatureTapToFocusAndExposureImpl actionType] */

undefined8 FUN_1070268d4(void)

{
  return 5;
}



/* Entry: 1070268dc; end: 107026a27; -[SCFeatureTapToFocusAndExposureImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070268dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112762be4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbbc00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107026a28; end: 107026acf;  */

void FUN_107026a28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107026ad0; end: 107026aff;  */

void FUN_107026ad0(void)

{
  return;
}



/* Entry: 107026b00; end: 107026d33; -[SCFeatureTapToFocusAndExposureImpl _applyTapCommands:enableCameraExposureBias:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107026b00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_3 + _DAT_112762bbc);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bf9aec0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112762bec);
    *(undefined ***)(param_3 + _DAT_112762bec) = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186430;
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_3 + _DAT_112762bc8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf9d820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199000();
    _objc_release(uVar1);
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112762c00;
    if (*(long *)(param_3 + lVar3) != 0) {
      _dispatch_block_cancel();
    }
    _objc_initWeak(auStack_138,param_3);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_107026d34;
    puStack_148 = &UNK_1108434b0;
    _objc_copyWeak(auStack_140,auStack_138);
    uVar1 = 0;
    func_0x0001008553e8(0,&puStack_160);
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    *(undefined8 *)(param_3 + lVar3) = uVar1;
    _objc_release(uVar2);
    _dispatch_time(0,1300000000);
    func_0x00010058c530();
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  func_0x00010c21f5e0(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be93fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107026d34; end: 107026d5f;  */

void FUN_107026d34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107026d60; end: 107026fdb; -[SCFeatureTapToFocusAndExposureImpl _showTapAnimationAtPoint:forGesture:isOnRightEdge:enableCameraExposureBias:] */

/* WARNING: Possible PIC construction at 0x000107026e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107026f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107026e38) */
/* WARNING: Removing unreachable block (ram,0x000107026ef4) */
/* WARNING: Removing unreachable block (ram,0x000107026f04) */
/* WARNING: Removing unreachable block (ram,0x000107026fb4) */
/* WARNING: Removing unreachable block (ram,0x000107026f0c) */
/* WARNING: Removing unreachable block (ram,0x000107026fb8) */
/* WARNING: Removing unreachable block (ram,0x000107026f8c) */
/* WARNING: Removing unreachable block (ram,0x00010c23ade0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107026d60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c080a80();
  _objc_release(param_5);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    if ((param_7 & 1) == 0) {
      puVar2 = PTR_PTR_1126cf928;
      func_0x00010c268d00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_112762bf8;
      uVar3 = *(undefined8 *)(param_3 + lVar4);
      *(undefined **)(param_3 + lVar4) = puVar2;
      _objc_release(uVar3);
      lVar1 = param_3 + _DAT_112762c08;
      _objc_loadWeakRetained(lVar1);
      func_0x00010befbb60();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_3 + lVar4);
    }
    else {
      lVar4 = (long)_DAT_112762bf8;
      func_0x00010c12c960(*(undefined8 *)(param_3 + lVar4));
      puVar2 = PTR_PTR_1126cf928;
      func_0x00010c268d00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar4);
      *(undefined **)(param_3 + lVar4) = puVar2;
      _objc_release(uVar3);
      lVar1 = param_3 + _DAT_112762c08;
      _objc_loadWeakRetained(lVar1);
      func_0x00010befbb60();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_3 + lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,uVar3,PTR_s_setCenter__11263c3c8);
    return;
  }
  return;
}



/* Entry: 107026fdc; end: 107026fe3;  */

void FUN_107026fdc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 107026fe4; end: 107026feb; -[SCFeatureTapToFocusAndExposureImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107026fe4(void)

{
  return 0;
}



/* Entry: 107026fec; end: 107027077; -[SCFeatureTapToFocusAndExposureImpl gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107026fec(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_112762c2c)) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_107027054;
    }
  }
  uVar3 = 0;
LAB_107027054:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107027078; end: 1070270bf; -[SCFeatureTapToFocusAndExposureImpl _resetTapAndExposureAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027078(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9f8a0(*(undefined8 *)(param_1 + _DAT_112762bf8));
  func_0x00010bf9f8a0(*(undefined8 *)(param_1 + _DAT_112762bfc));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762c00);
  *(undefined8 *)(param_1 + _DAT_112762c00) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070270c0; end: 1070270cf; -[SCFeatureTapToFocusAndExposureImpl exposureBias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070270c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bec);
}



/* Entry: 1070270d0; end: 1070270ef; -[SCFeatureTapToFocusAndExposureImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070270d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070270f0; end: 107027103; -[SCFeatureTapToFocusAndExposureImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070270f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762c08,param_3);
  return;
}



/* Entry: 107027104; end: 107027123; -[SCFeatureTapToFocusAndExposureImpl cameraHardwareServicesAPI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027104(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762bc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107027124; end: 107027137; -[SCFeatureTapToFocusAndExposureImpl setCameraHardwareServicesAPI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027124(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762bc4,param_3);
  return;
}



/* Entry: 107027138; end: 107027147; -[SCFeatureTapToFocusAndExposureImpl exposureBiasConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107027138(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bd0);
}



/* Entry: 107027148; end: 107027187; -[SCFeatureTapToFocusAndExposureImpl setExposureBiasConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762bd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107027188; end: 107027197; -[SCFeatureTapToFocusAndExposureImpl userTappedToFocusAndExposure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107027188(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762bf4);
}



/* Entry: 107027198; end: 1070271a7; -[SCFeatureTapToFocusAndExposureImpl setUserTappedToFocusAndExposure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027198(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762bf4) = param_3;
  return;
}



/* Entry: 1070271a8; end: 1070271b7; -[SCFeatureTapToFocusAndExposureImpl commands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070271a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bbc);
}



/* Entry: 1070271b8; end: 1070271f7; -[SCFeatureTapToFocusAndExposureImpl setCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070271b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762bbc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070271f8; end: 107027207; -[SCFeatureTapToFocusAndExposureImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070271f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bc0);
}



/* Entry: 107027208; end: 107027247; -[SCFeatureTapToFocusAndExposureImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762bc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107027248; end: 10702725b; -[SCFeatureTapToFocusAndExposureImpl tapToFocusPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107027248(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112762c24);
}



/* Entry: 10702725c; end: 10702726f; -[SCFeatureTapToFocusAndExposureImpl setTapToFocusPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702725c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112762c24;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 107027270; end: 10702727f; -[SCFeatureTapToFocusAndExposureImpl enableExposureAdjustment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107027270(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762c28);
}



/* Entry: 107027280; end: 10702728f; -[SCFeatureTapToFocusAndExposureImpl setEnableExposureAdjustment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762c28) = param_3;
  return;
}



/* Entry: 107027290; end: 10702729f; -[SCFeatureTapToFocusAndExposureImpl tapAnimationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107027290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bf8);
}



/* Entry: 1070272a0; end: 1070272df; -[SCFeatureTapToFocusAndExposureImpl setTapAnimationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070272a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762bf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070272e0; end: 1070272ef; -[SCFeatureTapToFocusAndExposureImpl exposureBiasAnimationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070272e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762bfc);
}



/* Entry: 1070272f0; end: 10702732f; -[SCFeatureTapToFocusAndExposureImpl setExposureBiasAnimationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070272f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762bfc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107027330; end: 10702733f; -[SCFeatureTapToFocusAndExposureImpl tapToFocusAndExposureTimeoutBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107027330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762c00);
}



/* Entry: 107027340; end: 10702734b; -[SCFeatureTapToFocusAndExposureImpl setTapToFocusAndExposureTimeoutBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10702734c; end: 10702735b; -[SCFeatureTapToFocusAndExposureImpl videoCaptureEventsObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10702734c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762c10);
}



/* Entry: 10702735c; end: 10702739b; -[SCFeatureTapToFocusAndExposureImpl setVideoCaptureEventsObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702735c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762c10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10702739c; end: 1070273ab; -[SCFeatureTapToFocusAndExposureImpl imageCaptureEventsObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10702739c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762c14);
}



/* Entry: 1070273ac; end: 1070273eb; -[SCFeatureTapToFocusAndExposureImpl setImageCaptureEventsObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070273ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762c14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070273ec; end: 10702755b; -[SCFeatureTapToFocusAndExposureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070273ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762c14,0);
  _objc_storeStrong(param_1 + _DAT_112762c10,0);
  _objc_storeStrong(param_1 + _DAT_112762c00,0);
  _objc_storeStrong(param_1 + _DAT_112762bfc,0);
  _objc_storeStrong(param_1 + _DAT_112762bf8,0);
  _objc_storeStrong(param_1 + _DAT_112762bc0,0);
  _objc_storeStrong(param_1 + _DAT_112762bbc,0);
  _objc_storeStrong(param_1 + _DAT_112762bd0,0);
  _objc_destroyWeak(param_1 + _DAT_112762bc4);
  _objc_destroyWeak(param_1 + _DAT_112762c08);
  _objc_storeStrong(param_1 + _DAT_112762bec,0);
  _objc_destroyWeak(param_1 + _DAT_112762be4);
  _objc_destroyWeak(param_1 + _DAT_112762be0);
  _objc_storeStrong(param_1 + _DAT_112762c2c,0);
  _objc_storeStrong(param_1 + _DAT_112762bdc,0);
  _objc_storeStrong(param_1 + _DAT_112762be8,0);
  _objc_storeStrong(param_1 + _DAT_112762c1c,0);
  _objc_storeStrong(param_1 + _DAT_112762c18,0);
  _objc_storeStrong(param_1 + _DAT_112762bd4,0);
  _objc_storeStrong(param_1 + _DAT_112762bcc,0);
  _objc_storeStrong(param_1 + _DAT_112762bc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762bd8,0);
  return;
}



/* Entry: 10702755c; end: 1070275ff; -[SCFeatureCameraFocusTapCommand initWithCameraHardwareServicesAPI:captureDeviceManager:] */

undefined1 *
FUN_10702755c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8478;
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



/* Entry: 107027600; end: 107027663; -[SCFeatureCameraFocusTapCommand execute:] */

void FUN_107027600(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb35a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d300(param_1,param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107027664; end: 107027693; -[SCFeatureCameraFocusTapCommand .cxx_destruct] */

void FUN_107027664(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107027694; end: 107027737; -[SCFeatureCameraExposureTapCommand initWithCameraHardwareServicesAPI:captureDeviceManager:] */

undefined1 *
FUN_107027694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8480;
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



/* Entry: 107027738; end: 1070277a3; -[SCFeatureCameraExposureTapCommand execute:] */

void FUN_107027738(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9d820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199080(param_1,param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070277a4; end: 1070277d3; -[SCFeatureCameraExposureTapCommand .cxx_destruct] */

void FUN_1070277a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070277d4; end: 107027a23;  */

void FUN_1070277d4(undefined8 *param_1,double param_2,double param_3,double param_4,ulong param_5,
                  long param_6,long param_7)

{
  int iVar1;
  long lVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  ulong uVar15;
  long lVar3;
  
  dVar4 = param_2;
  dVar9 = param_3;
  dVar13 = param_4;
  _objc_retain();
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 != 0) && (lVar2 != 0)) {
    func_0x00010c08cdc0(lVar2);
    func_0x00010c08cd20(param_7);
    if ((((ulong)ABS(dVar4) < 0x7ff0000000000000) &&
        ((((ulong)ABS(dVar9) < 0x7ff0000000000000 && ((ulong)ABS(dVar13) < 0x7ff0000000000000)) &&
         ((param_5 & 0x7fffffffffffffff) < 0x7ff0000000000000)))) &&
       ((dVar5 = dVar4, _CGRectGetWidth(dVar4,dVar9,dVar13,param_5), 0.0 < dVar5 &&
        (dVar5 = dVar4, _CGRectGetHeight(dVar4,dVar9,dVar13,param_5), 0.0 < dVar5)))) {
      func_0x00010bf51200(lVar2);
      dVar5 = dVar4;
      _CGRectGetMinX(dVar4,dVar9,dVar13,param_5);
      dVar6 = dVar4;
      _CGRectGetMinY(dVar4,dVar9,dVar13,param_5);
      *param_1 = 1;
      lVar3 = param_6;
      dVar7 = dVar4;
      dVar10 = dVar9;
      dVar14 = dVar13;
      uVar15 = param_5;
      func_0x00010bf513e0();
      iVar1 = (int)lVar3;
      param_1[1] = dVar7;
      param_1[2] = dVar10;
      param_1[3] = dVar14;
      param_1[4] = uVar15;
      param_1[5] = param_2 - dVar5;
      param_1[6] = param_3 - dVar6;
      param_1[7] = dVar13;
      param_1[8] = param_5;
      param_1[9] = 0;
      _CGRectContainsPoint(dVar4,dVar9,dVar13,param_5,param_2,param_3);
      if (iVar1 != 0) {
        *param_1 = 0;
        _CGRectGetWidth(dVar4,dVar9,dVar13,param_5);
        *(bool *)(param_1 + 9) = dVar4 - (param_2 - dVar5) < param_4;
      }
      goto LAB_1070279ec;
    }
  }
  *param_1 = 2;
  uVar8 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar12 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  uVar11 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  param_1[2] = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  param_1[1] = uVar8;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
LAB_1070279ec:
  _objc_release(lVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107027a24; end: 107027a4f; +[SCTapAnimationView tapAnimationView] */

void FUN_107027a24(void)

{
  _objc_alloc();
  func_0x00010c013de0(0,0,0x404b800000000000,0x404b800000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107027a50; end: 107027c93; -[SCTapAnimationView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107027a50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f8488;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112762c30;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1733a0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1fe740(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1fe800(0x3ecccccd,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar5))
    ;
    func_0x00010c1d4bc0(0,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(puVar1);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar5));
    _CGRectGetMidX();
    func_0x00010c1842e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112762c34;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1d4bc0(0,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(puVar1);
    _CGRectInset();
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar5));
    _CGRectGetMidX();
    func_0x00010c1842e0(*(undefined8 *)((long)puVar1 + lVar5));
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762c38) = 0x3fc119ce075f6fd2;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107027c94; end: 107027d87; -[SCTapAnimationView showWithCompletion:keepOuterRing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_112762c30));
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + _DAT_112762c34));
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107027d88;
  puStack_58 = &UNK_11084aaa8;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c17fb40(puVar1,param_2,&puStack_70);
  func_0x00010befa480(param_1,param_2,param_4);
  func_0x00010befa4a0(param_1);
  func_0x00010bef9360(param_1);
  func_0x00010bef9380(param_1);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107027d88; end: 107027da3;  */

void FUN_107027d88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107027d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 107027da4; end: 107027ecb; -[SCTapAnimationView fadeOutView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107027da4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107027ecc;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_68);
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(*(undefined8 *)(param_1 + _DAT_112762c38));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c19bc40(puVar1,param_2,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762c30),param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110de5e98);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  _objc_release(puVar1);
  return;
}



/* Entry: 107027ecc; end: 107027ed3;  */

void FUN_107027ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 107027ed4; end: 107027fb7; -[SCTapAnimationView keyFrameAnimationWithKeyPath:duration:values:keyTimes:timingFunctions:] */

void FUN_107027ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf04040(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_1);
  func_0x00010c220360(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1b6d00(puVar1,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c2160a0(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c19bc40(puVar1,param_3,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107027fb8; end: 10702809b; -[SCTapAnimationView animationWithKeyPath:duration:fromValue:toValue:timingFunction:] */

void FUN_107027fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf04040(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(param_1);
  func_0x00010c1a1180(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c216920(puVar1,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c216080(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c19bc40(puVar1,param_3,*(undefined8 *)PTR__kCAFillModeForwards_110346ce0);
  func_0x00010c1ea580(puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10702809c; end: 107028263; -[SCTapAnimationView addOuterRingOpacityAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702809c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
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
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111814f0;
  if (param_3 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111814d8;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f68f0f6);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = *(double *)(param_1 + _DAT_112762c38);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_80 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_78 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c086700(dVar12 * 5.0,param_1,param_2,puVar2,ppuVar1,
                      &PTR__OBJC_CLASS___NSConstantArray_111181508,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762c30),param_2,lVar7,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar12 = *(double *)(lVar7 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_1b0,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000);
  func_0x00010c297140(puVar2,param_2,&uStack_1b0);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_160 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_1a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_1b0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_198 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_1a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_190 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_180 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_118 = puVar2;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_1b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_110 = puVar5;
  _CATransform3DMakeScale(&uStack_1b0,0x3fea8f5c28f5c28f,0x3fea8f5c28f5c28f,0x3ff0000000000000);
  func_0x00010c297140(puVar3,param_2,&uStack_1b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_128 = puVar8;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_128,2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c086700(dVar12 * 3.0,lVar7,param_2,puVar4,puVar6,
                      &PTR__OBJC_CLASS___NSConstantArray_111181520,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010bef6c20(*(undefined8 *)(lVar7 + _DAT_112762c30),param_2,lVar11,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
  ___stack_chk_fail();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f68f0f6);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = *(double *)(lVar11 + _DAT_112762c38);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_228 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_220 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_228,2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar11;
  func_0x00010c086700(dVar12 * 3.0,lVar11,param_2,puVar2,
                      &PTR__OBJC_CLASS___NSConstantArray_111181538,
                      &PTR__OBJC_CLASS___NSConstantArray_111181550,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bef6c20(*(undefined8 *)(lVar11 + _DAT_112762c34),param_2,lVar7,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar12 = *(double *)(lVar7 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_310,0,0,0x3ff0000000000000);
  func_0x00010c297140(puVar2,param_2,&uStack_310);
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_2d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_2b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_2c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_2a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_2b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_298 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_2a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_308 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_310 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_2f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_300 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_2e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_2f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_2d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_2e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_310);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bf04060(dVar12 + dVar12,lVar7,param_2,puVar3,puVar2,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010bef6c20(*(undefined8 *)(lVar7 + _DAT_112762c34),param_2,lVar11,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release(lVar11);
  return;
}



/* Entry: 107028264; end: 1070284e7; -[SCTapAnimationView addOuterRingScaleAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107028264(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
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
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar11 = *(double *)(param_1 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_130,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000);
  func_0x00010c297140(puVar2,param_2,&uStack_130);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_130 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_100 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_98 = puVar2;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_130);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puStack_90 = puVar3;
  _CATransform3DMakeScale(&uStack_130,0x3fea8f5c28f5c28f,0x3fea8f5c28f5c28f,0x3ff0000000000000);
  func_0x00010c297140(puVar4,param_2,&uStack_130);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_a8 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c086700(dVar11 * 3.0,param_1,param_2,puVar1,puVar5,
                      &PTR__OBJC_CLASS___NSConstantArray_111181520,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762c30),param_2,lVar9,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f68f0f6);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = *(double *)(lVar9 + _DAT_112762c38);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_1a8 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a0 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c086700(dVar11 * 3.0,lVar9,param_2,puVar2,&PTR__OBJC_CLASS___NSConstantArray_111181538
                      ,&PTR__OBJC_CLASS___NSConstantArray_111181550,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010bef6c20(*(undefined8 *)(lVar9 + _DAT_112762c34),param_2,lVar10,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar11 = *(double *)(lVar10 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_290,0,0,0x3ff0000000000000);
  func_0x00010c297140(puVar2,param_2,&uStack_290);
  _objc_retainAutoreleasedReturnValue();
  uStack_248 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_250 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_238 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_240 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_228 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_230 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_218 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_220 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_288 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_290 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_278 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_280 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_268 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_270 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_258 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_260 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_290);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010bf04060(dVar11 + dVar11,lVar10,param_2,puVar4,puVar2,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010bef6c20(*(undefined8 *)(lVar10 + _DAT_112762c34),param_2,lVar9,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release(lVar9);
  return;
}



/* Entry: 1070284e8; end: 10702866b; -[SCTapAnimationView addInnerCircleOpacityAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070284e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
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
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f68f0f6);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = *(double *)(param_1 + _DAT_112762c38);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_78 = puVar2;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c086700(dVar7 * 3.0,param_1,param_2,puVar1,
                      &PTR__OBJC_CLASS___NSConstantArray_111181538,
                      &PTR__OBJC_CLASS___NSConstantArray_111181550,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762c34),param_2,lVar5,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar7 = *(double *)(lVar5 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_160,0,0,0x3ff0000000000000);
  func_0x00010c297140(puVar1,param_2,&uStack_160);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_100 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_160 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_160);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf04060(dVar7 + dVar7,lVar5,param_2,puVar2,puVar1,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bef6c20(*(undefined8 *)(lVar5 + _DAT_112762c34),param_2,lVar6,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release(lVar6);
  return;
}



/* Entry: 10702866c; end: 1070287e7; -[SCTapAnimationView addInnerCircleScaleAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10702866c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"transform");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  dVar6 = *(double *)(param_1 + _DAT_112762c38);
  _CATransform3DMakeScale(&uStack_e0,0,0,0x3ff0000000000000);
  func_0x00010c297140(puVar2,param_2,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
  uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
  uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
  uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
  uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
  uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
  uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
  uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
  uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
  uStack_e0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
  uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
  uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
  uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
  uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
  uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
  uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297140(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0,0,0,0x3f800000,PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf04060(dVar6 + dVar6,param_1,param_2,puVar1,puVar2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112762c34),param_2,lVar5,
                      &PTR____CFConstantStringClassReference_110db1058);
  _objc_release(lVar5);
  return;
}



/* Entry: 1070287e8; end: 1070287f7; -[SCTapAnimationView animationStepDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070287e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762c38);
}



/* Entry: 1070287f8; end: 107028807; -[SCTapAnimationView setAnimationStepDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070287f8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762c38) = param_1;
  return;
}



/* Entry: 107028808; end: 107028847; -[SCTapAnimationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107028808(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762c34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762c30,0);
  return;
}



/* Entry: 107028848; end: 107028a47; +[SCCameraSnapDocUtil addBaseMediaLayerWithSnapDocEditor:baseMediaInput:flashOn:frontFacing:transform:mediaOrigins:removeSoftTrim:] */

void FUN_107028848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 4;
  func_0x00010c0c14a0(param_4);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107028a48; end: 107028aa3;  */

void FUN_107028a48(long param_1)

{
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107028aa4; end: 107028f2f; +[SCCameraSnapDocUtil addFutureBaseMediaLayerWithSnapDocEditor:baseMediaInput:mediaType:flashOn:frontFacing:transform:mediaOrigins:removeSoftTrim:] */

undefined * FUN_107028aa4(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long in_x7;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 in_stack_00000000;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar7 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  _objc_release(puVar7);
  if (lVar2 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185560(param_3);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126affe8;
  func_0x00010c09dea0(param_3);
  func_0x00010c09e180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010c09dea0();
  puVar3 = PTR_PTR_1126affe8;
  if ((lVar8 == 0) || (lVar2 != 0)) {
    func_0x00010c09dea0(param_3);
    func_0x00010c09e180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    puVar4 = puVar7;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar4);
    func_0x00010befa9a0(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar3;
  }
  lVar8 = param_3;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (in_x7 == 0) {
    lVar8 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf931e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_retain(in_stack_00000000);
  _objc_retain(lVar8);
  func_0x00010c288840(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar5 = param_4;
  func_0x00010bfb2660(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(in_stack_00000000);
  _objc_retain(lVar2);
  _objc_retain(puVar7);
  _objc_retain(in_x7);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar5);
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(in_x7);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(in_stack_00000000);
  _objc_release(lVar8);
  _objc_release(in_stack_00000000);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(in_x7);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf0b760();
  if ((int)puVar7 == 5) {
    puVar3 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bfd8fc0();
    _objc_release(puVar3);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return puVar7;
}



/* Entry: 107028f30; end: 1070290d3;  */

undefined8 FUN_107028f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1070290d4; end: 10702945b;  */

void FUN_1070290d4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf30ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a12c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2199c0();
    _objc_release(uVar2);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar4 == 0) goto LAB_107029444;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0ed200();
  iVar1 = (int)uVar2;
  uVar2 = uVar5;
  uVar3 = param_2;
  if (iVar1 < 5) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        func_0x00010c0c5be0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4d80();
      }
      else {
        if (iVar1 != 4) goto LAB_1070293f4;
        func_0x00010c0c5c00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4da0();
      }
      goto LAB_1070293e4;
    }
    if (iVar1 == 1) {
      func_0x00010c0c5b40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d00();
      goto LAB_1070293e4;
    }
    if (iVar1 == 2) {
      func_0x00010c0c5b80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d40();
      goto LAB_1070293e4;
    }
  }
  else {
    if (iVar1 < 7) {
      if (iVar1 == 5) {
        func_0x00010c0c5b20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4ce0();
      }
      else {
        if (iVar1 != 6) goto LAB_1070293f4;
        func_0x00010bf8a6c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c191d40();
      }
    }
    else if (iVar1 == 7) {
      func_0x00010c0c5bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d60();
    }
    else {
      if (iVar1 != 8) goto LAB_1070293f4;
      func_0x00010beff040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166880();
    }
LAB_1070293e4:
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
LAB_1070293f4:
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165a40();
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
LAB_107029444:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10702945c; end: 10702946f;  */

void FUN_10702945c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addBaseMediaWithInput_removeSoft_11259b5e8,
             param_2,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107029470; end: 1070295e7;  */

void FUN_107029470(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (param_3 != 0) {
      func_0x00010bf43ca0(uVar2);
      goto LAB_107029598;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010bf43ca0(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c28b3e0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    func_0x00010c288840(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    _objc_release(param_2);
    puVar1 = param_2;
  }
  _objc_release(puVar1);
LAB_107029598:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1070295e8; end: 10702964f;  */

void FUN_1070295e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c4bc0(uVar1);
  uVar1 = param_2;
  func_0x00010c27c540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c192d40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107029650; end: 10702996b;  */

void FUN_107029650(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  func_0x00010c1c4020(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar2 == 0) goto LAB_1070298f8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ed200();
  iVar1 = (int)uVar4;
  uVar4 = uVar3;
  uVar5 = param_2;
  if (iVar1 < 5) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        func_0x00010c0c5be0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4d80();
      }
      else {
        if (iVar1 != 4) goto LAB_1070298a8;
        func_0x00010c0c5c00(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4da0();
      }
      goto LAB_107029898;
    }
    if (iVar1 == 1) {
      func_0x00010c0c5b40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d00();
      goto LAB_107029898;
    }
    if (iVar1 == 2) {
      func_0x00010c0c5b80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d40();
      goto LAB_107029898;
    }
  }
  else {
    if (iVar1 < 7) {
      if (iVar1 == 5) {
        func_0x00010c0c5b20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4ce0();
      }
      else {
        if (iVar1 != 6) goto LAB_1070298a8;
        func_0x00010bf8a6c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c191d40();
      }
    }
    else if (iVar1 == 7) {
      func_0x00010c0c5bc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d60();
    }
    else {
      if (iVar1 != 8) goto LAB_1070298a8;
      func_0x00010beff040(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3fe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166880();
    }
LAB_107029898:
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
LAB_1070298a8:
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165a40();
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(uVar3);
LAB_1070298f8:
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80();
  if (iVar1 != 0) {
    func_0x00010c0c4bc0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar4 = param_2;
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0699e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10702996c; end: 107029973; -[SCCameraSnapModelServices model] */

undefined8 FUN_10702996c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107029974; end: 10702997f; -[SCCameraSnapModelServices .cxx_destruct] */

void FUN_107029974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107029980; end: 1070299f3; -[SCCameraUISnapDocEditorPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_107029980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8498;
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



/* Entry: 1070299f4; end: 1070299fb; -[SCCameraUISnapDocEditorPluginScope plugInRegistry] */

undefined8 FUN_1070299f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070299fc; end: 107029a07; -[SCCameraUISnapDocEditorPluginScope .cxx_destruct] */

void FUN_1070299fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107029a08; end: 107029a13; -[SCMainCameraScopedCameraSnapModelServices .cxx_destruct] */

void FUN_107029a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107029a14; end: 107029a87; -[SCCameraPermissionStateFix initWithCameraResources:] */

undefined1 * FUN_107029a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f84a8;
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



/* Entry: 107029a88; end: 107029a8f; -[SCCameraPermissionStateFix priority] */

undefined8 FUN_107029a88(void)

{
  return 0;
}



/* Entry: 107029a90; end: 107029aa3; -[SCCameraPermissionStateFix name] */

void FUN_107029a90(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 107029aa4; end: 107029ae3; -[SCCameraPermissionStateFix fixError:] */

undefined8 FUN_107029aa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f9c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a680();
  _objc_release(uVar1);
  return 1;
}



/* Entry: 107029ae4; end: 107029aef; -[SCCameraPermissionStateFix .cxx_destruct] */

void FUN_107029ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107029af0; end: 107029b17; -[SCCaptureSessionFixer captureSessionFixEventObservable] */

void FUN_107029af0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107029b18; end: 107029d3f; -[SCCaptureSessionFixer _fixAVSessionIfNecessary] */

void FUN_107029b18(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf05400();
  _objc_release(uVar1);
  if ((((uVar2 & 1) == 0) && (lVar5 = param_2, func_0x00010be3e940(), (int)lVar5 != 0)) &&
     (func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770),
     1.0 <= param_1 - *(double *)(param_2 + 0x18))) {
    *(double *)(param_2 + 0x18) = param_1;
    uVar1 = param_2 + 0x40;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c07cd60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
      uVar4 = *(undefined8 *)(param_2 + 0x88);
      uVar3 = 2;
      func_0x0001003a49a8(2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a880(uVar4,param_3,2,uVar3);
      _objc_release(uVar3);
      lVar5 = *(long *)(param_2 + 8);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 < 3) {
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_107029d40;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_2;
        func_0x00010c0f7fc0(uVar3,param_3,&puStack_58);
        _objc_release(uVar3);
        lVar5 = param_2 + 0x40;
        _objc_loadWeakRetained(lVar5);
        func_0x00010bfb20e0();
        _objc_release(lVar5);
      }
      else {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        uStack_70 = 0x107029d88;
        puStack_68 = &UNK_110842e18;
        lStack_60 = param_2;
        func_0x00010c0f7fc0(uVar3,param_3,&puStack_80);
        _objc_release(uVar3);
        func_0x00010bec16a0(param_2);
      }
    }
    else {
      *(undefined8 *)(param_2 + 8) = 0;
    }
    uVar1 = param_2 + 0x40;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c07cd60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      param_2 = param_2 + 0x38;
      _objc_loadWeakRetained(param_2);
      lVar5 = param_2;
      func_0x00010c11dfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fe0(0x3ff0000000000000);
      _objc_release(lVar5);
      _objc_release(param_2);
    }
  }
  return;
}



/* Entry: 107029d40; end: 107029dcf;  */

void FUN_107029d40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126d41c0;
  func_0x00010bf7dce0(PTR_PTR_1126d41c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107029dd0; end: 107029dd7;  */

void FUN_107029dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fixAVSessionIfNecessary_112563940);
  return;
}



/* Entry: 107029dd8; end: 107029ef3; -[SCCaptureSessionFixer _runningARSessionConsistencyCheckAndFix] */

void FUN_107029dd8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    dVar4 = *(double *)(param_2 + 0x20);
    _CACurrentMediaTime();
    if (dVar4 <= 0.0) {
      *(double *)(param_2 + 0x20) = param_1;
      return;
    }
    if (param_1 - *(double *)(param_2 + 0x20) <= 5.0) {
      return;
    }
  }
  else {
    _CACurrentMediaTime();
    lVar1 = param_2 + 0x38;
    dVar4 = param_1;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf093a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5ec20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_1 - dVar4 <= 2.0) goto LAB_107029ed4;
  }
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13bf40();
  _objc_release(lVar1);
LAB_107029ed4:
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 107029ef4; end: 107029f83;  */

void FUN_107029ef4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126d41c0;
  func_0x00010bf7dce0(PTR_PTR_1126d41c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107029f84; end: 10702a073; -[SCCaptureSessionFixer _startRunningWithNewCaptureSessionIfNecessary] */

void FUN_107029f84(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c11dfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10702a074; end: 10702a09f;  */

void FUN_10702a074(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10702a0a0; end: 10702a6b7; -[SCCaptureSessionFixer _startRunningWithNewCaptureSession] */

void FUN_10702a0a0(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010c23e400();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bfd41c0();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010010fab4();
  lVar1 = lVar5;
  if ((int)lVar6 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar5);
  if (lVar1 == 0) goto LAB_10702a670;
  func_0x00010c160120();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  lVar8 = lVar5;
  func_0x00010bfc4be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (lVar8 == 0) goto LAB_10702a670;
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = lVar6;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c232420();
  if ((int)lVar7 == 0) {
    uVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c076b60();
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(lVar6);
    if ((uVar4 & 1) == 0) goto LAB_10702a230;
    bVar2 = true;
  }
  else {
    _objc_release(lVar5);
    _objc_release(lVar6);
LAB_10702a230:
    lVar6 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010c255620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010c255620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256420();
    _objc_release(lVar5);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010c255620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c12f060();
    _objc_release(lVar6);
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010bf1c900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
    bVar2 = false;
  }
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c128e60();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar5 = lVar6;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c07ff20();
  iVar10 = (int)lVar7;
  _objc_release(lVar5);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  lVar5 = lVar6;
  func_0x00010bf093a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(lVar5);
  _objc_release(lVar6);
  if (!bVar2) {
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar8 = lVar5;
    func_0x00010bf092a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  lVar6 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c2568a0();
  _objc_release(lVar6);
  puVar9 = PTR__OBJC_CLASS___ARSession_1126b9de8;
  _objc_alloc_init(PTR__OBJC_CLASS___ARSession_1126b9de8);
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c16a040();
  _objc_release(lVar6);
  _objc_release(puVar9);
  func_0x00010be92180(param_1);
  puVar9 = PTR_PTR_1126b6ff0;
  func_0x00010c2321c0();
  if ((int)puVar9 == 0) {
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010c299ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar5 != 0) {
      func_0x00010beae540();
      goto LAB_10702a594;
    }
    if (bVar2) {
      func_0x00010beb1060();
    }
    else {
      func_0x00010beae500(param_1);
    }
  }
  else {
    func_0x00010beae560(param_1);
LAB_10702a594:
    iVar10 = 1;
  }
  lVar6 = param_1;
  func_0x00010be3e940();
  if ((int)lVar6 != 0) {
    uVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bf05400();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      lVar6 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bfb20e0();
      _objc_release(lVar6);
    }
  }
  if (iVar10 != 0) {
    lVar6 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250c00();
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c160440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a0a0();
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(param_1);
LAB_10702a670:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10702a6b8; end: 10702a74b; -[SCCaptureSessionFixer _resetAVCaptureSession] */

void FUN_10702a6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf70d80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c154f00();
  func_0x00010c1243e0(lVar1,param_2,lVar3,lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10702a74c; end: 10702a8c7; -[SCCaptureSessionFixer _setupNewVideoFileDataSource] */

void FUN_10702a74c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c149540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126d41c8;
  _objc_alloc(PTR_PTR_1126d41c8);
  puVar5 = PTR_PTR_1126b6ff0;
  func_0x00010bfad160(PTR_PTR_1126b6ff0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b6ff0;
  func_0x00010c154f20(PTR_PTR_1126b6ff0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c036cc0(puVar4,param_2,puVar5,puVar6,lVar1,*(undefined8 *)(param_1 + 0x70));
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c221500();
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010beae520(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10702a8c8; end: 10702aa33; -[SCCaptureSessionFixer _setupNewVideoDataSourceFromSourceProvider] */

void FUN_10702a8c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c149540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126d41d0;
  _objc_alloc(PTR_PTR_1126d41d0);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c299ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c04e720(puVar4,param_2,lVar5,lVar2,*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x70));
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c221500();
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  func_0x00010beae520(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}


