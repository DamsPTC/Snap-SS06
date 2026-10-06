/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b4b4b8; end: 107b4b4c3; -[SCOperaVideoLayerViewController videoControlsView:didSeekToTime:reason:seekingToleranceDisabled:] */

void FUN_107b4b4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__seekToTime_reason_seekingTolera_112584e78,param_4,param_5);
  return;
}



/* Entry: 107b4b4c4; end: 107b4ba9f; -[SCOperaVideoLayerViewController _seekToTime:reason:seekingToleranceDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4b4c4(double param_1,double *param_2,int param_3,double *param_4,undefined **param_5)

{
  long *plVar1;
  bool bVar2;
  double *pdVar3;
  double *pdVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  double *pdVar15;
  long lVar16;
  undefined1 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  double dStack_220;
  double dStack_218;
  double dStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  double dStack_1d0;
  long lStack_1c8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  double *pdStack_110;
  undefined1 auStack_108 [8];
  double dStack_100;
  double *pdStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_e8 [8];
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar15 = param_4;
  _objc_opt_class();
  pdVar4 = (double *)((long)param_2 + (long)_DAT_11276ab28);
  uStack_98 = pdVar4[1];
  dStack_a0 = *pdVar4;
  dStack_90 = pdVar4[2];
  _CMTimeGetSeconds(&dStack_a0);
  pdVar3 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar3);
  if ((param_1 == 9.223372036854776e+18) || (param_1 == -1.0)) {
    if (param_1 == 9.223372036854776e+18) {
      pdVar15 = param_2;
      func_0x00010be74f60();
      _objc_retainAutoreleasedReturnValue();
      pdVar4 = pdVar15;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      if (pdVar4 == (double *)0x0) {
        dStack_a0 = 0.0;
        uStack_98 = 0.0;
        dStack_90 = 0.0;
      }
      else {
        func_0x00010bf60480(&dStack_a0,pdVar4);
      }
      func_0x00010be5e680(&dStack_c0,param_2);
      func_0x00010be17a80(param_2);
      _objc_release(pdVar4);
      _objc_release(pdVar15);
    }
    dVar18 = 9.223372036854776e+18;
    pdVar3 = (double *)PTR_PTR_1126c9cf0;
    func_0x00010c269500();
    _objc_retainAutoreleasedReturnValue();
    param_5 = (undefined **)PTR_PTR_1126c9cf8;
    func_0x00010c0735c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_88 = param_5;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    pdVar15 = pdVar3;
    func_0x00010bf04440(param_2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release();
  }
  else if (*(char *)((long)param_2 + (long)_DAT_11276ab1c) == '\x01') {
    _objc_opt_class(param_2);
    uStack_98 = pdVar4[1];
    dVar18 = *pdVar4;
    dStack_90 = pdVar4[2];
    dStack_a0 = dVar18;
    _CMTimeGetSeconds(&dStack_a0);
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    pdVar3 = param_2;
  }
  else {
    plVar1 = (long *)((long)param_2 + (long)_DAT_11276ab40);
    dVar18 = (double)plVar1[2];
    dVar20 = ABS(0.0 - dVar18);
    dVar19 = ABS(dVar18 + 0.0) * 2.220446049250313e-16;
    bVar2 = true;
    if ((2.2250738585072014e-308 <= dVar20) && (bVar2 = false, !NAN(dVar20) && !NAN(dVar19))) {
      bVar2 = dVar20 < dVar19;
    }
    if (!bVar2) {
      dVar19 = ABS(param_1 - dVar18);
      dVar18 = ABS(param_1 + dVar18) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar19) && (bVar2 = false, !NAN(dVar19) && !NAN(dVar18))) {
        bVar2 = dVar19 < dVar18;
      }
      if (bVar2) {
        _objc_opt_class(param_2);
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release();
        pdVar3 = param_2;
        goto LAB_107b4ba3c;
      }
    }
    uStack_98 = pdVar4[1];
    dVar19 = *pdVar4;
    dStack_90 = pdVar4[2];
    dStack_a0 = dVar19;
    _CMTimeGetSeconds(&dStack_a0);
    *plVar1 = (long)param_4;
    plVar1[1] = (long)dVar19;
    plVar1[2] = (long)param_1;
    lVar16 = (long)_DAT_11276abd4;
    func_0x00010bf7a5a0(*(undefined8 *)((long)param_2 + lVar16));
    func_0x00010be74c80(&dStack_a0,param_2);
    dVar18 = param_1;
    if (((uStack_98._4_4_ & 0x1d) == 1) &&
       (func_0x00010be74ca0(param_2), (double)(long)dVar19 <= (double)(long)param_1)) {
      _objc_opt_class(param_2);
      func_0x00010be74ca0(param_2);
      dStack_b8 = pdVar4[1];
      dVar18 = *pdVar4;
      dStack_b0 = pdVar4[2];
      dStack_c0 = dVar18;
      _CMTimeGetSeconds(&dStack_c0);
      func_0x00010be74ca0(param_2);
      pdVar15 = param_2;
      func_0x00010c0f0be0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(pdVar15);
      func_0x00010be74ca0(param_2);
      dVar18 = dVar18 + -0.5;
    }
    pdVar3 = (double *)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    if ((*(byte *)((long)param_2 + (long)_DAT_11276abbc) & 1) == 0) {
      pdVar15 = param_2;
      func_0x00010c29a520();
      uVar17 = SUB81(pdVar15,0);
    }
    else {
      uVar17 = 1;
    }
    _objc_opt_class(param_2);
    pdVar15 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pdVar15);
    func_0x00010c0694c0(param_2);
    if ((int)param_5 == 0) {
      _CMTimeMakeWithSeconds(&dStack_c0,0x3fb999999999999a,600);
    }
    else {
      dStack_b8 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_c0 = *(double *)PTR__kCMTimeZero_110348670;
      dStack_b0 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    uVar7 = *(undefined8 *)((long)param_2 + lVar16);
    func_0x00010c0ff060(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befd900(dVar18);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)param_2 + (long)_DAT_11276abac);
    dStack_d8 = pdVar4[1];
    dStack_e0 = *pdVar4;
    dStack_d0 = pdVar4[2];
    _CMTimeGetSeconds(&dStack_e0);
    func_0x00010bf7bc20(uVar7);
    _objc_initWeak(auStack_e8,param_2);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_107b4baa0;
    puStack_118 = &UNK_1109fde28;
    param_5 = &puStack_130;
    param_3 = (int)auStack_e8;
    _objc_copyWeak(auStack_108);
    dStack_100 = dVar18;
    pdStack_f8 = param_4;
    _objc_retain(pdVar3);
    dStack_d8 = dStack_b8;
    dStack_e0 = dStack_c0;
    dStack_d0 = dStack_b0;
    pdVar15 = &dStack_e0;
    pdStack_110 = pdVar3;
    uStack_f0 = uVar17;
    func_0x00010c1572e0(dVar18,param_2);
    _objc_release(pdStack_110);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_e8);
    _objc_release();
  }
LAB_107b4ba3c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_5 + 5);
  _objc_destroyWeak(auStack_e8);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar4 = pdVar3 + 5;
  _objc_loadWeakRetained();
  if (pdVar4 != (double *)0x0) {
    _objc_opt_class(pdVar4);
    pdVar15 = (double *)((long)pdVar4 + (long)_DAT_11276ab28);
    dStack_218 = pdVar15[1];
    dVar18 = *pdVar15;
    dStack_210 = pdVar15[2];
    dStack_220 = dVar18;
    _CMTimeGetSeconds(&dStack_220);
    uVar7 = *(undefined8 *)((long)pdVar4 + (long)_DAT_11276abd4);
    func_0x00010c0ff060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079b80();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    pdVar15 = pdVar4;
    func_0x00010c0f0be0(pdVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pdVar15);
    _objc_release(puVar5);
    _objc_release(uVar7);
    if (*(char *)(pdVar3 + 8) == '\x01') {
      func_0x00010be6da60(pdVar4);
    }
    pdVar15 = (double *)0x4;
    func_0x00010bedade0(pdVar4);
    if (param_3 != 0) {
      pdVar8 = (double *)PTR_PTR_1126c9400;
      func_0x00010c157400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9408;
      func_0x00010c157060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_208 = puVar5;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c9408;
      puStack_1e8 = puVar6;
      func_0x00010c1570e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_200 = puVar9;
      func_0x00010c0df720(*(double *)((long)pdVar4 + (long)_DAT_11276ab40 + 8) * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126c9408;
      puStack_1e0 = puVar10;
      func_0x00010c157360();
      _objc_retainAutoreleasedReturnValue();
      dVar18 = pdVar3[6] * 1000.0;
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_1f8 = puVar11;
      func_0x00010c0df720(dVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126c9408;
      puStack_1d8 = puVar12;
      func_0x00010c1570a0();
      _objc_retainAutoreleasedReturnValue();
      dStack_1d0 = pdVar3[4];
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1f0 = puVar13;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      pdVar15 = pdVar8;
      func_0x00010bf04440(pdVar4);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(pdVar8);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pdVar15);
  func_0x00010bee8f60(pdVar4);
  lVar16 = (long)_DAT_11276abd8;
  if (*(char *)((long)pdVar4 + lVar16) == '\x01') {
    if (pdVar15 != (double *)0x0) {
      (*(code *)pdVar15[2])(pdVar15,1);
    }
    *(undefined1 *)((long)pdVar4 + lVar16) = 0;
  }
  else {
    _objc_opt_class(pdVar4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar18,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    pdVar3 = pdVar4;
    func_0x00010c0f0be0(pdVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(pdVar3);
    _objc_release(puVar5);
    _CMTimeMakeWithSeconds(auStack_278,0x3f847ae147ae147b,600);
    _CMTimeMakeWithSeconds(auStack_290,0x3fb999999999999a,600);
    func_0x00010c1572e0(dVar18,pdVar4);
  }
  _objc_release(pdVar15);
  return;
}



/* Entry: 107b4baa0; end: 107b4bd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4baa0(double param_1,long param_2,int param_3,undefined *param_4)

{
  double *pdVar1;
  long lVar2;
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
  long lVar13;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    _objc_opt_class(lVar2);
    pdVar1 = (double *)(lVar2 + _DAT_11276ab28);
    dStack_c8 = pdVar1[1];
    param_1 = *pdVar1;
    dStack_c0 = pdVar1[2];
    dStack_d0 = param_1;
    _CMTimeGetSeconds(&dStack_d0);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_11276abd4);
    func_0x00010c0ff060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079b80();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    lVar13 = lVar2;
    func_0x00010c0f0be0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    _objc_release(puVar4);
    _objc_release(uVar3);
    if (*(char *)(param_2 + 0x40) == '\x01') {
      func_0x00010be6da60(lVar2);
    }
    param_4 = (undefined *)0x4;
    func_0x00010bedade0(lVar2);
    if (param_3 != 0) {
      puVar4 = PTR_PTR_1126c9400;
      func_0x00010c157400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9408;
      func_0x00010c157060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b8 = puVar5;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c9408;
      puStack_98 = puVar6;
      func_0x00010c1570e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b0 = puVar7;
      func_0x00010c0df720(*(double *)(lVar2 + _DAT_11276ab40 + 8) * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126c9408;
      puStack_90 = puVar8;
      func_0x00010c157360();
      _objc_retainAutoreleasedReturnValue();
      param_1 = *(double *)(param_2 + 0x30) * 1000.0;
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a8 = puVar9;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126c9408;
      puStack_88 = puVar10;
      func_0x00010c1570a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = *(undefined8 *)(param_2 + 0x20);
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a0 = puVar11;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar4;
      func_0x00010bf04440(lVar2);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  func_0x00010bee8f60(lVar2);
  lVar13 = (long)_DAT_11276abd8;
  if (*(char *)(lVar2 + lVar13) == '\x01') {
    if (param_4 != (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
    *(undefined1 *)(lVar2 + lVar13) = 0;
  }
  else {
    _objc_opt_class(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010c0f0be0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    _objc_release(puVar4);
    _CMTimeMakeWithSeconds(auStack_128,0x3f847ae147ae147b,600);
    _CMTimeMakeWithSeconds(auStack_140,0x3fb999999999999a,600);
    func_0x00010c1572e0(param_1,lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b4bd84; end: 107b4be9f; -[SCOperaVideoLayerViewController seekToMediaStartTimeWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4bd84(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_4);
  func_0x00010bee8f60(param_2);
  lVar2 = (long)_DAT_11276abd8;
  if (*(char *)(param_2 + lVar2) == '\x01') {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
    *(undefined1 *)(param_2 + lVar2) = 0;
  }
  else {
    _objc_opt_class(param_2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(puVar1);
    _CMTimeMakeWithSeconds(auStack_58,0x3f847ae147ae147b,600);
    _CMTimeMakeWithSeconds(auStack_70,0x3fb999999999999a,600);
    func_0x00010c1572e0(param_1,param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b4bea0; end: 107b4bee7; -[SCOperaVideoLayerViewController seekToTime:] */

void FUN_107b4bea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_48 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_40 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  uStack_20 = uStack_40;
  func_0x00010c1572e0(param_1,param_2,&uStack_30,&uStack_50,0);
  return;
}



/* Entry: 107b4bee8; end: 107b4c1fb; -[SCOperaVideoLayerViewController seekToTime:toleranceBefore:toleranceAfter:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4bee8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_6);
  if (*(char *)(param_2 + _DAT_11276ab1c) == '\x01') {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
  }
  else {
    *(undefined1 *)(param_2 + _DAT_11276ab1c) = 1;
    func_0x00010be09080(param_2);
    _objc_opt_class(param_2);
    puStack_88 = (undefined8 *)param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_4[2];
    _CMTimeGetSeconds(&uStack_90);
    puStack_88 = (undefined8 *)param_5[1];
    uStack_90 = *param_5;
    uStack_80 = param_5[2];
    _CMTimeGetSeconds(&uStack_90);
    lVar1 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    puStack_88 = &uStack_90;
    _CMTimeMakeWithSeconds(auStack_a8,param_1,600);
    _objc_initWeak(auStack_b0,param_2);
    lVar1 = param_2;
    func_0x00010be74f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b0);
    uStack_b8 = param_1;
    _objc_retain(puVar2);
    _objc_retain(param_6);
    func_0x00010c157300(lVar1);
    _objc_release(lVar1);
    func_0x00010befa560(param_2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11276abc4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e63c0();
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 107b4c1fc; end: 107b4c3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c1fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) &&
     (lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 8), (*(byte *)(lVar4 + 0x18) & 1) == 0)) {
    *(undefined1 *)(lVar4 + 0x18) = 1;
    lVar4 = lVar2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_68,lVar4);
    }
    _CMTimeGetSeconds(&uStack_68);
    _objc_release(lVar4);
    func_0x00010bddc900(param_1,lVar2);
    puVar1 = (undefined8 *)(lVar2 + _DAT_11276ab28);
    _CMTimeMakeWithSeconds(&uStack_68,param_1,600);
    puVar1[2] = uStack_58;
    puVar1[1] = uStack_60;
    *puVar1 = uStack_68;
    _objc_opt_class(lVar2);
    func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x20));
    lVar4 = lVar2;
    func_0x00010c0f0be0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    *(undefined1 *)(lVar2 + _DAT_11276ab1c) = 0;
    lVar4 = lVar2;
    func_0x00010c08c0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c2612c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0();
    func_0x00010be09080(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + 0x28);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_3);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 107b4c3b0; end: 107b4c3fb; -[SCOperaVideoLayerViewController setProgress:forIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c3b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276abd4);
  func_0x00010c0ff060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b4c3fc; end: 107b4c407; -[SCOperaVideoLayerViewController _debugInfo] */

undefined ** FUN_107b4c3fc(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 107b4c408; end: 107b4c427; -[SCOperaVideoLayerViewController videoControlsViewCurrentTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c408(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11276ab28);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 107b4c428; end: 107b4c42b; -[SCOperaVideoLayerViewController videoControlsViewDuration:] */

void FUN_107b4c428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playbackDuration_11257acc0);
  return;
}



/* Entry: 107b4c42c; end: 107b4c42f; -[SCOperaVideoLayerViewController videoControlsViewSeekPoints:] */

void FUN_107b4c42c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__seekPoints_112584e48);
  return;
}



/* Entry: 107b4c430; end: 107b4c533; -[SCOperaVideoLayerViewController _mediaDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c430(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be5aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s__longformDuration_112574548);
    return;
  }
  lVar4 = *(long *)(param_2 + _DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar1 = PTR__kCMTimeZero_110348670;
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *param_1 = uVar5;
    param_1[2] = *(undefined8 *)(puVar1 + 0x10);
  }
  else {
    func_0x00010c09c8c0(param_1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b4c534; end: 107b4c57f; -[SCOperaVideoLayerViewController _mediaDurationSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c534(long param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = (long)_DAT_11276ab34;
  dVar2 = *(double *)(param_1 + lVar1);
  if (dVar2 == 0.0) {
    func_0x00010be5e680(auStack_38);
    _CMTimeGetSeconds(auStack_38);
    *(double *)(param_1 + lVar1) = dVar2;
  }
  return;
}



/* Entry: 107b4c580; end: 107b4c5e7; -[SCOperaVideoLayerViewController _playbackDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c580(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010be5e680(&uStack_38);
  if (*(long *)(param_2 + _DAT_11276ab64) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    uStack_40 = uStack_28;
    func_0x00010c0ff220(param_1,*(long *)(param_2 + _DAT_11276ab64),param_3,&uStack_50);
  }
  return;
}



/* Entry: 107b4c5e8; end: 107b4c613; -[SCOperaVideoLayerViewController _playbackDurationSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c5e8(long param_1)

{
  func_0x00010be5e700();
                    /* WARNING: Could not recover jumptable at 0x00010c0ff210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ab64),
             PTR_s_playbackDurationSecsWithMediaDur_11261d6a0);
  return;
}



/* Entry: 107b4c614; end: 107b4c6a3; -[SCOperaVideoLayerViewController _longformDuration] */

void FUN_107b4c614(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _CMTimeMakeWithSeconds(param_1,param_2 / 1000.0,600);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4c6a4; end: 107b4c813; -[SCOperaVideoLayerViewController _generateDefaultSeekPointTimestampsIfNeeded:] */

void FUN_107b4c6a4(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  func_0x00010be5e700(param_2);
  dVar5 = param_1;
  func_0x00010bdf9720(param_2);
  iVar4 = (int)((param_1 + -2.5) / dVar5);
  if (0 < iVar4) {
    iVar4 = iVar4 + 1;
  }
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)(long)iVar4) {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    if (0.0 < param_1) {
      dVar6 = 0.0;
      do {
        puVar2 = puVar1;
        func_0x00010bf529e0();
        if ((undefined *)(long)iVar4 <= puVar2) break;
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_3,puVar2);
        _objc_release(puVar2);
        dVar6 = dVar5 + dVar6;
      } while (dVar6 < param_1);
    }
    _objc_opt_class(param_2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = puVar1;
    func_0x00010bf529e0(puVar1);
    func_0x00010c0df840(puVar2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b4c814; end: 107b4c89f; -[SCOperaVideoLayerViewController _defaultSeekPointsTimeInterval] */

double FUN_107b4c814(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  dVar4 = (double)lVar3;
  if (lVar3 < 1) {
    dVar4 = 10.0;
  }
  return dVar4;
}



/* Entry: 107b4c8a0; end: 107b4cb83; -[SCOperaVideoLayerViewController _seekPoints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4c8a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  if (*(long *)(param_1 + _DAT_11276ac04) == 4 || *(long *)(param_1 + _DAT_11276ac04) == 1) {
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar8 = puVar3;
    func_0x00010bf9a520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf529e0();
    func_0x00010bf0a0e0(puVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar3;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    if (puVar5 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar1 = puVar3;
        func_0x00010bf9a520(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1120();
        func_0x00010c0df720(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(puVar4,param_2,puVar5,puVar8);
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar8 = puVar8 + 1;
        puVar5 = puVar3;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
      } while (puVar8 < puVar1);
    }
    puVar8 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
  }
  else {
    puVar3 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f0c4b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar8 = (undefined *)0x0;
      if (puVar5 != (undefined *)0x0) {
        lVar7 = (long)_DAT_11276ac58;
        puVar3 = param_1;
        func_0x00010be1af60(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar3;
        _objc_release(uVar6);
        puVar8 = *(undefined **)(param_1 + lVar7);
        _objc_retain(puVar8);
      }
      goto LAB_107b4caf4;
    }
    puVar8 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f0c498);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_107b4caf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107b4cb84; end: 107b4cbf3; -[SCOperaVideoLayerViewController _observablePlaybackEventsGroups] */

void FUN_107b4cb84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b4cbf4; end: 107b4d0a7; -[SCOperaVideoLayerViewController _playerDidEncounterError:failureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107b4cbf4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = param_1;
  func_0x00010beb28a0();
  if ((int)lVar11 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + _DAT_11276abe4) = 1;
    _objc_release(puVar10);
    param_3 = puVar3;
  }
  _objc_opt_class(param_1);
  lVar11 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar14);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_11276abe4;
  bVar1 = *(byte *)(param_1 + lVar11);
  puVar3 = param_3;
  func_0x000107ddcbe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa560(param_1);
  _objc_release(puVar3);
  lVar12 = (long)_DAT_11276ac3c;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = param_3;
  _objc_release(uVar4);
  lVar13 = (long)_DAT_11276ac50;
  *(undefined8 *)(param_1 + lVar13) = param_4;
  *(undefined1 *)(param_1 + lVar11) = 1;
  lVar14 = (long)_DAT_11276ab00;
  lVar11 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar11;
  func_0x00010c0c6680();
  _objc_release(lVar11);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar5 != 0) {
    puVar10 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar11 = *(long *)(param_1 + lVar12);
    if (lVar11 == 0) {
      _objc_retain(puVar3);
      lVar11 = *(long *)(param_1 + lVar12);
      *(undefined **)(param_1 + lVar12) = puVar3;
    }
    else {
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar12);
      *(undefined **)(param_1 + lVar12) = puVar10;
      _objc_release(uVar4);
      _objc_release(puVar2);
    }
    _objc_release(lVar11);
    *(undefined8 *)(param_1 + lVar13) = 3;
    _objc_release(puVar3);
  }
  ppuVar6 = (undefined **)PTR_PTR_1126b2638;
  func_0x00010c29a1a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010bf04420(param_1);
  _objc_release(ppuVar6);
  puVar3 = param_3;
  func_0x00010bf3ec40();
  if (puVar3 == (undefined *)0xfffffffffffffc14) {
    puVar3 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = *(undefined ***)PTR__NSURLErrorDomain_110345620;
    puVar10 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)puVar10 != 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110eaef18;
      func_0x00010befa560(param_1);
      lVar14 = param_1 + lVar14;
      _objc_loadWeakRetained();
      func_0x00010c1338c0();
      _objc_release(lVar14);
    }
  }
  lVar11 = *(long *)(param_1 + lVar13);
  if (lVar11 < 4) {
    if (lVar11 - 1U < 2) {
LAB_107b4cfb0:
      _objc_opt_class(param_1);
      if ((bVar1 & 1) == 0) {
        lVar11 = param_1;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        ppuVar8 = (undefined **)0x0;
        func_0x00010be953c0(param_1);
        goto LAB_107b4d064;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar11);
      _objc_release(puVar3);
      ppuVar8 = &PTR____CFConstantStringClassReference_110eaef38;
      func_0x00010becae00(param_1);
    }
    else if (lVar11 != 3) goto LAB_107b4d064;
  }
  else {
    if (lVar11 == 4) goto LAB_107b4cfb0;
    if (lVar11 != 5) goto LAB_107b4d064;
  }
  func_0x00010be9f6e0(param_1);
LAB_107b4d064:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar8;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(ppuVar8);
    if (((ulong)ppuVar6 & 1) == 0) {
      puVar3 = param_3;
      func_0x00010bf60b00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      puVar2 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar3);
      puVar3 = puVar10;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar10);
      puVar10 = puVar3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar10;
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar3;
      func_0x00010c08fa60();
      if ((puVar10 == (undefined *)0x0) ||
         (puVar2 = puVar3, func_0x00010bf32ee0(), puVar10 = PTR_PTR_1126d23d0,
         puVar2 != (undefined *)0x0)) {
        puVar10 = (undefined *)0x0;
      }
      else {
        func_0x00010c0ea360(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
        func_0x00010bf461c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf66f60(puVar10);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(param_3);
      }
      _objc_release(puVar3);
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    return puVar10;
  }
  return param_3;
}



/* Entry: 107b4d0a8; end: 107b4d257; -[SCOperaVideoLayerViewController _shouldAttributeErrorToBlockedCodec:] */

undefined * FUN_107b4d0a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba158;
  func_0x00010bf87dc0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf60b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if ((uVar2 == 0) ||
       (uVar2 = uVar1, func_0x00010bf32ee0(), puVar4 = PTR_PTR_1126d23d0, uVar2 != 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010c0ea360(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66f60(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}



/* Entry: 107b4d258; end: 107b4d2c3; -[SCOperaVideoLayerViewController _sendMediaFailsToLoadEvent] */

void FUN_107b4d258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c4de0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b4d2c4; end: 107b4d32f; -[SCOperaVideoLayerViewController _sendMediaFailsToDisplayEvent] */

void FUN_107b4d2c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b4d330; end: 107b4d353; -[SCOperaVideoLayerViewController _clearPlaybackErrorTrackingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d330(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11276ac50) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac3c);
  *(undefined8 *)(param_1 + _DAT_11276ac3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b4d354; end: 107b4d363; -[SCOperaVideoLayerViewController _playerItemDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276abd0),PTR_s_observePlayerItem__112615de8);
  return;
}



/* Entry: 107b4d364; end: 107b4d54b; -[SCOperaVideoLayerViewController playerDidBecomeReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d364(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_opt_class();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276aafc);
    lVar3 = *(long *)(param_1 + _DAT_11276aba0);
    func_0x00010baf2e2c(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b29736c(uVar2,&PTR____CFConstantStringClassReference_110eae5f8,0,lVar3,1);
  }
  else {
    lVar3 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == lVar3) {
      func_0x00010bf04340(PTR_PTR_1126c98e0);
      _objc_opt_class(param_1);
      lVar4 = param_1;
      func_0x00010bdf8620(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      func_0x00010befa560(param_1);
    }
    else {
      _objc_opt_class(param_1);
      lVar4 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11276aafc);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276aba0);
      func_0x00010baf2e2c(uVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110eaef78;
      if (lVar3 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eaef98;
      }
      func_0x00010b29736c(uVar6,&PTR____CFConstantStringClassReference_110eae5d8,ppuVar1,uVar2,1);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4d54c; end: 107b4d54f; -[SCOperaVideoLayerViewController playerDidEncounterError:failureType:] */

void FUN_107b4d54c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be75010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playerDidEncounterError_failure_11257ada0);
  return;
}



/* Entry: 107b4d550; end: 107b4d7cb; -[SCOperaVideoLayerViewController playerTimeControlStatusDidChanged:oldStatus:newStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d550(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_opt_class();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276aafc);
    lVar3 = *(long *)(param_1 + _DAT_11276aba0);
    func_0x00010baf2e2c(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b29736c(uVar2,&PTR____CFConstantStringClassReference_110eae5f8,0,lVar3,1);
  }
  else {
    lVar3 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    if (param_3 == lVar3) {
      lVar4 = param_1;
      func_0x00010bdf8620(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276abc4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e5a20();
      _objc_release(uVar2);
      func_0x00010c288940(*(undefined8 *)(param_1 + _DAT_11276ab6c));
      if ((param_5 == 0) && (*(char *)(param_1 + _DAT_11276ac24) == '\x01')) {
        _objc_opt_class(param_1);
        lVar4 = param_1;
        func_0x00010c0f0be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        func_0x00010be6da60(param_1);
      }
      func_0x00010bedade0(param_1);
    }
    else {
      lVar4 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11276aafc);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276aba0);
      func_0x00010baf2e2c(uVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110eaef78;
      if (lVar3 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eaef98;
      }
      func_0x00010b29736c(uVar6,&PTR____CFConstantStringClassReference_110eae5d8,ppuVar1,uVar2,1);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4d7cc; end: 107b4d9cf; -[SCOperaVideoLayerViewController playerRateDidChange:oldRate:newRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d7cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    _objc_opt_class();
    lVar2 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11276aafc);
    lVar2 = *(long *)(param_3 + _DAT_11276aba0);
    func_0x00010baf2e2c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b29736c(uVar5,&PTR____CFConstantStringClassReference_110eae5f8,0,lVar2,1);
  }
  else {
    lVar2 = param_3;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == lVar2) {
      uVar5 = *(undefined8 *)(param_3 + _DAT_11276abc4);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e5900(param_2);
      _objc_release(uVar5);
      lVar3 = param_3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c25c720();
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        func_0x00010bedade0(param_3);
      }
      func_0x00010c117a40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff120(param_2);
    }
    else {
      _objc_opt_class(param_3);
      lVar3 = param_3;
      func_0x00010c0f0be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      uVar5 = *(undefined8 *)(param_3 + _DAT_11276aafc);
      param_3 = *(long *)(param_3 + _DAT_11276aba0);
      func_0x00010baf2e2c(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110eaef78;
      if (lVar2 != 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eaef98;
      }
      func_0x00010b29736c(uVar5,&PTR____CFConstantStringClassReference_110eae5d8,ppuVar1,param_3,1);
    }
    _objc_release(param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b4d9d0; end: 107b4dabf; -[SCOperaVideoLayerViewController playerItem:statusDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4d9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c14d1a0();
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276aafc);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276aba0);
    func_0x00010baf2e2c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b29736c(uVar4,&PTR____CFConstantStringClassReference_110eae618,0,uVar3,1);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bedd580(param_1);
    func_0x00010bedade0(param_1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4dac0; end: 107b4dbb3; -[SCOperaVideoLayerViewController playerBufferStatusDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4dac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)(param_1 + _DAT_11276abb0);
  _objc_retain(param_3);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c14d1a0();
  _objc_release(param_3);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276aafc);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276aba0);
    func_0x00010baf2e2c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b29736c(uVar4,&PTR____CFConstantStringClassReference_110eae618,0,uVar2,1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010be95ca0(param_1);
    func_0x00010bedade0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b4dbb4; end: 107b4dbf7; -[SCOperaVideoLayerViewController _isBeginningAndCurrentTimeFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b4dbb4(long param_1)

{
  double *pdVar1;
  double dVar2;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  pdVar1 = (double *)(param_1 + _DAT_11276ab28);
  dStack_28 = pdVar1[1];
  dVar2 = *pdVar1;
  dStack_20 = pdVar1[2];
  dStack_30 = dVar2;
  _CMTimeGetSeconds(&dStack_30);
  return dVar2 == 0.0;
}



/* Entry: 107b4dbf8; end: 107b4df67; -[SCOperaVideoLayerViewController _updateLoadingIndicatorForReason:debugReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4dbf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte bVar17;
  long lVar18;
  byte bVar19;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  if ((*(char *)(param_1 + _DAT_11276ab1c) != '\x01') || (*(long *)(param_1 + _DAT_11276ac04) != 1))
  {
    uVar2 = (uint)*(undefined8 *)(param_1 + _DAT_11276ab6c);
    func_0x00010c07a400();
    lVar3 = param_1;
    func_0x00010be3e660();
    lVar18 = (long)_DAT_11276abb0;
    lVar4 = *(long *)(param_1 + lVar18);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252d60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 == 0) {
      bVar19 = *(byte *)(param_1 + _DAT_11276abbc);
    }
    else {
      bVar19 = 0;
    }
    lVar5 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c09cfc0();
    bVar17 = 0;
    if ((((int)lVar4 != 0) && (lVar6 != 2)) && (((uVar2 ^ 1 | (uint)lVar3) & 1) != 0)) {
      bVar17 = *(byte *)(param_1 + _DAT_11276ac24) | bVar19;
    }
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    uVar7 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar6 == 2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar19 & 1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf987e0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = lVar5;
    func_0x00010c26f180(lVar5);
    func_0x00010c0df780(puVar13,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fdc0(lVar5);
    func_0x00010c0df740(puVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c121f00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)(param_1 + _DAT_11276ac24));
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab28);
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
    uStack_70 = puVar1[2];
    _CMTimeGetSeconds(&uStack_80);
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar4);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar6);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010be08da0(param_1,param_2,bVar17 & 1,param_3);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b4df68; end: 107b4e0b7; -[SCOperaVideoLayerViewController _enableLoadingIndicator:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4df68(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276ac4c;
  *(undefined1 *)(param_1 + lVar6) = param_3;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010bedd320(param_1);
  if (*(char *)(param_1 + lVar6) == '\x01') {
    uVar3 = param_4;
    func_0x00010bb05594();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276ac20);
    *(undefined8 *)(param_1 + _DAT_11276ac20) = uVar3;
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010beb9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__showLoadingIndicatorIfNecessary_11258c028,param_4);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276ac20);
  *(undefined8 *)(param_1 + _DAT_11276ac20) = 0;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eba0(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be08dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enableLoadingIndicatorOnLayerVi_11255fd10,0,param_4);
  return;
}



/* Entry: 107b4e0b8; end: 107b4e157; -[SCOperaVideoLayerViewController _enableLoadingIndicatorOnLayerView:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11276ac5c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_3 == 0) {
    func_0x00010c09cee0(lVar1);
  }
  else {
    func_0x00010c09cf00();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf90b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276abb0),PTR_s_enableLoadingIndicator__1125c1c70,
             param_3);
  return;
}



/* Entry: 107b4e158; end: 107b4e203; -[SCOperaVideoLayerViewController _showLoadingIndicatorIfNecessaryWithDelayForReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + _DAT_11276abb4) == '\x01') {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c09cfc0();
    _objc_release(lVar2);
    puVar1 = PTR_s__showLoadingIndicatorIfNecessary_1125385b8;
    if ((int)lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8f40(0x3fe0000000000000,param_1,param_2,puVar1,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 107b4e204; end: 107b4e26f; -[SCOperaVideoLayerViewController _showLoadingIndicatorIfNecessaryForReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e204(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + _DAT_11276ac4c) == '\x01') &&
     (*(char *)(param_1 + _DAT_11276abb4) == '\x01')) {
    uVar1 = param_3;
    func_0x00010c282760(param_3);
    func_0x00010be08dc0(param_1,param_2,1,uVar1 & 0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4e270; end: 107b4e2d7; -[SCOperaVideoLayerViewController _updatePlaybackControlsTapToSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e270(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abd4);
  func_0x00010c0ff060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b4e2d8; end: 107b4e45b; -[SCOperaVideoLayerViewController _resumeForBufferStatusChangeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e2d8(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((*(byte *)(param_1 + (long)_DAT_11276ac24) & 1) != 0) &&
     (*(char *)(param_1 + (long)_DAT_11276ab1c) != '\x01')) {
    iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11276ab6c);
    func_0x00010c07a400();
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11276abac);
      func_0x00010bfd6e20();
      if (iVar1 == 0) {
LAB_107b4e3a0:
        _objc_opt_class(param_1);
        uVar2 = param_1;
        func_0x00010bdf8620(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0f0be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar3);
        _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be6da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__operaDidRequestToResume__112579038,
                   &PTR____CFConstantStringClassReference_110eaf098);
        return;
      }
      uVar2 = param_1;
      func_0x00010be74f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c14d3c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_107b4e3a0;
      _objc_opt_class(param_1);
      uVar2 = param_1;
      func_0x00010bdf8620(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(param_1);
      goto LAB_107b4e354;
    }
  }
  _objc_opt_class(param_1);
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = param_1;
LAB_107b4e354:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b4e45c; end: 107b4e627; -[SCOperaVideoLayerViewController _playerConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e45c(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  if ((int)uVar4 == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_107b4e518:
    uVar1 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar1 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar2 = uVar1;
    func_0x00010c071f40();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      _objc_alloc(PTR_PTR_1126d6ad8);
      goto LAB_107b4e608;
    }
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11276ab18);
    if (param_3 != 0) goto LAB_107b4e5c8;
LAB_107b4e4f0:
    func_0x00010c106020();
  }
  else {
    lVar7 = (long)_DAT_11276ab18;
    lVar8 = *(long *)(param_1 + lVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar8 == 0) goto LAB_107b4e518;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    if (param_3 == 0) goto LAB_107b4e4f0;
LAB_107b4e5c8:
    func_0x00010c1052a0(uVar5);
  }
  _objc_alloc(PTR_PTR_1126d6ad8);
LAB_107b4e608:
  func_0x00010bff5cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b4e628; end: 107b4e677; -[SCOperaVideoLayerViewController _player] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e628(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b4e678; end: 107b4e80b; -[SCOperaVideoLayerViewController playerDidStall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e678(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar6 = (long)_DAT_11276abc4;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5940();
  _objc_release(uVar2);
  func_0x00010be42b60(param_1,param_2,0,0);
  func_0x00010c0e6ac0(*(undefined8 *)(param_1 + _DAT_11276ab70));
  if (*(char *)(param_1 + _DAT_11276ac24) == '\x01') {
    _objc_opt_class(param_1);
    lVar3 = param_1;
    func_0x00010bdf8620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276abac);
    puVar1 = (undefined8 *)(param_1 + _DAT_11276ab28);
    uStack_48 = puVar1[1];
    uStack_50 = *puVar1;
    uStack_40 = puVar1[2];
    _CMTimeGetSeconds(&uStack_50);
    func_0x00010bf7ba20(uVar2);
    func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10),param_2,1);
    puVar5 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar5,param_2,lVar3,&PTR____CFConstantStringClassReference_110eaeb98,
                        &PTR____CFConstantStringClassReference_110eaf0b8);
    _objc_release(lVar3);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e2b80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107b4e80c; end: 107b4e987; -[SCOperaVideoLayerViewController playerDidResumeFromStall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e80c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bea1120(param_1,param_2,3);
  lVar5 = param_1 + _DAT_11276ac5c;
  _objc_loadWeakRetained(lVar5);
  lVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cf20(lVar5,param_2,param_1,lVar2,6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  func_0x00010be42b60(param_1,param_2,1,0);
  func_0x00010c0e69e0(*(undefined8 *)(param_1 + _DAT_11276ab70));
  lVar5 = (long)_DAT_11276abac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c07f760();
  if (iVar1 != 0) {
    _objc_opt_class(param_1);
    lVar2 = param_1;
    func_0x00010bdf8620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf7bd40(*(undefined8 *)(param_1 + lVar5));
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276ac10),param_2,0);
  func_0x00010bedade0(param_1,param_2,7,&PTR____CFConstantStringClassReference_110eaf0d8);
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaf0f8);
  lVar5 = (long)_DAT_11276abc4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2b60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107b4e988; end: 107b4eb13; -[SCOperaVideoLayerViewController _playerDidBecomeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4e988(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eaf118);
  puVar1 = PTR_PTR_1126c98e0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110eaf138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04340(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + _DAT_11276abe4) = 0;
  func_0x00010bedd340(param_1);
  _objc_opt_class(param_1);
  lVar2 = param_1;
  func_0x00010bdf8620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar2);
  if ((*(char *)(param_1 + _DAT_11276abbc) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_11276abc8) & 1) == 0)) {
    lVar2 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec1140(param_1,param_2,lVar4);
  }
  else {
    _objc_opt_class(param_1);
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b4eb14; end: 107b4ebab; -[SCOperaVideoLayerViewController _isPlayingDidChangeTo:resetTimerOnStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4eb14(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if (((int)param_3 == 0) || (param_4 == 0)) {
    if ((int)param_3 == 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11276ab08));
    }
    else {
      func_0x00010c24d960();
    }
  }
  else {
    func_0x00010c138160();
  }
  lVar1 = param_1 + _DAT_11276abc0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b4ebac; end: 107b4ee2f; -[SCOperaVideoLayerViewController _updateVideoAssetForSubtitlesIfNecessary:currentAssetKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4ebac(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_4 != 0) && (param_5 != 0)) &&
     (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    lVar2 = param_2;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94400(param_2);
    lVar3 = param_2;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2 + _DAT_11276ab00;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar2;
    func_0x00010c0d5720(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0d5720(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010be23380(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c0eaa40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010be74f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010c28d500(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bedd5a0(param_2);
    lVar4 = lVar10;
    func_0x00010c100ae0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be66960(param_2);
    _objc_release(lVar4);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_78,param_2);
    _objc_copyWeak(auStack_88,auStack_78);
    uStack_80 = param_1;
    func_0x00010c1571c0(param_2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b4ee30; end: 107b4ee6b;  */

void FUN_107b4ee30(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be90280(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107b4ee6c; end: 107b4eecb; -[SCOperaVideoLayerViewController _reportSeekLatencyAfterSubtitleUpdateWithStartTs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4ee6c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + _DAT_11276aafc);
  dVar2 = param_1;
  _CACurrentMediaTime();
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110cd0bb0,&uStack_40,(long)((dVar2 - param_1) * 1000.0))
      ;
      func_0x000107c278ac(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 107b4eecc; end: 107b4f0f7; -[SCOperaVideoLayerViewController _enableSubtitlesIfNecessary:reason:] */

void FUN_107b4eecc(ulong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf125a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2612c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c072720();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa560(param_1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_1;
      func_0x00010c0eaa40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar5 = PTR_PTR_1126c98e0;
      func_0x00010bf18180();
      func_0x00010bee1580(param_1);
      uVar1 = param_1;
      func_0x00010c2991a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_70,auStack_58);
      _objc_retain(uVar1);
      puStack_68 = puVar5;
      uStack_60 = param_3;
      func_0x00010c09c3e0(uVar1);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_58);
      _objc_release(uVar1);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107b4f0f8; end: 107b4f303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f0f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2991a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c14d1a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      uVar10 = 0x3f800000;
      if (*(char *)(param_1 + 0x40) == '\0') {
        uVar10 = 0;
      }
      func_0x00010c1d4bc0(uVar10,*(undefined8 *)(lVar1 + _DAT_11276ac1c));
      puVar9 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        puVar9 = *(undefined **)(lVar1 + _DAT_11276abb0);
        func_0x00010c100fe0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        func_0x00010c100ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c158de0();
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c2612c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bef0a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c106f00(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        puVar7 = *(undefined **)(lVar1 + _DAT_11276abb0);
        func_0x00010c100fe0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c100ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c158de0();
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      _objc_release(puVar9);
      func_0x00010bf94960(PTR_PTR_1126c98e0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b4f304; end: 107b4f69f; -[SCOperaVideoLayerViewController _setSubtitlePositionWithUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f304(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c23a560();
  _objc_release(uVar4);
  _objc_release(uVar5);
  if ((uVar10 & 1) != 0) goto LAB_107b4f67c;
  uVar4 = param_1;
  func_0x00010be34160();
  if ((int)uVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + (long)_DAT_11276abd4);
    func_0x00010c0ff060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf500a0();
    if ((uVar10 & 1) == 0) {
      if (param_3 != 0) goto LAB_107b4f3c0;
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    goto LAB_107b4f468;
  }
  if (param_3 == 0) {
    uVar10 = 0;
  }
  else {
LAB_107b4f3c0:
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      _objc_release(puVar6);
      uVar10 = 0;
      if ((int)uVar4 != 0) goto LAB_107b4f468;
    }
    else {
      puVar8 = PTR_PTR_1126c9410;
      func_0x00010beeec40(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf1f3c0();
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      if ((uVar4 & 1) != 0) {
LAB_107b4f468:
        _objc_release(uVar5);
      }
    }
  }
  uVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0802c0();
  _objc_release(uVar5);
  uVar5 = uVar4 & 0xffffffff;
  bVar3 = (int)uVar4 == 0;
  dVar13 = 80.0;
  if (bVar3) {
    dVar13 = 0.0;
  }
  dVar14 = 75.0;
  if (bVar3) {
    dVar14 = 78.0;
  }
  if (((uVar4 & 1) == 0) && ((uVar10 & 1) == 0)) {
    dVar13 = 0.0;
    if (param_3 != 0) {
      puVar6 = PTR_PTR_1126c9410;
      func_0x00010bfe9fa0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 0) {
        _objc_release(puVar6);
      }
      else {
        puVar8 = PTR_PTR_1126c9410;
        func_0x00010bfe9fa0(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        _objc_release(puVar8);
        _objc_release(uVar5);
        _objc_release(puVar6);
        if ((int)uVar10 != 0) {
          uVar5 = 0;
          dVar14 = 73.0;
          if (*(double *)(param_1 + (long)_DAT_11276ac60) <= 73.0) {
            dVar14 = *(double *)(param_1 + (long)_DAT_11276ac60);
          }
          goto LAB_107b4f594;
        }
      }
    }
    uVar5 = 0;
    dVar14 = 90.0;
  }
LAB_107b4f594:
  iVar2 = _DAT_11276ac68;
  lVar1 = (long)_DAT_11276ac64;
  fVar11 = (float)*(double *)(param_1 + (long)_DAT_11276ac60);
  fVar12 = ABS((float)dVar14 - fVar11);
  fVar11 = ABS((float)dVar14 + fVar11) * 1.1920929e-07;
  bVar3 = true;
  if ((1.1754944e-38 <= fVar12) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar11))) {
    bVar3 = fVar12 < fVar11;
  }
  if (bVar3) {
    fVar11 = (float)*(double *)(param_1 + lVar1);
    fVar12 = ABS((float)dVar13 - fVar11);
    fVar11 = ABS((float)dVar13 + fVar11) * 1.1920929e-07;
    bVar3 = true;
    if ((1.1754944e-38 <= fVar12) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar11))) {
      bVar3 = fVar12 < fVar11;
    }
    if ((bVar3) && (uVar5 == *(ulong *)(param_1 + (long)_DAT_11276ac68))) goto LAB_107b4f67c;
  }
  *(double *)(param_1 + (long)_DAT_11276ac60) = dVar14;
  *(double *)(param_1 + lVar1) = dVar13;
  *(ulong *)(param_1 + (long)iVar2) = uVar5;
  uVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf125a0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  if ((int)uVar10 != 0) {
    func_0x00010bee1580(param_1);
  }
LAB_107b4f67c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4f6a0; end: 107b4f6eb; -[SCOperaVideoLayerViewController _removeCaptionsOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ac6c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12d760(param_3,param_2,*(long *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b4f6ec; end: 107b4f7d7; -[SCOperaVideoLayerViewController _addCaptionsOutput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f6ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110eaf1d8);
  lVar6 = (long)_DAT_11276ac6c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar2 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c2102a0(*(undefined8 *)(param_1 + lVar6),param_2,1);
    func_0x00010c18b640(*(undefined8 *)(param_1 + lVar6),param_2,param_1,
                        PTR___dispatch_main_q_11034be20);
  }
  uVar3 = param_3;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010befa4c0(param_3,param_2,*(undefined8 *)(param_1 + lVar6));
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b4f7d8; end: 107b4f95b; -[SCOperaVideoLayerViewController legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  uVar8 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  func_0x00010c08fa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010bf30940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = param_4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010c23a560();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (((ulong)ppuVar6 & 1) == 0) {
    lVar7 = (long)_DAT_11276ac1c;
    if (*(long *)((long)param_4 + lVar7) == 0) {
      ppuVar1 = param_4;
      func_0x00010be74f60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)((long)param_4 + lVar7);
      *(undefined ***)((long)param_4 + lVar7) = ppuVar1;
      _objc_release(uVar8);
      _objc_initWeak(auStack_c8,param_4);
      uVar8 = *(undefined8 *)((long)param_4 + (long)_DAT_11276ab04);
      puStack_f0 = puVar3;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_107b4fbbc;
      puStack_d8 = &UNK_11086ffc8;
      _objc_copyWeak(auStack_d0,auStack_c8);
      func_0x00010c0e0780(uVar8);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
      _objc_release(ppuVar2);
    }
    _objc_initWeak(auStack_c8,param_4);
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f8,auStack_c8);
    _objc_retain(param_4);
    func_0x00010c09c3e0(param_4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_f8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_c8);
  }
  return;
}



/* Entry: 107b4f95c; end: 107b4fbbb; -[SCOperaVideoLayerViewController _updateSubtitlesStyleIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4f95c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2612c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23a560();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((uVar4 & 1) == 0) {
    lVar6 = (long)_DAT_11276ac1c;
    if (*(long *)(param_1 + lVar6) == 0) {
      uVar2 = param_1;
      func_0x00010be74f60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar2;
      _objc_release(uVar5);
      _objc_initWeak(auStack_58,param_1);
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11276ab04);
      puStack_80 = puVar1;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_107b4fbbc;
      puStack_68 = &UNK_11086ffc8;
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0e0780(uVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_58,param_1);
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_1);
    func_0x00010c09c3e0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 107b4fbbc; end: 107b4fbef;  */

void FUN_107b4fbbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bec8b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b4fbf0; end: 107b4fcb7;  */

void FUN_107b4fbf0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2991a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c14d1a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((param_2 != 0) && ((int)uVar6 != 0)) {
      func_0x00010bee1560(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b4fcb8; end: 107b4fdc3; -[SCOperaVideoLayerViewController _updateSubtitlesStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4fcb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126d6ae0;
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde8060(param_1);
  func_0x00010c26c8a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2137a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubtitleLayerScreenSize_112595ee8);
  return;
}



/* Entry: 107b4fdc4; end: 107b4fdeb; -[SCOperaVideoLayerViewController _subtitleLayerVideoSizeChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4fdc4(long param_1)

{
  if ((*(long *)(param_1 + _DAT_11276ac1c) != 0) && ((*(byte *)(param_1 + _DAT_11276ac70) & 1) == 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010bee1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubtitleLayerScreenSize_112595ee8);
    return;
  }
  return;
}



/* Entry: 107b4fdec; end: 107b4fe9f; -[SCOperaVideoLayerViewController _updateSubtitleLayerScreenSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4fdec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_11276ac1c;
  if (*(long *)(param_3 + lVar2) != 0) {
    func_0x00010bde8060();
    lVar4 = (long)_DAT_11276ac70;
    *(undefined1 *)(param_3 + lVar4) = 1;
    uVar3 = *(undefined8 *)(param_3 + lVar2);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_40 = param_1;
    uStack_38 = param_2;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_40,"{CGSize=dd}");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(uVar3,param_4,puVar1,&PTR____CFConstantStringClassReference_110eaf218);
    _objc_release(puVar1);
    *(undefined1 *)(param_3 + lVar4) = 0;
  }
  return;
}



/* Entry: 107b4fea0; end: 107b4fea3; -[SCOperaVideoLayerViewController _teardownDebugBadge] */

void FUN_107b4fea0(void)

{
  return;
}



/* Entry: 107b4fea4; end: 107b4fea7; -[SCOperaVideoLayerViewController _refreshDebugBadgeIfNeeded] */

void FUN_107b4fea4(void)

{
  return;
}



/* Entry: 107b4fea8; end: 107b4ff93; -[SCOperaVideoLayerViewController mediaLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4fea8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c720();
  puVar5 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88860();
  lVar6 = (long)_DAT_11276abac;
  func_0x00010bfd6e40(*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf60c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  _objc_retain(PTR____NSDictionary0__struct_11034ab58);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b4ff94; end: 107b502b3; -[SCOperaVideoLayerViewController logShakeToReportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b4ff94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef9860(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eae1d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf50060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab360(param_3,param_2,lVar5,&PTR____CFConstantStringClassReference_110eaf238);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010beb6840();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaf258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eaf278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010beb46e0();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaf298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c0ab360(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_11276ab64),
                      &PTR____CFConstantStringClassReference_110eaf2b8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14d400();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaf2d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eaf2f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276abb0);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110eaf318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdf8620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b502b4; end: 107b502b7; -[SCOperaVideoLayerViewController _reportContentDebugInfo] */

void FUN_107b502b4(void)

{
  return;
}



/* Entry: 107b502b8; end: 107b502bb; -[SCOperaVideoLayerViewController _startFrameRateTrackerWithPlayer:] */

void FUN_107b502b8(void)

{
  return;
}



/* Entry: 107b502bc; end: 107b506ab; -[SCOperaVideoLayerViewController currentPlayerStatus] */

void FUN_107b502bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar22 = &PTR____CFConstantStringClassReference_110eaf338;
  }
  else {
    lVar1 = param_1;
    func_0x00010c252d60(param_1);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0dc0(param_1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_1;
    func_0x00010c078420(param_1);
    func_0x00010c0df6e0(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000107ddcbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar6 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c252d60();
    func_0x00010c0df780(puVar8,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x000107ddcbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c09ca60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_a0);
    }
    _CMTimeGetSeconds(&uStack_a0);
    lVar14 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_a0);
    }
    _CMTimeGetSeconds(&uStack_a0);
    func_0x00010c11fdc0(param_1);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar15 = param_1;
    func_0x00010c26f180(param_1);
    func_0x00010c0df780(puVar16,param_2,lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a360();
    lVar17 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a320();
    lVar18 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a300();
    lVar19 = param_1;
    func_0x00010c121f00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar20 = param_1;
    func_0x00010bf5f0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ac0();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar22,param_2,&PTR____CFConstantStringClassReference_110eaf358);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar15);
    _objc_release(puVar16);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar22);
  return;
}



/* Entry: 107b506ac; end: 107b50847; -[SCOperaVideoLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b506ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2338;
  _objc_retain(param_3);
  func_0x00010c282960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar7 != 0) {
    lVar2 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23e0c0();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c117ac0();
      _objc_release(lVar2);
      if ((int)lVar3 != 0) {
        lVar2 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        if (lVar3 == 0) {
          _objc_release(lVar2);
        }
        else {
          lVar3 = param_4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010c0f0be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar3;
          func_0x00010c0720c0(lVar3,param_2,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          if ((int)lVar6 == 0) goto LAB_107b5082c;
        }
        uVar7 = *(undefined8 *)(param_1 + _DAT_11276abb0);
        func_0x00010c29ae60(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf088c0();
        _objc_release(uVar7);
      }
    }
  }
LAB_107b5082c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b50848; end: 107b50867; -[SCOperaVideoLayerViewController loadingIndicatorDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b50848(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ac5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b50868; end: 107b5087b; -[SCOperaVideoLayerViewController setLoadingIndicatorDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b50868(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ac5c,param_3);
  return;
}



/* Entry: 107b5087c; end: 107b5089b; -[SCOperaVideoLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5087c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ac00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b5089c; end: 107b508af; -[SCOperaVideoLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5089c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ac00,param_3);
  return;
}



/* Entry: 107b508b0; end: 107b508bf; -[SCOperaVideoLayerViewController volumeController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b508b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ac74);
}



/* Entry: 107b508c0; end: 107b508ff; -[SCOperaVideoLayerViewController setVolumeController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b508c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ac74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b50900; end: 107b50bfb; -[SCOperaVideoLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b50900(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ac74,0);
  _objc_destroyWeak(param_1 + _DAT_11276ac00);
  _objc_destroyWeak(param_1 + _DAT_11276ac5c);
  _objc_storeStrong(param_1 + _DAT_11276ac6c,0);
  _objc_destroyWeak(param_1 + _DAT_11276abc0);
  _objc_storeStrong(param_1 + _DAT_11276ab7c,0);
  _objc_storeStrong(param_1 + _DAT_11276ac20,0);
  _objc_storeStrong(param_1 + _DAT_11276ac30,0);
  _objc_storeStrong(param_1 + _DAT_11276aba4,0);
  _objc_storeStrong(param_1 + _DAT_11276ac34,0);
  _objc_storeStrong(param_1 + _DAT_11276ab54,0);
  _objc_storeStrong(param_1 + _DAT_11276abc4,0);
  _objc_storeStrong(param_1 + _DAT_11276ab50,0);
  _objc_storeStrong(param_1 + _DAT_11276abd0,0);
  _objc_storeStrong(param_1 + _DAT_11276ab3c,0);
  _objc_storeStrong(param_1 + _DAT_11276ab70,0);
  _objc_storeStrong(param_1 + _DAT_11276ab6c,0);
  _objc_storeStrong(param_1 + _DAT_11276ab64,0);
  _objc_storeStrong(param_1 + _DAT_11276ac10,0);
  _objc_storeStrong(param_1 + _DAT_11276ab18,0);
  _objc_storeStrong(param_1 + _DAT_11276ab4c,0);
  _objc_storeStrong(param_1 + _DAT_11276ab14,0);
  _objc_storeStrong(param_1 + _DAT_11276ab60,0);
  _objc_storeStrong(param_1 + _DAT_11276ab48,0);
  _objc_destroyWeak(param_1 + _DAT_11276ab00);
  _objc_storeStrong(param_1 + _DAT_11276ab38,0);
  _objc_storeStrong(param_1 + _DAT_11276ac58,0);
  _objc_storeStrong(param_1 + _DAT_11276ac1c,0);
  _objc_storeStrong(param_1 + _DAT_11276ac54,0);
  _objc_storeStrong(param_1 + _DAT_11276abcc,0);
  _objc_storeStrong(param_1 + _DAT_11276abac,0);
  _objc_storeStrong(param_1 + _DAT_11276ac3c,0);
  _objc_storeStrong(param_1 + _DAT_11276aafc,0);
  _objc_storeStrong(param_1 + _DAT_11276ac28,0);
  _objc_storeStrong(param_1 + _DAT_11276abfc,0);
  _objc_storeStrong(param_1 + _DAT_11276ac08,0);
  _objc_storeStrong(param_1 + _DAT_11276ac48,0);
  _objc_storeStrong(param_1 + _DAT_11276ab44,0);
  _objc_destroyWeak(param_1 + _DAT_11276ac44);
  _objc_storeStrong(param_1 + _DAT_11276ac40,0);
  _objc_storeStrong(param_1 + _DAT_11276ab08,0);
  _objc_storeStrong(param_1 + _DAT_11276ab0c,0);
  _objc_storeStrong(param_1 + _DAT_11276ab04,0);
  _objc_storeStrong(param_1 + _DAT_11276ac18,0);
  _objc_storeStrong(param_1 + _DAT_11276abd4,0);
  _objc_storeStrong(param_1 + _DAT_11276abe0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276abb0,0);
  return;
}



/* Entry: 107b50bfc; end: 107b50d33; -[SCOperaVideoLayerViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b50bfc(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if ((param_4 == *(long *)(param_2 + (long)_DAT_11276abfc)) &&
     ((*(byte *)(param_2 + (long)_DAT_11276abb8) & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c117ac0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_107b50ce8;
    lVar4 = (long)_DAT_11276abb0;
    func_0x00010c09ef00(param_4,param_3,*(undefined8 *)(param_2 + lVar4));
    dVar5 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar4));
    _CGRectGetWidth();
    uVar1 = param_2;
    dVar6 = dVar5;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2690e0();
    _objc_release(uVar1);
    if (param_1 < dVar5 * dVar6) {
      uVar1 = param_2;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf80a40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) goto LAB_107b50ce8;
    }
  }
  else {
LAB_107b50ce8:
    if ((param_4 != *(long *)(param_2 + (long)_DAT_11276ac08)) ||
       (func_0x00010beb6840(), (param_2 & 1) == 0)) {
      uVar3 = 0;
      goto LAB_107b50d14;
    }
  }
  uVar3 = 1;
LAB_107b50d14:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107b50d34; end: 107b50d6b; -[SCOperaVideoLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b50d34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 == *(long *)(param_1 + _DAT_11276ac08)) &&
     (param_4 == *(long *)(param_1 + _DAT_11276abfc))) {
    return 1;
  }
  return 0;
}



/* Entry: 107b50d6c; end: 107b50e0b;  */

void FUN_107b50d6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b50e0c; end: 107b50e17;  */

void FUN_107b50e0c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6ae8;
  func_0x000107c61174(0);
  func_0x000107c61174(param_1);
  func_0x000107c610f4(puVar1);
  func_0x000107c3ba10();
  func_0x000107c61170(0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b50e18; end: 107b50e97; -[sc_async_queue_concrete isEqual:] */

undefined8 FUN_107b50e18(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107b50e74:
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d6ae8;
    _objc_opt_class(PTR_PTR_1126d6ae8);
    lVar2 = param_3;
    func_0x00010c077980(param_3,param_2,puVar1);
    if ((int)lVar2 != 0) {
      func_0x00010be85720();
      lVar2 = param_3;
      func_0x00010be85720();
      if (param_1 == lVar2) goto LAB_107b50e74;
    }
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107b50e98; end: 107b50ee7; -[sc_async_queue_concrete hash] */

undefined * FUN_107b50e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be85720();
  func_0x00010c0df860(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107b50ee8; end: 107b50f0b; -[sc_async_queue_concrete copyWithZone:] */

undefined8 FUN_107b50ee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b50f0c; end: 107b50fc7; -[sc_async_queue_concrete _queueID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b50f0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11276ac78);
  _objc_retain(lVar3);
  if (lRam00000001137275e0 != -1) {
    func_0x00010002a2fc(0x1137275e0,&PTR___NSConcreteGlobalBlock_1109fdf50);
  }
  _os_unfair_lock_lock(0x1137275c8);
  lVar2 = lVar3;
  _dispatch_queue_get_specific(lVar3,0x113240f68);
  lVar1 = lRam0000000113240f68;
  if (lVar2 == 0) {
    lRam0000000113240f68 = lRam0000000113240f68 + 1;
    _dispatch_queue_set_specific(lVar3,0x113240f68,lVar1,0);
    lVar2 = lVar1;
  }
  _os_unfair_lock_unlock(0x1137275c8);
  _objc_release(lVar3);
  return lVar2;
}



/* Entry: 107b50fc8; end: 107b50fff; -[sc_async_queue_concrete _queueLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b50fc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  _dispatch_queue_get_label(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_stringWithUTF8String__1126750c8,uVar2);
  return;
}



/* Entry: 107b51000; end: 107b5102f; -[sc_async_queue_concrete _unsafeRawQueue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51000(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b51030; end: 107b51033; -[sc_async_queue_concrete _assertIsCurrentQueue] */

void FUN_107b51030(void)

{
  return;
}



/* Entry: 107b51034; end: 107b51037; -[sc_async_queue_concrete _assertIsNotCurrentQueue] */

void FUN_107b51034(void)

{
  return;
}



/* Entry: 107b51038; end: 107b51083; -[sc_async_queue_concrete _isCurrentQueue] */

bool FUN_107b51038(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be85720();
  uVar1 = 0x113240f68;
  _dispatch_get_specific();
  return (6999999999 < uVar1 && 6999999999 < param_1) && param_1 == uVar1;
}



/* Entry: 107b51084; end: 107b510e7; -[sc_async_queue_concrete _ifCurrentQueueInvokeOtherwiseAsync:] */

void FUN_107b51084(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3f600();
  if ((int)uVar1 == 0) {
    func_0x00010bf0ae20(param_1);
    func_0x00010beeb5c0(param_1,param_2,param_3);
  }
  else {
    func_0x00010bf0ae40(param_1);
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b510e8; end: 107b511b3; -[sc_async_queue_concrete _queueLocalObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b510e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (lRam00000001137275e0 != -1) {
    func_0x00010002a2fc(0x1137275e0,&PTR___NSConcreteGlobalBlock_1109fdf50);
  }
  _os_unfair_lock_lock(0x1137275c8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  FUN_107b511b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x1137275c8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b511b4; end: 107b51263;  */

void FUN_107b511b4(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  if (lRam00000001137275e0 != -1) {
    func_0x00010002a2fc(0x1137275e0,&PTR___NSConcreteGlobalBlock_1109fdf50);
  }
  _os_unfair_lock_assert_owner(0x1137275c8);
  puVar1 = param_1;
  _dispatch_queue_get_specific(param_1,&UNK_10dee15c8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain();
    _dispatch_queue_set_specific(param_1,&UNK_10dee15c8,puVar1,PTR__CFRelease_11034a768);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b51264; end: 107b51333; -[sc_async_queue_concrete _setQueueLocalObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam00000001137275e0 != -1) {
    func_0x00010002a2fc(0x1137275e0,&PTR___NSConcreteGlobalBlock_1109fdf50);
  }
  _os_unfair_lock_lock(0x1137275c8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  FUN_107b511b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x1137275c8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b51334; end: 107b513e3; -[sc_async_queue_concrete _removeQueueLocalObjectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (lRam00000001137275e0 != -1) {
    func_0x00010002a2fc(0x1137275e0,&PTR___NSConcreteGlobalBlock_1109fdf50);
  }
  _os_unfair_lock_lock(0x1137275c8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  FUN_107b511b4(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(0x1137275c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b513e4; end: 107b5143f; -[sc_async_queue_concrete _tracer] */

void FUN_107b513e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6af0;
  _objc_opt_class(PTR_PTR_1126d6af0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be857a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107b51440; end: 107b514ab; -[sc_async_queue_concrete _setTracer:] */

void FUN_107b51440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6af0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6a00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b514ac; end: 107b514cb; -[sc_async_queue_concrete .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b514ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ac78,0);
  return;
}



/* Entry: 107b514cc; end: 107b5154f; -[SCOperaActionMenuHeaderView setupWithLayer:] */

void FUN_107b514cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010beac220(param_1);
  func_0x00010beb0f80(param_1);
  func_0x00010beacea0(param_1);
  func_0x00010beab220(param_1);
  func_0x00010beb01e0(param_1);
  func_0x00010beae620(param_1);
  _objc_release(param_3);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b51550; end: 107b5157f; -[SCOperaActionMenuHeaderView setVisiblePercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b51550(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276ac7c) = param_1;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
  return;
}


