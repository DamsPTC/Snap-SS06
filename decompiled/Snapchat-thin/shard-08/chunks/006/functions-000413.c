/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10636f200; end: 10636f397;  */

undefined * FUN_10636f200(long param_1,undefined *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11091e518;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3783f6;
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
      puVar2 = &UNK_11091e518;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11091e518,&uStack_80,(long)param_3 * 100);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar6 = (undefined1 *)puVar7;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar6 = (undefined1 *)puVar7;
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10636f398;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11091e568);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f3783f6;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11091e568,&uStack_100,(long)puVar6 * 100);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  ppuVar5 = &puStack_130;
  pcStack_108 = FUN_10636f530;
  puStack_128 = PTR_PTR_1126f0f90;
  puStack_130 = puVar4;
  puStack_120 = puVar3;
  puStack_118 = puVar2;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 10636f398; end: 10636f52f;  */

undefined * FUN_10636f398(long param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
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
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11091e568);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3783f6;
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
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11091e568,&uStack_80,param_3 * 100);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_b0;
  pcStack_88 = FUN_10636f530;
  puStack_a8 = PTR_PTR_1126f0f90;
  puStack_b0 = puVar3;
  puStack_a0 = puVar2;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = (undefined1 *)ppuVar4;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
  }
  return (undefined *)ppuVar4;
}



/* Entry: 10636f530; end: 10636f5a3; -[SCGrapheneOperaWebMetric2 init] */

undefined1 * FUN_10636f530(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10636f5a4; end: 10636f717;  */

undefined *
FUN_10636f5a4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_360;
  undefined *puStack_358;
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
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
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
  puVar1 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
    puVar1 = &UNK_11091eed8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_10636f718;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_11091ef28;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar3 = puVar9;
    param_4 = puVar8;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar9;
      param_4 = puVar8;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_108 = FUN_10636f88c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar8 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_11091ef78;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar8 = puVar9;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar8 = puVar9;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  pcStack_188 = FUN_10636fa00;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar8;
  puVar12 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f37891a;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar6 = &UNK_11091efc8;
    unaff_x23 = &uStack_218;
    puVar3 = &uStack_218;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar16 = 0;
    puVar9 = auStack_1f8;
    puVar12 = param_4;
    do {
      if ((&cStack_1c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_2a0;
  pcStack_228 = FUN_10636fc30;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar10 = puVar3;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar9;
  puStack_248 = puVar2;
  puStack_240 = puVar8;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar6);
  plVar15 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_280;
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar7 = &UNK_11091f018;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar9 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar9 = &uStack_2a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_320;
  pcStack_2a8 = FUN_10636fda4;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar10;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar9;
  plStack_2c8 = plVar15;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar7);
  plVar15 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11091f068);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x00010007e5dc(&puStack_308);
    puVar8 = puVar3;
    puVar12 = puVar10;
    puVar9 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar8 = puVar3;
      puVar12 = puVar10;
      puVar9 = &uStack_320;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar5 = &puStack_360;
  pcStack_328 = FUN_10636ff18;
  puStack_350 = puVar9;
  plStack_348 = plVar15;
  puStack_340 = puVar1;
  puStack_338 = puVar7;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar8);
  _objc_retain(puVar12);
  _objc_retain(param_5);
  puStack_358 = PTR_PTR_1126f0f98;
  puStack_360 = puVar2;
  _objc_msgSendSuper2(&puStack_360,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar3 = puVar8;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined8 **)((long)ppuVar5 + 8) = puVar3;
    _objc_release(uVar13);
    puVar3 = puVar12;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 **)((long)ppuVar5 + 0x10) = puVar3;
    _objc_release(uVar13);
    uVar13 = param_5;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar13;
    _objc_release(uVar14);
  }
  _objc_release(param_5);
  _objc_release(puVar12);
  _objc_release(puVar8);
  return (undefined *)ppuVar5;
}



/* Entry: 10636f718; end: 10636f88b;  */

undefined *
FUN_10636f718(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
    puVar1 = &UNK_11091ef28;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_10636f88c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_11091ef78;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = puVar9;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar9;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_10636fa00;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  puVar12 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f37891a;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_11091efc8;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar16 = 0;
    puVar9 = auStack_178;
    puVar12 = param_4;
    do {
      if ((&cStack_149)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar11 = &uStack_220;
  pcStack_1a8 = FUN_10636fc30;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar9;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  plVar15 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar8 = &UNK_11091f018;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar10 = puVar11;
    puVar12 = puVar3;
    puVar9 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar10 = puVar11;
      puVar12 = puVar3;
      puVar9 = &uStack_220;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_2a0;
  pcStack_228 = FUN_10636fda4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar10;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar9;
  plStack_248 = plVar15;
  puStack_240 = puVar2;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar8);
  plVar15 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11091f068);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar3 = puVar7;
    puVar12 = puVar10;
    puVar9 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar7;
      puVar12 = puVar10;
      puVar9 = &uStack_2a0;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar6 = &puStack_2e0;
  pcStack_2a8 = FUN_10636ff18;
  puStack_2d0 = puVar9;
  plStack_2c8 = plVar15;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar8;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar3);
  _objc_retain(puVar12);
  _objc_retain(param_5);
  puStack_2d8 = PTR_PTR_1126f0f98;
  puStack_2e0 = puVar2;
  _objc_msgSendSuper2(&puStack_2e0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    puVar7 = puVar3;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined8 **)((long)ppuVar6 + 8) = puVar7;
    _objc_release(uVar13);
    puVar7 = puVar12;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined8 **)((long)ppuVar6 + 0x10) = puVar7;
    _objc_release(uVar13);
    uVar13 = param_5;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined8 *)((long)ppuVar6 + 0x18) = uVar13;
    _objc_release(uVar14);
  }
  _objc_release(param_5);
  _objc_release(puVar12);
  _objc_release(puVar3);
  return (undefined *)ppuVar6;
}



/* Entry: 10636f88c; end: 10636f9ff;  */

undefined *
FUN_10636f88c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_260;
  undefined *puStack_258;
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
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
    puVar1 = &UNK_11091ef78;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10636fa00;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar8;
  puVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  puVar16 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f37891a;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_11091efc8;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar15 = 0;
    puVar16 = auStack_f8;
    puVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_10636fc30;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar16;
  puStack_148 = puVar2;
  puStack_140 = puVar8;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_11091f018;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar9 = puVar10;
    puVar11 = puVar3;
    puVar16 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar9 = puVar10;
      puVar11 = puVar3;
      puVar16 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_10636fda4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar16;
  plStack_1c8 = plVar14;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  plVar14 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091f068);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar8 = puVar3;
    puVar11 = puVar9;
    puVar16 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar8 = puVar3;
      puVar11 = puVar9;
      puVar16 = &uStack_220;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar5 = &puStack_260;
  pcStack_228 = FUN_10636ff18;
  puStack_250 = puVar16;
  plStack_248 = plVar14;
  puStack_240 = puVar1;
  puStack_238 = puVar7;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  _objc_retain(param_5);
  puStack_258 = PTR_PTR_1126f0f98;
  puStack_260 = puVar2;
  _objc_msgSendSuper2(&puStack_260,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar3 = puVar8;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined8 **)((long)ppuVar5 + 8) = puVar3;
    _objc_release(uVar12);
    puVar3 = puVar11;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 **)((long)ppuVar5 + 0x10) = puVar3;
    _objc_release(uVar12);
    uVar12 = param_5;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar12;
    _objc_release(uVar13);
  }
  _objc_release(param_5);
  _objc_release(puVar11);
  _objc_release(puVar8);
  return (undefined *)ppuVar5;
}



/* Entry: 10636fa00; end: 10636fc2f;  */

undefined *
FUN_10636fa00(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
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
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
      puVar2 = (undefined8 *)&UNK_10f37891a;
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
    puVar1 = &UNK_11091efc8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar6 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_10636fc30;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f37891a;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_11091f018;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_10636fda4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar14;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091f068);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar6 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar6 = &uStack_1a0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  ppuVar5 = &puStack_1e0;
  pcStack_1a8 = FUN_10636ff18;
  puStack_1d0 = puVar6;
  plStack_1c8 = plVar14;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  _objc_retain(param_5);
  puStack_1d8 = PTR_PTR_1126f0f98;
  puStack_1e0 = puVar3;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = puVar2;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined8 **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar11);
    puVar6 = puVar10;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar11);
    uVar11 = param_5;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar11;
    _objc_release(uVar12);
  }
  _objc_release(param_5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  return (undefined *)ppuVar5;
}



/* Entry: 10636fc30; end: 10636fda3;  */

undefined *
FUN_10636fc30(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
    puVar1 = &UNK_11091f018;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10636fda4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f37891a;
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
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11091f068);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    param_4 = puVar5;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
      param_4 = puVar5;
      unaff_x22 = &uStack_100;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_140;
  pcStack_108 = FUN_10636ff18;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar10;
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_138 = PTR_PTR_1126f0f98;
  puStack_140 = puVar3;
  _objc_msgSendSuper2(&puStack_140,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = puVar7;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
    _objc_release(uVar8);
    puVar5 = param_4;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar5;
    _objc_release(uVar8);
    uVar8 = param_5;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined8 *)((long)ppuVar4 + 0x18) = uVar8;
    _objc_release(uVar9);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  return (undefined *)ppuVar4;
}



/* Entry: 10636fda4; end: 10636ff17;  */

undefined *
FUN_10636fda4(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f37891a;
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11091f068);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
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
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_c0;
  pcStack_88 = FUN_10636ff18;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_1126f0f98;
  puStack_c0 = puVar2;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
    _objc_release(uVar7);
    puVar4 = param_4;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined1 **)((long)ppuVar3 + 0x10) = puVar4;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar7;
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 10636ff18; end: 10636ffef; -[SCOperaMediaBundleContentKeys initWithBaseContentKey:firstFrameContentKey:overlayContentKey:] */

undefined1 *
FUN_10636ff18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0f98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10636fff0; end: 106370013; -[SCOperaMediaBundleContentKeys copyWithZone:] */

undefined8 FUN_10636fff0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106370014; end: 106370093; -[SCOperaMediaBundleContentKeys hash] */

undefined8 * FUN_106370014(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10637012c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106370138;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106370138;
          }
          goto LAB_10637012c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106370138:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106370094; end: 106370153; -[SCOperaMediaBundleContentKeys isEqual:] */

long FUN_106370094(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10637012c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106370138;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106370138;
          }
          goto LAB_10637012c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106370138:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106370154; end: 10637015b; -[SCOperaMediaBundleContentKeys baseContentKey] */

undefined8 FUN_106370154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10637015c; end: 106370163; -[SCOperaMediaBundleContentKeys firstFrameContentKey] */

undefined8 FUN_10637015c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106370164; end: 10637016b; -[SCOperaMediaBundleContentKeys overlayContentKey] */

undefined8 FUN_106370164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10637016c; end: 1063701a7; -[SCOperaMediaBundleContentKeys .cxx_destruct] */

void FUN_10637016c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063701a8; end: 1063701c3; +[SCOperaMediaBundleContentKeysBuilder operaMediaBundleContentKeys] */

void FUN_1063701a8(void)

{
  _objc_alloc_init(PTR_PTR_1126c98f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063701c4; end: 1063702db; +[SCOperaMediaBundleContentKeysBuilder operaMediaBundleContentKeysFromExistingOperaMediaBundleContentKeys:] */

void FUN_1063701c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c98f8;
  _objc_retain(param_3);
  func_0x00010c0ea720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf15f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a9220(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfb11e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ae280(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0ef6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2b51e0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1063702dc; end: 10637030f; -[SCOperaMediaBundleContentKeysBuilder build] */

void FUN_1063702dc(void)

{
  _objc_alloc(PTR_PTR_1126c9e90);
  func_0x00010bff6cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106370310; end: 106370347; -[SCOperaMediaBundleContentKeysBuilder withBaseContentKey:] */

long FUN_106370310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106370348; end: 10637037f; -[SCOperaMediaBundleContentKeysBuilder withFirstFrameContentKey:] */

long FUN_106370348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106370380; end: 1063703b7; -[SCOperaMediaBundleContentKeysBuilder withOverlayContentKey:] */

long FUN_106370380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1063703b8; end: 1063703f3; -[SCOperaMediaBundleContentKeysBuilder .cxx_destruct] */

void FUN_1063703b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063703f4; end: 1063704f3; -[SCOperaExecutorController initWithTarget:executionQueue:executionTimeout:plugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063703f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = auStack_58;
  _objc_loadWeakRetained(puVar1);
  _objc_storeWeak(param_2 + _DAT_1127460c0,puVar1);
  _objc_release(puVar1);
  lVar4 = (long)_DAT_1127460c4;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  *(undefined8 *)(param_2 + lVar4) = param_5;
  _objc_release(uVar2);
  *(undefined8 *)(param_2 + _DAT_1127460c8) = param_1;
  uVar2 = param_6;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1127460cc);
  *(undefined8 *)(param_2 + _DAT_1127460cc) = uVar2;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  return param_2;
}



/* Entry: 1063704f4; end: 106370543; -[SCOperaExecutorController methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063704f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127460c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106370544; end: 106370593; -[SCOperaExecutorController forwardInvocation:] */

void FUN_106370544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be64ac0(param_1,param_2,param_3);
  func_0x00010be0bba0(param_1,param_2,param_3);
  func_0x00010be64a80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106370594; end: 106370597; -[SCOperaExecutorController executee] */

void FUN_106370594(void)

{
  return;
}



/* Entry: 106370598; end: 1063706b7; -[SCOperaExecutorController _notifyInvocationWillBeginExecution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106370598(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = &uStack_120;
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
  lVar5 = *(long *)(param_1 + _DAT_1127460cc);
  _objc_retain(lVar5);
  lVar7 = lVar5;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bf9b2c0(*(undefined8 *)(lStack_118 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar5;
      puVar1 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar5 = *(long *)(param_3 + _DAT_1127460cc);
  _objc_retain(lVar5);
  lVar7 = lVar5;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bf9b280(*(undefined8 *)(lStack_238 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar5;
      puVar2 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_360;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  lVar5 = *(long *)((long)puVar1 + (long)_DAT_1127460cc);
  _objc_retain(lVar5);
  lVar7 = lVar5;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_350;
    do {
      lVar9 = 0;
      do {
        if (*plStack_350 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bf9b2a0(*(undefined8 *)(lStack_358 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar5;
      puVar4 = &uStack_360;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)((long)puVar2 + (long)_DAT_1127460c0);
  _objc_loadWeakRetained();
  if (puVar3 != (undefined1 *)0x0) {
    lVar7 = (long)_DAT_1127460c4;
    if (*(long *)((long)puVar2 + lVar7) == 0) {
      func_0x00010c06ae40(puVar4);
    }
    else {
      lVar5 = 0;
      _dispatch_semaphore_create();
      func_0x00010c13dce0(puVar4);
      uVar8 = *(undefined8 *)((long)puVar2 + lVar7);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      _objc_retain(lVar5);
      func_0x00010befa3a0(uVar8);
      uVar8 = 0;
      _dispatch_time(0,(long)(*(double *)((long)puVar2 + (long)_DAT_1127460c8) * 1000000000.0));
      lVar7 = lVar5;
      _dispatch_semaphore_wait(lVar5,uVar8);
      if (lVar7 != 0) {
        func_0x00010be64aa0(puVar2);
      }
      _objc_release(lVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(lVar5);
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 1063706b8; end: 1063707d7; -[SCOperaExecutorController _notifyInvocationDidEndExecution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063706b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar1 = &uStack_120;
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
  lVar4 = *(long *)(param_1 + _DAT_1127460cc);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bf9b280(*(undefined8 *)(lStack_118 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar4;
      puVar1 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar4 = *(long *)(param_3 + _DAT_1127460cc);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_230;
    do {
      lVar8 = 0;
      do {
        if (*plStack_230 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bf9b2a0(*(undefined8 *)(lStack_238 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar4;
      puVar3 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = (undefined1 *)((long)puVar1 + (long)_DAT_1127460c0);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined1 *)0x0) {
    lVar6 = (long)_DAT_1127460c4;
    if (*(long *)((long)puVar1 + lVar6) == 0) {
      func_0x00010c06ae40(puVar3);
    }
    else {
      lVar4 = 0;
      _dispatch_semaphore_create();
      func_0x00010c13dce0(puVar3);
      uVar7 = *(undefined8 *)((long)puVar1 + lVar6);
      _objc_retain(puVar3);
      _objc_retain(puVar2);
      _objc_retain(lVar4);
      func_0x00010befa3a0(uVar7);
      uVar7 = 0;
      _dispatch_time(0,(long)(*(double *)((long)puVar1 + (long)_DAT_1127460c8) * 1000000000.0));
      lVar6 = lVar4;
      _dispatch_semaphore_wait(lVar4,uVar7);
      if (lVar6 != 0) {
        func_0x00010be64aa0(puVar1);
      }
      _objc_release(lVar4);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(lVar4);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 1063707d8; end: 1063708f7; -[SCOperaExecutorController _notifyInvocationFinishedWithTimeout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063707d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar2 = &uStack_120;
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
  lVar3 = *(long *)(param_1 + _DAT_1127460cc);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bf9b2a0(*(undefined8 *)(lStack_118 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  lVar1 = param_3 + _DAT_1127460c0;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_1127460c4;
    if (*(long *)(param_3 + lVar3) == 0) {
      func_0x00010c06ae40(puVar2);
    }
    else {
      lVar4 = 0;
      _dispatch_semaphore_create();
      func_0x00010c13dce0(puVar2);
      uVar5 = *(undefined8 *)(param_3 + lVar3);
      _objc_retain(puVar2);
      _objc_retain(lVar1);
      _objc_retain(lVar4);
      func_0x00010befa3a0(uVar5);
      uVar5 = 0;
      _dispatch_time(0,(long)(*(double *)(param_3 + _DAT_1127460c8) * 1000000000.0));
      lVar3 = lVar4;
      _dispatch_semaphore_wait(lVar4,uVar5);
      if (lVar3 != 0) {
        func_0x00010be64aa0(param_3);
      }
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
  }
  _objc_release(lVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1063708f8; end: 106370a53; -[SCOperaExecutorController _executeInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063708f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127460c0;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_1127460c4;
    if (*(long *)(param_1 + lVar3) == 0) {
      func_0x00010c06ae40(param_3);
    }
    else {
      lVar2 = 0;
      _dispatch_semaphore_create();
      func_0x00010c13dce0(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar3);
      _objc_retain(param_3);
      _objc_retain(lVar1);
      _objc_retain(lVar2);
      func_0x00010befa3a0(uVar4);
      uVar4 = 0;
      _dispatch_time(0,(long)(*(double *)(param_1 + _DAT_1127460c8) * 1000000000.0));
      lVar3 = lVar2;
      _dispatch_semaphore_wait(lVar2,uVar4);
      if (lVar3 != 0) {
        func_0x00010be64aa0(param_1);
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106370a54; end: 106370a7f;  */

void FUN_106370a54(long param_1,undefined8 param_2)

{
  func_0x00010c06ae40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106370a80; end: 106370acb; -[SCOperaExecutorController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106370a80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127460cc,0);
  _objc_storeStrong(param_1 + _DAT_1127460c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127460c0);
  return;
}



/* Entry: 106370acc; end: 106370bd3; -[SCOperaExecutorControllerTimeTrackingPlugin initWithCallbackBlock:callbackPerformer:singleThreadedEnvironment:] */

undefined1 *
FUN_106370acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

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
  puStack_38 = PTR_PTR_1126f0fa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    if ((param_5 & 1) == 0) {
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
      *(undefined **)((long)puVar1 + 0x18) = puVar3;
      _objc_release(uVar2);
    }
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106370bd4; end: 106370cff; -[SCOperaExecutorControllerTimeTrackingPlugin executorController:willBeginInvocation:] */

void FUN_106370bd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106370d00;
  puStack_78 = &UNK_110842a68;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  uStack_70 = param_5;
  uStack_60 = param_1;
  _objc_retainBlock();
  if (*(long *)(param_2 + 0x18) == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010c0f7fc0();
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106370d00; end: 106370d6f;  */

void FUN_106370d00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3,param_2,puVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106370d70; end: 106370e9b; -[SCOperaExecutorControllerTimeTrackingPlugin executorController:didEndInvocation:] */

void FUN_106370d70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106370e9c;
  puStack_78 = &UNK_110842a68;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  uStack_70 = param_5;
  uStack_60 = param_1;
  _objc_retainBlock();
  if (*(long *)(param_2 + 0x18) == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010c0f7fc0();
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106370e9c; end: 106370fa7;  */

void FUN_106370e9c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x00010c0dff20(lVar2,param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x20),param_3,*(undefined8 *)(param_2 + 0x20));
    dVar6 = *(double *)(param_2 + 0x30);
    lVar3 = lVar2;
    func_0x00010bf885a0(lVar2);
    lVar5 = *(long *)(lVar1 + 8);
    if (lVar5 == 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar5);
      lVar3 = lVar5;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106370fa8;
    puStack_60 = &UNK_110844b80;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    lStack_58 = lVar1;
    _objc_retain(uVar4);
    uStack_50 = uVar4;
    dStack_48 = dVar6 - param_1;
    func_0x00010c0f88c0(lVar3,param_3,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106370fa8; end: 106370fcb;  */

void FUN_106370fa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106370fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (*(undefined8 *)(param_1 + 0x30),lVar1,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 106370fcc; end: 106370fcf; -[SCOperaExecutorControllerTimeTrackingPlugin executorController:didTimeoutOccurForInvocation:] */

void FUN_106370fcc(void)

{
  return;
}



/* Entry: 106370fd0; end: 106371017; -[SCOperaExecutorControllerTimeTrackingPlugin .cxx_destruct] */

void FUN_106370fd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106371018; end: 1063710d3; +[SCOperaSnapchatSessionConfiguration generateSnapchatOperaSessions:] */

void FUN_106371018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (puRam00000001136c3840 == (undefined *)0x0) {
    puRam00000001136c3840 = PTR____NSArray0__struct_11034ab48;
    _objc_release(0);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126c9d38;
  func_0x00010bdf77c0(PTR_PTR_1126c9d38,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010befa120(puVar1,param_2,puVar2);
  }
  puVar3 = puRam00000001136c3840;
  func_0x00010bf09f80(puRam00000001136c3840,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063710d4; end: 106371163; +[SCOperaSnapchatSessionConfiguration _customStatusBarStyleContextOperaSession:] */

void FUN_1063710d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c9e98;
    _objc_alloc(PTR_PTR_1126c9e98);
    lVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007c80(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106371164; end: 1063711cf; -[SCCustomStatusBarStyleContextOperaSession initWithCustomStatusBarStyleContextController:] */

undefined1 * FUN_106371164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063711d0; end: 10637128b; -[SCCustomStatusBarStyleContextOperaSession registeredEventsForOperaSession] */

void FUN_1063711d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29eee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010c29ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + 8;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10637128c; end: 1063712b7; -[SCCustomStatusBarStyleContextOperaSession operaViewDidSendEvent:page:params:] */

void FUN_10637128c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063712b8; end: 1063712bf; -[SCCustomStatusBarStyleContextOperaSession .cxx_destruct] */

void FUN_1063712b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1063712c0; end: 106371363; -[SCOperaLoadingIndicatorLog initWithPageId:pageStartTimeStamp:] */

undefined1 *
FUN_1063712c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0fb0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106371364; end: 1063714c7; -[SCOperaLoadingIndicatorLog addLogEntryOnTimeStamp:type:fromLayer:reason:] */

void FUN_106371364(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_3,puVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9ea0;
  _objc_alloc(PTR_PTR_1126c9ea0);
  func_0x00010c052620(param_1);
  lVar3 = param_2;
  func_0x00010bdddce0(param_2,param_3,puVar1);
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063714c8; end: 1063714cb; -[SCOperaLoadingIndicatorLog pageDidResumeOnTimeStamp:] */

void FUN_1063714c8(void)

{
  return;
}



/* Entry: 1063714cc; end: 1063715e7; -[SCOperaLoadingIndicatorLog pageDidPauseOnTimeStamp:] */

void FUN_1063714cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
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
  uVar6 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010c067ec0(uVar3);
        uVar6 = param_1;
        func_0x00010bef9ac0(param_2,param_3,1,(long)(int)uVar3,3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_3,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar1 + 0x18) = uVar6;
  return;
}



/* Entry: 1063715e8; end: 1063715ef; -[SCOperaLoadingIndicatorLog pageDidCloseOnTimeStamp:] */

void FUN_1063715e8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1063715f0; end: 106371683; -[SCOperaLoadingIndicatorLog aggregatedLogDataForClosedSession] */

void FUN_1063715f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    if (*(double *)(param_1 + 0x18) <= 0.0) {
      lVar3 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010befe980();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        _objc_retain(lVar1);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar1;
        _objc_release(uVar2);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
      _objc_release(lVar1);
    }
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106371684; end: 106371737; -[SCOperaLoadingIndicatorLog aggregatedLogDataForActiveSessionForTimeStamp:] */

void FUN_106371684(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106371738;
  puStack_60 = &UNK_11091f128;
  lStack_58 = param_2;
  uStack_48 = param_1;
  _objc_retain();
  puStack_50 = puVar2;
  func_0x00010bf97ce0(uVar3,param_3,&puStack_78);
  puVar1 = puStack_50;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106371738; end: 1063717cf;  */

void FUN_106371738(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c067ec0(param_2);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bdc99a0(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063717d0; end: 106371a23; -[SCOperaLoadingIndicatorLog _aggregatedDisplayHistoryFromEntries:layerType:requestedTimeStamp:] */

void FUN_1063717d0(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar10 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0d3c80();
  lVar2 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0a5920();
  _objc_release(lVar2);
  if (lVar3 != 1) {
    puVar4 = PTR_PTR_1126c9ea0;
    _objc_alloc(PTR_PTR_1126c9ea0);
    func_0x00010c052620(param_1);
    lVar2 = param_2;
    func_0x00010bdddce0(param_2,param_3,puVar4);
    if ((int)lVar2 == 0) {
      func_0x00010c12cd60(lVar1);
      dVar10 = param_1;
    }
    else {
      func_0x00010befa120(lVar1,param_3,puVar4);
      dVar10 = param_1;
    }
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 1) {
    uVar8 = 0;
    do {
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f900();
      dVar11 = dVar10;
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_3,uVar8 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f900();
      _objc_release(lVar2);
      if (param_5 < 0x21) {
        uVar9 = *(undefined8 *)(&UNK_10dddba08 + param_5 * 8);
      }
      else {
        uVar9 = 1;
      }
      dVar12 = dVar10 - *(double *)(param_2 + 0x10);
      puVar5 = PTR_PTR_1126c9ea8;
      _objc_alloc(PTR_PTR_1126c9ea8);
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c121ea0();
      lVar6 = lVar1;
      func_0x00010c0dfd40(lVar1,param_3,uVar8 + 1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c121ea0();
      func_0x00010c00f140(dVar12,dVar11 - dVar10,puVar5,param_3,uVar9,lVar3,lVar7);
      _objc_release(lVar6);
      _objc_release(lVar2);
      func_0x00010befa120(puVar4,param_3,puVar5);
      _objc_release(puVar5);
      lVar2 = lVar1;
      func_0x00010bf529e0();
      uVar8 = uVar8 + 2;
      dVar10 = dVar12;
    } while (uVar8 < lVar2 - 1U);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106371a24; end: 106371b3f; -[SCOperaLoadingIndicatorLog _checkInsertionEligibilityForEntry:] */

bool FUN_106371a24(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)(param_2 + 0x20);
  lVar2 = param_4;
  func_0x00010c0ea6c0(param_4);
  func_0x00010c0df840(puVar3,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  if (lVar2 == 0) {
    lVar4 = param_4;
    func_0x00010c0a5920(param_4);
    bVar1 = lVar4 == 0;
    goto LAB_106371b18;
  }
  lVar4 = lVar2;
  func_0x00010c0a5920();
  if (lVar4 == 1) {
    lVar4 = param_4;
    func_0x00010c0a5920();
    if (lVar4 != 0) goto LAB_106371b14;
  }
  else if ((lVar4 != 0) || (lVar4 = param_4, func_0x00010c0a5920(), lVar4 != 1)) {
LAB_106371b14:
    bVar1 = false;
    goto LAB_106371b18;
  }
  func_0x00010c26f900(lVar2);
  dVar5 = param_1;
  func_0x00010c26f900(param_4);
  bVar1 = param_1 <= dVar5;
LAB_106371b18:
  _objc_release(lVar2);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 106371b40; end: 106371b7b; -[SCOperaLoadingIndicatorLog .cxx_destruct] */

void FUN_106371b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106371b7c; end: 106371c93; -[SCOperaLoadingIndicatorTracker initWithTimeProvider:operaDebugServices:] */

undefined8 *
FUN_106371b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0fb8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106371c94; end: 106371c9b;  */

void FUN_106371c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadingIndicatorDebugOverlay_112604de8);
  return;
}



/* Entry: 106371c9c; end: 106371e13; -[SCOperaLoadingIndicatorTracker initWithConnectivityTimer:operaDebugServices:configProvider:notificationServices:connectivityMonitorServices:] */

undefined8 *
FUN_106371c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f0fb8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    puVar1[0xb] = 5;
    _objc_release(param_4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106371e14; end: 106371e1b;  */

void FUN_106371e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadingIndicatorDebugOverlay_112604de8);
  return;
}



/* Entry: 106371e1c; end: 106371e77; -[SCOperaLoadingIndicatorTracker loadingDuration] */

double FUN_106371e1c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(long *)(param_1 + 0x38) != 0)) {
    func_0x000100b6a110();
    dVar2 = dVar1;
    func_0x00010bf885a0(*(undefined8 *)(param_1 + 0x38));
    dVar2 = dVar1 - dVar2;
    dVar1 = -dVar2;
    if (0.0 <= dVar2) {
      dVar1 = dVar2;
    }
  }
  return dVar1;
}



/* Entry: 106371e78; end: 106371fc3; -[SCOperaLoadingIndicatorTracker loadingDidStartOnPageWithId:fromLayer:timeStamp:reason:] */

void FUN_106371e78(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_106371fa8;
  puVar1 = *(undefined **)(param_2 + 0x18);
  func_0x00010c0e00e0(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (*(long *)(param_2 + 0x30) != 0) {
      puVar1 = PTR_PTR_1126c9eb0;
      _objc_alloc(PTR_PTR_1126c9eb0);
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x30));
      func_0x00010c032f80(puVar1,param_3,param_4);
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x18),param_3,puVar1,param_4);
      goto LAB_106371f10;
    }
  }
  else {
LAB_106371f10:
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0e00e0(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9ac0(param_1);
  _objc_release(uVar2);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar1;
    _objc_release(uVar2);
    *(undefined1 *)(param_2 + 0x40) = 1;
    if (0 < (long)*(ulong *)(param_2 + 0x58)) {
      func_0x00010be9aec0((double)*(ulong *)(param_2 + 0x58),param_2);
    }
  }
  func_0x00010beb8a00(param_2,param_3,param_5);
LAB_106371fa8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106371fc4; end: 106372093; -[SCOperaLoadingIndicatorTracker _scheduleConnectivityWarning:] */

void FUN_106371fc4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fe0(param_1,puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106372094; end: 1063720c7;  */

void FUN_106372094(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063720c8; end: 1063721fb; -[SCOperaLoadingIndicatorTracker _checkConnectivityAndShowWarning] */

void FUN_1063720c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 != 0) && (lVar1 = lVar2, func_0x00010bf48f60(), lVar1 == 0)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1e358;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e358,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c0dc640();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1063721fc;
      puStack_48 = &UNK_110841f80;
      ppuStack_40 = ppuVar3;
      uStack_38 = uVar5;
      _objc_retain(uVar5);
      _objc_retain(ppuVar3);
      func_0x000100162d98("APPSTORE",&puStack_60);
      _objc_release(uStack_38);
      _objc_release(ppuStack_40);
      _objc_release(uVar5);
      _objc_release(ppuVar3);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1063721fc; end: 106372247;  */

void FUN_1063721fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x20),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106372248; end: 10637230b; -[SCOperaLoadingIndicatorTracker loadingDidFinishOnPageWithId:fromLayer:timeStamp:reason:] */

void FUN_106372248(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9ac0(param_1);
      _objc_release(uVar2);
      *(undefined1 *)(param_2 + 0x40) = 0;
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x38) = 0;
      _objc_release(uVar2);
      func_0x00010be356a0(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10637230c; end: 1063723bf; -[SCOperaLoadingIndicatorTracker pageDidStartDisplayingWithId:timeStamp:] */

void FUN_10637230c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_2 + 0x10) = lVar2;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar1;
    _objc_release(uVar3);
    *(undefined1 *)(param_2 + 0x41) = 0;
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x18),param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063723c0; end: 1063723d7; -[SCOperaLoadingIndicatorTracker pageDidStartPlayingWithId:timeStamp:] */

void FUN_1063723c0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x42) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  return;
}



/* Entry: 1063723d8; end: 10637248f; -[SCOperaLoadingIndicatorTracker pageDidStopDisplayingWithId:timeStamp:] */

void FUN_1063723d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 != 0))
  {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_2 + 0x42) = 0;
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_2 + 0x41) = *(undefined1 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0e00e0(uVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0f80(param_1);
    _objc_release(uVar1);
    *(undefined1 *)(param_2 + 0x40) = 0;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    _objc_release(uVar1);
    func_0x00010be356a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106372490; end: 10637255b; -[SCOperaLoadingIndicatorTracker pageDidResumeDisplayingWithId:timeStamp:] */

void FUN_106372490(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (((param_4 != 0) &&
      (lVar2 = param_4, func_0x00010c0720c0(param_4,param_3,*(undefined8 *)(param_2 + 0x10)),
      (int)lVar2 != 0)) && (*(long *)(param_2 + 0x30) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined **)(param_2 + 0x30) = puVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c0e00e0(uVar3,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1040(param_1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10637255c; end: 106372603; -[SCOperaLoadingIndicatorTracker pageDidPauseDisplayingWithId:timeStamp:] */

void FUN_10637255c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if ((param_4 != 0) &&
     (lVar2 = param_4, func_0x00010c0720c0(param_4,param_3,*(undefined8 *)(param_2 + 0x10)),
     (int)lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x00010c0e00e0(lVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c0e00e0(uVar1,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1000(param_1);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106372604; end: 10637264b; -[SCOperaLoadingIndicatorTracker loadingIndicatorHistoryForClosedPageId:] */

void FUN_106372604(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010befe9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10637264c; end: 1063726c7; -[SCOperaLoadingIndicatorTracker loadingIndicatorHistoryForActivePageId:] */

void FUN_10637264c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x000100b6a110();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c0e00e0(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010befe980(param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063726c8; end: 10637278b; -[SCOperaLoadingIndicatorTracker playbackProgressDidUpdate:] */

void FUN_1063726c8(undefined4 param_1,long param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    _objc_initWeak(auStack_38,param_2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10637278c;
    puStack_50 = &UNK_11085ae18;
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10637278c; end: 1063727bf;  */

void FUN_10637278c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be74ee0(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063727c0; end: 10637282b; -[SCOperaLoadingIndicatorTracker _showDebugOverlayWithDelayForLayerType:] */

void FUN_1063727c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s__showDebugOverlay__1125306a0;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f40(0x3ff0000000000000,param_1,param_2,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10637282c; end: 1063728ab; -[SCOperaLoadingIndicatorTracker _showDebugOverlay:] */

void FUN_10637282c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235840();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c067ec0(param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bed6bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateDebugOverlayWithLayerType_112593490,(long)(int)uVar1);
    return;
  }
  return;
}



/* Entry: 1063728ac; end: 106372903; -[SCOperaLoadingIndicatorTracker _hideDebugOverlay] */

void FUN_1063728ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010bf2eb80(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106372904; end: 106372907; -[SCOperaLoadingIndicatorTracker _updateDebugOverlayWithLayerType:] */

void FUN_106372904(void)

{
  return;
}



/* Entry: 106372908; end: 10637290b; -[SCOperaLoadingIndicatorTracker _loadingReasonDidUpdate:] */

void FUN_106372908(void)

{
  return;
}



/* Entry: 10637290c; end: 10637290f; -[SCOperaLoadingIndicatorTracker _playbackProgressDidUpdate:] */

void FUN_10637290c(void)

{
  return;
}



/* Entry: 106372910; end: 106372917; -[SCOperaLoadingIndicatorTracker enableDebugOverlay] */

undefined1 FUN_106372910(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106372918; end: 10637291f; -[SCOperaLoadingIndicatorTracker setEnableDebugOverlay:] */

void FUN_106372918(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106372920; end: 106372927; -[SCOperaLoadingIndicatorTracker isLoading] */

undefined1 FUN_106372920(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 106372928; end: 10637292f; -[SCOperaLoadingIndicatorTracker hasPlaybackStarted] */

undefined1 FUN_106372928(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}



/* Entry: 106372930; end: 106372937; -[SCOperaLoadingIndicatorTracker wasLoadingUponPageExit] */

undefined1 FUN_106372930(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 106372938; end: 1063729af; -[SCOperaLoadingIndicatorTracker .cxx_destruct] */

void FUN_106372938(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1063729b0; end: 106372bf7; -[SCOperaTrackerServiceProvider provide] */

void FUN_1063729b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106372bf8;
  puStack_88 = &UNK_11091f188;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106372d2c;
  puStack_b0 = &UNK_11091f1b8;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106372d6c;
  puStack_d8 = &UNK_11091f1e8;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9eb8;
  _objc_alloc(PTR_PTR_1126c9eb8);
  func_0x00010c0267a0();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106372bf8; end: 106372d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106372bf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1 + _DAT_11274613c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar2 + _DAT_112746138;
    _objc_loadWeakRetained(lVar6);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112746134;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bf461c0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bdef880(lVar1,param_2,lVar5,lVar6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106372d2c; end: 106372deb;  */

void FUN_106372d2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106372dec; end: 106372ebf; -[SCOperaTrackerServiceProvider _createLoadingIndicatorTrackerWithNotificationServices:connectivityMonitor:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106372dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9ec0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  param_1 = param_1 + _DAT_11274612c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0022a0(puVar1,param_2,puVar2,param_1,param_5,param_3,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106372ec0; end: 106372edb; -[SCOperaTrackerServiceProvider _createLoadStateTracker] */

void FUN_106372ec0(void)

{
  _objc_opt_new(PTR_PTR_1126c9ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106372edc; end: 106372ef7; -[SCOperaTrackerServiceProvider _createPlaybackAnalyticsTracker] */

void FUN_106372edc(void)

{
  _objc_opt_new(PTR_PTR_1126c9ed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106372ef8; end: 106372f13; -[SCOperaTrackerServiceProvider _createUILifecycleAnalyticsTracker] */

void FUN_106372ef8(void)

{
  _objc_opt_new(PTR_PTR_1126c9ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106372f14; end: 106372f6f; -[SCOperaTrackerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106372f14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274612c);
  _objc_destroyWeak(param_1 + _DAT_11274613c);
  _objc_destroyWeak(param_1 + _DAT_112746138);
  _objc_destroyWeak(param_1 + _DAT_112746134);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112746130);
  return;
}



/* Entry: 106372f70; end: 106372fdb; -[SCOperaLoadingIndicatorLogEntry initWithTimeStamp:logEntryType:operaLayerType:reason:] */

void FUN_106372f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f0fc0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}


