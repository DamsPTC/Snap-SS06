/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b27f67c; end: 10b27f8bb;  */

/* WARNING: Removing unreachable block (ram,0x00010b27f88c) */

void FUN_10b27f67c(double param_1,long param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  puVar2 = (undefined *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110ccc968;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110ccc968);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110ccc968;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110ccc968,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      uVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        param_3 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_3 = (undefined8 *)((long)param_3 + -0x18);
    } while (param_3 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b27f67c(puVar3,puVar2,puVar4,uVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10b27f8bc; end: 10b27f93f;  */

void FUN_10b27f8bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b27f67c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b27f940; end: 10b27fd63;  */

/* WARNING: Removing unreachable block (ram,0x00010b27fd14) */
/* WARNING: Removing unreachable block (ram,0x00010b280138) */

void FUN_10b27f940(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined *unaff_x28;
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
  
  puVar7 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar6 = param_4;
  puVar9 = param_5;
  puVar11 = param_6;
  puVar13 = param_7;
  puVar15 = param_8;
  puVar4 = param_9;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar18 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar19 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_100,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_e8,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_d0,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_7);
    if (param_7 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar1 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      unaff_x28 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_8);
      unaff_x28 = param_8;
      func_0x00010bdc3520();
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_88,unaff_x28);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,alStack_70,6);
    puVar1 = &UNK_110ccca08;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    lVar17 = 0;
    puVar18 = auStack_100;
    puVar6 = (undefined *)puVar7;
    puVar9 = param_9;
    do {
      if ((&cStack_71)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_8);
  puStack_178 = auStack_100;
  do {
    puVar18 = puVar18 + -0x18;
  } while (puVar18 != puStack_178);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_240;
  pcStack_128 = FUN_10b27fd64;
  alStack_190[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar6;
  puVar10 = puVar9;
  puVar12 = puVar11;
  puVar14 = puVar13;
  puVar16 = puVar15;
  puStack_180 = unaff_x28;
  puStack_170 = puVar18;
  puStack_168 = puVar2;
  puStack_160 = param_8;
  puStack_158 = param_7;
  puStack_150 = param_6;
  puStack_148 = param_5;
  puStack_140 = param_4;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  _objc_retain(puVar15);
  puVar18 = (undefined1 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar19 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_220,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_208,puVar2);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_1f0,puVar2);
    _objc_retain(puVar11);
    if (puVar11 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar2 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_1d8,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_1c0,puVar2);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar2 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar2 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x000107c278b8(auStack_1a8,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,alStack_190,6);
    puVar5 = &UNK_110ccca58;
    (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_110ccca58,&uStack_240,puVar4);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar17 = 0;
    puVar18 = auStack_220;
    puVar8 = (undefined *)puVar7;
    puVar10 = puVar4;
    do {
      if ((&cStack_191)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a8 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x90);
  }
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar6);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_190[0]) {
    ___stack_chk_fail();
    _objc_release(puVar15);
    do {
      puVar18 = puVar18 + -0x18;
    } while (puVar18 != auStack_220);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    _objc_retain(puVar14);
    _objc_retain(puVar16);
    if (puVar4 != (undefined *)0x0) {
      FUN_10b27fd64(puVar4,puVar5,puVar8,puVar10,puVar12,puVar14,puVar16,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10b27fd64; end: 10b280187;  */

/* WARNING: Removing unreachable block (ram,0x00010b280138) */

void FUN_10b27fd64(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
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
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  puVar6 = param_6;
  puVar7 = param_7;
  puVar8 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar10 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_100,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_e8,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_d0,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_7);
    if (param_7 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar1 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_8);
      puVar1 = param_8;
      func_0x00010bdc3520(param_8);
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_88,puVar1);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,alStack_70,6);
    puVar1 = &UNK_110ccca58;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110ccca58,&uStack_120,param_9);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    lVar9 = 0;
    puVar10 = auStack_100;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_9;
    do {
      if ((&cStack_71)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(param_8);
    do {
      puVar10 = puVar10 + -0x18;
    } while (puVar10 != auStack_100);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    if (puVar2 != (undefined *)0x0) {
      FUN_10b27fd64(puVar2,puVar1,puVar3,puVar5,puVar6,puVar7,puVar8,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b280188; end: 10b2802ab;  */

void FUN_10b280188(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_2 != 0) {
    FUN_10b27fd64(param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)(param_1 * 1000.0));
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



/* Entry: 10b2802ac; end: 10b28056b;  */

/* WARNING: Removing unreachable block (ram,0x00010b280534) */
/* WARNING: Removing unreachable block (ram,0x00010b28077c) */

void FUN_10b2802ac(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
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
  puVar10 = (undefined8 *)param_3;
  puVar1 = param_4;
  puVar3 = param_5;
  puVar8 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
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
      puVar1 = &UNK_10f73f459;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar10 = (undefined8 *)&UNK_110cccaa8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar9 = 0;
    puVar1 = (undefined *)puVar5;
    puVar3 = param_6;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)puVar10;
  puVar6 = puVar1;
  puVar7 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    puVar4 = &UNK_110cccaf8;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_110cccaf8);
    if ((int)plVar11 != 0) {
      plVar11 = *(long **)(puVar2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)puVar10 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_160,puVar2);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar1);
        puVar2 = puVar1;
        func_0x00010bdc3520(puVar1);
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_148,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)puVar3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_130,puVar2);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
      puVar4 = &UNK_110cccaf8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110cccaf8,&uStack_180,puVar8);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x000107c278ac(&puStack_168);
      lVar9 = 0;
      puVar6 = (undefined *)puVar5;
      puVar7 = puVar8;
      do {
        if ((&cStack_119)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        puVar10 = &uStack_180;
      } while (lVar9 != -0x48);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    do {
      puVar10 = (undefined8 *)((long)puVar10 + -0x18);
    } while (puVar10 != (undefined8 *)auStack_160);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar6);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b28056c(puVar3,puVar4,puVar6,puVar7,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10b28056c; end: 10b2807ab;  */

/* WARNING: Removing unreachable block (ram,0x00010b28077c) */

void FUN_10b28056c(double param_1,long param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  puVar2 = (undefined *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110cccaf8;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccaf8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110cccaf8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110cccaf8,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      uVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        param_3 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_3 = (undefined8 *)((long)param_3 + -0x18);
    } while (param_3 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b28056c(puVar3,puVar2,puVar4,uVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10b2807ac; end: 10b28082f;  */

void FUN_10b2807ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b28056c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b280830; end: 10b280a6f;  */

/* WARNING: Removing unreachable block (ram,0x00010b280a40) */

void FUN_10b280830(double param_1,long param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
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
  puVar2 = (undefined *)param_3;
  puVar4 = param_4;
  uVar6 = param_5;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110cccb98;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccb98);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_3 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_88,puVar2);
      puVar2 = &UNK_10f73f4d1;
      if ((int)param_5 == 0) {
        puVar2 = &UNK_10f73f4d6;
      }
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = &UNK_110cccb98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110cccb98,&uStack_c0,param_6);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar7 = 0;
      puVar4 = (undefined *)puVar5;
      uVar6 = param_6;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        param_3 = &uStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_3 = (undefined8 *)((long)param_3 + -0x18);
    } while (param_3 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    _objc_retain(puVar4);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b280830(puVar3,puVar2,puVar4,uVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10b280a70; end: 10b280af3;  */

void FUN_10b280a70(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b280830(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b280af4; end: 10b280dd7;  */

/* WARNING: Removing unreachable block (ram,0x00010b280d98) */
/* WARNING: Removing unreachable block (ram,0x00010b281078) */

void FUN_10b280af4(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
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
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar6 = param_4;
  puVar9 = param_5;
  puVar4 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110ccccd8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
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
        puVar2 = &UNK_10f73f459;
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
        puVar2 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520();
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar9 = (undefined *)((long)param_6 * 10);
      puVar2 = &UNK_110ccccd8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar11 = 0;
      puVar6 = (undefined *)puVar7;
      do {
        if ((&cStack_59)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar11 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar8 = puVar6;
  puVar10 = puVar9;
  _objc_retain(puVar2);
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  if (puVar3 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar3 + 8);
    puVar5 = &UNK_110cccd28;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccd28);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar3 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = &UNK_10f73f459;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_160,puVar3);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar3 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar3 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_148,puVar3);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar3 = &UNK_10f73f459;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar3 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_130,puVar3);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
      puVar5 = &UNK_110cccd28;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110cccd28,&uStack_180,puVar4);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x000107c278ac(&puStack_168);
      lVar11 = 0;
      puVar8 = (undefined *)puVar7;
      puVar10 = puVar4;
      do {
        if ((&cStack_119)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = &uStack_180;
      } while (lVar11 != -0x48);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar6);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_160);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar2);
    __Unwind_Resume();
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(puVar10);
    if (puVar4 != (undefined *)0x0) {
      FUN_10b280dd8(puVar4,puVar5,puVar8,puVar10,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar10);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10b280dd8; end: 10b2810b7;  */

/* WARNING: Removing unreachable block (ram,0x00010b281078) */

void FUN_10b280dd8(double param_1,long param_2,undefined *param_3,undefined *param_4,
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
    puVar2 = &UNK_110cccd28;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110cccd28);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f73f459;
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
        puVar2 = &UNK_10f73f459;
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
        puVar2 = &UNK_10f73f459;
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
      puVar2 = &UNK_110cccd28;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110cccd28,&uStack_c0,param_6);
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
      FUN_10b280dd8(puVar3,puVar2,puVar4,puVar6,(long)(param_1 * 1000.0));
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



/* Entry: 10b2810b8; end: 10b28116b;  */

void FUN_10b2810b8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10b280dd8(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b28116c; end: 10b2811e3;  */

void FUN_10b28116c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110cccd78,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b2811e4; end: 10b281357;  */

undefined * FUN_10b2811e4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
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
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f73f459;
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
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cccdc8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
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
  __Unwind_Resume(puVar1);
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return param_2;
}



/* Entry: 10b281358; end: 10b281377;  */

void FUN_10b281358(void)

{
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return;
}



/* Entry: 10b281378; end: 10b2814ff;  */

int * FUN_10b281378(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_100 [16];
  int aiStack_f0 [2];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [16];
  code *pcStack_a8;
  undefined1 auStack_a0 [88];
  undefined8 uStack_48;
  
  func_0x000107c35264();
  uVar5 = param_2 == param_1[0xd];
  piVar6 = param_1;
  uStack_48 = extraout_x8;
  if (!(bool)uVar5) {
    param_1[0xd] = param_2;
    piVar1 = param_1 + 0x10;
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = param_2 - 1U < 2;
    uVar5 = bVar4 && param_1[0xc] == 1;
    if (bVar4 && param_1[0xc] == 1) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar9 = (*(long *)(param_1 + 8) / 2) * 1000000;
      uVar5 = (long)piVar6 - *(long *)(param_1 + 10) == lVar9;
      if (lVar9 <= (long)piVar6 - *(long *)(param_1 + 10)) {
        UNRECOVERED_JUMPTABLE = *(code **)param_3;
        func_0x00010b281844(uStack_48);
        if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010b2814c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_3);
          return param_3;
        }
        goto LAB_10b2814c8;
      }
      uVar8 = *(undefined8 *)(param_1 + 4);
      uStack_e8 = *(undefined8 *)param_3;
      aiStack_f0[0] = iVar2 + 1;
      (**(code **)(*(long *)(param_3 + 2) + 0x10))(auStack_e0,param_3 + 2);
      func_0x00010b281684(auStack_b8,param_1);
      lVar7 = *(long *)(param_1 + 10);
      pcStack_a8 = FUN_10b28173c;
      FUN_10b28176c(auStack_a0,aiStack_f0);
      func_0x00010bcce9b8(auStack_100,uVar8,&pcStack_a8,lVar7 + lVar9);
      func_0x00010b281858();
      func_0x00010b281908();
      piVar6 = aiStack_f0;
      FUN_10b281500();
    }
  }
  func_0x00010b281844(uStack_48);
  if ((bool)uVar5) {
    return piVar6;
  }
LAB_10b2814c8:
  ___stack_chk_fail();
  func_0x00010b281858();
  FUN_10b281500(aiStack_f0);
  func_0x00010b281900();
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return piVar6;
}



/* Entry: 10b281500; end: 10b28151f;  */

void FUN_10b281500(void)

{
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return;
}



/* Entry: 10b281520; end: 10b281663;  */

int * FUN_10b281520(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  int aiStack_e0 [2];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [16];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x000107c35264();
  uVar3 = *(byte *)(param_1 + 0xe) == param_2;
  if (!(bool)uVar3) {
    *(char *)(param_1 + 0xe) = (char)param_2;
    piVar5 = param_1 + 0x11;
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar4 = param_1[0xc] == 1;
    uVar3 = 0;
    if (bVar4) {
      if (param_2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)param_3;
        param_4 = param_3;
        func_0x000107c3524c();
        if (bVar4) {
LAB_10b281634:
                    /* WARNING: Could not recover jumptable at 0x000100493038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_4);
          return param_4;
        }
        goto LAB_10b28163c;
      }
      uVar3 = *(long *)(param_1 + 8) == 0;
      if (*(long *)(param_1 + 8) < 1) {
        UNRECOVERED_JUMPTABLE = *(code **)param_4;
        func_0x000107c3524c();
        if ((bool)uVar3) goto LAB_10b281634;
        goto LAB_10b28163c;
      }
      piVar5 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(int **)(param_1 + 10) = piVar5;
      uStack_d8 = *(undefined8 *)param_4;
      aiStack_e0[0] = iVar1 + 1;
      (**(code **)(*(long *)(param_4 + 2) + 0x10))(auStack_d0,param_4 + 2);
      func_0x00010b281684(auStack_a8,param_1);
      pcStack_98 = FUN_10b2817bc;
      FUN_10b2817f4(auStack_90,aiStack_e0);
      func_0x00010b2818d8();
      func_0x00010b281858();
      func_0x00010b281908();
      param_1 = aiStack_e0;
      FUN_10b281664();
    }
  }
  func_0x000107c3524c();
  if ((bool)uVar3) {
    return param_1;
  }
LAB_10b28163c:
  ___stack_chk_fail();
  func_0x00010b281858();
  FUN_10b281664(aiStack_e0);
  func_0x00010b281900();
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return param_1;
}



/* Entry: 10b281664; end: 10b2816bf;  */

void FUN_10b281664(void)

{
  func_0x00010b2818a4();
  func_0x00010b28188c();
  return;
}



/* Entry: 10b2816c0; end: 10b2816eb;  */

void FUN_10b2816c0(long param_1)

{
  if ((*(int *)(param_1 + 0x10) == *(int *)(*(long *)(param_1 + 0x48) + 0x3c)) &&
     ((*(byte *)(*(long *)(param_1 + 0x48) + 0x38) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b2818fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b2816ec; end: 10b281717;  */

void FUN_10b2816ec(void)

{
  func_0x00010b281868(&PTR_FUN_110ccd1d8);
  func_0x00010b2818b0();
  return;
}



/* Entry: 10b281718; end: 10b28171f;  */

void FUN_10b281718(long param_1)

{
  func_0x00010b2818a4(param_1 + 8);
  func_0x00010b28188c();
  return;
}



/* Entry: 10b281720; end: 10b28173b;  */

void FUN_10b281720(undefined8 param_1,long param_2)

{
  FUN_10b2816ec(param_1,param_2 + 8);
  return;
}



/* Entry: 10b28173c; end: 10b28176b;  */

void FUN_10b28173c(long param_1)

{
  if ((*(int *)(param_1 + 0x10) == *(int *)(*(long *)(param_1 + 0x48) + 0x40)) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x30) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010b2818fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b28176c; end: 10b281797;  */

void FUN_10b28176c(void)

{
  func_0x00010b281868(&PTR_FUN_110ccd1f0);
  func_0x00010b2818b0();
  return;
}



/* Entry: 10b281798; end: 10b28179f;  */

void FUN_10b281798(long param_1)

{
  func_0x00010b2818a4(param_1 + 8);
  func_0x00010b28188c();
  return;
}



/* Entry: 10b2817a0; end: 10b2817bb;  */

void FUN_10b2817a0(undefined8 param_1,long param_2)

{
  FUN_10b28176c(param_1,param_2 + 8);
  return;
}



/* Entry: 10b2817bc; end: 10b2817f3;  */

void FUN_10b2817bc(long param_1)

{
  if (((*(int *)(param_1 + 0x10) == *(int *)(*(long *)(param_1 + 0x48) + 0x44)) &&
      ((*(byte *)(*(long *)(param_1 + 0x48) + 0x38) & 1) == 0)) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x30) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010b2818fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b2817f4; end: 10b28181f;  */

void FUN_10b2817f4(void)

{
  func_0x00010b281868(&PTR_FUN_110ccd208);
  func_0x00010b2818b0();
  return;
}



/* Entry: 10b281820; end: 10b281827;  */

void FUN_10b281820(long param_1)

{
  func_0x00010b2818a4(param_1 + 8);
  func_0x00010b28188c();
  return;
}



/* Entry: 10b281828; end: 10b281843;  */

void FUN_10b281828(undefined8 param_1,long param_2)

{
  FUN_10b2817f4(param_1,param_2 + 8);
  return;
}



/* Entry: 10b281844; end: 10b28190f;  */

void FUN_10b281844(void)

{
  return;
}



/* Entry: 10b281910; end: 10b28199b;  */

long FUN_10b281910(long param_1)

{
  undefined1 auStack_78 [72];
  undefined1 auStack_30 [16];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78);
  func_0x000107c35270();
  func_0x000107c35278();
  func_0x000107c2c48c(auStack_30,auStack_78);
  func_0x000107c2bf8c(param_1 + 0x18,auStack_30);
  func_0x000107c27c0c(auStack_30);
  func_0x000107c2bf9c(auStack_78);
  return param_1;
}



/* Entry: 10b28199c; end: 10b2819c7;  */

long FUN_10b28199c(long param_1,int param_2)

{
  if (0x400000 < param_2) {
    func_0x000107c2c490(param_1 + 0x40);
  }
  return param_1;
}



/* Entry: 10b2819c8; end: 10b2819db;  */

void FUN_10b2819c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x20 + 0x18);
  return;
}



/* Entry: 10b2819dc; end: 10b281a57;  */

void FUN_10b2819dc(undefined8 param_1)

{
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (lRam0000000113839900 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113839900,&ppuStack_30,FUN_10b281a58);
  }
  (**(code **)*puRam000000011383a248)(puRam000000011383a248,param_1);
  return;
}



/* Entry: 10b281a58; end: 10b281a8f;  */

void FUN_10b281a58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ccdcf0;
  puRam000000011383a248 = puVar1;
  return;
}



/* Entry: 10b281a90; end: 10b281adf;  */

undefined8 * FUN_10b281a90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd230;
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000104ae3ee8();
  __ZNSt3__16thread4joinEv(param_1 + 0xf);
  __ZNSt3__16threadD1Ev(param_1 + 0xf);
  *param_1 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,param_1[2]);
  func_0x000104c4f4f4(param_1 + 0xc);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 4);
  *param_1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 10b281ae0; end: 10b281ae3;  */

undefined8 * FUN_10b281ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd230;
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000104ae3ee8();
  __ZNSt3__16thread4joinEv(param_1 + 0xf);
  __ZNSt3__16threadD1Ev(param_1 + 0xf);
  *param_1 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,param_1[2]);
  func_0x000104c4f4f4(param_1 + 0xc);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 4);
  *param_1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 10b281ae4; end: 10b281af7;  */

void FUN_10b281ae4(void)

{
  FUN_10b281a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b281af8; end: 10b281b63;  */

undefined * FUN_10b281af8(uint param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_DAT_110ccd270)[param_1];
  }
  return &UNK_10f73f6d6;
}



/* Entry: 10b281b64; end: 10b281cdf;  */

void FUN_10b281b64(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_3;
    puVar2 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = puVar2;
    func_0x000107c35288();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    if ((bRam00000001138399b8 & 1) == 0) {
      iVar1 = 0x138399b8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10b282644((undefined1 *)((long)register0x00000008 + -0x78),&PTR_DAT_110ccd2f8,
                      &UNK_10f73f71b);
        param_3 = (undefined1 *)((long)register0x00000008 + -0x78);
        func_0x000107c280c8(0x1138399a0,param_3,1);
        func_0x000107c27bbc((undefined1 *)((long)register0x00000008 + -0x78));
        ___cxa_guard_release(0x1138399b8);
      }
    }
    unaff_x22 = puRam000000011383a240;
    unaff_x23 = 0x11383a240;
    unaff_x21 = param_1;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      in_ZR = (int)param_1 == 0;
      uVar4 = 0x1a;
      if ((bool)in_ZR) {
        uVar4 = 4;
      }
      unaff_x21 = (undefined1 *)(ulong)uVar4;
      func_0x000107c280e8((undefined1 *)((long)register0x00000008 + -0x78),0x1138399a0);
      param_3 = unaff_x21;
      (**(code **)*unaff_x22)
                (unaff_x22,unaff_x21,puVar2,(long)(int)puVar3,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      func_0x000107c280f4((undefined1 *)((long)register0x00000008 + -0x78));
    }
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      *(undefined1 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
      param_3 = (undefined1 *)0x1b;
      (**(code **)*puRam000000011383a240)
                (puRam000000011383a240,0x1b,puVar2,1,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      func_0x000107c280f4((undefined1 *)((long)register0x00000008 + -0x78));
    }
    func_0x000107c35284(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107c352a8();
    func_0x000107c27bbc();
    param_2 = (undefined1 *)0x1138399b8;
    ___cxa_guard_abort();
    unaff_x30 = FUN_10b281ce0;
    func_0x00010b282b6c();
    param_1 = (undefined1 *)0x1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = puVar2;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 10b281ce0; end: 10b281cff;  */

/* WARNING: Removing unreachable block (ram,0x00010b281bbc) */

void FUN_10b281ce0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_2;
    puVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = (undefined1 *)0x1;
    param_2 = puVar2;
    func_0x000107c35288();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    if ((bRam00000001138399b8 & 1) == 0) {
      iVar1 = 0x138399b8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10b282644((undefined1 *)((long)register0x00000008 + -0x78),&PTR_DAT_110ccd2f8,
                      &UNK_10f73f71b);
        param_2 = (undefined1 *)((long)register0x00000008 + -0x78);
        func_0x000107c280c8(0x1138399a0,param_2,1);
        func_0x000107c27bbc((undefined1 *)((long)register0x00000008 + -0x78));
        ___cxa_guard_release(0x1138399b8);
      }
    }
    unaff_x22 = puRam000000011383a240;
    unaff_x23 = 0x11383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      in_ZR = 0;
      unaff_x21 = (undefined1 *)0x1a;
      func_0x000107c280e8((undefined1 *)((long)register0x00000008 + -0x78),0x1138399a0);
      param_2 = unaff_x21;
      (**(code **)*unaff_x22)
                (unaff_x22,0x1a,puVar2,(long)(int)puVar3,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      func_0x000107c280f4((undefined1 *)((long)register0x00000008 + -0x78));
    }
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      *(undefined1 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
      param_2 = (undefined1 *)0x1b;
      (**(code **)*puRam000000011383a240)
                (puRam000000011383a240,0x1b,puVar2,1,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      func_0x000107c280f4((undefined1 *)((long)register0x00000008 + -0x78));
    }
    func_0x000107c35284(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107c352a8();
    func_0x000107c27bbc();
    param_1 = (undefined1 *)0x1138399b8;
    ___cxa_guard_abort();
    unaff_x30 = FUN_10b281ce0;
    func_0x00010b282b6c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = puVar2;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 10b281d00; end: 10b281f5b;  */

void FUN_10b281d00(long *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  ushort extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  ushort extraout_w10;
  int extraout_w10_00;
  long extraout_x11;
  long unaff_x23;
  long unaff_x24;
  long lVar3;
  long lStack_510;
  undefined1 uStack_508;
  undefined4 uStack_504;
  long *plStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  ushort uStack_4e8;
  long lStack_4e0;
  ushort uStack_4d8;
  long lStack_4d0;
  long *plStack_4c8;
  long lStack_4c0;
  undefined4 uStack_4b8;
  long lStack_4b0;
  undefined1 auStack_4a8 [368];
  long lStack_338;
  long lStack_330;
  undefined1 auStack_328 [24];
  undefined1 uStack_310;
  long alStack_308 [4];
  long alStack_2e8 [3];
  long alStack_2d0 [3];
  long alStack_2b8 [17];
  undefined1 auStack_230 [368];
  long lStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x000107c35288();
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_48 = extraout_x8;
  func_0x000107c352b4();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(auStack_4a8);
    func_0x000107c2bfbc(&lStack_c0,auStack_4a8);
    func_0x000107c2c000(auStack_4a8);
  }
  if (lStack_c0 != 0) {
    FUN_10b282684(alStack_2b8,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_2d0,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_2e8,param_4 + 0x30);
    param_1 = alStack_308;
    func_0x000107c279a0(alStack_308,param_4 + 0xd0);
    func_0x00010b282b74();
    auStack_328[0] = 0;
    uStack_310 = 0;
    uStack_4e8 = extraout_w8 | 0x100;
    uStack_4d8 = extraout_w10 | 0x100;
    lStack_4b0 = 0;
    uStack_4b8 = 0;
    plStack_4c8 = (long *)auStack_328;
    lStack_4c0 = -1;
    plStack_4f8 = alStack_2e8;
    plStack_500 = alStack_2d0;
    uStack_508 = 0;
    lStack_510 = 0;
    func_0x00010b282c3c(auStack_230,alStack_2b8);
    param_8 = 0;
    FUN_10b281f5c();
    func_0x00010b282c24();
    func_0x000107c279a4(alStack_308);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_2d0);
    plVar1 = alStack_2b8;
    func_0x000107c28110();
    func_0x000107c2c074();
    FUN_10b282890(auStack_4a8,auStack_230);
    lStack_330 = lStack_b8;
    lStack_338 = lStack_c0;
    if (lStack_b8 != 0) {
      do {
        func_0x00010b282bc0();
      } while (extraout_w10_00 != 0);
    }
    pcStack_a8 = FUN_10b282a44;
    ppuStack_a0 = &PTR_FUN_110ccd310;
    lVar2 = 0x180;
    __Znwm();
    FUN_10b282890();
    *(long *)(lVar2 + 0x178) = lStack_330;
    *(long *)(lVar2 + 0x170) = lStack_338;
    lStack_338 = 0;
    lStack_330 = 0;
    lStack_98 = lVar2;
    func_0x00010b282c5c(*(undefined8 *)(*plVar1 + 0x10));
    func_0x00010b282c04();
    FUN_10b281f78(auStack_4a8);
    func_0x00010b282990(auStack_230);
    uStack_504 = param_2;
    plStack_4f0 = param_1;
    lStack_4e0 = extraout_x9;
    lStack_4d0 = extraout_x11;
  }
  func_0x000107c2c000();
  func_0x000107c35284(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b282c04();
    FUN_10b281f78(auStack_4a8);
    func_0x00010b282990(auStack_230);
    plVar1 = &lStack_c0;
    func_0x000107c2c000();
    func_0x00010b282b6c();
    func_0x000107c352b0();
    func_0x000107c2bfec();
    plVar1[0x11] = unaff_x24;
    plVar1[0x12] = unaff_x23;
    plVar1[0x13] = (long)param_1;
    plVar1[0x14] = param_6;
    plVar1[0x15] = param_7;
    plVar1[0x16] = param_8;
    plVar1[0x17] = lStack_510;
    *(undefined1 *)(plVar1 + 0x18) = uStack_508;
    *(undefined4 *)((long)plVar1 + 0xc4) = uStack_504;
    lVar3 = plStack_500[1];
    lVar2 = *plStack_500;
    plVar1[0x1b] = plStack_500[2];
    plVar1[0x1a] = lVar3;
    plVar1[0x19] = lVar2;
    plStack_500[1] = 0;
    plStack_500[2] = 0;
    *plStack_500 = 0;
    lVar3 = plStack_4f8[1];
    lVar2 = *plStack_4f8;
    plVar1[0x1e] = plStack_4f8[2];
    plVar1[0x1d] = lVar3;
    plVar1[0x1c] = lVar2;
    plStack_4f8[1] = 0;
    plStack_4f8[2] = 0;
    *plStack_4f8 = 0;
    *(undefined1 *)(plVar1 + 0x1f) = 0;
    *(undefined1 *)(plVar1 + 0x22) = 0;
    if ((char)plStack_4f0[3] == '\x01') {
      func_0x000107c352ac(*plStack_4f0);
      plStack_4f0[1] = 0;
      plStack_4f0[2] = 0;
      *plStack_4f0 = 0;
      *(undefined1 *)(plVar1 + 0x22) = 1;
    }
    *(ushort *)(plVar1 + 0x23) = uStack_4e8;
    plVar1[0x24] = lStack_4e0;
    *(ushort *)(plVar1 + 0x25) = uStack_4d8;
    plVar1[0x26] = lStack_4d0;
    *(undefined1 *)(plVar1 + 0x27) = 0;
    *(undefined1 *)(plVar1 + 0x2a) = 0;
    if ((char)plStack_4c8[3] == '\x01') {
      lVar3 = plStack_4c8[1];
      lVar2 = *plStack_4c8;
      plVar1[0x29] = plStack_4c8[2];
      plVar1[0x28] = lVar3;
      plVar1[0x27] = lVar2;
      plStack_4c8[1] = 0;
      plStack_4c8[2] = 0;
      *plStack_4c8 = 0;
      *(undefined1 *)(plVar1 + 0x2a) = 1;
    }
    plVar1[0x2b] = lStack_4c0;
    *(undefined4 *)(plVar1 + 0x2c) = uStack_4b8;
    plVar1[0x2d] = lStack_4b0;
    return;
  }
  return;
}



/* Entry: 10b281f5c; end: 10b281f77;  */

void FUN_10b281f5c(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  func_0x000107c352b0();
  func_0x000107c2bfec();
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined8 *)(param_1 + 0xb0) = in_x7;
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000000;
  *(undefined1 *)(param_1 + 0xc0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xc4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0xd8) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    func_0x000107c352ac(*in_stack_00000020);
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  *(undefined2 *)(param_1 + 0x118) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x128) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000040;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(in_stack_00000048 + 3) == '\x01') {
    uVar2 = in_stack_00000048[1];
    uVar1 = *in_stack_00000048;
    *(undefined8 *)(param_1 + 0x148) = in_stack_00000048[2];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    in_stack_00000048[1] = 0;
    in_stack_00000048[2] = 0;
    *in_stack_00000048 = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  *(undefined8 *)(param_1 + 0x158) = in_stack_00000050;
  *(undefined4 *)(param_1 + 0x160) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000060;
  return;
}



/* Entry: 10b281f78; end: 10b281f9f;  */

/* WARNING: Possible PIC construction at 0x000100bf5684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5688) */

void FUN_10b281f78(long param_1)

{
  func_0x000107c2c000(param_1 + 0x170);
  func_0x000107c279a4(param_1 + 0x138);
  func_0x000107c279a4(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x68);
  return;
}



/* Entry: 10b281fa0; end: 10b282207;  */

void FUN_10b281fa0(long *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 *param_8)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  ushort extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  ushort extraout_w10;
  int extraout_w10_00;
  long extraout_x11;
  long unaff_x23;
  long unaff_x24;
  long lVar3;
  long *plStack_530;
  undefined1 uStack_528;
  undefined4 uStack_524;
  long *plStack_520;
  long *plStack_518;
  long *plStack_510;
  ushort uStack_508;
  long lStack_500;
  ushort uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined4 uStack_4e0;
  undefined1 auStack_4d0 [376];
  long lStack_358;
  long lStack_350;
  long alStack_348 [4];
  long alStack_328 [3];
  long alStack_310 [3];
  long alStack_2f8 [3];
  undefined1 uStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined1 uStack_2c0;
  long alStack_2b8 [17];
  undefined1 auStack_230 [376];
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x000107c35288();
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_48 = extraout_x8;
  func_0x000107c352b4();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(auStack_4d0);
    func_0x000107c2bfbc(&lStack_b8,auStack_4d0);
    func_0x000107c2c000(auStack_4d0);
  }
  if (lStack_b8 != 0) {
    FUN_10b282684(alStack_2b8,param_1);
    auStack_2d8[0]._0_1_ = 0;
    uStack_2c0 = 0;
    alStack_2f8[0]._0_1_ = 0;
    uStack_2e0 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_310,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_328,param_4 + 0x30);
    param_1 = alStack_348;
    func_0x000107c279a0(alStack_348,param_4 + 0xd0);
    func_0x00010b282b74();
    uStack_508 = extraout_w8 | 0x100;
    uStack_4f8 = extraout_w10 | 0x100;
    uStack_4e0 = 0;
    lStack_4e8 = -1;
    plStack_518 = alStack_328;
    plStack_520 = alStack_310;
    plStack_530 = alStack_2f8;
    param_8 = auStack_2d8;
    uStack_528 = 0;
    func_0x00010b282c3c(auStack_230,alStack_2b8);
    FUN_10b282208();
    func_0x00010b282c24();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_328);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_310);
    func_0x000107c279a4(alStack_2f8);
    func_0x000107c279a4(auStack_2d8);
    plVar1 = alStack_2b8;
    func_0x000107c28110();
    func_0x000107c2c074();
    func_0x000107c2bff4(auStack_4d0,auStack_230);
    lStack_358 = lStack_b8;
    lStack_350 = lStack_b0;
    if (lStack_b0 != 0) {
      do {
        func_0x00010b282bc0();
      } while (extraout_w10_00 != 0);
    }
    uStack_a8 = 0x10b282a7c;
    ppuStack_a0 = &PTR_FUN_110ccd328;
    lVar2 = 0x188;
    __Znwm();
    func_0x000107c2bff4();
    *(long *)(lVar2 + 0x180) = lStack_350;
    *(long *)(lVar2 + 0x178) = lStack_358;
    lStack_358 = 0;
    lStack_350 = 0;
    lStack_98 = lVar2;
    func_0x00010b282c5c(*(undefined8 *)(*plVar1 + 0x10));
    func_0x00010b282c14();
    FUN_10b282224(auStack_4d0);
    func_0x000107c2bff8(auStack_230);
    uStack_524 = param_2;
    plStack_510 = param_1;
    lStack_500 = extraout_x9;
    lStack_4f0 = extraout_x11;
  }
  func_0x000107c2c000();
  func_0x000107c35284(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b282c14();
    FUN_10b282224(auStack_4d0);
    func_0x000107c2bff8(auStack_230);
    plVar1 = &lStack_b8;
    func_0x000107c2c000();
    func_0x00010b282b6c();
    func_0x00010055fb84();
    func_0x000100bf55d8();
    *(undefined1 *)(plVar1 + 0x16) = 0;
    plVar1[0x11] = unaff_x24;
    plVar1[0x12] = unaff_x23;
    plVar1[0x13] = (long)param_1;
    plVar1[0x14] = param_6;
    plVar1[0x15] = param_7;
    *(undefined1 *)(plVar1 + 0x19) = 0;
    if (*(char *)(param_8 + 3) == '\x01') {
      func_0x000100bf565c(*param_8);
      param_8[1] = 0;
      param_8[2] = 0;
      *param_8 = 0;
      *(undefined1 *)(plVar1 + 0x19) = 1;
    }
    *(undefined1 *)(plVar1 + 0x1a) = 0;
    *(undefined1 *)(plVar1 + 0x1d) = 0;
    if ((char)plStack_530[3] == '\x01') {
      lVar3 = plStack_530[1];
      lVar2 = *plStack_530;
      plVar1[0x1c] = plStack_530[2];
      plVar1[0x1b] = lVar3;
      plVar1[0x1a] = lVar2;
      plStack_530[1] = 0;
      plStack_530[2] = 0;
      *plStack_530 = 0;
      *(undefined1 *)(plVar1 + 0x1d) = 1;
    }
    *(undefined1 *)(plVar1 + 0x1e) = uStack_528;
    *(undefined4 *)((long)plVar1 + 0xf4) = uStack_524;
    lVar3 = plStack_520[1];
    lVar2 = *plStack_520;
    plVar1[0x21] = plStack_520[2];
    plVar1[0x20] = lVar3;
    plVar1[0x1f] = lVar2;
    plStack_520[1] = 0;
    plStack_520[2] = 0;
    *plStack_520 = 0;
    lVar3 = plStack_518[1];
    lVar2 = *plStack_518;
    plVar1[0x24] = plStack_518[2];
    plVar1[0x23] = lVar3;
    plVar1[0x22] = lVar2;
    plStack_518[1] = 0;
    plStack_518[2] = 0;
    *plStack_518 = 0;
    *(undefined1 *)(plVar1 + 0x25) = 0;
    *(undefined1 *)(plVar1 + 0x28) = 0;
    if ((char)plStack_510[3] == '\x01') {
      lVar3 = plStack_510[1];
      lVar2 = *plStack_510;
      plVar1[0x27] = plStack_510[2];
      plVar1[0x26] = lVar3;
      plVar1[0x25] = lVar2;
      plStack_510[1] = 0;
      plStack_510[2] = 0;
      *plStack_510 = 0;
      *(undefined1 *)(plVar1 + 0x28) = 1;
    }
    *(ushort *)(plVar1 + 0x29) = uStack_508;
    plVar1[0x2a] = lStack_500;
    *(ushort *)(plVar1 + 0x2b) = uStack_4f8;
    plVar1[0x2c] = lStack_4f0;
    plVar1[0x2d] = lStack_4e8;
    *(undefined4 *)(plVar1 + 0x2e) = uStack_4e0;
    return;
  }
  return;
}



/* Entry: 10b282208; end: 10b282223;  */

void FUN_10b282208(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 *in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  func_0x00010055fb84();
  func_0x000100bf55d8();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(in_x7 + 3) == '\x01') {
    func_0x000100bf565c(*in_x7);
    in_x7[1] = 0;
    in_x7[2] = 0;
    *in_x7 = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    *(undefined8 *)(param_1 + 0xe0) = in_stack_00000000[2];
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xf4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    uVar2 = in_stack_00000020[1];
    uVar1 = *in_stack_00000020;
    *(undefined8 *)(param_1 + 0x138) = in_stack_00000020[2];
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined2 *)(param_1 + 0x148) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x150) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x158) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x160) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000048;
  *(undefined4 *)(param_1 + 0x170) = in_stack_00000050;
  return;
}



/* Entry: 10b282224; end: 10b28224b;  */

/* WARNING: Possible PIC construction at 0x000100bf5864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf5684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5868) */
/* WARNING: Removing unreachable block (ram,0x000100bf5670) */
/* WARNING: Removing unreachable block (ram,0x000100bf5688) */

void FUN_10b282224(long param_1)

{
  func_0x000107c2c000(param_1 + 0x178);
  func_0x0001001148fc(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x110);
  return;
}



/* Entry: 10b28224c; end: 10b2822cf;  */

void FUN_10b28224c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_130 [104];
  undefined4 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_60;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _bzero(auStack_130,0xf0);
  uStack_c8 = 0x3f800000;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_60 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b281d00(param_1,param_2,param_3,auStack_130);
  func_0x000107c27c44(auStack_130);
  return;
}



/* Entry: 10b2822d0; end: 10b2822d3;  */

void FUN_10b2822d0(void)

{
  return;
}



/* Entry: 10b2822d4; end: 10b2823b7;  */

void FUN_10b2822d4(uint param_1)

{
  code *pcVar1;
  
  if (bRam00000001138399c0 == param_1) {
    return;
  }
  bRam00000001138399c0 = (byte)param_1;
  if (param_1 == 0) {
    func_0x00010b282c54(&UNK_10f73f721);
    func_0x00010b282c54(&UNK_10f73f726);
    func_0x00010b282c54(&UNK_10f73f73a);
    func_0x000104a6ea24(2);
    pcVar1 = FUN_10b2829d0;
  }
  else {
    func_0x00010b282c68(&UNK_10f73f721);
    func_0x00010b282c68(&UNK_10f73f726);
    func_0x000104a6ea24(0);
    func_0x00010b282c68(&UNK_10f73f73a);
    pcVar1 = FUN_10b2822d0;
  }
  PTR_DAT_1130a57b0 = &DAT_104a6ea50;
  if (pcVar1 != (code *)0x0) {
    PTR_DAT_1130a57b0 = pcVar1;
  }
  return;
}



/* Entry: 10b2823b8; end: 10b282437;  */

void FUN_10b2823b8(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [48];
  
  func_0x000107c2bfd8();
  if (param_2 >> 0x20 != 0) {
    __ZNSt3__19to_stringEi(auStack_68);
    func_0x000105394cb8(auStack_50,&PTR_DAT_110ccd308,auStack_68);
    func_0x000107c280dc(param_1,auStack_50);
    func_0x000107c27bbc(auStack_50);
    func_0x00010b282bf4();
  }
  return;
}



/* Entry: 10b282438; end: 10b2824eb;  */

double FUN_10b282438(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _bzero(0x1138399c8,0x800);
  for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
    *(double *)((ulong)*(byte *)(param_1 + uVar1) * 8 + 0x1138399c8) =
         *(double *)((ulong)*(byte *)(param_1 + uVar1) * 8 + 0x1138399c8) + 1.0;
  }
  dVar4 = 0.0;
  for (lVar2 = 0; lVar2 != 0x800; lVar2 = lVar2 + 8) {
    dVar6 = *(double *)(lVar2 + 0x1138399c8);
    if (dVar6 != 0.0) {
      dVar5 = dVar6 / (double)param_2;
      dVar3 = dVar5;
      _log2(dVar5);
      dVar4 = dVar4 + dVar6 * -(dVar5 * dVar3);
    }
  }
  return dVar4;
}



/* Entry: 10b2824ec; end: 10b282567;  */

undefined1 FUN_10b2824ec(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011383a1f0 & 1) == 0) {
    iVar2 = 0x1383a1f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0x80;
      func_0x000107c30180(&UNK_10f73f780,0x18,0);
      uRam000000011383a1e8 = uVar1;
      ___cxa_guard_release(0x11383a1f0);
    }
  }
  return uRam000000011383a1e8;
}



/* Entry: 10b282568; end: 10b2825df;  */

undefined * FUN_10b282568(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam000000011383a210 & 1) == 0) {
    iVar1 = 0x1383a210;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f73f7b6;
      func_0x000107c30184(&UNK_10f73f7b6,0x18,0);
      puRam000000011383a208 = puVar2;
      ___cxa_guard_release(0x11383a210);
    }
  }
  return puRam000000011383a208;
}



/* Entry: 10b2825e0; end: 10b282643;  */

void FUN_10b2825e0(int *param_1)

{
  int *piVar1;
  undefined1 auStack_38 [24];
  
  if ((*param_1 == 0x10) && (piVar1 = param_1, FUN_10b2824ec(), (int)piVar1 != 0)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_1 + 2)
    ;
    func_0x000107c2bfd8(auStack_38);
    func_0x00010b282be8();
  }
  return;
}



/* Entry: 10b282644; end: 10b282683;  */

long FUN_10b282644(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c278b8(param_1,*param_2);
  func_0x000107c278b8(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10b282684; end: 10b282717;  */

long FUN_10b282684(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x38,param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



/* Entry: 10b282718; end: 10b28288f;  */

void FUN_10b282718(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  func_0x000107c352b0();
  func_0x000107c2bfec();
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined8 *)(param_1 + 0xb0) = in_x7;
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000000;
  *(undefined1 *)(param_1 + 0xc0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xc4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0xd8) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    func_0x000107c352ac(*in_stack_00000020);
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  *(undefined2 *)(param_1 + 0x118) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x128) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000040;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(in_stack_00000048 + 3) == '\x01') {
    uVar2 = in_stack_00000048[1];
    uVar1 = *in_stack_00000048;
    *(undefined8 *)(param_1 + 0x148) = in_stack_00000048[2];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    in_stack_00000048[1] = 0;
    in_stack_00000048[2] = 0;
    *in_stack_00000048 = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  *(undefined8 *)(param_1 + 0x158) = in_stack_00000050;
  *(undefined4 *)(param_1 + 0x160) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000060;
  return;
}



/* Entry: 10b282890; end: 10b2829cf;  */

void FUN_10b282890(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c2bfec();
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(param_2 + 0x110) == '\x01') {
    func_0x000107c352ac(*(undefined8 *)(param_2 + 0xf8));
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined8 *)(param_2 + 0x130);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_2 + 0x150) == '\x01') {
    func_0x000107c352ac(param_1 + 0x138,*(undefined8 *)(param_2 + 0x138));
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  return;
}



/* Entry: 10b2829d0; end: 10b2829d3;  */

void FUN_10b2829d0(void)

{
  return;
}



/* Entry: 10b2829d4; end: 10b282a43;  */

void FUN_10b2829d4(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_68 [48];
  long lStack_38;
  
  for (param_3 = param_3 * 0x30; param_3 != 0; param_3 = param_3 + -0x30) {
    lStack_38 = param_1 + 0x10;
    func_0x000107c280d0(auStack_68,param_2);
    func_0x0001075527e4(param_4,auStack_68);
    func_0x000107c27bbc(auStack_68);
    param_4 = param_4 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



/* Entry: 10b282a44; end: 10b282a57;  */

void FUN_10b282a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b282a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x170) + 0x18))();
  return;
}



/* Entry: 10b282a58; end: 10b282a77;  */

void FUN_10b282a58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b281f78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b282a78; end: 10b282a8f;  */

void FUN_10b282a78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b282a90; end: 10b282aaf;  */

void FUN_10b282a90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b282224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b282ab0; end: 10b282ab3;  */

void FUN_10b282ab0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b282ab4; end: 10b282acf;  */

bool FUN_10b282ab4(long param_1)

{
  FUN_10b282ad0();
  return param_1 != 0;
}



/* Entry: 10b282ad0; end: 10b282c77;  */

long FUN_10b282ad0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b282c78; end: 10b282cc3;  */

void FUN_10b282c78(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*(long *)plVar1[0x22] + 0x20))();
  }
  FUN_10b282ccc(param_1);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b282cc4; end: 10b282ccb;  */

void FUN_10b282cc4(void)

{
  return;
}



/* Entry: 10b282ccc; end: 10b282d1f;  */

void FUN_10b282ccc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000104bffd28(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b282d20; end: 10b282d2b;  */

void FUN_10b282d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b282d2c; end: 10b282d3f;  */

void FUN_10b282d2c(void)

{
  func_0x00010b282d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b282d40; end: 10b282d83;  */

long FUN_10b282d40(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c60d68();
  }
  return param_1 + 0x18;
}



/* Entry: 10b282d84; end: 10b282e5b;  */

void FUN_10b282d84(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ccd760;
  if (param_5 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_110ccd7b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 4,param_2);
  lVar2 = param_3[1];
  uVar3 = *param_3;
  puVar1[8] = param_3[1];
  puVar1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10_00 != 0);
  }
  puVar1[9] = param_4;
  puVar1[10] = param_5;
  func_0x00010b28451c();
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10b282e5c; end: 10b282e5f;  */

long FUN_10b282e5c(long param_1)

{
  func_0x000107c3534c(&PTR_FUN_110ccd4c0);
  func_0x000107c2814c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x000107c27bb4();
  return param_1;
}



/* Entry: 10b282e60; end: 10b282e73;  */

void FUN_10b282e60(void)

{
  FUN_10b284358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b282e74; end: 10b283093;  */

void FUN_10b282e74(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 *param_6)

{
  int extraout_w10;
  long *plVar1;
  undefined1 auStack_240 [360];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_70 [16];
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_5 == 0) {
    FUN_10b284394(auStack_240);
  }
  else {
    func_0x000107c3532c();
  }
  func_0x000107c35360();
  func_0x000107c2c010(&uStack_50);
  uStack_58 = 0;
  func_0x000107c2bfd4(param_4,&uStack_58);
  if ((int)param_4 == 0) {
    plVar1 = (long *)*param_6;
    auStack_70[0] = 0;
    uStack_60 = 0;
    func_0x000107c278b8(&lStack_d8,&UNK_10f73f83d);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    lStack_98 = lStack_d8;
    lStack_c0 = CONCAT44(lStack_c0._4_4_,0xd);
    lStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,0xd);
    uStack_b0 = 0;
    uStack_a8 = 0;
    lStack_b8 = 0;
    uStack_80 = 1;
    func_0x00010b2845ec(*(undefined8 *)(*plVar1 + 0x10),plVar1);
    func_0x000107c2c018(&lStack_a0);
    func_0x00010b284538();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d8);
    func_0x000107c27f18(auStack_70);
  }
  else {
    func_0x00010b2845f4(&lStack_a0);
    lStack_c0 = lStack_a0;
    lStack_b8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28190();
    func_0x000107c28194(&lStack_c0);
    FUN_10b283e88(&lStack_a0);
  }
  func_0x000107c2c014(&lStack_a0,uStack_50,uStack_48);
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  lStack_a0 = 0;
  lStack_98 = 0;
  func_0x000107c2c028(&lStack_a0);
  func_0x000107c27c64(&uStack_58);
  func_0x000107c27c48(&uStack_50);
  func_0x000107c35340();
  func_0x000107c35344();
  return;
}



/* Entry: 10b283094; end: 10b283227;  */

void FUN_10b283094(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1d8 [176];
  undefined1 auStack_128 [184];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((long *)*param_4 == (long *)0x0) {
    FUN_10b284394(auStack_1d8);
  }
  else {
    (**(code **)(*(long *)*param_4 + 0x10))(auStack_1d8);
  }
  func_0x000107c2806c(auStack_128,auStack_1d8);
  func_0x00010b2845f4(&lStack_50);
  lStack_70 = lStack_50;
  lStack_68 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x0001073a9120(&uStack_60);
  func_0x000107c28194(&lStack_70);
  lVar3 = *(long *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ccd8a0;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_DAT_110ccd8f0;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c35348();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[7] = lStack_58;
  puVar1[6] = uStack_60;
  if (lStack_58 != 0) {
    do {
      func_0x000107c35348();
      puVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  func_0x0001073ac5c4(&uStack_60);
  FUN_10b283e88(&lStack_50);
  func_0x000107c27ba8(auStack_128);
  func_0x000107c27bac(auStack_1d8);
  return;
}



/* Entry: 10b283228; end: 10b28322b;  */

void FUN_10b283228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccd520;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28322c; end: 10b28323f;  */

void FUN_10b28322c(void)

{
  func_0x00010b283248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b283240; end: 10b283257;  */

void FUN_10b283240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b283258; end: 10b28326b;  */

void FUN_10b283258(void)

{
  FUN_10b28326c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28326c; end: 10b28327b;  */

void FUN_10b28326c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28327c; end: 10b2832a3;  */

void FUN_10b28327c(void)

{
  FUN_10b283534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2832a4; end: 10b2833af;  */

void FUN_10b2832a4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar1;
  undefined8 uStack_98;
  
  func_0x000107c35364();
  func_0x000107c352d8();
  func_0x00010b28450c();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c352d4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b284590();
  func_0x000107c28150();
  func_0x00010b284600();
  func_0x00010b284570();
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x00010b284568();
  func_0x00010b284474();
  func_0x00010b284560();
  func_0x00010b2844fc();
  func_0x00010b284490();
  func_0x00010b284414();
  func_0x00010b2844d8();
  if (lVar1 == 0) {
    func_0x00010b284460();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c352d4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c35310();
    func_0x000107c35314();
    func_0x000107c352f8();
  }
  FUN_10b283458();
  func_0x000107c352cc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b28444c();
    FUN_10b283458();
    func_0x00010b284458();
    func_0x00010b2845b0();
    func_0x00010b2844b4();
    func_0x00010b2844c8();
    func_0x00010b2845a4(uStack_98);
    func_0x00010b284430();
    func_0x00010b2845d4();
    func_0x00010b2844e0();
    func_0x00010b284488();
    func_0x00010b2844c0();
    func_0x00010b284588();
    return;
  }
  return;
}



/* Entry: 10b2833b0; end: 10b283433;  */

void FUN_10b2833b0(undefined8 param_1)

{
  undefined8 uStack_98;
  undefined1 auStack_48 [16];
  undefined1 uStack_38;
  
  func_0x00010b2845b0();
  auStack_48[0] = 0;
  uStack_38 = 0;
  func_0x00010b2844b4();
  func_0x00010b2844c8();
  func_0x00010b2845a4(uStack_98);
  func_0x00010b284430();
  func_0x00010b2845d4(param_1,auStack_48);
  func_0x00010b2844e0();
  func_0x00010b284488();
  func_0x00010b2844c0();
  func_0x00010b284588();
  return;
}



/* Entry: 10b283434; end: 10b283453;  */

void FUN_10b283434(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283454; end: 10b283457;  */

void FUN_10b283454(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283458; end: 10b283473;  */

long FUN_10b283458(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b2844a8();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283474; end: 10b2834f3;  */

void FUN_10b283474(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  func_0x00010b2845b0();
  auStack_38[0] = 0;
  uStack_28 = 0;
  func_0x00010b284548();
  func_0x00010b2844c8();
  func_0x00010b2845a4();
  func_0x00010b284430();
  func_0x00010b2845d4(param_1,auStack_38);
  func_0x00010b2844e0();
  func_0x00010b284488();
  func_0x00010b2844c0();
  func_0x00010b284540();
  return;
}



/* Entry: 10b2834f4; end: 10b283513;  */

void FUN_10b2834f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b283518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b283514; end: 10b283517;  */

void FUN_10b283514(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b283518; end: 10b283533;  */

long FUN_10b283518(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c35304();
  lVar1 = unaff_x19;
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b283534; end: 10b283543;  */

void FUN_10b283534(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd5c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b283544; end: 10b28356b;  */

void FUN_10b283544(void)

{
  FUN_10b2835d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28356c; end: 10b2835d7;  */

void FUN_10b28356c(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 != (byte *)0x0) {
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bVar1 & 1) == 0) {
      __ZNSt3__15mutex4lockEv(pbVar4 + 8);
      if (*(long *)(pbVar4 + 0x48) != 0) {
        func_0x000104ae33d8();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pbVar4 + 8);
      return;
    }
  }
  return;
}


