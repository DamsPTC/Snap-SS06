/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ac2c20; end: 106ac2d93;  */

void FUN_106ac2c20(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095b930;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095b930,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac2d94;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095b980,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac2d94; end: 106ac2e0b;  */

void FUN_106ac2d94(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b980,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac2e0c; end: 106ac2e83;  */

void FUN_106ac2e0c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b9d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac2e84; end: 106ac2ff7;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac39c4) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac2e84(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x28;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 *puStack_728;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  undefined8 *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 auStack_698 [3];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [3];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [3];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined8 auStack_3e8 [2];
  char cStack_3d1;
  long alStack_3d0 [2];
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [3];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined8 auStack_2c8 [2];
  char cStack_2b1;
  long alStack_2b0 [2];
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
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
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = (undefined8 *)&UNK_11095ba20;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar2;
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
  puVar13 = &uStack_100;
  pcStack_88 = FUN_106ac2ff8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar17 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar10 = (undefined8 *)&UNK_11095ba70;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar17 = puVar13;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar17 = puVar13;
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
  pcStack_108 = FUN_106ac316c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  puVar2 = puVar17;
  puVar12 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar10);
  _objc_retain(puVar17);
  puVar13 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar17);
    if (puVar17 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar17);
      puVar1 = puVar17;
      func_0x00010bdc3520(puVar17);
    }
    _objc_release(puVar17);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = (undefined8 *)&UNK_11095bac0;
    unaff_x23 = &uStack_198;
    puVar2 = &uStack_198;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar22 = 0;
    puVar13 = auStack_178;
    puVar12 = param_4;
    do {
      if ((&cStack_149)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar17);
  puVar3 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar17);
  _objc_release(puVar10);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106ac339c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar14 = puVar2;
  puVar16 = puVar12;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar13;
  puStack_1c8 = puVar3;
  puStack_1c0 = puVar17;
  puStack_1b8 = puVar10;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_218,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_200,puVar3);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar8 = (undefined8 *)&UNK_11095bb10;
    puVar14 = &uStack_238;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar22 = 0;
    puVar16 = puVar12;
    do {
      if ((&cStack_1e9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar4 = &uStack_360;
  pcStack_248 = FUN_106ac35cc;
  alStack_2b0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar10 = puVar14;
  puVar17 = puVar16;
  puVar13 = param_5;
  puVar20 = param_6;
  puVar2 = param_7;
  puVar12 = param_8;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar8);
  _objc_retain(puVar14);
  _objc_retain(puVar16);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (puVar3 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar3[1];
    puVar1 = (undefined8 *)&UNK_11095bbb0;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar3[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_340,puVar1);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar1 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_328,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_310,puVar1);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_2f8,puVar1);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar5 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar5 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_2e0,puVar5);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        unaff_x28 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_2c8,unaff_x28);
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      func_0x00010007e1e8(&uStack_360,auStack_340,alStack_2b0,6);
      puVar17 = (undefined8 *)((long)param_8 * 10);
      puVar1 = (undefined8 *)&UNK_11095bbb0;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x00010007e5dc(&puStack_348);
      lVar22 = 0;
      puVar3 = auStack_340;
      puVar10 = puVar4;
      do {
        if ((&cStack_2b1)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2c8 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar14);
  puVar4 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_2b0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  puStack_3b8 = auStack_340;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_3b8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar8);
  puVar6 = puVar4;
  __Unwind_Resume();
  puVar15 = &uStack_480;
  pcStack_368 = FUN_106ac3a14;
  alStack_3d0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar1;
  puVar9 = puVar10;
  puVar18 = puVar17;
  puVar19 = puVar13;
  puVar5 = puVar20;
  puStack_3c0 = unaff_x28;
  puStack_3b0 = puVar3;
  puStack_3a8 = puVar4;
  puStack_3a0 = param_7;
  puStack_398 = param_6;
  puStack_390 = param_5;
  puStack_388 = puVar16;
  puStack_380 = puVar14;
  puStack_378 = puVar8;
  pppuStack_370 = &pppuStack_250;
  _objc_retain(puVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar17);
  _objc_retain(puVar13);
  _objc_retain(puVar20);
  _objc_retain(puVar2);
  if (puVar6 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar6[1];
    puVar11 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar6[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_460,puVar3);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar3 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_448,puVar3);
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar3 = puVar17;
        func_0x00010bdc3520(puVar17);
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_430,puVar3);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar3 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_418,puVar3);
      _objc_retain(puVar20);
      if (puVar20 == (undefined *)0x0) {
        puVar7 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar7 = puVar20;
        func_0x00010bdc3520(puVar20);
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_400,puVar7);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_3e8,puVar3);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,alStack_3d0,6);
      puVar11 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      lVar22 = 0;
      puVar6 = auStack_460;
      puVar9 = puVar15;
      puVar18 = puVar12;
      do {
        if ((&cStack_3d1)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e8 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar13);
  _objc_release(puVar17);
  _objc_release(puVar10);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_3d0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  do {
    puVar6 = puVar6 + -3;
  } while (puVar6 != auStack_460);
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar13);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar1);
  puVar8 = puVar3;
  __Unwind_Resume();
  puVar15 = &uStack_540;
  pcStack_488 = FUN_106ac3e58;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar11;
  puVar14 = puVar9;
  puVar4 = puVar18;
  puVar16 = puVar19;
  puStack_4d0 = puVar6;
  puStack_4c8 = puVar3;
  puStack_4c0 = puVar2;
  puStack_4b8 = puVar20;
  puStack_4b0 = puVar13;
  puStack_4a8 = puVar17;
  puStack_4a0 = puVar10;
  puStack_498 = puVar1;
  pppuStack_490 = &pppuStack_370;
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar18);
  if (puVar8 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar8[1];
    puVar12 = (undefined8 *)&UNK_11095bc50;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar8[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_520,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_508,puVar1);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar3 = puVar18;
        func_0x00010bdc3520();
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_4f0,puVar3);
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530 = 0;
      func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_4d8,3);
      puVar12 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_528 = (undefined1 *)&uStack_540;
      func_0x00010007e5dc(&puStack_528);
      lVar22 = 0;
      puVar14 = puVar15;
      puVar4 = puVar19;
      do {
        if ((&cStack_4d9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
        puVar2 = &uStack_540;
      } while (lVar22 != -0x48);
    }
  }
  _objc_release(puVar18);
  _objc_release(puVar9);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d8) {
    ___stack_chk_fail();
    _objc_release(puVar18);
    puVar10 = auStack_520;
    do {
      puVar2 = puVar2 + -3;
    } while (puVar2 != puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar11);
    puVar8 = puVar1;
    __Unwind_Resume();
    pcStack_548 = FUN_106ac4138;
    lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = puVar12;
    puVar13 = puVar14;
    puVar19 = puVar4;
    puStack_580 = puVar2;
    puStack_578 = puVar10;
    puStack_570 = puVar1;
    puStack_568 = puVar18;
    puStack_560 = puVar9;
    puStack_558 = puVar11;
    pppuStack_550 = &pppuStack_490;
    _objc_retain(puVar12);
    _objc_retain(puVar14);
    puVar1 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      plVar21 = (long *)puVar8[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      puVar2 = auStack_5b8;
      func_0x00010002b838(auStack_5b8,puVar1);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar1 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_5a0,puVar1);
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      func_0x00010007e1e8(&uStack_5d8,auStack_5b8,&lStack_588,2);
      puVar17 = (undefined8 *)&UNK_11095bcf0;
      puVar10 = &uStack_5d8;
      puVar13 = &uStack_5d8;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_5c0 = puVar10;
      func_0x00010007e5dc(&puStack_5c0);
      lVar22 = 0;
      puVar1 = auStack_5b8;
      puVar19 = puVar4;
      do {
        if ((&cStack_589)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    _objc_release(puVar14);
    puVar8 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_588) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_5a1 < '\0') {
        __ZdlPv(auStack_5b8[0]);
      }
      _objc_release(puVar14);
      _objc_release(puVar12);
      puVar9 = puVar8;
      __Unwind_Resume();
      pcStack_5e8 = FUN_106ac4368;
      lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar17;
      puVar11 = puVar13;
      puStack_630 = puVar6;
      puStack_628 = puVar3;
      puStack_620 = puVar2;
      puStack_618 = puVar10;
      puStack_610 = puVar1;
      puStack_608 = puVar8;
      puStack_600 = puVar14;
      puStack_5f8 = puVar12;
      pppuStack_5f0 = &pppuStack_550;
      _objc_retain(puVar17);
      _objc_retain(puVar13);
      _objc_retain(puVar19);
      _objc_retain(puVar16);
      if (puVar9 != (undefined8 *)0x0) {
        plVar21 = (long *)puVar9[1];
        _objc_retain(puVar17);
        if (puVar17 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          puVar1 = puVar17;
          _objc_retainAutorelease(puVar17);
          func_0x00010bdc3520();
        }
        _objc_release(puVar17);
        func_0x00010002b838(auStack_698,puVar1);
        _objc_retain(puVar13);
        if (puVar13 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar13);
          puVar1 = puVar13;
          func_0x00010bdc3520(puVar13);
        }
        _objc_release(puVar13);
        func_0x00010002b838(auStack_680,puVar1);
        _objc_retain(puVar19);
        if (puVar19 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar19);
          puVar1 = puVar19;
          func_0x00010bdc3520(puVar19);
        }
        _objc_release(puVar19);
        func_0x00010002b838(auStack_668,puVar1);
        _objc_retain(puVar16);
        if (puVar16 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar16);
          puVar1 = puVar16;
          func_0x00010bdc3520(puVar16);
        }
        _objc_release(puVar16);
        func_0x00010002b838(auStack_650,puVar1);
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        func_0x00010007e1e8(&uStack_6b8,auStack_698,&lStack_638,4);
        puVar4 = (undefined8 *)&UNK_11095bde0;
        puVar3 = &uStack_6b8;
        puVar11 = &uStack_6b8;
        (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11095bde0,puVar11,puVar5);
        puStack_6a0 = puVar3;
        func_0x00010007e5dc(&puStack_6a0);
        lVar22 = 0;
        do {
          if ((&cStack_639)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x60);
      }
      _objc_release(puVar16);
      _objc_release(puVar19);
      _objc_release(puVar13);
      puVar1 = puVar17;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_638) {
        ___stack_chk_fail();
        _objc_release(puVar16);
        puStack_700 = auStack_698;
        do {
          puVar3 = puVar3 + -3;
        } while (puVar3 != puStack_700);
        _objc_release(puVar16);
        _objc_release(puVar19);
        _objc_release(puVar13);
        _objc_release(puVar17);
        puVar2 = puVar1;
        __Unwind_Resume();
        pcStack_6c8 = FUN_106ac469c;
        lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = puVar4;
        puStack_6f8 = puVar1;
        puStack_6f0 = puVar16;
        puStack_6e8 = puVar19;
        puStack_6e0 = puVar13;
        puStack_6d8 = puVar17;
        pppuStack_6d0 = &pppuStack_5f0;
        _objc_retain(puVar4);
        if (puVar2 != (undefined8 *)0x0) {
          plVar21 = (long *)puVar2[1];
          _objc_retain(puVar4);
          if (puVar4 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)&UNK_10f3adf9b;
          }
          else {
            puVar1 = puVar4;
            _objc_retainAutorelease(puVar4);
            func_0x00010bdc3520();
          }
          _objc_release(puVar4);
          func_0x00010002b838(auStack_720,puVar1);
          uStack_740 = 0;
          uStack_738 = 0;
          uStack_730 = 0;
          func_0x00010007e1e8(&uStack_740,auStack_720,&lStack_708,1);
          puVar3 = (undefined8 *)&UNK_11095be30;
          (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11095be30,&uStack_740,puVar11);
          puStack_728 = (undefined1 *)&uStack_740;
          func_0x00010007e5dc(&puStack_728);
          if (cStack_709 < '\0') {
            __ZdlPv(auStack_720[0]);
          }
        }
        puVar1 = puVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_708) {
          ___stack_chk_fail();
          _objc_release(puVar4);
          _objc_release(puVar4);
          puVar2 = puVar1;
          __Unwind_Resume();
          puStack_768 = (undefined1 *)&uStack_780;
          pcStack_748 = FUN_106ac4810;
          if (puVar2 != (undefined8 *)0x0) {
            uStack_780 = 0;
            uStack_778 = 0;
            uStack_770 = 0;
            puStack_760 = puVar1;
            puStack_758 = puVar4;
            pppuStack_750 = &pppuStack_6d0;
            (**(code **)(*(long *)puVar2[1] + 0x18))
                      ((long *)puVar2[1],&UNK_11095be80,&uStack_780,puVar3);
            func_0x00010007e5dc(&puStack_768);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac2ff8; end: 106ac316b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac39c4) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac2ff8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x28;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [3];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined8 auStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [3];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined8 auStack_368 [2];
  char cStack_351;
  long alStack_350 [2];
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined8 auStack_248 [2];
  char cStack_231;
  long alStack_230 [2];
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar21 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = (undefined8 *)&UNK_11095ba70;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar2;
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
  pcStack_88 = FUN_106ac316c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar17 = puVar8;
  puVar12 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  puVar15 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar10 = (undefined8 *)&UNK_11095bac0;
    unaff_x23 = &uStack_118;
    puVar17 = &uStack_118;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar22 = 0;
    puVar15 = auStack_f8;
    puVar12 = param_4;
    do {
      if ((&cStack_c9)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106ac339c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar10;
  puVar13 = puVar17;
  puVar16 = puVar12;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar15;
  puStack_148 = puVar2;
  puStack_140 = puVar8;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar10);
  _objc_retain(puVar17);
  if (puVar3 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar3[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar17);
    if (puVar17 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar17);
      puVar1 = puVar17;
      func_0x00010bdc3520(puVar17);
    }
    _objc_release(puVar17);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = (undefined8 *)&UNK_11095bb10;
    puVar13 = &uStack_1b8;
    (**(code **)(*plVar21 + 0x18))(plVar21);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar22 = 0;
    puVar16 = puVar12;
    do {
      if ((&cStack_169)[lVar22] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar22));
      }
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != -0x30);
  }
  _objc_release(puVar17);
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar17);
  _objc_release(puVar10);
  __Unwind_Resume();
  puVar3 = &uStack_2e0;
  pcStack_1c8 = FUN_106ac35cc;
  alStack_230[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar10 = puVar13;
  puVar17 = puVar16;
  puVar15 = param_5;
  puVar20 = param_6;
  puVar2 = param_7;
  puVar12 = param_8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar13);
  _objc_retain(puVar16);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (puVar1 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar1[1];
    puVar8 = (undefined8 *)&UNK_11095bbb0;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar1[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_2c0,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar1 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2a8,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_290,puVar1);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_278,puVar1);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar4 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_260,puVar4);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        unaff_x28 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_248,unaff_x28);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,alStack_230,6);
      puVar17 = (undefined8 *)((long)param_8 * 10);
      puVar8 = (undefined8 *)&UNK_11095bbb0;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      lVar22 = 0;
      puVar1 = auStack_2c0;
      puVar10 = puVar3;
      do {
        if ((&cStack_231)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_248 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_230[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  puStack_338 = auStack_2c0;
  do {
    puVar1 = puVar1 + -3;
  } while (puVar1 != puStack_338);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar7);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar14 = &uStack_400;
  pcStack_2e8 = FUN_106ac3a14;
  alStack_350[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar8;
  puVar9 = puVar10;
  puVar18 = puVar17;
  puVar19 = puVar15;
  puVar4 = puVar20;
  puStack_340 = unaff_x28;
  puStack_330 = puVar1;
  puStack_328 = puVar3;
  puStack_320 = param_7;
  puStack_318 = param_6;
  puStack_310 = param_5;
  puStack_308 = puVar16;
  puStack_300 = puVar13;
  puStack_2f8 = puVar7;
  pppuStack_2f0 = &pppuStack_1d0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(puVar17);
  _objc_retain(puVar15);
  _objc_retain(puVar20);
  _objc_retain(puVar2);
  if (puVar5 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar5[1];
    puVar11 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar5[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_3e0,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_3c8,puVar1);
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar1 = puVar17;
        func_0x00010bdc3520(puVar17);
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_3b0,puVar1);
      _objc_retain(puVar15);
      if (puVar15 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar15);
        puVar1 = puVar15;
        func_0x00010bdc3520(puVar15);
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_398,puVar1);
      _objc_retain(puVar20);
      if (puVar20 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar6 = puVar20;
        func_0x00010bdc3520(puVar20);
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_380,puVar6);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar1 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_368,puVar1);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,alStack_350,6);
      puVar11 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      lVar22 = 0;
      puVar5 = auStack_3e0;
      puVar9 = puVar14;
      puVar18 = puVar12;
      do {
        if ((&cStack_351)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_368 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(puVar17);
  _objc_release(puVar10);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_350[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != auStack_3e0);
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar7 = puVar1;
  __Unwind_Resume();
  puVar14 = &uStack_4c0;
  pcStack_408 = FUN_106ac3e58;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar11;
  puVar13 = puVar9;
  puVar3 = puVar18;
  puVar16 = puVar19;
  puStack_450 = puVar5;
  puStack_448 = puVar1;
  puStack_440 = puVar2;
  puStack_438 = puVar20;
  puStack_430 = puVar15;
  puStack_428 = puVar17;
  puStack_420 = puVar10;
  puStack_418 = puVar8;
  pppuStack_410 = &pppuStack_2f0;
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar18);
  if (puVar7 != (undefined8 *)0x0) {
    plVar21 = (long *)puVar7[1];
    puVar12 = (undefined8 *)&UNK_11095bc50;
    (**(code **)(*plVar21 + 0x28))();
    if ((int)plVar21 != 0) {
      plVar21 = (long *)puVar7[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_4a0,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_488,puVar1);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar1 = puVar18;
        func_0x00010bdc3520();
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_470,puVar1);
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&uStack_4c0,auStack_4a0,&lStack_458,3);
      puVar12 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar22 = 0;
      puVar13 = puVar14;
      puVar3 = puVar19;
      do {
        if ((&cStack_459)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
        puVar2 = &uStack_4c0;
      } while (lVar22 != -0x48);
    }
  }
  _objc_release(puVar18);
  _objc_release(puVar9);
  puVar8 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
    ___stack_chk_fail();
    _objc_release(puVar18);
    puVar10 = auStack_4a0;
    do {
      puVar2 = puVar2 + -3;
    } while (puVar2 != puVar10);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar11);
    puVar7 = puVar8;
    __Unwind_Resume();
    pcStack_4c8 = FUN_106ac4138;
    lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = puVar12;
    puVar15 = puVar13;
    puVar19 = puVar3;
    puStack_500 = puVar2;
    puStack_4f8 = puVar10;
    puStack_4f0 = puVar8;
    puStack_4e8 = puVar18;
    puStack_4e0 = puVar9;
    puStack_4d8 = puVar11;
    pppuStack_4d0 = &pppuStack_410;
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    puVar8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar21 = (long *)puVar7[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar8 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      puVar2 = auStack_538;
      func_0x00010002b838(auStack_538,puVar8);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar8 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_520,puVar8);
      uStack_558 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      func_0x00010007e1e8(&uStack_558,auStack_538,&lStack_508,2);
      puVar17 = (undefined8 *)&UNK_11095bcf0;
      puVar10 = &uStack_558;
      puVar15 = &uStack_558;
      (**(code **)(*plVar21 + 0x18))(plVar21);
      puStack_540 = puVar10;
      func_0x00010007e5dc(&puStack_540);
      lVar22 = 0;
      puVar8 = auStack_538;
      puVar19 = puVar3;
      do {
        if ((&cStack_509)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    _objc_release(puVar13);
    puVar7 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_521 < '\0') {
      __ZdlPv(auStack_538[0]);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    puVar9 = puVar7;
    __Unwind_Resume();
    pcStack_568 = FUN_106ac4368;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar17;
    puVar11 = puVar15;
    puStack_5b0 = puVar5;
    puStack_5a8 = puVar1;
    puStack_5a0 = puVar2;
    puStack_598 = puVar10;
    puStack_590 = puVar8;
    puStack_588 = puVar7;
    puStack_580 = puVar13;
    puStack_578 = puVar12;
    pppuStack_570 = &pppuStack_4d0;
    _objc_retain(puVar17);
    _objc_retain(puVar15);
    _objc_retain(puVar19);
    _objc_retain(puVar16);
    if (puVar9 != (undefined8 *)0x0) {
      plVar21 = (long *)puVar9[1];
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar17;
        _objc_retainAutorelease(puVar17);
        func_0x00010bdc3520();
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_618,puVar1);
      _objc_retain(puVar15);
      if (puVar15 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar15);
        puVar1 = puVar15;
        func_0x00010bdc3520(puVar15);
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_600,puVar1);
      _objc_retain(puVar19);
      if (puVar19 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar19);
        puVar1 = puVar19;
        func_0x00010bdc3520(puVar19);
      }
      _objc_release(puVar19);
      func_0x00010002b838(auStack_5e8,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_5d0,puVar1);
      uStack_638 = 0;
      uStack_630 = 0;
      uStack_628 = 0;
      func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5b8,4);
      puVar3 = (undefined8 *)&UNK_11095bde0;
      puVar1 = &uStack_638;
      puVar11 = &uStack_638;
      (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11095bde0,puVar11,puVar4);
      puStack_620 = puVar1;
      func_0x00010007e5dc(&puStack_620);
      lVar22 = 0;
      do {
        if ((&cStack_5b9)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_5d0 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x60);
    }
    _objc_release(puVar16);
    _objc_release(puVar19);
    _objc_release(puVar15);
    puVar8 = puVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5b8) {
      ___stack_chk_fail();
      _objc_release(puVar16);
      puStack_680 = auStack_618;
      do {
        puVar1 = puVar1 + -3;
      } while (puVar1 != puStack_680);
      _objc_release(puVar16);
      _objc_release(puVar19);
      _objc_release(puVar15);
      _objc_release(puVar17);
      puVar2 = puVar8;
      __Unwind_Resume();
      pcStack_648 = FUN_106ac469c;
      lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = puVar3;
      puStack_678 = puVar8;
      puStack_670 = puVar16;
      puStack_668 = puVar19;
      puStack_660 = puVar15;
      puStack_658 = puVar17;
      pppuStack_650 = &pppuStack_570;
      _objc_retain(puVar3);
      if (puVar2 != (undefined8 *)0x0) {
        plVar21 = (long *)puVar2[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          puVar1 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_6a0,puVar1);
        uStack_6c0 = 0;
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        func_0x00010007e1e8(&uStack_6c0,auStack_6a0,&lStack_688,1);
        puVar1 = (undefined8 *)&UNK_11095be30;
        (**(code **)(*plVar21 + 0x18))(plVar21,&UNK_11095be30,&uStack_6c0,puVar11);
        puStack_6a8 = (undefined1 *)&uStack_6c0;
        func_0x00010007e5dc(&puStack_6a8);
        if (cStack_689 < '\0') {
          __ZdlPv(auStack_6a0[0]);
        }
      }
      puVar8 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar2 = puVar8;
        __Unwind_Resume();
        puStack_6e8 = (undefined1 *)&uStack_700;
        pcStack_6c8 = FUN_106ac4810;
        if (puVar2 != (undefined8 *)0x0) {
          uStack_700 = 0;
          uStack_6f8 = 0;
          uStack_6f0 = 0;
          puStack_6e0 = puVar8;
          puStack_6d8 = puVar3;
          pppuStack_6d0 = &pppuStack_650;
          (**(code **)(*(long *)puVar2[1] + 0x18))
                    ((long *)puVar2[1],&UNK_11095be80,&uStack_700,puVar1);
          func_0x00010007e5dc(&puStack_6e8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac316c; end: 106ac339b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac39c4) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac316c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long lVar21;
  long *plVar22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x28;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
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
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [3];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [3];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  long alStack_2d0 [2];
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [3];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  long alStack_1b0 [2];
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
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
  puVar13 = param_3;
  puVar14 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
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
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11095bac0;
    unaff_x23 = &uStack_98;
    puVar13 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar3 = auStack_78;
    puVar14 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(param_3);
  puVar17 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = puVar17;
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac339c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar8 = puVar13;
  puVar16 = puVar14;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar3;
  puStack_c8 = puVar17;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar13);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar3 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar10 = (undefined8 *)&UNK_11095bb10;
    puVar8 = &uStack_138;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar21 = 0;
    puVar16 = puVar14;
    do {
      if ((&cStack_e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(puVar13);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar13);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_260;
  pcStack_148 = FUN_106ac35cc;
  alStack_1b0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  puVar14 = puVar8;
  puVar17 = puVar16;
  puVar2 = param_5;
  puVar20 = param_6;
  puVar13 = param_7;
  puVar12 = param_8;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  _objc_retain(puVar16);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (puVar3 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar3[1];
    puVar1 = (undefined8 *)&UNK_11095bbb0;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar3[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_240,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_228,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_210,puVar1);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_1f8,puVar1);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar4 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_1e0,puVar4);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        unaff_x28 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_1c8,unaff_x28);
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      func_0x00010007e1e8(&uStack_260,auStack_240,alStack_1b0,6);
      puVar17 = (undefined8 *)((long)param_8 * 10);
      puVar1 = (undefined8 *)&UNK_11095bbb0;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x00010007e5dc(&puStack_248);
      lVar21 = 0;
      puVar3 = auStack_240;
      puVar14 = puVar5;
      do {
        if ((&cStack_1b1)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c8 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar8);
  puVar5 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_1b0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  puStack_2b8 = auStack_240;
  do {
    puVar3 = puVar3 + -3;
  } while (puVar3 != puStack_2b8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar16);
  _objc_release(puVar8);
  _objc_release(puVar10);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar15 = &uStack_380;
  pcStack_268 = FUN_106ac3a14;
  alStack_2d0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar1;
  puVar9 = puVar14;
  puVar18 = puVar17;
  puVar19 = puVar2;
  puVar4 = puVar20;
  puStack_2c0 = unaff_x28;
  puStack_2b0 = puVar3;
  puStack_2a8 = puVar5;
  puStack_2a0 = param_7;
  puStack_298 = param_6;
  puStack_290 = param_5;
  puStack_288 = puVar16;
  puStack_280 = puVar8;
  puStack_278 = puVar10;
  pppuStack_270 = &ppuStack_150;
  _objc_retain(puVar1);
  _objc_retain(puVar14);
  _objc_retain(puVar17);
  _objc_retain(puVar2);
  _objc_retain(puVar20);
  _objc_retain(puVar13);
  if (puVar6 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar6[1];
    puVar11 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar6[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_360,puVar3);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar3 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_348,puVar3);
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar3 = puVar17;
        func_0x00010bdc3520(puVar17);
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_330,puVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_318,puVar3);
      _objc_retain(puVar20);
      if (puVar20 == (undefined *)0x0) {
        puVar7 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar7 = puVar20;
        func_0x00010bdc3520(puVar20);
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_300,puVar7);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar3 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2e8,puVar3);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,alStack_2d0,6);
      puVar11 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar21 = 0;
      puVar6 = auStack_360;
      puVar9 = puVar15;
      puVar18 = puVar12;
      do {
        if ((&cStack_2d1)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e8 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x90);
    }
  }
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar14);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_2d0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    puVar6 = puVar6 + -3;
  } while (puVar6 != auStack_360);
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar1);
  puVar8 = puVar3;
  __Unwind_Resume();
  puVar15 = &uStack_440;
  pcStack_388 = FUN_106ac3e58;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar11;
  puVar16 = puVar9;
  puVar12 = puVar18;
  puVar5 = puVar19;
  puStack_3d0 = puVar6;
  puStack_3c8 = puVar3;
  puStack_3c0 = puVar13;
  puStack_3b8 = puVar20;
  puStack_3b0 = puVar2;
  puStack_3a8 = puVar17;
  puStack_3a0 = puVar14;
  puStack_398 = puVar1;
  pppuStack_390 = &pppuStack_270;
  _objc_retain(puVar11);
  _objc_retain(puVar9);
  _objc_retain(puVar18);
  if (puVar8 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar8[1];
    puVar10 = (undefined8 *)&UNK_11095bc50;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar8[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_420,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_408,puVar1);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar3 = puVar18;
        func_0x00010bdc3520();
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_3f0,puVar3);
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      func_0x00010007e1e8(&uStack_440,auStack_420,&lStack_3d8,3);
      puVar10 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_428 = (undefined1 *)&uStack_440;
      func_0x00010007e5dc(&puStack_428);
      lVar21 = 0;
      puVar16 = puVar15;
      puVar12 = puVar19;
      do {
        if ((&cStack_3d9)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
        puVar13 = &uStack_440;
      } while (lVar21 != -0x48);
    }
  }
  _objc_release(puVar18);
  _objc_release(puVar9);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
    ___stack_chk_fail();
    _objc_release(puVar18);
    puVar14 = auStack_420;
    do {
      puVar13 = puVar13 + -3;
    } while (puVar13 != puVar14);
    _objc_release(puVar18);
    _objc_release(puVar9);
    _objc_release(puVar11);
    puVar2 = puVar1;
    __Unwind_Resume();
    pcStack_448 = FUN_106ac4138;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = puVar10;
    puVar8 = puVar16;
    puVar19 = puVar12;
    puStack_480 = puVar13;
    puStack_478 = puVar14;
    puStack_470 = puVar1;
    puStack_468 = puVar18;
    puStack_460 = puVar9;
    puStack_458 = puVar11;
    pppuStack_450 = &pppuStack_390;
    _objc_retain(puVar10);
    _objc_retain(puVar16);
    puVar1 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar2[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      puVar13 = auStack_4b8;
      func_0x00010002b838(auStack_4b8,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_4a0,puVar1);
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      func_0x00010007e1e8(&uStack_4d8,auStack_4b8,&lStack_488,2);
      puVar17 = (undefined8 *)&UNK_11095bcf0;
      puVar14 = &uStack_4d8;
      puVar8 = &uStack_4d8;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_4c0 = puVar14;
      func_0x00010007e5dc(&puStack_4c0);
      lVar21 = 0;
      puVar1 = auStack_4b8;
      puVar19 = puVar12;
      do {
        if ((&cStack_489)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x30);
    }
    _objc_release(puVar16);
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar16);
    if (cStack_4a1 < '\0') {
      __ZdlPv(auStack_4b8[0]);
    }
    _objc_release(puVar16);
    _objc_release(puVar10);
    puVar9 = puVar2;
    __Unwind_Resume();
    pcStack_4e8 = FUN_106ac4368;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar17;
    puVar11 = puVar8;
    puStack_530 = puVar6;
    puStack_528 = puVar3;
    puStack_520 = puVar13;
    puStack_518 = puVar14;
    puStack_510 = puVar1;
    puStack_508 = puVar2;
    puStack_500 = puVar16;
    puStack_4f8 = puVar10;
    pppuStack_4f0 = &pppuStack_450;
    _objc_retain(puVar17);
    _objc_retain(puVar8);
    _objc_retain(puVar19);
    _objc_retain(puVar5);
    if (puVar9 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar9[1];
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar17;
        _objc_retainAutorelease(puVar17);
        func_0x00010bdc3520();
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_598,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_580,puVar1);
      _objc_retain(puVar19);
      if (puVar19 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar19);
        puVar1 = puVar19;
        func_0x00010bdc3520(puVar19);
      }
      _objc_release(puVar19);
      func_0x00010002b838(auStack_568,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar1 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_550,puVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_538,4);
      puVar12 = (undefined8 *)&UNK_11095bde0;
      puVar3 = &uStack_5b8;
      puVar11 = &uStack_5b8;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11095bde0,puVar11,puVar4);
      puStack_5a0 = puVar3;
      func_0x00010007e5dc(&puStack_5a0);
      lVar21 = 0;
      do {
        if ((&cStack_539)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x60);
    }
    _objc_release(puVar5);
    _objc_release(puVar19);
    _objc_release(puVar8);
    puVar1 = puVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    puStack_600 = auStack_598;
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != puStack_600);
    _objc_release(puVar5);
    _objc_release(puVar19);
    _objc_release(puVar8);
    _objc_release(puVar17);
    puVar3 = puVar1;
    __Unwind_Resume();
    pcStack_5c8 = FUN_106ac469c;
    lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar13 = puVar12;
    puStack_5f8 = puVar1;
    puStack_5f0 = puVar5;
    puStack_5e8 = puVar19;
    puStack_5e0 = puVar8;
    puStack_5d8 = puVar17;
    pppuStack_5d0 = &pppuStack_4f0;
    _objc_retain(puVar12);
    if (puVar3 != (undefined8 *)0x0) {
      plVar22 = (long *)puVar3[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_620,puVar1);
      uStack_640 = 0;
      uStack_638 = 0;
      uStack_630 = 0;
      func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
      puVar13 = (undefined8 *)&UNK_11095be30;
      (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11095be30,&uStack_640,puVar11);
      puStack_628 = (undefined1 *)&uStack_640;
      func_0x00010007e5dc(&puStack_628);
      if (cStack_609 < '\0') {
        __ZdlPv(auStack_620[0]);
      }
    }
    puVar1 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      _objc_release(puVar12);
      puVar3 = puVar1;
      __Unwind_Resume();
      puStack_668 = (undefined1 *)&uStack_680;
      pcStack_648 = FUN_106ac4810;
      if (puVar3 != (undefined8 *)0x0) {
        uStack_680 = 0;
        uStack_678 = 0;
        uStack_670 = 0;
        puStack_660 = puVar1;
        puStack_658 = puVar12;
        pppuStack_650 = &pppuStack_5d0;
        (**(code **)(*(long *)puVar3[1] + 0x18))
                  ((long *)puVar3[1],&UNK_11095be80,&uStack_680,puVar13);
        func_0x00010007e5dc(&puStack_668);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac339c; end: 106ac35cb;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac39c4) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac339c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined8 *unaff_x28;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [3];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
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
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined1 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined8 auStack_248 [2];
  char cStack_231;
  long alStack_230 [2];
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 auStack_128 [2];
  char cStack_111;
  long alStack_110 [2];
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
  puVar10 = param_3;
  puVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_11095bb10;
    puVar10 = &uStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar21 = 0;
    puVar7 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar4 = &uStack_1c0;
  pcStack_a8 = FUN_106ac35cc;
  alStack_110[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar1;
  puVar13 = puVar10;
  puVar16 = puVar7;
  puVar8 = param_5;
  puVar19 = param_6;
  puVar20 = param_7;
  puVar14 = param_8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (puVar2 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar2[1];
    puVar11 = (undefined8 *)&UNK_11095bbb0;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar2[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1a0,puVar2);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_188,puVar2);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_170,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_158,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_140,puVar3);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        unaff_x28 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_128,unaff_x28);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x00010007e1e8(&uStack_1c0,auStack_1a0,alStack_110,6);
      puVar16 = (undefined8 *)((long)param_8 * 10);
      puVar11 = (undefined8 *)&UNK_11095bbb0;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      func_0x00010007e5dc(&puStack_1a8);
      lVar21 = 0;
      puVar2 = auStack_1a0;
      puVar13 = puVar4;
      do {
        if ((&cStack_111)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_128 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar10);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_110[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  puStack_218 = auStack_1a0;
  do {
    puVar2 = puVar2 + -3;
  } while (puVar2 != puStack_218);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar1);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar15 = &uStack_2e0;
  pcStack_1c8 = FUN_106ac3a14;
  alStack_230[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar11;
  puVar9 = puVar13;
  puVar17 = puVar16;
  puVar18 = puVar8;
  puVar3 = puVar19;
  puStack_220 = unaff_x28;
  puStack_210 = puVar2;
  puStack_208 = puVar4;
  puStack_200 = param_7;
  puStack_1f8 = param_6;
  puStack_1f0 = param_5;
  puStack_1e8 = puVar7;
  puStack_1e0 = puVar10;
  puStack_1d8 = puVar1;
  ppuStack_1d0 = &puStack_b0;
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar16);
  _objc_retain(puVar8);
  _objc_retain(puVar19);
  _objc_retain(puVar20);
  if (puVar5 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar5[1];
    puVar12 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar5[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_2c0,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar1 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2a8,puVar1);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar1 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_290,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_278,puVar1);
      _objc_retain(puVar19);
      if (puVar19 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar19);
        puVar6 = puVar19;
        func_0x00010bdc3520(puVar19);
      }
      _objc_release(puVar19);
      func_0x00010002b838(auStack_260,puVar6);
      _objc_retain(puVar20);
      if (puVar20 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar20);
        puVar1 = puVar20;
        func_0x00010bdc3520(puVar20);
      }
      _objc_release(puVar20);
      func_0x00010002b838(auStack_248,puVar1);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,alStack_230,6);
      puVar12 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      lVar21 = 0;
      puVar5 = auStack_2c0;
      puVar9 = puVar15;
      puVar17 = puVar14;
      do {
        if ((&cStack_231)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_248 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != -0x90);
    }
  }
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar8);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar1 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_230[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar20);
  do {
    puVar5 = puVar5 + -3;
  } while (puVar5 != auStack_2c0);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar8);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar7 = puVar1;
  __Unwind_Resume();
  puVar15 = &uStack_3a0;
  pcStack_2e8 = FUN_106ac3e58;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar12;
  puVar2 = puVar9;
  puVar14 = puVar17;
  puVar4 = puVar18;
  puStack_330 = puVar5;
  puStack_328 = puVar1;
  puStack_320 = puVar20;
  puStack_318 = puVar19;
  puStack_310 = puVar8;
  puStack_308 = puVar16;
  puStack_300 = puVar13;
  puStack_2f8 = puVar11;
  pppuStack_2f0 = &ppuStack_1d0;
  _objc_retain(puVar12);
  _objc_retain(puVar9);
  _objc_retain(puVar17);
  if (puVar7 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar7[1];
    puVar10 = (undefined8 *)&UNK_11095bc50;
    (**(code **)(*plVar22 + 0x28))();
    if ((int)plVar22 != 0) {
      plVar22 = (long *)puVar7[1];
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar12;
        _objc_retainAutorelease(puVar12);
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_380,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_368,puVar1);
      _objc_retain(puVar17);
      if (puVar17 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar17);
        puVar1 = puVar17;
        func_0x00010bdc3520();
      }
      _objc_release(puVar17);
      func_0x00010002b838(auStack_350,puVar1);
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_390 = 0;
      func_0x00010007e1e8(&uStack_3a0,auStack_380,&lStack_338,3);
      puVar10 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puStack_388 = (undefined1 *)&uStack_3a0;
      func_0x00010007e5dc(&puStack_388);
      lVar21 = 0;
      puVar2 = puVar15;
      puVar14 = puVar18;
      do {
        if ((&cStack_339)[lVar21] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar21));
        }
        lVar21 = lVar21 + -0x18;
        puVar20 = &uStack_3a0;
      } while (lVar21 != -0x48);
    }
  }
  _objc_release(puVar17);
  _objc_release(puVar9);
  puVar7 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar17);
  puVar11 = auStack_380;
  do {
    puVar20 = puVar20 + -3;
  } while (puVar20 != puVar11);
  _objc_release(puVar17);
  _objc_release(puVar9);
  _objc_release(puVar12);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_3a8 = FUN_106ac4138;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar10;
  puVar16 = puVar2;
  puVar18 = puVar14;
  puStack_3e0 = puVar20;
  puStack_3d8 = puVar11;
  puStack_3d0 = puVar7;
  puStack_3c8 = puVar17;
  puStack_3c0 = puVar9;
  puStack_3b8 = puVar12;
  pppuStack_3b0 = &pppuStack_2f0;
  _objc_retain(puVar10);
  _objc_retain(puVar2);
  puVar7 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar8[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar7 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    puVar20 = auStack_418;
    func_0x00010002b838(auStack_418,puVar7);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar7 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_400,puVar7);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x00010007e1e8(&uStack_438,auStack_418,&lStack_3e8,2);
    puVar13 = (undefined8 *)&UNK_11095bcf0;
    puVar11 = &uStack_438;
    puVar16 = &uStack_438;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_420 = puVar11;
    func_0x00010007e5dc(&puStack_420);
    lVar21 = 0;
    puVar7 = auStack_418;
    puVar18 = puVar14;
    do {
      if ((&cStack_3e9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(puVar2);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar10);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_448 = FUN_106ac4368;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar13;
  puVar12 = puVar16;
  puStack_490 = puVar5;
  puStack_488 = puVar1;
  puStack_480 = puVar20;
  puStack_478 = puVar11;
  puStack_470 = puVar7;
  puStack_468 = puVar8;
  puStack_460 = puVar2;
  puStack_458 = puVar10;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(puVar13);
  _objc_retain(puVar16);
  _objc_retain(puVar18);
  _objc_retain(puVar4);
  if (puVar9 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar9[1];
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar13;
      _objc_retainAutorelease(puVar13);
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_4f8,puVar1);
    _objc_retain(puVar16);
    if (puVar16 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar16);
      puVar1 = puVar16;
      func_0x00010bdc3520(puVar16);
    }
    _objc_release(puVar16);
    func_0x00010002b838(auStack_4e0,puVar1);
    _objc_retain(puVar18);
    if (puVar18 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar18);
      puVar1 = puVar18;
      func_0x00010bdc3520(puVar18);
    }
    _objc_release(puVar18);
    func_0x00010002b838(auStack_4c8,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_4b0,puVar1);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_498,4);
    puVar14 = (undefined8 *)&UNK_11095bde0;
    puVar1 = &uStack_518;
    puVar12 = &uStack_518;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11095bde0,puVar12,puVar3);
    puStack_500 = puVar1;
    func_0x00010007e5dc(&puStack_500);
    lVar21 = 0;
    do {
      if ((&cStack_499)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x60);
  }
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar16);
  puVar10 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  puStack_560 = auStack_4f8;
  do {
    puVar1 = puVar1 + -3;
  } while (puVar1 != puStack_560);
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar7 = puVar10;
  __Unwind_Resume();
  pcStack_528 = FUN_106ac469c;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar14;
  puStack_558 = puVar10;
  puStack_550 = puVar4;
  puStack_548 = puVar18;
  puStack_540 = puVar16;
  puStack_538 = puVar13;
  pppuStack_530 = &pppuStack_450;
  _objc_retain(puVar14);
  if (puVar7 != (undefined8 *)0x0) {
    plVar22 = (long *)puVar7[1];
    _objc_retain(puVar14);
    if (puVar14 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar14;
      _objc_retainAutorelease(puVar14);
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838(auStack_580,puVar1);
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
    puVar1 = (undefined8 *)&UNK_11095be30;
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_11095be30,&uStack_5a0,puVar12);
    puStack_588 = (undefined1 *)&uStack_5a0;
    func_0x00010007e5dc(&puStack_588);
    if (cStack_569 < '\0') {
      __ZdlPv(auStack_580[0]);
    }
  }
  puVar10 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    _objc_release(puVar14);
    puVar7 = puVar10;
    __Unwind_Resume();
    puStack_5c8 = (undefined1 *)&uStack_5e0;
    pcStack_5a8 = FUN_106ac4810;
    if (puVar7 != (undefined8 *)0x0) {
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      puStack_5c0 = puVar10;
      puStack_5b8 = puVar14;
      pppuStack_5b0 = &pppuStack_530;
      (**(code **)(*(long *)puVar7[1] + 0x18))((long *)puVar7[1],&UNK_11095be80,&uStack_5e0,puVar1);
      func_0x00010007e5dc(&puStack_5c8);
    }
    return;
  }
  return;
}



/* Entry: 106ac35cc; end: 106ac3a13;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac39c4) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac35cc(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 *unaff_x28;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [3];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined8 auStack_1a8 [2];
  char cStack_191;
  long alStack_190 [2];
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  puVar4 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar11 = param_3;
  puVar18 = param_4;
  puVar16 = param_5;
  puVar21 = param_6;
  puVar13 = param_7;
  puVar7 = param_8;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = (undefined8 *)&UNK_11095bbb0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_100,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_d0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b8,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_a0,puVar3);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        unaff_x28 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_88,unaff_x28);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,alStack_70,6);
      puVar18 = (undefined8 *)((long)param_8 * 10);
      puVar2 = (undefined8 *)&UNK_11095bbb0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      lVar22 = 0;
      param_1 = auStack_100;
      puVar11 = puVar4;
      do {
        if ((&cStack_71)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  puStack_178 = auStack_100;
  do {
    param_1 = param_1 + -0x18;
  } while (param_1 != puStack_178);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar8 = &uStack_240;
  pcStack_128 = FUN_106ac3a14;
  alStack_190[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar12 = puVar11;
  puVar17 = puVar18;
  puVar9 = puVar16;
  puVar3 = puVar21;
  puStack_180 = unaff_x28;
  puStack_170 = param_1;
  puStack_168 = puVar4;
  puStack_160 = param_7;
  puStack_158 = param_6;
  puStack_150 = param_5;
  puStack_148 = param_4;
  puStack_140 = param_3;
  puStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  _objc_retain(puVar18);
  _objc_retain(puVar16);
  _objc_retain(puVar21);
  _objc_retain(puVar13);
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar5[1];
    puVar10 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_220,puVar4);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar4 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_208,puVar4);
      _objc_retain(puVar18);
      if (puVar18 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar18);
        puVar4 = puVar18;
        func_0x00010bdc3520(puVar18);
      }
      _objc_release(puVar18);
      func_0x00010002b838(auStack_1f0,puVar4);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar4 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_1d8,puVar4);
      _objc_retain(puVar21);
      if (puVar21 == (undefined *)0x0) {
        puVar6 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar21);
        puVar6 = puVar21;
        func_0x00010bdc3520(puVar21);
      }
      _objc_release(puVar21);
      func_0x00010002b838(auStack_1c0,puVar6);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar4 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_1a8,puVar4);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,alStack_190,6);
      puVar10 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar22 = 0;
      puVar5 = auStack_220;
      puVar12 = puVar8;
      puVar17 = puVar7;
      do {
        if ((&cStack_191)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a8 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x90);
    }
  }
  _objc_release(puVar13);
  _objc_release(puVar21);
  _objc_release(puVar16);
  _objc_release(puVar18);
  _objc_release(puVar11);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_190[0]) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    do {
      puVar5 = puVar5 + -3;
    } while (puVar5 != auStack_220);
    _objc_release(puVar13);
    _objc_release(puVar21);
    _objc_release(puVar16);
    _objc_release(puVar18);
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar8 = puVar7;
    __Unwind_Resume();
    puVar15 = &uStack_300;
    pcStack_248 = FUN_106ac3e58;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar10;
    puVar14 = puVar12;
    puVar19 = puVar17;
    puVar20 = puVar9;
    puStack_290 = puVar5;
    puStack_288 = puVar7;
    puStack_280 = puVar13;
    puStack_278 = puVar21;
    puStack_270 = puVar16;
    puStack_268 = puVar18;
    puStack_260 = puVar11;
    puStack_258 = puVar2;
    ppuStack_250 = &puStack_130;
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    _objc_retain(puVar17);
    if (puVar8 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar8[1];
      puVar4 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        plVar1 = (long *)puVar8[1];
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          puVar2 = puVar10;
          _objc_retainAutorelease(puVar10);
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_2e0,puVar2);
        _objc_retain(puVar12);
        if (puVar12 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar12);
          puVar2 = puVar12;
          func_0x00010bdc3520(puVar12);
        }
        _objc_release(puVar12);
        func_0x00010002b838(auStack_2c8,puVar2);
        _objc_retain(puVar17);
        if (puVar17 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar17);
          puVar7 = puVar17;
          func_0x00010bdc3520();
        }
        _objc_release(puVar17);
        func_0x00010002b838(auStack_2b0,puVar7);
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
        puVar4 = (undefined8 *)&UNK_11095bc50;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        puStack_2e8 = (undefined1 *)&uStack_300;
        func_0x00010007e5dc(&puStack_2e8);
        lVar22 = 0;
        puVar14 = puVar15;
        puVar19 = puVar9;
        do {
          if ((&cStack_299)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
          puVar13 = &uStack_300;
        } while (lVar22 != -0x48);
      }
    }
    _objc_release(puVar17);
    _objc_release(puVar12);
    puVar2 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar17);
    puVar11 = auStack_2e0;
    do {
      puVar13 = puVar13 + -3;
    } while (puVar13 != puVar11);
    _objc_release(puVar17);
    _objc_release(puVar12);
    _objc_release(puVar10);
    puVar9 = puVar2;
    __Unwind_Resume();
    pcStack_308 = FUN_106ac4138;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = puVar4;
    puVar16 = puVar14;
    puVar8 = puVar19;
    puStack_340 = puVar13;
    puStack_338 = puVar11;
    puStack_330 = puVar2;
    puStack_328 = puVar17;
    puStack_320 = puVar12;
    puStack_318 = puVar10;
    pppuStack_310 = &ppuStack_250;
    _objc_retain(puVar4);
    _objc_retain(puVar14);
    puVar2 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar9[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar13 = auStack_378;
      func_0x00010002b838(auStack_378,puVar2);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar2 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_360,puVar2);
      uStack_398 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      func_0x00010007e1e8(&uStack_398,auStack_378,&lStack_348,2);
      puVar18 = (undefined8 *)&UNK_11095bcf0;
      puVar11 = &uStack_398;
      puVar16 = &uStack_398;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_380 = puVar11;
      func_0x00010007e5dc(&puStack_380);
      lVar22 = 0;
      puVar2 = auStack_378;
      puVar8 = puVar19;
      do {
        if ((&cStack_349)[lVar22] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar22));
        }
        lVar22 = lVar22 + -0x18;
      } while (lVar22 != -0x30);
    }
    _objc_release(puVar14);
    puVar10 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (cStack_361 < '\0') {
        __ZdlPv(auStack_378[0]);
      }
      _objc_release(puVar14);
      _objc_release(puVar4);
      puVar9 = puVar10;
      __Unwind_Resume();
      pcStack_3a8 = FUN_106ac4368;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar12 = puVar18;
      puVar17 = puVar16;
      puStack_3f0 = puVar5;
      puStack_3e8 = puVar7;
      puStack_3e0 = puVar13;
      puStack_3d8 = puVar11;
      puStack_3d0 = puVar2;
      puStack_3c8 = puVar10;
      puStack_3c0 = puVar14;
      puStack_3b8 = puVar4;
      pppuStack_3b0 = &pppuStack_310;
      _objc_retain(puVar18);
      _objc_retain(puVar16);
      _objc_retain(puVar8);
      _objc_retain(puVar20);
      if (puVar9 != (undefined8 *)0x0) {
        plVar1 = (long *)puVar9[1];
        _objc_retain(puVar18);
        if (puVar18 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          puVar2 = puVar18;
          _objc_retainAutorelease(puVar18);
          func_0x00010bdc3520();
        }
        _objc_release(puVar18);
        func_0x00010002b838(auStack_458,puVar2);
        _objc_retain(puVar16);
        if (puVar16 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar16);
          puVar2 = puVar16;
          func_0x00010bdc3520(puVar16);
        }
        _objc_release(puVar16);
        func_0x00010002b838(auStack_440,puVar2);
        _objc_retain(puVar8);
        if (puVar8 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar2 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_428,puVar2);
        _objc_retain(puVar20);
        if (puVar20 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar20);
          puVar2 = puVar20;
          func_0x00010bdc3520(puVar20);
        }
        _objc_release(puVar20);
        func_0x00010002b838(auStack_410,puVar2);
        uStack_478 = 0;
        uStack_470 = 0;
        uStack_468 = 0;
        func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_3f8,4);
        puVar12 = (undefined8 *)&UNK_11095bde0;
        puVar7 = &uStack_478;
        puVar17 = &uStack_478;
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095bde0,puVar17,puVar3);
        puStack_460 = puVar7;
        func_0x00010007e5dc(&puStack_460);
        lVar22 = 0;
        do {
          if ((&cStack_3f9)[lVar22] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar22));
          }
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x60);
      }
      _objc_release(puVar20);
      _objc_release(puVar8);
      _objc_release(puVar16);
      puVar2 = puVar18;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
        ___stack_chk_fail();
        _objc_release(puVar20);
        puStack_4c0 = auStack_458;
        do {
          puVar7 = puVar7 + -3;
        } while (puVar7 != puStack_4c0);
        _objc_release(puVar20);
        _objc_release(puVar8);
        _objc_release(puVar16);
        _objc_release(puVar18);
        puVar11 = puVar2;
        __Unwind_Resume();
        pcStack_488 = FUN_106ac469c;
        lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar13 = puVar12;
        puStack_4b8 = puVar2;
        puStack_4b0 = puVar20;
        puStack_4a8 = puVar8;
        puStack_4a0 = puVar16;
        puStack_498 = puVar18;
        pppuStack_490 = &pppuStack_3b0;
        _objc_retain(puVar12);
        if (puVar11 != (undefined8 *)0x0) {
          plVar1 = (long *)puVar11[1];
          _objc_retain(puVar12);
          if (puVar12 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f3adf9b;
          }
          else {
            puVar2 = puVar12;
            _objc_retainAutorelease(puVar12);
            func_0x00010bdc3520();
          }
          _objc_release(puVar12);
          func_0x00010002b838(auStack_4e0,puVar2);
          uStack_500 = 0;
          uStack_4f8 = 0;
          uStack_4f0 = 0;
          func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
          puVar13 = (undefined8 *)&UNK_11095be30;
          (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095be30,&uStack_500,puVar17);
          puStack_4e8 = (undefined1 *)&uStack_500;
          func_0x00010007e5dc(&puStack_4e8);
          if (cStack_4c9 < '\0') {
            __ZdlPv(auStack_4e0[0]);
          }
        }
        puVar2 = puVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
          ___stack_chk_fail();
          _objc_release(puVar12);
          _objc_release(puVar12);
          puVar11 = puVar2;
          __Unwind_Resume();
          puStack_528 = (undefined1 *)&uStack_540;
          pcStack_508 = FUN_106ac4810;
          if (puVar11 != (undefined8 *)0x0) {
            uStack_540 = 0;
            uStack_538 = 0;
            uStack_530 = 0;
            puStack_520 = puVar2;
            puStack_518 = puVar12;
            pppuStack_510 = &pppuStack_490;
            (**(code **)(*(long *)puVar11[1] + 0x18))
                      ((long *)puVar11[1],&UNK_11095be80,&uStack_540,puVar13);
            func_0x00010007e5dc(&puStack_528);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac3a14; end: 106ac3e57;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac3e08) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac3a14(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
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
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [3];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  puVar4 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  puVar12 = param_4;
  puVar6 = param_5;
  puVar17 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = (undefined8 *)&UNK_11095bc00;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_100,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_d0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b8,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_a0,puVar3);
      _objc_retain(param_7);
      if (param_7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar2 = param_7;
        func_0x00010bdc3520(param_7);
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_88,puVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,alStack_70,6);
      puVar2 = (undefined8 *)&UNK_11095bc00;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      lVar18 = 0;
      param_1 = auStack_100;
      puVar8 = puVar4;
      puVar12 = param_8;
      do {
        if ((&cStack_71)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  do {
    param_1 = param_1 + -0x18;
  } while (param_1 != auStack_100);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar11 = &uStack_1e0;
  pcStack_128 = FUN_106ac3e58;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar13 = puVar8;
  puVar9 = puVar12;
  puVar16 = puVar6;
  puStack_170 = param_1;
  puStack_168 = puVar4;
  puStack_160 = param_7;
  puStack_158 = param_6;
  puStack_150 = param_5;
  puStack_148 = param_4;
  puStack_140 = param_3;
  puStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  _objc_retain(puVar12);
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar5[1];
    puVar10 = (undefined8 *)&UNK_11095bc50;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar5[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1c0,puVar4);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar4 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1a8,puVar4);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar4 = puVar12;
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_190,puVar4);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_178,3);
      puVar10 = (undefined8 *)&UNK_11095bc50;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      lVar18 = 0;
      puVar13 = puVar11;
      puVar9 = puVar6;
      do {
        if ((&cStack_179)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
        param_7 = &uStack_1e0;
      } while (lVar18 != -0x48);
    }
  }
  _objc_release(puVar12);
  _objc_release(puVar8);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    puVar5 = auStack_1c0;
    do {
      param_7 = param_7 + -3;
    } while (param_7 != puVar5);
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_1e8 = FUN_106ac4138;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar10;
    puVar14 = puVar13;
    puVar15 = puVar9;
    puStack_220 = param_7;
    puStack_218 = puVar5;
    puStack_210 = puVar6;
    puStack_208 = puVar12;
    puStack_200 = puVar8;
    puStack_1f8 = puVar2;
    ppuStack_1f0 = &puStack_130;
    _objc_retain(puVar10);
    _objc_retain(puVar13);
    puVar2 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar7[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      param_7 = auStack_258;
      func_0x00010002b838(auStack_258,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_240,puVar2);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar11 = (undefined8 *)&UNK_11095bcf0;
      puVar5 = &uStack_278;
      puVar14 = &uStack_278;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_260 = puVar5;
      func_0x00010007e5dc(&puStack_260);
      lVar18 = 0;
      puVar2 = auStack_258;
      puVar15 = puVar9;
      do {
        if ((&cStack_229)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(puVar13);
    puVar8 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_241 < '\0') {
      __ZdlPv(auStack_258[0]);
    }
    _objc_release(puVar13);
    _objc_release(puVar10);
    puVar9 = puVar8;
    __Unwind_Resume();
    pcStack_288 = FUN_106ac4368;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar11;
    puVar6 = puVar14;
    puStack_2d0 = param_1;
    puStack_2c8 = puVar4;
    puStack_2c0 = param_7;
    puStack_2b8 = puVar5;
    puStack_2b0 = puVar2;
    puStack_2a8 = puVar8;
    puStack_2a0 = puVar13;
    puStack_298 = puVar10;
    pppuStack_290 = &ppuStack_1f0;
    _objc_retain(puVar11);
    _objc_retain(puVar14);
    _objc_retain(puVar15);
    _objc_retain(puVar16);
    if (puVar9 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar9[1];
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar11;
        _objc_retainAutorelease(puVar11);
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_338,puVar2);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar2 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_320,puVar2);
      _objc_retain(puVar15);
      if (puVar15 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar15);
        puVar2 = puVar15;
        func_0x00010bdc3520(puVar15);
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_308,puVar2);
      _objc_retain(puVar16);
      if (puVar16 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar16);
        puVar2 = puVar16;
        func_0x00010bdc3520(puVar16);
      }
      _objc_release(puVar16);
      func_0x00010002b838(auStack_2f0,puVar2);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_2d8,4);
      puVar12 = (undefined8 *)&UNK_11095bde0;
      puVar4 = &uStack_358;
      puVar6 = &uStack_358;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095bde0,puVar6,puVar17);
      puStack_340 = puVar4;
      func_0x00010007e5dc(&puStack_340);
      lVar18 = 0;
      do {
        if ((&cStack_2d9)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x60);
    }
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    puVar2 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
      ___stack_chk_fail();
      _objc_release(puVar16);
      puStack_3a0 = auStack_338;
      do {
        puVar4 = puVar4 + -3;
      } while (puVar4 != puStack_3a0);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar11);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_368 = FUN_106ac469c;
      lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar12;
      puStack_398 = puVar2;
      puStack_390 = puVar16;
      puStack_388 = puVar15;
      puStack_380 = puVar14;
      puStack_378 = puVar11;
      pppuStack_370 = &pppuStack_290;
      _objc_retain(puVar12);
      if (puVar4 != (undefined8 *)0x0) {
        plVar1 = (long *)puVar4[1];
        _objc_retain(puVar12);
        if (puVar12 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          puVar2 = puVar12;
          _objc_retainAutorelease(puVar12);
          func_0x00010bdc3520();
        }
        _objc_release(puVar12);
        func_0x00010002b838(auStack_3c0,puVar2);
        uStack_3e0 = 0;
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
        puVar8 = (undefined8 *)&UNK_11095be30;
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095be30,&uStack_3e0,puVar6);
        puStack_3c8 = (undefined1 *)&uStack_3e0;
        func_0x00010007e5dc(&puStack_3c8);
        if (cStack_3a9 < '\0') {
          __ZdlPv(auStack_3c0[0]);
        }
      }
      puVar2 = puVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
        ___stack_chk_fail();
        _objc_release(puVar12);
        _objc_release(puVar12);
        puVar6 = puVar2;
        __Unwind_Resume();
        puStack_408 = (undefined1 *)&uStack_420;
        pcStack_3e8 = FUN_106ac4810;
        if (puVar6 != (undefined8 *)0x0) {
          uStack_420 = 0;
          uStack_418 = 0;
          uStack_410 = 0;
          puStack_400 = puVar2;
          puStack_3f8 = puVar12;
          pppuStack_3f0 = &pppuStack_370;
          (**(code **)(*(long *)puVar6[1] + 0x18))
                    ((long *)puVar6[1],&UNK_11095be80,&uStack_420,puVar8);
          func_0x00010007e5dc(&puStack_408);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac3e58; end: 106ac4137;  */

/* WARNING: Removing unreachable block (ram,0x000106ac40f8) */
/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac3e58(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = param_3;
  puVar9 = param_4;
  puVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095bc50;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_a0,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_88,puVar3);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        unaff_x25 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        unaff_x25 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_70,unaff_x25);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_11095bc50;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar12 = 0;
      puVar3 = puVar6;
      puVar9 = param_5;
      do {
        if ((&cStack_59)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar12 != -0x48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_106ac4138;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar10 = puVar9;
  puStack_100 = (undefined1 *)unaff_x24;
  puStack_f0 = puVar4;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3adf9b;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_138,puVar4);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar6 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_120,puVar6);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar8 = &UNK_11095bcf0;
    puVar6 = &uStack_158;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar12 = 0;
    puVar10 = puVar9;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_168 = FUN_106ac4368;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar3 = puVar6;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  if (puVar4 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_200,puVar3);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar3 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1e8,puVar3);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar3 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1d0,puVar3);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1b8,4);
    puVar2 = &UNK_11095bde0;
    unaff_x25 = &uStack_238;
    puVar3 = &uStack_238;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095bde0,puVar3,param_6);
    puStack_220 = unaff_x25;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    do {
      if ((&cStack_1b9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  puVar4 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    puStack_280 = auStack_218;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_280);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar8);
    puVar7 = puVar4;
    __Unwind_Resume();
    pcStack_248 = FUN_106ac469c;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar2;
    puStack_278 = puVar4;
    puStack_270 = puVar11;
    puStack_268 = puVar10;
    puStack_260 = puVar6;
    puStack_258 = puVar8;
    pppuStack_250 = &ppuStack_170;
    _objc_retain(puVar2);
    if (puVar7 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar7 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_2a0,puVar4);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
      puVar5 = &UNK_11095be30;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095be30,&uStack_2c0,puVar3);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
      }
    }
    puVar4 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar2);
      puVar8 = puVar4;
      __Unwind_Resume();
      puStack_2e8 = (undefined1 *)&uStack_300;
      pcStack_2c8 = FUN_106ac4810;
      if (puVar8 != (undefined *)0x0) {
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        puStack_2e0 = puVar4;
        puStack_2d8 = puVar2;
        pppuStack_2d0 = &pppuStack_250;
        (**(code **)(**(long **)(puVar8 + 8) + 0x18))
                  (*(long **)(puVar8 + 8),&UNK_11095be80,&uStack_300,puVar5);
        func_0x00010007e5dc(&puStack_2e8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac4138; end: 106ac4367;  */

/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac4138(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x25;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
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
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095bcf0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar6 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac4368;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar4 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_158,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_140,puVar4);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar3 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_128,puVar3);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_110,puVar3);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x00010007e1e8(&uStack_178,auStack_158,&lStack_f8,4);
    puVar7 = &UNK_11095bde0;
    unaff_x25 = &uStack_178;
    puVar4 = &uStack_178;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095bde0,puVar4,param_6);
    puStack_160 = unaff_x25;
    func_0x00010007e5dc(&puStack_160);
    lVar9 = 0;
    do {
      if ((&cStack_f9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_1c0 = auStack_158;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_1c0);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar5 = puVar3;
    __Unwind_Resume();
    pcStack_188 = FUN_106ac469c;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar7;
    puStack_1b8 = puVar3;
    puStack_1b0 = param_5;
    puStack_1a8 = puVar6;
    puStack_1a0 = puVar2;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_b0;
    _objc_retain(puVar7);
    if (puVar5 != (undefined *)0x0) {
      plVar10 = *(long **)(puVar5 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_1e0,puVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar8 = &UNK_11095be30;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095be30,&uStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar6 = puVar1;
      __Unwind_Resume();
      puStack_228 = (undefined1 *)&uStack_240;
      pcStack_208 = FUN_106ac4810;
      if (puVar6 != (undefined *)0x0) {
        uStack_240 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        puStack_220 = puVar1;
        puStack_218 = puVar7;
        pppuStack_210 = &ppuStack_190;
        (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                  (*(long **)(puVar6 + 8),&UNK_11095be80,&uStack_240,puVar8);
        func_0x00010007e5dc(&puStack_228);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac4368; end: 106ac469b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac465c) */

void FUN_106ac4368(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x25;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
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
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_11095bde0;
    unaff_x25 = &uStack_d8;
    puVar2 = &uStack_d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095bde0,puVar2,param_6);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar6 = 0;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_120 = auStack_b8;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_120);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar4 = puVar3;
    __Unwind_Resume();
    pcStack_e8 = FUN_106ac469c;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puStack_118 = puVar3;
    puStack_110 = param_5;
    puStack_108 = param_4;
    puStack_100 = param_3;
    puStack_f8 = param_2;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    if (puVar4 != (undefined *)0x0) {
      plVar7 = *(long **)(puVar4 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_140,puVar3);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_128,1);
      puVar5 = &UNK_11095be30;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095be30,&uStack_160,puVar2);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      if (cStack_129 < '\0') {
        __ZdlPv(auStack_140[0]);
      }
    }
    puVar3 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      puVar4 = puVar3;
      __Unwind_Resume();
      puStack_188 = (undefined1 *)&uStack_1a0;
      pcStack_168 = FUN_106ac4810;
      if (puVar4 != (undefined *)0x0) {
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        puStack_180 = puVar3;
        puStack_178 = puVar1;
        ppuStack_170 = &puStack_f0;
        (**(code **)(**(long **)(puVar4 + 8) + 0x18))
                  (*(long **)(puVar4 + 8),&UNK_11095be80,&uStack_1a0,puVar5);
        func_0x00010007e5dc(&puStack_188);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac469c; end: 106ac480f;  */

void FUN_106ac469c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095be30;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095be30,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac4810;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095be80,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac4810; end: 106ac4887;  */

void FUN_106ac4810(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095be80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac4888; end: 106ac49fb;  */

void FUN_106ac4888(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095bed0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095bed0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac49fc;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095bf70,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac49fc; end: 106ac4a73;  */

void FUN_106ac49fc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095bf70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac4a74; end: 106ac4ca3;  */

/* WARNING: Removing unreachable block (ram,0x000106ac53a0) */

void FUN_106ac4a74(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
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
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11095c010;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    puVar10 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106ac4ca4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar10;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
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
    puVar6 = &UNK_11095c100;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar10 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar10 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_106ac4e18;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  plStack_148 = plVar12;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095c150;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar8;
    puVar9 = puVar7;
    puVar10 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar8;
      puVar9 = puVar7;
      puVar10 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar5 = puVar1;
    __Unwind_Resume();
    puVar8 = &uStack_220;
    pcStack_1a8 = FUN_106ac4f8c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar4;
    puVar7 = puVar2;
    puStack_1e0 = unaff_x24;
    puStack_1d8 = unaff_x23;
    puStack_1d0 = puVar10;
    plStack_1c8 = plVar12;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    _objc_retain(puVar4);
    if (puVar5 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar5 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_200,puVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
      puVar3 = &UNK_11095c1a0;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      puVar7 = puVar8;
      puVar9 = puVar2;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar7 = puVar8;
        puVar9 = puVar2;
      }
    }
    puVar1 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Unwind_Resume();
    puVar8 = &uStack_2e0;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar2 = puVar7;
    puVar10 = puVar9;
    _objc_retain(puVar3);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    if (puVar1 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar1 + 8);
      puVar6 = &UNK_11095c240;
      (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_11095c240);
      if ((int)plVar12 != 0) {
        plVar12 = *(long **)(puVar1 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          puVar1 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_2c0,puVar1);
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar2 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_2a8,puVar2);
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar2 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_290,puVar2);
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
        puVar6 = &UNK_11095c240;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095c240,&uStack_2e0,param_6);
        puStack_2c8 = (undefined1 *)&uStack_2e0;
        func_0x00010007e5dc(&puStack_2c8);
        lVar11 = 0;
        puVar2 = puVar8;
        puVar10 = param_6;
        do {
          if ((&cStack_279)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          unaff_x24 = &uStack_2e0;
        } while (lVar11 != -0x48);
      }
    }
    _objc_release(puVar9);
    _objc_release(puVar7);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_2c0);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar3);
      __Unwind_Resume();
      _objc_retain(puVar6);
      _objc_retain(puVar2);
      _objc_retain(puVar10);
      if (puVar1 != (undefined *)0x0) {
        FUN_106ac5100(puVar1,puVar6,puVar2,puVar10,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar10);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac4ca4; end: 106ac4e17;  */

/* WARNING: Removing unreachable block (ram,0x000106ac53a0) */

void FUN_106ac4ca4(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
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
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11095c100;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095c150;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_5 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_5 = puVar3;
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
    plVar8 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c1a0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_5 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_5 = puVar6;
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
  puVar7 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(param_5);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_11095c240;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_11095c240);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
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
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar3 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_208,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar3 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_1f0,puVar3);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar4 = &UNK_11095c240;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095c240,&uStack_240,param_6);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar9 = 0;
      puVar6 = (undefined *)puVar5;
      puVar7 = param_6;
      do {
        if ((&cStack_1d9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = &uStack_240;
      } while (lVar9 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_220);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      FUN_106ac5100(puVar3,puVar4,puVar6,puVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106ac4e18; end: 106ac4f8b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac53a0) */

void FUN_106ac4e18(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
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
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11095c150;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095c1a0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_5 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_5 = puVar3;
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
  puVar5 = &uStack_1c0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  puVar7 = param_5;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    puVar1 = &UNK_11095c240;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_11095c240);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
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
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_188,puVar1);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_170,puVar1);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
      puVar1 = &UNK_11095c240;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095c240,&uStack_1c0,param_6);
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      func_0x00010007e5dc(&puStack_1a8);
      lVar9 = 0;
      puVar2 = (undefined *)puVar5;
      puVar7 = param_6;
      do {
        if ((&cStack_159)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = &uStack_1c0;
      } while (lVar9 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(puVar6);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_1a0);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      FUN_106ac5100(puVar3,puVar1,puVar2,puVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106ac4f8c; end: 106ac50ff;  */

/* WARNING: Removing unreachable block (ram,0x000106ac53a0) */

void FUN_106ac4f8c(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
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
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11095c1a0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  puVar7 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(param_5);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_11095c240;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_11095c240);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
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
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_108,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_11095c240;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095c240,&uStack_140,param_6);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar9 = 0;
      puVar6 = (undefined *)puVar5;
      puVar7 = param_6;
      do {
        if ((&cStack_d9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar9 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_120);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar3);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puVar2 != (undefined *)0x0) {
      FUN_106ac5100(puVar2,puVar3,puVar6,puVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106ac5100; end: 106ac53df;  */

/* WARNING: Removing unreachable block (ram,0x000106ac53a0) */

void FUN_106ac5100(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
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
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar4 = param_4;
  puVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_11095c240;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095c240);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_88,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_11095c240;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095c240,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      puVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    if (puVar3 != (undefined *)0x0) {
      FUN_106ac5100(puVar3,puVar2,puVar4,puVar6,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106ac53e0; end: 106ac5493;  */

void FUN_106ac53e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_106ac5100(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ac5494; end: 106ac56c3;  */

void FUN_106ac5494(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11095c290;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095c290,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_106ac56c4;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11095c380,&uStack_e0,puVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 106ac56c4; end: 106ac573b;  */

void FUN_106ac56c4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c380,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac573c; end: 106ac57b3;  */

void FUN_106ac573c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c420,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac57b4; end: 106ac582b;  */

void FUN_106ac57b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c470,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac582c; end: 106ac58a3;  */

void FUN_106ac582c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c4c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac58a4; end: 106ac5a17;  */

void FUN_106ac58a4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c510;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095c510,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac5a18;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095c560,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac5a18; end: 106ac5a8f;  */

void FUN_106ac5a18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c560,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac5a90; end: 106ac5b07;  */

void FUN_106ac5a90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c5b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac5b08; end: 106ac5b7f;  */

void FUN_106ac5b08(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c600,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac5b80; end: 106ac5daf;  */

void FUN_106ac5b80(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
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
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c6f0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c6f0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106ac5db0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095c740;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c740,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac5fe0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095c790;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c790,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106ac6210;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_11095c7e0;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c7e0,puVar5,uVar10);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar12 = 0;
    puVar2 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_106ac6440;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar8 = puVar5;
  uVar10 = uVar11;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  puStack_298 = puVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar7 = &UNK_11095c830;
    unaff_x23 = &uStack_318;
    puVar8 = &uStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c830,puVar8,uVar11);
    puStack_300 = unaff_x23;
    func_0x00010007e5dc(&puStack_300);
    lVar12 = 0;
    puVar2 = auStack_2f8;
    uVar10 = uVar11;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_106ac6670;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar2;
  puStack_348 = puVar1;
  puStack_340 = puVar5;
  puStack_338 = puVar3;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_398,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_380,puVar2);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar4 = &UNK_11095c880;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c880,&uStack_3b8,uVar10);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar12 = 0;
    do {
      if ((&cStack_369)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  puStack_3e8 = (undefined1 *)&uStack_400;
  pcStack_3c8 = FUN_106ac68a0;
  if (puVar1 != (undefined *)0x0) {
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    puStack_3e0 = puVar8;
    puStack_3d8 = puVar7;
    pppuStack_3d0 = &pppuStack_330;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_11095c8d0,&uStack_400,puVar4);
    func_0x00010007e5dc(&puStack_3e8);
  }
  return;
}



/* Entry: 106ac5db0; end: 106ac5fdf;  */

void FUN_106ac5db0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c740;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c740,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106ac5fe0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095c790;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c790,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac6210;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095c7e0;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c7e0,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106ac6440;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_11095c830;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c830,puVar5,uVar10);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar12 = 0;
    puVar2 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_106ac6670;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  puStack_298 = puVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_2f8,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar7 = &UNK_11095c880;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c880,&uStack_318,uVar11);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar12 = 0;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  __Unwind_Resume();
  puStack_348 = (undefined1 *)&uStack_360;
  pcStack_328 = FUN_106ac68a0;
  if (puVar1 != (undefined *)0x0) {
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    puStack_340 = puVar5;
    puStack_338 = puVar3;
    pppuStack_330 = &pppuStack_290;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_11095c8d0,&uStack_360,puVar7);
    func_0x00010007e5dc(&puStack_348);
  }
  return;
}



/* Entry: 106ac5fe0; end: 106ac620f;  */

void FUN_106ac5fe0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c790;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c790,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106ac6210;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095c7e0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c7e0,puVar8,uVar10);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac6440;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095c830;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c830,puVar9,uVar11);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar12 = 0;
    puVar2 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106ac6670;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_11095c880;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095c880,&uStack_278,uVar10);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar12 = 0;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_106ac68a0;
  if (puVar1 != (undefined *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a0 = puVar9;
    puStack_298 = puVar4;
    pppuStack_290 = &pppuStack_1f0;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_11095c8d0,&uStack_2c0,puVar3);
    func_0x00010007e5dc(&puStack_2a8);
  }
  return;
}



/* Entry: 106ac6210; end: 106ac643f;  */

void FUN_106ac6210(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c7e0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095c7e0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    puVar5 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106ac6440;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar10 = uVar9;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095c830;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095c830,puVar8,uVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar11 = 0;
    puVar5 = auStack_118;
    uVar10 = uVar9;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106ac6670;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095c880;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095c880,&uStack_1d8,uVar10);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar11 = 0;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  puStack_208 = (undefined1 *)&uStack_220;
  pcStack_1e8 = FUN_106ac68a0;
  if (puVar1 != (undefined *)0x0) {
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_200 = puVar8;
    puStack_1f8 = puVar7;
    pppuStack_1f0 = &ppuStack_150;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_11095c8d0,&uStack_220,puVar4);
    func_0x00010007e5dc(&puStack_208);
  }
  return;
}



/* Entry: 106ac6440; end: 106ac666f;  */

void FUN_106ac6440(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095c830;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095c830,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar8 = 0;
    puVar5 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106ac6670;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_11095c880;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095c880,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_106ac68a0;
  if (puVar3 != (undefined *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095c8d0,&uStack_180,puVar6);
    func_0x00010007e5dc(&puStack_168);
  }
  return;
}



/* Entry: 106ac6670; end: 106ac689f;  */

void FUN_106ac6670(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11095c880;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095c880,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_106ac68a0;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11095c8d0,&uStack_e0,puVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 106ac68a0; end: 106ac6917;  */

void FUN_106ac68a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c8d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac6918; end: 106ac6a8b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac71ec) */
/* WARNING: Removing unreachable block (ram,0x000106ac6e18) */
/* WARNING: Removing unreachable block (ram,0x000106ac7628) */

void FUN_106ac6918(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined8 auStack_308 [2];
  char cStack_2f1;
  long alStack_2f0 [2];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11095ca10;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_5 = param_4;
    }
  }
  puVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  puVar6 = puVar4;
  puVar7 = param_5;
  puVar8 = param_6;
  puVar10 = param_7;
  puVar17 = param_8;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (puVar15 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar15 + 8);
    puVar2 = &UNK_11095ca60;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(puVar15 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        puVar15 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_160,puVar15);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar15 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_148,puVar15);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar15 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_130,puVar15);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar15 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_118,puVar15);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar15 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_100,puVar15);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_e8,5);
      puVar7 = (undefined *)((long)param_8 * 10);
      puVar2 = &UNK_11095ca60;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar14 = 0;
      puVar15 = auStack_160;
      puVar6 = (undefined *)puVar5;
      do {
        if ((&cStack_e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  puVar16 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      puVar15 = puVar15 + -0x18;
    } while (puVar15 != auStack_160);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar5 = &uStack_280;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar2;
    puVar4 = puVar6;
    puVar15 = puVar7;
    puVar9 = puVar8;
    puVar11 = puVar10;
    puVar12 = puVar17;
    _objc_retain(puVar2);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    if (puVar16 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar16 + 8);
      puVar1 = &UNK_11095cab0;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        plVar13 = *(long **)(puVar16 + 8);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          puVar1 = puVar2;
          _objc_retainAutorelease(puVar2);
          func_0x00010bdc3520();
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_260,puVar1);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar6);
          puVar1 = puVar6;
          func_0x00010bdc3520(puVar6);
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_248,puVar1);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar1 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_230,puVar1);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar1 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_218,puVar1);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar1 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar1 = puVar10;
          func_0x00010bdc3520();
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_200,puVar1);
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_1e8,5);
        puVar15 = (undefined *)((long)puVar17 * 10);
        puVar1 = &UNK_11095cab0;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        puStack_268 = (undefined1 *)&uStack_280;
        func_0x00010007e5dc(&puStack_268);
        lVar14 = 0;
        puVar16 = auStack_260;
        puVar4 = (undefined *)puVar5;
        do {
          if ((&cStack_1e9)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x78);
      }
    }
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar17 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      do {
        puVar16 = puVar16 + -0x18;
      } while (puVar16 != auStack_260);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
      __Unwind_Resume();
      puVar5 = &uStack_3a0;
      alStack_2f0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = puVar1;
      puVar6 = puVar4;
      puVar7 = puVar15;
      puVar8 = puVar9;
      puVar10 = puVar11;
      puVar16 = puVar12;
      _objc_retain(puVar1);
      _objc_retain(puVar4);
      _objc_retain(puVar15);
      _objc_retain(puVar9);
      _objc_retain(puVar11);
      _objc_retain(puVar12);
      if (puVar17 != (undefined *)0x0) {
        plVar13 = *(long **)(puVar17 + 8);
        puVar2 = &UNK_11095cb00;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_11095cb00);
        if ((int)plVar13 != 0) {
          plVar13 = *(long **)(puVar17 + 8);
          _objc_retain(puVar1);
          if (puVar1 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
          }
          _objc_release(puVar1);
          func_0x00010002b838(auStack_380,puVar2);
          _objc_retain(puVar4);
          if (puVar4 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            _objc_retainAutorelease(puVar4);
            puVar2 = puVar4;
            func_0x00010bdc3520(puVar4);
          }
          _objc_release(puVar4);
          func_0x00010002b838(auStack_368,puVar2);
          _objc_retain(puVar15);
          if (puVar15 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            _objc_retainAutorelease(puVar15);
            puVar2 = puVar15;
            func_0x00010bdc3520(puVar15);
          }
          _objc_release(puVar15);
          func_0x00010002b838(auStack_350,puVar2);
          _objc_retain(puVar9);
          if (puVar9 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            _objc_retainAutorelease(puVar9);
            puVar2 = puVar9;
            func_0x00010bdc3520(puVar9);
          }
          _objc_release(puVar9);
          func_0x00010002b838(auStack_338,puVar2);
          _objc_retain(puVar11);
          if (puVar11 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            _objc_retainAutorelease(puVar11);
            puVar2 = puVar11;
            func_0x00010bdc3520(puVar11);
          }
          _objc_release(puVar11);
          func_0x00010002b838(auStack_320,puVar2);
          _objc_retain(puVar12);
          if (puVar12 == (undefined *)0x0) {
            puVar2 = &UNK_10f3adf9b;
          }
          else {
            _objc_retainAutorelease(puVar12);
            puVar2 = puVar12;
            func_0x00010bdc3520(puVar12);
          }
          _objc_release(puVar12);
          func_0x00010002b838(auStack_308,puVar2);
          uStack_3a0 = 0;
          uStack_398 = 0;
          uStack_390 = 0;
          func_0x00010007e1e8(&uStack_3a0,auStack_380,alStack_2f0,6);
          puVar2 = &UNK_11095cb00;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095cb00,&uStack_3a0,param_9);
          puStack_388 = (undefined1 *)&uStack_3a0;
          func_0x00010007e5dc(&puStack_388);
          lVar14 = 0;
          puVar17 = auStack_380;
          puVar6 = (undefined *)puVar5;
          puVar7 = param_9;
          do {
            if ((&cStack_2f1)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_308 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x90);
        }
      }
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar15);
      _objc_release(puVar4);
      puVar3 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_2f0[0]) {
        ___stack_chk_fail();
        _objc_release(puVar12);
        do {
          puVar17 = puVar17 + -0x18;
        } while (puVar17 != auStack_380);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar15);
        _objc_release(puVar4);
        _objc_release(puVar1);
        __Unwind_Resume();
        _objc_retain(puVar2);
        _objc_retain(puVar6);
        _objc_retain(puVar7);
        _objc_retain(puVar8);
        _objc_retain(puVar10);
        _objc_retain(puVar16);
        if (puVar3 != (undefined *)0x0) {
          FUN_106ac7234(puVar3,puVar2,puVar6,puVar7,puVar8,puVar10,puVar16,(long)(param_1 * 1000.0))
          ;
        }
        _objc_release(puVar16);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar2);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac6a8c; end: 106ac6e5f;  */

/* WARNING: Removing unreachable block (ram,0x000106ac71ec) */
/* WARNING: Removing unreachable block (ram,0x000106ac6e18) */
/* WARNING: Removing unreachable block (ram,0x000106ac7628) */

void FUN_106ac6a8c(double param_1,undefined1 *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined8 auStack_288 [2];
  char cStack_271;
  long alStack_270 [2];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar6 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  puVar8 = param_5;
  puVar10 = param_6;
  puVar12 = param_7;
  puVar17 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_2 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_11095ca60;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_c8,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b0,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_98,puVar2);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar2 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_80,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar8 = (undefined *)((long)param_8 * 10);
      puVar2 = &UNK_11095ca60;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar15 = 0;
      param_2 = auStack_e0;
      puVar5 = (undefined *)puVar6;
      do {
        if ((&cStack_69)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != auStack_e0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  puVar9 = puVar8;
  puVar11 = puVar10;
  puVar13 = puVar12;
  puVar14 = puVar17;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  if (puVar16 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar16 + 8);
    puVar4 = &UNK_11095cab0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar16 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        puVar16 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar16);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar16 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_1c8,puVar16);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar16 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1b0,puVar16);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar16 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_198,puVar16);
      _objc_retain(puVar12);
      if (puVar12 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar16 = puVar12;
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_180,puVar16);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_168,5);
      puVar9 = (undefined *)((long)puVar17 * 10);
      puVar4 = &UNK_11095cab0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar15 = 0;
      puVar16 = auStack_1e0;
      puVar7 = (undefined *)puVar6;
      do {
        if ((&cStack_169)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar17 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_1e0);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar6 = &uStack_320;
  alStack_270[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar4;
  puVar5 = puVar7;
  puVar8 = puVar9;
  puVar10 = puVar11;
  puVar12 = puVar13;
  puVar16 = puVar14;
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  if (puVar17 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar17 + 8);
    puVar2 = &UNK_11095cb00;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cb00);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar17 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_300,puVar2);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_2e8,puVar2);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_2d0,puVar2);
      _objc_retain(puVar11);
      if (puVar11 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar2 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_2b8,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2a0,puVar2);
      _objc_retain(puVar14);
      if (puVar14 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar2 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x00010002b838(auStack_288,puVar2);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010007e1e8(&uStack_320,auStack_300,alStack_270,6);
      puVar2 = &UNK_11095cb00;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cb00,&uStack_320,param_9);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x00010007e5dc(&puStack_308);
      lVar15 = 0;
      puVar17 = auStack_300;
      puVar5 = (undefined *)puVar6;
      puVar8 = param_9;
      do {
        if ((&cStack_271)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_288 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x90);
    }
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_270[0]) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    do {
      puVar17 = puVar17 + -0x18;
    } while (puVar17 != auStack_300);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar4);
    __Unwind_Resume();
    _objc_retain(puVar2);
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    _objc_retain(puVar16);
    if (puVar3 != (undefined *)0x0) {
      FUN_106ac7234(puVar3,puVar2,puVar5,puVar8,puVar10,puVar12,puVar16,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106ac6e60; end: 106ac7233;  */

/* WARNING: Removing unreachable block (ram,0x000106ac71ec) */
/* WARNING: Removing unreachable block (ram,0x000106ac7628) */

void FUN_106ac6e60(double param_1,undefined1 *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [2];
  char cStack_171;
  long alStack_170 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar6 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar5 = param_4;
  puVar8 = param_5;
  puVar10 = param_6;
  puVar12 = param_7;
  puVar14 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_2 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_11095cab0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_c8,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b0,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_98,puVar2);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar2 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_80,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar8 = (undefined *)((long)param_8 * 10);
      puVar2 = &UNK_11095cab0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar16 = 0;
      param_2 = auStack_e0;
      puVar5 = (undefined *)puVar6;
      do {
        if ((&cStack_69)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != -0x78);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar17 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_e0);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    puVar6 = &uStack_220;
    alStack_170[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar2;
    puVar7 = puVar5;
    puVar9 = puVar8;
    puVar11 = puVar10;
    puVar13 = puVar12;
    puVar15 = puVar14;
    _objc_retain(puVar2);
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    _objc_retain(puVar14);
    if (puVar17 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar17 + 8);
      puVar4 = &UNK_11095cb00;
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cb00);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(puVar17 + 8);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          puVar17 = puVar2;
          _objc_retainAutorelease(puVar2);
          func_0x00010bdc3520();
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_200,puVar17);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar5);
          puVar17 = puVar5;
          func_0x00010bdc3520(puVar5);
        }
        _objc_release(puVar5);
        func_0x00010002b838(auStack_1e8,puVar17);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar17 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_1d0,puVar17);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar17 = puVar10;
          func_0x00010bdc3520(puVar10);
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_1b8,puVar17);
        _objc_retain(puVar12);
        if (puVar12 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar12);
          puVar17 = puVar12;
          func_0x00010bdc3520(puVar12);
        }
        _objc_release(puVar12);
        func_0x00010002b838(auStack_1a0,puVar17);
        _objc_retain(puVar14);
        if (puVar14 == (undefined *)0x0) {
          puVar17 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar14);
          puVar17 = puVar14;
          func_0x00010bdc3520(puVar14);
        }
        _objc_release(puVar14);
        func_0x00010002b838(auStack_188,puVar17);
        uStack_220 = 0;
        uStack_218 = 0;
        uStack_210 = 0;
        func_0x00010007e1e8(&uStack_220,auStack_200,alStack_170,6);
        puVar4 = &UNK_11095cb00;
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cb00,&uStack_220,param_9);
        puStack_208 = (undefined1 *)&uStack_220;
        func_0x00010007e5dc(&puStack_208);
        lVar16 = 0;
        puVar17 = auStack_200;
        puVar7 = (undefined *)puVar6;
        puVar9 = param_9;
        do {
          if ((&cStack_171)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_188 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != -0x90);
      }
    }
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar5);
    puVar3 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_170[0]) {
      ___stack_chk_fail();
      _objc_release(puVar14);
      do {
        puVar17 = puVar17 + -0x18;
      } while (puVar17 != auStack_200);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar2);
      __Unwind_Resume();
      _objc_retain(puVar4);
      _objc_retain(puVar7);
      _objc_retain(puVar9);
      _objc_retain(puVar11);
      _objc_retain(puVar13);
      _objc_retain(puVar15);
      if (puVar3 != (undefined *)0x0) {
        FUN_106ac7234(puVar3,puVar4,puVar7,puVar9,puVar11,puVar13,puVar15,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac7234; end: 106ac7677;  */

/* WARNING: Removing unreachable block (ram,0x000106ac7628) */

void FUN_106ac7234(double param_1,undefined1 *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  puVar5 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar4 = param_4;
  puVar6 = param_5;
  puVar7 = param_6;
  puVar8 = param_7;
  puVar9 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_2 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_11095cb00;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cb00);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_100,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_e8,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_d0,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_b8,puVar2);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar2 = param_7;
        func_0x00010bdc3520(param_7);
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_a0,puVar2);
      _objc_retain(param_8);
      if (param_8 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_8);
        puVar2 = param_8;
        func_0x00010bdc3520(param_8);
      }
      _objc_release(param_8);
      func_0x00010002b838(auStack_88,puVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,alStack_70,6);
      puVar2 = &UNK_11095cb00;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cb00,&uStack_120,param_9);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      lVar10 = 0;
      param_2 = auStack_100;
      puVar4 = (undefined *)puVar5;
      puVar6 = param_9;
      do {
        if ((&cStack_71)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x90);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(param_8);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_100);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      FUN_106ac7234(puVar3,puVar2,puVar4,puVar6,puVar7,puVar8,puVar9,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106ac7678; end: 106ac779b;  */

void FUN_106ac7678(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_2 != 0) {
    FUN_106ac7234(param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)(param_1 * 1000.0));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ac779c; end: 106ac7be3;  */

/* WARNING: Removing unreachable block (ram,0x000106ac7b94) */
/* WARNING: Removing unreachable block (ram,0x000106ac7fd8) */

void FUN_106ac779c(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,long param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *unaff_x28;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined8 auStack_1a8 [2];
  char cStack_191;
  long alStack_190 [2];
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  puVar6 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar7 = param_4;
  puVar8 = param_5;
  puVar9 = param_6;
  puVar10 = param_7;
  lVar12 = param_8;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095cb50;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_100,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_d0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b8,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_a0,puVar2);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        unaff_x28 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        unaff_x28 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_88,unaff_x28);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,alStack_70,6);
      puVar7 = (undefined *)(param_8 * 10);
      puVar2 = &UNK_11095cb50;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      lVar11 = 0;
      param_1 = auStack_100;
      puVar5 = (undefined *)puVar6;
      do {
        if ((&cStack_71)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(param_7);
    puStack_178 = auStack_100;
    do {
      param_1 = param_1 + -0x18;
    } while (param_1 != puStack_178);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar13 = puVar3;
    __Unwind_Resume();
    pcStack_128 = FUN_106ac7be4;
    alStack_190[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar2;
    puStack_180 = unaff_x28;
    puStack_170 = param_1;
    puStack_168 = puVar3;
    puStack_160 = param_7;
    puStack_158 = param_6;
    puStack_150 = param_5;
    puStack_148 = param_4;
    puStack_140 = param_3;
    puStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    if (puVar13 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar13 + 8);
      puVar4 = &UNK_11095cba0;
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cba0);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(puVar13 + 8);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          puVar3 = puVar2;
          _objc_retainAutorelease(puVar2);
          func_0x00010bdc3520();
        }
        _objc_release(puVar2);
        func_0x00010002b838(auStack_220,puVar3);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar5);
          puVar3 = puVar5;
          func_0x00010bdc3520(puVar5);
        }
        _objc_release(puVar5);
        func_0x00010002b838(auStack_208,puVar3);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar3 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x00010002b838(auStack_1f0,puVar3);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar3 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_1d8,puVar3);
        _objc_retain(puVar9);
        if (puVar9 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar9);
          puVar3 = puVar9;
          func_0x00010bdc3520(puVar9);
        }
        _objc_release(puVar9);
        func_0x00010002b838(auStack_1c0,puVar3);
        _objc_retain(puVar10);
        if (puVar10 == (undefined *)0x0) {
          puVar3 = &UNK_10f3adf9b;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar3 = puVar10;
          func_0x00010bdc3520(puVar10);
        }
        _objc_release(puVar10);
        func_0x00010002b838(auStack_1a8,puVar3);
        uStack_240 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        func_0x00010007e1e8(&uStack_240,auStack_220,alStack_190,6);
        puVar4 = &UNK_11095cba0;
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cba0,&uStack_240,lVar12);
        puStack_228 = (undefined1 *)&uStack_240;
        func_0x00010007e5dc(&puStack_228);
        lVar12 = 0;
        puVar13 = auStack_220;
        do {
          if ((&cStack_191)[lVar12] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_1a8 + lVar12));
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != -0x90);
      }
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar3 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_190[0]) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      do {
        puVar13 = puVar13 + -0x18;
      } while (puVar13 != auStack_220);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar2);
      __Unwind_Resume();
      pcStack_248 = FUN_106ac8028;
      if (puVar3 != (undefined *)0x0) {
        plVar1 = *(long **)(puVar3 + 8);
        puStack_260 = puVar5;
        puStack_258 = puVar2;
        ppuStack_250 = &puStack_130;
        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cbf0);
        if ((int)plVar1 != 0) {
          uStack_280 = 0;
          uStack_278 = 0;
          uStack_270 = 0;
          (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                    (*(long **)(puVar3 + 8),&UNK_11095cbf0,&uStack_280,(long)puVar4 * 10);
          puStack_268 = (undefined1 *)&uStack_280;
          func_0x00010007e5dc(&puStack_268);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac7be4; end: 106ac8027;  */

/* WARNING: Removing unreachable block (ram,0x000106ac7fd8) */

void FUN_106ac7be4(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095cba0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cba0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_100,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_e8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_d0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_b8,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_a0,puVar2);
      _objc_retain(param_7);
      if (param_7 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_7);
        puVar2 = param_7;
        func_0x00010bdc3520(param_7);
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_88,puVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,alStack_70,6);
      puVar2 = &UNK_11095cba0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cba0,&uStack_120,param_8);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      lVar4 = 0;
      param_1 = auStack_100;
      do {
        if ((&cStack_71)[lVar4] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar4));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x90);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      param_1 = param_1 + -0x18;
    } while (param_1 != auStack_100);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_128 = FUN_106ac8028;
    if (puVar3 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar3 + 8);
      puStack_140 = param_3;
      puStack_138 = param_2;
      puStack_130 = &stack0xfffffffffffffff0;
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cbf0);
      if ((int)plVar1 != 0) {
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_11095cbf0,&uStack_160,(long)puVar2 * 10);
        puStack_148 = (undefined1 *)&uStack_160;
        func_0x00010007e5dc(&puStack_148);
      }
    }
    return;
  }
  return;
}



/* Entry: 106ac8028; end: 106ac80c3;  */

void FUN_106ac8028(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095cbf0);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_11095cbf0,&uStack_40,param_2 * 10);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 106ac80c4; end: 106ac813b;  */

void FUN_106ac80c4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095cc40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac813c; end: 106ac838b;  */

void FUN_106ac813c(undefined8 *param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
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
  puVar2 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    puVar2 = &UNK_11095cc90;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_11095cc90;
      unaff_x23 = &uStack_98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cc90,puVar3,param_4);
      puStack_80 = unaff_x23;
      func_0x00010007e5dc(&puStack_80);
      lVar7 = 0;
      param_1 = auStack_78;
      do {
        if ((&cStack_49)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
  }
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_106ac838c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  puStack_c8 = puVar4;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f3adf9b;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_11095cce0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cce0,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_106ac8500;
  if (puVar5 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar2;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_11095ce70,&uStack_160,puVar6);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 106ac838c; end: 106ac84ff;  */

void FUN_106ac838c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095cce0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095cce0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac8500;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095ce70,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac8500; end: 106ac8577;  */

void FUN_106ac8500(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095ce70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac8578; end: 106ac85ef;  */

void FUN_106ac8578(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095cec0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac85f0; end: 106ac8787;  */

void FUN_106ac85f0(long param_1,undefined *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095cf60;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
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
      puVar2 = &UNK_11095cf60;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cf60,&uStack_80,(long)param_3 * 10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_106ac8788;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
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
    puVar5 = &UNK_11095cfb0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cfb0,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_106ac88fc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar6 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar2 = &UNK_11095d000;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d000,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_106ac8a70;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar5 = &UNK_11095d050;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d050,&uStack_200,puVar6);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_106ac8be4;
  if (puVar4 != (undefined *)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    puStack_220 = puVar3;
    puStack_218 = puVar2;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11095d0a0,&uStack_240,puVar5);
    func_0x00010007e5dc(&puStack_228);
  }
  return;
}



/* Entry: 106ac8788; end: 106ac88fb;  */

void FUN_106ac8788(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095cfb0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095cfb0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106ac88fc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095d000;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095d000,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106ac8a70;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d050;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095d050,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_106ac8be4;
  if (puVar3 != (undefined *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    puStack_1a0 = puVar2;
    puStack_198 = puVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d0a0,&uStack_1c0,puVar1);
    func_0x00010007e5dc(&puStack_1a8);
  }
  return;
}



/* Entry: 106ac88fc; end: 106ac8a6f;  */

void FUN_106ac88fc(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d000;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d000,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_106ac8a70;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095d050;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d050,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106ac8be4;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d0a0,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106ac8a70; end: 106ac8be3;  */

void FUN_106ac8a70(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d050;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095d050,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac8be4;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d0a0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac8be4; end: 106ac8c5b;  */

void FUN_106ac8be4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d0a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac8c5c; end: 106ac8cd3;  */

void FUN_106ac8c5c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d0f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac8cd4; end: 106ac8e47;  */

/* WARNING: Removing unreachable block (ram,0x000106ac95a4) */
/* WARNING: Removing unreachable block (ram,0x000106ac91d4) */
/* WARNING: Removing unreachable block (ram,0x000106ac9978) */

void FUN_106ac8cd4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined *puStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  long *plStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d140;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar8;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar8;
      param_4 = param_3;
    }
  }
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_88 = FUN_106ac8e48;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar9 = puVar7;
  puVar11 = param_4;
  puVar6 = param_5;
  puVar8 = param_6;
  puVar17 = param_7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (puVar15 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar15 + 8);
    puVar4 = &UNK_11095d190;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(puVar15 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        puVar15 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_160,puVar15);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar15 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_148,puVar15);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar15 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_130,puVar15);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar15 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_118,puVar15);
      _objc_retain(param_6);
      if (param_6 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520();
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_100,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_e8,5);
      puVar11 = (undefined *)((long)param_7 * 10);
      puVar4 = &UNK_11095d190;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar14 = 0;
      puVar15 = auStack_160;
      puVar9 = (undefined *)puVar10;
      do {
        if ((&cStack_e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar16 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != auStack_160);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  pcStack_188 = FUN_106ac921c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar7 = puVar9;
  puVar15 = puVar11;
  puVar2 = (undefined8 *)puVar6;
  puVar10 = puVar8;
  puVar12 = puVar17;
  ppuStack_190 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  if (puVar16 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar16 + 8);
    puVar1 = &UNK_11095d1e0;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(puVar16 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_260,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar1 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_248,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar1 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_230,puVar1);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar1 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_218,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar3 = puVar8;
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_200,puVar3);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_1e8,5);
      puVar1 = &UNK_11095d1e0;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x00010007e5dc(&puStack_268);
      lVar14 = 0;
      puVar16 = auStack_260;
      puVar7 = (undefined *)puVar5;
      puVar15 = puVar17;
      do {
        if ((&cStack_1e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar9);
  puVar17 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_260);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_288 = FUN_106ac95ec;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar9 = puVar7;
  pppuStack_290 = &ppuStack_190;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar15);
  _objc_retain(puVar2);
  _objc_retain(puVar10);
  if (puVar17 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar17 + 8);
    puVar4 = &UNK_11095d230;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(puVar17 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        puVar4 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_360,puVar4);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar4 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_348,puVar4);
      _objc_retain(puVar15);
      if (puVar15 == (undefined *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar15);
        puVar4 = puVar15;
        func_0x00010bdc3520(puVar15);
      }
      _objc_release(puVar15);
      func_0x00010002b838(auStack_330,puVar4);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar4 = (undefined *)puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_318,puVar4);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar5 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_300,puVar5);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_2e8,5);
      puVar4 = &UNK_11095d230;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d230,&uStack_380,(long)puVar12 * 10);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar14 = 0;
      puVar17 = auStack_360;
      puVar9 = (undefined *)puVar8;
      do {
        if ((&cStack_2e9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar7);
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    do {
      puVar17 = puVar17 + -0x18;
    } while (puVar17 != auStack_360);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar17 = puVar11;
    __Unwind_Resume();
    puVar8 = &uStack_400;
    pcStack_388 = FUN_106ac99c0;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar4;
    puVar16 = puVar9;
    puStack_3c0 = puVar11;
    puStack_3b8 = puVar10;
    puStack_3b0 = (undefined *)puVar2;
    puStack_3a8 = puVar15;
    puStack_3a0 = puVar7;
    puStack_398 = puVar1;
    pppuStack_390 = &pppuStack_290;
    _objc_retain(puVar4);
    plVar13 = (long *)0x0;
    if (puVar17 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar17 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar10 = auStack_3e0;
      func_0x00010002b838(auStack_3e0,puVar1);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar6 = &UNK_11095d280;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d280,&uStack_400,puVar9);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      puVar16 = (undefined *)puVar8;
      puVar2 = &uStack_400;
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
        puVar16 = (undefined *)puVar8;
        puVar2 = &uStack_400;
      }
    }
    puVar1 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar15 = puVar1;
    __Unwind_Resume();
    pcStack_408 = FUN_106ac9b34;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puStack_440 = puVar11;
    puStack_438 = puVar10;
    puStack_430 = (undefined *)puVar2;
    plStack_428 = plVar13;
    puStack_420 = puVar1;
    puStack_418 = puVar4;
    pppuStack_410 = &pppuStack_390;
    _objc_retain(puVar6);
    if (puVar15 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar15 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar7 = &UNK_11095d2d0;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d2d0,&uStack_480,puVar16);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
      }
    }
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar15 = puVar1;
      __Unwind_Resume();
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      pcStack_488 = FUN_106ac9ca8;
      if (puVar15 != (undefined *)0x0) {
        uStack_4c0 = 0;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        puStack_4a0 = puVar1;
        puStack_498 = puVar6;
        pppuStack_490 = &pppuStack_410;
        (**(code **)(**(long **)(puVar15 + 8) + 0x18))
                  (*(long **)(puVar15 + 8),&UNK_11095d320,&uStack_4c0,puVar7);
        func_0x00010007e5dc(&puStack_4a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac8e48; end: 106ac921b;  */

/* WARNING: Removing unreachable block (ram,0x000106ac95a4) */
/* WARNING: Removing unreachable block (ram,0x000106ac91d4) */
/* WARNING: Removing unreachable block (ram,0x000106ac9978) */

void FUN_106ac8e48(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined *param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar9 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  puVar12 = param_4;
  puVar6 = param_5;
  puVar11 = param_6;
  puVar17 = param_7;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095d190;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_e0,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_c8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_b0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_98,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520();
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_80,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar12 = (undefined *)((long)param_7 * 10);
      puVar2 = &UNK_11095d190;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar15 = 0;
      param_1 = auStack_e0;
      puVar7 = (undefined *)puVar9;
      do {
        if ((&cStack_69)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    param_1 = param_1 + -0x18;
  } while (param_1 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  pcStack_108 = FUN_106ac921c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar10 = puVar7;
  puVar13 = puVar12;
  puVar3 = (undefined8 *)puVar6;
  puVar9 = puVar11;
  puVar14 = puVar17;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  _objc_retain(puVar12);
  _objc_retain(puVar6);
  _objc_retain(puVar11);
  if (puVar16 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar16 + 8);
    puVar8 = &UNK_11095d1e0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar16 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        puVar16 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar16);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar16 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_1c8,puVar16);
      _objc_retain(puVar12);
      if (puVar12 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar16 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_1b0,puVar16);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar16 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar16 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_198,puVar16);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar4 = puVar11;
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_180,puVar4);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_168,5);
      puVar8 = &UNK_11095d1e0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar15 = 0;
      puVar16 = auStack_1e0;
      puVar10 = (undefined *)puVar5;
      puVar13 = puVar17;
      do {
        if ((&cStack_169)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar7);
  puVar17 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_1e0);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar11 = &uStack_300;
  pcStack_208 = FUN_106ac95ec;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar7 = puVar10;
  ppuStack_210 = &puStack_110;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(puVar13);
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar17 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar17 + 8);
    puVar2 = &UNK_11095d230;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar17 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_2e0,puVar2);
      _objc_retain(puVar10);
      if (puVar10 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_2c8,puVar2);
      _objc_retain(puVar13);
      if (puVar13 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar2 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_2b0,puVar2);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar2 = (undefined *)puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_298,puVar2);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar5 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_280,puVar5);
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_268,5);
      puVar2 = &UNK_11095d230;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d230,&uStack_300,(long)puVar14 * 10);
      puStack_2e8 = (undefined1 *)&uStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar15 = 0;
      puVar17 = auStack_2e0;
      puVar7 = (undefined *)puVar11;
      do {
        if ((&cStack_269)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x78);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar10);
  puVar12 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  do {
    puVar17 = puVar17 + -0x18;
  } while (puVar17 != auStack_2e0);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar17 = puVar12;
  __Unwind_Resume();
  puVar11 = &uStack_380;
  pcStack_308 = FUN_106ac99c0;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar16 = puVar7;
  puStack_340 = puVar12;
  puStack_338 = puVar9;
  puStack_330 = (undefined *)puVar3;
  puStack_328 = puVar13;
  puStack_320 = puVar10;
  puStack_318 = puVar8;
  pppuStack_310 = &ppuStack_210;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar17 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar17 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = &UNK_10f3adf9b;
    }
    else {
      puVar6 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar9 = auStack_360;
    func_0x00010002b838(auStack_360,puVar6);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar6 = &UNK_11095d280;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d280,&uStack_380,puVar7);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar16 = (undefined *)puVar11;
    puVar3 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar16 = (undefined *)puVar11;
      puVar3 = &uStack_380;
    }
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_388 = FUN_106ac9b34;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = puVar6;
  puStack_3c0 = puVar12;
  puStack_3b8 = puVar9;
  puStack_3b0 = (undefined *)puVar3;
  plStack_3a8 = plVar1;
  puStack_3a0 = puVar7;
  puStack_398 = puVar2;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar6);
  if (puVar8 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar8 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_3e0,puVar2);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar17 = &UNK_11095d2d0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d2d0,&uStack_400,puVar16);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar7 = puVar2;
    __Unwind_Resume();
    puStack_428 = (undefined1 *)&uStack_440;
    pcStack_408 = FUN_106ac9ca8;
    if (puVar7 != (undefined *)0x0) {
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      puStack_420 = puVar2;
      puStack_418 = puVar6;
      pppuStack_410 = &pppuStack_390;
      (**(code **)(**(long **)(puVar7 + 8) + 0x18))
                (*(long **)(puVar7 + 8),&UNK_11095d320,&uStack_440,puVar17);
      func_0x00010007e5dc(&puStack_428);
    }
    return;
  }
  return;
}



/* Entry: 106ac921c; end: 106ac95eb;  */

/* WARNING: Removing unreachable block (ram,0x000106ac95a4) */
/* WARNING: Removing unreachable block (ram,0x000106ac9978) */

void FUN_106ac921c(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined *param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  long *plStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar9 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  puVar6 = param_4;
  puVar12 = (undefined8 *)param_5;
  puVar13 = param_6;
  puVar4 = param_7;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095d1e0;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_e0,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_c8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_b0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_98,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520();
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_80,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar2 = &UNK_11095d1e0;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar14 = 0;
      param_1 = auStack_e0;
      puVar8 = (undefined *)puVar9;
      puVar6 = param_7;
      do {
        if ((&cStack_69)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    param_1 = param_1 + -0x18;
  } while (param_1 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  pcStack_108 = FUN_106ac95ec;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar10 = puVar8;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  _objc_retain(puVar6);
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  if (puVar15 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar15 + 8);
    puVar7 = &UNK_11095d230;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar15 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        puVar15 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_1e0,puVar15);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar15 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1c8,puVar15);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar15 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_1b0,puVar15);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar15 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar15 = (undefined *)puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_198,puVar15);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar3 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x00010002b838(auStack_180,puVar3);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_168,5);
      puVar7 = &UNK_11095d230;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d230,&uStack_200,(long)puVar4 * 10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar14 = 0;
      puVar15 = auStack_1e0;
      puVar10 = (undefined *)puVar9;
      do {
        if ((&cStack_169)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x78);
    }
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar8);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != auStack_1e0);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_280;
  pcStack_208 = FUN_106ac99c0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar7;
  puVar11 = puVar10;
  puStack_240 = puVar4;
  puStack_238 = puVar13;
  puStack_230 = (undefined *)puVar12;
  puStack_228 = puVar6;
  puStack_220 = puVar8;
  puStack_218 = puVar2;
  ppuStack_210 = &puStack_110;
  _objc_retain(puVar7);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar13 = auStack_260;
    func_0x00010002b838(auStack_260,puVar2);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar15 = &UNK_11095d280;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d280,&uStack_280,puVar10);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar11 = (undefined *)puVar9;
    puVar12 = &uStack_280;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar11 = (undefined *)puVar9;
      puVar12 = &uStack_280;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_106ac9b34;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar15;
  puStack_2c0 = puVar4;
  puStack_2b8 = puVar13;
  puStack_2b0 = (undefined *)puVar12;
  plStack_2a8 = plVar1;
  puStack_2a0 = puVar2;
  puStack_298 = puVar7;
  pppuStack_290 = &ppuStack_210;
  _objc_retain(puVar15);
  if (puVar6 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar6 + 8);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar15;
      _objc_retainAutorelease(puVar15);
      func_0x00010bdc3520();
    }
    _objc_release(puVar15);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar8 = &UNK_11095d2d0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d2d0,&uStack_300,puVar11);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
    }
  }
  puVar2 = puVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    _objc_release(puVar15);
    _objc_release(puVar15);
    puVar6 = puVar2;
    __Unwind_Resume();
    puStack_328 = (undefined1 *)&uStack_340;
    pcStack_308 = FUN_106ac9ca8;
    if (puVar6 != (undefined *)0x0) {
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      puStack_320 = puVar2;
      puStack_318 = puVar15;
      pppuStack_310 = &pppuStack_290;
      (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                (*(long **)(puVar6 + 8),&UNK_11095d320,&uStack_340,puVar8);
      func_0x00010007e5dc(&puStack_328);
    }
    return;
  }
  return;
}



/* Entry: 106ac95ec; end: 106ac99bf;  */

/* WARNING: Removing unreachable block (ram,0x000106ac9978) */

void FUN_106ac95ec(undefined1 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 *param_5,undefined8 *param_6,long param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  puVar9 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != (undefined1 *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095d230;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_e0,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_c8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_b0,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = (undefined *)param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_98,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f3adf9b;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar3 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_80,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_68,5);
      puVar2 = &UNK_11095d230;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d230,&uStack_100,param_7 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      lVar11 = 0;
      param_1 = auStack_e0;
      puVar7 = (undefined *)puVar9;
      do {
        if ((&cStack_69)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x78);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    param_1 = param_1 + -0x18;
  } while (param_1 != auStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_108 = FUN_106ac99c0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar10 = puVar7;
  puStack_140 = puVar4;
  puStack_138 = param_6;
  puStack_130 = (undefined *)param_5;
  puStack_128 = param_4;
  puStack_120 = param_3;
  puStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = &UNK_10f3adf9b;
    }
    else {
      puVar6 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    param_6 = auStack_160;
    func_0x00010002b838(auStack_160,puVar6);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar6 = &UNK_11095d280;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d280,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar10 = (undefined *)puVar9;
    param_5 = &uStack_180;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar10 = (undefined *)puVar9;
      param_5 = &uStack_180;
    }
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar8 = puVar7;
    __Unwind_Resume();
    pcStack_188 = FUN_106ac9b34;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar6;
    puStack_1c0 = puVar4;
    puStack_1b8 = param_6;
    puStack_1b0 = (undefined *)param_5;
    plStack_1a8 = plVar1;
    puStack_1a0 = puVar7;
    puStack_198 = puVar2;
    ppuStack_190 = &puStack_110;
    _objc_retain(puVar6);
    if (puVar8 != (undefined *)0x0) {
      plVar1 = *(long **)(puVar8 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar5 = &UNK_11095d2d0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d2d0,&uStack_200,puVar10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      puVar7 = puVar2;
      __Unwind_Resume();
      puStack_228 = (undefined1 *)&uStack_240;
      pcStack_208 = FUN_106ac9ca8;
      if (puVar7 != (undefined *)0x0) {
        uStack_240 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        puStack_220 = puVar2;
        puStack_218 = puVar6;
        pppuStack_210 = &ppuStack_190;
        (**(code **)(**(long **)(puVar7 + 8) + 0x18))
                  (*(long **)(puVar7 + 8),&UNK_11095d320,&uStack_240,puVar5);
        func_0x00010007e5dc(&puStack_228);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 106ac99c0; end: 106ac9b33;  */

void FUN_106ac99c0(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d280;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d280,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_106ac9b34;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095d2d0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d2d0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106ac9ca8;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d320,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106ac9b34; end: 106ac9ca7;  */

void FUN_106ac9b34(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d2d0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095d2d0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106ac9ca8;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d320,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106ac9ca8; end: 106ac9d1f;  */

void FUN_106ac9ca8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d320,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106ac9d20; end: 106ac9e93;  */

void FUN_106ac9d20(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
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
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d370;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d370,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106ac9e94;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar7 = &UNK_11095d3c0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d3c0,&uStack_100,puVar5);
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
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_106aca008;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_160;
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_11095d410;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d410,&uStack_180,puVar3);
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
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  pcStack_188 = FUN_106aca17c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar7 = &UNK_11095d460;
    unaff_x23 = &uStack_218;
    puVar3 = &uStack_218;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d460,puVar3,param_4);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar12 = 0;
    puVar8 = auStack_1f8;
    puVar10 = param_4;
    do {
      if ((&cStack_1c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_106aca3ac;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar9 = puVar3;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  puStack_248 = puVar2;
  puStack_240 = puVar5;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar5);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar6 = &UNK_11095d4b0;
    unaff_x23 = &uStack_2b8;
    puVar9 = &uStack_2b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d4b0,puVar9,puVar10);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar12 = 0;
    puVar5 = auStack_298;
    do {
      if ((&cStack_269)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_340;
  pcStack_2c8 = FUN_106aca5dc;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar8 = puVar9;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  puStack_2e8 = puVar1;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar7;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_320;
    func_0x00010002b838(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    puVar2 = &UNK_11095d500;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d500,&uStack_340,puVar9);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    puVar8 = puVar10;
    puVar5 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar8 = puVar10;
      puVar5 = &uStack_340;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_106aca750;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar5;
  plStack_368 = plVar11;
  puStack_360 = puVar1;
  puStack_358 = puVar6;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar7 = &UNK_11095d550;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d550,&uStack_3c0,puVar8);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_3e8 = (undefined1 *)&uStack_400;
  pcStack_3c8 = FUN_106aca8c4;
  if (puVar6 != (undefined *)0x0) {
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    puStack_3e0 = puVar1;
    puStack_3d8 = puVar2;
    pppuStack_3d0 = &pppuStack_350;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_11095d5a0,&uStack_400,puVar7);
    func_0x00010007e5dc(&puStack_3e8);
  }
  return;
}



/* Entry: 106ac9e94; end: 106aca007;  */

void FUN_106ac9e94(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d3c0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d3c0,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106aca008;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar7 = &UNK_11095d410;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d410,&uStack_100,puVar3);
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
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106aca17c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar3 = puVar5;
  puVar10 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_11095d460;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d460,puVar3,param_4);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar12 = 0;
    puVar8 = auStack_178;
    puVar10 = param_4;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106aca3ac;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar6 = &UNK_11095d4b0;
    unaff_x23 = &uStack_238;
    puVar9 = &uStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d4b0,puVar9,puVar10);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    puVar5 = auStack_218;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_2c0;
  pcStack_248 = FUN_106aca5dc;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  puStack_268 = puVar2;
  puStack_260 = puVar3;
  puStack_258 = puVar1;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = &UNK_11095d500;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d500,&uStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar8 = puVar10;
    puVar5 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar8 = puVar10;
      puVar5 = &uStack_2c0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106aca750;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  plStack_2e8 = plVar11;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar6;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    puVar2 = &UNK_11095d550;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d550,&uStack_340,puVar8);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_368 = (undefined1 *)&uStack_380;
  pcStack_348 = FUN_106aca8c4;
  if (puVar6 != (undefined *)0x0) {
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    puStack_360 = puVar1;
    puStack_358 = puVar7;
    pppuStack_350 = &pppuStack_2d0;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_11095d5a0,&uStack_380,puVar2);
    func_0x00010007e5dc(&puStack_368);
  }
  return;
}



/* Entry: 106aca008; end: 106aca17b;  */

void FUN_106aca008(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d410;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d410,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106aca17c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar7 = &UNK_11095d460;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d460,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar9 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106aca3ac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar9;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar6 = &UNK_11095d4b0;
    unaff_x23 = &uStack_1b8;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d4b0,puVar8,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar12 = 0;
    puVar5 = auStack_198;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_1c8 = FUN_106aca5dc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar9 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar2 = &UNK_11095d500;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d500,&uStack_240,puVar8);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar9 = puVar10;
    puVar5 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar10;
      puVar5 = &uStack_240;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_106aca750;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  plStack_268 = plVar11;
  puStack_260 = puVar1;
  puStack_258 = puVar6;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = &UNK_11095d550;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11095d550,&uStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_2e8 = (undefined1 *)&uStack_300;
  pcStack_2c8 = FUN_106aca8c4;
  if (puVar6 != (undefined *)0x0) {
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    puStack_2e0 = puVar1;
    puStack_2d8 = puVar2;
    pppuStack_2d0 = &pppuStack_250;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_11095d5a0,&uStack_300,puVar7);
    func_0x00010007e5dc(&puStack_2e8);
  }
  return;
}



/* Entry: 106aca17c; end: 106aca3ab;  */

void FUN_106aca17c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
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
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d460;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d460,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106aca3ac;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095d4b0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d4b0,puVar8,uVar11);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_106aca5dc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_11095d500;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d500,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106aca750;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_11095d550;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095d550,&uStack_240,puVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar1;
  __Unwind_Resume();
  puStack_268 = (undefined1 *)&uStack_280;
  pcStack_248 = FUN_106aca8c4;
  if (puVar7 != (undefined *)0x0) {
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    puStack_260 = puVar1;
    puStack_258 = puVar4;
    pppuStack_250 = &pppuStack_1d0;
    (**(code **)(**(long **)(puVar7 + 8) + 0x18))
              (*(long **)(puVar7 + 8),&UNK_11095d5a0,&uStack_280,puVar3);
    func_0x00010007e5dc(&puStack_268);
  }
  return;
}



/* Entry: 106aca3ac; end: 106aca5db;  */

void FUN_106aca3ac(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
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
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d4b0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095d4b0,puVar2,param_4);
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
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106aca5dc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
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
    puVar6 = &UNK_11095d500;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095d500,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106aca750;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_11095d550;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095d550,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_106aca8c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d5a0,&uStack_1e0,puVar4);
    func_0x00010007e5dc(&puStack_1c8);
  }
  return;
}



/* Entry: 106aca5dc; end: 106aca74f;  */

void FUN_106aca5dc(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d500;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d500,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_106aca750;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095d550;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095d550,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106aca8c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d5a0,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106aca750; end: 106aca8c3;  */

void FUN_106aca750(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d550;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095d550,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106aca8c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d5a0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106aca8c4; end: 106aca93b;  */

void FUN_106aca8c4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d5a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106aca93c; end: 106aca9b3;  */

void FUN_106aca93c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d5f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106aca9b4; end: 106acaa2b;  */

void FUN_106aca9b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d640,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acaa2c; end: 106acab9f;  */

void FUN_106acaa2c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d690;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095d690,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106acaba0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d6e0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106acaba0; end: 106acac17;  */

void FUN_106acaba0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d6e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acac18; end: 106acac8f;  */

void FUN_106acac18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d730,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acac90; end: 106acad07;  */

void FUN_106acac90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d780,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acad08; end: 106acae7b;  */

void FUN_106acad08(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d820;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095d820,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106acae7c;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095d870,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106acae7c; end: 106acaef3;  */

void FUN_106acae7c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095d870,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acaef4; end: 106acb067;  */

void FUN_106acaef4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
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
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d8c0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d8c0,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106acb068;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar6 = &UNK_11095d910;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d910,&uStack_100,puVar5);
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
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_106acb1dc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d960;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d960,&uStack_180,puVar3);
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
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  pcStack_188 = FUN_106acb350;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar6 = &UNK_11095d9b0;
    unaff_x23 = &uStack_218;
    puVar3 = &uStack_218;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d9b0,puVar3,param_4);
    puStack_200 = unaff_x23;
    func_0x00010007e5dc(&puStack_200);
    lVar13 = 0;
    puVar8 = auStack_1f8;
    puVar10 = param_4;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_106acb580;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  puStack_248 = puVar2;
  puStack_240 = puVar5;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar5);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
    puVar7 = &UNK_11095da00;
    unaff_x23 = &uStack_2b8;
    puVar9 = &uStack_2b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da00,puVar9,puVar10);
    puStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2a0);
    lVar13 = 0;
    puVar5 = auStack_298;
    puVar11 = puVar10;
    do {
      if ((&cStack_269)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106acb7b0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar8 = puVar9;
  puVar10 = puVar11;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar5;
  puStack_2e8 = puVar1;
  puStack_2e0 = puVar3;
  puStack_2d8 = puVar6;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_320,puVar5);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar2 = &UNK_11095da50;
    unaff_x23 = &uStack_358;
    puVar8 = &uStack_358;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da50,puVar8,puVar11);
    puStack_340 = unaff_x23;
    func_0x00010007e5dc(&puStack_340);
    lVar13 = 0;
    puVar5 = auStack_338;
    puVar10 = puVar11;
    do {
      if ((&cStack_309)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_106acb9e0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar8;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar5;
  puStack_388 = puVar1;
  puStack_380 = puVar9;
  puStack_378 = puVar7;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_3c0,puVar5);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar6 = &UNK_11095daa0;
    unaff_x23 = &uStack_3f8;
    puVar3 = &uStack_3f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095daa0,puVar3,puVar10);
    puStack_3e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_3e0);
    lVar13 = 0;
    puVar5 = auStack_3d8;
    do {
      if ((&cStack_3a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_480;
  pcStack_408 = FUN_106acbc10;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar10 = puVar3;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar5;
  puStack_428 = puVar1;
  puStack_420 = puVar8;
  puStack_418 = puVar2;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_460;
    func_0x00010002b838(auStack_460,puVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
    puVar7 = &UNK_11095db40;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095db40,&uStack_480,puVar3);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    puVar10 = puVar9;
    puVar5 = &uStack_480;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      puVar10 = puVar9;
      puVar5 = &uStack_480;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_106acbd84;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = unaff_x23;
  puStack_4b0 = puVar5;
  plStack_4a8 = plVar12;
  puStack_4a0 = puVar1;
  puStack_498 = puVar6;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    puVar2 = &UNK_11095dbe0;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_11095dbe0);
    if ((int)plVar12 != 0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_4e0,puVar1);
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_4f0 = 0;
      func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
      puVar2 = &UNK_11095dbe0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095dbe0,&uStack_500,puVar10);
      puStack_4e8 = (undefined1 *)&uStack_500;
      func_0x00010007e5dc(&puStack_4e8);
      if (cStack_4c9 < '\0') {
        __ZdlPv(auStack_4e0[0]);
      }
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_528 = (undefined1 *)&uStack_540;
  pcStack_508 = FUN_106acbf18;
  if (puVar6 != (undefined *)0x0) {
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    puStack_520 = puVar1;
    puStack_518 = puVar7;
    pppuStack_510 = &pppuStack_490;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_11095dc30,&uStack_540,puVar2);
    func_0x00010007e5dc(&puStack_528);
  }
  return;
}



/* Entry: 106acb068; end: 106acb1db;  */

void FUN_106acb068(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
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
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d910;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d910,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_106acb1dc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar6 = &UNK_11095d960;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d960,&uStack_100,puVar3);
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
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106acb350;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar3 = puVar5;
  puVar10 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_11095d9b0;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d9b0,puVar3,param_4);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar13 = 0;
    puVar8 = auStack_178;
    puVar10 = param_4;
    do {
      if ((&cStack_149)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106acb580;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar7 = &UNK_11095da00;
    unaff_x23 = &uStack_238;
    puVar9 = &uStack_238;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da00,puVar9,puVar10);
    puStack_220 = unaff_x23;
    func_0x00010007e5dc(&puStack_220);
    lVar13 = 0;
    puVar5 = auStack_218;
    puVar11 = puVar10;
    do {
      if ((&cStack_1e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_106acb7b0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar8 = puVar9;
  puVar10 = puVar11;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar5;
  puStack_268 = puVar2;
  puStack_260 = puVar3;
  puStack_258 = puVar1;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2a0,puVar3);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar6 = &UNK_11095da50;
    unaff_x23 = &uStack_2d8;
    puVar8 = &uStack_2d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da50,puVar8,puVar11);
    puStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2c0);
    lVar13 = 0;
    puVar3 = auStack_2b8;
    puVar10 = puVar11;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_2e8 = FUN_106acb9e0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar5 = puVar8;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar3;
  puStack_308 = puVar1;
  puStack_300 = puVar9;
  puStack_2f8 = puVar7;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  puVar3 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_358;
    func_0x00010002b838(auStack_358,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_340,puVar3);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar2 = &UNK_11095daa0;
    unaff_x23 = &uStack_378;
    puVar5 = &uStack_378;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095daa0,puVar5,puVar10);
    puStack_360 = unaff_x23;
    func_0x00010007e5dc(&puStack_360);
    lVar13 = 0;
    puVar3 = auStack_358;
    do {
      if ((&cStack_329)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_400;
  pcStack_388 = FUN_106acbc10;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar10 = puVar5;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar3;
  puStack_3a8 = puVar1;
  puStack_3a0 = puVar8;
  puStack_398 = puVar6;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_3e0;
    func_0x00010002b838(auStack_3e0,puVar1);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    puVar7 = &UNK_11095db40;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095db40,&uStack_400,puVar5);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    puVar10 = puVar9;
    puVar3 = &uStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
      puVar10 = puVar9;
      puVar3 = &uStack_400;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_408 = FUN_106acbd84;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar3;
  plStack_428 = plVar12;
  puStack_420 = puVar1;
  puStack_418 = puVar2;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    puVar6 = &UNK_11095dbe0;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_11095dbe0);
    if ((int)plVar12 != 0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar6 = &UNK_11095dbe0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095dbe0,&uStack_480,puVar10);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
      }
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_4a8 = (undefined1 *)&uStack_4c0;
  pcStack_488 = FUN_106acbf18;
  if (puVar2 != (undefined *)0x0) {
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    puStack_4a0 = puVar1;
    puStack_498 = puVar7;
    pppuStack_490 = &pppuStack_410;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11095dc30,&uStack_4c0,puVar6);
    func_0x00010007e5dc(&puStack_4a8);
  }
  return;
}



/* Entry: 106acb1dc; end: 106acb34f;  */

void FUN_106acb1dc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
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
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
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
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d960;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d960,&uStack_80,param_3);
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
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106acb350;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar9 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_11095d9b0;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095d9b0,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar13 = 0;
    puVar9 = auStack_f8;
    puVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_106acb580;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar9;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_11095da00;
    unaff_x23 = &uStack_1b8;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da00,puVar8,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar13 = 0;
    puVar5 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106acb7b0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar9 = puVar8;
  puVar10 = puVar11;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar3;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar2 = &UNK_11095da50;
    unaff_x23 = &uStack_258;
    puVar9 = &uStack_258;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095da50,puVar9,puVar11);
    puStack_240 = unaff_x23;
    func_0x00010007e5dc(&puStack_240);
    lVar13 = 0;
    puVar5 = auStack_238;
    puVar10 = puVar11;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106acb9e0;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar9;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar5;
  puStack_288 = puVar1;
  puStack_280 = puVar8;
  puStack_278 = puVar7;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar5 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_2c0,puVar5);
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
    puVar6 = &UNK_11095daa0;
    unaff_x23 = &uStack_2f8;
    puVar3 = &uStack_2f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095daa0,puVar3,puVar10);
    puStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&puStack_2e0);
    lVar13 = 0;
    puVar5 = auStack_2d8;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_380;
  pcStack_308 = FUN_106acbc10;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar10 = puVar3;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar5;
  puStack_328 = puVar1;
  puStack_320 = puVar9;
  puStack_318 = puVar2;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_360;
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar7 = &UNK_11095db40;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095db40,&uStack_380,puVar3);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar10 = puVar8;
    puVar5 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar10 = puVar8;
      puVar5 = &uStack_380;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_106acbd84;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = puVar5;
  plStack_3a8 = plVar12;
  puStack_3a0 = puVar1;
  puStack_398 = puVar6;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    puVar2 = &UNK_11095dbe0;
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_11095dbe0);
    if ((int)plVar12 != 0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_3e0,puVar1);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar2 = &UNK_11095dbe0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11095dbe0,&uStack_400,puVar10);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puStack_428 = (undefined1 *)&uStack_440;
  pcStack_408 = FUN_106acbf18;
  if (puVar6 != (undefined *)0x0) {
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    puStack_420 = puVar1;
    puStack_418 = puVar7;
    pppuStack_410 = &pppuStack_390;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_11095dc30,&uStack_440,puVar2);
    func_0x00010007e5dc(&puStack_428);
  }
  return;
}



/* Entry: 106acb350; end: 106acb57f;  */

void FUN_106acb350(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
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
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095d9b0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095d9b0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar5 = auStack_78;
    uVar11 = param_4;
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
    return;
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
  pcStack_a8 = FUN_106acb580;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar12 = uVar11;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095da00;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095da00,puVar8,uVar11);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar13 = 0;
    puVar5 = auStack_118;
    uVar12 = uVar11;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106acb7b0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  uVar11 = uVar12;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095da50;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095da50,puVar9,uVar12);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar13 = 0;
    puVar2 = auStack_1b8;
    uVar11 = uVar12;
    do {
      if ((&cStack_189)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106acb9e0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_11095daa0;
    unaff_x23 = &uStack_278;
    puVar5 = &uStack_278;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095daa0,puVar5,uVar11);
    puStack_260 = unaff_x23;
    func_0x00010007e5dc(&puStack_260);
    lVar13 = 0;
    puVar2 = auStack_258;
    do {
      if ((&cStack_229)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_300;
  pcStack_288 = FUN_106acbc10;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar8 = puVar5;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  puStack_298 = puVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_2e0;
    func_0x00010002b838(auStack_2e0,puVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_11095db40;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095db40,&uStack_300,puVar5);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar8 = puVar10;
    puVar2 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar8 = puVar10;
      puVar2 = &uStack_300;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_106acbd84;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_340 = unaff_x24;
  puStack_338 = unaff_x23;
  puStack_330 = puVar2;
  plStack_328 = plVar14;
  puStack_320 = puVar1;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    puVar4 = &UNK_11095dbe0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&UNK_11095dbe0);
    if ((int)plVar14 != 0) {
      plVar14 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_360,puVar1);
      uStack_380 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
      puVar4 = &UNK_11095dbe0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095dbe0,&uStack_380,puVar8);
      puStack_368 = (undefined1 *)&uStack_380;
      func_0x00010007e5dc(&puStack_368);
      if (cStack_349 < '\0') {
        __ZdlPv(auStack_360[0]);
      }
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_3a8 = (undefined1 *)&uStack_3c0;
  pcStack_388 = FUN_106acbf18;
  if (puVar3 != (undefined *)0x0) {
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    puStack_3a0 = puVar1;
    puStack_398 = puVar7;
    pppuStack_390 = &pppuStack_310;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095dc30,&uStack_3c0,puVar4);
    func_0x00010007e5dc(&puStack_3a8);
  }
  return;
}



/* Entry: 106acb580; end: 106acb7af;  */

void FUN_106acb580(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
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
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
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
  long *plStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095da00;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095da00,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar5 = auStack_78;
    uVar11 = param_4;
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
    return;
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
  pcStack_a8 = FUN_106acb7b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  uVar12 = uVar11;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095da50;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095da50,puVar8,uVar11);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar13 = 0;
    puVar5 = auStack_118;
    uVar12 = uVar11;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106acb9e0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11095daa0;
    unaff_x23 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095daa0,puVar9,uVar12);
    puStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1c0);
    lVar13 = 0;
    puVar2 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar10 = &uStack_260;
  pcStack_1e8 = FUN_106acbc10;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar5 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  puStack_210 = puVar2;
  puStack_208 = puVar1;
  puStack_200 = puVar8;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar4);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_240;
    func_0x00010002b838(auStack_240,puVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar3 = &UNK_11095db40;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095db40,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    puVar5 = puVar10;
    puVar2 = &uStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
      puVar5 = puVar10;
      puVar2 = &uStack_260;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_106acbd84;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = puVar2;
  plStack_288 = plVar14;
  puStack_280 = puVar1;
  puStack_278 = puVar4;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(puVar3);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    puVar7 = &UNK_11095dbe0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&UNK_11095dbe0);
    if ((int)plVar14 != 0) {
      plVar14 = *(long **)(puVar6 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_2c0,puVar1);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
      puVar7 = &UNK_11095dbe0;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11095dbe0,&uStack_2e0,puVar5);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      if (cStack_2a9 < '\0') {
        __ZdlPv(auStack_2c0[0]);
      }
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  puStack_308 = (undefined1 *)&uStack_320;
  pcStack_2e8 = FUN_106acbf18;
  if (puVar4 != (undefined *)0x0) {
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    puStack_300 = puVar1;
    puStack_2f8 = puVar3;
    pppuStack_2f0 = &pppuStack_270;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11095dc30,&uStack_320,puVar7);
    func_0x00010007e5dc(&puStack_308);
  }
  return;
}



/* Entry: 106acb7b0; end: 106acb9df;  */

void FUN_106acb7b0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
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
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095da50;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095da50,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    uVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  pcStack_a8 = FUN_106acb9e0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3adf9b;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_11095daa0;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095daa0,puVar8,uVar11);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_106acbc10;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  plVar13 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_1a0;
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_11095db40;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095db40,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    puVar9 = puVar10;
    puVar5 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar5 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_106acbd84;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar5;
  plStack_1e8 = plVar13;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar6 + 8);
    puVar3 = &UNK_11095dbe0;
    (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_11095dbe0);
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(puVar6 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_220,puVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
      puVar3 = &UNK_11095dbe0;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11095dbe0,&uStack_240,puVar9);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
      }
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar7 = puVar1;
  __Unwind_Resume();
  puStack_268 = (undefined1 *)&uStack_280;
  pcStack_248 = FUN_106acbf18;
  if (puVar7 != (undefined *)0x0) {
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    puStack_260 = puVar1;
    puStack_258 = puVar4;
    pppuStack_250 = &pppuStack_1d0;
    (**(code **)(**(long **)(puVar7 + 8) + 0x18))
              (*(long **)(puVar7 + 8),&UNK_11095dc30,&uStack_280,puVar3);
    func_0x00010007e5dc(&puStack_268);
  }
  return;
}



/* Entry: 106acb9e0; end: 106acbc0f;  */

void FUN_106acb9e0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
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
      puVar1 = &UNK_10f3adf9b;
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
      puVar2 = (undefined8 *)&UNK_10f3adf9b;
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
    puVar1 = &UNK_11095daa0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095daa0,puVar2,param_4);
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
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
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
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_106acbc10;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3adf9b;
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
    puVar6 = &UNK_11095db40;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095db40,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_106acbd84;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    puVar4 = &UNK_11095dbe0;
    (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_11095dbe0);
    if ((int)plVar10 != 0) {
      plVar10 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f3adf9b;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_180,puVar1);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
      puVar4 = &UNK_11095dbe0;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11095dbe0,&uStack_1a0,puVar7);
      puStack_188 = (undefined1 *)&uStack_1a0;
      func_0x00010007e5dc(&puStack_188);
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
      }
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_106acbf18;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095dc30,&uStack_1e0,puVar4);
    func_0x00010007e5dc(&puStack_1c8);
  }
  return;
}



/* Entry: 106acbc10; end: 106acbd83;  */

void FUN_106acbc10(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095db40;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095db40,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_106acbd84;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar4 = &UNK_11095dbe0;
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_11095dbe0);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
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
      puVar4 = &UNK_11095dbe0;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095dbe0,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106acbf18;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095dc30,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106acbd84; end: 106acbf17;  */

void FUN_106acbd84(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar2 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_11095dbe0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_11095dbe0);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f3adf9b;
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
      puVar2 = &UNK_11095dbe0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095dbe0,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106acbf18;
  if (puVar4 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar3;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11095dc30,&uStack_c0,puVar2);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106acbf18; end: 106acbf8f;  */

void FUN_106acbf18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095dc30,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acbf90; end: 106acc103;  */

void FUN_106acbf90(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095dcd0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dcd0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106acc104;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095dd20;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dd20,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_106acc278;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095dd70;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dd70,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_106acc3ec;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_11095ddc0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095ddc0,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_106acc560;
  if (puVar3 != (undefined *)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    puStack_220 = puVar2;
    puStack_218 = puVar1;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095de10,&uStack_240,puVar4);
    func_0x00010007e5dc(&puStack_228);
  }
  return;
}



/* Entry: 106acc104; end: 106acc277;  */

void FUN_106acc104(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095dd20;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dd20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106acc278;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095dd70;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dd70,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106acc3ec;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095ddc0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095ddc0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_106acc560;
  if (puVar3 != (undefined *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    puStack_1a0 = puVar2;
    puStack_198 = puVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095de10,&uStack_1c0,puVar1);
    func_0x00010007e5dc(&puStack_1a8);
  }
  return;
}



/* Entry: 106acc278; end: 106acc3eb;  */

void FUN_106acc278(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095dd70;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095dd70,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_106acc3ec;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f3adf9b;
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
    puVar4 = &UNK_11095ddc0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11095ddc0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106acc560;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095de10,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106acc3ec; end: 106acc55f;  */

void FUN_106acc3ec(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3adf9b;
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
    puVar1 = &UNK_11095ddc0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11095ddc0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106acc560;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11095de10,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106acc560; end: 106acc5d7;  */

void FUN_106acc560(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095de10,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc5d8; end: 106acc64f;  */

void FUN_106acc5d8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095de60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc650; end: 106acc6c7;  */

void FUN_106acc650(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095deb0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc6c8; end: 106acc73f;  */

void FUN_106acc6c8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095df00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc740; end: 106acc7b7;  */

void FUN_106acc740(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095df50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc7b8; end: 106acc82f;  */

void FUN_106acc7b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095dfa0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}


