/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106846fb4; end: 1068470ab; -[SCStandardExternalShareActionRouter .cxx_destruct] */

void FUN_106846fb4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1068470ac; end: 1068472bb;  */

void FUN_1068470ac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e61958;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e61958,
                      &PTR____CFConstantStringClassReference_110e61498,0);
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



/* Entry: 1068472bc; end: 10684732f; -[SCGrapheneOffPlatformShareServicesMetric2 init] */

undefined1 * FUN_1068472bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3728;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106847330; end: 1068474a3;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106847330(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
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
    puVar1 = &UNK_110943d98;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110943de8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110943e38;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_110943e88;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar5 = &uStack_280;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar4;
    puVar2 = puVar6;
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
      puVar1 = &UNK_110943ed8;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar2 = (undefined *)puVar5;
        param_4 = puVar6;
      }
    }
    puVar3 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Unwind_Resume();
    puVar5 = &uStack_340;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar1;
    puVar6 = puVar2;
    puVar7 = param_4;
    puVar8 = param_5;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_320,puVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_308,puVar3);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_2f0,puVar3);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
      puVar4 = &UNK_110943f28;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x00010007e5dc(&puStack_328);
      lVar10 = 0;
      puVar6 = (undefined *)puVar5;
      puVar7 = param_5;
      do {
        if ((&cStack_2d9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_340;
      } while (lVar10 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar2);
    puVar3 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_320);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      __Unwind_Resume();
      lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar4);
      _objc_retain(puVar6);
      _objc_retain(puVar7);
      if (puVar3 != (undefined *)0x0) {
        plVar9 = *(long **)(puVar3 + 8);
        _objc_retain(puVar4);
        if (puVar4 == (undefined *)0x0) {
          puVar1 = &UNK_10f39c026;
        }
        else {
          puVar1 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        func_0x00010002b838(auStack_3e0,puVar1);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar1 = &UNK_10f39c026;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar1 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_3c8,puVar1);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar1 = &UNK_10f39c026;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar1 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_3b0,puVar1);
        uStack_400 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_398,3);
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110943f78,&uStack_400,puVar8);
        puStack_3e8 = (undefined1 *)&uStack_400;
        func_0x00010007e5dc(&puStack_3e8);
        lVar10 = 0;
        do {
          if ((&cStack_399)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
          unaff_x24 = &uStack_400;
        } while (lVar10 != -0x48);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar1 = puVar4;
      _objc_release(puVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        do {
          unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
        } while (unaff_x24 != (undefined8 *)auStack_3e0);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        __Unwind_Resume(puVar1);
        _objc_alloc(PTR_PTR_1126b5648);
        func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1068474a4; end: 106847617;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_1068474a4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
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
    puVar1 = &UNK_110943de8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110943e38;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110943e88;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar2;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_110943ed8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar2;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar2;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar5 = &uStack_2c0;
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar4;
    puVar2 = puVar6;
    puVar7 = param_4;
    puVar8 = param_5;
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(param_4);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_2a0,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_288,puVar1);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar1 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_270,puVar1);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
      puVar1 = &UNK_110943f28;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      lVar10 = 0;
      puVar2 = (undefined *)puVar5;
      puVar7 = param_5;
      do {
        if ((&cStack_259)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_2c0;
      } while (lVar10 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar6);
    puVar3 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_2a0);
    _objc_release(param_4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    __Unwind_Resume();
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_360,puVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_348,puVar3);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar3 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar3 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_330,puVar3);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_318,3);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110943f78,&uStack_380,puVar8);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar10 = 0;
      do {
        if ((&cStack_319)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_380;
      } while (lVar10 != -0x48);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar3 = puVar1;
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_360);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar1);
      __Unwind_Resume(puVar3);
      _objc_alloc(PTR_PTR_1126b5648);
      func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 106847618; end: 10684778b;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106847618(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
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
    puVar1 = &UNK_110943e38;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110943e88;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110943ed8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar5 = &uStack_240;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar2;
  puVar7 = param_4;
  puVar8 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_4);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_220,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_208,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_1f0,puVar3);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar4 = &UNK_110943f28;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar10 = 0;
    puVar6 = (undefined *)puVar5;
    puVar7 = param_5;
    do {
      if ((&cStack_1d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_220);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume();
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_2e0,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_2c8,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_2b0,puVar1);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110943f78,&uStack_300,puVar8);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar10 = 0;
      do {
        if ((&cStack_299)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_300;
      } while (lVar10 != -0x48);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar1 = puVar4;
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_2e0);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      __Unwind_Resume(puVar1);
      _objc_alloc(PTR_PTR_1126b5648);
      func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10684778c; end: 1068478ff;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_10684778c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
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
    puVar1 = &UNK_110943e88;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110943ed8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar5 = &uStack_1c0;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar4;
    puVar2 = puVar6;
    puVar7 = param_4;
    puVar8 = param_5;
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(param_4);
    if (puVar3 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_1a0,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_188,puVar1);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar1 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_170,puVar1);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
      puVar1 = &UNK_110943f28;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      func_0x00010007e5dc(&puStack_1a8);
      lVar10 = 0;
      puVar2 = (undefined *)puVar5;
      puVar7 = param_5;
      do {
        if ((&cStack_159)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_1c0;
      } while (lVar10 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar6);
    puVar3 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_1a0);
      _objc_release(param_4);
      _objc_release(puVar6);
      _objc_release(puVar4);
      __Unwind_Resume();
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      _objc_retain(puVar7);
      if (puVar3 != (undefined *)0x0) {
        plVar9 = *(long **)(puVar3 + 8);
        _objc_retain(puVar1);
        if (puVar1 == (undefined *)0x0) {
          puVar3 = &UNK_10f39c026;
        }
        else {
          puVar3 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        func_0x00010002b838(auStack_260,puVar3);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar3 = &UNK_10f39c026;
        }
        else {
          _objc_retainAutorelease(puVar2);
          puVar3 = puVar2;
          func_0x00010bdc3520(puVar2);
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_248,puVar3);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar3 = &UNK_10f39c026;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar3 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_230,puVar3);
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_218,3);
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110943f78,&uStack_280,puVar8);
        puStack_268 = (undefined1 *)&uStack_280;
        func_0x00010007e5dc(&puStack_268);
        lVar10 = 0;
        do {
          if ((&cStack_219)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
          unaff_x24 = &uStack_280;
        } while (lVar10 != -0x48);
      }
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar3 = puVar1;
      _objc_release(puVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
        ___stack_chk_fail();
        _objc_release(puVar7);
        do {
          unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
        } while (unaff_x24 != (undefined8 *)auStack_260);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar1);
        __Unwind_Resume(puVar3);
        _objc_alloc(PTR_PTR_1126b5648);
        func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106847900; end: 106847a73;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106847900(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
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
    puVar1 = &UNK_110943ed8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  puVar7 = param_4;
  puVar8 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_108,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,puVar2);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar3 = &UNK_110943f28;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar10 = 0;
    puVar6 = (undefined *)puVar5;
    puVar7 = param_5;
    do {
      if ((&cStack_d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_120);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    __Unwind_Resume();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puVar2 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_1e0,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_1c8,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar1 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_1b0,puVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110943f78,&uStack_200,puVar8);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar10 = 0;
      do {
        if ((&cStack_199)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = &uStack_200;
      } while (lVar10 != -0x48);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar1 = puVar3;
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_1e0);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      __Unwind_Resume(puVar1);
      _objc_alloc(PTR_PTR_1126b5648);
      func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 106847a74; end: 106847d33;  */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106847a74(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  puVar6 = param_4;
  puVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110943f28;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    puVar4 = (undefined *)puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_148,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110943f78,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar7 = 0;
    do {
      if ((&cStack_119)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar7 != -0x48);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar3 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_160);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
    __Unwind_Resume(puVar3);
    _objc_alloc(PTR_PTR_1126b5648);
    func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106847d34; end: 106847ff3;  */

/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106847d34(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110943f78,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar2 = 0;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(puVar1);
    _objc_alloc(PTR_PTR_1126b5648);
    func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106847ff4; end: 10684801f; +[SCGrapheneShareSheetMetric shareSheetAvailable] */

void FUN_106847ff4(void)

{
  _objc_alloc(PTR_PTR_1126b5648);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106848020; end: 10684804b; +[SCGrapheneShareSheetMetric shareSheetOpened] */

void FUN_106848020(void)

{
  _objc_alloc(PTR_PTR_1126b5648);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10684804c; end: 106848077; +[SCGrapheneShareSheetMetric shareSheetSelected] */

void FUN_10684804c(void)

{
  _objc_alloc(PTR_PTR_1126b5648);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106848078; end: 1068480a3; +[SCGrapheneShareSheetMetric shareSheetContentGenerated] */

void FUN_106848078(void)

{
  _objc_alloc(PTR_PTR_1126b5648);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068480a4; end: 106848143; -[SCGrapheneShareSheetMetric description] */

void FUN_1068480a4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e61b98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e61b98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f3730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106848144; end: 1068482a3; -[SCGrapheneRegistry shareSheetGraphene] */

void FUN_106848144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1068481cc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4680 != -1) {
    func_0x00010002a2fc(0x1136c4680,&puStack_48);
  }
  uVar1 = uRam00000001136c4678;
  _objc_retain(uRam00000001136c4678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068482a4; end: 10684835f; -[SCCommunityPillTapScope initWithGroupId:presentingViewController:delegate:] */

undefined1 *
FUN_1068482a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106848360; end: 10684844b; -[SCCommunityPillTapScope initWithGroupId:userId:presentingViewController:delegate:] */

undefined1 *
FUN_106848360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3738;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684844c; end: 106848453; -[SCCommunityPillTapScope groupId] */

undefined8 FUN_10684844c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106848454; end: 10684845b; -[SCCommunityPillTapScope userId] */

undefined8 FUN_106848454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10684845c; end: 106848473; -[SCCommunityPillTapScope presentingViewController] */

void FUN_10684845c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106848474; end: 10684848b; -[SCCommunityPillTapScope delegate] */

void FUN_106848474(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10684848c; end: 1068484cb; -[SCCommunityPillTapScope .cxx_destruct] */

void FUN_10684848c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068484cc; end: 1068484f7; +[SCGraphenePayToPromotePushMetric payToPromotePushView] */

void FUN_1068484cc(void)

{
  _objc_alloc(PTR_PTR_1126ce540);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068484f8; end: 106848523; +[SCGraphenePayToPromotePushMetric payToPromotePushTapped] */

void FUN_1068484f8(void)

{
  _objc_alloc(PTR_PTR_1126ce540);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106848524; end: 1068485c3; -[SCGraphenePayToPromotePushMetric description] */

void FUN_106848524(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e61c38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e61c38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f3740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1068485c4; end: 10684870f; -[SCGrapheneRegistry payToPromotePushGraphene] */

void FUN_1068485c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10684864c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c4690 != -1) {
    func_0x00010002a2fc(0x1136c4690,&puStack_48);
  }
  uVar1 = uRam00000001136c4688;
  _objc_retain(uRam00000001136c4688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106848710; end: 106848783; -[SCCameraCompositeFeatureMetricCoordinatorImpl initWithCoordinators:] */

undefined1 * FUN_106848710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3748;
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



/* Entry: 106848784; end: 10684888b; -[SCCameraCompositeFeatureMetricCoordinatorImpl resetMetrics] */

void FUN_106848784(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar3 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139020();
      _objc_release(uVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar8 = *(long *)(lVar8 + 8);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar5 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c28fc80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 8,0);
  return;
}



/* Entry: 10684888c; end: 1068489e7; -[SCCameraCompositeFeatureMetricCoordinatorImpl usageMetrics] */

void FUN_10684888c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c28fc80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1068489e8; end: 1068489f3; -[SCCameraCompositeFeatureMetricCoordinatorImpl .cxx_destruct] */

void FUN_1068489e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068489f4; end: 106848a27; -[SCCameraDefaultFeatureActivatorImpl dealloc] */

void FUN_1068489f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3750;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106848a28; end: 106848b33; -[SCCameraDefaultFeatureActivatorImpl resetMetrics] */

void FUN_106848a28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_108 + lVar9 * 8);
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c139020();
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar1 = *(long *)(lVar1 + 0x28);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_220;
    do {
      lVar9 = 0;
      do {
        if (*plStack_220 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar5 = *(long *)(lStack_228 + lVar9 * 8);
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c28fc80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          func_0x00010bef7f60(puVar4,param_2,lVar6);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar7 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bdc4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106848b34; end: 106848c97; -[SCCameraDefaultFeatureActivatorImpl usageMetrics] */

void FUN_106848b34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c28fc80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010bef7f60(puVar1,param_2,lVar5);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdc4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106848c98; end: 106848cc3;  */

void FUN_106848c98(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106848cc4; end: 106848d73; -[SCCameraDefaultFeatureActivatorImpl cancelFeatureActivation] */

void FUN_106848cc4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x106848d1c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 106848d74; end: 106848db3;  */

void FUN_106848d74(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 1;
  func_0x00010bf2dba0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106848db4; end: 106848e87; -[SCCameraDefaultFeatureActivatorImpl _activateFeatures] */

void FUN_106848db4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf29600();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c09fac0(*(undefined8 *)(param_1 + 8));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelFeatureActivation_1125a92a0);
  return;
}



/* Entry: 106848e88; end: 106848e97;  */

void FUN_106848e88(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 1;
  return;
}



/* Entry: 106848e98; end: 106848faf;  */

void FUN_106848e98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x31) & 1) == 0) {
    param_1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lVar5 * 8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef6e0();
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106848fb0; end: 106849027; -[SCCameraDefaultFeatureActivatorImpl .cxx_destruct] */

void FUN_106848fb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106849028; end: 106849143; -[SCCameraFeatureAnimatableTransitionCoordinatorImpl animateFeatureTransition:] */

void FUN_106849028(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf0ade0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0e0300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c24dc60(*(undefined8 *)(uVar6 * 8));
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bde9960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c069d00(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106849144; end: 106849233; -[SCCameraFeatureCapabilitiesImpl invalidate] */

void FUN_106849144(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bde9960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c069d00(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
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



/* Entry: 106849234; end: 106849293; -[SCCameraFeatureCapabilitiesImpl .cxx_destruct] */

void FUN_106849234(long param_1)

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



/* Entry: 106849294; end: 10684933f; -[SCCameraFeatureCapabilityCoordinator assertIfNotResolved] */

byte FUN_106849294(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106849340;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_70);
  bVar1 = *(byte *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 106849340; end: 106849353;  */

void FUN_106849340(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20);
  return;
}



/* Entry: 106849354; end: 1068493ab; -[SCCameraFeatureCapabilityCoordinator invalidate] */

void FUN_106849354(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1068493ac;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 1068493ac; end: 1068493b7;  */

void FUN_1068493ac(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x21) = 0;
  return;
}



/* Entry: 1068493b8; end: 106849433; -[SCCameraFeatureCapabilityCoordinator .cxx_destruct] */

void FUN_1068493b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106849434; end: 1068495ab; -[SCCameraGestureInteractionCoordinatorImpl handleInteractionEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106849434(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  long lVar8;
  long unaff_x25;
  long lVar9;
  ulong unaff_x26;
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
  ulong uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined1 *puStack_148;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf0ade0();
  if ((uVar1 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    param_1 = *(ulong *)(param_1 + (long)_DAT_112751be8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf52a60();
    if (uVar1 == 0) {
      puVar6 = (undefined1 *)0x1;
      uVar1 = unaff_x22;
    }
    else {
      unaff_x25 = *plStack_120;
      puVar6 = (undefined1 *)0x1;
      do {
        unaff_x26 = 0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x23 = *(undefined1 **)(lStack_128 + unaff_x26 * 8);
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = param_3;
          puVar5 = (undefined8 *)unaff_x23;
          func_0x00010c114a00();
          _objc_release(unaff_x23);
          if (unaff_x24 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
            goto LAB_10684955c;
          }
          unaff_x26 = unaff_x26 + 1;
        } while (uVar1 != unaff_x26);
        uVar1 = param_1;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
LAB_10684955c:
    _objc_release(param_1);
  }
  else {
    puVar6 = (undefined1 *)0x1;
    puVar5 = (undefined8 *)puVar7;
    uVar1 = unaff_x22;
  }
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1068495ac;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = uVar1;
  puStack_158 = puVar6;
  uStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar6 = puVar7;
  func_0x00010bf0ade0();
  if (((ulong)puVar6 & 1) == 0) {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    lVar2 = *(long *)(puVar7 + _DAT_112751be8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar7 = (undefined1 *)0x0;
    if (lVar3 != 0) {
      lVar8 = *plStack_240;
      do {
        lVar9 = 0;
        do {
          if (*plStack_240 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(undefined8 *)(lStack_248 + lVar9 * 8);
          func_0x00010bfa1820(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined1 *)puVar5;
          func_0x00010c22e4a0(puVar5,param_2,uVar4);
          _objc_release(uVar4);
          if (((ulong)puVar7 & 1) != 0) {
            puVar7 = (undefined1 *)0x1;
            goto LAB_1068496c4;
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_250,auStack_208,0x10);
      } while (lVar3 != 0);
      puVar7 = (undefined1 *)0x0;
    }
LAB_1068496c4:
    _objc_release(lVar2);
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    puVar7 = (undefined1 *)puVar5;
    func_0x00010bf0ade0();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010c0e0300(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)puVar5;
      func_0x00010c246ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar7 = (undefined1 *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 1068495ac; end: 10684970f; -[SCCameraGestureInteractionCoordinatorImpl shouldBlockInteractionEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1068495ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010bf0ade0();
  if ((uVar4 & 1) == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = *(long *)(param_1 + (long)_DAT_112751be8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    uVar4 = 0;
    if (lVar2 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar6 * 8);
          func_0x00010bfa1820(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_3;
          func_0x00010c22e4a0(param_3,param_2,uVar3);
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) {
            uVar4 = 1;
            goto LAB_1068496c4;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
      uVar4 = 0;
    }
LAB_1068496c4:
    _objc_release(lVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar4 = param_3;
  func_0x00010bf0ade0();
  if ((uVar4 & 1) == 0) {
    func_0x00010c0e0300(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c246ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return uVar4;
}



/* Entry: 106849710; end: 106849777; -[SCCameraGestureInteractionCoordinatorImpl _sortedReferences] */

void FUN_106849710(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf0ade0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0e0300(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c246ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106849778; end: 1068497d3;  */

ulong FUN_106849778(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  func_0x00010c13b6e0();
  lVar1 = param_2;
  func_0x00010c13b6e0();
  _objc_release(param_2);
  uVar2 = (ulong)(lVar1 < param_1);
  if (param_1 < lVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 1068497d4; end: 1068497e7; -[SCCameraGestureInteractionCoordinatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068497d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751be8,0);
  return;
}



/* Entry: 1068497e8; end: 1068497ff; -[SCCameraGestureResponderReference feature] */

void FUN_1068497e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106849800; end: 106849807; -[SCCameraGestureResponderReference responderChainPriority] */

undefined8 FUN_106849800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106849808; end: 106849817; -[SCCameraLegacyDelegateProvidingActivatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106849808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112751bf4);
  return;
}



/* Entry: 106849818; end: 1068498cb; -[SCCameraPrivateFeatureContainerImpl insertFeature:withContext:] */

void FUN_106849818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068498cc;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068498cc; end: 1068498db;  */

void FUN_1068498cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068498dc; end: 10684996f; -[SCCameraPrivateFeatureContainerImpl insertFeature:withClassContext:] */

void FUN_1068498dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106849970;
  puStack_50 = &UNK_1109441e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c09fac0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106849970; end: 106849983;  */

void FUN_106849970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106849984; end: 10684999b; -[SCCameraPrivateFeatureContainerImpl debugFeatureArray] */

void FUN_106849984(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10684999c; end: 1068499b3; -[SCCameraPrivateFeatureContainerImpl debugFeatureDictionary] */

void FUN_10684999c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068499b4; end: 1068499ef; -[SCCameraPrivateFeatureContainerImpl .cxx_destruct] */

void FUN_1068499b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068499f0; end: 106849a63; -[SCCameraServiceImpl initWithCameraServiceFuture:] */

undefined1 * FUN_1068499f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3788;
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



/* Entry: 106849a64; end: 106849b37; -[SCCameraServiceImpl startCamera:completion:] */

void FUN_106849a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106849b38;
  puStack_48 = &UNK_110944218;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2,param_2,&puStack_60,uVar1,1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106849b38; end: 106849b73;  */

void FUN_106849b38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106849b74; end: 106849c23; -[SCCameraServiceImpl stopCamera:] */

void FUN_106849b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106849c24;
  puStack_40 = &UNK_110944248;
  uVar1 = param_3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2,param_2,&puStack_58,uVar1,1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106849c24; end: 106849c5f;  */

void FUN_106849c24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106849c60; end: 106849d0f; -[SCCameraServiceImpl stopCameraSofty:] */

void FUN_106849c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106849d10;
  puStack_40 = &UNK_110944248;
  uVar1 = param_3;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2,param_2,&puStack_58,uVar1,1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106849d10; end: 106849d4b;  */

void FUN_106849d10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106849d4c; end: 106849d57; -[SCCameraServiceImpl .cxx_destruct] */

void FUN_106849d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106849d58; end: 106849e23; -[SCCameraUIScopeViewContainerImpl modalUIContainerImmediateValue] */

void FUN_106849d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1008094dc;
  puStack_30 = &UNK_100809520;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106849e24;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106849e24; end: 106849e57;  */

void FUN_106849e24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106849e58; end: 106849f23; -[SCCameraUIScopeViewContainerImpl nonAnimatedModalUIContainerImmediateValue] */

void FUN_106849e58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1008094dc;
  puStack_30 = &UNK_100809520;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106849f24;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106849f24; end: 106849f57;  */

void FUN_106849f24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106849f58; end: 10684a023; -[SCCameraUIScopeViewContainerImpl trayContainerImmediateValue] */

void FUN_106849f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1008094dc;
  puStack_30 = &UNK_100809520;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10684a024;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x50),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10684a024; end: 10684a057;  */

void FUN_10684a024(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684a058; end: 10684a05f; -[SCCameraUIScopeViewContainerImpl modalUIContainerFuture] */

undefined8 FUN_10684a058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10684a060; end: 10684a067; -[SCCameraUIScopeViewContainerImpl trayContainerFuture] */

undefined8 FUN_10684a060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10684a068; end: 10684a06f; -[SCCameraUIScopeViewContainerImpl nonAnimatedModalUIContainerFuture] */

undefined8 FUN_10684a068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10684a070; end: 10684a12f; -[SCCameraUIScopeViewContainerImpl .cxx_destruct] */

void FUN_10684a070(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10684a130; end: 10684a16f; -[SCCameraVerticalToolbarUIConfigurationCoordinatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684a130(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751c40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751c44,0);
  return;
}



/* Entry: 10684a170; end: 10684a177; -[SCPublicCameraFeatureCatalogProviderImpl .cxx_destruct] */

void FUN_10684a170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10684a178; end: 10684a1e3; -[SCMainCameraInvalidatablePresentationInteractionControllerImpl initWithInteractionController:] */

undefined1 * FUN_10684a178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f37a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684a1e4; end: 10684a21f; -[SCMainCameraInvalidatablePresentationInteractionControllerImpl updateInteractiveTransition:] */

void FUN_10684a1e4(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c286a00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10684a220; end: 10684a273; -[SCMainCameraInvalidatablePresentationInteractionControllerImpl completeTransition:animated:] */

void FUN_10684a220(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43be0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,0);
  return;
}



/* Entry: 10684a274; end: 10684a2df; -[SCMainCameraInvalidatablePresentationInteractionControllerImpl completeTransition:animated:withVelocity:] */

void FUN_10684a274(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43c00(param_1,param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_3 + 8,0);
  return;
}



/* Entry: 10684a2e0; end: 10684a2e7; -[SCMainCameraInvalidatablePresentationInteractionControllerImpl .cxx_destruct] */

void FUN_10684a2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10684a2e8; end: 10684a3b7; -[SCMainCameraInteractiveModalTransitionControllerImpl initWithContainerViewController:presenter:] */

undefined1 *
FUN_10684a2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f37a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684a3b8; end: 10684a3bf; -[SCMainCameraInteractiveModalTransitionControllerImpl setPanGestureRecognizerDelegate:] */

void FUN_10684a3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 10684a3c0; end: 10684a3c7; -[SCMainCameraInteractiveModalTransitionControllerImpl panGestureRecognizerDelegate] */

void FUN_10684a3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 10684a3c8; end: 10684a683; -[SCMainCameraInteractiveModalTransitionControllerImpl beginInteractiveTransition] */

void FUN_10684a3c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b6780();
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010bed0c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      lVar5 = *(long *)(param_1 + 0x40);
      uVar1 = param_1;
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        func_0x00010bed0c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010be7f840(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_10684a684;
        puStack_58 = &UNK_110849200;
        puVar7 = auStack_50;
        _objc_copyWeak(puVar7,auStack_48);
        func_0x00010c10c880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      else {
        func_0x00010be03ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = auStack_78;
        _objc_copyWeak(puVar7,auStack_48);
        func_0x00010c10c880();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar1);
      _objc_destroyWeak(puVar7);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        uVar1 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        _objc_opt_respondsToSelector();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          uVar1 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b6760();
          _objc_release(uVar1);
        }
        puVar3 = PTR_PTR_1126ce6f0;
        _objc_alloc();
        func_0x00010c01e640();
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *(undefined **)(param_1 + 0x18) = puVar3;
        _objc_release(uVar4);
        lVar6 = *(long *)(param_1 + 0x18);
        _objc_retain(lVar6);
      }
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_48);
    }
  }
  else {
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10684a684; end: 10684a71f;  */

void FUN_10684a684(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    func_0x00010bdd0400(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684a720; end: 10684a83b; -[SCMainCameraInteractiveModalTransitionControllerImpl presentViewController:] */

void FUN_10684a720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bed0c40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bed0c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          func_0x00010bf43be0(*(long *)(param_1 + 0x18),param_2,0,0);
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = 0;
          _objc_release(uVar3);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        lVar1 = param_1;
        func_0x00010bed0c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010be7f840(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10ae80(uVar3,param_2,lVar1,lVar2,param_3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        func_0x00010bdd0400(param_1);
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    else {
      _objc_release();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684a83c; end: 10684a8db; -[SCMainCameraInteractiveModalTransitionControllerImpl wireToView:gestureDriver:] */

void FUN_10684a83c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
  }
  else {
    func_0x00010bdd0420(param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_4;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684a8dc; end: 10684a96f; -[SCMainCameraInteractiveModalTransitionControllerImpl attachUI:] */

void FUN_10684a8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf43be0(*(undefined8 *)(param_1 + 0x18),param_2,0,0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10684a970;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684a970; end: 10684a97b;  */

void FUN_10684a970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10684a97c; end: 10684aa9b; -[SCMainCameraInteractiveModalTransitionControllerImpl detachUI:] */

void FUN_10684a97c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 8);
      if (lVar1 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          func_0x00010bf43be0(*(long *)(param_1 + 0x18),param_2,0,0);
          uVar2 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = 0;
          _objc_release(uVar2);
          lVar1 = *(long *)(param_1 + 8);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        lVar3 = param_1;
        func_0x00010be03ca0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_10684aa9c;
        puStack_50 = &UNK_110842508;
        _objc_retain(param_3);
        uStack_48 = param_3;
        func_0x00010c10ae80(uVar2,param_2,lVar1,lVar3,&puStack_68);
        _objc_release(lVar3);
        func_0x00010bdd0420(param_1);
        *(undefined1 *)(param_1 + 0x20) = 0;
        _objc_release(uStack_48);
        goto LAB_10684a9cc;
      }
    }
    else {
      _objc_release();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_10684a9cc:
  _objc_release(param_3);
  return;
}



/* Entry: 10684aa9c; end: 10684aaaf;  */

void FUN_10684aa9c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010684aaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}


