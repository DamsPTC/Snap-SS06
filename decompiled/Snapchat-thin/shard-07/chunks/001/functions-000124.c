/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10526489c; end: 105264b7b;  */

/* WARNING: Removing unreachable block (ram,0x000105264b3c) */

void FUN_10526489c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char *unaff_x24;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871d48);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_a0,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_88,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871d48,acStack_c0,param_6);
      puStack_a8 = acStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar6 = 0;
      pcVar4 = pcVar3;
      pcVar5 = param_6;
      do {
        if ((&cStack_59)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = acStack_c0;
      } while (lVar6 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(pcVar2);
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      FUN_10526489c(pcVar3,pcVar2,pcVar4,pcVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 105264b7c; end: 105264c2f;  */

void FUN_105264b7c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10526489c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105264c30; end: 105264e7f;  */

void FUN_105264c30(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871d98);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
      pcVar2 = "\x01";
      pcVar4 = acStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871d98,pcVar4,param_5);
      pcStack_80 = acStack_98;
      func_0x00010007e5dc(&pcStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  _objc_release(param_4);
  pcVar3 = param_3;
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
  __Unwind_Resume();
  _objc_retain(pcVar2);
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    FUN_105264c30(pcVar3,pcVar2,pcVar4,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 105264e80; end: 105264f13;  */

void FUN_105264e80(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_105264c30(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105264f14; end: 105265087;  */

long * FUN_105264f14(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
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
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar14 = (long *)&UNK_110871de8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110871de8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar9;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105265088;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar14;
  pcVar2 = pcVar1;
  pcVar6 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  _objc_retain(pcVar1);
  puVar13 = (undefined8 *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar4 = (long *)&UNK_110871e38;
    unaff_x23 = acStack_118;
    pcVar2 = acStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110871e38,pcVar2,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar10 = 0;
    puVar13 = auStack_f8;
    pcVar6 = param_4;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar1);
  plVar9 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar9;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar14);
  plVar3 = plVar9;
  __Unwind_Resume();
  pcStack_128 = FUN_1052652b8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar4;
  pcVar5 = pcVar2;
  pcVar8 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar13;
  plStack_148 = plVar9;
  pcStack_140 = pcVar1;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar4);
  _objc_retain(pcVar2);
  pcVar1 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    plVar12 = (long *)&UNK_110871e88;
    unaff_x23 = acStack_1b8;
    pcVar5 = acStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110871e88,pcVar5,pcVar6);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar10 = 0;
    pcVar1 = (char *)auStack_198;
    pcVar8 = pcVar6;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar2);
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return plVar14;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar4);
  plVar3 = plVar14;
  __Unwind_Resume();
  pcVar7 = acStack_240;
  pcStack_1c8 = FUN_1052654e8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar12;
  pcVar6 = pcVar5;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar1;
  plStack_1e8 = plVar14;
  pcStack_1e0 = pcVar2;
  plStack_1d8 = plVar4;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar12);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    plVar9 = (long *)&UNK_110871ed8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110871ed8,acStack_240,pcVar5);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar6 = pcVar7;
    pcVar8 = pcVar5;
    pcVar1 = acStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar6 = pcVar7;
      pcVar8 = pcVar5;
      pcVar1 = acStack_240;
    }
  }
  plVar4 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar11 = plVar4;
  __Unwind_Resume();
  pcVar5 = acStack_2c0;
  pcStack_248 = FUN_10526565c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar9;
  pcVar2 = pcVar6;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar1;
  plStack_268 = plVar14;
  plStack_260 = plVar4;
  plStack_258 = plVar12;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar9);
  if (plVar11 != (long *)0x0) {
    plVar14 = (long *)plVar11[1];
    plVar3 = (long *)&UNK_110871f28;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar9;
        _objc_retainAutorelease(plVar9);
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      unaff_x23 = (char *)auStack_2a0;
      func_0x00010002b838(auStack_2a0,pcVar1);
      acStack_2c0[0] = '\0';
      acStack_2c0[1] = '\0';
      acStack_2c0[2] = '\0';
      acStack_2c0[3] = '\0';
      acStack_2c0[4] = '\0';
      acStack_2c0[5] = '\0';
      acStack_2c0[6] = '\0';
      acStack_2c0[7] = '\0';
      acStack_2c0[8] = '\0';
      acStack_2c0[9] = '\0';
      acStack_2c0[10] = '\0';
      acStack_2c0[0xb] = '\0';
      acStack_2c0[0xc] = '\0';
      acStack_2c0[0xd] = '\0';
      acStack_2c0[0xe] = '\0';
      acStack_2c0[0xf] = '\0';
      acStack_2c0[0x10] = '\0';
      acStack_2c0[0x11] = '\0';
      acStack_2c0[0x12] = '\0';
      acStack_2c0[0x13] = '\0';
      acStack_2c0[0x14] = '\0';
      acStack_2c0[0x15] = '\0';
      acStack_2c0[0x16] = '\0';
      acStack_2c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
      plVar3 = (long *)&UNK_110871f28;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110871f28,acStack_2c0,pcVar6);
      puStack_2a8 = acStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      pcVar2 = pcVar5;
      pcVar8 = pcVar6;
      pcVar1 = acStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        pcVar2 = pcVar5;
        pcVar8 = pcVar6;
        pcVar1 = acStack_2c0;
      }
    }
  }
  plVar14 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return plVar14;
  }
  ___stack_chk_fail();
  _objc_release(plVar9);
  _objc_release(plVar9);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcVar5 = acStack_340;
  pcStack_2c8 = FUN_1052657f0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  pcVar6 = pcVar2;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar1;
  plStack_2e8 = plVar11;
  plStack_2e0 = plVar14;
  plStack_2d8 = plVar9;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar3);
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    plVar4 = (long *)&UNK_110871f78;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar3;
        _objc_retainAutorelease(plVar3);
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      unaff_x23 = (char *)auStack_320;
      func_0x00010002b838(auStack_320,pcVar1);
      acStack_340[0] = '\0';
      acStack_340[1] = '\0';
      acStack_340[2] = '\0';
      acStack_340[3] = '\0';
      acStack_340[4] = '\0';
      acStack_340[5] = '\0';
      acStack_340[6] = '\0';
      acStack_340[7] = '\0';
      acStack_340[8] = '\0';
      acStack_340[9] = '\0';
      acStack_340[10] = '\0';
      acStack_340[0xb] = '\0';
      acStack_340[0xc] = '\0';
      acStack_340[0xd] = '\0';
      acStack_340[0xe] = '\0';
      acStack_340[0xf] = '\0';
      acStack_340[0x10] = '\0';
      acStack_340[0x11] = '\0';
      acStack_340[0x12] = '\0';
      acStack_340[0x13] = '\0';
      acStack_340[0x14] = '\0';
      acStack_340[0x15] = '\0';
      acStack_340[0x16] = '\0';
      acStack_340[0x17] = '\0';
      func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
      plVar4 = (long *)&UNK_110871f78;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110871f78,acStack_340,pcVar2);
      puStack_328 = acStack_340;
      func_0x00010007e5dc(&puStack_328);
      pcVar6 = pcVar5;
      pcVar8 = pcVar2;
      pcVar1 = acStack_340;
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
        pcVar6 = pcVar5;
        pcVar8 = pcVar2;
        pcVar1 = acStack_340;
      }
    }
  }
  plVar14 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return plVar14;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar9 = plVar14;
  __Unwind_Resume();
  pcStack_348 = FUN_105265984;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = (undefined8 *)pcVar1;
  plStack_368 = plVar12;
  plStack_360 = plVar14;
  plStack_358 = plVar3;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(plVar4);
  _objc_retain(pcVar6);
  if (plVar9 != (long *)0x0) {
    plVar14 = (long *)plVar9[1];
    (**(code **)(*plVar14 + 0x28))(plVar14,&UNK_110871fc8);
    if ((int)plVar14 != 0) {
      plVar14 = (long *)plVar9[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      func_0x00010002b838(auStack_3b8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_3a0,pcVar1);
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      func_0x00010007e1e8(&uStack_3d8,auStack_3b8,&lStack_388,2);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110871fc8,&uStack_3d8,(long)pcVar8 * 100);
      puStack_3c0 = &uStack_3d8;
      func_0x00010007e5dc(&puStack_3c0);
      lVar10 = 0;
      do {
        if ((&cStack_389)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
  }
  _objc_release(pcVar6);
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return plVar14;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(plVar4);
  __Unwind_Resume();
  return (long *)plVar14[1];
}



/* Entry: 105265088; end: 1052652b7;  */

long * FUN_105265088(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
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
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  char *pcStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  pcVar1 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar9 = (long *)&UNK_110871e38;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110871e38,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    puVar13 = auStack_78;
    pcVar5 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  plVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar12;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar2 = plVar12;
  __Unwind_Resume();
  pcStack_a8 = FUN_1052652b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar9;
  pcVar3 = pcVar1;
  pcVar7 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  plStack_c8 = plVar12;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar9);
  _objc_retain(pcVar1);
  pcVar14 = (char *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar12 = (long *)plVar2[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar3 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    plVar11 = (long *)&UNK_110871e88;
    unaff_x23 = acStack_138;
    pcVar3 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110871e88,pcVar3,pcVar5);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar8 = 0;
    pcVar14 = (char *)auStack_118;
    pcVar7 = pcVar5;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar1);
  plVar12 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar12;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar9);
  plVar4 = plVar12;
  __Unwind_Resume();
  pcVar6 = acStack_1c0;
  pcStack_148 = FUN_1052654e8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar11;
  pcVar5 = pcVar3;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = (undefined8 *)pcVar14;
  plStack_168 = plVar12;
  pcStack_160 = pcVar1;
  plStack_158 = plVar9;
  ppuStack_150 = &puStack_b0;
  _objc_retain(plVar11);
  plVar9 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar9 = (long *)plVar4[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    plVar2 = (long *)&UNK_110871ed8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110871ed8,acStack_1c0,pcVar3);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar5 = pcVar6;
    pcVar7 = pcVar3;
    pcVar14 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar5 = pcVar6;
      pcVar7 = pcVar3;
      pcVar14 = acStack_1c0;
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return plVar12;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar10 = plVar12;
  __Unwind_Resume();
  pcVar3 = acStack_240;
  pcStack_1c8 = FUN_10526565c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  pcVar1 = pcVar5;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar14;
  plStack_1e8 = plVar9;
  plStack_1e0 = plVar12;
  plStack_1d8 = plVar11;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(plVar2);
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)plVar10[1];
    plVar4 = (long *)&UNK_110871f28;
    (**(code **)(*plVar9 + 0x28))();
    if ((int)plVar9 != 0) {
      plVar10 = (long *)plVar10[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      unaff_x23 = (char *)auStack_220;
      func_0x00010002b838(auStack_220,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
      plVar4 = (long *)&UNK_110871f28;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110871f28,acStack_240,pcVar5);
      puStack_228 = acStack_240;
      func_0x00010007e5dc(&puStack_228);
      pcVar1 = pcVar3;
      pcVar7 = pcVar5;
      pcVar14 = acStack_240;
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
        pcVar1 = pcVar3;
        pcVar7 = pcVar5;
        pcVar14 = acStack_240;
      }
    }
  }
  plVar9 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return plVar9;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar11 = plVar9;
  __Unwind_Resume();
  pcVar3 = acStack_2c0;
  pcStack_248 = FUN_1052657f0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar4;
  pcVar5 = pcVar1;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar14;
  plStack_268 = plVar10;
  plStack_260 = plVar9;
  plStack_258 = plVar2;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(plVar4);
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)plVar11[1];
    plVar12 = (long *)&UNK_110871f78;
    (**(code **)(*plVar9 + 0x28))();
    if ((int)plVar9 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = (char *)auStack_2a0;
      func_0x00010002b838(auStack_2a0,pcVar5);
      acStack_2c0[0] = '\0';
      acStack_2c0[1] = '\0';
      acStack_2c0[2] = '\0';
      acStack_2c0[3] = '\0';
      acStack_2c0[4] = '\0';
      acStack_2c0[5] = '\0';
      acStack_2c0[6] = '\0';
      acStack_2c0[7] = '\0';
      acStack_2c0[8] = '\0';
      acStack_2c0[9] = '\0';
      acStack_2c0[10] = '\0';
      acStack_2c0[0xb] = '\0';
      acStack_2c0[0xc] = '\0';
      acStack_2c0[0xd] = '\0';
      acStack_2c0[0xe] = '\0';
      acStack_2c0[0xf] = '\0';
      acStack_2c0[0x10] = '\0';
      acStack_2c0[0x11] = '\0';
      acStack_2c0[0x12] = '\0';
      acStack_2c0[0x13] = '\0';
      acStack_2c0[0x14] = '\0';
      acStack_2c0[0x15] = '\0';
      acStack_2c0[0x16] = '\0';
      acStack_2c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
      plVar12 = (long *)&UNK_110871f78;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110871f78,acStack_2c0,pcVar1);
      puStack_2a8 = acStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      pcVar5 = pcVar3;
      pcVar7 = pcVar1;
      pcVar14 = acStack_2c0;
      if (cStack_289 < '\0') {
        __ZdlPv(auStack_2a0[0]);
        pcVar5 = pcVar3;
        pcVar7 = pcVar1;
        pcVar14 = acStack_2c0;
      }
    }
  }
  plVar9 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return plVar9;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar2 = plVar9;
  __Unwind_Resume();
  pcStack_2c8 = FUN_105265984;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar14;
  plStack_2e8 = plVar11;
  plStack_2e0 = plVar9;
  plStack_2d8 = plVar4;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(plVar12);
  _objc_retain(pcVar5);
  if (plVar2 != (long *)0x0) {
    plVar9 = (long *)plVar2[1];
    (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_110871fc8);
    if ((int)plVar9 != 0) {
      plVar9 = (long *)plVar2[1];
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar12;
        _objc_retainAutorelease(plVar12);
        func_0x00010bdc3520();
      }
      _objc_release(plVar12);
      func_0x00010002b838(auStack_338,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_320,pcVar1);
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110871fc8,&uStack_358,(long)pcVar7 * 100);
      puStack_340 = &uStack_358;
      func_0x00010007e5dc(&puStack_340);
      lVar8 = 0;
      do {
        if ((&cStack_309)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  _objc_release(pcVar5);
  plVar9 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return plVar9;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar5);
  _objc_release(plVar12);
  __Unwind_Resume();
  return (long *)plVar9[1];
}



/* Entry: 1052652b8; end: 1052654e7;  */

long * FUN_1052652b8(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
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
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  pcVar1 = param_3;
  pcVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar3 = (long *)&UNK_110871e88;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110871e88,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    pcVar2 = (char *)auStack_78;
    pcVar8 = param_4;
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
    return plVar12;
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
  pcVar7 = acStack_120;
  pcStack_a8 = FUN_1052654e8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  pcVar6 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar2;
  plStack_c8 = plVar12;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar3);
  plVar12 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)plVar11[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar4 = (long *)&UNK_110871ed8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110871ed8,acStack_120,pcVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar7;
    pcVar8 = pcVar1;
    pcVar2 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar7;
      pcVar8 = pcVar1;
      pcVar2 = acStack_120;
    }
  }
  plVar11 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return plVar11;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar10 = plVar11;
  __Unwind_Resume();
  pcVar7 = acStack_1a0;
  pcStack_128 = FUN_10526565c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar1 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar2;
  plStack_148 = plVar12;
  plStack_140 = plVar11;
  plStack_138 = plVar3;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar4);
  if (plVar10 != (long *)0x0) {
    plVar3 = (long *)plVar10[1];
    plVar5 = (long *)&UNK_110871f28;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar10 = (long *)plVar10[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = (char *)auStack_180;
      func_0x00010002b838(auStack_180,pcVar1);
      acStack_1a0[0] = '\0';
      acStack_1a0[1] = '\0';
      acStack_1a0[2] = '\0';
      acStack_1a0[3] = '\0';
      acStack_1a0[4] = '\0';
      acStack_1a0[5] = '\0';
      acStack_1a0[6] = '\0';
      acStack_1a0[7] = '\0';
      acStack_1a0[8] = '\0';
      acStack_1a0[9] = '\0';
      acStack_1a0[10] = '\0';
      acStack_1a0[0xb] = '\0';
      acStack_1a0[0xc] = '\0';
      acStack_1a0[0xd] = '\0';
      acStack_1a0[0xe] = '\0';
      acStack_1a0[0xf] = '\0';
      acStack_1a0[0x10] = '\0';
      acStack_1a0[0x11] = '\0';
      acStack_1a0[0x12] = '\0';
      acStack_1a0[0x13] = '\0';
      acStack_1a0[0x14] = '\0';
      acStack_1a0[0x15] = '\0';
      acStack_1a0[0x16] = '\0';
      acStack_1a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
      plVar5 = (long *)&UNK_110871f28;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110871f28,acStack_1a0,pcVar6);
      puStack_188 = acStack_1a0;
      func_0x00010007e5dc(&puStack_188);
      pcVar1 = pcVar7;
      pcVar8 = pcVar6;
      pcVar2 = acStack_1a0;
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
        pcVar1 = pcVar7;
        pcVar8 = pcVar6;
        pcVar2 = acStack_1a0;
      }
    }
  }
  plVar3 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar11 = plVar3;
  __Unwind_Resume();
  pcVar7 = acStack_220;
  pcStack_1a8 = FUN_1052657f0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar6 = pcVar1;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar2;
  plStack_1c8 = plVar10;
  plStack_1c0 = plVar3;
  plStack_1b8 = plVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  if (plVar11 != (long *)0x0) {
    plVar3 = (long *)plVar11[1];
    plVar12 = (long *)&UNK_110871f78;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      unaff_x23 = (char *)auStack_200;
      func_0x00010002b838(auStack_200,pcVar2);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
      plVar12 = (long *)&UNK_110871f78;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110871f78,acStack_220,pcVar1);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      pcVar6 = pcVar7;
      pcVar8 = pcVar1;
      pcVar2 = acStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        pcVar6 = pcVar7;
        pcVar8 = pcVar1;
        pcVar2 = acStack_220;
      }
    }
  }
  plVar3 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_105265984;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar2;
  plStack_248 = plVar11;
  plStack_240 = plVar3;
  plStack_238 = plVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar6);
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)plVar4[1];
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110871fc8);
    if ((int)plVar3 != 0) {
      plVar3 = (long *)plVar4[1];
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)plVar12;
        _objc_retainAutorelease(plVar12);
        func_0x00010bdc3520();
      }
      _objc_release(plVar12);
      func_0x00010002b838(auStack_298,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_280,pcVar1);
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110871fc8,&uStack_2b8,(long)pcVar8 * 100);
      puStack_2a0 = &uStack_2b8;
      func_0x00010007e5dc(&puStack_2a0);
      lVar9 = 0;
      do {
        if ((&cStack_269)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
    }
  }
  _objc_release(pcVar6);
  plVar3 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar6);
  _objc_release(plVar12);
  __Unwind_Resume();
  return (long *)plVar3[1];
}



/* Entry: 1052654e8; end: 10526565b;  */

char * FUN_1052654e8(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110871ed8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar5 = pcVar3;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    pcVar4 = "\x02";
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_e0,pcVar2);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      pcVar4 = "\x02";
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110871f28,acStack_100,pcVar3);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      pcVar5 = pcVar6;
      param_4 = pcVar3;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar5 = pcVar6;
        param_4 = pcVar3;
      }
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar2 = pcVar5;
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    pcVar1 = "\x02";
    (**(code **)(*plVar7 + 0x28))();
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_160,pcVar1);
      acStack_180[0] = '\0';
      acStack_180[1] = '\0';
      acStack_180[2] = '\0';
      acStack_180[3] = '\0';
      acStack_180[4] = '\0';
      acStack_180[5] = '\0';
      acStack_180[6] = '\0';
      acStack_180[7] = '\0';
      acStack_180[8] = '\0';
      acStack_180[9] = '\0';
      acStack_180[10] = '\0';
      acStack_180[0xb] = '\0';
      acStack_180[0xc] = '\0';
      acStack_180[0xd] = '\0';
      acStack_180[0xe] = '\0';
      acStack_180[0xf] = '\0';
      acStack_180[0x10] = '\0';
      acStack_180[0x11] = '\0';
      acStack_180[0x12] = '\0';
      acStack_180[0x13] = '\0';
      acStack_180[0x14] = '\0';
      acStack_180[0x15] = '\0';
      acStack_180[0x16] = '\0';
      acStack_180[0x17] = '\0';
      func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
      pcVar1 = "\x02";
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110871f78,acStack_180,pcVar5);
      puStack_168 = acStack_180;
      func_0x00010007e5dc(&puStack_168);
      pcVar2 = pcVar6;
      param_4 = pcVar5;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        pcVar2 = pcVar6;
        param_4 = pcVar5;
      }
    }
  }
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110871fc8);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_1f8,pcVar3);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar3 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_1e0,pcVar3);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110871fc8,&uStack_218,(long)param_4 * 100);
      puStack_200 = &uStack_218;
      func_0x00010007e5dc(&puStack_200);
      lVar8 = 0;
      do {
        if ((&cStack_1c9)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  return *(char **)(pcVar3 + 8);
}



/* Entry: 10526565c; end: 1052657ef;  */

char * FUN_10526565c(long param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871f28,acStack_80,param_3);
      puStack_68 = acStack_80;
      func_0x00010007e5dc(&puStack_68);
      pcVar4 = pcVar3;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar3;
        param_4 = param_3;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar6 = pcVar4;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    pcVar5 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_e0,pcVar3);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      pcVar5 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871f78,acStack_100,pcVar4);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      pcVar6 = pcVar7;
      param_4 = pcVar4;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar6 = pcVar7;
        param_4 = pcVar4;
      }
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871fc8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_178,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_160,pcVar2);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871fc8,&uStack_198,(long)param_4 * 100);
      puStack_180 = &uStack_198;
      func_0x00010007e5dc(&puStack_180);
      lVar8 = 0;
      do {
        if ((&cStack_149)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  return *(char **)(pcVar2 + 8);
}



/* Entry: 1052657f0; end: 105265983;  */

char * FUN_1052657f0(long param_1,char *param_2,char *param_3,char *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "\x02";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_80[0] = '\0';
      acStack_80[1] = '\0';
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_80[4] = '\0';
      acStack_80[5] = '\0';
      acStack_80[6] = '\0';
      acStack_80[7] = '\0';
      acStack_80[8] = '\0';
      acStack_80[9] = '\0';
      acStack_80[10] = '\0';
      acStack_80[0xb] = '\0';
      acStack_80[0xc] = '\0';
      acStack_80[0xd] = '\0';
      acStack_80[0xe] = '\0';
      acStack_80[0xf] = '\0';
      acStack_80[0x10] = '\0';
      acStack_80[0x11] = '\0';
      acStack_80[0x12] = '\0';
      acStack_80[0x13] = '\0';
      acStack_80[0x14] = '\0';
      acStack_80[0x15] = '\0';
      acStack_80[0x16] = '\0';
      acStack_80[0x17] = '\0';
      func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871f78,acStack_80,param_3);
      puStack_68 = acStack_80;
      func_0x00010007e5dc(&puStack_68);
      pcVar4 = pcVar3;
      param_4 = param_3;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        pcVar4 = pcVar3;
        param_4 = param_3;
      }
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar1 = *(long **)(pcVar3 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871fc8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_f8,pcVar3);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar3 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_e0,pcVar3);
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871fc8,&uStack_118,(long)param_4 * 100);
      puStack_100 = &uStack_118;
      func_0x00010007e5dc(&puStack_100);
      lVar5 = 0;
      do {
        if ((&cStack_c9)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  __Unwind_Resume();
  return *(char **)(pcVar3 + 8);
}



/* Entry: 105265984; end: 105265bd7;  */

char * FUN_105265984(long param_1,char *param_2,char *param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110871fc8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110871fc8,&uStack_98,param_4 * 100);
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
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  return *(char **)(pcVar2 + 8);
}



/* Entry: 105265bd8; end: 105265bdf; -[SCDelayedEntryPointDelayContext callback] */

undefined8 FUN_105265bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105265be0; end: 105265be7; -[SCDelayedEntryPointDelayContext entryPointName] */

undefined8 FUN_105265be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105265be8; end: 105265bef; -[SCDelayedEntryPointDelayContext context] */

undefined8 FUN_105265be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105265bf0; end: 105265c4b; -[SCDelayedEntryPointDelayContext .cxx_destruct] */

void FUN_105265bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105265c4c; end: 105265c93; -[SCDelayedEntryPointHandler dealloc] */

void FUN_105265c4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126e7338;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105265c94; end: 105265d4b; -[SCDelayedEntryPointHandler _runDelayCallbacks] */

void FUN_105265c94(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010bf5fce0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be97e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runDelayCallbacksOperation_112583920);
    return;
  }
  func_0x00010befa3a0(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 105265d4c; end: 105265d53;  */

void FUN_105265d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be97e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__runDelayCallbacksOperation_112583920);
  return;
}



/* Entry: 105265d54; end: 105265ed3; -[SCDelayedEntryPointHandler _runDelayCallbacksOperation] */

void FUN_105265d54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar6 = *(long *)(lVar8 * 8);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = lVar6;
      func_0x00010bf97660(lVar6);
      _objc_retainAutoreleasedReturnValue();
      FUN_1052660b4(uVar7,lVar2,1);
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010bf285c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010bf285c0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))();
        _objc_release(lVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c12adc0(lVar3);
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x38,0);
  _objc_storeStrong(lVar3 + 0x28,0);
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 105265ed4; end: 105265f33; -[SCDelayedEntryPointHandler .cxx_destruct] */

void FUN_105265ed4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105265f34; end: 105265f63; -[SCDelayedEntryPointHandlerContextStreamImpl .cxx_destruct] */

void FUN_105265f34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105265f64; end: 105265f87; -[SCDelayedEntryPointHandlerContext copyWithZone:] */

undefined8 FUN_105265f64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105265f88; end: 105265ff3; -[SCDelayedEntryPointHandlerContext hash] */

undefined8 * FUN_105265f88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar2 = &uStack_38;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         (((puVar2[2] != param_3[2] || (puVar2[3] != param_3[3])) ||
          (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))))) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)(ulong)(*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105265ff4; end: 1052660ab; -[SCDelayedEntryPointHandlerContext isEqual:] */

bool FUN_105265ff4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1052660ac; end: 1052660b3; -[SCDelayedEntryPointHandlerContext targetScreen] */

undefined8 FUN_1052660ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052660b4; end: 105266227;  */

void FUN_1052660b4(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
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
  pcVar3 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar3 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110872278,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
    }
  }
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar7 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(&uStack_e0,pcVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,&uStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108722c8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    param_4 = puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(CONCAT71(uStack_df,uStack_e0));
      param_4 = puVar5;
    }
  }
  pcVar4 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume(pcVar4);
  puVar5 = puStack_e8;
  uVar2 = uStack_f0;
  uVar1 = uStack_100;
  _objc_retain(puStack_e8);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  pcVar3 = pcVar4;
  func_0x00010bf39d80(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1332c0(pcVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 105266228; end: 10526639b;  */

void FUN_105266228(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(&uStack_60,pcVar4);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,&uStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108722c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT71(uStack_5f,uStack_60));
      param_4 = param_3;
    }
  }
  pcVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar4);
  puVar3 = puStack_68;
  uVar2 = uStack_70;
  uVar1 = uStack_80;
  _objc_retain(puStack_68);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  pcVar5 = pcVar4;
  func_0x00010bf39d80(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1332c0(pcVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 10526639c; end: 1052664b3; +[SCAbnormalExitLogger reportMetricWithLastApplicationState:crashLogger:blizzardCrashLogger:appTerminationType:lastSessionANRCrashed:preferences:metricLogger:isDebugBuild:appInsightsMetadataStorage:memoryUsageMetadataStore:transcodingFlagEnabled:] */

void FUN_10526639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 uVar1;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf39d80(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1332c0(param_1,param_2,uVar1,param_3,param_4,param_5,param_9,param_11,param_12,
                      param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052664b4; end: 1052664c7;  */

void FUN_1052664b4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1052664c8; end: 1052665d7; -[SCBlizzardCrashLogger reportLowMemoryWarningEventWithTopViewController:applicationState:] */

void FUN_1052664c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_1b8;
  undefined1 auStack_1b4 [372];
  
  puVar1 = PTR_PTR_1126b6c10;
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c2176e0();
  _objc_release(param_3);
  uStack_1b8 = 0x5d;
  _task_info(*(undefined4 *)PTR__mach_task_self__11034c5c8,0x17,auStack_1b4,&uStack_1b8);
  func_0x00010c1c6840();
  func_0x000100209f0c();
  func_0x00010c1c6740(puVar1);
  func_0x00010bdd4c60(param_1);
  func_0x00010c1691e0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2800();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052665d8; end: 10526663f; -[SCBlizzardCrashLogger .cxx_destruct] */

void FUN_1052665d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105266640; end: 105266693; -[SCCrashAppStateTracker dealloc] */

void FUN_105266640(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _munmap(*(long *)(param_1 + 0x28),1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puStack_28 = PTR_PTR_1126e7360;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105266694; end: 1052666cf; -[SCCrashAppStateTracker .cxx_destruct] */

void FUN_105266694(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052666d0; end: 1052667cb;  */

void FUN_1052666d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6c18;
  func_0x00010c089920(PTR_PTR_1126b6c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07c0(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1052667cc; end: 1052667cf;  */

void FUN_1052667cc(void)

{
  return;
}



/* Entry: 1052667d0; end: 10526680b; -[SCCrashLastPageViewListener .cxx_destruct] */

void FUN_1052667d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526680c; end: 105266917; -[SCCrashToReportPostStartupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10526680c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105266918;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_1127209ec;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdb220();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105266918; end: 105266943;  */

void FUN_105266918(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be715e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105266944; end: 1052669e3; -[SCCrashToReportPostStartupEntryPoint _performBackgroundWorkOnStartupComplete] */

void FUN_105266944(void)

{
  undefined *puVar1;
  
  func_0x00010bea5a60();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052669e4; end: 105266b63; -[SCCrashToReportPostStartupEntryPoint _setMetadatas] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052669e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_1127209f4;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127209f8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(lVar3,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf981e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07a0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105266b64; end: 105266b6b; -[SCCrashToReportPostStartupEntryPoint _keyboardDidShow:] */

void FUN_105266b64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setKeyBoardDisplaying__112586db8,1);
  return;
}



/* Entry: 105266b6c; end: 105266b73; -[SCCrashToReportPostStartupEntryPoint _keyboardDidHide:] */

void FUN_105266b6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setKeyBoardDisplaying__112586db8,0);
  return;
}



/* Entry: 105266b74; end: 105266c03; -[SCCrashToReportPostStartupEntryPoint _setKeyBoardDisplaying:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105266b74(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127209f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105266c04; end: 105266c6b; -[SCCrashToReportPostStartupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105266c04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127209f0);
  _objc_destroyWeak(param_1 + _DAT_112720a00);
  _objc_destroyWeak(param_1 + _DAT_1127209f4);
  _objc_destroyWeak(param_1 + _DAT_1127209ec);
  _objc_destroyWeak(param_1 + _DAT_1127209fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127209f8);
  return;
}



/* Entry: 105266c6c; end: 105266cbf; -[SCKSCrashDelegate initWithSnapAirLogWriter:] */

long FUN_105266c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 8,param_3);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105266cc0; end: 105266e67; -[SCKSCrashDelegate provideLogsFor:] */

void FUN_105266cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _os_unfair_lock_lock(lVar2);
  puVar3 = PTR_PTR_1126b6c20;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09a00(puVar3,param_2,param_3,lVar2);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b6c20;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000100088750();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc2e00(puVar4,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeb800(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126b6c20;
  lStack_48 = 0;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3ec0(puVar3,param_2,param_3,&lStack_48,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x10);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x10);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105266e68; end: 105266edb; -[SCKSCrashDelegate logUploadFinishedFor:isUploadSuccessful:] */

void FUN_105266e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _os_unfair_lock_lock(lVar2);
  puVar1 = PTR_PTR_1126b6c20;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eb20(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 105266edc; end: 10526706f; -[SCKSCrashDelegate _writeAllLogsToURL:] */

undefined1 * FUN_105266edc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2be020();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c119980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_e8;
  uVar6 = 0x10;
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar5,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar6 = uVar7;
        func_0x00010c0a6720(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4900(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beeb940(param_1,param_2,uVar6,uVar7,param_3);
        _objc_release(uVar7);
        _objc_release(uVar6);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar5 = auStack_e8;
      uVar6 = 0x10;
      lVar1 = lVar2;
      puVar4 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,puVar5,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  if (puVar5 != (undefined1 *)0x0) {
    _objc_retain(puVar5);
    func_0x00010bdc2c60(uVar6,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c14e060(puVar5,param_2,uVar6,0);
    _objc_release(puVar5);
    _objc_release(uVar6);
    return puVar3;
  }
  return (undefined1 *)0x1;
}



/* Entry: 105267070; end: 1052670ef; -[SCKSCrashDelegate _writeDataWithFileName:data:baseUrl:] */

long FUN_105267070(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bdc2c60(param_5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c14e060(param_4,param_2,param_5,0);
    _objc_release(param_4);
    _objc_release(param_5);
    return lVar1;
  }
  return 1;
}



/* Entry: 1052670f0; end: 1052670f7; -[SCKSCrashDelegate .cxx_destruct] */

void FUN_1052670f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052670f8; end: 105267143; -[SCMemoryUsageMetadataListener dealloc] */

void FUN_1052670f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    _dispatch_source_cancel();
  }
  puStack_28 = PTR_PTR_1126e7370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105267144; end: 105267243; -[SCMemoryUsageMetadataListener _subscribeOnDidBecomeActive:] */

void FUN_105267144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105267244; end: 10526726f;  */

void FUN_105267244(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beebb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105267270; end: 10526736f; -[SCMemoryUsageMetadataListener _subscribeOnDidEnterBackground:] */

void FUN_105267270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105267370; end: 1052673b7;  */

void FUN_105267370(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beebb20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052673b8; end: 1052674fb; -[SCMemoryUsageMetadataListener _subscribeOnMemoryPressureState] */

void FUN_1052673b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ca1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar2 = lVar3;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar4 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1052674fc; end: 105267563;  */

void FUN_1052674fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beebb20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beebb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105267564; end: 10526767f; -[SCMemoryUsageMetadataListener _startPeriodicTimerWithIntervalSec:] */

void FUN_105267564(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = 0;
  _dispatch_time(0,(long)param_3 * 1000000000);
  _dispatch_source_set_timer(uVar4,uVar3,(long)param_3 * 1000000000,100000000);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105267680;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _dispatch_source_set_event_handler(uVar3,&puStack_60);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x48));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105267680; end: 1052676c7;  */

void FUN_105267680(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beebb20();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052676c8; end: 1052677b3; -[SCMemoryUsageMetadataListener _writeDevicePhysicalMemory] */

void FUN_1052676c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fb8a0();
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c18cc80(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6c18;
  func_0x00010bf70d20(PTR_PTR_1126b6c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07c0(uVar3,param_2,puVar1,puVar2,(*(byte *)(param_1 + 0x28) ^ 0xff) & 1);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052677b4; end: 1052679df; -[SCMemoryUsageMetadataListener _writeMemoryUsage] */

void FUN_1052677b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c290f40();
    lVar3 = lVar1;
    func_0x00010c29f980();
    lVar4 = lVar1;
    func_0x00010c125ae0();
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010c21dd20(*(undefined8 *)(param_1 + 0x20),param_2,lVar2);
      func_0x00010c2236e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar3);
      func_0x00010c21fd60(*(undefined8 *)(param_1 + 0x20),param_2,lVar4);
      bVar8 = *(byte *)(param_1 + 0x28) ^ 1;
    }
    else {
      bVar8 = 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6c18;
    func_0x00010c0ca260(PTR_PTR_1126b6c18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07c0(uVar5,param_2,puVar6,puVar7,bVar8 & 1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6c18;
    func_0x00010c29f9a0(PTR_PTR_1126b6c18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07c0(uVar5,param_2,puVar6,puVar7,bVar8 & 1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3bb8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6c18;
    func_0x00010c2a0720(PTR_PTR_1126b6c18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07c0(uVar5,param_2,puVar6,puVar7,bVar8 & 1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052679e0; end: 105267baf; -[SCMemoryUsageMetadataListener _writeMemoryPressureState:] */

void FUN_1052679e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105267bb0;
  uStack_50 = 0x105267bc0;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffff;
  func_0x00010c0bf100(param_3);
  if (puStack_68[5] != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010c1c67a0(*(undefined8 *)(param_1 + 0x20));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6c18;
    func_0x00010c0ca200(PTR_PTR_1126b6c18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07c0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105267bb0; end: 105267bc7;  */

void FUN_105267bb0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105267bc8; end: 105267c9b;  */

void FUN_105267bc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dce178;
  _objc_release(uVar1);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105267c9c; end: 105267d73; -[SCMemoryUsageMetadataListener _writeAppSessionDuration] */

void FUN_105267c9c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000100b6a110();
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010c169040(*(undefined8 *)(param_2 + 0x20),param_3,
                        (long)(param_1 - *(double *)(param_2 + 0x50)));
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dba0f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6c18;
  func_0x00010bf05ec0(PTR_PTR_1126b6c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d07c0(uVar2,param_3,puVar1,puVar3,(*(byte *)(param_2 + 0x28) ^ 0xff) & 1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105267d74; end: 105267deb; -[SCMemoryUsageMetadataListener .cxx_destruct] */

void FUN_105267d74(long param_1)

{
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



/* Entry: 105267dec; end: 105267dfb; -[SCMemoryUsageMetadataStore setUsedMemoryBytes:] */

void FUN_105267dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 8) = param_3;
  }
  return;
}



/* Entry: 105267dfc; end: 105267e0b; -[SCMemoryUsageMetadataStore setVirtualMemoryBytes:] */

void FUN_105267dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = param_3;
  }
  return;
}



/* Entry: 105267e0c; end: 105267e1b; -[SCMemoryUsageMetadataStore setVMRegionCount:] */

void FUN_105267e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x18) = param_3;
  }
  return;
}



/* Entry: 105267e1c; end: 105267e2b; -[SCMemoryUsageMetadataStore setDevicePhysicalMemoryBytes:] */

void FUN_105267e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x20) = param_3;
  }
  return;
}



/* Entry: 105267e2c; end: 105267e3b; -[SCMemoryUsageMetadataStore setAppSessionDurationSec:] */

void FUN_105267e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x28) = param_3;
  }
  return;
}



/* Entry: 105267e3c; end: 105267e4b; -[SCMemoryUsageMetadataStore setMemoryPressureState:] */

void FUN_105267e3c(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x30) = param_3;
  }
  return;
}



/* Entry: 105267e4c; end: 105267edf; -[_TtC24SCCrashServicesImplSwift16SCCapturedThread initWithCStruct:stack:] */

undefined8 FUN_105267e4c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if (*param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c051c40(param_3[2],param_1,param_2,puVar1,(long)(int)param_3[1],
                      *(undefined1 *)((long)param_3 + 0xc),(char)param_3[3],param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105267ee0; end: 10526819f; -[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo initFromCStructAndSymbolicate:bInfo:] */

undefined1 *
FUN_105267ee0(undefined1 *param_1,undefined8 param_2,long *param_3,undefined *param_4,
             undefined8 param_5,undefined *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_188 = param_1;
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b6c28;
  _objc_alloc();
  func_0x00010c03e820();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  if (0 < (int)param_3[1]) {
    lVar11 = 0;
    unaff_x28 = (undefined *)0x0;
    do {
      puVar13 = PTR_PTR_1126b6c30;
      param_6 = puVar5;
      func_0x00010c265ac0(PTR_PTR_1126b6c30);
      _objc_retainAutoreleasedReturnValue();
      unaff_x27 = PTR_PTR_1126b6c38;
      _objc_alloc();
      puVar1 = (undefined8 *)(*param_3 + lVar11);
      uStack_138 = puVar1[1];
      uStack_140 = *puVar1;
      uStack_128 = puVar1[3];
      uStack_130 = puVar1[2];
      uStack_118 = puVar1[5];
      uStack_120 = puVar1[4];
      uStack_108 = puVar1[7];
      uStack_110 = puVar1[6];
      func_0x00010bffa3e0();
      func_0x00010befa120(puVar6);
      _objc_release(unaff_x27);
      _objc_release(puVar13);
      unaff_x28 = unaff_x28 + 1;
      lVar11 = lVar11 + 0x40;
    } while ((long)unaff_x28 < (long)(int)param_3[1]);
  }
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  puStack_190 = puVar6;
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar11 = *plStack_170;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x27 = *(undefined **)(lStack_178 + (long)puVar13 * 8);
        unaff_x28 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x28 != (undefined *)0x0) {
          unaff_x27 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(unaff_x27);
        }
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar3;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar11 = param_3[2];
  iVar2 = *(int *)((long)param_3 + 0xc);
  puVar13 = puVar4;
  func_0x00010bf51e00();
  puVar6 = puStack_190;
  puVar7 = puStack_188;
  puVar12 = puStack_190;
  uVar14 = (long)iVar2;
  puVar9 = puVar13;
  func_0x00010c051c60(lVar11);
  _objc_release(puVar13);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar7;
  }
  ___stack_chk_fail();
  puStack_1d0 = puVar6;
  pcStack_198 = FUN_1052681a0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1f0 = unaff_x28;
  puStack_1e8 = unaff_x27;
  puStack_1e0 = puVar13;
  puStack_1d8 = puVar5;
  uStack_1c8 = (long)iVar2;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar4;
  puStack_1b0 = puVar3;
  puStack_1a8 = param_4;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puStack_210 = param_6;
  _objc_retain(param_6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  if (0 < (int)uVar14) {
    uVar14 = uVar14 & 0xffffffff;
    do {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010bffc4a0();
      puVar5 = puVar12;
      func_0x000106af0d28();
      if ((int)puVar5 != 0) {
        if (*(long *)(puVar12 + 8) != 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          if (*(long *)(puVar12 + 8) != 0) {
            _strrchr(*(long *)(puVar12 + 8),0x2f);
          }
          func_0x00010bffa3c0(puVar5);
          func_0x00010c1d0560(puVar4);
          func_0x00010befa120(puVar9);
          _objc_release(puVar5);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c027bc0();
        func_0x00010c1d0560(puVar4);
        if (*(long *)(puVar12 + 0x18) != 0) {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x00010bffa3c0();
          func_0x00010c1d0560(puVar4);
          _objc_release(puVar6);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c027bc0();
        func_0x00010c1d0560(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar12 = puVar12 + 0x28;
      func_0x00010c027bc0();
      func_0x00010c1d0560(puVar4);
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  ppuStack_208 = &PTR____CFConstantStringClassReference_110dbf198;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_200 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puStack_210;
  puVar6 = puStack_210;
  func_0x00010bf14940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_240;
    pcStack_218 = FUN_10526845c;
    puStack_238 = PTR_PTR_1126e7380;
    puStack_240 = puVar3;
    puStack_230 = puVar6;
    puStack_228 = puVar9;
    ppuStack_220 = &puStack_1a0;
    _objc_msgSendSuper2(&puStack_240,PTR_s_init_1125d9248);
    if (ppuVar8 != (undefined **)0x0) {
      puVar7 = (undefined1 *)ppuVar8;
      func_0x00010be1d3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)ppuVar8 + 8);
      *(undefined1 **)((long)ppuVar8 + 8) = puVar7;
      _objc_release(uVar10);
    }
    return (undefined1 *)ppuVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1052681a0; end: 10526845b; +[_TtC24SCCrashServicesImplSwift32SCStackTracesWithBinaryImageInfo symbolicateStackEntries:stackEntryCount:usedImageNames:formatter:] */

undefined1 *
FUN_1052681a0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
             undefined1 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_80 = param_6;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  if (0 < (int)param_4) {
    uVar10 = (ulong)param_4;
    do {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010bffc4a0();
      lVar3 = param_3;
      func_0x000106af0d28();
      if ((int)lVar3 != 0) {
        if (*(long *)(param_3 + 8) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          if (*(long *)(param_3 + 8) != 0) {
            _strrchr(*(long *)(param_3 + 8),0x2f);
          }
          func_0x00010bffa3c0(puVar4);
          func_0x00010c1d0560(puVar2);
          func_0x00010befa120(param_5);
          _objc_release(puVar4);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c027bc0();
        func_0x00010c1d0560(puVar2);
        if (*(long *)(param_3 + 0x18) != 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x00010bffa3c0();
          func_0x00010c1d0560(puVar2);
          _objc_release(puVar5);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c027bc0();
        func_0x00010c1d0560(puVar2);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
      param_3 = param_3 + 0x28;
      func_0x00010c027bc0();
      func_0x00010c1d0560(puVar2);
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar2);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dbf198;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puStack_80;
  puVar6 = puStack_80;
  func_0x00010bf14940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  uVar9 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar7 = &uStack_b0;
    pcStack_88 = FUN_10526845c;
    puStack_a8 = PTR_PTR_1126e7380;
    uStack_b0 = uVar9;
    puStack_a0 = puVar6;
    uStack_98 = param_5;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&uStack_b0,PTR_s_init_1125d9248);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined1 *)puVar7;
      func_0x00010be1d3c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar7 + 8);
      *(undefined1 **)((long)puVar7 + 8) = puVar8;
      _objc_release(uVar9);
    }
    return (undefined1 *)puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10526845c; end: 1052684c3; -[SCStackTrace init] */

undefined1 * FUN_10526845c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be1d3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052684c4; end: 1052689fb; -[SCStackTrace stackTracesWithBinaryImageInfoIncludingAllThreads:orderThreadsByCpuUsage:] */

undefined * FUN_1052684c4(undefined8 param_1,undefined8 param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uStack_26c0;
  uint auStack_26bc [100];
  uint uStack_252c;
  undefined1 auStack_21f0 [8];
  uint uStack_21e8;
  int iStack_21e4;
  undefined8 uStack_21e0;
  undefined1 *puStack_21d8;
  uint uStack_21cc;
  ulong uStack_21c8;
  undefined1 auStack_21c0 [48];
  undefined *puStack_2190;
  undefined *puStack_2188;
  undefined *puStack_2180;
  undefined4 uStack_2178;
  undefined1 *puStack_2170;
  undefined1 *puStack_2168;
  undefined1 auStack_2160 [776];
  undefined8 *puStack_1e58;
  undefined8 uStack_1e50;
  undefined8 uStack_1e48;
  uint uStack_1e3c;
  undefined8 uStack_1e38;
  uint auStack_1e30 [98];
  ulong auStack_1ca8 [101];
  int iStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined4 uStack_1968;
  undefined1 auStack_1964 [4];
  ulong auStack_1960 [4];
  int aiStack_1940 [2];
  ulong auStack_1938 [793];
  long lStack_70;
  
  uStack_21cc = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e38 = 0;
  uStack_1e3c = 0;
  lVar13 = -0x1900;
  do {
    uVar3 = 0x368;
    _malloc();
    *(undefined8 *)(&stack0xffffffffffffffb0 + lVar13) = uVar3;
    uVar3 = 500;
    _calloc(500,0x28);
    *(undefined8 *)(&stack0xffffffffffffffb8 + lVar13) = uVar3;
    puVar4 = (undefined8 *)0x4d0;
    _malloc();
    uVar15 = uStack_21cc;
    *(undefined8 **)(&stack0xffffffffffffffc8 + lVar13) = puVar4;
    lVar13 = lVar13 + 0x40;
  } while (lVar13 != 0);
  puStack_1e58 = &uStack_1970;
  uStack_1e48 = 0;
  uStack_1e50 = 0;
  if ((uStack_21cc & 1) != 0) {
    puVar4 = &uStack_1e38;
    func_0x000106aeeed4(puVar4,&uStack_1e3c,auStack_1e30);
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _mach_thread_self();
  _mach_port_deallocate(*(undefined4 *)PTR__mach_task_self__11034c5c8,puVar4);
  func_0x000106aeeb9c((ulong)puVar4 & 0xffffffff,&uStack_26c0,1);
  puVar4 = (undefined8 *)0x60;
  puVar5 = auStack_2160;
  _backtrace_async(auStack_2160,0x60,0);
  puStack_2180 = &UNK_106af0d88;
  puStack_2190 = &SUB_1001d3478;
  puStack_2188 = &UNK_106af09b8;
  func_0x0001001d3478(auStack_21c0);
  uStack_2178 = 1;
  puStack_2170 = puVar5;
  puStack_2168 = auStack_2160;
  if ((int)uStack_252c < 1) {
    uVar18 = 0;
  }
  else {
    uStack_21e0 = param_1;
    puStack_21d8 = auStack_21f0;
    uVar14 = 0;
    uVar18 = 0;
    uStack_21e8 = uStack_252c;
    iStack_21e4 = param_4;
    if (99 < uStack_252c) {
      uStack_252c = 100;
    }
    uStack_21c8 = (ulong)uStack_252c;
    puVar17 = (undefined4 *)PTR__mach_task_self__11034c5c8;
    do {
      uVar2 = auStack_26bc[uVar14];
      uVar16 = (ulong)uVar2;
      if (uVar2 == uStack_26c0) {
        lVar13 = (long)(int)uVar18;
        puVar7 = &uStack_1970 + lVar13 * 8;
        puVar6 = (undefined8 *)auStack_1960[lVar13 * 8 + 2];
        _memcpy(puVar6,auStack_21c0,0x368);
        (&uStack_1968)[lVar13 * 0x10] = (int)uVar14;
        if (lRam000000011381b418 == 0) {
LAB_105268784:
          uVar3 = 0;
        }
        else {
          uVar16 = (ulong)(uRam000000011381b408 & ((int)uRam000000011381b408 >> 0x1f ^ 0xffffffffU))
          ;
          puVar4 = (undefined8 *)(lRam000000011381b418 + -8);
          puVar9 = puRam000000011381b410;
          do {
            if (uVar16 == 0) goto LAB_105268784;
            uVar11 = *puVar9;
            puVar4 = puVar4 + 1;
            uVar16 = uVar16 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar11 != uStack_26c0);
          uVar3 = *puVar4;
        }
        *puVar7 = uVar3;
        _mach_thread_self();
        puVar4 = puVar6;
        _mach_port_deallocate(*puVar17);
        auStack_1964[lVar13 * 0x40] = uStack_26c0 == (uint)puVar6;
        if (uVar15 != 0) {
          lVar10 = 0;
          do {
            if (lVar10 == 400) {
              uVar16 = 0;
              goto LAB_1052687dc;
            }
            puVar1 = auStack_1e30 + lVar10;
            lVar10 = lVar10 + 1;
          } while (uStack_26c0 != *puVar1);
          uVar16 = auStack_1ca8[lVar10];
LAB_1052687dc:
          auStack_1960[lVar13 * 8] = uVar16;
          if (uStack_26c0 == auStack_1e30[iStack_1980]) {
LAB_1052687f0:
            *(undefined1 *)(puVar7 + 3) = 1;
          }
        }
LAB_1052687f8:
        uVar18 = uVar18 + 1;
      }
      else if (uVar15 != 0) {
        lVar13 = (long)(int)uVar18;
        puVar7 = &uStack_1970 + lVar13 * 8;
        puVar4 = (undefined8 *)auStack_1938[lVar13 * 8];
        uVar11 = uVar16;
        func_0x000106aeeb9c(uVar16,puVar4,0);
        if ((int)uVar11 != 0) {
          puVar4 = (undefined8 *)auStack_1960[lVar13 * 8 + 2];
          uVar11 = auStack_1938[lVar13 * 8];
          puVar4[7] = &UNK_106af0a60;
          puVar4[8] = &UNK_106af0d88;
          puVar4[6] = &SUB_106af0a44;
          puVar6 = puVar4;
          func_0x000106af0a44();
          uVar15 = uStack_21cc;
          puVar4[9] = uVar11;
          *(undefined4 *)(puVar4 + 10) = 500;
          puVar4[0xd] = *puVar4;
          (&uStack_1968)[lVar13 * 0x10] = (int)uVar14;
          if (lRam000000011381b418 == 0) {
            uVar3 = 0;
          }
          else {
            uVar11 = (ulong)(uRam000000011381b408 &
                            ((int)uRam000000011381b408 >> 0x1f ^ 0xffffffffU));
            puVar4 = (undefined8 *)(lRam000000011381b418 + -8);
            puVar9 = puRam000000011381b410;
            do {
              if (uVar11 == 0) {
                uVar3 = 0;
                goto LAB_105268820;
              }
              uVar12 = *puVar9;
              puVar4 = puVar4 + 1;
              uVar11 = uVar11 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar12 != uVar16);
            uVar3 = *puVar4;
          }
LAB_105268820:
          *puVar7 = uVar3;
          _mach_thread_self();
          puVar4 = puVar6;
          _mach_port_deallocate(*(undefined4 *)PTR__mach_task_self__11034c5c8);
          lVar10 = 0;
          auStack_1964[lVar13 * 0x40] = uVar2 == (uint)puVar6;
          do {
            if (lVar10 == 400) {
              uVar16 = 0;
              goto LAB_105268878;
            }
            puVar1 = auStack_1e30 + lVar10;
            lVar10 = lVar10 + 1;
          } while (uVar2 != *puVar1);
          uVar16 = auStack_1ca8[lVar10];
LAB_105268878:
          auStack_1960[lVar13 * 8] = uVar16;
          puVar17 = (undefined4 *)PTR__mach_task_self__11034c5c8;
          if (uVar2 == auStack_1e30[iStack_1980]) goto LAB_1052687f0;
          goto LAB_1052687f8;
        }
      }
      param_4 = iStack_21e4;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uStack_21c8);
    uStack_252c = uStack_21e8;
    if (0 < (int)uVar18) {
      uVar14 = 0;
      do {
        puVar6 = (undefined8 *)auStack_1960[uVar14 * 8 + 2];
        puVar7 = puVar6;
        (*(code *)puVar6[7])();
        if ((int)puVar7 == 0) {
          iVar19 = 0;
        }
        else {
          lVar13 = 0;
          iVar19 = 0;
          do {
            puVar7 = (undefined8 *)(auStack_1960[uVar14 * 8 + 3] + lVar13);
            uVar20 = puVar6[1];
            uVar3 = *puVar6;
            uVar22 = puVar6[3];
            uVar21 = puVar6[2];
            puVar7[4] = puVar6[4];
            puVar7[1] = uVar20;
            *puVar7 = uVar3;
            puVar7[3] = uVar22;
            puVar7[2] = uVar21;
            puVar7 = puVar6;
            (*(code *)puVar6[7])();
            iVar19 = iVar19 + 1;
            lVar13 = lVar13 + 0x28;
          } while (((ulong)puVar7 & 1) != 0);
        }
        aiStack_1940[uVar14 * 0x10] = iVar19;
        uVar14 = uVar14 + 1;
        uVar15 = uStack_21cc;
        uStack_252c = uStack_21e8;
      } while (uVar14 != uVar18);
    }
  }
  uStack_1e50 = CONCAT44(uStack_1e50._4_4_,uVar18);
  if ((uVar15 & 1) != 0) {
    uStack_1e48 = uStack_1978;
    uStack_1e50 = CONCAT44(uStack_252c,uVar18);
    puVar4 = (undefined8 *)(ulong)uStack_1e3c;
    func_0x000106aef138(uStack_1e38);
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(long)(int)uVar18;
      _qsort(&uStack_1970,puVar4,0x40,FUN_1052689fc);
    }
  }
  puVar8 = PTR_PTR_1126b6c30;
  _objc_alloc(PTR_PTR_1126b6c30);
  func_0x00010bfeeba0();
  lVar13 = -0x1900;
  do {
    _free(*(undefined8 *)(&stack0xffffffffffffffb0 + lVar13));
    _free(*(undefined8 *)(&stack0xffffffffffffffb8 + lVar13));
    lVar10 = *(long *)(&stack0xffffffffffffffc8 + lVar13);
    _free();
    lVar13 = lVar13 + 0x40;
  } while (lVar13 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  uVar15 = -(uint)((double)puVar4[2] < *(double *)(lVar10 + 0x10));
  if (*(double *)(lVar10 + 0x10) < (double)puVar4[2]) {
    uVar15 = 1;
  }
  return (undefined *)(ulong)uVar15;
}



/* Entry: 1052689fc; end: 105268a13;  */

int FUN_1052689fc(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = -(uint)(*(double *)(param_2 + 0x10) < *(double *)(param_1 + 0x10));
  if (*(double *)(param_1 + 0x10) < *(double *)(param_2 + 0x10)) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Entry: 105268a14; end: 105268b77; -[SCStackTrace binaryImagesInfoWithImageNames:] */

void FUN_105268a14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_110;
    do {
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    func_0x000106aec428(puVar5,&uStack_1e0);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010bffc4a0();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      func_0x00010bee7440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar4);
      if (lStack_198 != 0) {
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar4);
        _objc_release(puVar14);
      }
      if (lStack_190 != 0) {
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar4);
        _objc_release(puVar14);
      }
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(param_3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105268b78; end: 105268e9f; -[SCStackTrace _getBinaryImageAtIndex:] */

void FUN_105268b78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  func_0x000106aec428(param_3,&uStack_c0);
  if ((param_3 & 1) == 0) {
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc_init(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bffc4a0();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    func_0x00010bee7440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar11);
    if (lStack_78 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar11);
      _objc_release(puVar10);
    }
    if (lStack_70 != 0) {
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105268ea0; end: 10526921b; -[SCStackTrace _getBinaryImagesMap] */

undefined * FUN_105268ea0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puStack_138;
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
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar1 = puVar14;
  __dyld_image_count();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  if (0 < (int)puVar1) {
    iVar13 = 0;
    do {
      uVar3 = param_1;
      func_0x00010be1d3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar3);
      iVar13 = iVar13 + 1;
    } while ((int)puVar1 != iVar13);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246ba0();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar9 = &uStack_130;
  puStack_138 = puVar1;
  func_0x00010bf52a60();
  if (puStack_138 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        lVar11 = *(long *)(lStack_128 + (long)puVar12 * 8);
        lVar4 = lVar11;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(lVar4);
        lVar4 = lVar11;
        func_0x00010c0dff20(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(lVar4);
        lVar4 = lVar11;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        _objc_release(lVar4);
        lVar4 = lVar11;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        _objc_release(lVar4);
        lVar4 = lVar11;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010c0dff20(lVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
          func_0x00010becc700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar6 = param_1;
          func_0x00010bdea160();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          func_0x00010c1d0560(puVar14);
          _objc_release(puVar7);
          _objc_release(uVar3);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar12 = puVar12 + 1;
      } while (puStack_138 != puVar12);
      puVar9 = &uStack_130;
      puStack_138 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_138 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar14 = (undefined *)0x0;
  if ((param_2 != (undefined *)0x0) && (puVar8 != (undefined8 *)0x0)) {
    puVar14 = param_2;
    func_0x00010bf433a0(param_2);
  }
  _objc_release(puVar8);
  _objc_release(param_2);
  return puVar14;
}



/* Entry: 10526921c; end: 1052692bb;  */

long FUN_10526921c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = 0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010bf433a0(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 1052692bc; end: 105269447; -[SCStackTrace _uuidCstringtoString:] */

void FUN_1052692bc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  undefined1 auStack_3d [6];
  undefined1 auStack_37 [31];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (byte *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    lVar2 = 0;
    do {
      lVar6 = lVar2;
      pbVar4 = param_3 + 1;
      bVar1 = *param_3;
      auStack_3d[lVar6] = (&UNK_10dd90b18)[bVar1 >> 4];
      auStack_3d[lVar6 + 1] = (&UNK_10dd90b18)[(ulong)bVar1 & 0xf];
      param_3 = pbVar4;
      lVar2 = lVar6 + 2;
    } while ((int)(lVar6 + 2) != 8);
    auStack_3d[lVar6 + 2] = 0x2d;
    puVar8 = auStack_37 + lVar6;
    bVar3 = true;
    do {
      bVar9 = bVar3;
      puVar7 = puVar8;
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      puVar7[-3] = (&UNK_10dd90b18)[bVar1 >> 4];
      puVar7[-2] = (&UNK_10dd90b18)[(ulong)bVar1 & 0xf];
      pbVar4 = pbVar5;
      puVar8 = puVar7 + 2;
      bVar3 = false;
    } while (bVar9);
    puVar7[-1] = 0x2d;
    bVar3 = true;
    do {
      bVar9 = bVar3;
      puVar7 = puVar8;
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      puVar7[-2] = (&UNK_10dd90b18)[bVar1 >> 4];
      puVar7[-1] = (&UNK_10dd90b18)[(ulong)bVar1 & 0xf];
      pbVar5 = pbVar4;
      puVar8 = puVar7 + 2;
      bVar3 = false;
    } while (bVar9);
    *puVar7 = 0x2d;
    bVar3 = true;
    do {
      bVar9 = bVar3;
      puVar7 = puVar8;
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      puVar7[-1] = (&UNK_10dd90b18)[bVar1 >> 4];
      puVar8 = puVar7 + 2;
      *puVar7 = (&UNK_10dd90b18)[(ulong)bVar1 & 0xf];
      pbVar4 = pbVar5;
      bVar3 = false;
    } while (bVar9);
    puVar7[1] = 0x2d;
    iVar10 = 6;
    do {
      bVar1 = *pbVar5;
      *puVar8 = (&UNK_10dd90b18)[bVar1 >> 4];
      puVar8[1] = (&UNK_10dd90b18)[(ulong)bVar1 & 0xf];
      puVar8 = puVar8 + 2;
      iVar10 = iVar10 + -1;
      pbVar5 = pbVar5 + 1;
    } while (iVar10 != 0);
    *puVar8 = 0;
    puVar8 = auStack_3d;
    func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x00010c0b5ac0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105269448; end: 10526949f; -[SCStackTrace _toCompactUUID:] */

void FUN_105269448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052694a0; end: 105269573; -[SCStackTrace _cpuArchForMajor:minorCode:] */

void FUN_1052694a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0x1000007) {
    if ((param_3 == 7) || (param_3 == 0xc)) goto _objc_autoreleaseReturnValue;
  }
  else if ((param_3 == 0x1000007) || (param_3 == 0x100000c)) goto _objc_autoreleaseReturnValue;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dce598);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105269574; end: 10526957f; -[SCStackTrace .cxx_destruct] */

void FUN_105269574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105269580; end: 10526960b; +[SCTranscodingInProgressSentinel _ensureDirectoryExists] */

undefined * FUN_105269580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea13a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  puVar2 = puVar1;
  func_0x00010bf55d80(puVar1,param_2,param_1,1,0,&uStack_38);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10526960c; end: 105269673; +[SCTranscodingInProgressSentinel _fsyncDirectory] */

void FUN_10526960c(long param_1)

{
  long lVar1;
  
  func_0x00010bea13a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bfad0c0();
  _objc_release(param_1);
  if ((lVar1 != 0) && (_open(lVar1,0), -1 < (int)lVar1)) {
    _fsync();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__close_11034bfc8)(lVar1);
    return;
  }
  return;
}



/* Entry: 105269674; end: 10526973b; +[SCTranscodingInProgressSentinel markJobStarted:] */

void FUN_105269674(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = param_1;
    func_0x00010be85640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10526973c;
    puStack_48 = &UNK_110848c48;
    lStack_40 = lVar1;
    uStack_38 = param_1;
    _objc_retain(lVar1);
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10526973c; end: 10526982f;  */

void FUN_10526973c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x00010befa120(uRam00000001136b9580,param_2,*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010be0a460();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bea13a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf561e0(puVar4,param_2,uVar3,puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if ((int)puVar6 != 0) {
      func_0x00010be19ba0(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105269830; end: 1052699bf; +[SCTranscodingInProgressSentinel markJobEnded:] */

void FUN_105269830(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = param_1;
    func_0x00010be85640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1052698f8;
    puStack_48 = &UNK_110848c48;
    lStack_40 = lVar1;
    uStack_38 = param_1;
    _objc_retain(lVar1);
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1052699c0; end: 105269a83; +[SCTranscodingInProgressSentinel wasTranscodingInProgressAtPreviousAbnormalExit] */

undefined1 FUN_1052699c0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010be85640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006eaa4();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 105269a84; end: 105269c13;  */

void FUN_105269a84(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_e0;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bea13a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = 0;
  puVar2 = puVar9;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uStack_e0;
  _objc_retain(uStack_e0);
  _objc_release(uVar1);
  _objc_release(puVar9);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(puVar2);
        }
        puVar7 = *(undefined8 **)(lStack_118 + (long)puVar9 * 8);
        uVar4 = uRam00000001136b9580;
        func_0x00010bf4b900();
        if ((uVar4 & 1) == 0) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
          puVar9 = puVar3;
          goto LAB_105269bc4;
        }
        puVar9 = puVar9 + 1;
      } while (puVar3 != puVar9);
      puVar3 = puVar2;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
      puVar9 = puVar3;
    } while (puVar3 != (undefined *)0x0);
  }
LAB_105269bc4:
  _objc_release(puVar2);
  _objc_release(puVar2);
  uVar1 = uVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uStack_140 = uVar6;
    pcStack_128 = FUN_105269c14;
    puStack_150 = puVar9;
    puStack_148 = puVar2;
    lStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010c08fa60();
    if (puVar5 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)puVar7;
      func_0x00010bf51e00();
      uVar6 = uVar1;
      func_0x00010be85640(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      uStack_170 = 0x105269cd8;
      puStack_168 = &UNK_110848c48;
      puStack_160 = puVar5;
      uStack_158 = uVar1;
      _objc_retain(puVar5);
      func_0x00010006eaa4(uVar6,&puStack_180);
      _objc_release(uVar6);
      _objc_release(puStack_160);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 105269c14; end: 105269d9f; +[SCTranscodingInProgressSentinel _seedPreviousSessionSentinelForTesting:] */

void FUN_105269c14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = param_1;
    func_0x00010be85640(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105269cd8;
    puStack_48 = &UNK_110848c48;
    lStack_40 = lVar1;
    uStack_38 = param_1;
    _objc_retain(lVar1);
    func_0x00010006eaa4(uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105269da0; end: 105269e0f; +[SCTranscodingInProgressSentinel _resetForTesting] */

void FUN_105269da0(undefined8 param_1)

{
  func_0x00010be85640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006eaa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105269e10; end: 105269fef;  */

void FUN_105269e10(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12adc0(uRam00000001136b9580);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bea13a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bea13a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c25ce00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc40();
      _objc_release(puVar6);
      _objc_release(uVar3);
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0bb770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b6c00,PTR_s_markJobStarted__11260c7f0);
  return;
}



/* Entry: 105269ff0; end: 105269ffb; -[SCTranscodingInProgressSentinelTracker markJobStarted:] */

void FUN_105269ff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b6c00,PTR_s_markJobStarted__11260c7f0);
  return;
}



/* Entry: 105269ffc; end: 10526a00f; -[SCTranscodingInProgressSentinelTracker markJobEnded:] */

void FUN_105269ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b6c00,PTR_s_markJobEnded__11260c7e8);
  return;
}



/* Entry: 10526a010; end: 10526a183;  */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */

void FUN_10526a010(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  char *unaff_x24;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_10526a184;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  pcStack_108 = FUN_10526a2f8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar7;
    param_4 = pcVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar7;
      param_4 = pcVar6;
    }
  }
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar4 = acStack_240;
  pcStack_188 = FUN_10526a46c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar2;
  pcVar7 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_220,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_208,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_1f0,pcVar3);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110872680,acStack_240,param_5);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar10 = 0;
    pcVar6 = pcVar4;
    pcVar7 = param_5;
    do {
      if ((&cStack_1d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_278 = auStack_220;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_278);
    _objc_release(param_4);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_248 = FUN_10526a72c;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_280 = unaff_x24;
    pcStack_270 = pcVar3;
    pcStack_268 = param_4;
    pcStack_260 = pcVar2;
    pcStack_258 = pcVar1;
    pppuStack_250 = &pppuStack_190;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    if (pcVar4 != (char *)0x0) {
      plVar9 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_2b8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_2a0,pcVar1);
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108727d0,&uStack_2d8,pcVar7);
      puStack_2c0 = &uStack_2d8;
      func_0x00010007e5dc(&puStack_2c0);
      lVar10 = 0;
      do {
        if ((&cStack_289)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar6);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_2a1 < '\0') {
        __ZdlPv(auStack_2b8[0]);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      __Unwind_Resume();
      uVar8 = *(undefined8 *)(pcVar1 + 0x20);
      _objc_retain(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10526a184; end: 10526a2f7;  */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */

void FUN_10526a184(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  char *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_10526a2f8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar4 = acStack_1c0;
  pcStack_108 = FUN_10526a46c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pcVar7 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1a0,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_188,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_158,3);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110872680,acStack_1c0,param_5);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar10 = 0;
    pcVar2 = pcVar4;
    pcVar7 = param_5;
    do {
      if ((&cStack_159)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_1c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_1f8 = auStack_1a0;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_1f8);
    _objc_release(param_4);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_1c8 = FUN_10526a72c;
    lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_200 = unaff_x24;
    pcStack_1f0 = pcVar3;
    pcStack_1e8 = param_4;
    pcStack_1e0 = pcVar6;
    pcStack_1d8 = pcVar5;
    pppuStack_1d0 = &ppuStack_110;
    _objc_retain(pcVar1);
    _objc_retain(pcVar2);
    if (pcVar4 != (char *)0x0) {
      plVar9 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_238,pcVar3);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar3 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_220,pcVar3);
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108727d0,&uStack_258,pcVar7);
      puStack_240 = &uStack_258;
      func_0x00010007e5dc(&puStack_240);
      lVar10 = 0;
      do {
        if ((&cStack_209)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar3 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      if (cStack_221 < '\0') {
        __ZdlPv(auStack_238[0]);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar1);
      __Unwind_Resume();
      uVar8 = *(undefined8 *)(pcVar3 + 0x20);
      _objc_retain(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
      return;
    }
    return;
  }
  return;
}


