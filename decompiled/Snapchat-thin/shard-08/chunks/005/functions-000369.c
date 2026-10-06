/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106267414; end: 106267587;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106267414(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [3];
  undefined1 auStack_2e8 [24];
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [3];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_1109188a0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106267588;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar13 = &UNK_10f371ee3;
    }
    else {
      puVar13 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_e0,puVar13);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_1109188f0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar3 = puVar8;
    param_4 = puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar8;
      param_4 = puVar5;
    }
  }
  puVar13 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_1062676fc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar2 = &UNK_110918940;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = puVar8;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar13 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_188 = FUN_106267870;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar3 = puVar5;
  puVar8 = param_4;
  puVar11 = param_5;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar13 = &UNK_10f371ee3;
    }
    else {
      puVar13 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_238,puVar13);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_220,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_208,puVar3);
    unaff_x26 = auStack_238;
    unaff_x25 = auStack_1f0;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_1d8,4);
    puVar7 = &UNK_110918990;
    param_5 = &uStack_258;
    puVar3 = &uStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_240 = param_5;
    func_0x00010007e5dc(&puStack_240);
    lVar15 = 0;
    puVar8 = param_6;
    do {
      if ((&cStack_1d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar13 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_238);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar4 = puVar13;
    __Unwind_Resume();
    puVar10 = &uStack_320;
    pcStack_268 = FUN_106267b58;
    lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar7;
    puVar9 = puVar3;
    puVar12 = puVar8;
    puStack_2b0 = unaff_x26;
    puStack_2a8 = unaff_x25;
    puStack_2a0 = param_5;
    puStack_298 = auStack_238;
    puStack_290 = puVar13;
    puStack_288 = param_4;
    puStack_280 = puVar5;
    puStack_278 = puVar2;
    pppuStack_270 = &pppuStack_190;
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    puVar5 = auStack_238;
    if (puVar4 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_300,puVar2);
      pcVar1 = "true";
      if ((int)puVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_2e8,pcVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f371ee3;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar3 = puVar8;
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_2d0,puVar3);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2b8,3);
      puVar6 = &UNK_1109189e0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109189e0,&uStack_320,puVar11);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x00010007e5dc(&puStack_308);
      lVar15 = 0;
      puVar9 = puVar10;
      puVar12 = puVar11;
      do {
        if ((&cStack_2b9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        puVar5 = &uStack_320;
      } while (lVar15 != -0x48);
    }
    _objc_release(puVar8);
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      puVar5 = puVar5 + -3;
    } while (puVar5 != auStack_300);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_3a0;
    pcStack_328 = FUN_106267dd0;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar6;
    puVar11 = puVar9;
    puStack_360 = puVar3;
    puStack_358 = puVar5;
    puStack_350 = auStack_300;
    puStack_348 = puVar2;
    puStack_340 = puVar8;
    puStack_338 = puVar7;
    pppuStack_330 = &pppuStack_270;
    _objc_retain(puVar6);
    plVar14 = (long *)0x0;
    puVar8 = auStack_300;
    if (puVar4 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      puVar5 = auStack_380;
      func_0x00010002b838(auStack_380,puVar2);
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_390 = 0;
      func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
      puVar13 = &UNK_110918a30;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a30,&uStack_3a0,puVar9);
      puStack_388 = (undefined1 *)&uStack_3a0;
      func_0x00010007e5dc(&puStack_388);
      puVar11 = puVar10;
      puVar12 = puVar9;
      puVar8 = &uStack_3a0;
      if (cStack_369 < '\0') {
        __ZdlPv(auStack_380[0]);
        puVar11 = puVar10;
        puVar12 = puVar9;
        puVar8 = &uStack_3a0;
      }
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar10 = &uStack_420;
    pcStack_3a8 = FUN_106267f44;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar13;
    puVar9 = puVar11;
    puStack_3e0 = puVar3;
    puStack_3d8 = puVar5;
    puStack_3d0 = puVar8;
    plStack_3c8 = plVar14;
    puStack_3c0 = puVar2;
    puStack_3b8 = puVar6;
    pppuStack_3b0 = &pppuStack_330;
    _objc_retain(puVar13);
    plVar14 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar4 + 8);
      _objc_retain(puVar13);
      if (puVar13 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar13;
        _objc_retainAutorelease(puVar13);
        func_0x00010bdc3520();
      }
      _objc_release(puVar13);
      puVar5 = auStack_400;
      func_0x00010002b838(auStack_400,puVar2);
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      func_0x00010007e1e8(&uStack_420,auStack_400,&lStack_3e8,1);
      puVar7 = &UNK_110918a80;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a80,&uStack_420,puVar11);
      puStack_408 = (undefined1 *)&uStack_420;
      func_0x00010007e5dc(&puStack_408);
      puVar9 = puVar10;
      puVar12 = puVar11;
      puVar8 = &uStack_420;
      if (cStack_3e9 < '\0') {
        __ZdlPv(auStack_400[0]);
        puVar9 = puVar10;
        puVar12 = puVar11;
        puVar8 = &uStack_420;
      }
    }
    puVar2 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e8) {
      ___stack_chk_fail();
      _objc_release(puVar13);
      _objc_release(puVar13);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_428 = FUN_1062680b8;
      lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar7;
      puVar11 = puVar9;
      puStack_460 = puVar3;
      puStack_458 = puVar5;
      puStack_450 = puVar8;
      plStack_448 = plVar14;
      puStack_440 = puVar2;
      puStack_438 = puVar13;
      pppuStack_430 = &pppuStack_3b0;
      _objc_retain(puVar7);
      _objc_retain(puVar9);
      puVar8 = (undefined8 *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar4 + 8);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar7;
          _objc_retainAutorelease(puVar7);
          func_0x00010bdc3520();
        }
        _objc_release(puVar7);
        puVar3 = auStack_498;
        func_0x00010002b838(auStack_498,puVar2);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f371ee3;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar5 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_480,puVar5);
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        func_0x00010007e1e8(&uStack_4b8,auStack_498,&lStack_468,2);
        puVar6 = &UNK_110918ad0;
        puVar5 = &uStack_4b8;
        puVar11 = &uStack_4b8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918ad0,puVar11,puVar12);
        puStack_4a0 = puVar5;
        func_0x00010007e5dc(&puStack_4a0);
        lVar15 = 0;
        puVar8 = auStack_498;
        do {
          if ((&cStack_469)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(puVar9);
      puVar2 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_481 < '\0') {
        __ZdlPv(auStack_498[0]);
      }
      _objc_release(puVar9);
      _objc_release(puVar7);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar10 = &uStack_540;
      pcStack_4c8 = FUN_1062682e8;
      lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar13 = puVar6;
      puVar12 = puVar11;
      puStack_500 = puVar3;
      puStack_4f8 = puVar5;
      puStack_4f0 = puVar8;
      puStack_4e8 = puVar2;
      puStack_4e0 = puVar9;
      puStack_4d8 = puVar7;
      pppuStack_4d0 = &pppuStack_430;
      _objc_retain(puVar6);
      plVar14 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar4 + 8);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010bdc3520();
        }
        _objc_release(puVar6);
        puVar5 = auStack_520;
        func_0x00010002b838(auStack_520,puVar2);
        uStack_540 = 0;
        uStack_538 = 0;
        uStack_530 = 0;
        func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
        puVar13 = &UNK_110918b20;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b20,&uStack_540,puVar11);
        puStack_528 = (undefined1 *)&uStack_540;
        func_0x00010007e5dc(&puStack_528);
        puVar12 = puVar10;
        puVar8 = &uStack_540;
        if (cStack_509 < '\0') {
          __ZdlPv(auStack_520[0]);
          puVar12 = puVar10;
          puVar8 = &uStack_540;
        }
      }
      puVar2 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
        return puVar2;
      }
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar4 = puVar2;
      __Unwind_Resume();
      puVar9 = &uStack_5c0;
      pcStack_548 = FUN_10626845c;
      lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar13;
      puVar11 = puVar12;
      puStack_580 = puVar3;
      puStack_578 = puVar5;
      puStack_570 = puVar8;
      plStack_568 = plVar14;
      puStack_560 = puVar2;
      puStack_558 = puVar6;
      pppuStack_550 = &pppuStack_4d0;
      _objc_retain(puVar13);
      plVar14 = (long *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar4 + 8);
        _objc_retain(puVar13);
        if (puVar13 == (undefined *)0x0) {
          puVar2 = &UNK_10f371ee3;
        }
        else {
          puVar2 = puVar13;
          _objc_retainAutorelease(puVar13);
          func_0x00010bdc3520();
        }
        _objc_release(puVar13);
        puVar5 = auStack_5a0;
        func_0x00010002b838(auStack_5a0,puVar2);
        uStack_5c0 = 0;
        uStack_5b8 = 0;
        uStack_5b0 = 0;
        func_0x00010007e1e8(&uStack_5c0,auStack_5a0,&lStack_588,1);
        puVar7 = &UNK_110918b70;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b70,&uStack_5c0,puVar12);
        puStack_5a8 = (undefined1 *)&uStack_5c0;
        func_0x00010007e5dc(&puStack_5a8);
        puVar11 = puVar9;
        puVar8 = &uStack_5c0;
        if (cStack_589 < '\0') {
          __ZdlPv(auStack_5a0[0]);
          puVar11 = puVar9;
          puVar8 = &uStack_5c0;
        }
      }
      puVar2 = puVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
        ___stack_chk_fail();
        _objc_release(puVar13);
        _objc_release(puVar13);
        puVar6 = puVar2;
        __Unwind_Resume();
        pcStack_5c8 = FUN_1062685d0;
        lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_600 = puVar3;
        puStack_5f8 = puVar5;
        puStack_5f0 = puVar8;
        plStack_5e8 = plVar14;
        puStack_5e0 = puVar2;
        puStack_5d8 = puVar13;
        pppuStack_5d0 = &pppuStack_550;
        _objc_retain(puVar7);
        if (puVar6 != (undefined *)0x0) {
          plVar14 = *(long **)(puVar6 + 8);
          _objc_retain(puVar7);
          if (puVar7 == (undefined *)0x0) {
            puVar2 = &UNK_10f371ee3;
          }
          else {
            puVar2 = puVar7;
            _objc_retainAutorelease(puVar7);
            func_0x00010bdc3520();
          }
          _objc_release(puVar7);
          func_0x00010002b838(auStack_620,puVar2);
          uStack_640 = 0;
          uStack_638 = 0;
          uStack_630 = 0;
          func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918bc0,&uStack_640,puVar11);
          puStack_628 = (undefined1 *)&uStack_640;
          func_0x00010007e5dc(&puStack_628);
          if (cStack_609 < '\0') {
            __ZdlPv(auStack_620[0]);
          }
        }
        puVar2 = puVar7;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
          ___stack_chk_fail();
          _objc_release(puVar7);
          _objc_release(puVar7);
          __Unwind_Resume();
          _objc_retain();
          puVar13 = puVar2;
          func_0x00010c131a00();
          if (puVar13 == (undefined *)0x1) {
            puVar13 = puVar2;
            func_0x00010c0f3b40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = (undefined *)(ulong)(puVar13 == (undefined *)0x0);
            _objc_release();
          }
          else {
            puVar13 = (undefined *)0x0;
          }
          _objc_release(puVar2);
          return puVar13;
        }
        return puVar2;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar13;
}



/* Entry: 106267588; end: 1062676fb;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106267588(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined8 *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [3];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [3];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_1109188f0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_4 = param_3;
    }
  }
  puVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_1062676fc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar13 = &UNK_10f371ee3;
    }
    else {
      puVar13 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_e0,puVar13);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar7 = &UNK_110918940;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar13 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_108 = FUN_106267870;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar3 = puVar5;
  puVar8 = param_4;
  puVar11 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1b8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1a0,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_188,puVar3);
    unaff_x26 = auStack_1b8;
    unaff_x25 = auStack_170;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_158,4);
    puVar2 = &UNK_110918990;
    param_5 = &uStack_1d8;
    puVar3 = &uStack_1d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1c0 = param_5;
    func_0x00010007e5dc(&puStack_1c0);
    lVar15 = 0;
    puVar8 = param_6;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar13 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_1b8);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar4 = puVar13;
  __Unwind_Resume();
  puVar10 = &uStack_2a0;
  pcStack_1e8 = FUN_106267b58;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar9 = puVar3;
  puVar12 = puVar8;
  puStack_230 = unaff_x26;
  puStack_228 = unaff_x25;
  puStack_220 = param_5;
  puStack_218 = auStack_1b8;
  puStack_210 = puVar13;
  puStack_208 = param_4;
  puStack_200 = puVar5;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_110;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar5 = auStack_1b8;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar13 = &UNK_10f371ee3;
    }
    else {
      puVar13 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_280,puVar13);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_268,pcVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_250,puVar3);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_238,3);
    puVar6 = &UNK_1109189e0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109189e0,&uStack_2a0,puVar11);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar15 = 0;
    puVar9 = puVar10;
    puVar12 = puVar11;
    do {
      if ((&cStack_239)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      puVar5 = &uStack_2a0;
    } while (lVar15 != -0x48);
  }
  _objc_release(puVar8);
  puVar13 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != auStack_280);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar4 = puVar13;
  __Unwind_Resume();
  puVar10 = &uStack_320;
  pcStack_2a8 = FUN_106267dd0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar11 = puVar9;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar5;
  puStack_2d0 = auStack_280;
  puStack_2c8 = puVar13;
  puStack_2c0 = puVar8;
  puStack_2b8 = puVar2;
  pppuStack_2b0 = &pppuStack_1f0;
  _objc_retain(puVar6);
  plVar14 = (long *)0x0;
  puVar8 = auStack_280;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_300;
    func_0x00010002b838(auStack_300,puVar2);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar7 = &UNK_110918a30;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a30,&uStack_320,puVar9);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x00010007e5dc(&puStack_308);
    puVar11 = puVar10;
    puVar12 = puVar9;
    puVar8 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar11 = puVar10;
      puVar12 = puVar9;
      puVar8 = &uStack_320;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_3a0;
  pcStack_328 = FUN_106267f44;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar7;
  puVar9 = puVar11;
  puStack_360 = puVar3;
  puStack_358 = puVar5;
  puStack_350 = puVar8;
  plStack_348 = plVar14;
  puStack_340 = puVar2;
  puStack_338 = puVar6;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar7);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar5 = auStack_380;
    func_0x00010002b838(auStack_380,puVar2);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar13 = &UNK_110918a80;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a80,&uStack_3a0,puVar11);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    puVar9 = puVar10;
    puVar12 = puVar11;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar9 = puVar10;
      puVar12 = puVar11;
      puVar8 = &uStack_3a0;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_3a8 = FUN_1062680b8;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar13;
  puVar11 = puVar9;
  puStack_3e0 = puVar3;
  puStack_3d8 = puVar5;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar14;
  puStack_3c0 = puVar2;
  puStack_3b8 = puVar7;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  puVar8 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar13);
    if (puVar13 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar13;
      _objc_retainAutorelease(puVar13);
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    puVar3 = auStack_418;
    func_0x00010002b838(auStack_418,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_400,puVar5);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar6 = &UNK_110918ad0;
    puVar5 = &uStack_438;
    puVar11 = &uStack_438;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918ad0,puVar11,puVar12);
    puStack_420 = puVar5;
    func_0x00010007e5dc(&puStack_420);
    lVar15 = 0;
    puVar8 = auStack_418;
    do {
      if ((&cStack_3e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar9);
  puVar2 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar13);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_4c0;
  pcStack_448 = FUN_1062682e8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar12 = puVar11;
  puStack_480 = puVar3;
  puStack_478 = puVar5;
  puStack_470 = puVar8;
  puStack_468 = puVar2;
  puStack_460 = puVar9;
  puStack_458 = puVar13;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar6);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,puVar2);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
    puVar7 = &UNK_110918b20;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b20,&uStack_4c0,puVar11);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar12 = puVar10;
    puVar8 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar12 = puVar10;
      puVar8 = &uStack_4c0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar9 = &uStack_540;
    pcStack_4c8 = FUN_10626845c;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar7;
    puVar11 = puVar12;
    puStack_500 = puVar3;
    puStack_4f8 = puVar5;
    puStack_4f0 = puVar8;
    plStack_4e8 = plVar14;
    puStack_4e0 = puVar2;
    puStack_4d8 = puVar6;
    pppuStack_4d0 = &pppuStack_450;
    _objc_retain(puVar7);
    plVar14 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar5 = auStack_520;
      func_0x00010002b838(auStack_520,puVar2);
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
      puVar13 = &UNK_110918b70;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b70,&uStack_540,puVar12);
      puStack_528 = (undefined1 *)&uStack_540;
      func_0x00010007e5dc(&puStack_528);
      puVar11 = puVar9;
      puVar8 = &uStack_540;
      if (cStack_509 < '\0') {
        __ZdlPv(auStack_520[0]);
        puVar11 = puVar9;
        puVar8 = &uStack_540;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_548 = FUN_1062685d0;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_580 = puVar3;
    puStack_578 = puVar5;
    puStack_570 = puVar8;
    plStack_568 = plVar14;
    puStack_560 = puVar2;
    puStack_558 = puVar7;
    pppuStack_550 = &pppuStack_4d0;
    _objc_retain(puVar13);
    if (puVar6 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar6 + 8);
      _objc_retain(puVar13);
      if (puVar13 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar13;
        _objc_retainAutorelease(puVar13);
        func_0x00010bdc3520();
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_5a0,puVar2);
      uStack_5c0 = 0;
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      func_0x00010007e1e8(&uStack_5c0,auStack_5a0,&lStack_588,1);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918bc0,&uStack_5c0,puVar11);
      puStack_5a8 = (undefined1 *)&uStack_5c0;
      func_0x00010007e5dc(&puStack_5a8);
      if (cStack_589 < '\0') {
        __ZdlPv(auStack_5a0[0]);
      }
    }
    puVar2 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
      ___stack_chk_fail();
      _objc_release(puVar13);
      _objc_release(puVar13);
      __Unwind_Resume();
      _objc_retain();
      puVar13 = puVar2;
      func_0x00010c131a00();
      if (puVar13 == (undefined *)0x1) {
        puVar13 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = (undefined *)(ulong)(puVar13 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar13 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar13;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1062676fc; end: 10626786f;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_1062676fc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110918940;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106267870;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar3 = puVar5;
  puVar12 = param_4;
  puVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar13 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar13 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar13 = &UNK_10f371ee3;
    }
    else {
      puVar13 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar13);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_120,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_108,puVar3);
    unaff_x26 = auStack_138;
    unaff_x25 = auStack_f0;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_d8,4);
    puVar7 = &UNK_110918990;
    param_5 = &uStack_158;
    puVar3 = &uStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_140 = param_5;
    func_0x00010007e5dc(&puStack_140);
    lVar15 = 0;
    puVar12 = param_6;
    do {
      if ((&cStack_d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar13 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_138);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar13;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_168 = FUN_106267b58;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar8 = puVar3;
  puVar11 = puVar12;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = param_5;
  puStack_198 = auStack_138;
  puStack_190 = puVar13;
  puStack_188 = param_4;
  puStack_180 = puVar5;
  puStack_178 = puVar2;
  ppuStack_170 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar12);
  puVar5 = auStack_138;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_200,puVar2);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar3 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_1d0,puVar3);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar6 = &UNK_1109189e0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109189e0,&uStack_220,puVar10);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar15 = 0;
    puVar8 = puVar9;
    puVar11 = puVar10;
    do {
      if ((&cStack_1b9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      puVar5 = &uStack_220;
    } while (lVar15 != -0x48);
  }
  _objc_release(puVar12);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != auStack_200);
  _objc_release(puVar12);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_2a0;
  pcStack_228 = FUN_106267dd0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar6;
  puVar10 = puVar8;
  puStack_260 = puVar3;
  puStack_258 = puVar5;
  puStack_250 = auStack_200;
  puStack_248 = puVar2;
  puStack_240 = puVar12;
  puStack_238 = puVar7;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(puVar6);
  plVar14 = (long *)0x0;
  puVar12 = auStack_200;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_280;
    func_0x00010002b838(auStack_280,puVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar13 = &UNK_110918a30;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a30,&uStack_2a0,puVar8);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar10 = puVar9;
    puVar11 = puVar8;
    puVar12 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar10 = puVar9;
      puVar11 = puVar8;
      puVar12 = &uStack_2a0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_320;
  pcStack_2a8 = FUN_106267f44;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar13;
  puVar8 = puVar10;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar5;
  puStack_2d0 = puVar12;
  plStack_2c8 = plVar14;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar13);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar13);
    if (puVar13 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar13;
      _objc_retainAutorelease(puVar13);
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    puVar5 = auStack_300;
    func_0x00010002b838(auStack_300,puVar2);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar7 = &UNK_110918a80;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a80,&uStack_320,puVar10);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x00010007e5dc(&puStack_308);
    puVar8 = puVar9;
    puVar11 = puVar10;
    puVar12 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar8 = puVar9;
      puVar11 = puVar10;
      puVar12 = &uStack_320;
    }
  }
  puVar2 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar13);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_1062680b8;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar10 = puVar8;
  puStack_360 = puVar3;
  puStack_358 = puVar5;
  puStack_350 = puVar12;
  plStack_348 = plVar14;
  puStack_340 = puVar2;
  puStack_338 = puVar13;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar12 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar3 = auStack_398;
    func_0x00010002b838(auStack_398,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_380,puVar5);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar6 = &UNK_110918ad0;
    puVar5 = &uStack_3b8;
    puVar10 = &uStack_3b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918ad0,puVar10,puVar11);
    puStack_3a0 = puVar5;
    func_0x00010007e5dc(&puStack_3a0);
    lVar15 = 0;
    puVar12 = auStack_398;
    do {
      if ((&cStack_369)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_440;
  pcStack_3c8 = FUN_1062682e8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar6;
  puVar11 = puVar10;
  puStack_400 = puVar3;
  puStack_3f8 = puVar5;
  puStack_3f0 = puVar12;
  puStack_3e8 = puVar2;
  puStack_3e0 = puVar8;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(puVar6);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_420;
    func_0x00010002b838(auStack_420,puVar2);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
    puVar13 = &UNK_110918b20;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b20,&uStack_440,puVar10);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x00010007e5dc(&puStack_428);
    puVar11 = puVar9;
    puVar12 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar11 = puVar9;
      puVar12 = &uStack_440;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_4c0;
  pcStack_448 = FUN_10626845c;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar13;
  puVar10 = puVar11;
  puStack_480 = puVar3;
  puStack_478 = puVar5;
  puStack_470 = puVar12;
  plStack_468 = plVar14;
  puStack_460 = puVar2;
  puStack_458 = puVar6;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(puVar13);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar13);
    if (puVar13 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar13;
      _objc_retainAutorelease(puVar13);
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    puVar5 = auStack_4a0;
    func_0x00010002b838(auStack_4a0,puVar2);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
    puVar7 = &UNK_110918b70;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b70,&uStack_4c0,puVar11);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    puVar10 = puVar8;
    puVar12 = &uStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      puVar10 = puVar8;
      puVar12 = &uStack_4c0;
    }
  }
  puVar2 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  _objc_release(puVar13);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_4c8 = FUN_1062685d0;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_500 = puVar3;
  puStack_4f8 = puVar5;
  puStack_4f0 = puVar12;
  plStack_4e8 = plVar14;
  puStack_4e0 = puVar2;
  puStack_4d8 = puVar13;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_520,puVar2);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_508,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918bc0,&uStack_540,puVar10);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x00010007e5dc(&puStack_528);
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    __Unwind_Resume();
    _objc_retain();
    puVar13 = puVar2;
    func_0x00010c131a00();
    if (puVar13 == (undefined *)0x1) {
      puVar13 = puVar2;
      func_0x00010c0f3b40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = (undefined *)(ulong)(puVar13 == (undefined *)0x0);
      _objc_release();
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    return puVar13;
  }
  return puVar2;
}



/* Entry: 106267870; end: 106267b57;  */

/* WARNING: Removing unreachable block (ram,0x000106267b20) */
/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106267870(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [3];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar6 = param_4;
  puVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar3);
    unaff_x26 = auStack_b8;
    unaff_x25 = auStack_70;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar2 = &UNK_110918990;
    param_5 = &uStack_d8;
    puVar3 = &uStack_d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_c0 = param_5;
    func_0x00010007e5dc(&puStack_c0);
    lVar13 = 0;
    puVar6 = param_6;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != auStack_b8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar12;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_e8 = FUN_106267b58;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar3;
  puVar11 = puVar6;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_120 = param_5;
  puStack_118 = auStack_b8;
  puStack_110 = puVar12;
  puStack_108 = param_4;
  puStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  puVar15 = auStack_b8;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar12 = &UNK_10f371ee3;
    }
    else {
      puVar12 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_180,puVar12);
    pcVar1 = "true";
    if ((int)puVar3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_168,pcVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_150,puVar3);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_138,3);
    puVar7 = &UNK_1109189e0;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109189e0,&uStack_1a0,puVar10);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    lVar13 = 0;
    puVar8 = puVar9;
    puVar11 = puVar10;
    do {
      if ((&cStack_139)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      puVar15 = &uStack_1a0;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar6);
  puVar12 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  do {
    puVar15 = puVar15 + -3;
  } while (puVar15 != auStack_180);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar5 = puVar12;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_1a8 = FUN_106267dd0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar10 = puVar8;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar15;
  puStack_1d0 = auStack_180;
  puStack_1c8 = puVar12;
  puStack_1c0 = puVar6;
  puStack_1b8 = puVar2;
  ppuStack_1b0 = &puStack_f0;
  _objc_retain(puVar7);
  plVar14 = (long *)0x0;
  puVar6 = auStack_180;
  if (puVar5 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar15 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar4 = &UNK_110918a30;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a30,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar10 = puVar9;
    puVar11 = puVar8;
    puVar6 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar10 = puVar9;
      puVar11 = puVar8;
      puVar6 = &uStack_220;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_2a0;
  pcStack_228 = FUN_106267f44;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar4;
  puVar8 = puVar10;
  puStack_260 = puVar3;
  puStack_258 = puVar15;
  puStack_250 = puVar6;
  plStack_248 = plVar14;
  puStack_240 = puVar2;
  puStack_238 = puVar7;
  pppuStack_230 = &ppuStack_1b0;
  _objc_retain(puVar4);
  plVar14 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    puVar15 = auStack_280;
    func_0x00010002b838(auStack_280,puVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar12 = &UNK_110918a80;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918a80,&uStack_2a0,puVar10);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar8 = puVar9;
    puVar11 = puVar10;
    puVar6 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar8 = puVar9;
      puVar11 = puVar10;
      puVar6 = &uStack_2a0;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1062680b8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar12;
  puVar10 = puVar8;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar15;
  puStack_2d0 = puVar6;
  plStack_2c8 = plVar14;
  puStack_2c0 = puVar2;
  puStack_2b8 = puVar4;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar12);
  _objc_retain(puVar8);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar5 + 8);
    _objc_retain(puVar12);
    if (puVar12 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar12;
      _objc_retainAutorelease(puVar12);
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    puVar3 = auStack_318;
    func_0x00010002b838(auStack_318,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar6 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_300,puVar6);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    puVar7 = &UNK_110918ad0;
    puVar15 = &uStack_338;
    puVar10 = &uStack_338;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918ad0,puVar10,puVar11);
    puStack_320 = puVar15;
    func_0x00010007e5dc(&puStack_320);
    lVar13 = 0;
    puVar6 = auStack_318;
    do {
      if ((&cStack_2e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar12);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar9 = &uStack_3c0;
    pcStack_348 = FUN_1062682e8;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar7;
    puVar11 = puVar10;
    puStack_380 = puVar3;
    puStack_378 = puVar15;
    puStack_370 = puVar6;
    puStack_368 = puVar2;
    puStack_360 = puVar8;
    puStack_358 = puVar12;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(puVar7);
    plVar14 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar15 = auStack_3a0;
      func_0x00010002b838(auStack_3a0,puVar2);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
      puVar4 = &UNK_110918b20;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b20,&uStack_3c0,puVar10);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x00010007e5dc(&puStack_3a8);
      puVar11 = puVar9;
      puVar6 = &uStack_3c0;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        puVar11 = puVar9;
        puVar6 = &uStack_3c0;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar5 = puVar2;
    __Unwind_Resume();
    puVar8 = &uStack_440;
    pcStack_3c8 = FUN_10626845c;
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar4;
    puVar10 = puVar11;
    puStack_400 = puVar3;
    puStack_3f8 = puVar15;
    puStack_3f0 = puVar6;
    plStack_3e8 = plVar14;
    puStack_3e0 = puVar2;
    puStack_3d8 = puVar7;
    pppuStack_3d0 = &pppuStack_350;
    _objc_retain(puVar4);
    plVar14 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar15 = auStack_420;
      func_0x00010002b838(auStack_420,puVar2);
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_408,1);
      puVar12 = &UNK_110918b70;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918b70,&uStack_440,puVar11);
      puStack_428 = (undefined1 *)&uStack_440;
      func_0x00010007e5dc(&puStack_428);
      puVar10 = puVar8;
      puVar6 = &uStack_440;
      if (cStack_409 < '\0') {
        __ZdlPv(auStack_420[0]);
        puVar10 = puVar8;
        puVar6 = &uStack_440;
      }
    }
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar7 = puVar2;
    __Unwind_Resume();
    pcStack_448 = FUN_1062685d0;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_480 = puVar3;
    puStack_478 = puVar15;
    puStack_470 = puVar6;
    plStack_468 = plVar14;
    puStack_460 = puVar2;
    puStack_458 = puVar4;
    pppuStack_450 = &pppuStack_3d0;
    _objc_retain(puVar12);
    if (puVar7 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar7 + 8);
      _objc_retain(puVar12);
      if (puVar12 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_4a0,puVar2);
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_488,1);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110918bc0,&uStack_4c0,puVar10);
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      if (cStack_489 < '\0') {
        __ZdlPv(auStack_4a0[0]);
      }
    }
    puVar2 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      _objc_release(puVar12);
      __Unwind_Resume();
      _objc_retain();
      puVar12 = puVar2;
      func_0x00010c131a00();
      if (puVar12 == (undefined *)0x1) {
        puVar12 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = (undefined *)(ulong)(puVar12 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar12;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106267b58; end: 106267dcf;  */

/* WARNING: Removing unreachable block (ram,0x000106267da0) */

undefined *
FUN_106267b58(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar2);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_4);
      param_3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,param_3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar2 = &UNK_1109189e0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109189e0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar7 = puVar5;
    puVar9 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  puVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x23 = unaff_x23 + -3;
  } while (unaff_x23 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar3 = puVar10;
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_c8 = FUN_106267dd0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar7;
  puStack_100 = param_3;
  puStack_f8 = unaff_x23;
  puStack_f0 = auStack_a0;
  puStack_e8 = puVar10;
  puStack_e0 = param_4;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  puVar13 = auStack_a0;
  if (puVar3 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar10 = &UNK_10f371ee3;
    }
    else {
      puVar10 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_120;
    func_0x00010002b838(auStack_120,puVar10);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar6 = &UNK_110918a30;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918a30,&uStack_140,puVar7);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar5 = puVar8;
    puVar9 = puVar7;
    puVar13 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar5 = puVar8;
      puVar9 = puVar7;
      puVar13 = &uStack_140;
    }
  }
  puVar10 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar10;
  __Unwind_Resume();
  puVar8 = &uStack_1c0;
  pcStack_148 = FUN_106267f44;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar7 = puVar5;
  puStack_180 = param_3;
  puStack_178 = unaff_x23;
  puStack_170 = puVar13;
  plStack_168 = plVar12;
  puStack_160 = puVar10;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = &UNK_110918a80;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918a80,&uStack_1c0,puVar5);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar7 = puVar8;
    puVar9 = puVar5;
    puVar13 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar7 = puVar8;
      puVar9 = puVar5;
      puVar13 = &uStack_1c0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1062680b8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar3;
  puVar5 = puVar7;
  puStack_200 = param_3;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar13;
  plStack_1e8 = plVar12;
  puStack_1e0 = puVar2;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar3);
  _objc_retain(puVar7);
  puVar13 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f371ee3;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    param_3 = auStack_238;
    func_0x00010002b838(auStack_238,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar10 = &UNK_110918ad0;
    unaff_x23 = &uStack_258;
    puVar5 = &uStack_258;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918ad0,puVar5,puVar9);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar11 = 0;
    puVar13 = auStack_238;
    do {
      if ((&cStack_209)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar8 = &uStack_2e0;
    pcStack_268 = FUN_1062682e8;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar10;
    puVar9 = puVar5;
    puStack_2a0 = param_3;
    puStack_298 = unaff_x23;
    puStack_290 = puVar13;
    puStack_288 = puVar2;
    puStack_280 = puVar7;
    puStack_278 = puVar3;
    pppuStack_270 = &pppuStack_1d0;
    _objc_retain(puVar10);
    plVar12 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      unaff_x23 = auStack_2c0;
      func_0x00010002b838(auStack_2c0,puVar2);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
      puVar6 = &UNK_110918b20;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918b20,&uStack_2e0,puVar5);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      puVar9 = puVar8;
      puVar13 = &uStack_2e0;
      if (cStack_2a9 < '\0') {
        __ZdlPv(auStack_2c0[0]);
        puVar9 = puVar8;
        puVar13 = &uStack_2e0;
      }
    }
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    puVar4 = puVar2;
    __Unwind_Resume();
    puVar5 = &uStack_360;
    pcStack_2e8 = FUN_10626845c;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar6;
    puVar7 = puVar9;
    puStack_320 = param_3;
    puStack_318 = unaff_x23;
    puStack_310 = puVar13;
    plStack_308 = plVar12;
    puStack_300 = puVar2;
    puStack_2f8 = puVar10;
    pppuStack_2f0 = &pppuStack_270;
    _objc_retain(puVar6);
    plVar12 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      unaff_x23 = auStack_340;
      func_0x00010002b838(auStack_340,puVar2);
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
      puVar3 = &UNK_110918b70;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918b70,&uStack_360,puVar9);
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x00010007e5dc(&puStack_348);
      puVar7 = puVar5;
      puVar13 = &uStack_360;
      if (cStack_329 < '\0') {
        __ZdlPv(auStack_340[0]);
        puVar7 = puVar5;
        puVar13 = &uStack_360;
      }
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar10 = puVar2;
    __Unwind_Resume();
    pcStack_368 = FUN_1062685d0;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3a0 = param_3;
    puStack_398 = unaff_x23;
    puStack_390 = puVar13;
    plStack_388 = plVar12;
    puStack_380 = puVar2;
    puStack_378 = puVar6;
    pppuStack_370 = &pppuStack_2f0;
    _objc_retain(puVar3);
    if (puVar10 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar10 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = &UNK_10f371ee3;
      }
      else {
        puVar2 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_3c0,puVar2);
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110918bc0,&uStack_3e0,puVar7);
      puStack_3c8 = (undefined1 *)&uStack_3e0;
      func_0x00010007e5dc(&puStack_3c8);
      if (cStack_3a9 < '\0') {
        __ZdlPv(auStack_3c0[0]);
      }
    }
    puVar2 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      __Unwind_Resume();
      _objc_retain();
      puVar10 = puVar2;
      func_0x00010c131a00();
      if (puVar10 == (undefined *)0x1) {
        puVar10 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = (undefined *)(ulong)(puVar10 == (undefined *)0x0);
        _objc_release();
      }
      else {
        puVar10 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      return puVar10;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 106267dd0; end: 106267f43;  */

undefined * FUN_106267dd0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110918a30;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918a30,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar2 = puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = puVar6;
      param_4 = param_3;
    }
  }
  puVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_106267f44;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar10 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar10 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar10 = &UNK_10f371ee3;
    }
    else {
      puVar10 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar10);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110918a80;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918a80,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = puVar7;
    param_4 = puVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = puVar7;
      param_4 = puVar2;
    }
  }
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1062680b8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  puVar7 = (undefined8 *)0x0;
  if (puVar10 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar10 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_160,puVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110918ad0;
    unaff_x23 = &uStack_198;
    puVar2 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918ad0,puVar2,param_4);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar12 = 0;
    puVar7 = auStack_178;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar6);
  puVar10 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar3 = puVar10;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_1a8 = FUN_1062682e8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar7;
  puStack_1c8 = puVar10;
  puStack_1c0 = puVar6;
  puStack_1b8 = puVar4;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar10 = &UNK_10f371ee3;
    }
    else {
      puVar10 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar10);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar5 = &UNK_110918b20;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918b20,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar8 = puVar9;
    puVar7 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar8 = puVar9;
      puVar7 = &uStack_220;
    }
  }
  puVar10 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar10;
  __Unwind_Resume();
  puVar6 = &uStack_2a0;
  pcStack_228 = FUN_10626845c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puVar2 = puVar8;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar7;
  plStack_248 = plVar11;
  puStack_240 = puVar10;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_280;
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar4 = &UNK_110918b70;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918b70,&uStack_2a0,puVar8);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar2 = puVar6;
    puVar7 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar6;
      puVar7 = &uStack_2a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar10 = puVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1062685d0;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar7;
  plStack_2c8 = plVar11;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar4);
  if (puVar10 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar10 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110918bc0,&uStack_320,puVar2);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x00010007e5dc(&puStack_308);
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain();
  puVar10 = puVar1;
  func_0x00010c131a00();
  if (puVar10 == (undefined *)0x1) {
    puVar10 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)(ulong)(puVar10 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar10;
}



/* Entry: 106267f44; end: 1062680b7;  */

undefined * FUN_106267f44(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110918a80;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918a80,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = puVar2;
      param_4 = param_3;
    }
  }
  puVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1062680b8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar2 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  puVar12 = (undefined8 *)0x0;
  if (puVar9 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar9 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar9 = &UNK_10f371ee3;
    }
    else {
      puVar9 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar9);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar4 = &UNK_110918ad0;
    unaff_x23 = &uStack_118;
    puVar2 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918ad0,puVar2,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar6);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar3 = puVar9;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_1062682e8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar7 = puVar2;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar9;
  puStack_140 = puVar6;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar4);
  plVar10 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar5 = &UNK_110918b20;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918b20,&uStack_1a0,puVar2);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar7 = puVar8;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar7 = puVar8;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar1;
  __Unwind_Resume();
  puVar2 = &uStack_220;
  pcStack_1a8 = FUN_10626845c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar5;
  puVar6 = puVar7;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar9 = &UNK_110918b70;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918b70,&uStack_220,puVar7);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar6 = puVar2;
    puVar12 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar6 = puVar2;
      puVar12 = &uStack_220;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_1062685d0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar12;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar9);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918bc0,&uStack_2a0,puVar6);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  puVar1 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  __Unwind_Resume();
  _objc_retain();
  puVar9 = puVar1;
  func_0x00010c131a00();
  if (puVar9 == (undefined *)0x1) {
    puVar9 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)(ulong)(puVar9 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar9;
}



/* Entry: 1062680b8; end: 1062682e7;  */

undefined * FUN_1062680b8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f371ee3;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110918ad0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918ad0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar8;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_1062682e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar8;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar8 = &UNK_10f371ee3;
    }
    else {
      puVar8 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar8);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_110918b20;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918b20,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar6 = puVar7;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar6 = puVar7;
      puVar11 = &uStack_120;
    }
  }
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar8;
  __Unwind_Resume();
  puVar7 = &uStack_1a0;
  pcStack_128 = FUN_10626845c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar2 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar8;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar3 = &UNK_110918b70;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918b70,&uStack_1a0,puVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar7;
    puVar11 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar7;
      puVar11 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1062685d0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar11;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar3);
  if (puVar8 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar8 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110918bc0,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain();
  puVar8 = puVar1;
  func_0x00010c131a00();
  if (puVar8 == (undefined *)0x1) {
    puVar8 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)(ulong)(puVar8 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar8;
}



/* Entry: 1062682e8; end: 10626845b;  */

undefined * FUN_1062682e8(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110918b20;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110918b20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  puVar5 = puVar3;
  _objc_retain(puVar1);
  if (puVar6 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar6 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar6 = &UNK_10f371ee3;
    }
    else {
      puVar6 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar6);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar2 = &UNK_110918b70;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110918b70,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = (undefined1 *)puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = (undefined1 *)puVar4;
    }
  }
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  if (puVar6 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar6 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110918bc0,&uStack_180,puVar5);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain();
  puVar6 = puVar1;
  func_0x00010c131a00();
  if (puVar6 == (undefined *)0x1) {
    puVar6 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)(ulong)(puVar6 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 10626845c; end: 1062685cf;  */

undefined * FUN_10626845c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar4 = &UNK_10f371ee3;
    }
    else {
      puVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar4 = &UNK_110918b70;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110918b70,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar2 = (undefined1 *)puVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = (undefined1 *)puVar3;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  if (puVar1 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar1 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_e0,puVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110918bc0,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain();
  puVar4 = puVar1;
  func_0x00010c131a00();
  if (puVar4 == (undefined *)0x1) {
    puVar4 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)(ulong)(puVar4 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 1062685d0; end: 106268743;  */

undefined * FUN_1062685d0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f371ee3;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110918bc0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  puVar2 = puVar1;
  func_0x00010c131a00();
  if (puVar2 == (undefined *)0x1) {
    puVar2 = puVar1;
    func_0x00010c0f3b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)(ulong)(puVar2 == (undefined *)0x0);
    _objc_release();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106268744; end: 1062687a3;  */

bool FUN_106268744(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c131a00();
  if (lVar2 == 1) {
    lVar2 = param_1;
    func_0x00010c0f3b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1062687a4; end: 10626884f;  */

uint FUN_1062687a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c131a00(param_1);
  lVar2 = param_1;
  FUN_106268744(param_1);
  _objc_release(param_1);
  return (uint)(lVar1 - 3U < 2) | (uint)lVar2 & 1;
}



/* Entry: 106268850; end: 10626887f;  */

void FUN_106268850(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e15e38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e15e38,
                      &PTR____CFConstantStringClassReference_110e471b8,0);
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



/* Entry: 106268880; end: 1062688f3; -[SCCommunitiesReportStoryCommentServices initWithCommunitiesReportStoryCommentService:] */

undefined1 * FUN_106268880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f09e8;
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



/* Entry: 1062688f4; end: 1062688fb; -[SCCommunitiesReportStoryCommentServices communitiesReportStoryCommentService] */

undefined8 FUN_1062688f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062688fc; end: 106268907; -[SCCommunitiesReportStoryCommentServices .cxx_destruct] */

void FUN_1062688fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106268908; end: 106268983;  */

undefined * FUN_106268908(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c34c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e471f8,
                        &UNK_10ddda458,&UNK_10ddda460,1,FUN_106268984,0);
    do {
      if (puRam00000001136c34c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c34c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c34c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c34c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c34c8;
}



/* Entry: 106268984; end: 10626898f;  */

bool FUN_106268984(int param_1)

{
  return param_1 == 0;
}



/* Entry: 106268990; end: 106268a0b;  */

undefined * FUN_106268990(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c34d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e47218,
                        &UNK_10ddda464,&UNK_10ddda4d8,9,FUN_106268a0c,0);
    do {
      if (puRam00000001136c34d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c34d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c34d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c34d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c34d0;
}



/* Entry: 106268a0c; end: 106268a17;  */

bool FUN_106268a0c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 106268a18; end: 106268a7f; +[TextEncoding descriptor] */

void FUN_106268a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c34d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6be0,
                        &PTR____CFConstantStringClassReference_110e47238,&PTR_DAT_113148248,0,0,4,
                        0x1c);
    puRam00000001136c34d8 = puVar1;
  }
  return;
}



/* Entry: 106268a80; end: 106268afb; +[GetRepliesRequest descriptor] */

undefined * FUN_106268a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c34e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6c30,
                        &PTR____CFConstantStringClassReference_110e47258,&PTR_DAT_113148248,
                        &PTR_s_metadata_113148bc0,0xd,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c34e0 = puVar1;
  }
  return puRam00000001136c34e0;
}



/* Entry: 106268afc; end: 106268b77; +[GetRepliesResponse descriptor] */

undefined * FUN_106268afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c34e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6c80,
                        &PTR____CFConstantStringClassReference_110e47278,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148720,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c34e8 = puVar1;
  }
  return puRam00000001136c34e8;
}



/* Entry: 106268b78; end: 106268bdf; +[GetRepliesMultiIndexCursor descriptor] */

void FUN_106268b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c34f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6cd0,
                        &PTR____CFConstantStringClassReference_110e47298,&PTR_DAT_113148248,
                        &PTR_DAT_113148320,2,0x18,0x1c);
    puRam00000001136c34f0 = puVar1;
  }
  return;
}



/* Entry: 106268be0; end: 106268c47; +[GetUserRepliesRequest descriptor] */

void FUN_106268be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c34f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6d20,
                        &PTR____CFConstantStringClassReference_110e472b8,&PTR_DAT_113148248,
                        &PTR_s_metadata_113148860,6,0x30,0x1c);
    puRam00000001136c34f8 = puVar1;
  }
  return;
}



/* Entry: 106268c48; end: 106268caf; +[GetUserRepliesResponse descriptor] */

void FUN_106268c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6d70,
                        &PTR____CFConstantStringClassReference_110e472d8,&PTR_DAT_113148248,
                        &PTR_s_requestId_1131484a0,3,0x20,0x1c);
    puRam00000001136c3500 = puVar1;
  }
  return;
}



/* Entry: 106268cb0; end: 106268d17; +[RepliesLookupRequest descriptor] */

void FUN_106268cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6dc0,
                        &PTR____CFConstantStringClassReference_110e472f8,&PTR_DAT_113148248,
                        &PTR_s_metadata_113148620,4,0x20,0x1c);
    puRam00000001136c3508 = puVar1;
  }
  return;
}



/* Entry: 106268d18; end: 106268d7f; +[RepliesLookupResponse descriptor] */

void FUN_106268d18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6e10,
                        &PTR____CFConstantStringClassReference_110e47318,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148360,2,0x18,0x1c);
    puRam00000001136c3510 = puVar1;
  }
  return;
}



/* Entry: 106268d80; end: 106268de7; +[DeleteUserRepliesRequest descriptor] */

void FUN_106268d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6e60,
                        &PTR____CFConstantStringClassReference_110e47338,&PTR_DAT_113148248,
                        &PTR_s_metadata_1131486a0,4,0x28,0x1c);
    puRam00000001136c3518 = puVar1;
  }
  return;
}



/* Entry: 106268de8; end: 106268e4f; +[DeleteUserRepliesResponse descriptor] */

void FUN_106268de8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6eb0,
                        &PTR____CFConstantStringClassReference_110e47358,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148260,1,0x10,0x1c);
    puRam00000001136c3520 = puVar1;
  }
  return;
}



/* Entry: 106268e50; end: 106268eb7; +[PostReplyRequest descriptor] */

void FUN_106268e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6f00,
                        &PTR____CFConstantStringClassReference_110e47378,&PTR_DAT_113148248,
                        &PTR_s_metadata_113148500,3,0x18,0x1c);
    puRam00000001136c3528 = puVar1;
  }
  return;
}



/* Entry: 106268eb8; end: 106268f1f; +[PostReplyResponse descriptor] */

void FUN_106268eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6f50,
                        &PTR____CFConstantStringClassReference_110e47398,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148560,3,0x18,0x1c);
    puRam00000001136c3530 = puVar1;
  }
  return;
}



/* Entry: 106268f20; end: 106268f87; +[ReplyReactRequest descriptor] */

void FUN_106268f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6fa0,
                        &PTR____CFConstantStringClassReference_110e473b8,&PTR_DAT_113148248,
                        &PTR_s_metadata_1131485c0,3,0x20,0x1c);
    puRam00000001136c3538 = puVar1;
  }
  return;
}



/* Entry: 106268f88; end: 106268fef; +[ReplyReactResponse descriptor] */

void FUN_106268f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad6ff0,
                        &PTR____CFConstantStringClassReference_110e473d8,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148280,1,0x10,0x1c);
    puRam00000001136c3540 = puVar1;
  }
  return;
}



/* Entry: 106268ff0; end: 106269057; +[UpdateReplyStateRequest descriptor] */

void FUN_106268ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7040,
                        &PTR____CFConstantStringClassReference_110e473f8,&PTR_DAT_113148248,
                        &PTR_s_metadata_1131483a0,2,0x18,0x1c);
    puRam00000001136c3548 = puVar1;
  }
  return;
}



/* Entry: 106269058; end: 1062690bf; +[UpdateReplyStateResponse descriptor] */

void FUN_106269058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7090,
                        &PTR____CFConstantStringClassReference_110e47418,&PTR_DAT_113148248,
                        &PTR_s_requestId_1131482a0,1,0x10,0x1c);
    puRam00000001136c3550 = puVar1;
  }
  return;
}



/* Entry: 1062690c0; end: 106269127; +[UpdateAllRepliesStateRequest descriptor] */

void FUN_1062690c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad70e0,
                        &PTR____CFConstantStringClassReference_110e47438,&PTR_DAT_113148248,
                        &PTR_s_metadata_1131489e0,7,0x38,0x1c);
    puRam00000001136c3558 = puVar1;
  }
  return;
}



/* Entry: 106269128; end: 10626918f; +[UpdateAllRepliesStateResponse descriptor] */

void FUN_106269128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7130,
                        &PTR____CFConstantStringClassReference_110e47458,&PTR_DAT_113148248,
                        &PTR_s_requestId_1131482c0,1,0x10,0x1c);
    puRam00000001136c3560 = puVar1;
  }
  return;
}



/* Entry: 106269190; end: 1062691f7; +[BatchGetReplyRequest descriptor] */

void FUN_106269190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7180,
                        &PTR____CFConstantStringClassReference_110e47478,&PTR_DAT_113148248,
                        &PTR_s_metadata_1131483e0,2,0x18,0x1c);
    puRam00000001136c3568 = puVar1;
  }
  return;
}



/* Entry: 1062691f8; end: 10626925f; +[BatchGetReplyResponse descriptor] */

void FUN_1062691f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad71d0,
                        &PTR____CFConstantStringClassReference_110e47498,&PTR_DAT_113148248,
                        &PTR_s_requestId_113148420,2,0x18,0x1c);
    puRam00000001136c3570 = puVar1;
  }
  return;
}



/* Entry: 106269260; end: 1062692c7; +[UpdateReplyModerationMetadataRequest descriptor] */

void FUN_106269260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7220,
                        &PTR____CFConstantStringClassReference_110e474b8,&PTR_DAT_113148248,
                        &PTR_s_metadata_113148460,2,0x18,0x1c);
    puRam00000001136c3578 = puVar1;
  }
  return;
}



/* Entry: 1062692c8; end: 10626932f; +[UpdateReplyModerationFeaturesResponse descriptor] */

void FUN_1062692c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7270,
                        &PTR____CFConstantStringClassReference_110e474d8,&PTR_DAT_113148248,
                        &PTR_s_requestId_1131482e0,1,0x10,0x1c);
    puRam00000001136c3580 = puVar1;
  }
  return;
}



/* Entry: 106269330; end: 106269397; +[UpdateThreadedRepliesCountRequest descriptor] */

void FUN_106269330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7388,
                        &PTR____CFConstantStringClassReference_110e474f8,&PTR_DAT_113148248,
                        &PTR_DAT_113148300,1,0x10,0x1c);
    puRam00000001136c3588 = puVar1;
  }
  return;
}



/* Entry: 106269398; end: 10626941b; +[UpdateThreadedRepliesCountRequest_Update descriptor] */

undefined * FUN_106269398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad73b0,
                        &PTR____CFConstantStringClassReference_110e47518,&PTR_DAT_113148248,
                        &PTR_s_snapId_1131487c0,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c3590 = puVar1;
  }
  return puRam00000001136c3590;
}



/* Entry: 10626941c; end: 106269483; +[AsyncPostReplyFollowup descriptor] */

void FUN_10626941c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7310,
                        &PTR____CFConstantStringClassReference_110e47538,&PTR_DAT_113148248,
                        &PTR_DAT_113148920,6,0x28,0x1c);
    puRam00000001136c3598 = puVar1;
  }
  return;
}



/* Entry: 106269484; end: 10626950f; +[IndexingMutation descriptor] */

undefined * FUN_106269484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c35a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad7360,
                        &PTR____CFConstantStringClassReference_110e47558,&PTR_DAT_113148248,
                        &PTR_DAT_113148ac0,8,0x48,0x1c);
    func_0x00010c229040();
    puRam00000001136c35a0 = puVar1;
  }
  return puRam00000001136c35a0;
}



/* Entry: 106269510; end: 10626958b;  */

undefined * FUN_106269510(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c35a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e47578,
                        &UNK_10ddda508,&UNK_10ddda540,4,FUN_10626958c,0);
    do {
      if (puRam00000001136c35a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c35a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c35a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c35a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c35a8;
}



/* Entry: 10626958c; end: 106269597;  */

bool FUN_10626958c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106269598; end: 1062697c3; -[SCContextPollsDynamicStickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106269598(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c9248;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
    lVar12 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112744318;
    _objc_loadWeakRetained(lVar14);
    lVar12 = param_1 + _DAT_11274431c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112744320;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1062697c4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1032c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_1062697c4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c103600();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_1062697c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_1062697c4();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c103280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ae0(puVar1,param_2,lVar14,lVar2,lVar3,lVar5,lVar7,lVar9,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
  _objc_release(lVar14);
  FUN_1062697c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar14);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062697c4; end: 1062697e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062697c4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112744314);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062697e8; end: 106269837; -[SCContextPollsDynamicStickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062697e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744320);
  _objc_destroyWeak(param_1 + _DAT_11274431c);
  _objc_destroyWeak(param_1 + _DAT_112744318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112744314);
  return;
}



/* Entry: 106269838; end: 106269897; -[SCContextPollsDynamicStickerView initWithFrame:] */

undefined1 * FUN_106269838(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f09f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16d4a0(puVar1);
    func_0x00010c219b60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106269898; end: 10626990f; -[SCContextPollsDynamicStickerView hitTest:withEvent:] */

void FUN_106269898(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f09f0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)0x0 || ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106269910; end: 106269b17; -[SCContextPollsDynamicStickerViewController initWithPollServices:featureSettingsService:onDemandResourceDownloader:pollInfo:pollTappableElement:creatorDisplayName:pollDidVoteLoggingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106269910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f09f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112744324;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744328);
    *(undefined **)((long)puVar1 + (long)_DAT_112744328) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274432c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112744330;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112744334;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744338);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744338) = uVar2;
    _objc_release(uVar4);
    func_0x00010beaa4c0(puVar1);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106269b18; end: 106269b47;  */

void FUN_106269b18(void)

{
  _objc_alloc(PTR_PTR_1126c9250);
  func_0x00010c011fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106269b48; end: 106269b97; -[SCContextPollsDynamicStickerViewController loadView] */

void FUN_106269b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9258;
  _objc_alloc(PTR_PTR_1126c9258);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106269b98; end: 10626a02b; -[SCContextPollsDynamicStickerViewController _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106269b98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar11 = (long)_DAT_11274433c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112744340);
  *(undefined **)(param_1 + _DAT_112744340) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR_PTR_1126c9260;
  _objc_alloc();
  lVar12 = (long)_DAT_11274432c;
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c26c560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec440();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c26c560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032100();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126c9260;
  _objc_alloc(PTR_PTR_1126c9260);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c26c560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec440();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c26c560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032100(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126c9268;
  _objc_alloc();
  func_0x00010c0135e0();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar7;
  _objc_release(uVar10);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar11));
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  _objc_initWeak(auStack_68,param_1);
  lVar11 = (long)_DAT_112744324;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1037c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c1032a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c0e1200(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0e0ec0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1037c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c1032a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab620(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(puVar1);
  return;
}



/* Entry: 10626a02c; end: 10626a073;  */

void FUN_10626a02c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd7c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626a074; end: 10626a227; -[SCContextPollsDynamicStickerViewController _updatePollOptionsWithVotes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626a074(undefined8 param_1,long param_2,undefined **param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    bVar1 = false;
  }
  else {
    param_1 = 0;
    _objc_retain(param_4);
    lVar8 = param_4;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_4);
        }
        uVar2 = *(ulong *)(lVar9 * 8);
        func_0x00010c29f060();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1f3c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          bVar1 = true;
          goto LAB_10626a178;
        }
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = param_4;
      func_0x00010bf52a60();
    }
    bVar1 = false;
LAB_10626a178:
    _objc_release(param_4);
  }
  _objc_release(param_4);
  lVar8 = param_4;
  func_0x00010bf529e0();
  if ((bVar1) && (lVar8 != 0)) {
    param_3 = &PTR___NSConcreteGlobalBlock_1109190d0;
    lVar4 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1109190d0);
    lVar8 = (long)_DAT_11274433c;
    func_0x00010c1deb60(*(undefined8 *)(param_2 + lVar8));
    _objc_release(lVar4);
  }
  else {
    lVar8 = (long)_DAT_11274433c;
  }
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar8));
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b5c88;
  _objc_retain(param_3);
  _objc_alloc(puVar5);
  func_0x00010c2a10a0(param_3);
  func_0x00010bf529e0(param_3);
  func_0x00010c11ff00(param_3);
  ppuVar6 = param_3;
  func_0x00010c29f060(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0320e0(param_1,puVar5);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10626a228; end: 10626a2df;  */

void FUN_10626a228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5c88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c2a10a0(param_3);
  func_0x00010bf529e0(param_3);
  func_0x00010c11ff00(param_3);
  uVar2 = param_3;
  func_0x00010c29f060(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0320e0(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10626a2e0; end: 10626a377; -[SCContextPollsDynamicStickerViewController viewDidLayoutSubviews] */

void FUN_10626a2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f09f8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  func_0x00010be494e0(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10626a378; end: 10626a5df; -[SCContextPollsDynamicStickerViewController _layoutPollStickerWithBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626a378(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
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
  double dStack_90;
  undefined8 uStack_88;
  
  uVar1 = *(ulong *)(param_5 + _DAT_112744330);
  func_0x00010bf06840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  dVar7 = param_1;
  dVar8 = param_4;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c23d0a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    if (0.0 < dVar7) {
      uVar3 = uVar1;
      func_0x00010c23d0a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      if (0.0 < dVar7) {
        uVar4 = uVar1;
        func_0x00010bf345e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2be880();
        if (!NAN(dVar7)) {
          uVar5 = uVar1;
          func_0x00010bf345e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2beba0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (!NAN(dVar7)) {
            lVar6 = (long)_DAT_11274433c;
            uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
            uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
            uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
            uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
            uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
            dVar7 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
            dStack_90 = dVar7;
            func_0x00010c219960(*(undefined8 *)(param_5 + lVar6),param_6,&uStack_b0);
            func_0x00010c23d620(*(undefined8 *)(param_5 + lVar6));
            uVar2 = uVar1;
            func_0x00010c23d0a0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe0640();
            _objc_release(uVar2);
            func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
            dVar8 = (param_4 * dVar7) / dVar8;
            func_0x00010c141a80(uVar1);
            _CGAffineTransformMakeRotation(&uStack_b0);
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            uStack_f8 = uStack_98;
            uStack_100 = uStack_a0;
            uStack_e8 = uStack_88;
            dStack_f0 = dStack_90;
            _CGAffineTransformScale(&uStack_e0,dVar8,dVar8,&uStack_110);
            uVar2 = uVar1;
            func_0x00010bf345e0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2be880();
            param_3 = dVar8 * param_3;
            uVar3 = uVar1;
            func_0x00010bf345e0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2beba0();
            func_0x00010c17a6a0(param_1 + param_3,param_2 + dVar8 * param_4,
                                *(undefined8 *)(param_5 + lVar6));
            _objc_release(uVar3);
            _objc_release(uVar2);
            uStack_108 = uStack_d8;
            uStack_110 = uStack_e0;
            uStack_f8 = uStack_c8;
            uStack_100 = uStack_d0;
            uStack_e8 = uStack_b8;
            dStack_f0 = (double)uStack_c0;
            func_0x00010c219960(*(undefined8 *)(param_5 + lVar6),param_6,&uStack_110);
          }
          goto LAB_10626a5b0;
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
LAB_10626a5b0:
  _objc_release(uVar1);
  return;
}



/* Entry: 10626a5e0; end: 10626a70f; -[SCContextPollsDynamicStickerViewController pollOptionsView:didSelectOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626a5e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744328);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c10d9e0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10626a710; end: 10626a75b;  */

void FUN_10626a710(long param_1,int param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010beea440(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626a75c; end: 10626a913; -[SCContextPollsDynamicStickerViewController _voteOnOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626a75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11274433c;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c158f80(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744324);
  func_0x00010c1037c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec440(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274432c);
  func_0x00010c1032a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2a1040(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10626a914;
  pcStack_60 = FUN_10626a93c;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744338);
  _objc_retainBlock();
  uStack_58 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10626a914; end: 10626a93b;  */

void FUN_10626a914(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10626a93c; end: 10626a95f;  */

void FUN_10626a93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10626a960; end: 10626a9ff; -[SCContextPollsDynamicStickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626a960(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744338,0);
  _objc_storeStrong(param_1 + _DAT_112744334,0);
  _objc_storeStrong(param_1 + _DAT_112744330,0);
  _objc_storeStrong(param_1 + _DAT_11274432c,0);
  _objc_storeStrong(param_1 + _DAT_112744340,0);
  _objc_storeStrong(param_1 + _DAT_112744328,0);
  _objc_storeStrong(param_1 + _DAT_11274433c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744324,0);
  return;
}



/* Entry: 10626aa00; end: 10626aaa3; -[SCContextPollsVoteAlertController initWithFeatureSettingsService:onDemandResourceDownloader:] */

undefined1 *
FUN_10626aa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0a00;
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



/* Entry: 10626aaa4; end: 10626aef3; -[SCContextPollsVoteAlertController presentPollVoteAlertOnViewControllerIfNeeded:creatorDisplayName:completion:] */

void FUN_10626aaa4(long param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c1037a0();
  _objc_release(uVar1);
  if ((int)uVar12 == 0) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aed70;
    ppuVar2 = &PTR____CFConstantStringClassReference_110e475d8;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e475d8,
                        &PTR____CFConstantStringClassReference_110e475f8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar12);
    _objc_retain(param_5);
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar4 = PTR_PTR_1126aed70;
    ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar5 = PTR_PTR_1126aebd8;
    func_0x00010c14e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar7);
    _objc_retain(puVar6);
    func_0x00010bf88c20(uVar1);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(uVar1);
    puVar8 = param_4;
    func_0x00010c08fa60();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 == (undefined *)0x0) {
      func_0x00010723ca78();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010723ca60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar7;
    }
    puVar7 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01cb60();
    puVar9 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefea0(puVar9);
    _objc_release(puVar10);
    func_0x00010c211b40(puVar9);
    func_0x00010c10eda0(param_3);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(uVar12);
    _objc_release(uVar12);
  }
  else if (param_5 != 0) {
    param_2 = 1;
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  uVar12 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar12);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar12);
  _objc_release(uVar1);
  return;
}



/* Entry: 10626aef4; end: 10626af8f;  */

void FUN_10626aef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10626af90; end: 10626b04b;  */

void FUN_10626af90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1deca0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010626afc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10626b04c; end: 10626b077;  */

void FUN_10626b04c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010626b05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 10626b078; end: 10626b0a7; -[SCContextPollsVoteAlertController .cxx_destruct] */

void FUN_10626b078(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10626b0a8; end: 10626b0b3; -[SCFeatureSettingsService getPollsVotingAcknowledged] */

void FUN_10626b0a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e47618);
  return;
}



/* Entry: 10626b0b4; end: 10626b0bf; -[SCFeatureSettingsService pollsVotingAcknowledgedServerParam] */

undefined ** FUN_10626b0b4(void)

{
  return &PTR____CFConstantStringClassReference_110e47618;
}



/* Entry: 10626b0c0; end: 10626b0cf; -[SCFeatureSettingsService setPollsVotingAcknowledged:] */

void FUN_10626b0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e47618,param_3);
  return;
}



/* Entry: 10626b0d0; end: 10626b0d7; -[SCFeatureSettingsService interactions_poll_voting_acknowledged_client_value:] */

undefined * FUN_10626b0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10626b0d8; end: 10626b0df; -[SCFeatureSettingsService interactions_poll_voting_acknowledged_server_value:] */

void FUN_10626b0d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10626b0e0; end: 10626b0ef; -[SCFeatureSettingsService pollsVotingAcknowledged] */

void FUN_10626b0e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e47618,0);
  return;
}



/* Entry: 10626b0f0; end: 10626b2e7; -[SCContentModerationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626b0f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274434c);
  *(undefined **)(param_1 + _DAT_11274434c) = puVar1;
  _objc_release(uVar6);
  lVar2 = param_1 + _DAT_112744350;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + _DAT_112744354;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e0e60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar5);
  return;
}



/* Entry: 10626b2e8; end: 10626b4fb;  */

void FUN_10626b2e8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9270;
  func_0x00010c2532a0(PTR_PTR_1126c9270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9270;
  func_0x00010c247880(PTR_PTR_1126c9270);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c9270;
  func_0x00010c27dec0(PTR_PTR_1126c9270);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    func_0x00010bdd0940(param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626b4fc; end: 10626b697; -[SCContentModerationEntryPoint _canRenderModerationLabelWithModerationSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10626b4fc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112744354;
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf4f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25b7c0();
  if (lVar6 == 0x17) {
    bVar1 = true;
  }
  else {
    lVar6 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf4f0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c25b7c0();
    bVar1 = lVar9 == 0;
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c067fc0(param_3);
    bVar2 = lVar3 == 0;
  }
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf4f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d360();
  if (lVar5 != 5) {
    param_1 = param_1 + lVar10;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010bf4f0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c29d360();
    bVar2 = (bool)(lVar6 != 0x39 & (bVar1 ^ 1U) | bVar2);
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 10626b698; end: 10626b95f; -[SCContentModerationEntryPoint _attachViewControllerIfNeededWithContentModeration:moderationSource:moderationType:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626b698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar11 = param_1;
  func_0x00010bdd9de0(param_1,param_2,param_4);
  if (((int)lVar11 != 0) && (lVar11 = (long)_DAT_112744358, *(long *)(param_1 + lVar11) == 0)) {
    lVar1 = param_1 + _DAT_11274435c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112744360;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf3f680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar9 = (long)_DAT_112744354;
    lVar1 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf4f0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112744364;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126c9278;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112744368;
    _objc_loadWeakRetained(lVar1);
    uVar12 = *(undefined8 *)(param_1 + _DAT_11274436c);
    _objc_retain(uVar12);
    func_0x00010c040bc0(puVar8,param_2,lVar7,lVar1,param_3,lVar2,lVar3,uVar12,lVar4,param_5,param_6)
    ;
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar8;
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    func_0x00010c173ee0(*(undefined8 *)(param_1 + lVar11),param_2,puVar8);
    param_1 = param_1 + lVar9;
    _objc_loadWeakRetained(param_1);
    lVar11 = param_1;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10626b960; end: 10626b9fb; -[SCContentModerationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626b960(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + _DAT_112744358) != 0) {
    lVar1 = param_1 + _DAT_112744354;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4ab60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126f0a08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10626b9fc; end: 10626ba93; -[SCContentModerationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626b9fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274436c,0);
  _objc_destroyWeak(param_1 + _DAT_112744350);
  _objc_destroyWeak(param_1 + _DAT_112744360);
  _objc_destroyWeak(param_1 + _DAT_11274435c);
  _objc_destroyWeak(param_1 + _DAT_112744368);
  _objc_destroyWeak(param_1 + _DAT_112744364);
  _objc_destroyWeak(param_1 + _DAT_112744354);
  _objc_storeStrong(param_1 + _DAT_11274434c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744358,0);
  return;
}



/* Entry: 10626ba94; end: 10626bceb; -[SCOperaModerationView initWithRuntime:composerCoreUIServices:alertContainer:contextSessionParams:blizzardLogger:delegate:cofStore:moderationType:managedViewController:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10626ba94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126f0a10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744370;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744374;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744378;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274437c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744380;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112744384,param_8);
    lVar3 = (long)_DAT_112744388;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274438c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112744390,param_11);
    lVar3 = (long)_DAT_112744394;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    func_0x00010bf571c0(puVar1);
  }
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



/* Entry: 10626bcec; end: 10626c13b; -[SCOperaModerationView createModerationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626bcec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112744374);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar3;
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_90,param_1);
  puVar4 = PTR_PTR_1126c9280;
  _objc_alloc();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10626c13c;
  puStack_a0 = &UNK_110843540;
  puVar11 = auStack_90;
  _objc_copyWeak(auStack_98);
  func_0x00010bff2940();
  func_0x00010c171b20();
  func_0x00010c17df40(puVar4);
  puVar5 = PTR_PTR_1126afe50;
  puStack_c8 = puVar4;
  _objc_alloc();
  func_0x00010c040b80();
  lVar2 = param_1 + _DAT_112744390;
  puStack_c0 = puVar5;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1c1bc0(puStack_c0);
  _objc_release(lVar2);
  func_0x00010c1cba60(puStack_c8);
  puVar4 = PTR_PTR_1126c9288;
  _objc_alloc();
  func_0x00010c061d40();
  lVar1 = (long)_DAT_112744398;
  uVar12 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = puVar4;
  _objc_release(uVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befbb60(param_1);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d8 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_e0 = lVar2;
  func_0x00010c2439e0();
  uVar12 = 0x4028000000000000;
  if ((int)lVar3 != 0) {
    uVar12 = 0;
  }
  uVar6 = uStack_d8;
  func_0x00010bf493c0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  uStack_e8 = uVar6;
  uStack_88 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar1);
  uStack_80 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar1);
  uStack_78 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2439e0();
  uVar13 = 0xc060000000000000;
  if ((int)param_1 != 0) {
    uVar13 = 0xc020000000000000;
  }
  uVar10 = uVar9;
  func_0x00010bf493c0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar4);
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(lVar2);
  _objc_release(uVar7);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(uStack_d8);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  lVar2 = lStack_d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  lVar3 = lVar2;
  __Unwind_Resume(lVar2);
  pcStack_f8 = FUN_10626c13c;
  uStack_120 = uVar10;
  uStack_118 = uVar8;
  puStack_110 = puVar4;
  lStack_108 = lVar2;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x10626c1e4;
  puStack_138 = &UNK_110841fb0;
  _objc_copyWeak(auStack_128,lVar3 + 0x20);
  _objc_retain(puVar11);
  puStack_130 = puVar11;
  func_0x000100162d98("APPSTORE",&puStack_150);
  _objc_release(puStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar11);
  return;
}



/* Entry: 10626c13c; end: 10626c29b;  */

void FUN_10626c13c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10626c1e4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10626c29c; end: 10626c303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626c29c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112744384;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135f80(lVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10626c304; end: 10626c503; -[SCOperaModerationView _imageFromVideoURL:atTime:completion:] */

void FUN_10626c304(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long in_x4;
  undefined8 in_x5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = in_x4;
  _objc_retain(in_x4);
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x4);
  puVar5 = puVar3;
  func_0x00010bfbf180(puVar7);
  _objc_release(puVar3);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(in_x5);
  puVar7 = (undefined *)0x0;
  if ((puVar5 != (undefined *)0x0) && (lVar4 == 0)) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(puVar1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar7,in_x5);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 10626c504; end: 10626c627; -[SCOperaModerationView _generateAssetFromVideoURL:atTime:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10626c504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744394);
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10626c628; end: 10626c67b;  */

void FUN_10626c628(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82860();
  _objc_release(param_1);
  return;
}



/* Entry: 10626c67c; end: 10626c787; -[SCOperaModerationView _processVideoURL:atTime:completion:] */

void FUN_10626c67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  func_0x00010be37320(param_1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10626c788; end: 10626c7f3;  */

void FUN_10626c788(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2aac0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10626c7f4; end: 10626c98b; -[SCOperaModerationView _handleImageResult:error:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10626c7f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                   long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_3 == 0) || (param_4 != (undefined *)0x0)) {
    if (param_4 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      _objc_retain(param_4);
      puVar3 = param_4;
    }
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,puVar3);
    }
  }
  else {
    puVar3 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010b971468();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,puVar2,0);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + (long)_DAT_11274437c);
  func_0x00010c08bda0();
  uVar4 = 1;
  if (lVar5 == 0x1b) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar5 != 0x1e) {
    uVar1 = uVar4;
  }
  return (ulong)uVar1;
}



/* Entry: 10626c98c; end: 10626c9bf; -[SCOperaModerationView snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10626c98c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11274437c);
  func_0x00010c08bda0();
  uVar3 = 1;
  if (lVar2 == 0x1b) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0x1e) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 10626c9c0; end: 10626ca0b; -[SCOperaModerationView snapType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10626c9c0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11274437c);
  func_0x00010c08bda0();
  if ((uVar1 < 10) || (uVar1 == 0x22)) {
    uVar2 = 0;
  }
  else if (uVar1 == 0x1b) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 10626ca0c; end: 10626ca4b; -[SCOperaModerationView _isSpotlight] */

bool FUN_10626ca0c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c2439e0();
  if ((int)uVar2 == 3) {
    bVar1 = true;
  }
  else {
    func_0x00010c2439e0(param_1);
    bVar1 = (int)param_1 == 2;
  }
  return bVar1;
}


