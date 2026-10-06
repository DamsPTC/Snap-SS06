/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064ea350; end: 1064ea4c3;  */

void FUN_1064ea350(long param_1,undefined *param_2,undefined8 param_3)

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
      puVar1 = &UNK_10f38117f;
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
    puVar1 = &UNK_1109286b0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109286b0,&uStack_80,param_3);
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
  pcStack_88 = FUN_1064ea4c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110928700,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1064ea4c4; end: 1064ea53b;  */

void FUN_1064ea4c4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110928700,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea53c; end: 1064ea5b3;  */

void FUN_1064ea53c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110928750,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea5b4; end: 1064ea62b;  */

void FUN_1064ea5b4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109287a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea62c; end: 1064ea79f;  */

void FUN_1064ea62c(long param_1,undefined *param_2,undefined8 param_3)

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
      puVar1 = &UNK_10f38117f;
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
    puVar1 = &UNK_1109287f0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109287f0,&uStack_80,param_3);
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
  pcStack_88 = FUN_1064ea7a0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110928840,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1064ea7a0; end: 1064ea817;  */

void FUN_1064ea7a0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110928840,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea818; end: 1064ea88f;  */

void FUN_1064ea818(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110928890,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea890; end: 1064ea907;  */

void FUN_1064ea890(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109288e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1064ea908; end: 1064eaa7b;  */

/* WARNING: Removing unreachable block (ram,0x0001064eafc4) */
/* WARNING: Removing unreachable block (ram,0x0001064ead04) */
/* WARNING: Removing unreachable block (ram,0x0001064eb284) */

void FUN_1064ea908(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  undefined8 *unaff_x24;
  undefined8 *puVar15;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_328;
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
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
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
    puVar1 = &UNK_110928930;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined *)puVar5;
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
  puVar6 = puVar1;
  puVar8 = puVar7;
  puVar9 = param_4;
  puVar11 = param_5;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_108,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
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
    puVar6 = &UNK_110928980;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar14 = 0;
    puVar8 = (undefined *)puVar5;
    puVar9 = param_5;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_120);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar7 = puVar8;
  puVar10 = puVar9;
  puVar12 = puVar11;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1e0,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar1 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1c8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1b0,puVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    puVar1 = &UNK_1109289d0;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar14 = 0;
    puVar7 = (undefined *)puVar5;
    puVar10 = puVar11;
    do {
      if ((&cStack_199)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_200;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_1e0);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  __Unwind_Resume();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2a0,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_288,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_270,puVar2);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110928a20,&uStack_2c0,puVar12);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar14 = 0;
    do {
      if ((&cStack_259)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_2c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_2a0);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cb230);
  if (puVar2 == (undefined *)0x0) {
    uStack_380 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3b0,puVar2);
  }
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3f4 = 0;
  puVar5 = &uStack_3b0;
  puVar3 = &uStack_3b0;
  func_0x00010054c81c(puVar3,&lStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_388);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar5);
    lStack_3e8 = 0;
    lStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    _objc_retain(puVar5);
    puVar4 = puVar5;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar14 = *plStack_3e0;
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (*plStack_3e0 != lVar14) {
            _objc_enumerationMutation(puVar5);
          }
          puVar1 = PTR_PTR_1126cb238;
          FUN_1064ebccc(PTR_PTR_1126cb238,*(undefined8 *)(lStack_3e8 + (long)puVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar4 != puVar15);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  puVar1 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    __Unwind_Resume(puVar1);
    _objc_retain();
    FUN_1064eb2bc(puVar1);
    FUN_1064ecd50(puVar1,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1064eaa7c; end: 1064ead3b;  */

/* WARNING: Removing unreachable block (ram,0x0001064eafc4) */
/* WARNING: Removing unreachable block (ram,0x0001064ead04) */
/* WARNING: Removing unreachable block (ram,0x0001064eb284) */

void FUN_1064eaa7c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 *puVar15;
  undefined4 uStack_374;
  long lStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2a8;
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
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar10 = param_4;
  puVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
    puVar1 = &UNK_110928980;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    puVar7 = (undefined *)puVar6;
    puVar10 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
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
  puVar6 = &uStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar9 = puVar7;
  puVar11 = puVar10;
  puVar12 = puVar3;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_148,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar8 = &UNK_1109289d0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar13 = 0;
    puVar9 = (undefined *)puVar6;
    puVar11 = puVar3;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar10);
  _objc_release(puVar7);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_160);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (puVar3 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar3 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_220,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar1 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_208,puVar1);
    _objc_retain(puVar11);
    if (puVar11 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar1 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110928a20,&uStack_240,puVar12);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_220);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    __Unwind_Resume();
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126cb230);
    if (puVar1 == (undefined *)0x0) {
      uStack_300 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_330,puVar1);
    }
    lStack_370 = 0;
    lStack_368 = 0;
    plStack_360 = (long *)0x0;
    uStack_374 = 0;
    puVar6 = &uStack_330;
    puVar4 = &uStack_330;
    func_0x00010054c81c(puVar4,&lStack_370,&uStack_374);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_370 != 0) {
      lStack_368 = lStack_370;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_308);
    _objc_release(uStack_318);
    _objc_release(uStack_320);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      _objc_retain(puVar6);
      lStack_368 = 0;
      lStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      _objc_retain(puVar6);
      puVar5 = puVar6;
      func_0x00010bf52a60();
      if (puVar5 != (undefined8 *)0x0) {
        lVar13 = *plStack_360;
        do {
          puVar15 = (undefined8 *)0x0;
          do {
            if (*plStack_360 != lVar13) {
              _objc_enumerationMutation(puVar6);
            }
            puVar7 = PTR_PTR_1126cb238;
            FUN_1064ebccc(PTR_PTR_1126cb238,*(undefined8 *)(lStack_368 + (long)puVar15 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar15 = (undefined8 *)((long)puVar15 + 1);
          } while (puVar5 != puVar15);
          puVar5 = puVar6;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    puVar7 = puVar1;
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar1);
      __Unwind_Resume(puVar7);
      _objc_retain();
      FUN_1064eb2bc(puVar7);
      FUN_1064ecd50(puVar7,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064ead3c; end: 1064eaffb;  */

/* WARNING: Removing unreachable block (ram,0x0001064eafc4) */
/* WARNING: Removing unreachable block (ram,0x0001064eb284) */

void FUN_1064ead3c(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x24;
  undefined8 *puVar11;
  undefined4 uStack_2b4;
  long lStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
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
  long lStack_1e8;
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
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  puVar8 = param_4;
  puVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
    puVar1 = &UNK_1109289d0;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar7 = (undefined *)puVar6;
    puVar8 = param_5;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar9 != -0x48);
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
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_148,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f38117f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110928a20,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar9 = 0;
    do {
      if ((&cStack_119)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar9 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_160);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
    __Unwind_Resume();
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126cb230);
    if (puVar3 == (undefined *)0x0) {
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_270,puVar3);
    }
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_2b4 = 0;
    puVar6 = &uStack_270;
    puVar4 = &uStack_270;
    func_0x00010054c81c(puVar4,&lStack_2b0,&uStack_2b4);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_2b0 != 0) {
      lStack_2a8 = lStack_2b0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_248);
    _objc_release(uStack_258);
    _objc_release(uStack_260);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar4;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      _objc_retain(puVar6);
      lStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      _objc_retain(puVar6);
      puVar5 = puVar6;
      func_0x00010bf52a60();
      if (puVar5 != (undefined8 *)0x0) {
        lVar9 = *plStack_2a0;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_2a0 != lVar9) {
              _objc_enumerationMutation(puVar6);
            }
            puVar1 = PTR_PTR_1126cb238;
            FUN_1064ebccc(PTR_PTR_1126cb238,*(undefined8 *)(lStack_2a8 + (long)puVar11 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(puVar3);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar1);
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar5 != puVar11);
          puVar5 = puVar6;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    puVar1 = puVar3;
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      __Unwind_Resume(puVar1);
      _objc_retain();
      FUN_1064eb2bc(puVar1);
      FUN_1064ecd50(puVar1,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1064eaffc; end: 1064eb2bb;  */

/* WARNING: Removing unreachable block (ram,0x0001064eb284) */

void FUN_1064eaffc(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 *puVar8;
  undefined4 uStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_128;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
      puVar1 = &UNK_10f38117f;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110928a20,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = param_2;
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
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cb230);
  if (puVar1 == (undefined *)0x0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1b0,puVar1);
  }
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1f4 = 0;
  puVar4 = &uStack_1b0;
  puVar2 = &uStack_1b0;
  func_0x00010054c81c(puVar2,&lStack_1f0,&uStack_1f4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_1f0 != 0) {
    lStack_1e8 = lStack_1f0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar2;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    lStack_1e8 = 0;
    lStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar6 = *plStack_1e0;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_1e0 != lVar6) {
            _objc_enumerationMutation(puVar4);
          }
          puVar5 = PTR_PTR_1126cb238;
          FUN_1064ebccc(PTR_PTR_1126cb238,*(undefined8 *)(lStack_1e8 + (long)puVar8 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar3 != puVar8);
        puVar3 = puVar4;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume(puVar5);
    _objc_retain();
    FUN_1064eb2bc(puVar5);
    FUN_1064ecd50(puVar5,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1064eb2bc; end: 1064eb53f;  */

void FUN_1064eb2bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uStack_134;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126cb230);
  if (param_1 == 0) {
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_f0,param_1);
  }
  lStack_130 = 0;
  lStack_128 = 0;
  plStack_120 = (long *)0x0;
  uStack_134 = 0;
  puVar3 = &uStack_f0;
  puVar1 = &uStack_f0;
  func_0x00010054c81c(puVar1,&lStack_130,&uStack_134);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_c8);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar1;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(puVar3);
    lStack_128 = 0;
    lStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(puVar3);
          }
          puVar4 = PTR_PTR_1126cb238;
          FUN_1064ebccc(PTR_PTR_1126cb238,*(undefined8 *)(lStack_128 + (long)puVar6 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar2 != puVar6);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  lVar5 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
  __Unwind_Resume(lVar5);
  _objc_retain();
  FUN_1064eb2bc(lVar5);
  FUN_1064ecd50(lVar5,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1064eb540; end: 1064eb58f;  */

void FUN_1064eb540(undefined8 param_1)

{
  _objc_retain();
  FUN_1064eb2bc(param_1);
  FUN_1064ecd50(param_1,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064eb590; end: 1064eb59b; +[SCFriendsFeedItemInfo table] */

undefined * FUN_1064eb590(void)

{
  return &UNK_10f381587;
}



/* Entry: 1064eb59c; end: 1064eb6fb; +[SCFriendsFeedItemInfo immutableObjectParse:bufferSize:] */

void FUN_1064eb59c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126cb230;
  _objc_alloc(PTR_PTR_1126cb230);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar9 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if (uVar3 < 7) {
      uVar8 = 0;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5));
      if (uVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((long)piVar1 + uVar6);
      }
      if ((8 < uVar3) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar5)), uVar6 != 0)) {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064eb69c;
      }
    }
    puVar9 = (undefined *)0x0;
  }
LAB_1064eb69c:
  func_0x00010c012560(puVar4,param_2,puVar7,uVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064eb6fc; end: 1064eb70f; +[SCFriendsFeedItemInfo objectClassFunctionPointer] */

undefined1  [16] FUN_1064eb6fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_1064eb75c;
  auVar1._0_8_ = FUN_1064eb710;
  return auVar1;
}



/* Entry: 1064eb710; end: 1064eb75b;  */

void FUN_1064eb710(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf6389e8;
  _strcmp(&DAT_10f6389e8,param_1);
  if (iVar1 != 0) {
    _strcmp("conversationId",param_1);
  }
  return;
}



/* Entry: 1064eb75c; end: 1064eb877;  */

bool FUN_1064eb75c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 1) {
    func_0x0001001b9e08(param_2,&UNK_10f3815e7);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar5 == 0)) {
      _sqlite3_bind_null(param_2,2);
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar5);
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
    }
  }
  else {
    if (param_1 != 0) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f38159d);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar5 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar5);
    }
    _sqlite3_bind_int64(param_2,2,uVar4);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 1064eb878; end: 1064eb953;  */

undefined1 *
FUN_1064eb878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f1878;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1064eb954; end: 1064ebccb;  */

void FUN_1064eb954(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f381645);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfa3d00(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cb230);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_1064ebc1c;
            puVar6 = PTR_PTR_1126cb238;
            _objc_alloc(PTR_PTR_1126cb238);
            puVar2 = puVar3;
            func_0x00010bfa3d00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c27dd80(puVar3);
            puVar5 = puVar3;
            func_0x00010bf50280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_1064eb878(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_1064eba4c;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cb230);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126cb238;
        _objc_alloc(PTR_PTR_1126cb238);
        puVar2 = puVar3;
        func_0x00010bfa3d00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dd80(puVar3);
        puVar5 = puVar3;
        func_0x00010bf50280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1064eb878(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_1064eba4c:
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_1064ebc24;
      }
LAB_1064ebc1c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1064ebc24:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064ebccc; end: 1064ebd3f;  */

void FUN_1064ebccc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1064eb954();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1064ebd40; end: 1064ebda3;  */

void FUN_1064ebd40(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cb230;
    _objc_alloc(PTR_PTR_1126cb230);
    func_0x00010c012560();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064ebda4; end: 1064ebdd3; -[SCFriendsFeedItemInfoChangeRequest .cxx_destruct] */

void FUN_1064ebda4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1064ebdd4; end: 1064ebddf; -[SCFriendsFeedItemInfoChangeRequest table] */

undefined * FUN_1064ebdd4(void)

{
  return &UNK_10f381587;
}



/* Entry: 1064ebde0; end: 1064ebef3; -[SCFriendsFeedItemInfoChangeRequest createTableWithSQLite:] */

void FUN_1064ebde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddc6c8,0x83,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddc74b,0x65,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dddc7b0,0x72,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dddc822,0x78,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10dddc89a,0x90,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 1064ebef4; end: 1064ec69f; -[SCFriendsFeedItemInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1064ebef4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar3 == 1) {
    FUN_1064ebd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_1064ec6a0(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bf636c0();
    func_0x0001050da3a4();
    _objc_release(puVar12);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f381739);
    if (lVar7 == 0) goto LAB_1064ec5c8;
    _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
    puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
    _sqlite3_bind_text(lVar7,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar7 != 0x65) goto LAB_1064ec5c8;
    uVar13 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    if (((ulong)puVar8 & 1) != 0) {
      lVar7 = param_3;
      func_0x0001001b9e08(param_3,&UNK_10f38159d);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
      }
      _sqlite3_bind_int64(lVar7,2,uVar10);
      _sqlite3_step();
      if ((int)lVar7 != 0x65) goto LAB_1064ec5c8;
    }
    if (((uint)puVar8 >> 8 & 1) != 0) {
      func_0x0001001b9e08(param_3,&UNK_10f3815e7);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
        _sqlite3_bind_null(param_3,2);
      }
      else {
        puVar14 = (uint *)((long)piVar1 + uVar11);
        puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
        _sqlite3_bind_text(param_3,2,puVar2 + 1,*puVar2,0);
      }
      _sqlite3_step();
      if ((int)param_3 != 0x65) goto LAB_1064ec5c8;
    }
    *(undefined8 *)(param_1 + 8) = uVar13;
    func_0x00010c1eeb60(puVar6);
    puVar12 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cb230);
    func_0x00010c21c9a0(puVar12);
LAB_1064ec5a0:
    _objc_release(puVar12);
    _objc_retain(puVar6);
    puVar12 = puVar6;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f381688);
        if (lVar7 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar7 == 0x65) {
            lVar7 = param_3;
            func_0x0001001b9e08(param_3,&UNK_10f3816b9);
            if (lVar7 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar7 != 0x65) goto LAB_1064ec054;
            }
            func_0x0001001b9e08(param_3,&UNK_10f3816f4);
            if (param_3 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_3 != 0x65) goto LAB_1064ec054;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cb230);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar12);
            _objc_release(puVar6);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1064ec5d4;
          }
        }
      }
LAB_1064ec054:
      puVar12 = (undefined *)0x0;
      goto LAB_1064ec5d4;
    }
    FUN_1064ebd40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    FUN_1064ec6a0(param_4,puVar6);
    func_0x0001001ce6fc(param_4,lVar7,0,0);
    puVar14 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar14;
    uVar13 = *(undefined8 *)(param_1 + 8);
    _objc_retain(puVar6);
    lVar7 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f381777);
    if (lVar7 != 0) {
      _sqlite3_bind_blob(lVar7,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(lVar7,2,uVar13);
      piVar1 = (int *)((long)puVar14 + (ulong)uVar4);
      puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
      _sqlite3_bind_text(lVar7,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar7 == 0x65) {
        puVar12 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cb230);
        puVar8 = puVar12;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010c27dd80();
        puVar5 = puVar6;
        func_0x00010c27dd80();
        if (puVar12 == puVar5) {
LAB_1064ec3d8:
          puVar12 = puVar8;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar12);
          _objc_retain(puVar5);
          if (puVar12 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
            if ((puVar12 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
              _objc_release(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar5);
              _objc_release(puVar12);
            }
            else {
              puVar9 = puVar12;
              func_0x00010c0720c0();
              _objc_release(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar5);
              _objc_release(puVar12);
              if (((ulong)puVar9 & 1) != 0) goto LAB_1064ec55c;
            }
            func_0x0001001b9e08(param_3,&UNK_10f381809);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
               (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar11 == 0)) {
              _sqlite3_bind_null(param_3,1);
            }
            else {
              puVar14 = (uint *)((long)piVar1 + uVar11);
              puVar2 = (undefined4 *)((long)puVar14 + (ulong)*puVar14);
              _sqlite3_bind_text(param_3,1,puVar2 + 1,*puVar2,0);
            }
            _sqlite3_bind_int64(param_3,2,uVar13);
            _sqlite3_step();
            if ((int)param_3 != 0x65) goto LAB_1064ec5b8;
          }
LAB_1064ec55c:
          _objc_release(puVar8);
          _objc_release(puVar6);
          puVar12 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126cb230);
          func_0x00010c21c9a0(puVar12);
          goto LAB_1064ec5a0;
        }
        lVar7 = param_3;
        func_0x0001001b9e08(param_3,&UNK_10f3817bf);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)piVar1 + uVar11);
        }
        _sqlite3_bind_int64(lVar7,1,uVar10);
        _sqlite3_bind_int64(lVar7,2,uVar13);
        _sqlite3_step();
        if ((int)lVar7 == 0x65) goto LAB_1064ec3d8;
LAB_1064ec5b8:
        _objc_release(puVar8);
      }
    }
    _objc_release(puVar6);
LAB_1064ec5c8:
    puVar12 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_1064ec5d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1064ec6a0; end: 1064ec7e7;  */

ulong FUN_1064ec6a0(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_1064ec7e8(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c27dd80(param_2);
  uVar7 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_1064ec7e8(param_1,uVar7);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,6,uVar6 & 0xffffffff,0);
  func_0x0001001ce2e4(param_1,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1064ec7e8; end: 1064ec917;  */

undefined8 FUN_1064ec7e8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1064ec8c8;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1064ec8c8;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1064ec888;
    param_1 = 0;
  }
  else {
LAB_1064ec888:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1064ec8c8:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1064ec918; end: 1064ecb1f;  */

void FUN_1064ec918(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cb240;
  func_0x000108c363b8(PTR_PTR_1126cb240,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cb240;
    func_0x000108c361f0(PTR_PTR_1126cb240,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(ulong *)(puVar1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = param_2;
    func_0x00010c262900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    if (uVar4 == uVar2) {
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar4);
      goto LAB_1064eca74;
    }
    if (uVar2 == 0) {
      _objc_release(uVar4);
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar4;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_1064eca74;
    }
    uVar2 = param_2;
    func_0x00010c262900(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1064eca74:
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ecb20; end: 1064ecd4f;  */

void FUN_1064ecb20(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126cb208);
  if (param_2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_2);
  }
  puVar2 = &uStack_111;
  func_0x000108c35554();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_1);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_1;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064ecd50; end: 1064ed19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ecd50(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong auStack_178 [17];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_a8 [3];
  long *plStack_90;
  long *plStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_opt_class(PTR_PTR_1126cb208);
    if (param_1 == 0) {
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_f0,param_1);
    }
    puStack_1c0 = (undefined8 *)0x0;
    puStack_1b8 = (undefined8 *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_200 = (undefined **)((ulong)uStack_200._4_4_ << 0x20);
    pppuVar4 = &ppuStack_f0;
    func_0x00010054c81c(pppuVar4,&puStack_1c0,&uStack_200);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1c0 != (undefined8 *)0x0) {
      puStack_1b8 = puStack_1c0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_c8);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126cb208);
    if (param_1 == 0) {
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1f8 = 0;
      uStack_200 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_200,param_1);
    }
    puVar3 = &uStack_201;
    func_0x000108c35554(puVar3);
    _objc_retain(param_2);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    lVar2 = param_2;
    func_0x00010bf529e0(param_2);
    func_0x0001004c2bb4(&uStack_220,lVar2);
    puStack_1b8 = (undefined8 *)0x0;
    puStack_1c0 = (undefined8 *)0x0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_1b0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1b0 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          uVar8 = *(ulong *)((long)puStack_1b8 + lVar10 * 8);
          _objc_retain(uVar8);
          auStack_178[0] = uVar8;
          func_0x0001004c2d3c(&uStack_220,auStack_178);
          _objc_release(auStack_178[0]);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = param_2;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_2);
    _objc_release(param_2);
    func_0x0001004c2e3c(&ppuStack_f0,0xc,puVar3,&uStack_220);
    puStack_1c0 = (undefined8 *)0x0;
    puStack_1b8 = (undefined8 *)0x0;
    plStack_1b0 = (long *)0x0;
    auStack_178[0] = auStack_178[0] & 0xffffffff00000000;
    pppuVar4 = (undefined ***)&uStack_200;
    func_0x0001000e77a0(pppuVar4,&ppuStack_f0,&puStack_1c0,auStack_178);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1c0 != (undefined8 *)0x0) {
      puStack_1b8 = puStack_1c0;
      __ZdlPv();
    }
    plVar1 = plStack_88;
    ppuStack_f0 = &PTR_SUB_110862700;
    plStack_88 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1c0 = auStack_a8;
    func_0x000100105004(&puStack_1c0);
    puStack_1c0 = &uStack_220;
    func_0x000100105004(&puStack_1c0);
    func_0x0001000e76e0(&uStack_1d8);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
  }
  _objc_retain(pppuVar4);
  pppuVar5 = pppuVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (pppuVar5 != (undefined ***)0x0) {
    pppuVar11 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(pppuVar4);
      }
      puVar6 = PTR_PTR_1126cb240;
      func_0x000108c36784(PTR_PTR_1126cb240,*(undefined8 *)((long)pppuVar11 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
    } while (pppuVar5 != pppuVar11);
    pppuVar5 = pppuVar4;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar4);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar2 = lVar2 + _DAT_112749460;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cb250;
  _objc_alloc(PTR_PTR_1126cb250);
  func_0x00010c049500();
  _objc_release(puVar6);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064ed19c; end: 1064ed267; -[SCSnapchatterSendingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ed19c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_112749460;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1064ed268;
  puStack_40 = &UNK_110928dd8;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb250;
  _objc_alloc(PTR_PTR_1126cb250);
  func_0x00010c049500();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064ed268; end: 1064ed297;  */

void FUN_1064ed268(void)

{
  _objc_alloc(PTR_PTR_1126cb248);
  func_0x00010c051940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ed298; end: 1064ed2cf; -[SCSnapchatterSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ed298(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112749464);
  return;
}



/* Entry: 1064ed2d0; end: 1064ed343; -[SCSnapchatterSender initWithTextMessageSender:] */

undefined1 * FUN_1064ed2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1880;
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



/* Entry: 1064ed344; end: 1064ed687; -[SCSnapchatterSender sendSnapchatterWithUserId:conversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completionHandler:] */

void FUN_1064ed344(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126cb258;
    _objc_retain(param_6);
    _objc_retain(puVar2);
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar4 = puVar2;
    func_0x00010bfe5d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1a99c0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c21e620(puVar12,param_2,puVar3);
    puVar4 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c21dd80();
    puVar5 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    puVar6 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar7 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar8 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar6,param_2,puVar8,4,puVar9,1);
    puVar10 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar2);
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126be800;
      _objc_alloc(PTR_PTR_1126be800);
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010c051920(puVar12,param_2,puVar2,0,param_7);
      _objc_release(puVar2);
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260();
    _objc_release(uVar11);
    _objc_release(puVar12);
    _objc_release(puVar10);
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



/* Entry: 1064ed688; end: 1064ed693; -[SCSnapchatterSender .cxx_destruct] */

void FUN_1064ed688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064ed694; end: 1064ed797; -[SCChatWallpaperCameraRollActionHandler initWithNativeSessionManager:externalMediaPreparer:conversationId:source:fetchLimit:] */

undefined1 *
FUN_1064ed694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1888;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ed798; end: 1064ed79f; -[SCChatWallpaperCameraRollActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064ed798(void)

{
  return 0;
}



/* Entry: 1064ed7a0; end: 1064ed7ab; -[SCChatWallpaperCameraRollActionHandler pushToValdiMarshaller:] */

void FUN_1064ed7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064ed7ac; end: 1064ed963; -[SCChatWallpaperCameraRollActionHandler selectWallpaperWithWallpaperItem:isBlurred:] */

void FUN_1064ed7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  uStack_80 = uVar2;
  uStack_78 = uVar8;
  uStack_70 = param_4;
  func_0x00010bf54280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064ed964; end: 1064edb03;  */

void FUN_1064ed964(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    _objc_opt_class(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x40);
    uStack_58 = *(undefined1 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    _objc_retain(param_2);
    func_0x00010beea620(0x4099500000000000,0x40a6800000000000,lVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(auVar5._8_8_);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064edb04; end: 1064edbb7;  */

void FUN_1064edb04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064f0394(param_2,uVar2,0,1,uVar5,uVar1,uVar4,*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064edbb8; end: 1064edd1b; -[SCChatWallpaperCameraRollActionHandler remixWallpaperWithWallpaperItem:isBlurred:tool:] */

void FUN_1064edbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = uVar2;
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064edd1c; end: 1064edeb7;  */

void FUN_1064edd1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    lVar3 = lVar1;
    _objc_opt_class(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,param_1 + 0x30);
    _objc_retain(param_2);
    uStack_58 = *(undefined1 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010beea620(0x4099500000000000,0x40a6800000000000,lVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064edeb8; end: 1064ee09f;  */

void FUN_1064edeb8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
      uStack_68 = *(long *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
    else {
      uStack_68 = param_2;
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010bf1e840(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar2 = lVar1;
      func_0x00010c1296c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c129680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf669a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0f3c60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf55bc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129700();
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar3);
    }
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ee0a0; end: 1064ee0e7; -[SCChatWallpaperCameraRollActionHandler _conversationManager] */

void FUN_1064ee0a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064ee0e8; end: 1064ee2f3; +[SCChatWallpaperCameraRollActionHandler _wallpaperForMediaId:targetSize:fetchLimit:completion:] */

void FUN_1064ee0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
  func_0x00010c19b420();
  puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_opt_new(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c18ba80();
    func_0x00010c1ec960(puVar3);
    func_0x00010c1cc000(puVar3);
    puVar5 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    func_0x00010c1357a0(param_1,param_2,puVar1);
    _objc_release(puVar5);
    _objc_release(param_7);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001064ee2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + 0x20) + 0x10))();
  return;
}



/* Entry: 1064ee2f4; end: 1064ee2ff;  */

void FUN_1064ee2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001064ee2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1064ee300; end: 1064ee35b; -[SCChatWallpaperCameraRollActionHandler didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1064ee300(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1064f08c0(*(undefined8 *)(param_1 + 0x30),2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010c1296a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ee35c; end: 1064ee363; -[SCChatWallpaperCameraRollActionHandler remixChatWallpaperServices] */

undefined8 FUN_1064ee35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1064ee364; end: 1064ee393; -[SCChatWallpaperCameraRollActionHandler setRemixChatWallpaperServices:] */

void FUN_1064ee364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ee394; end: 1064ee39b; -[SCChatWallpaperCameraRollActionHandler deckServices] */

undefined8 FUN_1064ee394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1064ee39c; end: 1064ee3cb; -[SCChatWallpaperCameraRollActionHandler setDeckServices:] */

void FUN_1064ee39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ee3cc; end: 1064ee3e3; -[SCChatWallpaperCameraRollActionHandler remixChatWallpaperControllerDelegate] */

void FUN_1064ee3cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ee3e4; end: 1064ee3ef; -[SCChatWallpaperCameraRollActionHandler setRemixChatWallpaperControllerDelegate:] */

void FUN_1064ee3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1064ee3f0; end: 1064ee407; -[SCChatWallpaperCameraRollActionHandler parentVC] */

void FUN_1064ee3f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ee408; end: 1064ee413; -[SCChatWallpaperCameraRollActionHandler setParentVC:] */

void FUN_1064ee408(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1064ee414; end: 1064ee48f; -[SCChatWallpaperCameraRollActionHandler .cxx_destruct] */

void FUN_1064ee414(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1064ee490; end: 1064ee593; -[SCChatWallpaperForUsActionHandler initWithDataStore:nativeSessionManager:simpleContentFetcher:conversationId:source:] */

undefined1 *
FUN_1064ee490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f1890;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ee594; end: 1064ee59b; -[SCChatWallpaperForUsActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064ee594(void)

{
  return 0;
}



/* Entry: 1064ee59c; end: 1064ee5a7; -[SCChatWallpaperForUsActionHandler pushToValdiMarshaller:] */

void FUN_1064ee59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064ee5a8; end: 1064ee83b; -[SCChatWallpaperForUsActionHandler selectWallpaperWithWallpaperItem:isBlurred:] */

void FUN_1064ee5a8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = lVar8;
  if ((param_4 & 1) == 0) {
    func_0x00010c2a1860();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1e860();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar3 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR_PTR_1126cb268;
    _objc_alloc(PTR_PTR_1126cb268);
    uVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0628c0(puVar6);
    _objc_release(puVar7);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cb270;
    _objc_alloc();
    func_0x00010c059800();
    _objc_initWeak(auStack_68,param_1);
    puVar5 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf54280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064ee83c; end: 1064ee97f;  */

void FUN_1064ee83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c04f4c0(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bde8ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2844c0();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064ee980; end: 1064ee99f;  */

void FUN_1064ee980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6148);
  return;
}



/* Entry: 1064ee9a0; end: 1064eeb7f; -[SCChatWallpaperForUsActionHandler remixWallpaperWithWallpaperItem:isBlurred:tool:] */

void FUN_1064ee9a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = lVar5;
  if ((param_4 & 1) == 0) {
    func_0x00010c2a1860();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1e860();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064eeb80; end: 1064eeccf;  */

void FUN_1064eeb80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010be370e0(lVar1);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064eecd0; end: 1064eee7b;  */

void FUN_1064eecd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
      lVar9 = *(long *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c1296c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c129680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf669a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c0f3c60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf55bc0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar9;
      func_0x00010c269d40(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129700();
      _objc_release(lVar2);
      _objc_release(lVar8);
    }
    _objc_release(lVar9);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064eee7c; end: 1064eeec3; -[SCChatWallpaperForUsActionHandler _conversationManager] */

void FUN_1064eee7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064eeec4; end: 1064ef037; -[SCChatWallpaperForUsActionHandler _imageForContentObject:completion:] */

void FUN_1064eeec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf4cd80(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c13e600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064ef038; end: 1064ef123;  */

void FUN_1064ef038(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010bfc5880(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64a80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ef124; end: 1064ef17f; -[SCChatWallpaperForUsActionHandler didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1064ef124(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1064f08c0(*(undefined8 *)(param_1 + 0x30),2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010c1296a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ef180; end: 1064ef187; -[SCChatWallpaperForUsActionHandler remixChatWallpaperServices] */

undefined8 FUN_1064ef180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1064ef188; end: 1064ef1b7; -[SCChatWallpaperForUsActionHandler setRemixChatWallpaperServices:] */

void FUN_1064ef188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ef1b8; end: 1064ef1bf; -[SCChatWallpaperForUsActionHandler deckServices] */

undefined8 FUN_1064ef1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1064ef1c0; end: 1064ef1ef; -[SCChatWallpaperForUsActionHandler setDeckServices:] */

void FUN_1064ef1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ef1f0; end: 1064ef207; -[SCChatWallpaperForUsActionHandler remixChatWallpaperControllerDelegate] */

void FUN_1064ef1f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ef208; end: 1064ef213; -[SCChatWallpaperForUsActionHandler setRemixChatWallpaperControllerDelegate:] */

void FUN_1064ef208(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1064ef214; end: 1064ef22b; -[SCChatWallpaperForUsActionHandler parentVC] */

void FUN_1064ef214(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ef22c; end: 1064ef237; -[SCChatWallpaperForUsActionHandler setParentVC:] */

void FUN_1064ef22c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1064ef238; end: 1064ef2b3; -[SCChatWallpaperForUsActionHandler .cxx_destruct] */

void FUN_1064ef238(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1064ef2b4; end: 1064ef3b7; -[SCChatWallpaperGenerativeActionHandler initWithNativeSessionManager:simpleContentFetcher:externalMediaPreparer:conversationId:source:] */

undefined1 *
FUN_1064ef2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f1898;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ef3b8; end: 1064ef3c3; -[SCChatWallpaperGenerativeActionHandler pushToValdiMarshaller:] */

void FUN_1064ef3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064ef3c4; end: 1064ef597; -[SCChatWallpaperGenerativeActionHandler selectWallpaperWithWallpaperItem:isBlurred:] */

void FUN_1064ef3c4(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = *(undefined **)(param_1 + 0x10);
    _objc_retain(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bde8ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    puVar4 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_78 = uVar7;
    uStack_70 = param_4;
    _objc_retain(param_3);
    func_0x00010bf54280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064ef598; end: 1064ef77f;  */

void FUN_1064ef598(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      puVar2 = PTR_PTR_1126cb268;
      _objc_alloc(PTR_PTR_1126cb268);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c5180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0628c0(puVar2);
      _objc_release(uVar4);
      puVar3 = PTR_PTR_1126cb270;
      _objc_alloc(PTR_PTR_1126cb270);
      func_0x00010c059800();
      func_0x00010bee42c0(lVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      _objc_copyWeak(auStack_50,param_1 + 0x48);
      _objc_retain(param_2);
      uStack_48 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x00010be370e0(lVar1);
      _objc_release(uVar4);
      _objc_release(param_2);
      _objc_destroyWeak(auStack_50);
    }
  }
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064ef780; end: 1064ef83f;  */

void FUN_1064ef780(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar2 == 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0c5180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064f0394(param_2,1,1,2,uVar4,uVar1,uVar3,*(undefined8 *)(param_1 + 0x40),
                  *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ef840; end: 1064ef99b; -[SCChatWallpaperGenerativeActionHandler _updateWallpaperWithUpdate:observer:] */

void FUN_1064ef840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b0cd8;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bdc35c0(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1064ef99c;
  puStack_68 = &UNK_110841f80;
  puStack_60 = puVar2;
  _objc_retain(param_4);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1064ef9ac;
  puStack_90 = &UNK_110855e40;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c04f4c0(puVar3,param_2,&puStack_80,&puStack_a8);
  func_0x00010bde8ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2844c0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar2);
  return;
}



/* Entry: 1064ef99c; end: 1064ef9bb;  */

void FUN_1064ef99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6190);
  return;
}



/* Entry: 1064ef9bc; end: 1064efa03; -[SCChatWallpaperGenerativeActionHandler _conversationManager] */

void FUN_1064ef9bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064efa04; end: 1064efc07; -[SCChatWallpaperGenerativeActionHandler _imageForContentObject:completion:] */

void FUN_1064efa04(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      param_2 = (undefined1 *)0x0;
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar2 = PTR_PTR_1126b08b0;
      func_0x00010bf4cd80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b17d8;
      _objc_alloc();
      ppuStack_50 = &PTR____CFConstantStringClassReference_110e530f8;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003a80();
      _objc_release(puVar4);
      _objc_initWeak(auStack_58,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1064efc08;
      puStack_70 = &UNK_1108af6f0;
      unaff_x24 = &puStack_88;
      param_2 = auStack_58;
      _objc_copyWeak(auStack_60,param_2);
      _objc_retain(param_4);
      lStack_68 = param_4;
      func_0x00010c13e600(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be29920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064efc08; end: 1064efc5b;  */

void FUN_1064efc08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064efc5c; end: 1064efd3b; -[SCChatWallpaperGenerativeActionHandler _handleFetchResult:completion:] */

void FUN_1064efc5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bfcaaa0();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfc5880(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64a80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064efd3c; end: 1064efec3; -[SCChatWallpaperGenerativeActionHandler remixWallpaperWithWallpaperItem:isBlurred:tool:] */

void FUN_1064efd3c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    _objc_retain(param_5);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064efec4; end: 1064f001b;  */

void FUN_1064efec4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    _objc_retain(param_2);
    uStack_48 = *(undefined1 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010be370e0(lVar1);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f001c; end: 1064f0203;  */

void FUN_1064f001c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
      uStack_68 = *(long *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
    else {
      uStack_68 = param_2;
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010bf1e840(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar2 = lVar1;
      func_0x00010c1296c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c129680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf669a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0f3c60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf55bc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129700();
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar3);
    }
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064f0204; end: 1064f025f; -[SCChatWallpaperGenerativeActionHandler didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1064f0204(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1064f08c0(*(undefined8 *)(param_1 + 0x30),2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010c1296a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f0260; end: 1064f0267; -[SCChatWallpaperGenerativeActionHandler remixChatWallpaperServices] */

undefined8 FUN_1064f0260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1064f0268; end: 1064f0297; -[SCChatWallpaperGenerativeActionHandler setRemixChatWallpaperServices:] */

void FUN_1064f0268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064f0298; end: 1064f029f; -[SCChatWallpaperGenerativeActionHandler deckServices] */

undefined8 FUN_1064f0298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


