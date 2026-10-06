/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053c7108; end: 1053c727b;  */

void FUN_1053c7108(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110882968,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_1053c7108(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 1053c727c; end: 1053c72e7;  */

void FUN_1053c727c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_1053c7108(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c72e8; end: 1053c745b;  */

/* WARNING: Removing unreachable block (ram,0x0001053c76fc) */

void FUN_1053c72e8(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *unaff_x24;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar6 = acStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar5 = pcVar4;
  pcVar7 = param_5;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(param_5);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    pcVar3 = "\x01";
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_110882a08);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar2 + 8);
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
      func_0x00010002b838(auStack_120,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_108,pcVar2);
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
      func_0x00010002b838(auStack_f0,pcVar2);
      acStack_140[0] = '\0';
      acStack_140[1] = '\0';
      acStack_140[2] = '\0';
      acStack_140[3] = '\0';
      acStack_140[4] = '\0';
      acStack_140[5] = '\0';
      acStack_140[6] = '\0';
      acStack_140[7] = '\0';
      acStack_140[8] = '\0';
      acStack_140[9] = '\0';
      acStack_140[10] = '\0';
      acStack_140[0xb] = '\0';
      acStack_140[0xc] = '\0';
      acStack_140[0xd] = '\0';
      acStack_140[0xe] = '\0';
      acStack_140[0xf] = '\0';
      acStack_140[0x10] = '\0';
      acStack_140[0x11] = '\0';
      acStack_140[0x12] = '\0';
      acStack_140[0x13] = '\0';
      acStack_140[0x14] = '\0';
      acStack_140[0x15] = '\0';
      acStack_140[0x16] = '\0';
      acStack_140[0x17] = '\0';
      func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
      pcVar3 = "\x01";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110882a08,acStack_140,param_6);
      puStack_128 = acStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar9 = 0;
      pcVar5 = pcVar6;
      pcVar7 = param_6;
      do {
        if ((&cStack_d9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = acStack_140;
      } while (lVar9 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_120);
    _objc_release(param_5);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume();
    _objc_retain(pcVar3);
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    if (pcVar2 != (char *)0x0) {
      FUN_1053c745c(pcVar2,pcVar3,pcVar5,pcVar7,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar7);
    _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
    return;
  }
  return;
}



/* Entry: 1053c745c; end: 1053c773b;  */

/* WARNING: Removing unreachable block (ram,0x0001053c76fc) */

void FUN_1053c745c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
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
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110882a08);
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
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882a08,acStack_c0,param_6);
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
      FUN_1053c745c(pcVar3,pcVar2,pcVar4,pcVar5,(long)(param_1 * 1000.0));
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



/* Entry: 1053c773c; end: 1053c77ef;  */

void FUN_1053c773c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_1053c745c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c77f0; end: 1053c7ad3;  */

/* WARNING: Removing unreachable block (ram,0x0001053c7a94) */

char * FUN_1053c77f0(long param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *unaff_x24;
  char *pcStack_210;
  undefined *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar5 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pcVar2 = "";
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
      func_0x00010002b838(acStack_a0,pcVar2);
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
      func_0x00010002b838(auStack_88,pcVar2);
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
      func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
      pcVar9 = (char *)(param_5 * 10);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882a58,acStack_c0,pcVar9);
      puStack_a8 = acStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar10 = 0;
      pcVar5 = pcVar3;
      do {
        if ((&cStack_59)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_c0;
      } while (lVar10 != -0x48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar12 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1053c7ad4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar8 = pcVar5;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar12;
  pcStack_f0 = pcVar3;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  puVar11 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar1 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar3);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar7 = "";
    pcVar12 = acStack_158;
    pcVar8 = acStack_158;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882aa8,pcVar8,pcVar9);
    pcStack_140 = pcVar12;
    func_0x00010007e5dc(&pcStack_140);
    lVar10 = 0;
    puVar11 = auStack_138;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar9 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    pcVar3 = pcVar9;
    __Unwind_Resume();
    pcStack_168 = FUN_1053c7d04;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_1a0 = unaff_x24;
    pcStack_198 = pcVar12;
    puStack_190 = puVar11;
    pcStack_188 = pcVar9;
    pcStack_180 = pcVar5;
    pcStack_178 = pcVar2;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      plVar1 = *(long **)(pcVar3 + 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110882af8);
      if ((int)plVar1 != 0) {
        plVar1 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_1c0,pcVar2);
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
        (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882af8,&uStack_1e0,(long)pcVar8 * 10);
        puStack_1c8 = (undefined1 *)&uStack_1e0;
        func_0x00010007e5dc(&puStack_1c8);
        if (cStack_1a9 < '\0') {
          __ZdlPv(auStack_1c0[0]);
        }
      }
    }
    pcVar2 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      pcVar5 = pcVar2;
      __Unwind_Resume();
      ppcVar6 = &pcStack_210;
      pcStack_1e8 = FUN_1053c7e9c;
      puStack_208 = PTR_PTR_1126e7f28;
      pcStack_210 = pcVar5;
      pcStack_200 = pcVar2;
      pcStack_1f8 = pcVar7;
      pppuStack_1f0 = &ppuStack_170;
      _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        pcVar2 = (char *)ppcVar6;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar6 + 8) = pcVar2;
      }
      return (char *)ppcVar6;
    }
    return pcVar2;
  }
  return pcVar9;
}



/* Entry: 1053c7ad4; end: 1053c7d03;  */

char * FUN_1053c7ad4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
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
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882aa8,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c7d04;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
    (**(code **)(*plVar7 + 0x28))(plVar7,&UNK_110882af8);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(pcVar3 + 8);
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
      func_0x00010002b838(auStack_100,pcVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882af8,&uStack_120,(long)pcVar4 * 10);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  ppcVar5 = &pcStack_150;
  pcStack_128 = FUN_1053c7e9c;
  puStack_148 = PTR_PTR_1126e7f28;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 1053c7d04; end: 1053c7e9b;  */

char * FUN_1053c7d04(long param_1,char *param_2,long param_3)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
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
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110882af8);
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
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882af8,&uStack_80,param_3 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_b0;
  pcStack_88 = FUN_1053c7e9c;
  puStack_a8 = PTR_PTR_1126e7f28;
  pcStack_b0 = pcVar3;
  pcStack_a0 = pcVar2;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar2 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar2;
  }
  return (char *)ppcVar4;
}



/* Entry: 1053c7e9c; end: 1053c7f0f; -[SCGrapheneCustomojiMetric2 init] */

undefined1 * FUN_1053c7e9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7f28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053c7f10; end: 1053c813f;  */

char * FUN_1053c7f10(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
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
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
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
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
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
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882c78,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c8140;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882cc8,pcVar7,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    puVar11 = auStack_118;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1053c8370;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar11;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882d18,&uStack_1c0,pcVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_1f0;
  pcStack_1c8 = FUN_1053c84e4;
  puStack_1e8 = PTR_PTR_1126e7f30;
  pcStack_1f0 = pcVar4;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar6;
  pppuStack_1d0 = &ppuStack_150;
  _objc_msgSendSuper2(&pcStack_1f0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 1053c8140; end: 1053c836f;  */

char * FUN_1053c8140(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
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
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882cc8,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c8370;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882d18,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  ppcVar5 = &pcStack_150;
  pcStack_128 = FUN_1053c84e4;
  puStack_148 = PTR_PTR_1126e7f30;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 1053c8370; end: 1053c84e3;  */

char * FUN_1053c8370(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
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
    plVar4 = *(long **)(param_1 + 8);
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110882d18,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_1053c84e4;
  puStack_a8 = PTR_PTR_1126e7f30;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 1053c84e4; end: 1053c8557; -[SCGrapheneBitmojiWebBuilderMetric2 init] */

undefined1 * FUN_1053c84e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053c8558; end: 1053c85cf;  */

void FUN_1053c8558(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110882db8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053c85d0; end: 1053c8743;  */

/* WARNING: Removing unreachable block (ram,0x0001053c89cc) */

void FUN_1053c85d0(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *unaff_x24;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcVar6 = acStack_140;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar1;
    pcVar5 = pcVar4;
    pcVar7 = param_5;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(param_5);
    if (pcVar2 != (char *)0x0) {
      plVar8 = *(long **)(pcVar2 + 8);
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
      func_0x00010002b838(auStack_120,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_108,pcVar2);
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
      func_0x00010002b838(auStack_f0,pcVar2);
      acStack_140[0] = '\0';
      acStack_140[1] = '\0';
      acStack_140[2] = '\0';
      acStack_140[3] = '\0';
      acStack_140[4] = '\0';
      acStack_140[5] = '\0';
      acStack_140[6] = '\0';
      acStack_140[7] = '\0';
      acStack_140[8] = '\0';
      acStack_140[9] = '\0';
      acStack_140[10] = '\0';
      acStack_140[0xb] = '\0';
      acStack_140[0xc] = '\0';
      acStack_140[0xd] = '\0';
      acStack_140[0xe] = '\0';
      acStack_140[0xf] = '\0';
      acStack_140[0x10] = '\0';
      acStack_140[0x11] = '\0';
      acStack_140[0x12] = '\0';
      acStack_140[0x13] = '\0';
      acStack_140[0x14] = '\0';
      acStack_140[0x15] = '\0';
      acStack_140[0x16] = '\0';
      acStack_140[0x17] = '\0';
      func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
      pcVar3 = "\x01";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110882e58,acStack_140,param_6);
      puStack_128 = acStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar9 = 0;
      pcVar5 = pcVar6;
      pcVar7 = param_6;
      do {
        if ((&cStack_d9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = acStack_140;
      } while (lVar9 != -0x48);
    }
    _objc_release(param_5);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_5);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != auStack_120);
      _objc_release(param_5);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      _objc_retain(pcVar3);
      _objc_retain(pcVar5);
      _objc_retain(pcVar7);
      if (pcVar2 != (char *)0x0) {
        FUN_1053c8744(pcVar2,pcVar3,pcVar5,pcVar7,(long)(param_1 * 1000.0));
      }
      _objc_release(pcVar7);
      _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053c8744; end: 1053c8a03;  */

/* WARNING: Removing unreachable block (ram,0x0001053c89cc) */

void FUN_1053c8744(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  char *unaff_x24;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
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
    pcVar1 = "\x01";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110882e58,acStack_c0,param_6);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    pcVar3 = pcVar2;
    pcVar4 = param_6;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
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
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    _objc_retain(pcVar4);
    if (pcVar2 != (char *)0x0) {
      FUN_1053c8744(pcVar2,pcVar1,pcVar3,pcVar4,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar4);
    _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  return;
}



/* Entry: 1053c8a04; end: 1053c8ab7;  */

void FUN_1053c8a04(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_1053c8744(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c8ab8; end: 1053c8d77;  */

/* WARNING: Removing unreachable block (ram,0x0001053c8d40) */

void FUN_1053c8ab8(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  char *pcVar13;
  char *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar7 = param_4;
  pcVar4 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
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
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882ea8,acStack_c0,param_6);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcVar13 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar13);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1053c8d78;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar9 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar13;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_5;
  pcStack_e0 = param_4;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar6 = "";
    pcVar13 = acStack_158;
    pcVar8 = acStack_158;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882ef8,pcVar8,pcVar4);
    pcStack_140 = pcVar13;
    func_0x00010007e5dc(&pcStack_140);
    lVar10 = 0;
    puVar11 = auStack_138;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar5 = pcVar4;
    __Unwind_Resume();
    pcStack_168 = FUN_1053c8fa8;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar6;
    pcVar3 = pcVar8;
    pcStack_1a0 = unaff_x24;
    pcStack_198 = pcVar13;
    puStack_190 = puVar11;
    pcStack_188 = pcVar4;
    pcStack_180 = pcVar7;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    puVar11 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar12 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_1d8;
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1c0,pcVar1);
      acStack_1f8[0] = '\0';
      acStack_1f8[1] = '\0';
      acStack_1f8[2] = '\0';
      acStack_1f8[3] = '\0';
      acStack_1f8[4] = '\0';
      acStack_1f8[5] = '\0';
      acStack_1f8[6] = '\0';
      acStack_1f8[7] = '\0';
      acStack_1f8[8] = '\0';
      acStack_1f8[9] = '\0';
      acStack_1f8[10] = '\0';
      acStack_1f8[0xb] = '\0';
      acStack_1f8[0xc] = '\0';
      acStack_1f8[0xd] = '\0';
      acStack_1f8[0xe] = '\0';
      acStack_1f8[0xf] = '\0';
      acStack_1f8[0x10] = '\0';
      acStack_1f8[0x11] = '\0';
      acStack_1f8[0x12] = '\0';
      acStack_1f8[0x13] = '\0';
      acStack_1f8[0x14] = '\0';
      acStack_1f8[0x15] = '\0';
      acStack_1f8[0x16] = '\0';
      acStack_1f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
      pcVar2 = "";
      pcVar13 = acStack_1f8;
      pcVar3 = acStack_1f8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882f48,pcVar3,pcVar9);
      pcStack_1e0 = pcVar13;
      func_0x00010007e5dc(&pcStack_1e0);
      lVar10 = 0;
      puVar11 = auStack_1d8;
      do {
        if ((&cStack_1a9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_208 = FUN_1053c91d8;
      lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar2;
      pcStack_240 = unaff_x24;
      pcStack_238 = pcVar13;
      puStack_230 = puVar11;
      pcStack_228 = pcVar1;
      pcStack_220 = pcVar8;
      pcStack_218 = pcVar6;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(pcVar2);
      if (pcVar4 != (char *)0x0) {
        plVar12 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_260,pcVar1);
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
        pcVar7 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882f98,&uStack_280,pcVar3);
        puStack_268 = (undefined1 *)&uStack_280;
        func_0x00010007e5dc(&puStack_268);
        if (cStack_249 < '\0') {
          __ZdlPv(auStack_260[0]);
        }
      }
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        _objc_release(pcVar2);
        __Unwind_Resume();
        _objc_retain(pcVar7);
        if (pcVar1 != (char *)0x0) {
          FUN_1053c91d8(pcVar1,pcVar7,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053c8d78; end: 1053c8fa7;  */

void FUN_1053c8d78(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
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
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_3;
  pcVar6 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882ef8,pcVar6,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c8fa8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
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
    func_0x00010002b838(auStack_100,pcVar2);
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
    pcVar5 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882f48,pcVar7,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    puVar11 = auStack_118;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1053c91d8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar11;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
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
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    pcVar3 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110882f98,&uStack_1c0,pcVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  _objc_retain(pcVar3);
  if (pcVar1 != (char *)0x0) {
    FUN_1053c91d8(pcVar1,pcVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 1053c8fa8; end: 1053c91d7;  */

void FUN_1053c8fa8(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882f48,pcVar4,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c91d8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    pcVar5 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110882f98,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    FUN_1053c91d8(pcVar4,pcVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 1053c91d8; end: 1053c934b;  */

void FUN_1053c91d8(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110882f98,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_1053c91d8(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 1053c934c; end: 1053c93b7;  */

void FUN_1053c934c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_1053c91d8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c93b8; end: 1053c93c3; +[SCCBitmojiFashionTray componentPath] */

undefined ** FUN_1053c93b8(void)

{
  return &PTR____CFConstantStringClassReference_110dd7078;
}



/* Entry: 1053c93c4; end: 1053c93f7; -[SCCBitmojiFashionTray initWithViewModel:componentContext:runtime:] */

void FUN_1053c93c4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7f38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1053c93f8; end: 1053c9447; -[SCCBitmojiFashionTray setViewModel:] */

void FUN_1053c93f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053c9448; end: 1053c948b; -[SCCBitmojiFashionTray viewModel] */

void FUN_1053c9448(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c948c; end: 1053c958b; -[SCCBitmojiFashionTrayContext initWithAvatarId:dismissTray:navigator:alertPresenter:surfaceType:parentSessionId:] */

undefined8 *
FUN_1053c948c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126e7f40;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x0001053c969c(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1053c958c; end: 1053c95a7; +[SCCBitmojiFashionTrayContext valdiMarshallableObjectDescriptor] */

void FUN_1053c958c(undefined8 *param_1)

{
  *param_1 = &PTR_s_avatarId_1108830a8;
  param_1[1] = &PTR_s_SCCBitmojiOutfitOption_110883210;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053c95a8; end: 1053c95db; -[SCCBitmojiFashionTrayOption init] */

void FUN_1053c95a8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7f48;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1053c95dc; end: 1053c95f7; +[SCCBitmojiFashionTrayOption valdiMarshallableObjectDescriptor] */

void FUN_1053c95dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_garment_110883240;
  param_1[1] = &PTR_s_SCCBitmojiGarmentOption_110883288;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053c95f8; end: 1053c9633; -[SCCBitmojiGarmentOption initWithOptionId:categoryKey:] */

void FUN_1053c95f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7f50;
  uStack_20 = param_1;
  func_0x0001053c969c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1053c9634; end: 1053c9647; +[SCCBitmojiGarmentOption valdiMarshallableObjectDescriptor] */

void FUN_1053c9634(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_optionId_1108832a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053c9648; end: 1053c967f; -[SCCBitmojiOutfitOption initWithOutfitMetadata:] */

void FUN_1053c9648(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7f58;
  uStack_20 = param_1;
  func_0x0001053c969c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1053c9680; end: 1053c96a3; +[SCCBitmojiOutfitOption valdiMarshallableObjectDescriptor] */

void FUN_1053c9680(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_outfitMetadata_110883300;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053c96a4; end: 1053c976f; -[SCBitmojiSelfieFetcher initWithImageFetcher:imageParamsBuilder:selfie3dFetcher:] */

undefined1 *
FUN_1053c96a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e7f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053c9770; end: 1053c9883; -[SCBitmojiSelfieFetcher fetchSelfie:contexts:feature:completionQueue:completion:] */

void FUN_1053c9770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053c9884;
  puStack_60 = &UNK_110883330;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  func_0x00010be13d20(param_1,param_2,param_3,param_4,param_5,1,param_6,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053c9884; end: 1053c9933;  */

void FUN_1053c9884(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_3,param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053c9934; end: 1053c9a47; -[SCBitmojiSelfieFetcher fetchDataForSelfie:contexts:feature:completionQueue:completion:] */

void FUN_1053c9934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1053c9a48;
  puStack_60 = &UNK_110883330;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  func_0x00010be13d20(param_1,param_2,param_3,param_4,param_5,0,param_6,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053c9a48; end: 1053c9af7;  */

void FUN_1053c9a48(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_3,param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053c9af8; end: 1053c9b5b; -[SCBitmojiSelfieFetcher fetchURLForSelfie:feature:] */

void FUN_1053c9af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf22300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfab040(uVar2,param_2,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053c9b5c; end: 1053c9bbf; -[SCBitmojiSelfieFetcher isSelfieCached:feature:] */

undefined8 FUN_1053c9b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c07d720();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1053c9bc0; end: 1053c9cc3; -[SCBitmojiSelfieFetcher _fetchSelfie:contexts:feature:shouldDecode:completionQueue:completion:] */

void FUN_1053c9bc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be2af20(param_1,param_2,param_3,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be13d60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053c9cc4; end: 1053c9d97; -[SCBitmojiSelfieFetcher _fetchSelfieWithSelfieRequest:contexts:feature:shouldDecode:completionQueue:completion:] */

void FUN_1053c9cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfaa0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c9d98; end: 1053c9f4f; -[SCBitmojiSelfieFetcher _handleInvalidSelfieRequest:completionQueue:completion:] */

void FUN_1053c9d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puVar2 = PTR_PTR_1126afd78;
  puStack_68 = &uStack_70;
  _objc_alloc(PTR_PTR_1126afd78);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1053c9f50;
  puStack_80 = &UNK_110847658;
  puStack_78 = &uStack_70;
  func_0x00010bffae00();
  if (param_5 != 0) {
    if (param_4 == 0) {
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x1053c9f90;
      puStack_f0 = &UNK_110883360;
      puStack_d8 = &uStack_70;
      _objc_retain(param_5);
      lStack_e0 = param_5;
      _objc_retain(param_3);
      uStack_e8 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_108);
      _objc_release(uStack_e8);
      lVar3 = lStack_e0;
    }
    else {
      puStack_d0 = puVar1;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1053c9f64;
      puStack_b8 = &UNK_110883360;
      puStack_a0 = &uStack_70;
      _objc_retain(param_5);
      lStack_a8 = param_5;
      _objc_retain(param_3);
      uStack_b0 = param_3;
      func_0x00010007380c(param_4,&puStack_d0);
      _objc_release(uStack_b0);
      lVar3 = lStack_a8;
    }
    _objc_release(lVar3);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053c9f50; end: 1053c9fbb;  */

void FUN_1053c9f50(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1053c9fbc; end: 1053c9ff7; -[SCBitmojiSelfieFetcher .cxx_destruct] */

void FUN_1053c9fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c9ff8; end: 1053ca08b; -[SCBitmojiSelfieIDModifier initWithMetricsLogger:] */

undefined1 * FUN_1053c9ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7f68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdecd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053ca08c; end: 1053ca133; -[SCBitmojiSelfieIDModifier modifyIdForRequest:] */

void FUN_1053ca08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ade0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0d0400(param_3);
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d04c0(param_1,param_2,uVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053ca134; end: 1053ca243; -[SCBitmojiSelfieIDModifier modifyId:modifier:userId:] */

void FUN_1053ca134(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (param_4 == 2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f5e7b8;
LAB_1053ca208:
    _objc_retain(ppuVar2);
    ppuVar1 = param_3;
  }
  else {
    if (param_4 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f4b618;
      goto LAB_1053ca208;
    }
    ppuVar2 = param_3;
    if (((param_4 != 0) || (param_5 == 0)) ||
       ((ppuVar1 = param_3, func_0x00010c067ec0(), param_3 != (undefined **)0x0 &&
        (((int)ppuVar1 == 0 || (0x9bf2ec < (int)ppuVar1)))))) goto LAB_1053ca21c;
    ppuVar2 = param_1;
    func_0x00010bdf9740(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar1 = (undefined **)param_1[1];
    func_0x00010c269d40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2f60();
  }
  _objc_release(ppuVar1);
LAB_1053ca21c:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1053ca244; end: 1053ca2b7; -[SCBitmojiSelfieIDModifier modifySuffixForId:selfieType:] */

void FUN_1053ca244(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 unaff_x20;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_retain(param_3);
    unaff_x20 = param_3;
  }
  else if (param_4 == 1) {
    unaff_x20 = param_3;
    func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110dd7098);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 1053ca2b8; end: 1053ca2c3; -[SCBitmojiSelfieIDModifier _createDefaultSelfieV2Ids] */

undefined ** FUN_1053ca2b8(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117e6d0;
}



/* Entry: 1053ca2c4; end: 1053ca353; -[SCBitmojiSelfieIDModifier _defaultSelfieV2IdForUserId:] */

void FUN_1053ca2c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc3520(param_3);
  uVar2 = param_3;
  func_0x00010c08fac0(param_3);
  _objc_release(param_3);
  func_0x0001064c9c58(uVar1,uVar2,0);
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (uVar1 & 0xffffffff) / uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,PTR_s_objectAtIndexedSubscript__112615968,(uVar1 & 0xffffffff) - uVar2 * uVar3);
  return;
}



/* Entry: 1053ca354; end: 1053ca383; -[SCBitmojiSelfieIDModifier .cxx_destruct] */

void FUN_1053ca354(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ca384; end: 1053ca3f7; -[SCBitmojiSelfieImageParamsBuilder initWithSelfieIdModifier:] */

undefined1 * FUN_1053ca384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7f70;
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



/* Entry: 1053ca3f8; end: 1053ca52f; -[SCBitmojiSelfieImageParamsBuilder buildImageParamsForSelfieRequest:] */

void FUN_1053ca3f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d04e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    func_0x00010c0d05c0(uVar4,param_2,uVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b58e0;
    _objc_opt_new(PTR_PTR_1126b58e0);
    func_0x00010c2bae20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf12ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8ea0(puVar3,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c14e120(param_3);
    func_0x00010c2b78c0(puVar3,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053ca530; end: 1053ca547; -[SCBitmojiSelfieImageParamsBuilder .cxx_destruct] */

void FUN_1053ca530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ca548; end: 1053ca54f; -[SCBitmojiSelfieProvider updateSelfieId:] */

void FUN_1053ca548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2875b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateLocalSelfieId__11267f790);
  return;
}



/* Entry: 1053ca550; end: 1053ca557; -[SCBitmojiSelfieProvider setSelfieId:] */

void FUN_1053ca550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1053ca558; end: 1053ca5ab; -[SCBitmojiSelfieProvider .cxx_destruct] */

void FUN_1053ca558(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ca5ac; end: 1053ca64f; -[SCBitmoji3DSelfieFetcher initWithFlatlandContentFetcher:selfieIdModifier:] */

undefined1 *
FUN_1053ca5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7f80;
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



/* Entry: 1053ca650; end: 1053ca7a7; -[SCBitmoji3DSelfieFetcher fetchSelfieRequest:contexts:feature:shouldDecode:completionQueue:completion:] */

void FUN_1053ca650(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      ppuVar4 = &PTR____CFConstantStringClassReference_110dd71d8;
      if ((int)uVar2 == 0) {
        ppuVar4 = (undefined **)0x0;
      }
      goto LAB_1053ca748;
    }
  }
  else {
    _objc_release(uVar1);
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110dd71b8;
LAB_1053ca748:
  func_0x00010be0f080(param_1,param_2,param_3,ppuVar4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053ca7a8; end: 1053ca7af; -[SCBitmoji3DSelfieFetcher isSelfieCached:] */

undefined8 FUN_1053ca7a8(void)

{
  return 0;
}



/* Entry: 1053ca7b0; end: 1053ca8b7; -[SCBitmoji3DSelfieFetcher _fetch3DSelfieRequest:preferredSelfieId:feature:shouldDecode:completionQueue:completion:] */

void FUN_1053ca7b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b2798;
  _objc_alloc_init(PTR_PTR_1126b2798);
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0d04e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar2 = param_4;
  }
  func_0x00010be0f060(param_1,param_2,param_3,lVar2,puVar1,param_5,param_6,param_7,param_8);
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ca8b8; end: 1053cabdf; -[SCBitmoji3DSelfieFetcher _fetch3DSelfieRequest:mappedSelfieId:cancelableGroup:feature:shouldDecode:completionQueue:completion:] */

void FUN_1053ca8b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9
                  )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_5;
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c130200();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c130200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126af5d8;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bf12ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120(param_3);
    func_0x00010bff6060();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b83f8;
    _objc_alloc(PTR_PTR_1126b83f8);
    func_0x00010c27dd80(param_3);
    func_0x00010c041b20(puVar5);
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1053cabe0;
    uStack_88 = 0x1053cabf0;
    uStack_80 = 0;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1053cabf8;
    puStack_c0 = &UNK_110883390;
    puStack_a0 = &uStack_a8;
    _objc_retain(param_9);
    uStack_b8 = param_9;
    ppuVar6 = &puStack_d8;
    puStack_b0 = &uStack_a8;
    _objc_retainBlock();
    puVar7 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    if (param_7 == 0) {
      func_0x00010be0f020();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be0f040();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = puStack_a0[5];
    puStack_a0[5] = param_1;
    _objc_release(uVar8);
    func_0x00010bef7460(param_5);
    func_0x00010bef7480(param_5);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053cabe0; end: 1053cabf7;  */

void FUN_1053cabe0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053cabf8; end: 1053cac2b;  */

void FUN_1053cabf8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1053cac2c; end: 1053cac3b;  */

void FUN_1053cac2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1053cac3c; end: 1053cada7; -[SCBitmoji3DSelfieFetcher _fetch3DSelfieImageForSceneRequest:selfieRequest:selfieId:feature:cancelableGroup:completionQueue:completion:] */

void FUN_1053cac3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfaa040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053cada8;
  puStack_78 = &UNK_1108833c0;
  uStack_58 = param_9;
  uStack_70 = param_4;
  uStack_68 = param_7;
  uStack_60 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053cada8; end: 1053cadbb;  */

void FUN_1053cada8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = *(undefined **)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(puVar6);
  _objc_retain(lVar3);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1053cabe0;
    uStack_60 = 0x1053cabf0;
    uStack_58 = 0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1053cb120;
    puStack_90 = &UNK_1108639e8;
    puStack_78 = puStack_88;
    func_0x00010c0c0800(param_2);
    puVar5 = PTR___dispatch_main_q_11034be20;
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puVar6 = puVar5;
    }
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1053cb15c;
    puStack_d0 = &UNK_110883410;
    _objc_retain(uVar2);
    uStack_c8 = uVar2;
    _objc_retain(lVar3);
    puStack_b0 = &uStack_80;
    lStack_b8 = lVar3;
    _objc_retain(uVar1);
    uStack_c0 = uVar1;
    func_0x00010007380c(puVar6,&puStack_e8);
    _objc_release(uStack_c0);
    _objc_release(lStack_b8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1053cadbc; end: 1053caf6f;  */

void FUN_1053cadbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_5 != 0) {
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1053cabe0;
    uStack_60 = 0x1053cabf0;
    uStack_58 = 0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1053cb120;
    puStack_90 = &UNK_1108639e8;
    puStack_78 = puStack_88;
    func_0x00010c0c0800(param_1);
    puVar2 = PTR___dispatch_main_q_11034be20;
    if (param_4 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_4 = puVar2;
    }
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1053cb15c;
    puStack_d0 = &UNK_110883410;
    _objc_retain(param_3);
    uStack_c8 = param_3;
    _objc_retain(param_5);
    puStack_b0 = &uStack_80;
    lStack_b8 = param_5;
    _objc_retain(param_2);
    uStack_c0 = param_2;
    func_0x00010007380c(param_4,&puStack_e8);
    _objc_release(uStack_c0);
    _objc_release(lStack_b8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1053caf70; end: 1053cb0db; -[SCBitmoji3DSelfieFetcher _fetch3DSelfieImageDataForSceneRequest:selfieRequest:selfieId:feature:cancelableGroup:completionQueue:completion:] */

void FUN_1053caf70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfaa080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053cb0dc;
  puStack_78 = &UNK_1108833c0;
  uStack_58 = param_9;
  uStack_70 = param_4;
  uStack_68 = param_7;
  uStack_60 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053cb0dc; end: 1053cb0ef;  */

void FUN_1053cb0dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = *(undefined **)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(puVar6);
  _objc_retain(lVar3);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1053cabe0;
    uStack_60 = 0x1053cabf0;
    uStack_58 = 0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1053cb120;
    puStack_90 = &UNK_1108639e8;
    puStack_78 = puStack_88;
    func_0x00010c0c0800(param_2);
    puVar5 = PTR___dispatch_main_q_11034be20;
    if (puVar6 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puVar6 = puVar5;
    }
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1053cb15c;
    puStack_d0 = &UNK_110883410;
    _objc_retain(uVar2);
    uStack_c8 = uVar2;
    _objc_retain(lVar3);
    puStack_b0 = &uStack_80;
    lStack_b8 = lVar3;
    _objc_retain(uVar1);
    uStack_c0 = uVar1;
    func_0x00010007380c(puVar6,&puStack_e8);
    _objc_release(uStack_c0);
    _objc_release(lStack_b8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1053cb0f0; end: 1053cb157; -[SCBitmoji3DSelfieFetcher .cxx_destruct] */

void FUN_1053cb0f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cb158; end: 1053cb15b;  */

void FUN_1053cb158(void)

{
  return;
}



/* Entry: 1053cb15c; end: 1053cb1a7;  */

void FUN_1053cb15c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001053cb1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1053cb1a8; end: 1053cb31b; -[SCBitmojiSelfieManager initWithGrpcClientFactory:selfieProvider:selfieFetcher:] */

undefined8 *
FUN_1053cb1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e7f88;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053cb31c; end: 1053cb3db;  */

void FUN_1053cb31c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1053cb3dc; end: 1053cb3e3; -[SCBitmojiSelfieManager fetchSelfie:contexts:feature:completionQueue:completion:] */

void FUN_1053cb3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchSelfie_contexts_feature_com_1125c81b0);
  return;
}



/* Entry: 1053cb3e4; end: 1053cb3eb; -[SCBitmojiSelfieManager fetchDataForSelfie:contexts:feature:completionQueue:completion:] */

void FUN_1053cb3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa62b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchDataForSelfie_contexts_feat_1125c7250);
  return;
}



/* Entry: 1053cb3ec; end: 1053cb3f3; -[SCBitmojiSelfieManager isSelfieCached:feature:] */

void FUN_1053cb3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_isSelfieCached_feature__1125fcfe0);
  return;
}



/* Entry: 1053cb3f4; end: 1053cb5ab; -[SCBitmojiSelfieManager changeSelfie:completion:] */

void FUN_1053cb3f4(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 == (undefined *)0x0) goto LAB_1053cb570;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1053cb5ac;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_4);
    puStack_48 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf60520();
    puVar2 = PTR_PTR_1126afd08;
    _objc_alloc(PTR_PTR_1126afd08);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058f80(puVar2);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b8400;
    _objc_alloc_init(PTR_PTR_1126b8400);
    func_0x00010c1fbc60();
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_88,auStack_70);
    puStack_80 = puVar1;
    lStack_78 = param_3;
    _objc_retain(param_4);
    func_0x00010c2831e0(puVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
LAB_1053cb570:
  _objc_release(param_4);
  return;
}



/* Entry: 1053cb5ac; end: 1053cb5bb;  */

void FUN_1053cb5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053cb5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1053cb5bc; end: 1053cb757;  */

void FUN_1053cb5bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1053cb698;
  puStack_70 = &UNK_110883440;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_3 == 0;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053cb758; end: 1053cb75f; -[SCBitmojiSelfieManager fetchURLForSelfie:feature:] */

void FUN_1053cb758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_fetchURLForSelfie_feature__1125c85c0);
  return;
}



/* Entry: 1053cb760; end: 1053cb7a7; -[SCBitmojiSelfieManager .cxx_destruct] */

void FUN_1053cb760(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cb7a8; end: 1053cb87f; -[SCBitmojiSelfiePackProviderImpl initWithCircumstanceEngine:metricsLogger:] */

undefined1 *
FUN_1053cb7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053cb880; end: 1053cb9a7; -[SCBitmojiSelfiePackProviderImpl fetchSelfiePack] */

void FUN_1053cb880(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126af7d0;
  _objc_opt_new(PTR_PTR_1126af7d0);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1195c0(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053cb9a8; end: 1053cb9fb;  */

void FUN_1053cb9a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053cb9fc; end: 1053cbc63; -[SCBitmojiSelfiePackProviderImpl _handleResultFromCOF:promise:] */

void FUN_1053cb9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b8408;
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_80 = 0;
  func_0x00010c008360(puVar2,param_2,uVar3,&lStack_80);
  lVar1 = lStack_80;
  _objc_retain(lStack_80);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = puVar2;
    func_0x00010c298be0();
    if ((int)puVar4 == 0) {
      func_0x00010c0af140(*(undefined8 *)(param_1 + 0x18),param_2,
                          &PTR____CFConstantStringClassReference_110dd7278,0);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110dd7218,0xffffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(param_4,param_2,puVar4);
    }
    else {
      puVar5 = puVar2;
      func_0x00010c15b160(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c15b180(puVar2);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_retain(puVar5);
      func_0x00010bf0a0e0(puVar6,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x1053cbd6c;
      puStack_60 = &UNK_110842ff8;
      puStack_58 = puVar6;
      _objc_retain();
      func_0x00010bf980c0(puVar5,param_2,&puStack_78);
      _objc_release(puVar5);
      puVar4 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(puStack_58);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar5 = puVar2;
      func_0x00010c298be0(puVar2);
      func_0x00010c0df820(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedf980(param_1,param_2,puVar4,puVar6);
      _objc_release(puVar6);
      func_0x00010c0af140(*(undefined8 *)(param_1 + 0x18),param_2,
                          &PTR____CFConstantStringClassReference_110dd7278,1);
      func_0x00010bf43d60(param_4,param_2,puVar4);
    }
    _objc_release(puVar4);
  }
  else {
    func_0x00010c0af140(*(undefined8 *)(param_1 + 0x18),param_2,
                        &PTR____CFConstantStringClassReference_110dd7278,0);
    func_0x00010bf43ca0(param_4,param_2,lVar1);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1053cbc64; end: 1053cbcef; -[SCBitmojiSelfiePackProviderImpl _updateSelfiePack:version:] */

void FUN_1053cbc64(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c15afa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 < param_4) {
      func_0x00010c1fbd40(param_1,param_2,param_4);
      func_0x00010c1fbc80(param_1,param_2,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053cbcf0; end: 1053cbcfb; -[SCBitmojiSelfiePackProviderImpl selfieIds] */

void FUN_1053cbcf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 1053cbcfc; end: 1053cbd03; -[SCBitmojiSelfiePackProviderImpl setSelfieIds:] */

void FUN_1053cbcfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1053cbd04; end: 1053cbd0f; -[SCBitmojiSelfiePackProviderImpl selfiePackVersion] */

void FUN_1053cbd04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1053cbd10; end: 1053cbd17; -[SCBitmojiSelfiePackProviderImpl setSelfiePackVersion:] */

void FUN_1053cbd10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1053cbd18; end: 1053cbe33; -[SCBitmojiSelfiePackProviderImpl .cxx_destruct] */

void FUN_1053cbd18(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053cbe34; end: 1053cbf17; -[SCBitmojiSelfieServicesEntryPoint _selfiePackProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053cbe34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b8420;
  _objc_alloc(PTR_PTR_1126b8420);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112722960;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf398e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053cbf18(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe9a0(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053cbf18; end: 1053cbf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053cbf18(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272296c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053cbf3c; end: 1053cc017; -[SCBitmojiSelfieServicesEntryPoint _selfieManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053cbf3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b8428;
  _objc_alloc(PTR_PTR_1126b8428);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112722964;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bfcfa00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272294c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9e520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019560(puVar1,param_2,lVar2,uVar3,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053cc018; end: 1053cc1e7; -[SCBitmojiSelfieServicesEntryPoint _selfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053cc018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126b8430;
  _objc_alloc();
  lVar8 = param_1;
  FUN_1053cbf18(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02be40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar8);
  puVar3 = PTR_PTR_1126b8438;
  _objc_alloc(PTR_PTR_1126b8438);
  func_0x00010c0441a0();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112722968;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053cc1e8;
  puStack_68 = &UNK_110883560;
  puVar4 = PTR_PTR_1126ae720;
  lStack_60 = lVar2;
  puStack_58 = puVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8448;
  _objc_alloc(PTR_PTR_1126b8448);
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112722958;
    _objc_loadWeakRetained(lVar8);
  }
  lVar6 = lVar8;
  func_0x00010bfe7720(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c940(puVar5,param_2,lVar7,puVar3,puVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053cc1e8; end: 1053cc217;  */

void FUN_1053cc1e8(void)

{
  _objc_alloc(PTR_PTR_1126b8440);
  func_0x00010c013740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


