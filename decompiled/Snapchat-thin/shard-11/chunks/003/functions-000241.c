/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10845f898; end: 10845f993;  */

void FUN_10845f898(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_2 != 0) {
    FUN_10845f4e8(param_2,param_3,param_4,param_5,param_6,param_7,(long)(param_1 * 1000.0));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10845f994; end: 10845fd43;  */

/* WARNING: Removing unreachable block (ram,0x00010845fcfc) */
/* WARNING: Removing unreachable block (ram,0x000108460158) */

void FUN_10845f994(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 *param_6,undefined8 *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
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
  
  puVar13 = &uStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar4 = param_5;
  puVar11 = (undefined *)param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar14 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_e0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_c8,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_b0,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined8 *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = (undefined *)param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_98,puVar1);
    _objc_retain(param_7);
    if (param_7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar2 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_80,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_68,5);
    puVar1 = &UNK_110a496e8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    lVar12 = 0;
    puVar14 = auStack_e0;
    puVar5 = (undefined *)puVar13;
    puVar4 = param_8;
    do {
      if ((&cStack_69)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar13 = (undefined8 *)param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_7);
  do {
    puVar14 = puVar14 + -0x18;
  } while (puVar14 != auStack_e0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = (undefined *)puVar13;
  __Unwind_Resume();
  puVar2 = &uStack_180;
  pcStack_108 = FUN_10845fd44;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar5;
  puStack_140 = (undefined *)puVar13;
  puStack_138 = param_7;
  puStack_130 = (undefined *)param_6;
  puStack_128 = param_5;
  puStack_120 = param_4;
  puStack_118 = param_3;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar15 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = &UNK_10f49a75e;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    param_7 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar7 = &UNK_110a49738;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar8 = (undefined *)puVar2;
    puVar4 = puVar5;
    param_6 = &uStack_180;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar8 = (undefined *)puVar2;
      puVar4 = puVar5;
      param_6 = &uStack_180;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar2 = &uStack_240;
  pcStack_188 = FUN_10845feb8;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar9 = puVar8;
  puVar10 = puVar4;
  puStack_1d0 = auStack_e0;
  puStack_1c8 = puVar14;
  puStack_1c0 = (undefined *)puVar13;
  puStack_1b8 = param_7;
  puStack_1b0 = (undefined *)param_6;
  plStack_1a8 = plVar15;
  puStack_1a0 = puVar5;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_110;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  if (puVar6 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar6 + 8);
    puVar3 = &UNK_110a49788;
    (**(code **)(*plVar15 + 0x28))(plVar15,&UNK_110a49788);
    if ((int)plVar15 != 0) {
      plVar15 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f49a75e;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_220,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_208,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar1 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_1f0,puVar1);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x000107c27984(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar3 = &UNK_110a49788;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49788,&uStack_240,puVar11);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x000107c278ac(&puStack_228);
      lVar12 = 0;
      puVar9 = (undefined *)puVar2;
      puVar10 = puVar11;
      do {
        if ((&cStack_1d9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        puVar13 = &uStack_240;
      } while (lVar12 != -0x48);
    }
  }
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      puVar13 = (undefined8 *)((long)puVar13 + -0x18);
    } while (puVar13 != (undefined8 *)auStack_220);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    __Unwind_Resume();
    _objc_retain(puVar3);
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    if (puVar1 != (undefined *)0x0) {
      FUN_10845feb8(puVar1,puVar3,puVar9,puVar10,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10845fd44; end: 10845feb7;  */

/* WARNING: Removing unreachable block (ram,0x000108460158) */

void FUN_10845fd44(double param_1,long param_2,undefined *param_3,undefined *param_4,
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
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a49738;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
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
    puVar3 = &UNK_110a49788;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_110a49788);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_120,puVar2);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_108,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x000107c27984(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_110a49788;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110a49788,&uStack_140,param_6);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x000107c278ac(&puStack_128);
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
      FUN_10845feb8(puVar2,puVar3,puVar6,puVar7,(long)(param_1 * 1000.0));
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



/* Entry: 10845feb8; end: 108460197;  */

/* WARNING: Removing unreachable block (ram,0x000108460158) */

void FUN_10845feb8(double param_1,long param_2,undefined *param_3,undefined *param_4,
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
    puVar2 = &UNK_110a49788;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a49788);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110a49788;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49788,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
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
      FUN_10845feb8(puVar3,puVar2,puVar4,puVar6,(long)(param_1 * 1000.0));
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



/* Entry: 108460198; end: 10846024b;  */

void FUN_108460198(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10845feb8(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10846024c; end: 10846057f;  */

/* WARNING: Removing unreachable block (ram,0x000108460540) */

void FUN_10846024c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x25;
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
  puVar1 = param_3;
  puVar2 = param_4;
  puVar4 = param_5;
  puVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_110a497d8;
    unaff_x25 = &uStack_d8;
    puVar2 = &uStack_d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a497d8,puVar2,param_7);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar6 = 0;
    puVar4 = param_7;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    if (puVar3 != (undefined *)0x0) {
      FUN_10846024c(puVar3,puVar1,puVar2,puVar4,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108460580; end: 10846065b;  */

void FUN_108460580(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    FUN_10846024c(param_2,param_3,param_4,param_5,param_6,(long)(param_1 * 1000.0));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10846065c; end: 10846098f;  */

/* WARNING: Removing unreachable block (ram,0x000108460950) */

void FUN_10846065c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_110a49828;
    unaff_x25 = &uStack_d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a49828,&uStack_d8,param_6);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_108 = (undefined1 *)&uStack_120;
    pcStack_e8 = FUN_108460990;
    if (puVar2 != (undefined *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      puStack_100 = param_3;
      puStack_f8 = param_2;
      puStack_f0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110a49878,&uStack_120,puVar1);
      func_0x000107c278ac(&puStack_108);
    }
    return;
  }
  return;
}



/* Entry: 108460990; end: 108460a07;  */

void FUN_108460990(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110a49878,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108460a08; end: 108460c37;  */

void FUN_108460a08(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
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
  undefined8 *puStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
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
  long *plStack_2e0;
  long *plStack_2d8;
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
  long *plStack_260;
  long *plStack_258;
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
  undefined8 *puStack_1e0;
  long *plStack_1d8;
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
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
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
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
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
  plVar15 = param_2;
  puVar1 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar15 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar15 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar15);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar15 = (long *)&UNK_110a498c8;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a498c8,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar11 = 0;
    puVar3 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  plVar14 = param_2;
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
  plVar2 = plVar14;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108460c38;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar15;
  puVar7 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar3;
  plStack_c8 = plVar14;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  plVar14 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar14 = (long *)plVar2[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,plVar13);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    plVar13 = (long *)&UNK_110a49918;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49918,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar1;
    puVar3 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar1;
      puVar3 = &uStack_120;
    }
  }
  plVar2 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar12 = plVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_108460dac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puVar1 = puVar7;
  puVar8 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar3;
  plStack_148 = plVar14;
  plStack_140 = plVar2;
  plStack_138 = plVar15;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar13);
  _objc_retain(puVar7);
  puVar3 = (undefined8 *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,plVar14);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    plVar4 = (long *)&UNK_110a49968;
    unaff_x23 = &uStack_1b8;
    puVar1 = &uStack_1b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49968,puVar1,puVar9);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar11 = 0;
    puVar3 = auStack_198;
    puVar8 = puVar9;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(plVar13);
  plVar2 = plVar15;
  __Unwind_Resume();
  puVar10 = &uStack_240;
  pcStack_1c8 = FUN_108460fdc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar4;
  puVar9 = puVar1;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar3;
  plStack_1e8 = plVar15;
  puStack_1e0 = puVar7;
  plStack_1d8 = plVar13;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar4);
  plVar15 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar15 = (long *)plVar2[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,plVar14);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    plVar14 = (long *)&UNK_110a499b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a499b8,&uStack_240,puVar1);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar9 = puVar10;
    puVar8 = puVar1;
    puVar3 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar10;
      puVar8 = puVar1;
      puVar3 = &uStack_240;
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar12 = plVar13;
  __Unwind_Resume();
  puVar7 = &uStack_2c0;
  pcStack_248 = FUN_108461150;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar14;
  puVar1 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  plStack_268 = plVar15;
  plStack_260 = plVar13;
  plStack_258 = plVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar14);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,plVar13);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    plVar2 = (long *)&UNK_110a49a08;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49a08,&uStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar1 = puVar7;
    puVar8 = puVar9;
    puVar3 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar1 = puVar7;
      puVar8 = puVar9;
      puVar3 = &uStack_2c0;
    }
  }
  plVar13 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar12 = plVar13;
  __Unwind_Resume();
  puVar7 = &uStack_340;
  pcStack_2c8 = FUN_1084612c4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar9 = puVar1;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar3;
  plStack_2e8 = plVar15;
  plStack_2e0 = plVar13;
  plStack_2d8 = plVar14;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar2);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x23 = auStack_320;
    func_0x000107c278b8(auStack_320,plVar14);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    plVar4 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49a58,&uStack_340,puVar1);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar9 = puVar7;
    puVar8 = puVar1;
    puVar3 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar9 = puVar7;
      puVar8 = puVar1;
      puVar3 = &uStack_340;
    }
  }
  plVar14 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcStack_348 = FUN_108461438;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  puVar1 = puVar9;
  puVar7 = puVar8;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar3;
  plStack_368 = plVar15;
  plStack_360 = plVar14;
  plStack_358 = plVar2;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar4);
  _objc_retain(puVar9);
  puVar3 = (undefined8 *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_3b8;
    func_0x000107c278b8(auStack_3b8,plVar14);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x000107c27984(&uStack_3d8,auStack_3b8,&lStack_388,2);
    plVar13 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_3d8;
    puVar1 = &uStack_3d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49aa8,puVar1,puVar8);
    puStack_3c0 = unaff_x23;
    func_0x000107c278ac(&puStack_3c0);
    lVar11 = 0;
    puVar3 = auStack_3b8;
    puVar7 = puVar8;
    do {
      if ((&cStack_389)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar9);
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar9);
  _objc_release(plVar4);
  plVar2 = plVar15;
  __Unwind_Resume();
  pcStack_3e8 = FUN_108461668;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar13;
  puVar8 = puVar1;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar3;
  plStack_408 = plVar15;
  puStack_400 = puVar9;
  plStack_3f8 = plVar4;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar15 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_458;
    func_0x000107c278b8(auStack_458,plVar14);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_440,puVar3);
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x000107c27984(&uStack_478,auStack_458,&lStack_428,2);
    plVar14 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_478;
    puVar8 = &uStack_478;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49af8,puVar8,puVar7);
    puStack_460 = unaff_x23;
    func_0x000107c278ac(&puStack_460);
    lVar11 = 0;
    puVar3 = auStack_458;
    do {
      if ((&cStack_429)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar1);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar13);
  plVar4 = plVar15;
  __Unwind_Resume();
  puVar7 = &uStack_500;
  pcStack_488 = FUN_108461898;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar14;
  puVar9 = puVar8;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = unaff_x23;
  puStack_4b0 = puVar3;
  plStack_4a8 = plVar15;
  puStack_4a0 = puVar1;
  plStack_498 = plVar13;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(plVar14);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_4e0;
    func_0x000107c278b8(auStack_4e0,plVar13);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x000107c27984(&uStack_500,auStack_4e0,&lStack_4c8,1);
    plVar2 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49b48,&uStack_500,puVar8);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x000107c278ac(&puStack_4e8);
    puVar9 = puVar7;
    puVar3 = &uStack_500;
    if (cStack_4c9 < '\0') {
      __ZdlPv(auStack_4e0[0]);
      puVar9 = puVar7;
      puVar3 = &uStack_500;
    }
  }
  plVar13 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar12 = plVar13;
  __Unwind_Resume();
  puVar7 = &uStack_580;
  pcStack_508 = FUN_108461a0c;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar1 = puVar9;
  puStack_540 = unaff_x24;
  puStack_538 = unaff_x23;
  puStack_530 = puVar3;
  plStack_528 = plVar15;
  plStack_520 = plVar13;
  plStack_518 = plVar14;
  pppuStack_510 = &pppuStack_490;
  _objc_retain(plVar2);
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    plVar4 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar15 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar15 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = auStack_560;
      func_0x000107c278b8(auStack_560,plVar15);
      uStack_580 = 0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x000107c27984(&uStack_580,auStack_560,&lStack_548,1);
      plVar4 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b98,&uStack_580,puVar9);
      puStack_568 = (undefined1 *)&uStack_580;
      func_0x000107c278ac(&puStack_568);
      puVar1 = puVar7;
      puVar3 = &uStack_580;
      if (cStack_549 < '\0') {
        __ZdlPv(auStack_560[0]);
        puVar1 = puVar7;
        puVar3 = &uStack_580;
      }
    }
  }
  plVar15 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar13 = plVar15;
  __Unwind_Resume();
  puVar7 = &uStack_600;
  pcStack_588 = FUN_108461ba0;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar4;
  puVar9 = puVar1;
  puStack_5c0 = unaff_x24;
  puStack_5b8 = unaff_x23;
  puStack_5b0 = puVar3;
  plStack_5a8 = plVar12;
  plStack_5a0 = plVar15;
  plStack_598 = plVar2;
  pppuStack_590 = &pppuStack_510;
  _objc_retain(plVar4);
  if (plVar13 != (long *)0x0) {
    plVar15 = (long *)plVar13[1];
    plVar14 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar15 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar15 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_5e0;
      func_0x000107c278b8(auStack_5e0,plVar15);
      uStack_600 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      func_0x000107c27984(&uStack_600,auStack_5e0,&lStack_5c8,1);
      plVar14 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49be8,&uStack_600,puVar1);
      puStack_5e8 = (undefined1 *)&uStack_600;
      func_0x000107c278ac(&puStack_5e8);
      puVar9 = puVar7;
      puVar3 = &uStack_600;
      if (cStack_5c9 < '\0') {
        __ZdlPv(auStack_5e0[0]);
        puVar9 = puVar7;
        puVar3 = &uStack_600;
      }
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar2 = plVar15;
  __Unwind_Resume();
  pcStack_608 = FUN_108461d34;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  puStack_630 = puVar3;
  plStack_628 = plVar13;
  plStack_620 = plVar15;
  plStack_618 = plVar4;
  pppuStack_610 = &pppuStack_590;
  _objc_retain(plVar14);
  if (plVar2 != (long *)0x0) {
    plVar15 = (long *)plVar2[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    func_0x000107c278b8(auStack_660,plVar13);
    uStack_680 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    func_0x000107c27984(&uStack_680,auStack_660,&lStack_648,1);
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49c38,&uStack_680,puVar9);
    puStack_668 = (undefined1 *)&uStack_680;
    func_0x000107c278ac(&puStack_668);
    if (cStack_649 < '\0') {
      __ZdlPv(auStack_660[0]);
    }
  }
  plVar15 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  __Unwind_Resume(plVar15);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108460c38; end: 108460dab;  */

void FUN_108460c38(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined8 *puStack_360;
  long *plStack_358;
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
  long *plStack_2c0;
  long *plStack_2b8;
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
  long *plStack_240;
  long *plStack_238;
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
  long *plStack_1c0;
  long *plStack_1b8;
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
  undefined8 *puStack_140;
  long *plStack_138;
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
  plVar13 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar13);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_110a49918;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49918,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar2;
      param_4 = param_3;
    }
  }
  plVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108460dac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar13;
  puVar2 = puVar4;
  puVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(puVar4);
  puVar10 = (undefined8 *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,plVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    plVar1 = (long *)&UNK_110a49968;
    unaff_x23 = &uStack_118;
    puVar2 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49968,puVar2,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar12 = 0;
    puVar10 = auStack_f8;
    puVar9 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar4);
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(plVar13);
  plVar3 = plVar11;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_108460fdc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar1;
  puVar7 = puVar2;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  plStack_148 = plVar11;
  puStack_140 = puVar4;
  plStack_138 = plVar13;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar1);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,plVar11);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    plVar15 = (long *)&UNK_110a499b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a499b8,&uStack_1a0,puVar2);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar10 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar10 = &uStack_1a0;
    }
  }
  plVar11 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar14 = plVar11;
  __Unwind_Resume();
  puVar2 = &uStack_220;
  pcStack_1a8 = FUN_108461150;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar15;
  puVar4 = puVar7;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar10;
  plStack_1c8 = plVar13;
  plStack_1c0 = plVar11;
  plStack_1b8 = plVar1;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar13 = (long *)plVar14[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,plVar11);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    plVar3 = (long *)&UNK_110a49a08;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49a08,&uStack_220,puVar7);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar4 = puVar2;
    puVar9 = puVar7;
    puVar10 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar4 = puVar2;
      puVar9 = puVar7;
      puVar10 = &uStack_220;
    }
  }
  plVar11 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar14 = plVar11;
  __Unwind_Resume();
  puVar7 = &uStack_2a0;
  pcStack_228 = FUN_1084612c4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar2 = puVar4;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar10;
  plStack_248 = plVar13;
  plStack_240 = plVar11;
  plStack_238 = plVar15;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar3);
  plVar13 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar13 = (long *)plVar14[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,plVar11);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    plVar1 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49a58,&uStack_2a0,puVar4);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar2 = puVar7;
    puVar9 = puVar4;
    puVar10 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar7;
      puVar9 = puVar4;
      puVar10 = &uStack_2a0;
    }
  }
  plVar11 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar14 = plVar11;
  __Unwind_Resume();
  pcStack_2a8 = FUN_108461438;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar1;
  puVar4 = puVar2;
  puVar7 = puVar9;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar10;
  plStack_2c8 = plVar13;
  plStack_2c0 = plVar11;
  plStack_2b8 = plVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar1);
  _objc_retain(puVar2);
  puVar10 = (undefined8 *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar13 = (long *)plVar14[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_318;
    func_0x000107c278b8(auStack_318,plVar11);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_300,puVar4);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x000107c27984(&uStack_338,auStack_318,&lStack_2e8,2);
    plVar15 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_338;
    puVar4 = &uStack_338;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49aa8,puVar4,puVar9);
    puStack_320 = unaff_x23;
    func_0x000107c278ac(&puStack_320);
    lVar12 = 0;
    puVar10 = auStack_318;
    puVar7 = puVar9;
    do {
      if ((&cStack_2e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar2);
  plVar13 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(puVar2);
  _objc_release(plVar1);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcStack_348 = FUN_108461668;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar15;
  puVar9 = puVar4;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar10;
  plStack_368 = plVar13;
  puStack_360 = puVar2;
  plStack_358 = plVar1;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar15);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_3b8;
    func_0x000107c278b8(auStack_3b8,plVar11);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_3a0,puVar2);
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x000107c27984(&uStack_3d8,auStack_3b8,&lStack_388,2);
    plVar11 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_3d8;
    puVar9 = &uStack_3d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49af8,puVar9,puVar7);
    puStack_3c0 = unaff_x23;
    func_0x000107c278ac(&puStack_3c0);
    lVar12 = 0;
    puVar2 = auStack_3b8;
    do {
      if ((&cStack_389)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar4);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(puVar4);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  puVar7 = &uStack_460;
  pcStack_3e8 = FUN_108461898;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar11;
  puVar10 = puVar9;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar2;
  plStack_408 = plVar13;
  puStack_400 = puVar4;
  plStack_3f8 = plVar15;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x23 = auStack_440;
    func_0x000107c278b8(auStack_440,plVar1);
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    func_0x000107c27984(&uStack_460,auStack_440,&lStack_428,1);
    plVar1 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49b48,&uStack_460,puVar9);
    puStack_448 = (undefined1 *)&uStack_460;
    func_0x000107c278ac(&puStack_448);
    puVar10 = puVar7;
    puVar2 = &uStack_460;
    if (cStack_429 < '\0') {
      __ZdlPv(auStack_440[0]);
      puVar10 = puVar7;
      puVar2 = &uStack_460;
    }
  }
  plVar15 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar14 = plVar15;
  __Unwind_Resume();
  puVar9 = &uStack_4e0;
  pcStack_468 = FUN_108461a0c;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar1;
  puVar4 = puVar10;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar2;
  plStack_488 = plVar13;
  plStack_480 = plVar15;
  plStack_478 = plVar11;
  pppuStack_470 = &pppuStack_3f0;
  _objc_retain(plVar1);
  if (plVar14 != (long *)0x0) {
    plVar13 = (long *)plVar14[1];
    plVar3 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar13 = plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      unaff_x23 = auStack_4c0;
      func_0x000107c278b8(auStack_4c0,plVar13);
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x000107c27984(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
      plVar3 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49b98,&uStack_4e0,puVar10);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x000107c278ac(&puStack_4c8);
      puVar4 = puVar9;
      puVar2 = &uStack_4e0;
      if (cStack_4a9 < '\0') {
        __ZdlPv(auStack_4c0[0]);
        puVar4 = puVar9;
        puVar2 = &uStack_4e0;
      }
    }
  }
  plVar13 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar15 = plVar13;
  __Unwind_Resume();
  puVar9 = &uStack_560;
  pcStack_4e8 = FUN_108461ba0;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar3;
  puVar10 = puVar4;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar2;
  plStack_508 = plVar14;
  plStack_500 = plVar13;
  plStack_4f8 = plVar1;
  pppuStack_4f0 = &pppuStack_470;
  _objc_retain(plVar3);
  if (plVar15 != (long *)0x0) {
    plVar13 = (long *)plVar15[1];
    plVar11 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar15 = (long *)plVar15[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar13 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar13 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_540;
      func_0x000107c278b8(auStack_540,plVar13);
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x000107c27984(&uStack_560,auStack_540,&lStack_528,1);
      plVar11 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49be8,&uStack_560,puVar4);
      puStack_548 = (undefined1 *)&uStack_560;
      func_0x000107c278ac(&puStack_548);
      puVar10 = puVar9;
      puVar2 = &uStack_560;
      if (cStack_529 < '\0') {
        __ZdlPv(auStack_540[0]);
        puVar10 = puVar9;
        puVar2 = &uStack_560;
      }
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar1 = plVar13;
  __Unwind_Resume();
  pcStack_568 = FUN_108461d34;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = puVar2;
  plStack_588 = plVar15;
  plStack_580 = plVar13;
  plStack_578 = plVar3;
  pppuStack_570 = &pppuStack_4f0;
  _objc_retain(plVar11);
  if (plVar1 != (long *)0x0) {
    plVar13 = (long *)plVar1[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x000107c278b8(auStack_5c0,plVar1);
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    func_0x000107c27984(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49c38,&uStack_5e0,puVar10);
    puStack_5c8 = (undefined1 *)&uStack_5e0;
    func_0x000107c278ac(&puStack_5c8);
    if (cStack_5a9 < '\0') {
      __ZdlPv(auStack_5c0[0]);
    }
  }
  plVar13 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume(plVar13);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108460dac; end: 108460fdb;  */

void FUN_108460dac(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
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
  long *plStack_388;
  undefined8 *puStack_380;
  long *plStack_378;
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
  long *plStack_2e8;
  undefined8 *puStack_2e0;
  long *plStack_2d8;
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
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
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
  long *plStack_1c0;
  long *plStack_1b8;
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
  long *plStack_140;
  long *plStack_138;
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
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
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
  plVar11 = param_2;
  puVar1 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar11 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar11 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar11);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar11 = (long *)&UNK_110a49968;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49968,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar10 = 0;
    puVar4 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  plVar14 = param_2;
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
  plVar2 = plVar14;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108460fdc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  puVar7 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  plStack_c8 = plVar14;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar11);
  plVar14 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar14 = (long *)plVar2[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,plVar13);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    plVar13 = (long *)&UNK_110a499b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a499b8,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar1;
    puVar4 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar1;
      puVar4 = &uStack_120;
    }
  }
  plVar2 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar12 = plVar2;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_108461150;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar13;
  puVar1 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar4;
  plStack_148 = plVar14;
  plStack_140 = plVar2;
  plStack_138 = plVar11;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar13);
  plVar11 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,plVar14);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    plVar3 = (long *)&UNK_110a49a08;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49a08,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar1 = puVar8;
    puVar9 = puVar7;
    puVar4 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar1 = puVar8;
      puVar9 = puVar7;
      puVar4 = &uStack_1a0;
    }
  }
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar14;
  __Unwind_Resume();
  puVar8 = &uStack_220;
  pcStack_1a8 = FUN_1084612c4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar3;
  puVar7 = puVar1;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar4;
  plStack_1c8 = plVar11;
  plStack_1c0 = plVar14;
  plStack_1b8 = plVar13;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar3);
  plVar11 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,plVar14);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    plVar2 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49a58,&uStack_220,puVar1);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar8;
    puVar9 = puVar1;
    puVar4 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar8;
      puVar9 = puVar1;
      puVar4 = &uStack_220;
    }
  }
  plVar14 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcStack_228 = FUN_108461438;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar2;
  puVar1 = puVar7;
  puVar8 = puVar9;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar4;
  plStack_248 = plVar11;
  plStack_240 = plVar14;
  plStack_238 = plVar3;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar2);
  _objc_retain(puVar7);
  puVar4 = (undefined8 *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,plVar14);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar1 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    plVar13 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_2b8;
    puVar1 = &uStack_2b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49aa8,puVar1,puVar9);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar10 = 0;
    puVar4 = auStack_298;
    puVar8 = puVar9;
    do {
      if ((&cStack_269)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  plVar11 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar7);
  _objc_release(plVar2);
  plVar3 = plVar11;
  __Unwind_Resume();
  pcStack_2c8 = FUN_108461668;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar13;
  puVar9 = puVar1;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar4;
  plStack_2e8 = plVar11;
  puStack_2e0 = puVar7;
  plStack_2d8 = plVar2;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(plVar13);
  _objc_retain(puVar1);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar11 = (long *)plVar3[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_338;
    func_0x000107c278b8(auStack_338,plVar14);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar4 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_320,puVar4);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x000107c27984(&uStack_358,auStack_338,&lStack_308,2);
    plVar14 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_358;
    puVar9 = &uStack_358;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49af8,puVar9,puVar8);
    puStack_340 = unaff_x23;
    func_0x000107c278ac(&puStack_340);
    lVar10 = 0;
    puVar4 = auStack_338;
    do {
      if ((&cStack_309)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar1);
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar13);
  plVar3 = plVar11;
  __Unwind_Resume();
  puVar8 = &uStack_3e0;
  pcStack_368 = FUN_108461898;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar14;
  puVar7 = puVar9;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar4;
  plStack_388 = plVar11;
  puStack_380 = puVar1;
  plStack_378 = plVar13;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(plVar14);
  plVar11 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar11 = (long *)plVar3[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_3c0;
    func_0x000107c278b8(auStack_3c0,plVar13);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x000107c27984(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
    plVar2 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49b48,&uStack_3e0,puVar9);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x000107c278ac(&puStack_3c8);
    puVar7 = puVar8;
    puVar4 = &uStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      puVar7 = puVar8;
      puVar4 = &uStack_3e0;
    }
  }
  plVar13 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar12 = plVar13;
  __Unwind_Resume();
  puVar9 = &uStack_460;
  pcStack_3e8 = FUN_108461a0c;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar2;
  puVar1 = puVar7;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = puVar4;
  plStack_408 = plVar11;
  plStack_400 = plVar13;
  plStack_3f8 = plVar14;
  pppuStack_3f0 = &pppuStack_370;
  _objc_retain(plVar2);
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    plVar3 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar11 + 0x28))();
    if ((int)plVar11 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar11 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar11 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = auStack_440;
      func_0x000107c278b8(auStack_440,plVar11);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x000107c27984(&uStack_460,auStack_440,&lStack_428,1);
      plVar3 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b98,&uStack_460,puVar7);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x000107c278ac(&puStack_448);
      puVar1 = puVar9;
      puVar4 = &uStack_460;
      if (cStack_429 < '\0') {
        __ZdlPv(auStack_440[0]);
        puVar1 = puVar9;
        puVar4 = &uStack_460;
      }
    }
  }
  plVar11 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar13 = plVar11;
  __Unwind_Resume();
  puVar7 = &uStack_4e0;
  pcStack_468 = FUN_108461ba0;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar3;
  puVar9 = puVar1;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = puVar4;
  plStack_488 = plVar12;
  plStack_480 = plVar11;
  plStack_478 = plVar2;
  pppuStack_470 = &pppuStack_3f0;
  _objc_retain(plVar3);
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)plVar13[1];
    plVar14 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar11 + 0x28))();
    if ((int)plVar11 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar11 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar11 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_4c0;
      func_0x000107c278b8(auStack_4c0,plVar11);
      uStack_4e0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x000107c27984(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
      plVar14 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49be8,&uStack_4e0,puVar1);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x000107c278ac(&puStack_4c8);
      puVar9 = puVar7;
      puVar4 = &uStack_4e0;
      if (cStack_4a9 < '\0') {
        __ZdlPv(auStack_4c0[0]);
        puVar9 = puVar7;
        puVar4 = &uStack_4e0;
      }
    }
  }
  plVar11 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar2 = plVar11;
  __Unwind_Resume();
  pcStack_4e8 = FUN_108461d34;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  puStack_510 = puVar4;
  plStack_508 = plVar13;
  plStack_500 = plVar11;
  plStack_4f8 = plVar3;
  pppuStack_4f0 = &pppuStack_470;
  _objc_retain(plVar14);
  if (plVar2 != (long *)0x0) {
    plVar11 = (long *)plVar2[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar13 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar13 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    func_0x000107c278b8(auStack_540,plVar13);
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    func_0x000107c27984(&uStack_560,auStack_540,&lStack_528,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49c38,&uStack_560,puVar9);
    puStack_548 = (undefined1 *)&uStack_560;
    func_0x000107c278ac(&puStack_548);
    if (cStack_529 < '\0') {
      __ZdlPv(auStack_540[0]);
    }
  }
  plVar11 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  __Unwind_Resume(plVar11);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108460fdc; end: 10846114f;  */

void FUN_108460fdc(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  long *plStack_460;
  long *plStack_458;
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
  long *plStack_3e0;
  long *plStack_3d8;
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
  long *plStack_360;
  long *plStack_358;
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
  undefined8 *puStack_2e0;
  long *plStack_2d8;
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
  long *plStack_248;
  undefined8 *puStack_240;
  long *plStack_238;
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
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar14);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar14 = (long *)&UNK_110a499b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a499b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar2;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_108461150;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14;
  puVar2 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,plVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar1 = (long *)&UNK_110a49a08;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49a08,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar2 = puVar7;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar2 = puVar7;
      param_4 = puVar4;
    }
  }
  plVar10 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_1084612c4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar1;
  puVar4 = puVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar1);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,plVar14);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    plVar14 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49a58,&uStack_180,puVar2);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar4 = puVar7;
    param_4 = puVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  __Unwind_Resume();
  pcStack_188 = FUN_108461438;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14;
  puVar2 = puVar4;
  puVar9 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar14);
  _objc_retain(puVar4);
  puVar7 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,plVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    plVar1 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_218;
    puVar2 = &uStack_218;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49aa8,puVar2,param_4);
    puStack_200 = unaff_x23;
    func_0x000107c278ac(&puStack_200);
    lVar11 = 0;
    puVar7 = auStack_1f8;
    puVar9 = param_4;
    do {
      if ((&cStack_1c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar4);
  plVar10 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(plVar14);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_228 = FUN_108461668;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar1;
  puVar8 = puVar2;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar7;
  plStack_248 = plVar10;
  puStack_240 = puVar4;
  plStack_238 = plVar14;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(plVar1);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_298;
    func_0x000107c278b8(auStack_298,plVar10);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_280,puVar4);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_268,2);
    plVar13 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_2b8;
    puVar8 = &uStack_2b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49af8,puVar8,puVar9);
    puStack_2a0 = unaff_x23;
    func_0x000107c278ac(&puStack_2a0);
    lVar11 = 0;
    puVar4 = auStack_298;
    do {
      if ((&cStack_269)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  plVar14 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(puVar2);
  _objc_release(plVar1);
  plVar3 = plVar14;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_108461898;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar13;
  puVar7 = puVar8;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar4;
  plStack_2e8 = plVar14;
  puStack_2e0 = puVar2;
  plStack_2d8 = plVar1;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(plVar13);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = auStack_320;
    func_0x000107c278b8(auStack_320,plVar10);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    plVar10 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49b48,&uStack_340,puVar8);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar7 = puVar9;
    puVar4 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar7 = puVar9;
      puVar4 = &uStack_340;
    }
  }
  plVar1 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3c0;
  pcStack_348 = FUN_108461a0c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar10;
  puVar2 = puVar7;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  plStack_368 = plVar14;
  plStack_360 = plVar1;
  plStack_358 = plVar13;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar10);
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    plVar3 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        plVar14 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar14 = plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      unaff_x23 = auStack_3a0;
      func_0x000107c278b8(auStack_3a0,plVar14);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
      plVar3 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b98,&uStack_3c0,puVar7);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x000107c278ac(&puStack_3a8);
      puVar2 = puVar9;
      puVar4 = &uStack_3c0;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        puVar2 = puVar9;
        puVar4 = &uStack_3c0;
      }
    }
  }
  plVar14 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  plVar13 = plVar14;
  __Unwind_Resume();
  puVar9 = &uStack_440;
  pcStack_3c8 = FUN_108461ba0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar7 = puVar2;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar4;
  plStack_3e8 = plVar12;
  plStack_3e0 = plVar14;
  plStack_3d8 = plVar10;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar3);
  if (plVar13 != (long *)0x0) {
    plVar14 = (long *)plVar13[1];
    plVar1 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar14 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar14 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_420;
      func_0x000107c278b8(auStack_420,plVar14);
      uStack_440 = 0;
      uStack_438 = 0;
      uStack_430 = 0;
      func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
      plVar1 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49be8,&uStack_440,puVar2);
      puStack_428 = (undefined1 *)&uStack_440;
      func_0x000107c278ac(&puStack_428);
      puVar7 = puVar9;
      puVar4 = &uStack_440;
      if (cStack_409 < '\0') {
        __ZdlPv(auStack_420[0]);
        puVar7 = puVar9;
        puVar4 = &uStack_440;
      }
    }
  }
  plVar14 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar10 = plVar14;
  __Unwind_Resume();
  pcStack_448 = FUN_108461d34;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_480 = unaff_x24;
  puStack_478 = unaff_x23;
  puStack_470 = puVar4;
  plStack_468 = plVar13;
  plStack_460 = plVar14;
  plStack_458 = plVar3;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar1);
  if (plVar10 != (long *)0x0) {
    plVar14 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    func_0x000107c278b8(auStack_4a0,plVar10);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x000107c27984(&uStack_4c0,auStack_4a0,&lStack_488,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49c38,&uStack_4c0,puVar7);
    puStack_4a8 = (undefined1 *)&uStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
    }
  }
  plVar14 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  __Unwind_Resume(plVar14);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108461150; end: 1084612c3;  */

void FUN_108461150(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  long *plStack_3e0;
  long *plStack_3d8;
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
  long *plStack_360;
  long *plStack_358;
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
  long *plStack_2e0;
  long *plStack_2d8;
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
  undefined8 *puStack_260;
  long *plStack_258;
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
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
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
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar12 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar12);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar12 = (long *)&UNK_110a49a08;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49a08,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = puVar4;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_1084612c4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar12;
  puVar4 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar12);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,plVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    plVar1 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49a58,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar4 = puVar7;
    param_4 = puVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar4 = puVar7;
      param_4 = puVar2;
    }
  }
  plVar10 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume();
  pcStack_108 = FUN_108461438;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar1;
  puVar2 = puVar4;
  puVar9 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar1);
  _objc_retain(puVar4);
  puVar7 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar12 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_178;
    func_0x000107c278b8(auStack_178,plVar12);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    plVar12 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_198;
    puVar2 = &uStack_198;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49aa8,puVar2,param_4);
    puStack_180 = unaff_x23;
    func_0x000107c278ac(&puStack_180);
    lVar11 = 0;
    puVar7 = auStack_178;
    puVar9 = param_4;
    do {
      if ((&cStack_149)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar4);
  plVar10 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar4);
  _objc_release(plVar1);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_1a8 = FUN_108461668;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar12;
  puVar8 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar7;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar4;
  plStack_1b8 = plVar1;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(plVar12);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_218;
    func_0x000107c278b8(auStack_218,plVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_200,puVar4);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x000107c27984(&uStack_238,auStack_218,&lStack_1e8,2);
    plVar14 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_238;
    puVar8 = &uStack_238;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49af8,puVar8,puVar9);
    puStack_220 = unaff_x23;
    func_0x000107c278ac(&puStack_220);
    lVar11 = 0;
    puVar4 = auStack_218;
    do {
      if ((&cStack_1e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  plVar10 = plVar12;
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
  _objc_release(plVar12);
  plVar3 = plVar10;
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_248 = FUN_108461898;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14;
  puVar7 = puVar8;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar4;
  plStack_268 = plVar10;
  puStack_260 = puVar2;
  plStack_258 = plVar12;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(plVar14);
  plVar12 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,plVar10);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    plVar1 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b48,&uStack_2c0,puVar8);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar7 = puVar9;
    puVar4 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar7 = puVar9;
      puVar4 = &uStack_2c0;
    }
  }
  plVar10 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar13 = plVar10;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_108461a0c;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar1;
  puVar2 = puVar7;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar4;
  plStack_2e8 = plVar12;
  plStack_2e0 = plVar10;
  plStack_2d8 = plVar14;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar1);
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)plVar13[1];
    plVar3 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar1);
      if (plVar1 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar12 = plVar1;
        _objc_retainAutorelease(plVar1);
        func_0x00010bdc3520();
      }
      _objc_release(plVar1);
      unaff_x23 = auStack_320;
      func_0x000107c278b8(auStack_320,plVar12);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
      plVar3 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49b98,&uStack_340,puVar7);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x000107c278ac(&puStack_328);
      puVar2 = puVar9;
      puVar4 = &uStack_340;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        puVar2 = puVar9;
        puVar4 = &uStack_340;
      }
    }
  }
  plVar12 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  plVar14 = plVar12;
  __Unwind_Resume();
  puVar9 = &uStack_3c0;
  pcStack_348 = FUN_108461ba0;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar3;
  puVar7 = puVar2;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  plStack_368 = plVar13;
  plStack_360 = plVar12;
  plStack_358 = plVar1;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar3);
  if (plVar14 != (long *)0x0) {
    plVar12 = (long *)plVar14[1];
    plVar10 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar12 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_3a0;
      func_0x000107c278b8(auStack_3a0,plVar12);
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
      plVar10 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49be8,&uStack_3c0,puVar2);
      puStack_3a8 = (undefined1 *)&uStack_3c0;
      func_0x000107c278ac(&puStack_3a8);
      puVar7 = puVar9;
      puVar4 = &uStack_3c0;
      if (cStack_389 < '\0') {
        __ZdlPv(auStack_3a0[0]);
        puVar7 = puVar9;
        puVar4 = &uStack_3c0;
      }
    }
  }
  plVar12 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar1 = plVar12;
  __Unwind_Resume();
  pcStack_3c8 = FUN_108461d34;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_400 = unaff_x24;
  puStack_3f8 = unaff_x23;
  puStack_3f0 = puVar4;
  plStack_3e8 = plVar14;
  plStack_3e0 = plVar12;
  plStack_3d8 = plVar3;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar10);
  if (plVar1 != (long *)0x0) {
    plVar12 = (long *)plVar1[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar10;
      _objc_retainAutorelease(plVar10);
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    func_0x000107c278b8(auStack_420,plVar1);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49c38,&uStack_440,puVar7);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x000107c278ac(&puStack_428);
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
    }
  }
  plVar12 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  __Unwind_Resume(plVar12);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1084612c4; end: 108461437;  */

void FUN_1084612c4(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  long *plStack_360;
  long *plStack_358;
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
  long *plStack_2e0;
  long *plStack_2d8;
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
  long *plStack_260;
  long *plStack_258;
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
  undefined8 *puStack_1e0;
  long *plStack_1d8;
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
  long *plStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
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
  plVar14 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,plVar14);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar14 = (long *)&UNK_110a49a58;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49a58,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar2;
      param_4 = param_3;
    }
  }
  plVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108461438;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar14;
  puVar2 = puVar4;
  puVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  _objc_retain(puVar4);
  puVar8 = (undefined8 *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar1 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,plVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    plVar1 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_118;
    puVar2 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49aa8,puVar2,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar8 = auStack_f8;
    puVar9 = param_4;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar4);
  plVar10 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(plVar14);
  plVar3 = plVar10;
  __Unwind_Resume();
  pcStack_128 = FUN_108461668;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar1;
  puVar7 = puVar2;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar8;
  plStack_148 = plVar10;
  puStack_140 = puVar4;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar1);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,plVar10);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_180,puVar4);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    plVar13 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_1b8;
    puVar7 = &uStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49af8,puVar7,puVar9);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar11 = 0;
    puVar4 = auStack_198;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  plVar14 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar2);
  _objc_release(plVar1);
  plVar3 = plVar14;
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_1c8 = FUN_108461898;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar13;
  puVar8 = puVar7;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar4;
  plStack_1e8 = plVar14;
  puStack_1e0 = puVar2;
  plStack_1d8 = plVar1;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar13);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,plVar10);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    plVar10 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49b48,&uStack_240,puVar7);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar8 = puVar9;
    puVar4 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar8 = puVar9;
      puVar4 = &uStack_240;
    }
  }
  plVar1 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_248 = FUN_108461a0c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar10;
  puVar2 = puVar8;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar4;
  plStack_268 = plVar14;
  plStack_260 = plVar1;
  plStack_258 = plVar13;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar10);
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    plVar3 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        plVar14 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar14 = plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      unaff_x23 = auStack_2a0;
      func_0x000107c278b8(auStack_2a0,plVar14);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
      plVar3 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b98,&uStack_2c0,puVar8);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x000107c278ac(&puStack_2a8);
      puVar2 = puVar9;
      puVar4 = &uStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        puVar2 = puVar9;
        puVar4 = &uStack_2c0;
      }
    }
  }
  plVar14 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  plVar13 = plVar14;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_108461ba0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = plVar3;
  puVar8 = puVar2;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar4;
  plStack_2e8 = plVar12;
  plStack_2e0 = plVar14;
  plStack_2d8 = plVar10;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar3);
  if (plVar13 != (long *)0x0) {
    plVar14 = (long *)plVar13[1];
    plVar1 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        plVar14 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar14 = plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = auStack_320;
      func_0x000107c278b8(auStack_320,plVar14);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
      plVar1 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49be8,&uStack_340,puVar2);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x000107c278ac(&puStack_328);
      puVar8 = puVar9;
      puVar4 = &uStack_340;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        puVar8 = puVar9;
        puVar4 = &uStack_340;
      }
    }
  }
  plVar14 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar10 = plVar14;
  __Unwind_Resume();
  pcStack_348 = FUN_108461d34;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = puVar4;
  plStack_368 = plVar13;
  plStack_360 = plVar14;
  plStack_358 = plVar3;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar1);
  if (plVar10 != (long *)0x0) {
    plVar14 = (long *)plVar10[1];
    _objc_retain(plVar1);
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar10 = plVar1;
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc3520();
    }
    _objc_release(plVar1);
    func_0x000107c278b8(auStack_3a0,plVar10);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49c38,&uStack_3c0,puVar8);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
    }
  }
  plVar14 = plVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar1);
  _objc_release(plVar1);
  __Unwind_Resume(plVar14);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108461438; end: 108461667;  */

void FUN_108461438(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  long *plStack_2e0;
  long *plStack_2d8;
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
  long *plStack_260;
  long *plStack_258;
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
  long *plStack_1e0;
  long *plStack_1d8;
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
  undefined8 *puStack_160;
  long *plStack_158;
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
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
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
  plVar12 = param_2;
  puVar1 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar12 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar12);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar12 = (long *)&UNK_110a49aa8;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49aa8,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar11 = 0;
    puVar3 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  plVar15 = param_2;
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
  plVar2 = plVar15;
  __Unwind_Resume();
  pcStack_a8 = FUN_108461668;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar12;
  puVar7 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar3;
  plStack_c8 = plVar15;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar12);
  _objc_retain(puVar1);
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar15 = (long *)plVar2[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_118;
    func_0x000107c278b8(auStack_118,plVar14);
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar3 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    plVar14 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_138;
    puVar7 = &uStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110a49af8,puVar7,uVar10);
    puStack_120 = unaff_x23;
    func_0x000107c278ac(&puStack_120);
    lVar11 = 0;
    puVar3 = auStack_118;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar1);
  _objc_release(plVar12);
  plVar4 = plVar15;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  pcStack_148 = FUN_108461898;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar14;
  puVar8 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar3;
  plStack_168 = plVar15;
  puStack_160 = puVar1;
  plStack_158 = plVar12;
  ppuStack_150 = &puStack_b0;
  _objc_retain(plVar14);
  plVar12 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar12 = (long *)plVar4[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      plVar15 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar15 = plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,plVar15);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    plVar2 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b48,&uStack_1c0,puVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar8 = puVar9;
    puVar3 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar8 = puVar9;
      puVar3 = &uStack_1c0;
    }
  }
  plVar15 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar13 = plVar15;
  __Unwind_Resume();
  puVar7 = &uStack_240;
  pcStack_1c8 = FUN_108461a0c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar1 = puVar8;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar3;
  plStack_1e8 = plVar12;
  plStack_1e0 = plVar15;
  plStack_1d8 = plVar14;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(plVar2);
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)plVar13[1];
    plVar4 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar12 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = auStack_220;
      func_0x000107c278b8(auStack_220,plVar12);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
      plVar4 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110a49b98,&uStack_240,puVar8);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x000107c278ac(&puStack_228);
      puVar1 = puVar7;
      puVar3 = &uStack_240;
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
        puVar1 = puVar7;
        puVar3 = &uStack_240;
      }
    }
  }
  plVar12 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar14 = plVar12;
  __Unwind_Resume();
  puVar8 = &uStack_2c0;
  pcStack_248 = FUN_108461ba0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  puVar7 = puVar1;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar3;
  plStack_268 = plVar13;
  plStack_260 = plVar12;
  plStack_258 = plVar2;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar4);
  if (plVar14 != (long *)0x0) {
    plVar12 = (long *)plVar14[1];
    plVar15 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        plVar12 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar12 = plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = auStack_2a0;
      func_0x000107c278b8(auStack_2a0,plVar12);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
      plVar15 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110a49be8,&uStack_2c0,puVar1);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x000107c278ac(&puStack_2a8);
      puVar7 = puVar8;
      puVar3 = &uStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        puVar7 = puVar8;
        puVar3 = &uStack_2c0;
      }
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar2 = plVar12;
  __Unwind_Resume();
  pcStack_2c8 = FUN_108461d34;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar3;
  plStack_2e8 = plVar14;
  plStack_2e0 = plVar12;
  plStack_2d8 = plVar4;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar15);
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      plVar14 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar14 = plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    func_0x000107c278b8(auStack_320,plVar14);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49c38,&uStack_340,puVar7);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
    }
  }
  plVar12 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume(plVar12);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar6 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108461668; end: 108461897;  */

void FUN_108461668(long param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
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
  long *plStack_240;
  long *plStack_238;
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
  long *plStack_1c0;
  long *plStack_1b8;
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
  long *plStack_140;
  long *plStack_138;
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
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
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
  plVar3 = param_2;
  puVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,plVar3);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f49a75e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    plVar3 = (long *)&UNK_110a49af8;
    unaff_x23 = &uStack_98;
    puVar1 = &uStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49af8,puVar1,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar13 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  plVar12 = param_2;
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
  plVar11 = plVar12;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108461898;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar3;
  puVar7 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  plStack_c8 = plVar12;
  puStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  plVar12 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)plVar11[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar2 = plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,plVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    plVar2 = (long *)&UNK_110a49b48;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110a49b48,&uStack_120,puVar1);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar13 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar13 = &uStack_120;
    }
  }
  plVar11 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar10 = plVar11;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_108461a0c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar2;
  puVar1 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  plStack_148 = plVar12;
  plStack_140 = plVar11;
  plStack_138 = plVar3;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar2);
  if (plVar10 != (long *)0x0) {
    plVar3 = (long *)plVar10[1];
    plVar6 = (long *)&UNK_110a49b98;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar10 = (long *)plVar10[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar3 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = auStack_180;
      func_0x000107c278b8(auStack_180,plVar3);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
      plVar6 = (long *)&UNK_110a49b98;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110a49b98,&uStack_1a0,puVar7);
      puStack_188 = (undefined1 *)&uStack_1a0;
      func_0x000107c278ac(&puStack_188);
      puVar1 = puVar8;
      puVar13 = &uStack_1a0;
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
        puVar1 = puVar8;
        puVar13 = &uStack_1a0;
      }
    }
  }
  plVar3 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar11 = plVar3;
  __Unwind_Resume();
  puVar8 = &uStack_220;
  pcStack_1a8 = FUN_108461ba0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar6;
  puVar7 = puVar1;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar13;
  plStack_1c8 = plVar10;
  plStack_1c0 = plVar3;
  plStack_1b8 = plVar2;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar6);
  if (plVar11 != (long *)0x0) {
    plVar3 = (long *)plVar11[1];
    plVar12 = (long *)&UNK_110a49be8;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f49a75e;
      }
      else {
        plVar3 = plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      unaff_x23 = auStack_200;
      func_0x000107c278b8(auStack_200,plVar3);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
      plVar12 = (long *)&UNK_110a49be8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110a49be8,&uStack_220,puVar1);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      puVar7 = puVar8;
      puVar13 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar7 = puVar8;
        puVar13 = &uStack_220;
      }
    }
  }
  plVar3 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar2 = plVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_108461d34;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar13;
  plStack_248 = plVar11;
  plStack_240 = plVar3;
  plStack_238 = plVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)plVar2[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f49a75e;
    }
    else {
      plVar2 = plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x000107c278b8(auStack_280,plVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a49c38,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  plVar3 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  __Unwind_Resume(plVar3);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar5 = puVar4;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108461898; end: 108461a0b;  */

void FUN_108461898(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
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
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a49b48;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a49b48,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar3 = &UNK_110a49b98;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_e0,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar3 = &UNK_110a49b98;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a49b98,&uStack_100,puVar4);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar6 = (undefined1 *)puVar5;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar6 = (undefined1 *)puVar5;
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
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_110a49be8;
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(puVar2 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f49a75e;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x000107c278b8(auStack_160,puVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
      puVar1 = &UNK_110a49be8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a49be8,&uStack_180,puVar6);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x000107c278ac(&puStack_168);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f49a75e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a49c38,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
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
  __Unwind_Resume(puVar2);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar3 = puVar1;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108461a0c; end: 108461b9f;  */

void FUN_108461a0c(long param_1,undefined *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a49b98;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a49b98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49b98,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar4 = &UNK_110a49be8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f49a75e;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_e0,puVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar4 = &UNK_110a49be8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49be8,&uStack_100,puVar5);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar7 = (undefined1 *)puVar6;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = (undefined1 *)puVar6;
      }
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
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f49a75e;
    }
    else {
      puVar2 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49c38,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
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
  __Unwind_Resume(puVar2);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar4 = puVar3;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108461ba0; end: 108461d33;  */

void FUN_108461ba0(long param_1,undefined *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a49be8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f49a75e;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a49be8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49be8,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
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
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f49a75e;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a49c38,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
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
  __Unwind_Resume(puVar3);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar4 = puVar2;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108461d34; end: 108461ea7;  */

void FUN_108461d34(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
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
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49a75e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a49c38,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar3 = puVar2;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108461ea8; end: 108461f23;  */

void FUN_108461ea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d96d8;
  _objc_alloc(PTR_PTR_1126d96d8);
  func_0x00010c008360();
  puVar2 = puVar1;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108461f24; end: 108462183;  */

void FUN_108461f24(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lVar4 = param_1;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d96d8;
  _objc_alloc();
  uStack_f8 = 0;
  func_0x00010c008360();
  uVar2 = uStack_f8;
  _objc_retain();
  if (puVar5 != (undefined *)0x0) {
    puVar11 = puVar5;
    func_0x00010bf97320();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010bf97320();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar6);
      _objc_release(puVar11);
      if (puVar10 != (undefined *)0x0) {
        bVar1 = true;
        goto LAB_108462010;
      }
    }
  }
  bVar1 = false;
LAB_108462010:
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar11 = puVar5;
  func_0x00010bf97320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar9 = *plStack_130;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(puVar11);
        }
        uVar12 = *(undefined8 *)(lStack_138 + (long)puVar10 * 8);
        lVar7 = param_1;
        func_0x00010bfcc4e0(param_1,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          _objc_release(puVar11);
          goto LAB_108462114;
        }
        lVar8 = lVar7;
        func_0x00010bfc48a0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,lVar8,uVar12);
        _objc_release(lVar8);
        _objc_release(lVar7);
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar10);
      puVar6 = puVar11;
      func_0x00010bf52a60(puVar11,param_2,&uStack_140,auStack_f0,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar11);
  if (bVar1) {
    _objc_retain(puVar3);
    puVar11 = puVar3;
  }
  else {
LAB_108462114:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (puRam000000011372b948 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9e910,
                        &PTR____CFConstantStringClassReference_110edc918,&PTR_DAT_11325c030,
                        &PTR_DAT_11325c048,1,0x10,0x1c);
    puRam000000011372b948 = puVar3;
  }
  return;
}



/* Entry: 108462184; end: 1084621eb; +[ZipArchiveContents descriptor] */

void FUN_108462184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9e910,
                        &PTR____CFConstantStringClassReference_110edc918,&PTR_DAT_11325c030,
                        &PTR_DAT_11325c048,1,0x10,0x1c);
    puRam000000011372b948 = puVar1;
  }
  return;
}



/* Entry: 1084621ec; end: 1084621f3; -[SCLegacyMediaServices legacyMediaCache] */

undefined8 FUN_1084621ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084621f4; end: 1084621ff; -[SCLegacyMediaServices .cxx_destruct] */

void FUN_1084621f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108462200; end: 10846222b; +[SCGrapheneMediaOrchestrationMetric snapUploadResult] */

void FUN_108462200(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10846222c; end: 108462257; +[SCGrapheneMediaOrchestrationMetric snapUploadSize] */

void FUN_10846222c(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462258; end: 108462283; +[SCGrapheneMediaOrchestrationMetric uploadResumeAt] */

void FUN_108462258(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462284; end: 1084622af; +[SCGrapheneMediaOrchestrationMetric invalidUploadInput] */

void FUN_108462284(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084622b0; end: 1084622db; +[SCGrapheneMediaOrchestrationMetric mediaDataPackage] */

void FUN_1084622b0(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084622dc; end: 108462307; +[SCGrapheneMediaOrchestrationMetric uploadStep] */

void FUN_1084622dc(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462308; end: 108462333; +[SCGrapheneMediaOrchestrationMetric appstate] */

void FUN_108462308(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462334; end: 10846235f; +[SCGrapheneMediaOrchestrationMetric uploadServerError] */

void FUN_108462334(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462360; end: 10846238b; +[SCGrapheneMediaOrchestrationMetric updateBeforeMediaLoss] */

void FUN_108462360(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10846238c; end: 1084623b7; +[SCGrapheneMediaOrchestrationMetric preuploadUpdateFatal] */

void FUN_10846238c(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084623b8; end: 1084623e3; +[SCGrapheneMediaOrchestrationMetric uploadFromFileResult] */

void FUN_1084623b8(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084623e4; end: 10846240f; +[SCGrapheneMediaOrchestrationMetric mediaDirInit] */

void FUN_1084623e4(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462410; end: 10846243b; +[SCGrapheneMediaOrchestrationMetric crosspostStoryStubCreated] */

void FUN_108462410(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10846243c; end: 108462467; +[SCGrapheneMediaOrchestrationMetric crosspostStoryRetryDeferred] */

void FUN_10846243c(void)

{
  _objc_alloc(PTR_PTR_1126bc530);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462468; end: 108462507; -[SCGrapheneMediaOrchestrationMetric description] */

void FUN_108462468(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110edc938;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110edc938,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc980;
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



/* Entry: 108462508; end: 1084626cb; -[SCGrapheneRegistry mediaOrchestrationGraphene] */

void FUN_108462508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108462590;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372b958 != -1) {
    func_0x000107c27d9c(0x11372b958,&puStack_48);
  }
  uVar1 = uRam000000011372b950;
  _objc_retain(uRam000000011372b950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084626cc; end: 1084626f7; +[SCGrapheneBoltMetric directUploadFallback] */

void FUN_1084626cc(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084626f8; end: 108462723; +[SCGrapheneBoltMetric networkMappingDiskTime] */

void FUN_1084626f8(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462724; end: 10846274f; +[SCGrapheneBoltMetric networkMappingReqTime] */

void FUN_108462724(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462750; end: 10846277b; +[SCGrapheneBoltMetric resolveTime] */

void FUN_108462750(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10846277c; end: 1084627a7; +[SCGrapheneBoltMetric storyUrlComparison] */

void FUN_10846277c(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084627a8; end: 1084627d3; +[SCGrapheneBoltMetric uploadLocation] */

void FUN_1084627a8(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084627d4; end: 1084627ff; +[SCGrapheneBoltMetric uploadUrlsRestored] */

void FUN_1084627d4(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462800; end: 10846282b; +[SCGrapheneBoltMetric uploadUrlsFetched] */

void FUN_108462800(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10846282c; end: 108462857; +[SCGrapheneBoltMetric ulBoltFetchSent] */

void FUN_10846282c(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462858; end: 108462883; +[SCGrapheneBoltMetric ulBoltFetchResult] */

void FUN_108462858(void)

{
  _objc_alloc(PTR_PTR_1126d96e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462884; end: 108462923; -[SCGrapheneBoltMetric description] */

void FUN_108462884(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110edcb18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110edcb18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc988;
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



/* Entry: 108462924; end: 108462abf; -[SCGrapheneRegistry boltGraphene] */

void FUN_108462924(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1084629ac;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372b968 != -1) {
    func_0x000107c27d9c(0x11372b968,&puStack_48);
  }
  uVar1 = uRam000000011372b960;
  _objc_retain(uRam000000011372b960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108462ac0; end: 108462aeb; +[SCGrapheneUploadMetric uploadResult] */

void FUN_108462ac0(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462aec; end: 108462b17; +[SCGrapheneUploadMetric uploadSuccessLatency] */

void FUN_108462aec(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462b18; end: 108462b43; +[SCGrapheneUploadMetric uploadFailureLatency] */

void FUN_108462b18(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462b44; end: 108462b6f; +[SCGrapheneUploadMetric uploadLatencyStep] */

void FUN_108462b44(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462b70; end: 108462b9b; +[SCGrapheneUploadMetric uploadSize] */

void FUN_108462b70(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462b9c; end: 108462bc7; +[SCGrapheneUploadMetric uploadBandwidthEstimate] */

void FUN_108462b9c(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462bc8; end: 108462bf3; +[SCGrapheneUploadMetric uploadTimeEstimate] */

void FUN_108462bc8(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462bf4; end: 108462c1f; +[SCGrapheneUploadMetric uploadResumeBytesRemaining] */

void FUN_108462bf4(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462c20; end: 108462c4b; +[SCGrapheneUploadMetric uploadResumeBytesUploaded] */

void FUN_108462c20(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462c4c; end: 108462c77; +[SCGrapheneUploadMetric fetchResumableStateResult] */

void FUN_108462c4c(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462c78; end: 108462ca3; +[SCGrapheneUploadMetric dequeueUrlStepResult] */

void FUN_108462c78(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462ca4; end: 108462ccf; +[SCGrapheneUploadMetric writeMediaStepResult] */

void FUN_108462ca4(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462cd0; end: 108462cfb; +[SCGrapheneUploadMetric readMediaStepResult] */

void FUN_108462cd0(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462cfc; end: 108462d27; +[SCGrapheneUploadMetric resumableStartStep] */

void FUN_108462cfc(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462d28; end: 108462d53; +[SCGrapheneUploadMetric gcsResumeStartByte] */

void FUN_108462d28(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462d54; end: 108462d7f; +[SCGrapheneUploadMetric gcsRuValidStates] */

void FUN_108462d54(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462d80; end: 108462dab; +[SCGrapheneUploadMetric gcsRuExpiredStates] */

void FUN_108462d80(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462dac; end: 108462dd7; +[SCGrapheneUploadMetric gcsRuValidStatePerc] */

void FUN_108462dac(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462dd8; end: 108462e03; +[SCGrapheneUploadMetric gcsRuStateOpLatency] */

void FUN_108462dd8(void)

{
  _objc_alloc(PTR_PTR_1126bc6c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108462e04; end: 108462ea3; -[SCGrapheneUploadMetric description] */

void FUN_108462e04(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3138;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df3138,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc990;
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



/* Entry: 108462ea4; end: 10846309b; -[SCGrapheneRegistry uploadGraphene] */

void FUN_108462ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108462f2c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372b978 != -1) {
    func_0x000107c27d9c(0x11372b978,&puStack_48);
  }
  uVar1 = uRam000000011372b970;
  _objc_retain(uRam000000011372b970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846309c; end: 10846319b; -[SCMediaUploadStepMetrics initWithCoder:] */

undefined1 *
FUN_10846309c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126fc998;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10846319c; end: 108463273; -[SCMediaUploadStepMetrics initWithLastStepCompleteTimestamp:timers:lastStep:lastStepStatus:debugInfo:failureReason:] */

undefined1 *
FUN_10846319c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fc998;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108463274; end: 108463297; -[SCMediaUploadStepMetrics copyWithZone:] */

undefined8 FUN_108463274(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108463298; end: 108463347; -[SCMediaUploadStepMetrics encodeWithCoder:] */

void FUN_108463298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110edceb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110edced8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110edcef8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110edcf18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110edcf38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110edcf58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108463348; end: 1084633eb; -[SCMediaUploadStepMetrics hash] */

ulong * FUN_108463348(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = &uStack_58;
  uStack_38 = uVar3;
  func_0x000100505190(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1084634d0:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_1084634dc;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((puVar4[3] == param_3[3] && (puVar4[4] == param_3[4])) && (puVar4[6] == param_3[6])))) {
      dVar9 = ABS((double)puVar4[1] - (double)param_3[1]);
      dVar8 = ABS((double)puVar4[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if ((bVar1) &&
         ((uVar6 = puVar4[2], uVar6 == param_3[2] || (func_0x00010c071ae0(), (int)uVar6 != 0)))) {
        puVar7 = (ulong *)puVar4[5];
        if (puVar7 != (ulong *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_1084634dc;
        }
        goto LAB_1084634d0;
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_1084634dc:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1084633ec; end: 1084634f7; -[SCMediaUploadStepMetrics isEqual:] */

long FUN_1084633ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1084634d0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1084634dc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_1084634dc;
        }
        goto LAB_1084634d0;
      }
    }
    lVar4 = 0;
  }
LAB_1084634dc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1084634f8; end: 1084634ff; -[SCMediaUploadStepMetrics lastStepCompleteTimestamp] */

undefined8 FUN_1084634f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108463500; end: 108463507; -[SCMediaUploadStepMetrics timers] */

undefined8 FUN_108463500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108463508; end: 10846350f; -[SCMediaUploadStepMetrics lastStep] */

undefined8 FUN_108463508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108463510; end: 108463517; -[SCMediaUploadStepMetrics lastStepStatus] */

undefined8 FUN_108463510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108463518; end: 10846351f; -[SCMediaUploadStepMetrics debugInfo] */

undefined8 FUN_108463518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108463520; end: 108463527; -[SCMediaUploadStepMetrics failureReason] */

undefined8 FUN_108463520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108463528; end: 108463557; -[SCMediaUploadStepMetrics .cxx_destruct] */

void FUN_108463528(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108463558; end: 108463623;  */

void FUN_108463558(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060(param_1,param_2,puVar4,0);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108463624; end: 108463c0b;  */

undefined1 * FUN_108463624(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_218 = param_2;
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf96fc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_190 = lVar3;
  func_0x00010bf52a60();
  lStack_210 = param_1;
  if (lVar3 == 0) {
    lStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_1d8 = 0;
    lStack_1c8 = 0;
    lStack_1a8 = 0;
    lStack_198 = 0;
    lVar18 = 0;
    uVar19 = 0;
    uVar12 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar17 = 0;
    uVar20 = 0;
  }
  else {
    uStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1d0 = 0;
    lStack_1c8 = 0;
    uStack_1e0 = 0;
    lStack_1d8 = 0;
    uVar12 = 0;
    uVar19 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    uVar15 = 0;
    lVar18 = 0;
    uStack_1a0 = 0;
    lStack_198 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_1f8 = 0;
    uStack_188 = 0;
    lVar16 = *plStack_120;
    do {
      lVar21 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lStack_190);
        }
        uVar14 = *(undefined8 *)(lStack_128 + lVar21 * 8);
        uVar8 = uVar14;
        func_0x00010bfacec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010bfda7c0();
        uVar13 = uVar12;
        if ((int)uVar4 == 0) {
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_198;
          if ((int)uVar4 != 0) {
            lStack_140 = lStack_198;
            func_0x00010c0d8860();
            lStack_198 = lStack_140;
            uVar12 = uStack_1a0;
            uStack_1a0 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_1a8;
          if ((int)uVar4 != 0) {
            lStack_148 = lStack_1a8;
            func_0x00010c0d8860();
            lStack_1a8 = lStack_148;
            uVar12 = uStack_1b0;
            uStack_1b0 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_1b8;
          if ((int)uVar4 != 0) {
            lStack_150 = lStack_1b8;
            func_0x00010c0d8860();
            lStack_1b8 = lStack_150;
            uVar12 = uStack_1c0;
            uStack_1c0 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_1c8;
          if ((int)uVar4 != 0) {
            lStack_158 = lStack_1c8;
            func_0x00010c0d8860();
            lStack_1c8 = lStack_158;
            uVar12 = uStack_1d0;
            uStack_1d0 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_1d8;
          if ((int)uVar4 != 0) {
            lStack_160 = lStack_1d8;
            func_0x00010c0d8860();
            lStack_1d8 = lStack_160;
            uVar12 = uStack_1e0;
            uStack_1e0 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010bfda7c0();
          lVar11 = lStack_1e8;
          if ((int)uVar4 != 0) {
            lStack_168 = lStack_1e8;
            func_0x00010c0d8860();
            lStack_1e8 = lStack_168;
            uVar13 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010bfda7c0();
          lVar11 = lStack_1f0;
          if ((int)uVar4 != 0) {
            lStack_170 = lStack_1f0;
            func_0x00010c0d8860();
            lStack_1f0 = lStack_170;
            uVar12 = uVar19;
            uVar19 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_1f8;
          if ((int)uVar4 != 0) {
            lStack_178 = lStack_1f8;
            func_0x00010c0d8860();
            lStack_1f8 = lStack_178;
            uVar12 = uStack_208;
            uStack_208 = uVar14;
            goto LAB_108463974;
          }
          uVar4 = uVar8;
          func_0x00010c0720c0();
          lVar11 = lStack_200;
          if ((int)uVar4 != 0) {
            lStack_180 = lStack_200;
            func_0x00010c0d8860();
            lStack_200 = lStack_180;
            uVar12 = uVar15;
            uVar15 = uVar14;
            goto LAB_108463974;
          }
        }
        else {
          lStack_138 = lVar18;
          func_0x00010c0d8860();
          lVar11 = lVar18;
          uVar12 = uStack_188;
          lVar18 = lStack_138;
          uStack_188 = uVar14;
LAB_108463974:
          _objc_retain();
          _objc_release(lVar11);
          _objc_release(uVar12);
          uVar12 = uVar13;
        }
        _objc_release(uVar8);
        lVar21 = lVar21 + 1;
      } while (lVar3 != lVar21);
      lVar3 = lStack_190;
      func_0x00010bf52a60();
      uVar8 = uStack_1d0;
      puVar1 = puStack_218;
    } while (lVar3 != 0);
    uVar4 = uStack_1c0;
    uVar13 = uStack_1e0;
    uVar14 = uStack_188;
    uVar17 = uStack_1a0;
    uVar20 = uStack_208;
    uStack_220 = uVar15;
    if ((puStack_218 != (undefined8 *)0x0) &&
       (((lVar18 != 0 || lStack_198 != 0) ||
        (((((lStack_1a8 != 0 || lStack_1b8 != 0) || lStack_1c8 != 0) || lStack_1d8 != 0) ||
         lStack_1e8 != 0) || lStack_1f0 != 0)) || (lStack_1f8 != 0 || lStack_200 != 0))) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110edd098;
      func_0x00010b291824();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar1 = ppuVar5;
      uVar4 = uStack_1c0;
      uVar13 = uStack_1e0;
      uVar15 = uStack_220;
      uVar14 = uStack_188;
      uVar17 = uStack_1a0;
      uVar20 = uStack_208;
    }
  }
  puVar6 = PTR_PTR_1126d96e8;
  uStack_1a0 = uVar19;
  uStack_188 = uVar14;
  _objc_alloc(PTR_PTR_1126d96e8);
  uVar2 = uStack_1b0;
  uVar9 = uVar17;
  uVar10 = uStack_1b0;
  uStack_240 = uVar12;
  uStack_238 = uVar19;
  uStack_230 = uVar20;
  uStack_228 = uVar15;
  func_0x00010c039a80();
  _objc_release(lStack_190);
  _objc_release(lStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  _objc_release(lStack_1d8);
  _objc_release(lStack_1c8);
  _objc_release(lStack_1b8);
  _objc_release(lStack_1a8);
  _objc_release(lStack_198);
  _objc_release(lVar18);
  _objc_release(uVar15);
  _objc_release(uVar20);
  _objc_release(uStack_1a0);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uStack_188);
  lVar3 = lStack_210;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar7 = &lStack_280;
    pcStack_248 = FUN_108463c0c;
    uStack_270 = uVar15;
    uStack_268 = uVar13;
    uStack_260 = uVar4;
    uStack_258 = uVar12;
    puStack_250 = &stack0xfffffffffffffff0;
    _objc_retain(uVar14);
    _objc_retain(uVar9);
    _objc_retain(uVar10);
    puStack_278 = PTR_PTR_1126fc9a0;
    lStack_280 = lVar3;
    _objc_msgSendSuper2(&lStack_280,PTR_s_init_1125d9248);
    if (plVar7 != (long *)0x0) {
      _objc_retain(uVar14);
      uVar8 = *(undefined8 *)((long)plVar7 + 8);
      *(undefined8 *)((long)plVar7 + 8) = uVar14;
      _objc_release(uVar8);
      _objc_retain(uVar9);
      uVar8 = *(undefined8 *)((long)plVar7 + 0x10);
      *(undefined8 *)((long)plVar7 + 0x10) = uVar9;
      _objc_release(uVar8);
      _objc_retain(uVar10);
      uVar8 = *(undefined8 *)((long)plVar7 + 0x18);
      *(undefined8 *)((long)plVar7 + 0x18) = uVar10;
      _objc_release(uVar8);
    }
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar14);
    return (undefined1 *)plVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 108463c0c; end: 108463cd7; -[SCTimelineSourcePlaybackState initWithAssetComposition:audioTrack:videoTrack:] */

undefined1 *
FUN_108463c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fc9a0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108463cd8; end: 108463cdf; -[SCTimelineSourcePlaybackState assetComposition] */

undefined8 FUN_108463cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108463ce0; end: 108463ce7; -[SCTimelineSourcePlaybackState assetAudioTrack] */

undefined8 FUN_108463ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108463ce8; end: 108463cef; -[SCTimelineSourcePlaybackState assetVideoTrack] */

undefined8 FUN_108463ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108463cf0; end: 108463d2b; -[SCTimelineSourcePlaybackState .cxx_destruct] */

void FUN_108463cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108463d2c; end: 108463d8b; -[SCTimelineVideoSource initWithURL:] */

void FUN_108463d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c052730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108463d8c; end: 108463deb; -[SCTimelineVideoSource initWithAVAsset:] */

void FUN_108463d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c052730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108463dec; end: 108463df7; -[SCTimelineVideoSource initWithTimelineConfiguration:] */

void FUN_108463dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c052730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTimelineConfiguration_pr_1125f23d0,param_3,0,0);
  return;
}



/* Entry: 108463df8; end: 10846427f; -[SCTimelineVideoSource initWithTimelineConfiguration:previewAssetVideoProviderFactory:smartTemplate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108463df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_f8 = PTR_PTR_1126fc9a8;
  puVar1 = &uStack_100;
  puVar7 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_100 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar12 = (long)_DAT_112775794;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(long *)((long)puVar1 + lVar12) = param_5;
    _objc_release(uVar2);
    if (param_5 == 0) {
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      iVar8 = _DAT_112775798;
    }
    else {
      func_0x00010c276200(&uStack_1a0,param_5);
      uVar2 = uStack_1a0;
      puVar1[0xc] = uStack_198;
      puVar1[0xb] = uVar2;
      puVar1[0xd] = uStack_190;
      iVar8 = _DAT_112775798;
      func_0x00010c276460(&uStack_1a0,param_5);
    }
    puVar7 = (undefined8 *)((long)puVar1 + (long)iVar8);
    puVar7[2] = uStack_190;
    puVar7[1] = uStack_198;
    *puVar7 = uStack_1a0;
    _objc_initWeak(&uStack_108,puVar1);
    lVar9 = param_5;
    func_0x00010c158520();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_108464280;
    puStack_118 = &UNK_110842c58;
    puVar7 = &uStack_108;
    _objc_copyWeak(auStack_110,puVar7);
    lVar3 = lVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277579c);
    *(long *)((long)puVar1 + (long)_DAT_11277579c) = lVar3;
    _objc_release(uVar2);
    _objc_release(lVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    lVar9 = param_5;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_160;
      do {
        lVar10 = 0;
        do {
          if (*plStack_160 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (*(long *)(lStack_168 + lVar10 * 8) == 0) {
            uVar2 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
          }
          else {
            func_0x00010c27c900(&uStack_1a0);
          }
          func_0x00010c297240(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar5);
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar9);
    _objc_retain(puVar4);
    uVar6 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar6);
    iVar8 = (int)*(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf4b7e0();
    if (iVar8 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127757a0);
      *(undefined **)((long)puVar1 + (long)_DAT_1127757a0) = puVar5;
      _objc_release(uVar6);
    }
    func_0x00010c21da00(puVar1);
    lVar9 = (long)_DAT_1127757a4;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_6;
    _objc_release(uVar6);
    lVar9 = (long)_DAT_1127757a8;
    _objc_retain(param_7);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    _objc_release(uVar6);
    func_0x00010c130080(*(undefined8 *)((long)puVar1 + lVar12));
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127757ac) = uVar2;
    ((undefined8 *)((long)puVar1 + (long)_DAT_1127757ac))[1] = param_2;
    func_0x00010bee9160(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127757b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127757b0) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127757b4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127757b4) = puVar5;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127757b8) = 0;
    puVar5 = PTR_PTR_1126d96f0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127757bc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127757bc) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(&uStack_108);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(&uStack_108);
  __Unwind_Resume();
  _objc_retain(puVar7);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010bedbd60(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return puVar7;
}



/* Entry: 108464280; end: 1084642cf;  */

void FUN_108464280(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedbd60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


