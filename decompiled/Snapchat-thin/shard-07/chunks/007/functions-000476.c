/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058f3ef4; end: 1058f4087; -[SCPlaybackBoltMediaResolver resolveRequest:completion:] */

undefined8 FUN_1058f3ef4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf89200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c13a700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010beceda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar7 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    uVar3 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar7);
    (**(code **)(param_4 + 0x10))(param_4,param_1,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar3);
  }
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1058f4088; end: 1058f4217; -[SCPlaybackBoltMediaResolver _transformResolvedUrl:withRequest:] */

void FUN_1058f4088(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 1;
    func_0x000107cd11bc(1,&PTR____CFConstantStringClassReference_110e0c6f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(param_4);
    uVar4 = param_4;
    func_0x00010bf9d9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(param_4);
    _objc_release(param_4);
    func_0x00010c029fe0(puVar3);
    _objc_release(uVar5);
  }
  else {
    puVar3 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(param_4);
    uVar2 = param_4;
    func_0x00010bf9d9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(param_4);
    _objc_release(param_4);
    func_0x00010c02a000(puVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058f4218; end: 1058f4253; -[SCPlaybackBoltMediaResolver .cxx_destruct] */

void FUN_1058f4218(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f4254; end: 1058f45c3; -[SCPlaybackCompositeMediaResolver initWithContentDeliveryServices:contentManagerServices:contentManagerPlaybackServices:contentObjectResolver:performer:circumstanceEngine:abrMediaServices:webProxyServices:] */

undefined8 *
FUN_1058f4254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  puStack_68 = PTR_PTR_1126ead08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar9 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar9);
    _objc_retain(param_7);
    uVar9 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126bfe98;
    _objc_alloc();
    uVar9 = param_5;
    func_0x00010bf4c500(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf21e60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010bf26b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9060();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    func_0x00010befa120(puVar1[1]);
    puVar5 = puVar2;
    func_0x00010bf90f00();
    *(char *)(puVar1 + 3) = (char)puVar5;
    puVar5 = PTR_PTR_1126bfea0;
    _objc_alloc(PTR_PTR_1126bfea0);
    uVar9 = param_3;
    func_0x00010bf4c240(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002e80(puVar5);
    _objc_release(uVar9);
    puVar6 = PTR_PTR_1126bfea8;
    _objc_alloc(PTR_PTR_1126bfea8);
    func_0x00010c029ce0();
    uVar9 = param_8;
    func_0x00010bf1f440();
    if ((int)uVar9 == 0) {
      puVar8 = PTR_PTR_1126bfeb8;
      _objc_alloc(PTR_PTR_1126bfeb8);
      func_0x00010c022360();
    }
    else {
      puVar7 = PTR_PTR_1126bfeb0;
      _objc_alloc(PTR_PTR_1126bfeb0);
      uVar9 = param_3;
      func_0x00010bf4c240(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff9040(puVar7);
      _objc_release(uVar9);
      func_0x00010befa120(puVar1[1]);
      puVar8 = PTR_PTR_1126bfeb8;
      _objc_alloc(PTR_PTR_1126bfeb8);
      func_0x00010c022360();
      _objc_release(puVar7);
    }
    puVar7 = PTR_PTR_1126bfec0;
    _objc_alloc(PTR_PTR_1126bfec0);
    func_0x00010bff9080();
    func_0x00010befa120(puVar1[1]);
    func_0x00010befa120(puVar1[1]);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
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



/* Entry: 1058f45c4; end: 1058f45cb; -[SCPlaybackCompositeMediaResolver registerCustomMediaResolver:] */

void FUN_1058f45c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 1058f45cc; end: 1058f46e7; -[SCPlaybackCompositeMediaResolver shouldResolveWithRequest:] */

undefined * FUN_1058f45cc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
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
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar10 = *(long *)(param_1 + 8);
  _objc_retain(lVar10);
  puVar8 = auStack_c8;
  lVar16 = lVar10;
  func_0x00010bf52a60();
  puVar14 = (undefined *)0x0;
  if (lVar16 != 0) {
    lVar12 = *plStack_100;
    do {
      lVar13 = 0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar13 * 8);
        puVar4 = (undefined8 *)param_3;
        func_0x00010c232a00();
        if ((uVar2 & 1) != 0) {
          puVar14 = (undefined *)0x1;
          goto LAB_1058f46a0;
        }
        lVar13 = lVar13 + 1;
      } while (lVar16 != lVar13);
      puVar8 = auStack_c8;
      lVar16 = lVar10;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
    puVar14 = (undefined *)0x0;
  }
LAB_1058f46a0:
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar10 = *(long *)(param_3 + 8);
  _objc_retain(lVar10);
  puVar9 = auStack_1e8;
  lVar16 = lVar10;
  func_0x00010bf52a60();
  puVar14 = (undefined *)0x0;
  if (lVar16 != 0) {
    lVar12 = *plStack_220;
    do {
      lVar13 = 0;
      do {
        if (*plStack_220 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        puVar14 = *(undefined **)(lStack_228 + lVar13 * 8);
        puVar3 = puVar14;
        func_0x00010c232a00();
        if (((ulong)puVar3 & 1) != 0) {
          puVar6 = puVar4;
          puVar9 = puVar8;
          func_0x00010c13ace0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1058f47e8;
        }
        lVar13 = lVar13 + 1;
      } while (lVar16 != lVar13);
      puVar9 = auStack_1e8;
      lVar16 = lVar10;
      puVar6 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
    puVar14 = (undefined *)0x0;
  }
LAB_1058f47e8:
  _objc_release(lVar10);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    puVar7 = &uStack_360;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(puVar9);
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    plStack_350 = (long *)0x0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    puVar11 = *(undefined **)((long)puVar4 + 8);
    _objc_retain(puVar11);
    puVar8 = auStack_318;
    puVar3 = puVar11;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar16 = *plStack_350;
      do {
        puVar1 = PTR_s_resolveZipMediaRequest_completio_11262c5f0;
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_350 != lVar16) {
            _objc_enumerationMutation(puVar11);
          }
          puVar14 = *(undefined **)(lStack_358 + (long)puVar17 * 8);
          puVar5 = puVar14;
          func_0x00010c232a00();
          if (((int)puVar5 != 0) &&
             (puVar5 = puVar14, _objc_opt_respondsToSelector(puVar14,puVar1),
             ((ulong)puVar5 & 1) != 0)) {
            puVar7 = puVar6;
            puVar8 = puVar9;
            func_0x00010c13af40();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1058f49bc;
          }
          puVar17 = puVar17 + 1;
        } while (puVar3 != puVar17);
        puVar8 = auStack_318;
        puVar3 = puVar11;
        puVar7 = &uStack_360;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar11);
    if (puVar9 == (undefined1 *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126bfe80;
      _objc_alloc();
      puVar14 = (undefined *)puVar6;
      func_0x00010c0c5220(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029740(0);
      _objc_release(puVar14);
      puVar7 = (undefined8 *)puVar11;
      (**(code **)(puVar9 + 0x10))(puVar9,0);
      puVar14 = (undefined *)0x0;
LAB_1058f49bc:
      _objc_release(puVar11);
    }
    _objc_release(puVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar7);
      _objc_retain(puVar8);
      puVar11 = *(undefined **)((long)puVar6 + 8);
      _objc_retain(puVar11);
      puVar14 = puVar11;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      puVar3 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
      do {
        PTR_s_retrieveCacheStatusForRequest_co_11262d2c8 = puVar3;
        if (puVar14 == (undefined *)0x0) {
          _objc_release(puVar11);
          if (puVar8 != (undefined1 *)0x0) {
            puVar14 = PTR_PTR_1126bfe80;
            _objc_alloc(PTR_PTR_1126bfe80);
            puVar11 = (undefined *)puVar7;
            func_0x00010c0c5220(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029740(0,puVar14);
            (**(code **)(puVar8 + 0x10))(puVar8,puVar14);
            _objc_release(puVar14);
LAB_1058f4b88:
            _objc_release(puVar11);
          }
          _objc_release(puVar8);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
            return (undefined *)puVar7;
          }
          ___stack_chk_fail();
          return (undefined *)(ulong)*(byte *)((long)puVar7 + 0x18);
        }
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(puVar11);
          }
          uVar15 = *(ulong *)((long)puVar17 * 8);
          uVar2 = uVar15;
          func_0x00010c232a00();
          if (((int)uVar2 != 0) &&
             (uVar2 = uVar15, _objc_opt_respondsToSelector(uVar15,puVar3), (uVar2 & 1) != 0)) {
            func_0x00010c13e2a0(uVar15);
            goto LAB_1058f4b88;
          }
          puVar17 = puVar17 + 1;
        } while (puVar14 != puVar17);
        puVar14 = puVar11;
        func_0x00010bf52a60();
        puVar3 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 1058f46e8; end: 1058f483b; -[SCPlaybackCompositeMediaResolver resolveRequest:completion:] */

undefined8 * FUN_1058f46e8(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
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
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = *(long *)(param_1 + 8);
  _objc_retain(lVar9);
  puVar7 = auStack_d8;
  lVar15 = lVar9;
  func_0x00010bf52a60();
  puVar11 = (undefined *)0x0;
  if (lVar15 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        puVar11 = *(undefined **)(lStack_118 + lVar14 * 8);
        puVar2 = puVar11;
        func_0x00010c232a00();
        if (((ulong)puVar2 & 1) != 0) {
          puVar4 = (undefined8 *)param_3;
          puVar7 = param_4;
          func_0x00010c13ace0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1058f47e8;
        }
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      puVar7 = auStack_d8;
      lVar15 = lVar9;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
    puVar11 = (undefined *)0x0;
  }
LAB_1058f47e8:
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_250;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    puVar10 = *(undefined **)(param_3 + 8);
    _objc_retain(puVar10);
    puVar8 = auStack_208;
    puVar2 = puVar10;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar15 = *plStack_240;
      do {
        puVar1 = PTR_s_resolveZipMediaRequest_completio_11262c5f0;
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar15) {
            _objc_enumerationMutation(puVar10);
          }
          puVar11 = *(undefined **)(lStack_248 + (long)puVar16 * 8);
          puVar3 = puVar11;
          func_0x00010c232a00();
          if (((int)puVar3 != 0) &&
             (puVar3 = puVar11, _objc_opt_respondsToSelector(puVar11,puVar1),
             ((ulong)puVar3 & 1) != 0)) {
            puVar6 = puVar4;
            puVar8 = puVar7;
            func_0x00010c13af40();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1058f49bc;
          }
          puVar16 = puVar16 + 1;
        } while (puVar2 != puVar16);
        puVar8 = auStack_208;
        puVar2 = puVar10;
        puVar6 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar10);
    if (puVar7 == (undefined1 *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126bfe80;
      _objc_alloc();
      puVar11 = (undefined *)puVar4;
      func_0x00010c0c5220(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029740(0);
      _objc_release(puVar11);
      puVar6 = (undefined8 *)puVar10;
      (**(code **)(puVar7 + 0x10))(puVar7,0);
      puVar11 = (undefined *)0x0;
LAB_1058f49bc:
      _objc_release(puVar10);
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar6);
      _objc_retain(puVar8);
      puVar10 = *(undefined **)((long)puVar4 + 8);
      _objc_retain(puVar10);
      puVar11 = puVar10;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      puVar2 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
      do {
        PTR_s_retrieveCacheStatusForRequest_co_11262d2c8 = puVar2;
        if (puVar11 == (undefined *)0x0) {
          _objc_release(puVar10);
          if (puVar8 != (undefined1 *)0x0) {
            puVar11 = PTR_PTR_1126bfe80;
            _objc_alloc(PTR_PTR_1126bfe80);
            puVar10 = (undefined *)puVar6;
            func_0x00010c0c5220(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c029740(0,puVar11);
            (**(code **)(puVar8 + 0x10))(puVar8,puVar11);
            _objc_release(puVar11);
LAB_1058f4b88:
            _objc_release(puVar10);
          }
          _objc_release(puVar8);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
            return puVar6;
          }
          ___stack_chk_fail();
          return (undefined8 *)(ulong)*(byte *)((long)puVar6 + 0x18);
        }
        puVar16 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar10);
          }
          uVar13 = *(ulong *)((long)puVar16 * 8);
          uVar5 = uVar13;
          func_0x00010c232a00();
          if (((int)uVar5 != 0) &&
             (uVar5 = uVar13, _objc_opt_respondsToSelector(uVar13,puVar2), (uVar5 & 1) != 0)) {
            func_0x00010c13e2a0(uVar13);
            goto LAB_1058f4b88;
          }
          puVar16 = puVar16 + 1;
        } while (puVar11 != puVar16);
        puVar11 = puVar10;
        func_0x00010bf52a60();
        puVar2 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return (undefined8 *)puVar11;
}



/* Entry: 1058f483c; end: 1058f4a1b; -[SCPlaybackCompositeMediaResolver resolveZipMediaRequest:completion:] */

undefined8 * FUN_1058f483c(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puVar7 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar7);
  puVar5 = auStack_e8;
  puVar1 = puVar7;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar12 = PTR_s_resolveZipMediaRequest_completio_11262c5f0;
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar7);
        }
        puVar8 = *(undefined **)(lStack_128 + (long)puVar11 * 8);
        puVar2 = puVar8;
        func_0x00010c232a00();
        if (((int)puVar2 != 0) &&
           (puVar2 = puVar8, _objc_opt_respondsToSelector(puVar8,puVar12), ((ulong)puVar2 & 1) != 0)
           ) {
          puVar4 = (undefined8 *)param_3;
          puVar5 = param_4;
          func_0x00010c13af40();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1058f49bc;
        }
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar11);
      puVar5 = auStack_e8;
      puVar1 = puVar7;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  if (param_4 == (undefined1 *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126bfe80;
    _objc_alloc();
    puVar1 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0);
    _objc_release(puVar1);
    puVar4 = (undefined8 *)puVar7;
    (**(code **)(param_4 + 0x10))(param_4,0);
    puVar8 = (undefined *)0x0;
LAB_1058f49bc:
    _objc_release(puVar7);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return (undefined8 *)puVar8;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar11 = *(undefined **)(param_3 + 8);
  _objc_retain(puVar11);
  puVar1 = puVar11;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar7 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
  do {
    PTR_s_retrieveCacheStatusForRequest_co_11262d2c8 = puVar7;
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar11);
      if (puVar5 != (undefined1 *)0x0) {
        puVar1 = PTR_PTR_1126bfe80;
        _objc_alloc(PTR_PTR_1126bfe80);
        puVar11 = (undefined *)puVar4;
        func_0x00010c0c5220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029740(0,puVar1);
        (**(code **)(puVar5 + 0x10))(puVar5,puVar1);
        _objc_release(puVar1);
LAB_1058f4b88:
        _objc_release(puVar11);
      }
      _objc_release(puVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return puVar4;
      }
      ___stack_chk_fail();
      return (undefined8 *)(ulong)*(byte *)((long)puVar4 + 0x18);
    }
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar11);
      }
      uVar9 = *(ulong *)((long)puVar12 * 8);
      uVar3 = uVar9;
      func_0x00010c232a00();
      if (((int)uVar3 != 0) &&
         (uVar3 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar7), (uVar3 & 1) != 0)) {
        func_0x00010c13e2a0(uVar9);
        goto LAB_1058f4b88;
      }
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar11;
    func_0x00010bf52a60();
    puVar7 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
  } while( true );
}



/* Entry: 1058f4a1c; end: 1058f4bdb; -[SCPlaybackCompositeMediaResolver retrieveCacheStatusForRequest:completion:] */

ulong FUN_1058f4a1c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar2 = uVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar4 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
  do {
    PTR_s_retrieveCacheStatusForRequest_co_11262d2c8 = puVar4;
    if (uVar2 == 0) {
      _objc_release(uVar6);
      if (param_4 != 0) {
        puVar4 = PTR_PTR_1126bfe80;
        _objc_alloc(PTR_PTR_1126bfe80);
        uVar6 = param_3;
        func_0x00010c0c5220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029740(0,puVar4);
        (**(code **)(param_4 + 0x10))(param_4,puVar4);
        _objc_release(puVar4);
LAB_1058f4b88:
        _objc_release(uVar6);
      }
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return param_3;
      }
      ___stack_chk_fail();
      return (ulong)*(byte *)(param_3 + 0x18);
    }
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar6);
      }
      uVar7 = *(ulong *)(uVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c232a00();
      if (((int)uVar3 != 0) &&
         (uVar3 = uVar7, _objc_opt_respondsToSelector(uVar7,puVar4), (uVar3 & 1) != 0)) {
        func_0x00010c13e2a0(uVar7);
        goto LAB_1058f4b88;
      }
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
    uVar2 = uVar6;
    func_0x00010bf52a60();
    puVar4 = PTR_s_retrieveCacheStatusForRequest_co_11262d2c8;
  } while( true );
}



/* Entry: 1058f4bdc; end: 1058f4be3; -[SCPlaybackCompositeMediaResolver enableNewContentManagerForStories] */

undefined1 FUN_1058f4bdc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1058f4be4; end: 1058f4c13; -[SCPlaybackCompositeMediaResolver .cxx_destruct] */

void FUN_1058f4be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f4c14; end: 1058f4dab; -[SCPlaybackContentLocationResolver initWithBoltContentResolver:contentFetcher:bufferedContentFetcher:cachePolicyManager:circumstanceEngine:] */

undefined1 *
FUN_1058f4c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ead10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x28);
    func_0x000107dd6750();
    *(undefined1 *)((long)puVar2 + 0x38) = uVar1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1058f4dac; end: 1058f4e23; -[SCPlaybackContentLocationResolver shouldResolveWithRequest:] */

bool FUN_1058f4dac(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c46a0();
    bVar1 = lVar3 == 10;
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1058f4e24; end: 1058f5487; -[SCPlaybackContentLocationResolver resolveRequest:completion:] */

void FUN_1058f4e24(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1058f5488;
  uStack_88 = 0x1058f5498;
  uStack_80 = 0;
  puVar1 = param_3;
  puStack_a0 = &uStack_a8;
  func_0x00010c0c5220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1058f54a0;
  puStack_b8 = &UNK_110842b58;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1058f54e0;
  puStack_e0 = &UNK_11084c9b0;
  puStack_d8 = &uStack_a8;
  puStack_b0 = &uStack_a8;
  func_0x00010c0c1120();
  _objc_release(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puStack_a0[5] == 0) {
    puVar2 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(param_3);
    puVar2 = param_3;
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(param_3);
    func_0x00010c029fe0(puVar1);
    puVar4 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    puVar6 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar4);
    (**(code **)(param_4 + 0x10))(param_4,puVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar8 = 0;
    goto LAB_1058f53e8;
  }
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_1058f5068:
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  else {
    puVar3 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar1);
    if (puVar6 != (undefined *)0x0) {
      uVar9 = puStack_a0[5];
      puVar1 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_a0[5];
      puStack_a0[5] = uVar9;
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1058f5068;
    }
  }
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar5 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292920();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b7fc8;
    _objc_alloc(PTR_PTR_1126b7fc8);
    func_0x00010c0631e0();
    puVar2 = PTR_PTR_1126b7fd0;
    _objc_alloc(PTR_PTR_1126b7fd0);
    puVar5 = param_3;
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c0291a0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    puVar5 = PTR_PTR_1126b1378;
    _objc_alloc(PTR_PTR_1126b1378);
    func_0x00010c03cd40();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar8 = param_1;
  func_0x00010be05600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_100,param_1);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_108,auStack_100);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_100);
LAB_1058f53e8:
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1058f5488; end: 1058f549f;  */

void FUN_1058f5488(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058f54a0; end: 1058f555b;  */

void FUN_1058f54a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058f555c; end: 1058f565b; -[SCPlaybackContentLocationResolver retrieveCacheStatusForRequest:completion:] */

void FUN_1058f555c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058f565c; end: 1058f568f;  */

void FUN_1058f565c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058f5690; end: 1058f5957; -[SCPlaybackContentLocationResolver _doMaybeFulldownload:contentBundle:requestContext:completion:] */

void FUN_1058f5690(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c107de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf438e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c107de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c107440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b7fc0;
    _objc_alloc_init();
    _objc_initWeak(auStack_68,param_1);
    uVar1 = uVar3;
    func_0x00010bfbc440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c26d0c0(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126bfec8;
    _objc_alloc(PTR_PTR_1126bfec8);
    func_0x00010c038480();
    func_0x00010bef7460(puVar5);
    _objc_release(puVar6);
    _objc_retain(puVar5);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
  }
  else {
    func_0x00010be05520(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058f5958; end: 1058f5b9b;  */

undefined8 FUN_1058f5958(long param_1,long param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1058f5b9c;
    puStack_88 = &UNK_1108b78a0;
    _objc_copyWeak(auStack_68,param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = uVar5;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = uVar6;
    _objc_retain(uVar5);
    ppuVar2 = &puStack_a0;
    uStack_70 = uVar5;
    _objc_retainBlock();
    lVar3 = param_2;
    func_0x00010bfc1d60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bfbc480(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,param_1 + 0x48);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar8);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar6);
      func_0x00010c26d0c0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_a8);
    }
    else {
      lVar3 = lVar4;
      func_0x000107cd1204(lVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar2[2])(ppuVar2,lVar3);
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
    _objc_release(ppuVar2);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_2);
  return 0;
}



/* Entry: 1058f5b9c; end: 1058f5bff;  */

void FUN_1058f5b9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e600(0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058f5c00; end: 1058f5d67;  */

undefined8 FUN_1058f5c00(double param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar4 == 0) {
    lVar7 = *(long *)(param_2 + 0x30);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar6);
  }
  else {
    lVar7 = lVar4;
    func_0x00010bf27200(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar8 = param_1;
    _objc_release(lVar7);
    lVar7 = lVar4;
    func_0x00010bf4c940(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar7);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < dVar8) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = param_1 == 0.0;
        bVar3 = false;
      }
    }
    param_1 = param_1 / dVar8;
    if (bVar2 || bVar1 != bVar3) {
      param_1 = 0.0;
    }
    puVar6 = (undefined *)(param_2 + 0x40);
    _objc_loadWeakRetained(puVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    FUN_1058f5d68(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e600(param_1,puVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  _objc_release(lVar4);
  return 0;
}



/* Entry: 1058f5d68; end: 1058f5eb7;  */

void FUN_1058f5d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126bfed8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c46a0();
  uVar5 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar9 = uVar8;
  func_0x00010bf93e00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0291c0(puVar1,param_2,uVar4,uVar7,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f5eb8; end: 1058f60d7; -[SCPlaybackContentLocationResolver _doFullDownload:contentBundle:requestContext:completion:] */

void FUN_1058f5eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa6dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  _objc_initWeak(auStack_58,param_1);
  uVar1 = uVar2;
  func_0x00010bf49960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c26d0c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bfed0;
  _objc_alloc(PTR_PTR_1126bfed0);
  func_0x00010bff9900();
  func_0x00010bef7460(puVar3);
  _objc_release(puVar4);
  _objc_retain(puVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058f60d8; end: 1058f61f7;  */

undefined8 FUN_1058f60d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bfc1d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    FUN_1058f5d68(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf987e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x000107cd1204();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e600(0x3ff0000000000000,lVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return 0;
}



/* Entry: 1058f61f8; end: 1058f641f; -[SCPlaybackContentLocationResolver _retrieveCacheStatusForRequest:completion:] */

void FUN_1058f61f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1058f5488;
  uStack_60 = 0x1058f5498;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c0c5220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1120();
  _objc_release(uVar1);
  if (puStack_78[5] == 0) {
    dVar6 = 0.0;
    puVar5 = PTR_PTR_1126bfe80;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfc4140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c06cd80();
    dVar6 = 0.0;
    if (((int)lVar2 != 0) && (lVar2 = lVar3, func_0x00010bf4c960(), 0 < lVar2)) {
      lVar2 = lVar3;
      func_0x00010bf4d680(lVar3);
      lVar4 = lVar3;
      func_0x00010bf4c960(lVar3);
      dVar6 = (double)lVar2 / (double)lVar4;
    }
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126bfe80;
  }
  PTR_PTR_1126bfe80 = puVar5;
  if (param_4 != 0) {
    _objc_alloc(puVar5);
    uVar1 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(dVar6,puVar5);
    (**(code **)(param_4 + 0x10))(param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058f6420; end: 1058f649f;  */

void FUN_1058f6420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058f64a0; end: 1058f672b; -[SCPlaybackContentLocationResolver _loadRequestDidCompleteWithResolvedContentBundle:contentBundleMetadata:request:data:fetchRatio:error:completion:] */

void FUN_1058f64a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_8 == 0) {
    puVar1 = PTR_PTR_1126bfee0;
    _objc_alloc(PTR_PTR_1126bfee0);
    puVar2 = param_6;
    func_0x00010bf9d9e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c029160(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(param_6);
    puVar3 = param_6;
    func_0x00010bf9d9e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(param_6);
    func_0x00010c029f80(puVar2);
    _objc_release(puVar4);
  }
  else {
    puVar2 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(param_6);
    puVar1 = param_6;
    func_0x00010bf9d9e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(param_6);
    func_0x00010c029fe0(puVar2);
    param_1 = 0;
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (param_9 != 0) {
    puVar1 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    puVar3 = param_6;
    func_0x00010c0c5220(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(param_1,puVar1);
    (**(code **)(param_9 + 0x10))(param_9,puVar2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058f672c; end: 1058f6843; -[SCPlaybackContentLocationResolver _setCachePolicyForRequest:contentBundle:] */

void FUN_1058f672c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bfee8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf9c720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff59c0(puVar1,param_2,0,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010bf4c8a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c1751c0(uVar3,param_2,uVar4,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058f6844; end: 1058f684b; -[SCPlaybackContentLocationResolver enableNewContentManagerForStories] */

undefined1 FUN_1058f6844(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1058f684c; end: 1058f68ab; -[SCPlaybackContentLocationResolver .cxx_destruct] */

void FUN_1058f684c(long param_1)

{
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



/* Entry: 1058f68ac; end: 1058f697b; -[SCPlaybackLegacyMediaResolverUsingContentManager initWithLegacyMediaResourceLoader:abrMediaResolver:] */

undefined1 *
FUN_1058f68ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ead18;
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
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058f697c; end: 1058f69db; -[SCPlaybackLegacyMediaResolverUsingContentManager shouldResolveWithRequest:] */

undefined8 FUN_1058f697c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0c6c20(param_3);
  func_0x00010c0df780(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1058f69dc; end: 1058f6c97; -[SCPlaybackLegacyMediaResolverUsingContentManager resolveRequest:completion:] */

void FUN_1058f69dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf89200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c072e60();
    _objc_release(puVar3);
    if ((int)puVar4 != 0) {
      puVar3 = PTR_PTR_1126bfe88;
      _objc_alloc(PTR_PTR_1126bfe88);
      func_0x00010c0c6c20(param_3);
      lVar5 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c46a0();
      func_0x00010c08c440(param_3);
      func_0x00010c02a000(puVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar4 = PTR_PTR_1126bfe80;
      _objc_alloc(PTR_PTR_1126bfe80);
      lVar5 = param_3;
      func_0x00010c0c5220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029740(0x3ff0000000000000,puVar4);
      _objc_release(lVar5);
      (**(code **)(param_4 + 0x10))(param_4,puVar3,puVar4);
      _objc_retain(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_1058f6c14;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09c0a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(puVar1);
  _objc_retain(puVar1);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
LAB_1058f6c14:
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f6c98; end: 1058f6d3f;  */

void FUN_1058f6c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      lVar3 = lVar1;
      func_0x00010be820e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f6d40; end: 1058f6d47; -[SCPlaybackLegacyMediaResolverUsingContentManager retrieveCacheStatusForRequest:completion:] */

void FUN_1058f6d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_retrieveCacheStatusForRequest_co_11262d2c8);
  return;
}



/* Entry: 1058f6d48; end: 1058f6f27; -[SCPlaybackLegacyMediaResolverUsingContentManager _processResult:request:fetchStatus:completion:] */

void FUN_1058f6d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1058f6f28;
  uStack_70 = 0x1058f6f38;
  func_0x00010b0eeb90();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uVar1;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058f6f28; end: 1058f6f3f;  */

void FUN_1058f6f28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058f6f40; end: 1058f716b;  */

void FUN_1058f6f40(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0c6c20();
  if ((10 < uVar1 || uVar1 == 3) && (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0)) {
    uVar3 = param_2;
    func_0x00010c25c880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c067ec0();
    _objc_release(uVar3);
    if ((int)uVar2 == 1) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      func_0x00010c13ace0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      puVar5 = *(undefined **)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      goto LAB_1058f7008;
    }
  }
  puVar5 = PTR_PTR_1126bfe88;
  _objc_alloc(PTR_PTR_1126bfe88);
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9d9e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c08c440(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c029fa0(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),puVar5,*(undefined8 *)(param_1 + 0x30));
LAB_1058f7008:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f716c; end: 1058f726b; -[SCPlaybackLegacyMediaResolverUsingContentManager _transformRequest:withResolvedResult:] */

void FUN_1058f716c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010c13b100();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar1 = PTR_PTR_1126b2c80;
    func_0x00010c28fba0(PTR_PTR_1126b2c80,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bfef0;
    _objc_alloc(PTR_PTR_1126bfef0);
    puVar3 = param_3;
    func_0x00010c0c6c20(param_3);
    puVar4 = param_3;
    func_0x00010c08c440(param_3);
    puVar5 = param_3;
    func_0x00010bf9d9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029760(puVar2,param_2,puVar1,puVar3,puVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058f726c; end: 1058f734b; -[SCPlaybackLegacyMediaResolverUsingContentManager _createZipErrorResultFromError:forRequest:] */

void FUN_1058f726c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bfe88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c0c6c20(param_4);
  uVar3 = param_4;
  func_0x00010bf9d9e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c46a0();
  uVar6 = param_4;
  func_0x00010c08c440(param_4);
  _objc_release(param_4);
  func_0x00010c029fe0(puVar1,param_2,uVar2,uVar5,uVar6,param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f734c; end: 1058f73cb; -[SCPlaybackLegacyMediaResolverUsingContentManager _createZipErrorResultWithType:message:forRequest:] */

void FUN_1058f734c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x000107cd11bc(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf5d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058f73cc; end: 1058f7463; -[SCPlaybackLegacyMediaResolverUsingContentManager _mapZipEntryName:toMediaType:layerType:] */

undefined8
FUN_1058f73cc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db9458);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de71b8);
    if ((int)uVar1 == 0) {
      uVar2 = 0;
      goto LAB_1058f7448;
    }
    uVar2 = 3;
    uVar3 = 2;
  }
  else {
    uVar2 = 1;
    uVar3 = 3;
  }
  *param_4 = uVar3;
  *param_5 = uVar2;
  uVar2 = 1;
LAB_1058f7448:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1058f7464; end: 1058f774b; -[SCPlaybackLegacyMediaResolverUsingContentManager _extractPlaybackEntriesFromZip:request:error:] */

void FUN_1058f7464(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  undefined *puVar8;
  ulong unaff_x25;
  undefined8 *puVar9;
  undefined *unaff_x26;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  puStack_148 = param_4;
  _objc_retain(param_4);
  puVar9 = param_3;
  func_0x000108461ea8();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar9 == (undefined8 *)0x0) ||
     (puVar1 = puVar9, func_0x00010bf529e0(), puVar1 == (undefined8 *)0x0)) {
    if (param_5 == (undefined8 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar7 = 0xb;
      func_0x000107cd11bc(0xb,&PTR____CFConstantStringClassReference_110e0c778);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar8 = (undefined *)0x0;
      *param_5 = uVar7;
    }
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_150 = puVar8;
    _objc_retain(puVar9);
    puVar2 = &uStack_130;
    puVar3 = auStack_f0;
    puVar5 = (undefined8 *)0x10;
    puVar1 = puVar9;
    func_0x00010bf52a60();
    if (puVar1 == (undefined8 *)0x0) {
      _objc_release(puVar9);
LAB_1058f76bc:
      if (param_5 == (undefined8 *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        uVar7 = 0xb;
        func_0x000107cd11bc(0xb,&PTR____CFConstantStringClassReference_110e0c798);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar8 = (undefined *)0x0;
        *param_5 = uVar7;
      }
    }
    else {
      unaff_x25 = 0;
      lVar6 = *plStack_120;
      puStack_168 = param_5;
      uStack_160 = param_1;
      lStack_158 = lVar6;
      do {
        param_4 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(puVar9);
          }
          unaff_x26 = *(undefined **)(lStack_128 + (long)param_4 * 8);
          uVar7 = param_1;
          func_0x00010be5d0a0();
          if ((int)uVar7 != 0) {
            puVar2 = param_3;
            func_0x00010bfcc500();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar2 != (undefined8 *)0x0) {
              unaff_x26 = PTR_PTR_1126bfe88;
              _objc_alloc();
              puVar2 = puStack_148;
              func_0x00010bf9d9e0(puStack_148);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar2;
              func_0x00010bf4c8a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c46a0();
              param_6 = param_3;
              func_0x00010c029fc0();
              _objc_release(puVar3);
              lVar6 = lStack_158;
              param_1 = uStack_160;
              _objc_release(puVar2);
              func_0x00010befa120(puStack_150);
              unaff_x25 = (ulong)((uint)(lStack_140 == 1) | (uint)unaff_x25);
              _objc_release(unaff_x26);
              unaff_x23 = param_3;
            }
          }
          param_4 = (undefined8 *)((long)param_4 + 1);
        } while (puVar1 != param_4);
        puVar2 = &uStack_130;
        puVar3 = auStack_f0;
        puVar5 = (undefined8 *)0x10;
        puVar1 = puVar9;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
      _objc_release(puVar9);
      puVar8 = puStack_150;
      param_5 = puStack_168;
      if ((int)unaff_x25 == 0) goto LAB_1058f76bc;
      _objc_retain(puStack_150);
    }
    _objc_release(puStack_150);
  }
  _objc_release(puVar9);
  _objc_release(puStack_148);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_178 = FUN_1058f774c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar2;
  puVar4 = puVar3;
  puStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  puStack_1b0 = puVar8;
  puStack_1a8 = unaff_x23;
  uStack_1a0 = param_1;
  puStack_198 = param_5;
  puStack_190 = puVar9;
  puStack_188 = param_4;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  _objc_retain(param_6);
  puVar9 = puVar2;
  func_0x00010bfc68c0();
  if (((ulong)puVar9 & 1) == 0) {
    if (param_6 != (undefined8 *)0x0) {
      unaff_x23 = param_3;
      func_0x00010bdf5d20();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = unaff_x23;
LAB_1058f7838:
      puVar4 = (undefined8 *)0x1;
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
LAB_1058f784c:
      puVar1 = puVar5;
      (*(code *)param_6[2])(param_6,puVar9);
      goto LAB_1058f7860;
    }
  }
  else {
    puVar9 = puVar2;
    func_0x00010bfcaaa0();
    if (puVar9 == (undefined8 *)0x0) {
      puStack_1e8 = (undefined8 *)0x0;
      puVar9 = param_3;
      puVar1 = puVar2;
      puVar4 = puVar3;
      func_0x00010be0dbe0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puStack_1e8;
      _objc_retain(puStack_1e8);
      if (puVar9 == (undefined8 *)0x0) {
        if (param_6 != (undefined8 *)0x0) {
          func_0x00010bdf5d00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined8 *)0x1;
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1e0 = param_3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar5;
          (*(code *)param_6[2])(param_6,puVar8);
          _objc_release(puVar8);
          _objc_release(param_3);
        }
        puVar9 = (undefined8 *)0x0;
      }
      else if (param_6 != (undefined8 *)0x0) goto LAB_1058f784c;
LAB_1058f7860:
      _objc_release(puVar9);
      _objc_release(unaff_x23);
    }
    else if (param_6 != (undefined8 *)0x0) {
      unaff_x23 = param_3;
      func_0x00010bdf5d20();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = unaff_x23;
      goto LAB_1058f7838;
    }
  }
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar9 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1058f7974;
  puStack_230 = param_3;
  puStack_228 = unaff_x23;
  puStack_220 = param_6;
  puStack_218 = puVar5;
  puStack_210 = puVar3;
  puStack_208 = puVar2;
  ppuStack_200 = &puStack_180;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_initWeak(auStack_238,puVar9);
  puVar8 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  uVar7 = puVar9[1];
  _objc_copyWeak(auStack_240,auStack_238);
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  func_0x00010c09c0a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(puVar8);
  _objc_retain(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_238);
  _objc_release(puVar4);
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1058f774c; end: 1058f7973; -[SCPlaybackLegacyMediaResolverUsingContentManager _processZipContentResult:request:fetchStatus:completion:] */

void FUN_1058f774c(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *unaff_x23;
  undefined *puVar5;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3;
  uVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010bfc68c0();
  if ((uVar1 & 1) == 0) {
    if (param_6 == 0) goto LAB_1058f7870;
    unaff_x23 = param_1;
    func_0x00010bdf5d20();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = unaff_x23;
LAB_1058f7838:
    uVar3 = 1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
LAB_1058f784c:
    uVar2 = param_5;
    (**(code **)(param_6 + 0x10))(param_6,puVar5);
  }
  else {
    uVar1 = param_3;
    func_0x00010bfcaaa0();
    if (uVar1 != 0) {
      if (param_6 == 0) goto LAB_1058f7870;
      unaff_x23 = param_1;
      func_0x00010bdf5d20();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = unaff_x23;
      goto LAB_1058f7838;
    }
    puStack_78 = (undefined *)0x0;
    puVar5 = param_1;
    uVar2 = param_3;
    uVar3 = param_4;
    func_0x00010be0dbe0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puStack_78;
    _objc_retain(puStack_78);
    if (puVar5 != (undefined *)0x0) {
      if (param_6 == 0) goto LAB_1058f7860;
      goto LAB_1058f784c;
    }
    if (param_6 != 0) {
      func_0x00010bdf5d00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 1;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = param_1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      (**(code **)(param_6 + 0x10))(param_6,puVar5);
      _objc_release(puVar5);
      _objc_release(param_1);
    }
    puVar5 = (undefined *)0x0;
  }
LAB_1058f7860:
  _objc_release(puVar5);
  _objc_release(unaff_x23);
LAB_1058f7870:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_88 = FUN_1058f7974;
    puStack_c0 = param_1;
    puStack_b8 = unaff_x23;
    lStack_b0 = param_6;
    uStack_a8 = param_5;
    uStack_a0 = param_4;
    uStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_c8,uVar1);
    puVar5 = PTR_PTR_1126b7fc0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(uVar1 + 8);
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    func_0x00010c09c0a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(puVar5);
    _objc_retain(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1058f7974; end: 1058f7ad3; -[SCPlaybackLegacyMediaResolverUsingContentManager resolveZipMediaRequest:completion:] */

void FUN_1058f7974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09c0a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(puVar1);
  _objc_retain(puVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f7ad4; end: 1058f7c3f;  */

void FUN_1058f7ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      _objc_retain(param_3);
      func_0x00010c0c0800(param_2);
      _objc_release(param_3);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(param_3);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f7c40; end: 1058f7c53;  */

void FUN_1058f7c40(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be82950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processZipContentResult_request_11257e3f0,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1058f7c54; end: 1058f7d17;  */

void FUN_1058f7c54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x38);
  lVar1 = param_1;
  if (lVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bdf5d00(lVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar2,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0x18,0);
  _objc_storeStrong(lVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 1058f7d18; end: 1058f7d53; -[SCPlaybackLegacyMediaResolverUsingContentManager .cxx_destruct] */

void FUN_1058f7d18(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f7d54; end: 1058f7dc7; -[SCPlaybackMediaResolutionResultAccessorImpl initWithMediaReslutionResultsDict:] */

undefined1 * FUN_1058f7d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead20;
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



/* Entry: 1058f7dc8; end: 1058f7e1b; -[SCPlaybackMediaResolutionResultAccessorImpl resolvedAllMedia] */

void FUN_1058f7dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058f7e1c; end: 1058f7f77; -[SCPlaybackMediaResolutionResultAccessorImpl resolvedMediaWithContainerLayerType:] */

void FUN_1058f7e1c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    uVar3 = 1;
    func_0x000107cd11bc(1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar2);
    _objc_release(uVar3);
    param_1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar1 = puVar4;
    func_0x00010bfb0d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becee60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058f7f78; end: 1058f803b; -[SCPlaybackMediaResolutionResultAccessorImpl resolvedMediaObservable] */

void FUN_1058f7f78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cab40(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5d0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb2660(puVar3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058f803c; end: 1058f8047; -[SCPlaybackMediaResolutionResultAccessorImpl _mapperToSuccessfullyResolvedResults] */

undefined ** FUN_1058f803c(void)

{
  return &PTR___NSConcreteGlobalBlock_1108bea18;
}



/* Entry: 1058f8048; end: 1058f8193;  */

void FUN_1058f8048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1058f8194;
  uStack_30 = 0x1058f81a4;
  uStack_28 = 0;
  func_0x00010c0c1140(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  if (puStack_48[5] == 0) {
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf8eb20();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f8194; end: 1058f81ab;  */

void FUN_1058f8194(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058f81ac; end: 1058f820b;  */

void FUN_1058f81ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c08fa60();
  if (param_2 != 0) {
    return;
  }
  uVar1 = 1;
  func_0x000107cd11bc(1,&PTR____CFConstantStringClassReference_110e0c6f8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058f820c; end: 1058f82a3;  */

void FUN_1058f820c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107cd1204();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f82a4; end: 1058f82a7;  */

void FUN_1058f82a4(void)

{
  return;
}



/* Entry: 1058f82a8; end: 1058f82df;  */

void FUN_1058f82a8(long param_1,undefined8 param_2)

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



/* Entry: 1058f82e0; end: 1058f8403; -[SCPlaybackMediaResolutionResultAccessorImpl _transformToFutureFromObservable:] */

void FUN_1058f82e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058f8404;
  puStack_40 = &UNK_1108beab8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1058f85b4;
  puStack_68 = &UNK_110842e18;
  puStack_60 = puVar1;
  puStack_38 = puVar2;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  uVar3 = param_3;
  func_0x00010c25ff80(param_3,param_2,&puStack_58,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf1a3e0(uVar3,param_2,puVar1);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058f8404; end: 1058f8583;  */

void FUN_1058f8404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0c1140(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1058f8584; end: 1058f85bb;  */

void FUN_1058f8584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058f85bc; end: 1058f85c7; -[SCPlaybackMediaResolutionResultAccessorImpl .cxx_destruct] */

void FUN_1058f85bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f85c8; end: 1058f863b; -[SCPlaybackMediaResolutionResultImpl initWithResolvedMediaResultsArray:] */

undefined1 * FUN_1058f85c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ead28;
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



/* Entry: 1058f863c; end: 1058f8697; -[SCPlaybackMediaResolutionResultImpl resultsForContainerLayerType:] */

void FUN_1058f863c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1058f8698;
  puStack_20 = &UNK_1108beae8;
  uStack_18 = param_3;
  func_0x00010bfaea20(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058f8698; end: 1058f86c7;  */

bool FUN_1058f8698(long param_1,long param_2)

{
  func_0x00010bf4aec0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 1058f86c8; end: 1058f86ef; -[SCPlaybackMediaResolutionResultImpl allResults] */

void FUN_1058f86c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058f86f0; end: 1058f86fb; -[SCPlaybackMediaResolutionResultImpl .cxx_destruct] */

void FUN_1058f86f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f86fc; end: 1058f873b;  */

void FUN_1058f86fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058f873c; end: 1058f8917; -[SCPlaybackMediaResolutionServiceEntryPoint _initializeMediaResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058f873c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bff08;
  _objc_alloc(PTR_PTR_1126bff08);
  if (param_1 == 0) {
    lVar10 = 0;
    lVar8 = 0;
    lVar9 = 0;
    lVar6 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272bf5c;
    _objc_loadWeakRetained(lVar8);
    lVar9 = param_1 + _DAT_11272bf64;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + _DAT_11272bf68;
    _objc_loadWeakRetained(lVar10);
    lVar6 = param_1 + _DAT_11272bf60;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272bf6c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
    lVar11 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272bf74;
    _objc_loadWeakRetained(lVar12);
    lVar11 = param_1 + _DAT_11272bf70;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11272bf78;
    _objc_loadWeakRetained();
  }
  func_0x00010c003420(puVar1,param_2,lVar8,lVar9,lVar10,lVar2,lVar3,lVar12,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f8918; end: 1058f89d3; -[SCPlaybackMediaResolutionServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058f8918(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272bf50,0);
  _objc_storeStrong(param_1 + _DAT_11272bf54,0);
  _objc_destroyWeak(param_1 + _DAT_11272bf78);
  _objc_destroyWeak(param_1 + _DAT_11272bf74);
  _objc_destroyWeak(param_1 + _DAT_11272bf70);
  _objc_destroyWeak(param_1 + _DAT_11272bf6c);
  _objc_destroyWeak(param_1 + _DAT_11272bf68);
  _objc_destroyWeak(param_1 + _DAT_11272bf64);
  _objc_destroyWeak(param_1 + _DAT_11272bf60);
  _objc_destroyWeak(param_1 + _DAT_11272bf5c);
  _objc_destroyWeak(param_1 + _DAT_11272bf58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272bf4c,0);
  return;
}



/* Entry: 1058f89d4; end: 1058f8c67; -[SCPlaybackMediaResolver initWithContentDeliveryServices:contentManagerServices:contentManagerPlaybackServices:contentObjectResolver:circumstanceEngine:abrMediaServices:grapheneRegistry:webProxyServices:] */

undefined8 *
FUN_1058f89d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126ead30;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar2[1];
    puVar2[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126bff10;
    _objc_alloc();
    func_0x00010c003440();
    uVar5 = puVar2[2];
    puVar2[2] = puVar3;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010bf4c500();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[3];
    puVar2[3] = uVar5;
    _objc_release(uVar6);
    uVar5 = param_4;
    func_0x00010bf21e60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[4];
    puVar2[4] = uVar5;
    _objc_release(uVar6);
    uVar5 = param_3;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[6];
    puVar2[6] = uVar5;
    _objc_release(uVar6);
    uVar1 = (undefined1)puVar2[2];
    func_0x00010bf90f00();
    *(undefined1 *)(puVar2 + 9) = uVar1;
    _objc_retain(param_6);
    uVar5 = puVar2[7];
    puVar2[7] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar2[8];
    puVar2[8] = param_9;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar5 = puVar2[5];
    puVar2[5] = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1058f8c68; end: 1058f8cbf; -[SCPlaybackMediaResolver registerCustomSingleMediaResolvers:] */

void FUN_1058f8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1058f8cc0;
  puStack_20 = &UNK_1108beb78;
  uStack_18 = param_1;
  func_0x00010bf97e80(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 1058f8cc0; end: 1058f8ccf;  */

void FUN_1058f8cc0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_registerCustomMediaResolver__1126272b8,param_2);
  return;
}



/* Entry: 1058f8cd0; end: 1058f91ef; -[SCPlaybackMediaResolver resolveRequest:completion:] */

void FUN_1058f8cd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uStack_2f0;
  undefined1 auStack_280 [8];
  ulong uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  puStack_1b8 = (ulong *)0x0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar18 = param_4;
  func_0x00010c0c6380();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    uStack_2f0 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *puStack_1b8;
    uVar2 = uVar17;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c292920();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar17;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11fca0();
      _objc_retainAutoreleasedReturnValue();
      uStack_2f0 = uVar3;
      func_0x00010bfa96c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar17);
    }
    else {
      uStack_2f0 = 4;
    }
  }
  _objc_release(lVar18);
  puVar4 = PTR_PTR_1126bcb98;
  func_0x00010c0c6420();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010c0ff420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar15);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126bad10;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126bff18;
  _objc_opt_new();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  lVar18 = param_4;
  func_0x00010c0c6380();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bf52a60();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    lVar20 = *plStack_1f0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1f0 != lVar20) {
          _objc_enumerationMutation(lVar18);
        }
        puVar12 = puVar11;
        func_0x00010bf96920();
        _objc_retainAutoreleasedReturnValue();
        puStack_240 = puVar4;
        uStack_238 = 0xc2000000;
        pcStack_230 = FUN_1058f91f0;
        puStack_228 = &UNK_1108beba8;
        _objc_retain(puVar5);
        puStack_220 = puVar5;
        puStack_218 = puVar9;
        _objc_retain(puVar10);
        ppuVar13 = &puStack_240;
        puStack_210 = puVar10;
        puStack_208 = puVar12;
        _objc_retainBlock(ppuVar13);
        lVar14 = param_2;
        func_0x00010c13ad20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 != 0) {
          func_0x00010bef7460(puVar6);
          puStack_268 = puVar4;
          uStack_260 = 0xc2000000;
          pcStack_258 = FUN_1058f928c;
          puStack_250 = &UNK_110842e18;
          puStack_248 = puVar12;
          func_0x00010bef74a0(puVar6);
        }
        _objc_release(lVar14);
        _objc_release(ppuVar13);
        _objc_release(puStack_210);
        _objc_release(puStack_220);
        _objc_release(puVar12);
        lVar19 = lVar19 + 1;
      } while (lVar1 != lVar19);
      lVar1 = lVar18;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar18);
  _objc_initWeak(auStack_100,param_2);
  lVar18 = *(long *)(param_2 + 8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar16 = auStack_100;
  _objc_copyWeak(auStack_280,puVar16);
  _objc_retain(puVar10);
  uStack_278 = uStack_2f0;
  uStack_270 = param_1;
  func_0x00010c0dcdc0(puVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_280);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_280);
    _objc_destroyWeak(auStack_100);
    __Unwind_Resume();
    _objc_retain(puVar16);
    _objc_retain(lVar18);
    uVar15 = *(undefined8 *)(param_4 + 0x20);
    _objc_retainAutorelease(uVar15);
    func_0x00010bed1e80();
    _os_unfair_lock_lock();
    func_0x00010befa120(*(undefined8 *)(param_4 + 0x28));
    if (lVar18 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_4 + 0x30));
    }
    _os_unfair_lock_unlock(uVar15);
    func_0x00010c08e0e0(*(undefined8 *)(param_4 + 0x38));
    _objc_release(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058f91f0; end: 1058f928b;  */

void FUN_1058f91f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bed1e80();
  _os_unfair_lock_lock();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
  _os_unfair_lock_unlock(uVar1);
  func_0x00010c08e0e0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f928c; end: 1058f9293;  */

void FUN_1058f928c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1058f9294; end: 1058f9557;  */

void FUN_1058f9294(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 0x38);
  if (lVar11 != 0) {
    puVar1 = PTR_PTR_1126bff20;
    _objc_alloc(PTR_PTR_1126bff20);
    func_0x00010c03f7c0();
    (**(code **)(lVar11 + 0x10))(lVar11,puVar1);
    _objc_release(puVar1);
  }
  lVar11 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar11 != 0) {
    lVar2 = *(long *)(param_2 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_2 + 0x30);
      func_0x00010bf529e0();
      lVar4 = *(long *)(param_2 + 0x20);
      func_0x00010c0c6380();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar3 == lVar2) {
        puVar1 = PTR_PTR_1126bff28;
        _objc_alloc(PTR_PTR_1126bff28);
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bf4c720(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c46a0();
        uVar6 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010bf51e00(uVar6);
        func_0x00010c029200(puVar1);
        _objc_release(uVar6);
        _objc_release(uVar5);
        func_0x00010c0d9840(*(undefined8 *)(lVar11 + 0x28));
        _objc_release(puVar1);
      }
    }
    puVar1 = PTR_PTR_1126bcb98;
    func_0x00010c0c6400(PTR_PTR_1126bcb98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)(lVar11 + 0x40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0ff420();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010befc000(param_1 - *(double *)(param_2 + 0x50),uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126bcb98;
    func_0x00010c0c63e0(PTR_PTR_1126bcb98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    uVar6 = *(undefined8 *)(lVar11 + 0x40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0ff420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 1058f9558; end: 1058f972f; -[SCPlaybackMediaResolver resolveSingleMediaRequest:completion:] */

void FUN_1058f9558(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c232a00();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      puVar4 = PTR_PTR_1126bfe88;
      _objc_alloc(PTR_PTR_1126bfe88);
      func_0x00010c0c6c20(param_3);
      uVar2 = param_3;
      func_0x00010bf9d9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c46a0();
      func_0x00010c08c440(param_3);
      uVar6 = 2;
      func_0x000107cd11bc(2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029fe0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      puVar7 = PTR_PTR_1126bfe80;
      _objc_alloc(PTR_PTR_1126bfe80);
      uVar2 = param_3;
      func_0x00010c0c5220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029740(0,puVar7);
      (**(code **)(param_4 + 0x10))(param_4,puVar4,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar2);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c13ace0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058f9730; end: 1058f995b; -[SCPlaybackMediaResolver resolveZipMediaRequest:completion:] */

undefined ** FUN_1058f9730(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *unaff_x22;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined **ppuVar9;
  undefined **unaff_x26;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c232a00();
  if ((uVar1 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e0c838;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_80 = param_3;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      unaff_x22 = (undefined *)0x2;
      func_0x000107cd11bc(2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = PTR_PTR_1126bfe88;
      _objc_alloc();
      func_0x00010c0c6c20(param_3);
      ppuVar3 = param_3;
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = ppuVar3;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c46a0();
      func_0x00010c08c440(param_3);
      func_0x00010c029fe0();
      _objc_release(unaff_x26);
      _objc_release(ppuVar3);
      unaff_x24 = (undefined **)PTR_PTR_1126bfe80;
      _objc_alloc();
      ppuVar3 = param_3;
      func_0x00010c0c5220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029740(0);
      _objc_release(ppuVar3);
      unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = unaff_x23;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = unaff_x24;
      (**(code **)(param_4 + 0x10))(param_4,unaff_x25);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
    }
    _objc_release(puVar8);
    ppuVar2 = (undefined **)0x0;
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 0x10);
    ppuVar3 = param_3;
    func_0x00010c13af40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  ppuVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_1a0;
  pcStack_88 = FUN_1058f995c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = unaff_x26;
  puStack_c8 = unaff_x25;
  ppuStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  ppuStack_a8 = ppuVar2;
  lStack_a0 = param_4;
  ppuStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  lStack_198 = 0;
  puStack_1a0 = (undefined *)0x0;
  uStack_188 = 0;
  puStack_190 = (undefined8 *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  _objc_retain(ppuVar3);
  puVar4 = auStack_158;
  uVar5 = 0x10;
  ppuVar9 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar9 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_190;
    ppuVar2 = ppuVar9;
    do {
      ppuVar9 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_190 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        ppuVar7 = *(undefined ***)(lStack_198 + (long)ppuVar9 * 8);
        unaff_x23 = ppuVar6[6];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x23;
        func_0x00010c11d220();
        _objc_release(unaff_x23);
        if (unaff_x22 != (undefined *)0x0) {
          ppuVar6 = (undefined **)0x0;
          goto LAB_1058f9a54;
        }
        ppuVar9 = (undefined **)((long)ppuVar9 + 1);
      } while (ppuVar2 != ppuVar9);
      puVar4 = auStack_158;
      uVar5 = 0x10;
      ppuVar2 = ppuVar3;
      ppuVar7 = &puStack_1a0;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  ppuVar6 = (undefined **)0x1;
LAB_1058f9a54:
  _objc_release(ppuVar3);
  ppuVar9 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_1058f9aa0;
  ppuStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = unaff_x22;
  ppuStack_1c8 = ppuVar2;
  ppuStack_1c0 = ppuVar6;
  ppuStack_1b8 = ppuVar3;
  ppuStack_1b0 = &puStack_90;
  _objc_retain(ppuVar7);
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_1e8,ppuVar9);
  puVar8 = ppuVar9[1];
  _objc_copyWeak(auStack_1f0,auStack_1e8);
  _objc_retain(ppuVar7);
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1e8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar7);
  return ppuVar7;
}



/* Entry: 1058f995c; end: 1058f9a9f; -[SCPlaybackMediaResolver hasMediaBundleResolved:] */

undefined1 * FUN_1058f995c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar1 = auStack_d8;
  uVar2 = 0x10;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    unaff_x24 = *plStack_110;
    unaff_x21 = lVar6;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = *(undefined8 **)(lStack_118 + lVar6 * 8);
        unaff_x23 = *(long *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x23;
        func_0x00010c11d220();
        _objc_release(unaff_x23);
        if (unaff_x22 != 0) {
          puVar3 = (undefined1 *)0x0;
          goto LAB_1058f9a54;
        }
        lVar6 = lVar6 + 1;
      } while (unaff_x21 != lVar6);
      puVar1 = auStack_d8;
      uVar2 = 0x10;
      unaff_x21 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar3 = (undefined1 *)0x1;
LAB_1058f9a54:
  _objc_release(param_3);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1058f9aa0;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  lStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  puStack_140 = puVar3;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_168,lVar6);
  uVar5 = *(undefined8 *)(lVar6 + 8);
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  return (undefined1 *)puVar4;
}



/* Entry: 1058f9aa0; end: 1058f9bcf; -[SCPlaybackMediaResolver retrieveCacheStatusForRequest:completion:completionQueue:] */

void FUN_1058f9aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058f9bd0; end: 1058f9c07;  */

void FUN_1058f9bd0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058f9c08; end: 1058f9c17; -[SCPlaybackMediaResolver mediaResolutionRequestFetchStatusObservable] */

void FUN_1058f9c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_filter__1125c8f90,
             &PTR___NSConcreteGlobalBlock_1108bebf8);
  return;
}



/* Entry: 1058f9c18; end: 1058f9d23;  */

undefined8 FUN_1058f9c18(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
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
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c107f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010bfa9ac0(*(undefined8 *)(lStack_108 + lVar7 * 8));
        bVar1 = false;
        if (!NAN((double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(
                                                  uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)))))))
                )) {
          bVar1 = (double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(
                                                  uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)))))))
                  == 0.0;
        }
        if (bVar1) {
          uVar4 = 0;
          goto LAB_1058f9ce4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  uVar4 = 1;
LAB_1058f9ce4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(puVar3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfd6700();
  _objc_release(puVar3);
  _objc_release(uVar5);
  return uVar4;
}



/* Entry: 1058f9d24; end: 1058f9d87; -[SCPlaybackMediaResolver hasDownloadStarted:] */

undefined8 FUN_1058f9d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd6700();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1058f9d88; end: 1058f9deb; -[SCPlaybackMediaResolver isDownloadComplete:] */

undefined8 FUN_1058f9d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c070da0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1058f9dec; end: 1058f9f1f; -[SCPlaybackMediaResolver downloadContentBundle:mediaContextType:completion:] */

void FUN_1058f9dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1058f9f20(param_4,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfa6dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf49960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c26d0c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 1058f9f20; end: 1058f9ff3;  */

void FUN_1058f9f20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  func_0x00010c0291a0();
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  func_0x00010c03cd40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058f9ff4; end: 1058fa0db;  */

void FUN_1058f9ff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010c0bfa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058fa0dc; end: 1058fa0ff;  */

undefined8 FUN_1058fa0dc(long param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return 0;
}



/* Entry: 1058fa100; end: 1058fa14f;  */

undefined8 FUN_1058fa100(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107cd1204(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_2);
  _objc_release(param_2);
  return 0;
}



/* Entry: 1058fa150; end: 1058fa24f; -[SCPlaybackMediaResolver retrieveStreamingVariantCacheStatusForContentBundle:completion:] */

void FUN_1058fa150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058fa250; end: 1058fa283;  */

void FUN_1058fa250(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058fa284; end: 1058fa52f; -[SCPlaybackMediaResolver _retrieveCacheStatusForRequest:completion:completionQueue:] */

void FUN_1058fa284(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bad10;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126bff18;
  _objc_opt_new();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = param_3;
  func_0x00010c0c6380();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(lVar4);
        }
        puVar6 = puVar3;
        func_0x00010bf96920();
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_1058fa530;
        puStack_160 = &UNK_1108bec78;
        _objc_retain(puVar1);
        puStack_158 = puVar1;
        _objc_retain(puVar2);
        ppuVar7 = &puStack_178;
        puStack_150 = puVar2;
        puStack_148 = puVar6;
        _objc_retainBlock(ppuVar7);
        func_0x00010c13e2a0(*(undefined8 *)(param_1 + 0x10));
        _objc_release(ppuVar7);
        _objc_release(puStack_150);
        _objc_release(puStack_158);
        _objc_release(puVar6);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_retain(param_4);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x00010c0dcdc0(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar8 = *(undefined8 *)(param_5 + 0x20);
  _objc_retainAutorelease(uVar8);
  func_0x00010bed1e80();
  _os_unfair_lock_lock();
  func_0x00010befa120(*(undefined8 *)(param_5 + 0x28));
  _os_unfair_lock_unlock(uVar8);
  func_0x00010c08e0e0(*(undefined8 *)(param_5 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058fa530; end: 1058fa5a7;  */

void FUN_1058fa530(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bed1e80();
  _os_unfair_lock_lock();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _os_unfair_lock_unlock(uVar1);
  func_0x00010c08e0e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058fa5a8; end: 1058fa647;  */

void FUN_1058fa5a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bff28;
  _objc_alloc(PTR_PTR_1126bff28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4c720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar3);
  func_0x00010c029200(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058fa648; end: 1058fa6f3; -[SCPlaybackMediaResolver _retrieveCacheStatusForContentBundle:completion:] */

void FUN_1058fa648(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfcad80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfc1d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


