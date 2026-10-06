/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052e7c00; end: 1052e7c53; -[SCBatteryPageViewLoggingItem .cxx_destruct] */

void FUN_1052e7c00(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1052e7c54; end: 1052e7d2f; -[SCBatteryPageViewLogger pageViewDidEndWithName:withPageViewEndTime:batteryLevel:isCharging:pageViewEndCpuTime:] */

void FUN_1052e7c54(double param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined1 param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  dVar2 = param_1;
  _objc_retain(param_6);
  if (param_6 != 0) {
    func_0x00010bdf7380(param_4);
    dStack_68 = dVar2;
    if (ABS(dVar2 - param_1) <= 2.0) {
      dStack_68 = param_1;
    }
    uVar1 = *(undefined8 *)(param_4 + 8);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1052e7d30;
    puStack_80 = &UNK_110876728;
    lStack_78 = param_4;
    _objc_retain(param_6);
    lStack_70 = param_6;
    uStack_60 = param_3;
    uStack_58 = param_2;
    uStack_54 = param_7;
    func_0x00010c0f7fc0(uVar1,param_5,&puStack_98);
    _objc_release(lStack_70);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 1052e7d30; end: 1052e7d47;  */

void FUN_1052e7d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__pageViewDidEndWithName_withPage_112579820,*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x44));
  return;
}



/* Entry: 1052e7d48; end: 1052e7ef3; -[SCBatteryPageViewLogger _pageViewDidEndWithName:withPageViewEndTime:batteryLevel:isCharging:pageViewEndCpuTime:] */

void FUN_1052e7d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  lVar1 = *(long *)(param_4 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_4 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c06df20(param_4);
      func_0x00010c06df20(param_4);
      func_0x00010bf781c0(param_1,param_2,param_3,lVar1);
      lVar2 = lVar1;
      func_0x00010bf27860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_4 + 0x18);
      _objc_retain(param_6);
      _objc_retain(lVar1);
      _objc_retain(lVar2);
      func_0x00010bf279e0(uVar3);
      func_0x00010c288400(param_4);
      FUN_1052e7f30(*(undefined8 *)(param_4 + 0x68),param_6,lVar2);
      func_0x00010c12d3e0(*(undefined8 *)(param_4 + 0x20));
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_6);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 1052e7ef4; end: 1052e7f2f;  */

void FUN_1052e7ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010be50900(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4,param_5,
                      *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1052e7f30; end: 1052e8013;  */

void FUN_1052e7f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    func_0x00010c067fc0(lVar1);
  }
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e8014; end: 1052e8a13; -[SCBatteryPageViewLogger _logBatteryPageViewMetricsForPage:withBatteryPageViewLoggingItem:cpuUsageDict:gpuUsageDict:cpuHistory:gpuHistory:cameraUsage:] */

void FUN_1052e8014(double param_1,long param_2,undefined8 param_3,undefined **param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined *in_stack_00000000;
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  double dStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000000);
  if ((param_4 != (undefined **)0x0) && (param_5 != 0)) {
    func_0x00010c0f1160(param_5);
    dVar23 = param_1;
    func_0x00010c0f1d40(param_5);
    param_1 = (param_1 - dVar23) * 1000.0;
    lVar15 = (long)param_1;
    ppuVar12 = &PTR____CFConstantStringClassReference_110dcfef8;
    puVar14 = in_stack_00000000;
    func_0x00010c0e00e0(in_stack_00000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010c0b4ca0();
    _objc_release(puVar14);
    if (10000 < lVar15) {
      ppuVar12 = (undefined **)PTR_PTR_1126b6fb8;
      lStack_320 = param_2;
      uStack_300 = param_6;
      _objc_opt_new();
      ppuVar2 = param_4;
      func_0x00010bf51e00(param_4);
      func_0x00010c1d7e80(ppuVar12,param_3,ppuVar2);
      _objc_release(ppuVar2);
      ppuStack_310 = param_4;
      func_0x00010b09d08c(param_4);
      puVar14 = PTR_PTR_1126b6f08;
      func_0x00010bfc9240(PTR_PTR_1126b6f08,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b66c0(ppuVar12,param_3,puVar14);
      _objc_release(puVar14);
      func_0x00010c1d89c0(ppuVar12,param_3,lVar15);
      lStack_2f0 = param_5;
      func_0x00010c1127e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_5;
      func_0x00010bf51e00();
      func_0x00010c206f20(ppuVar12,param_3,lVar15);
      _objc_release(lVar15);
      _objc_release(param_5);
      ppuStack_308 = ppuVar12;
      func_0x00010c176b20(ppuVar12,param_3,puVar1);
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_318 = in_stack_00000000;
      puStack_2c8 = puVar14;
      func_0x00010c0e00e0(in_stack_00000000,param_3,&PTR____CFConstantStringClassReference_110dcff18
                         );
      _objc_retainAutoreleasedReturnValue();
      dVar23 = 0.0;
      lStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      plStack_230 = (long *)0x0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      puStack_2e0 = in_stack_00000000;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = in_stack_00000000;
      func_0x00010bf52a60();
      puStack_2d8 = in_stack_00000000;
      if (in_stack_00000000 != (undefined *)0x0) {
        lStack_2e8 = *plStack_230;
        puStack_2d8 = in_stack_00000000;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_230 != lStack_2e8) {
              _objc_enumerationMutation(puStack_2f8);
            }
            uVar16 = *(undefined8 *)(lStack_238 + (long)puVar14 * 8);
            puVar1 = puStack_2e0;
            puStack_2d0 = puVar14;
            func_0x00010c0e00e0(puStack_2e0,param_3,uVar16);
            _objc_retainAutoreleasedReturnValue();
            dVar23 = 0.0;
            lStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            plStack_270 = (long *)0x0;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            puVar14 = puVar1;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar14;
            func_0x00010bf52a60();
            if (puVar3 != (undefined *)0x0) {
              lVar15 = *plStack_270;
              do {
                puVar17 = (undefined *)0x0;
                do {
                  if (*plStack_270 != lVar15) {
                    _objc_enumerationMutation(puVar14);
                  }
                  uVar19 = *(undefined8 *)(lStack_278 + (long)puVar17 * 8);
                  puVar4 = puVar1;
                  func_0x00010c0e00e0(puVar1,param_3,uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar4;
                  func_0x00010c0b4ca0();
                  if (0 < (long)puVar5) {
                    puVar5 = PTR_PTR_1126b6f48;
                    _objc_opt_new(PTR_PTR_1126b6f48);
                    uVar13 = uVar16;
                    func_0x00010c067ec0();
                    if ((int)uVar13 == 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar6 = uVar16;
                      func_0x00010c067ec0();
                      uVar13 = 0xffffffffffffffff;
                      if ((int)uVar6 == 1) {
                        uVar13 = 1;
                      }
                    }
                    func_0x00010c176760(puVar5,param_3,uVar13);
                    func_0x00010c0b4ca0(uVar19);
                    func_0x00010c1806e0(puVar5,param_3,uVar19);
                    puVar7 = puVar4;
                    func_0x00010c0b4ca0(puVar4);
                    func_0x00010c176b20(puVar5,param_3,puVar7);
                    func_0x00010befa120(puStack_2c8,param_3,puVar5);
                    _objc_release(puVar5);
                  }
                  _objc_release(puVar4);
                  puVar17 = puVar17 + 1;
                } while (puVar3 != puVar17);
                puVar3 = puVar14;
                func_0x00010bf52a60(puVar14,param_3,&uStack_280,auStack_180,0x10);
              } while (puVar3 != (undefined *)0x0);
            }
            _objc_release(puVar14);
            _objc_release(puVar1);
            puVar14 = puStack_2d0 + 1;
          } while (puVar14 != puStack_2d8);
          puVar14 = puStack_2f8;
          func_0x00010bf52a60(puStack_2f8,param_3,&uStack_240,auStack_100,0x10);
          puStack_2d8 = puVar14;
        } while (puVar14 != (undefined *)0x0);
      }
      _objc_release(puStack_2f8);
      ppuVar2 = ppuStack_308;
      func_0x00010c177380(ppuStack_308,param_3,puStack_2c8);
      puVar14 = PTR_PTR_1126b6fc0;
      _objc_opt_new(PTR_PTR_1126b6fc0);
      param_6 = uStack_300;
      uVar16 = uStack_300;
      func_0x00010c0e00e0(uStack_300,param_3,&PTR____CFConstantStringClassReference_110dd0558);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010c0b4ca0();
      func_0x00010c1c3120(puVar14,param_3,uVar19);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd0578);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010c0b4ca0();
      func_0x00010c1c7ae0(puVar14,param_3,uVar19);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd0598);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010c0b4ca0();
      func_0x00010c1c5720(puVar14,param_3,uVar19);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd05b8);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010c0b4ca0();
      func_0x00010c16dda0(puVar14,param_3,uVar19);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd05d8);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar16;
      func_0x00010c0b4ca0();
      func_0x00010c184d40(puVar14,param_3,uVar19);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd0558);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar23 = dVar23 * 1000.0;
      func_0x00010c184e00(puVar14,param_3,(long)dVar23);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd0578);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar23 = dVar23 * 1000.0;
      func_0x00010c184e40(puVar14,param_3,(long)dVar23);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd0598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar23 = dVar23 * 1000.0;
      func_0x00010c184e20(puVar14,param_3,(long)dVar23);
      _objc_release(uVar16);
      uVar16 = param_6;
      func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110dd05b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar23 = dVar23 * 1000.0;
      func_0x00010c184de0(puVar14,param_3,(long)dVar23);
      _objc_release(uVar16);
      param_5 = lStack_2f0;
      func_0x00010c276300(lStack_2f0);
      func_0x00010c184d60(puVar14,param_3,(long)dVar23);
      fVar21 = SUB84(dVar23,0);
      func_0x00010c184dc0(ppuVar2,param_3,puVar14);
      puVar1 = PTR_PTR_1126b6e90;
      _objc_opt_new();
      puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar3;
      func_0x00010c115b20();
      func_0x00010c1e3a40(puVar1,param_3,puVar17);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar3;
      func_0x00010bef0f00();
      func_0x00010c16d7c0(puVar1,param_3,puVar17);
      _objc_release(puVar3);
      func_0x00010c184cc0(ppuVar2,param_3,puVar1);
      lVar15 = param_5;
      func_0x00010bf53bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar15;
      func_0x00010bf529e0();
      _objc_release(lVar15);
      if (lVar8 != 0) {
        puVar3 = PTR_PTR_1126b6e80;
        puStack_2d0 = puVar1;
        _objc_opt_new();
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puStack_2d8 = puVar3;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = 0;
        lStack_2b8 = 0;
        uStack_2c0 = 0;
        uStack_2a8 = 0;
        plStack_2b0 = (long *)0x0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_288 = 0;
        uStack_290 = 0;
        lVar15 = param_5;
        func_0x00010bf53bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar15;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        lVar15 = lVar8;
        func_0x00010bf52a60(lVar8,param_3,&uStack_2c0,auStack_200,0x10);
        fVar21 = (float)uVar16;
        if (lVar15 != 0) {
          lVar18 = *plStack_2b0;
          do {
            lVar20 = 0;
            lVar9 = param_5;
            do {
              if (*plStack_2b0 != lVar18) {
                _objc_enumerationMutation(lVar8);
              }
              uVar19 = *(undefined8 *)(lStack_2b8 + lVar20 * 8);
              puVar3 = PTR_PTR_1126b6fc8;
              _objc_opt_new(PTR_PTR_1126b6fc8);
              func_0x00010c067ec0(uVar19);
              func_0x00010c19f8a0(puVar3,param_3,(long)(int)uVar19);
              func_0x00010bf53bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar10;
              func_0x00010c0b4ca0();
              func_0x00010c214ce0(puVar3,param_3,lVar11);
              _objc_release(lVar10);
              param_5 = lStack_2f0;
              _objc_release(lVar9);
              func_0x00010befa120(puVar1,param_3,puVar3);
              _objc_release(puVar3);
              lVar20 = lVar20 + 1;
              lVar9 = param_5;
            } while (lVar15 != lVar20);
            lVar15 = lVar8;
            func_0x00010bf52a60(lVar8,param_3,&uStack_2c0,auStack_200,0x10);
            fVar21 = (float)uVar16;
          } while (lVar15 != 0);
        }
        _objc_release(lVar8);
        puVar3 = puStack_2d8;
        func_0x00010c184d00(puStack_2d8,param_3,puVar1);
        ppuVar2 = ppuStack_308;
        func_0x00010c19f880(ppuStack_308,param_3,puVar3);
        _objc_release(puVar1);
        _objc_release(puVar3);
        puVar1 = puStack_2d0;
        param_6 = uStack_300;
      }
      func_0x00010c24df80(param_5);
      fVar22 = -1.0;
      if (fVar21 != -1.0) {
        fVar22 = fVar21 * 100.0;
      }
      fVar22 = SUB84((double)fVar22,0);
      func_0x00010c2094e0(ppuVar2);
      func_0x00010bf94280(param_5);
      fVar21 = -1.0;
      if (fVar22 != -1.0) {
        fVar21 = fVar22 * 100.0;
      }
      param_1 = (double)fVar21;
      func_0x00010c195dc0(ppuVar2);
      lVar15 = param_5;
      func_0x00010bf17480(param_5);
      func_0x00010c1af7a0(ppuVar2,param_3,lVar15);
      lVar15 = param_5;
      func_0x00010c0f1d20(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar15;
      func_0x00010c0b4ca0();
      func_0x00010c1d8960(ppuVar2,param_3,lVar8);
      _objc_release(lVar15);
      lVar15 = param_5;
      func_0x00010c0f1840(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar15;
      func_0x00010c0b4ca0();
      func_0x00010c1d8920(ppuVar2,param_3,lVar8);
      _objc_release(lVar15);
      puVar3 = PTR_PTR_1126b2930;
      func_0x00010bf5e640(PTR_PTR_1126b2930);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar3;
      func_0x00010bf22880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d69a0(ppuVar2,param_3,puVar17);
      _objc_release(puVar17);
      _objc_release(puVar3);
      uVar16 = *(undefined8 *)(lStack_320 + 0x10);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar2;
      func_0x00010c0b29e0();
      _objc_release(uVar16);
      _objc_release(puVar1);
      _objc_release(puVar14);
      _objc_release(puStack_2e0);
      _objc_release(puStack_2c8);
      _objc_release(ppuVar2);
      param_4 = ppuStack_310;
      in_stack_00000000 = puStack_318;
    }
  }
  _objc_release(in_stack_00000000);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_1052e8a14;
  puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_360 = 0xc2000000;
  pcStack_358 = FUN_1052e8a70;
  puStack_350 = &UNK_110858dc0;
  ppuStack_348 = param_4;
  ppuStack_340 = ppuVar12;
  dStack_338 = param_1;
  puStack_330 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(param_4[1],param_3,&puStack_368);
  return;
}



/* Entry: 1052e8a14; end: 1052e8a6f; -[SCBatteryPageViewLogger didCameraStartRunningAtTime:cameraPosition:] */

void FUN_1052e8a14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052e8a70;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_48);
  return;
}



/* Entry: 1052e8a70; end: 1052e8b83;  */

void FUN_1052e8a70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((lVar4 == 0) || (lVar3 = lVar4, func_0x00010c067ec0(), (int)lVar3 == 1)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf230,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = *(undefined ***)(lVar3 + 0x78);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dd0438;
    }
    else {
      func_0x00010bf51e00();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    func_0x00010c0e00e0(lVar3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bf72b00(*(undefined8 *)(param_1 + 0x30),lVar3,param_2,
                          *(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(lVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1052e8b84; end: 1052e8bdf; -[SCBatteryPageViewLogger didCameraStopRunningAtTime:cameraPosition:] */

void FUN_1052e8b84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052e8be0;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_2;
  uStack_20 = param_4;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_48);
  return;
}



/* Entry: 1052e8be0; end: 1052e8cef;  */

void FUN_1052e8be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((lVar4 != 0) && (lVar3 = lVar4, func_0x00010c067ec0(), (int)lVar3 == 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf248,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = *(undefined ***)(lVar3 + 0x78);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dd0438;
    }
    else {
      func_0x00010bf51e00();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    func_0x00010c0e00e0(lVar3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bf72b40(*(undefined8 *)(param_1 + 0x30),lVar3,param_2,
                          *(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(lVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1052e8cf0; end: 1052e8d47; -[SCBatteryPageViewLogger didBatteryChargingStart] */

void FUN_1052e8cf0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052e8d48;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1052e8d48; end: 1052e8e3f;  */

void FUN_1052e8d48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x21 = *plStack_100;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_100 != unaff_x21) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf72820(*(undefined8 *)(lStack_108 + unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (lVar2 != unaff_x22);
      lVar2 = lVar1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x20 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1052e8e40;
  lStack_140 = unaff_x22;
  lStack_138 = unaff_x21;
  uStack_130 = unaff_x20;
  lStack_128 = lVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(lVar2 + 8);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1052e8ed0;
  puStack_158 = &UNK_110841f80;
  lStack_150 = lVar2;
  puStack_148 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_170);
  _objc_release(puStack_148);
  _objc_release(puVar3);
  return;
}



/* Entry: 1052e8e40; end: 1052e8ecf; -[SCBatteryPageViewLogger didThermalStateChange:] */

void FUN_1052e8e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052e8ed0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052e8ed0; end: 1052e8fcf;  */

void FUN_1052e8ed0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf7d920(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,
                            *(undefined8 *)(param_1 + 0x28));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1052e8fd0;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1052e902c;
  puStack_138 = &UNK_110848c48;
  uStack_128 = CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(uVar8,
                                                  CONCAT12(uVar7,CONCAT11(uVar6,uVar5)))))));
  lStack_130 = lVar1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 8),param_2,&puStack_150);
  return;
}



/* Entry: 1052e8fd0; end: 1052e902b; -[SCBatteryPageViewLogger didPullCpuUsage:] */

void FUN_1052e8fd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1052e902c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_40);
  return;
}



/* Entry: 1052e902c; end: 1052e903f;  */

void FUN_1052e902c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_didPullCpuUsage__1125bbd00);
  return;
}



/* Entry: 1052e9040; end: 1052e909b; -[SCBatteryPageViewLogger didPullCpuTime:atTimestamp:] */

void FUN_1052e9040(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052e909c;
  puStack_30 = &UNK_110858dc0;
  lStack_28 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 8),param_4,&puStack_48);
  return;
}



/* Entry: 1052e909c; end: 1052e919b;  */

void FUN_1052e909c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf78d40(uVar5,*(undefined8 *)(param_1 + 0x30),
                            *(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1052e919c;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1052e91f8;
  puStack_138 = &UNK_110848c48;
  lStack_130 = lVar1;
  uStack_128 = uVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 8),param_2,&puStack_150);
  return;
}



/* Entry: 1052e919c; end: 1052e91f7; -[SCBatteryPageViewLogger didPullGpuUsage:] */

void FUN_1052e919c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1052e91f8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_40);
  return;
}



/* Entry: 1052e91f8; end: 1052e920b;  */

void FUN_1052e91f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_didPullGpuUsage__1125bbd10);
  return;
}



/* Entry: 1052e920c; end: 1052e92cb; -[SCBatteryPageViewLogger updatePageCpuUsageAttributionWithPageName:finishedPageViewLoggingItem:] */

void FUN_1052e920c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_1052e92cc(0xbff0000000000000,0xbff0000000000000,uVar2,param_3,param_4);
  dVar3 = -1.0;
  FUN_1052e96bc(0xbff0000000000000,*(undefined8 *)(param_1 + 0x50),param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0f1160(param_4);
  dVar4 = dVar3;
  func_0x00010c0f1d40(param_4);
  _objc_release(param_4);
  FUN_1052e97cc(uVar1,uVar2,param_3,(long)((dVar3 - dVar4) * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e92cc; end: 1052e96bb;  */

void FUN_1052e92cc(double param_1,double param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_4;
  dVar16 = param_1;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uVar2 = param_5;
  func_0x00010bf53bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if ((param_1 != -1.0) && (func_0x00010c112800(param_5), dVar16 != -1.0)) {
    func_0x00010c112800(param_5);
    param_1 = param_1 - dVar16;
    func_0x00010c1126a0(param_5);
    dVar16 = (param_2 - dVar16) * 1000.0;
    if (0.0 < param_1 && 0 < (long)dVar16) {
      dVar16 = (param_1 * 100.0) / (double)(ulong)(long)dVar16;
      lVar13 = (long)(dVar16 / 10.0) * 10;
      dVar16 = (dVar16 * 10.0) / 10.0;
      lVar14 = lVar13 + 10;
      if (dVar16 <= (double)lVar13) {
        lVar14 = lVar13;
      }
      if (0 < lVar14) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c013ce0();
        puVar5 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar5 != (undefined8 *)0x0) {
          func_0x00010c0b4fe0(puVar5);
        }
        func_0x00010c0df7a0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
    }
  }
  puVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined8 *)0x0) {
    puVar15 = puVar3;
    func_0x00010c1d0640(param_3);
  }
  else {
    dVar16 = 0.0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar7 = puVar3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_150;
    puVar8 = puVar7;
    func_0x00010bf52a60();
    if (puVar8 != (undefined8 *)0x0) {
      lVar14 = *plStack_140;
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (*plStack_140 != lVar14) {
            _objc_enumerationMutation(puVar7);
          }
          puVar9 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar9 == (undefined8 *)0x0) {
            puVar11 = puVar3;
            func_0x00010c0e00e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
          }
          else {
            puVar11 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            puVar10 = puVar3;
            func_0x00010c0e00e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            func_0x00010c0df780(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar6);
            _objc_release(puVar10);
          }
          _objc_release(puVar11);
          _objc_release(puVar9);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar8 != puVar15);
        puVar15 = &uStack_150;
        puVar8 = puVar7;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  dVar18 = dVar16;
  _objc_retain();
  _objc_retain(uVar12);
  _objc_retain(puVar15);
  func_0x00010c276300(puVar15);
  dVar17 = dVar18;
  func_0x00010c112800(puVar15);
  bVar1 = true;
  if ((dVar16 != -1.0) && (bVar1 = false, !NAN(dVar17))) {
    bVar1 = dVar17 == -1.0;
  }
  if (!bVar1) {
    func_0x00010c112800(puVar15);
    dVar16 = dVar16 - dVar17;
    dVar17 = 0.0;
    if (0.0 <= dVar16) {
      dVar17 = dVar16;
    }
    dVar18 = dVar18 + dVar17;
  }
  puVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x00010bf885a0(puVar3);
    dVar18 = dVar18 + dVar17;
  }
  func_0x00010c0df720(dVar18,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar15);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e96bc; end: 1052e97cb;  */

void FUN_1052e96bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c276300(param_4);
  dVar4 = dVar5;
  func_0x00010c112800(param_4);
  bVar1 = true;
  if ((param_1 != -1.0) && (bVar1 = false, !NAN(dVar4))) {
    bVar1 = dVar4 == -1.0;
  }
  if (!bVar1) {
    func_0x00010c112800(param_4);
    param_1 = param_1 - dVar4;
    dVar4 = 0.0;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    dVar5 = dVar5 + dVar4;
  }
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    func_0x00010bf885a0(lVar2);
    dVar5 = dVar5 + dVar4;
  }
  func_0x00010c0df720(dVar5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_2);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052e97cc; end: 1052e993b;  */

void FUN_1052e97cc(long param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (0 < param_4) {
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      func_0x00010c1d0640(param_1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_2);
    }
    else {
      func_0x00010c067fc0(lVar1);
      func_0x00010c0df780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar3);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_2);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e993c; end: 1052e99bb; -[SCBatteryPageViewLogger resetPageViewRecordWhenAppOpen] */

void FUN_1052e993c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bdf7380();
  uVar1 = param_1;
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052e99bc;
  puStack_50 = &UNK_110858dc0;
  lStack_48 = param_2;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_68);
  return;
}



/* Entry: 1052e99bc; end: 1052e99cb;  */

void FUN_1052e99bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s__willEnterForegroundWithTimestam_1125985c0);
  return;
}



/* Entry: 1052e99cc; end: 1052e9a07; -[SCBatteryPageViewLogger handleCameraStopRunningOnAppBackgroundIfNeededAtTime:] */

/* WARNING: Possible PIC construction at 0x0001052e99e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001052e99ec) */

void FUN_1052e99cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didCameraStopRunningAtTime_camer_1125ba478,2)
  ;
  return;
}



/* Entry: 1052e9a08; end: 1052e9b8f; -[SCBatteryPageViewLogger _willEnterForegroundWithTimestamp:cpuTime:] */

void FUN_1052e9a08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_3 + 0x28) = 0;
  func_0x00010bed3be0();
  uVar7 = 0;
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d86e0(param_1);
      func_0x00010c1e26c0(param_2,uVar4);
      uVar7 = param_1;
      func_0x00010c1e2560(param_1,uVar4);
      func_0x00010c250240(*(undefined8 *)(param_3 + 0x18));
      _objc_release(uVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x50));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x60));
  uVar4 = *(undefined8 *)(param_3 + 0x68);
  func_0x00010c12adc0(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdf7380();
  uVar8 = uVar7;
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdccdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar7,uVar8,uVar4,PTR_s__appSessionPageBatteryAttributio_112550d08,1);
  return;
}



/* Entry: 1052e9b90; end: 1052e9bd7; -[SCBatteryPageViewLogger appSessionPageBatteryAttributionSinceAppOpenUntilAppBackground] */

void FUN_1052e9b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdf7380();
  uVar1 = param_1;
  func_0x00010c2762e0(PTR_PTR_1126ae4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdccdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar1,param_2,PTR_s__appSessionPageBatteryAttributio_112550d08,1);
  return;
}



/* Entry: 1052e9bd8; end: 1052ea413; -[SCBatteryPageViewLogger _appSessionPageBatteryAttributionSinceAppOpenUntilTimestamp:cpuTime:onAppBackground:] */

void FUN_1052e9bd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lStack_428;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined1 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_360 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_1052ea414;
  uStack_240 = 0x1052ea424;
  lStack_238 = 0;
  puStack_358 = &uStack_290;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_280 = 0x3032000000;
  pcStack_278 = FUN_1052ea414;
  uStack_270 = 0x1052ea424;
  uStack_268 = 0;
  puStack_350 = &uStack_2c0;
  uStack_2c0 = 0;
  uStack_2b0 = 0x3032000000;
  pcStack_2a8 = FUN_1052ea414;
  uStack_2a0 = 0x1052ea424;
  puStack_348 = &uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e0 = 0x3032000000;
  pcStack_2d8 = FUN_1052ea414;
  uStack_2d0 = 0x1052ea424;
  uStack_2c8 = 0;
  puStack_340 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x3032000000;
  pcStack_308 = FUN_1052ea414;
  uStack_300 = 0x1052ea424;
  uStack_2f8 = 0;
  puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_1052ea42c;
  puStack_370 = &UNK_110876788;
  lStack_368 = param_3;
  uStack_338 = param_2;
  uStack_328 = param_5;
  puStack_318 = puStack_340;
  puStack_2e8 = puStack_348;
  puStack_2b8 = puStack_350;
  puStack_288 = puStack_358;
  puStack_258 = puStack_360;
  func_0x00010c0f8240(*(undefined8 *)(param_3 + 8),param_4,&puStack_388);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = puStack_258[5];
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar5 != 0) {
    lStack_428 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar4);
      }
      uVar16 = *(undefined8 *)(lStack_428 * 8);
      uVar6 = puStack_2e8[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      _objc_release(uVar6);
      uVar6 = puStack_288[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      _objc_release(uVar6);
      puVar7 = (undefined *)puStack_258[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puStack_2b8[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      _objc_release(uVar6);
      uVar6 = puStack_318[5];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      _objc_release(uVar6);
      func_0x00010b09d08c(uVar16);
      ppuStack_150 = &PTR____CFConstantStringClassReference_110dd04b8;
      ppuStack_148 = &PTR____CFConstantStringClassReference_110dd0498;
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_120 = puVar7;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_140 = &PTR____CFConstantStringClassReference_110dd0458;
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_118 = puVar8;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_138 = &PTR____CFConstantStringClassReference_110dd0478;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_110 = puVar9;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_130 = &PTR____CFConstantStringClassReference_110dd04d8;
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_108 = puVar17;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = &PTR____CFConstantStringClassReference_110dd04f8;
      puVar11 = PTR_PTR_1126b6f08;
      puStack_100 = puVar10;
      func_0x00010bfc9240();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f8 = puVar11;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar17);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c1d0640(puVar2);
      puVar9 = puVar7;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar9);
          }
          puVar11 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar11 == (undefined *)0x0) {
            puVar14 = puVar7;
            func_0x00010c0e00e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
          }
          else {
            puVar14 = puVar3;
            func_0x00010c0e00e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            puVar13 = puVar7;
            func_0x00010c0e00e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c0df7c0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(puVar10);
            _objc_release(puVar13);
          }
          _objc_release(puVar14);
          _objc_release(puVar11);
          puVar17 = puVar17 + 1;
        } while (puVar8 != puVar17);
        puVar8 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
      _objc_release(puVar12);
      _objc_release(puVar7);
      lStack_428 = lStack_428 + 1;
    } while (lStack_428 != lVar5);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  ppuStack_230 = &PTR____CFConstantStringClassReference_110dd04b8;
  puVar8 = puVar3;
  func_0x00010bf51e00();
  ppuStack_228 = &PTR____CFConstantStringClassReference_110dd0498;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_200 = puVar8;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_220 = &PTR____CFConstantStringClassReference_110dd0458;
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1f8 = puVar9;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_218 = &PTR____CFConstantStringClassReference_110dd0478;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1f0 = puVar17;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_210 = &PTR____CFConstantStringClassReference_110dd04d8;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_1e8 = puVar10;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_208 = &PTR____CFConstantStringClassReference_110dd04f8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dbdb78;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1e0 = puVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar17);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_320,8);
  _objc_release(uStack_2f8);
  __Block_object_dispose(&uStack_2f0,8);
  _objc_release(uStack_2c8);
  __Block_object_dispose(&uStack_2c0,8);
  _objc_release(uStack_298);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(uStack_268);
  __Block_object_dispose(&uStack_260,8);
  lVar5 = lStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_320,8);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_290,8);
    lVar15 = 8;
    __Block_object_dispose(&uStack_260);
    __Unwind_Resume();
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
    *(undefined8 *)(lVar15 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052ea414; end: 1052ea42b;  */

void FUN_1052ea414(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052ea42c; end: 1052eaa77;  */

undefined * FUN_1052ea42c(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar5;
  _objc_release(uVar15);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
      func_0x00010c0e00e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72020(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      _objc_release(puVar5);
      lVar21 = lVar21 + 1;
    } while (lVar16 != lVar21);
    lVar16 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar5;
  _objc_release(uVar15);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar5;
  _objc_release(uVar15);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar5;
  _objc_release(uVar15);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar5;
  _objc_release(uVar15);
  lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf529e0();
  puVar5 = (undefined *)0x0;
  if (lVar16 != 0) {
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(puVar5);
        }
        uVar18 = *(undefined8 *)((long)puVar17 * 8);
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        FUN_1052e92cc(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),uVar18,uVar7)
        ;
        dVar22 = *(double *)(param_1 + 0x50);
        FUN_1052e96bc(dVar22,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),uVar18
                      ,uVar7);
        uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        uVar19 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        dVar23 = *(double *)(param_1 + 0x58);
        func_0x00010c0f1d40(uVar7);
        dVar22 = (dVar23 - dVar22) * 1000.0;
        FUN_1052e97cc(uVar15,uVar19,uVar18,(long)dVar22);
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c06df20();
        iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c06df20();
        uVar20 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        dVar23 = *(double *)(param_1 + 0x58);
        _objc_retain(uVar7);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_retain(uVar18);
        _objc_retain(uVar20);
        uVar15 = uVar7;
        func_0x00010bf2be00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar19);
        _objc_release(uVar15);
        if (iVar2 != 0) {
          puVar9 = PTR_PTR_1126b6ed8;
          _objc_alloc(PTR_PTR_1126b6ed8);
          dVar22 = dVar23;
          func_0x00010c0528a0(dVar23);
          func_0x00010befa120(puVar8);
          _objc_release(puVar9);
        }
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        uVar15 = uVar7;
        func_0x00010bf2be00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar19);
        _objc_release(uVar15);
        if (iVar3 != 0) {
          puVar10 = PTR_PTR_1126b6ed8;
          _objc_alloc(PTR_PTR_1126b6ed8);
          dVar22 = dVar23;
          func_0x00010c0528a0(dVar23);
          func_0x00010befa120(puVar9);
          _objc_release(puVar10);
        }
        func_0x00010c0f1d40(uVar7);
        puVar10 = puVar8;
        func_0x00010bf51e00();
        puVar11 = puVar9;
        func_0x00010bf51e00();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        FUN_1052d9b30(dVar22,dVar23);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        FUN_1052e7f30(uVar20,uVar18,puVar13);
        _objc_release(uVar18);
        _objc_release(uVar20);
        _objc_release(puVar13);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_release(uVar7);
        puVar17 = puVar17 + 1;
      } while (puVar6 != puVar17);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c12adc0(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c26d100();
  _objc_release(puVar5);
  return puVar6;
}



/* Entry: 1052eaa78; end: 1052eaabb; -[SCBatteryPageViewLogger _getCurrentThermalState] */

undefined * FUN_1052eaa78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d100();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1052eaabc; end: 1052eaac3; -[SCBatteryPageViewLogger currentPage] */

undefined8 FUN_1052eaabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1052eaac4; end: 1052eab83; -[SCBatteryPageViewLogger .cxx_destruct] */

void FUN_1052eaac4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052eab84; end: 1052eac17; -[SCBatteryResourceUsageDebugView init] */

undefined1 * FUN_1052eab84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e75a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1871c0(0xbf800000,puVar1);
    func_0x00010c1873e0(0xbf800000,puVar1);
    func_0x00010c187ce0(puVar1);
    func_0x00010c177240(puVar1);
    func_0x00010c1a3fa0(puVar1);
    func_0x00010c1cc480(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052eac18; end: 1052ec323; -[SCBatteryResourceUsageDebugView show] */

void FUN_1052eac18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_5 + 8);
  if (lVar1 == 0) {
    func_0x0001008522a8();
    uVar15 = 0x4064a00000000000;
    if ((int)lVar1 == 0) {
      uVar15 = 0x4060e00000000000;
    }
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    param_3 = 0x4064c00000000000;
    func_0x00010c013de0(0x4059000000000000,uVar15,0x4064c00000000000,0x4059400000000000);
    puVar16 = (undefined8 *)(param_5 + 8);
    uVar15 = *puVar16;
    *puVar16 = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fe0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar15 = *puVar16;
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar15);
    _objc_release(puVar2);
    uVar15 = *puVar16;
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(uVar15);
    func_0x00010c17d4c0(*puVar16);
    func_0x00010bf900e0(*puVar16);
    _objc_initWeak(auStack_1a8,param_5);
    param_6 = auStack_1a8;
    _objc_copyWeak(auStack_1b0,param_6);
    func_0x00010c1916e0(*puVar16);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 8));
    param_4 = 0x4039000000000000;
    func_0x00010c013de0(0,0);
    uVar15 = *(undefined8 *)(param_5 + 0x10);
    *(undefined **)(param_5 + 0x10) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe6666666666666,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x10));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)(param_5 + 0x18);
    uVar15 = *puVar16;
    *puVar16 = puVar2;
    _objc_release(uVar15);
    func_0x00010befbd60(*puVar16);
    uVar15 = *(undefined8 *)(param_5 + 0x18);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fe3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar15);
    _objc_release(puVar2);
    uVar15 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4018000000000000);
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3fc999999999999a,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0(puVar2);
    uVar15 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar15);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x10));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x28);
    *(undefined **)(param_5 + 0x28) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x28));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x28));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x28));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x28));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x30);
    *(undefined **)(param_5 + 0x30) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x30));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x30));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x30));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x30));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x38);
    *(undefined **)(param_5 + 0x38) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x38));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x38));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x38));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x38));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x40);
    *(undefined **)(param_5 + 0x40) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x40));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x40));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x40));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x40));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x48);
    *(undefined **)(param_5 + 0x48) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x48));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x48));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x48));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x48));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x50);
    *(undefined **)(param_5 + 0x50) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x50));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x50));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x50));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x50));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar15 = *(undefined8 *)(param_5 + 0x58);
    *(undefined **)(param_5 + 0x58) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_5 + 0x58));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_5 + 0x58));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_5 + 0x58));
    _objc_release(puVar2);
    param_2 = 0x3fe0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x58));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 8));
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x10));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x10);
    uStack_a0 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 8);
    func_0x00010c2793a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    uStack_98 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x10);
    uStack_90 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x18));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x18);
    uStack_c0 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    uStack_b8 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    uStack_b0 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    uStack_e0 = uVar10;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf49420(0x4054b00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x28);
    uStack_d8 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x28);
    uStack_d0 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x30));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x30);
    uStack_100 = uVar10;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf49420(0x4054b00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    uStack_f8 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x30);
    uStack_f0 = uVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x38));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x38);
    uStack_120 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf49420(0x4048aaaaaaaaaaab);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x38);
    uStack_118 = uVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x38);
    uStack_110 = uVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x40));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    uStack_140 = uVar10;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf49420(0x4048aaaaaaaaaaab);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x40);
    uStack_138 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x40);
    uStack_130 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x48));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x48);
    uStack_160 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf49420(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 0x48);
    uStack_158 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x48);
    uStack_150 = uVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_148 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar15);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x50));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 0x48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x50);
    uStack_180 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x50);
    uStack_178 = uVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x50);
    uStack_170 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_168 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + 0x58));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_5 + 0x58);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + 0x58);
    uStack_1a0 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + 8);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + 0x58);
    uStack_198 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493c0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + 0x58);
    uStack_190 = uVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x4039000000000000;
    uVar11 = uVar9;
    func_0x00010bf49420(0x4039000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_188 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010be95780(param_5);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_1a8);
    lVar1 = *(long *)(param_5 + 8);
  }
  func_0x00010c12c960(lVar1);
  puVar13 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar14;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  func_0x00010befbb60(puVar2);
  func_0x00010bed6380(param_5);
  func_0x00010bed8e40(param_5);
  func_0x00010bed4ae0(param_5);
  func_0x00010bed8e20(param_5);
  func_0x00010bedc140(param_5);
  func_0x00010bedc1a0(param_5);
  func_0x00010bee1fa0(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  __Unwind_Resume(puVar2);
  _objc_retain(param_6);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  func_0x00010be997e0(param_1,param_2,param_3,param_4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052ec324; end: 1052ec3a3;  */

void FUN_1052ec324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  func_0x00010be997e0(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1052ec3a4; end: 1052ec3ab; -[SCBatteryResourceUsageDebugView hide] */

void FUN_1052ec3a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1052ec3ac; end: 1052ec3af; -[SCBatteryResourceUsageDebugView _bringContainerViewToFront] */

void FUN_1052ec3ac(void)

{
  return;
}



/* Entry: 1052ec3b0; end: 1052ec3b3; -[SCBatteryResourceUsageDebugView updateDebugViewWithCpuUsage:] */

void FUN_1052ec3b0(void)

{
  return;
}



/* Entry: 1052ec3b4; end: 1052ec3b7; -[SCBatteryResourceUsageDebugView _updateCpuLabel] */

void FUN_1052ec3b4(void)

{
  return;
}



/* Entry: 1052ec3b8; end: 1052ec3bb; -[SCBatteryResourceUsageDebugView updateDebugViewWithGpuUsage:] */

void FUN_1052ec3b8(void)

{
  return;
}



/* Entry: 1052ec3bc; end: 1052ec3bf; -[SCBatteryResourceUsageDebugView _updateGpuLabel] */

void FUN_1052ec3bc(void)

{
  return;
}



/* Entry: 1052ec3c0; end: 1052ec3c3; -[SCBatteryResourceUsageDebugView updateDebugViewWithCameraStatus:] */

void FUN_1052ec3c0(void)

{
  return;
}



/* Entry: 1052ec3c4; end: 1052ec3c7; -[SCBatteryResourceUsageDebugView _updateCameraLabel] */

void FUN_1052ec3c4(void)

{
  return;
}



/* Entry: 1052ec3c8; end: 1052ec3cb; -[SCBatteryResourceUsageDebugView updateDebugViewWithGPSStatus:] */

void FUN_1052ec3c8(void)

{
  return;
}



/* Entry: 1052ec3cc; end: 1052ec3cf; -[SCBatteryResourceUsageDebugView _updateGpsLabel] */

void FUN_1052ec3cc(void)

{
  return;
}



/* Entry: 1052ec3d0; end: 1052ec3d3; -[SCBatteryResourceUsageDebugView updateDebugViewWithNetworkStatus:networkConnectivityStatus:] */

void FUN_1052ec3d0(void)

{
  return;
}



/* Entry: 1052ec3d4; end: 1052ec3d7; -[SCBatteryResourceUsageDebugView _updateNetworkActivityLabel] */

void FUN_1052ec3d4(void)

{
  return;
}



/* Entry: 1052ec3d8; end: 1052ec3db; -[SCBatteryResourceUsageDebugView _updateNetworkRadioLabelWithRadioStatus:] */

void FUN_1052ec3d8(void)

{
  return;
}



/* Entry: 1052ec3dc; end: 1052ec3df; -[SCBatteryResourceUsageDebugView _updateNetworkRadioLabel] */

void FUN_1052ec3dc(void)

{
  return;
}



/* Entry: 1052ec3e0; end: 1052ec3e3; -[SCBatteryResourceUsageDebugView updateDebugViewWithThermalStatus:] */

void FUN_1052ec3e0(void)

{
  return;
}



/* Entry: 1052ec3e4; end: 1052ec3e7; -[SCBatteryResourceUsageDebugView _updateThermalStatusLabel] */

void FUN_1052ec3e4(void)

{
  return;
}



/* Entry: 1052ec3e8; end: 1052ec443; -[SCBatteryResourceUsageDebugView _savePosition:] */

void FUN_1052ec3e8(undefined8 param_1)

{
  undefined *puVar1;
  
  _NSStringFromCGRect();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052ec444; end: 1052ec527; -[SCBatteryResourceUsageDebugView _restorePosition] */

undefined8
FUN_1052ec444(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  _CGRectFromString();
  _CGRectEqualToRect();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8));
    bVar1 = false;
    if ((param_3 == 25.0) && (bVar1 = false, !NAN(param_4))) {
      bVar1 = param_4 == 25.0;
    }
    if (bVar1) {
      *(undefined1 *)(param_5 + 0x20) = 1;
    }
  }
  _objc_release(puVar3);
  return param_1;
}



/* Entry: 1052ec528; end: 1052ec60f; -[SCBatteryResourceUsageDebugView _minimize] */

void FUN_1052ec528(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\0';
  uVar2 = 0x4059400000000000;
  uVar4 = 0x4039000000000000;
  if (bVar1) {
    uVar2 = 0x4039000000000000;
  }
  uVar3 = 0x4064c00000000000;
  uVar5 = uVar3;
  if (bVar1) {
    uVar5 = 0x4039000000000000;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 8));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 8));
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1052ec610;
  puStack_70 = &UNK_110870f70;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1052ec624;
  puStack_b8 = &UNK_1108767b8;
  lStack_b0 = param_1;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = uVar5;
  uStack_90 = uVar2;
  lStack_68 = param_1;
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  uStack_50 = uVar5;
  uStack_48 = uVar2;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_88,
                      &puStack_d0);
  return;
}



/* Entry: 1052ec610; end: 1052ec647;  */

void FUN_1052ec610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1052ec648; end: 1052ec64f; -[SCBatteryResourceUsageDebugView currentCpuUsage] */

undefined4 FUN_1052ec648(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



/* Entry: 1052ec650; end: 1052ec657; -[SCBatteryResourceUsageDebugView setCurrentCpuUsage:] */

void FUN_1052ec650(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 100) = param_1;
  return;
}



/* Entry: 1052ec658; end: 1052ec65f; -[SCBatteryResourceUsageDebugView currentGpuUsage] */

undefined4 FUN_1052ec658(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



/* Entry: 1052ec660; end: 1052ec667; -[SCBatteryResourceUsageDebugView setCurrentGpuUsage:] */

void FUN_1052ec660(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 1052ec668; end: 1052ec66f; -[SCBatteryResourceUsageDebugView cameraState] */

undefined8 FUN_1052ec668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1052ec670; end: 1052ec677; -[SCBatteryResourceUsageDebugView setCameraState:] */

void FUN_1052ec670(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 1052ec678; end: 1052ec67f; -[SCBatteryResourceUsageDebugView gpsState] */

undefined8 FUN_1052ec678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1052ec680; end: 1052ec687; -[SCBatteryResourceUsageDebugView setGpsState:] */

void FUN_1052ec680(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1052ec688; end: 1052ec693; -[SCBatteryResourceUsageDebugView hasNetworkActivity] */

byte FUN_1052ec688(long param_1)

{
  return *(byte *)(param_1 + 0x60) & 1;
}



/* Entry: 1052ec694; end: 1052ec69b; -[SCBatteryResourceUsageDebugView setHasNetworkActivity:] */

void FUN_1052ec694(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1052ec69c; end: 1052ec6a3; -[SCBatteryResourceUsageDebugView networkRadioState] */

undefined8 FUN_1052ec69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1052ec6a4; end: 1052ec6ab; -[SCBatteryResourceUsageDebugView setNetworkRadioState:] */

void FUN_1052ec6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1052ec6ac; end: 1052ec6b7; -[SCBatteryResourceUsageDebugView currentThermalStatus] */

void FUN_1052ec6ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x88,1);
  return;
}



/* Entry: 1052ec6b8; end: 1052ec6bf; -[SCBatteryResourceUsageDebugView setCurrentThermalStatus:] */

void FUN_1052ec6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1052ec6c0; end: 1052ec75b; -[SCBatteryResourceUsageDebugView .cxx_destruct] */

void FUN_1052ec6c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ec75c; end: 1052ec8df; -[SCPerformanceResourceTracker calculateResourceMetricDictsForPageName:withCompletion:] */

void FUN_1052ec75c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be95080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be95080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,lVar3,lVar4,uVar1,uVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052ec8e0; end: 1052ecc4b; -[SCPerformanceResourceTracker _resourceMetricsDictFromResourceHistory:withSampleCountKey:maxValueKey:minValueKey:avgValueKey:medianValueKey:] */

void FUN_1052ec8e0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c246d00(param_3,param_2,PTR_s_compare__1125ae690);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,param_5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = uVar2;
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,param_6);
    _objc_release(puVar3);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010c296f80(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd0698);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf885a0();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,param_7);
    _objc_release(puVar3);
    uVar5 = uVar2;
    func_0x00010bf529e0();
    uVar7 = uVar2;
    func_0x00010bf529e0(uVar2);
    uVar7 = uVar7 >> 1;
    uVar6 = uVar2;
    if ((uVar5 & 1) == 0) {
      func_0x00010c0dfd40(uVar2,param_2,uVar7 - 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar5 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar5);
    }
    else {
      func_0x00010c0dfd40(uVar2,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
    }
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,param_8);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052ecc4c; end: 1052ecd67; -[SCPerformanceResourceTracker didPullCpuUsage:] */

void FUN_1052ecc4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010befa120(*(undefined8 *)(lStack_108 + lVar8 * 8),param_2,puVar1);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar2 = *(long *)(puVar1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_210;
    do {
      lVar8 = 0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010befa120(*(undefined8 *)(lStack_218 + lVar8 * 8),param_2,puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      puVar5 = &uStack_220;
      func_0x00010bf52a60(lVar2,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar4 + 8);
  _objc_retain(puVar5);
  func_0x00010c12d3e0(uVar6,param_2,puVar5);
  func_0x00010c12d3e0(*(undefined8 *)(puVar4 + 0x10),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1052ecd68; end: 1052ece83; -[SCPerformanceResourceTracker didPullGpuUsage:] */

void FUN_1052ecd68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010befa120(*(undefined8 *)(lStack_108 + lVar7 * 8),param_2,puVar1);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar1 + 8);
  _objc_retain(puVar4);
  func_0x00010c12d3e0(uVar5,param_2,puVar4);
  func_0x00010c12d3e0(*(undefined8 *)(puVar1 + 0x10),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1052ece84; end: 1052eced3; -[SCPerformanceResourceTracker clearInvalidCpuGpuHistoryForPageName:] */

void FUN_1052ece84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d3e0(uVar1,param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052eced4; end: 1052ecf03; -[SCPerformanceResourceTracker .cxx_destruct] */

void FUN_1052eced4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ecf04; end: 1052ecf17;  */

void FUN_1052ecf04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x41200000,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110dd06b8,0);
  return;
}



/* Entry: 1052ecf18; end: 1052ecfbb;  */

undefined1 FUN_1052ecf18(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam00000001136ba2d0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052ecfbc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136ba2d0,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001136ba2c8;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ecfbc; end: 1052ecfeb;  */

void FUN_1052ecfbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd06d8,0,0);
  uRam00000001136ba2c8 = (char)uVar1;
  return;
}



/* Entry: 1052ecfec; end: 1052ed08f;  */

undefined1 FUN_1052ecfec(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam00000001136ba2d8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052ed090;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136ba2d8,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001136ba2c9;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ed090; end: 1052ed0bf;  */

void FUN_1052ed090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd06f8,0,0);
  uRam00000001136ba2c9 = (char)uVar1;
  return;
}



/* Entry: 1052ed0c0; end: 1052ed163;  */

undefined1 FUN_1052ed0c0(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam00000001136ba2e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052ed164;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136ba2e0,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001136ba2ca;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ed164; end: 1052ed193;  */

void FUN_1052ed164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0718,0,0);
  uRam00000001136ba2ca = (char)uVar1;
  return;
}



/* Entry: 1052ed194; end: 1052ed237;  */

undefined1 FUN_1052ed194(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam00000001136ba2e8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1052ed238;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136ba2e8,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001136ba2cb;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052ed238; end: 1052ed267;  */

void FUN_1052ed238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd0738,0,0);
  uRam00000001136ba2cb = (char)uVar1;
  return;
}



/* Entry: 1052ed268; end: 1052ed27f;  */

void FUN_1052ed268(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x42480000,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110dd0758,0);
  return;
}



/* Entry: 1052ed280; end: 1052ed2cf;  */

long FUN_1052ed280(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110dd0778,3,0);
  return (long)(int)param_1;
}



/* Entry: 1052ed2d0; end: 1052ed303; -[SCBatteryGPUMonitor initWithFrequency:applicationLifecycleEvents:] */

void FUN_1052ed2d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e75b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1052ed304; end: 1052ed337; -[SCBatteryGPUMonitor initWithApplicationLifecycleEvents:] */

void FUN_1052ed304(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e75b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1052ed338; end: 1052ed33b; -[SCBatteryGPUMonitor startMonitoring] */

void FUN_1052ed338(void)

{
  return;
}



/* Entry: 1052ed33c; end: 1052ed33f; -[SCBatteryGPUMonitor stopMonitoring] */

void FUN_1052ed33c(void)

{
  return;
}



/* Entry: 1052ed340; end: 1052ed347; -[SCBatteryGPUMonitor gpuUsage] */

undefined8 FUN_1052ed340(void)

{
  return 0xbff0000000000000;
}



/* Entry: 1052ed348; end: 1052ed34f; -[SCBatteryGPUMonitor usageListener] */

undefined8 FUN_1052ed348(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052ed350; end: 1052ed357; -[SCBatteryGPUMonitor setUsageListener:] */

void FUN_1052ed350(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052ed358; end: 1052ed363; -[SCBatteryGPUMonitor .cxx_destruct] */

void FUN_1052ed358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052ed364; end: 1052ed3bb; -[SCCameraHardwareResourceImpl setVideoDataSourceStreamProvider:] */

void FUN_1052ed364(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd8) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = param_3;
    _objc_release(uVar1);
    func_0x00010c160380(*(undefined8 *)(param_1 + 0x10),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


