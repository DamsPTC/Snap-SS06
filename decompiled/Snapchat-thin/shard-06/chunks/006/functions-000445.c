/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c88e54; end: 104c89113;  */

/* WARNING: Removing unreachable block (ram,0x000104c890dc) */

void FUN_104c88e54(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108440c0,acStack_c0,param_6);
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
  pcStack_c8 = FUN_104c89114;
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110844110,pcVar8,pcVar4);
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
    pcStack_168 = FUN_104c89344;
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
      pcVar2 = "\x01";
      pcVar3 = acStack_1f8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110844160,pcVar3,pcVar9);
      pcStack_1e0 = acStack_1f8;
      func_0x00010007e5dc(&pcStack_1e0);
      lVar10 = 0;
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
      __Unwind_Resume();
      _objc_retain(pcVar2);
      _objc_retain(pcVar3);
      if (pcVar1 != (char *)0x0) {
        FUN_104c89344(pcVar1,pcVar2,pcVar3,(long)(param_1 * 1000.0));
      }
      _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 104c89114; end: 104c89343;  */

void FUN_104c89114(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *unaff_x23;
  undefined8 *unaff_x24;
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
  pcVar5 = param_4;
  uVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110844110,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    puVar10 = auStack_78;
    uVar7 = param_5;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
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
  pcStack_a8 = FUN_104c89344;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar10;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
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
    pcVar4 = "\x01";
    pcVar6 = acStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110844160,pcVar6,uVar7);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    FUN_104c89344(pcVar2,pcVar4,pcVar6,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 104c89344; end: 104c89573;  */

void FUN_104c89344(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
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
    pcVar1 = "\x01";
    pcVar3 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110844160,pcVar3,param_5);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
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
  __Unwind_Resume();
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    FUN_104c89344(pcVar2,pcVar1,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104c89574; end: 104c89607;  */

void FUN_104c89574(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_104c89344(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c89608; end: 104c89837;  */

char * FUN_104c89608(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_2b0;
  undefined *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
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
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  pcVar5 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108441b0,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
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
  pcStack_a8 = FUN_104c89838;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
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
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110844200,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c89a68;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar9 = pcVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar9 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110844250,pcVar9,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c89c98;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_258,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_240,pcVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108442a0,&uStack_278,uVar10);
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
  _objc_release(pcVar9);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  __Unwind_Resume();
  ppcVar6 = &pcStack_2b0;
  pcStack_288 = FUN_104c89ec8;
  puStack_2a8 = PTR_PTR_1126e37d8;
  pcStack_2b0 = pcVar1;
  pcStack_2a0 = pcVar9;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_msgSendSuper2(&pcStack_2b0,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar1 = (char *)ppcVar6;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar6 + 8) = pcVar1;
  }
  return (char *)ppcVar6;
}



/* Entry: 104c89838; end: 104c89a67;  */

char * FUN_104c89838(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_210;
  undefined *puStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
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
  pcVar6 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
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
    pcVar6 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110844200,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
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
  pcStack_a8 = FUN_104c89a68;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  uVar9 = uVar8;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  puVar12 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
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
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110844250,pcVar7,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar10 = 0;
    puVar12 = auStack_118;
    uVar9 = uVar8;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c89c98;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar12;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108442a0,&uStack_1d8,uVar9);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar10 = 0;
    do {
      if ((&cStack_189)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  __Unwind_Resume();
  ppcVar4 = &pcStack_210;
  pcStack_1e8 = FUN_104c89ec8;
  puStack_208 = PTR_PTR_1126e37d8;
  pcStack_210 = pcVar1;
  pcStack_200 = pcVar7;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104c89a68; end: 104c89c97;  */

char * FUN_104c89a68(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
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
  pcVar5 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110844250,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
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
  pcStack_a8 = FUN_104c89c98;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108442a0,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar4 = &pcStack_170;
  pcStack_148 = FUN_104c89ec8;
  puStack_168 = PTR_PTR_1126e37d8;
  pcStack_170 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_170,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104c89c98; end: 104c89ec7;  */

char * FUN_104c89c98(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
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
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108442a0,&uStack_98,param_4);
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
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_104c89ec8;
  puStack_c8 = PTR_PTR_1126e37d8;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 104c89ec8; end: 104c89f3b; -[SCGrapheneBillboardStorageMetric2 init] */

undefined1 * FUN_104c89ec8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e37d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c89f3c; end: 104c8a0af;  */

/* WARNING: Removing unreachable block (ram,0x000104c8a568) */

char * FUN_104c89f3c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  char *unaff_x24;
  char *pcStack_680;
  undefined *puStack_678;
  undefined8 *puStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ****ppppuStack_650;
  code *pcStack_648;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 auStack_618 [2];
  char cStack_601;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 *puStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  undefined8 auStack_578 [2];
  char cStack_561;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 *puStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 *puStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ****ppppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ****ppppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ****ppppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  char acStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
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
  pcVar1 = param_2;
  pcVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
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
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar8 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar8 = pcVar2;
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
  pcStack_88 = FUN_104c8a0b0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar10 = pcVar8;
  pcVar4 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
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
    unaff_x24 = (char *)auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
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
    pcVar6 = "";
    pcVar10 = acStack_118;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar18 = 0;
    pcVar4 = param_4;
    do {
      if ((&cStack_c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar11 = acStack_1e0;
  pcStack_128 = FUN_104c8a2e0;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar8 = pcVar10;
  pcVar13 = pcVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_1c0,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_190,pcVar1);
    acStack_1e0[0] = '\0';
    acStack_1e0[1] = '\0';
    acStack_1e0[2] = '\0';
    acStack_1e0[3] = '\0';
    acStack_1e0[4] = '\0';
    acStack_1e0[5] = '\0';
    acStack_1e0[6] = '\0';
    acStack_1e0[7] = '\0';
    acStack_1e0[8] = '\0';
    acStack_1e0[9] = '\0';
    acStack_1e0[10] = '\0';
    acStack_1e0[0xb] = '\0';
    acStack_1e0[0xc] = '\0';
    acStack_1e0[0xd] = '\0';
    acStack_1e0[0xe] = '\0';
    acStack_1e0[0xf] = '\0';
    acStack_1e0[0x10] = '\0';
    acStack_1e0[0x11] = '\0';
    acStack_1e0[0x12] = '\0';
    acStack_1e0[0x13] = '\0';
    acStack_1e0[0x14] = '\0';
    acStack_1e0[0x15] = '\0';
    acStack_1e0[0x16] = '\0';
    acStack_1e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1e0,acStack_1c0,&lStack_178,3);
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1c8 = acStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    lVar18 = 0;
    pcVar8 = pcVar11;
    pcVar13 = param_5;
    do {
      if ((&cStack_179)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
      unaff_x24 = acStack_1e0;
    } while (lVar18 != -0x48);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar10);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  pcVar11 = acStack_1c0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar11);
  _objc_release(pcVar4);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8a5a0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar12 = pcVar8;
  pcVar15 = pcVar13;
  pcStack_220 = unaff_x24;
  pcStack_218 = pcVar11;
  pcStack_210 = pcVar2;
  pcStack_208 = pcVar4;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  puVar19 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = (char *)auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar5 = "";
    pcVar11 = acStack_278;
    pcVar12 = acStack_278;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_260 = pcVar11;
    func_0x00010007e5dc(&pcStack_260);
    lVar18 = 0;
    puVar19 = auStack_258;
    pcVar15 = pcVar13;
    do {
      if ((&cStack_229)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_104c8a7d0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar10 = pcVar12;
  pcVar13 = pcVar15;
  pcStack_2c0 = unaff_x24;
  pcStack_2b8 = pcVar11;
  puStack_2b0 = puVar19;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar1;
  ppppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  puVar19 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_2e0,pcVar1);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar6 = "";
    pcVar11 = acStack_318;
    pcVar10 = acStack_318;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_300 = pcVar11;
    func_0x00010007e5dc(&pcStack_300);
    lVar18 = 0;
    puVar19 = auStack_2f8;
    pcVar13 = pcVar15;
    do {
      if ((&cStack_2c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    if (cStack_2e1 < '\0') {
      __ZdlPv(auStack_2f8[0]);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar5);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_328 = FUN_104c8aa00;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar6;
    pcVar2 = pcVar10;
    pcVar3 = pcVar13;
    pcStack_360 = unaff_x24;
    pcStack_358 = pcVar11;
    puStack_350 = puVar19;
    pcStack_348 = pcVar1;
    pcStack_340 = pcVar12;
    pcStack_338 = pcVar5;
    ppppuStack_330 = &ppppuStack_290;
    _objc_retain(pcVar6);
    _objc_retain(pcVar10);
    puVar19 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar17 = *(long **)(pcVar4 + 8);
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
      unaff_x24 = (char *)auStack_398;
      func_0x00010002b838(auStack_398,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_380,pcVar1);
      acStack_3b8[0] = '\0';
      acStack_3b8[1] = '\0';
      acStack_3b8[2] = '\0';
      acStack_3b8[3] = '\0';
      acStack_3b8[4] = '\0';
      acStack_3b8[5] = '\0';
      acStack_3b8[6] = '\0';
      acStack_3b8[7] = '\0';
      acStack_3b8[8] = '\0';
      acStack_3b8[9] = '\0';
      acStack_3b8[10] = '\0';
      acStack_3b8[0xb] = '\0';
      acStack_3b8[0xc] = '\0';
      acStack_3b8[0xd] = '\0';
      acStack_3b8[0xe] = '\0';
      acStack_3b8[0xf] = '\0';
      acStack_3b8[0x10] = '\0';
      acStack_3b8[0x11] = '\0';
      acStack_3b8[0x12] = '\0';
      acStack_3b8[0x13] = '\0';
      acStack_3b8[0x14] = '\0';
      acStack_3b8[0x15] = '\0';
      acStack_3b8[0x16] = '\0';
      acStack_3b8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
      pcVar8 = "";
      pcVar11 = acStack_3b8;
      pcVar2 = acStack_3b8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_3a0 = pcVar11;
      func_0x00010007e5dc(&pcStack_3a0);
      lVar18 = 0;
      puVar19 = auStack_398;
      pcVar3 = pcVar13;
      do {
        if ((&cStack_369)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(pcVar10);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_381 < '\0') {
      __ZdlPv(auStack_398[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar6);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_3c8 = FUN_104c8ac30;
    lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar8;
    pcVar13 = pcVar2;
    pcVar12 = pcVar3;
    pcStack_400 = unaff_x24;
    pcStack_3f8 = pcVar11;
    puStack_3f0 = puVar19;
    pcStack_3e8 = pcVar1;
    pcStack_3e0 = pcVar10;
    pcStack_3d8 = pcVar6;
    ppppuStack_3d0 = &ppppuStack_330;
    _objc_retain(pcVar8);
    _objc_retain(pcVar2);
    puVar19 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar17 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x24 = (char *)auStack_438;
      func_0x00010002b838(auStack_438,pcVar1);
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
      func_0x00010002b838(auStack_420,pcVar1);
      acStack_458[0] = '\0';
      acStack_458[1] = '\0';
      acStack_458[2] = '\0';
      acStack_458[3] = '\0';
      acStack_458[4] = '\0';
      acStack_458[5] = '\0';
      acStack_458[6] = '\0';
      acStack_458[7] = '\0';
      acStack_458[8] = '\0';
      acStack_458[9] = '\0';
      acStack_458[10] = '\0';
      acStack_458[0xb] = '\0';
      acStack_458[0xc] = '\0';
      acStack_458[0xd] = '\0';
      acStack_458[0xe] = '\0';
      acStack_458[0xf] = '\0';
      acStack_458[0x10] = '\0';
      acStack_458[0x11] = '\0';
      acStack_458[0x12] = '\0';
      acStack_458[0x13] = '\0';
      acStack_458[0x14] = '\0';
      acStack_458[0x15] = '\0';
      acStack_458[0x16] = '\0';
      acStack_458[0x17] = '\0';
      func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
      pcVar4 = "";
      pcVar11 = acStack_458;
      pcVar13 = acStack_458;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_440 = pcVar11;
      func_0x00010007e5dc(&pcStack_440);
      lVar18 = 0;
      puVar19 = auStack_438;
      pcVar12 = pcVar3;
      do {
        if ((&cStack_409)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(pcVar2);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_421 < '\0') {
      __ZdlPv(auStack_438[0]);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar8);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_468 = FUN_104c8ae60;
    lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar4;
    pcVar10 = pcVar13;
    pcVar3 = pcVar12;
    pcStack_4a0 = unaff_x24;
    pcStack_498 = pcVar11;
    puStack_490 = puVar19;
    pcStack_488 = pcVar1;
    pcStack_480 = pcVar2;
    pcStack_478 = pcVar8;
    ppppuStack_470 = &ppppuStack_3d0;
    _objc_retain(pcVar4);
    _objc_retain(pcVar13);
    puVar19 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar17 = *(long **)(pcVar5 + 8);
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
      unaff_x24 = (char *)auStack_4d8;
      func_0x00010002b838(auStack_4d8,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_4c0,pcVar1);
      acStack_4f8[0] = '\0';
      acStack_4f8[1] = '\0';
      acStack_4f8[2] = '\0';
      acStack_4f8[3] = '\0';
      acStack_4f8[4] = '\0';
      acStack_4f8[5] = '\0';
      acStack_4f8[6] = '\0';
      acStack_4f8[7] = '\0';
      acStack_4f8[8] = '\0';
      acStack_4f8[9] = '\0';
      acStack_4f8[10] = '\0';
      acStack_4f8[0xb] = '\0';
      acStack_4f8[0xc] = '\0';
      acStack_4f8[0xd] = '\0';
      acStack_4f8[0xe] = '\0';
      acStack_4f8[0xf] = '\0';
      acStack_4f8[0x10] = '\0';
      acStack_4f8[0x11] = '\0';
      acStack_4f8[0x12] = '\0';
      acStack_4f8[0x13] = '\0';
      acStack_4f8[0x14] = '\0';
      acStack_4f8[0x15] = '\0';
      acStack_4f8[0x16] = '\0';
      acStack_4f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_4f8,auStack_4d8,&lStack_4a8,2);
      pcVar6 = "";
      pcVar11 = acStack_4f8;
      pcVar10 = acStack_4f8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_4e0 = pcVar11;
      func_0x00010007e5dc(&pcStack_4e0);
      lVar18 = 0;
      puVar19 = auStack_4d8;
      pcVar3 = pcVar12;
      do {
        if ((&cStack_4a9)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(pcVar13);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
      ___stack_chk_fail();
      _objc_release(pcVar13);
      if (cStack_4c1 < '\0') {
        __ZdlPv(auStack_4d8[0]);
      }
      _objc_release(pcVar13);
      _objc_release(pcVar4);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      pcStack_508 = FUN_104c8b090;
      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar6;
      pcVar2 = pcVar10;
      pcVar12 = pcVar3;
      pcStack_540 = unaff_x24;
      pcStack_538 = pcVar11;
      puStack_530 = puVar19;
      pcStack_528 = pcVar1;
      pcStack_520 = pcVar13;
      pcStack_518 = pcVar4;
      ppppuStack_510 = &ppppuStack_470;
      _objc_retain(pcVar6);
      _objc_retain(pcVar10);
      puVar19 = (undefined8 *)0x0;
      if (pcVar5 != (char *)0x0) {
        plVar17 = *(long **)(pcVar5 + 8);
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
        unaff_x24 = (char *)auStack_578;
        func_0x00010002b838(auStack_578,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_560,pcVar1);
        acStack_598[0] = '\0';
        acStack_598[1] = '\0';
        acStack_598[2] = '\0';
        acStack_598[3] = '\0';
        acStack_598[4] = '\0';
        acStack_598[5] = '\0';
        acStack_598[6] = '\0';
        acStack_598[7] = '\0';
        acStack_598[8] = '\0';
        acStack_598[9] = '\0';
        acStack_598[10] = '\0';
        acStack_598[0xb] = '\0';
        acStack_598[0xc] = '\0';
        acStack_598[0xd] = '\0';
        acStack_598[0xe] = '\0';
        acStack_598[0xf] = '\0';
        acStack_598[0x10] = '\0';
        acStack_598[0x11] = '\0';
        acStack_598[0x12] = '\0';
        acStack_598[0x13] = '\0';
        acStack_598[0x14] = '\0';
        acStack_598[0x15] = '\0';
        acStack_598[0x16] = '\0';
        acStack_598[0x17] = '\0';
        func_0x00010007e1e8(acStack_598,auStack_578,&lStack_548,2);
        pcVar8 = "";
        pcVar11 = acStack_598;
        pcVar2 = acStack_598;
        (**(code **)(*plVar17 + 0x18))(plVar17);
        pcStack_580 = pcVar11;
        func_0x00010007e5dc(&pcStack_580);
        lVar18 = 0;
        puVar19 = auStack_578;
        pcVar12 = pcVar3;
        do {
          if ((&cStack_549)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x30);
      }
      _objc_release(pcVar10);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
        return pcVar1;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_561 < '\0') {
        __ZdlPv(auStack_578[0]);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar6);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_5a8 = FUN_104c8b2c0;
      lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar13 = pcVar2;
      pcVar5 = pcVar12;
      pcStack_5e0 = unaff_x24;
      pcStack_5d8 = pcVar11;
      puStack_5d0 = puVar19;
      pcStack_5c8 = pcVar1;
      pcStack_5c0 = pcVar10;
      pcStack_5b8 = pcVar6;
      ppppuStack_5b0 = &ppppuStack_510;
      _objc_retain(pcVar8);
      cVar9 = (char)pcVar13;
      _objc_retain(pcVar2);
      puVar19 = (undefined8 *)0x0;
      if (pcVar4 != (char *)0x0) {
        plVar17 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_618,pcVar1);
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
        func_0x00010002b838(auStack_600,pcVar1);
        uStack_638 = 0;
        uStack_630 = 0;
        uStack_628 = 0;
        func_0x00010007e1e8(&uStack_638,auStack_618,&lStack_5e8,2);
        puVar14 = &uStack_638;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1108449c0);
        puStack_620 = &uStack_638;
        func_0x00010007e5dc(&puStack_620);
        lVar18 = 0;
        puVar19 = auStack_618;
        pcVar5 = pcVar12;
        do {
          if ((&cStack_5e9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar18));
          }
          cVar9 = (char)puVar14;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x30);
      }
      _objc_release(pcVar2);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        if (cStack_601 < '\0') {
          __ZdlPv(auStack_618[0]);
        }
        _objc_release(pcVar2);
        _objc_release(pcVar8);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        ppcVar7 = &pcStack_680;
        pcStack_648 = FUN_104c8b4f0;
        puStack_670 = puVar19;
        pcStack_668 = pcVar1;
        pcStack_660 = pcVar2;
        pcStack_658 = pcVar8;
        ppppuStack_650 = &ppppuStack_5b0;
        _objc_retain(pcVar5);
        puStack_678 = PTR_PTR_1126e37e0;
        pcStack_680 = pcVar6;
        _objc_msgSendSuper2(&pcStack_680,PTR_s_init_1125d9248);
        if (ppcVar7 != (char **)0x0) {
          *(char *)((long)ppcVar7 + 8) = cVar9;
          pcVar1 = pcVar5;
          func_0x00010bf51e00();
          uVar16 = *(undefined8 *)((long)ppcVar7 + 0x10);
          *(char **)((long)ppcVar7 + 0x10) = pcVar1;
          _objc_release(uVar16);
        }
        _objc_release(pcVar5);
        return (char *)ppcVar7;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c8a0b0; end: 104c8a2df;  */

/* WARNING: Removing unreachable block (ram,0x000104c8a568) */

char * FUN_104c8a0b0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  char *unaff_x24;
  char *pcStack_600;
  undefined *puStack_5f8;
  undefined8 *puStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  char *pcStack_560;
  char *pcStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  char acStack_518 [24];
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 *puStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_478 [24];
  char *pcStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
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
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  char acStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
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
  pcVar6 = param_3;
  pcVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
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
    unaff_x24 = (char *)auStack_78;
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
    pcVar6 = acStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar17 = 0;
    pcVar12 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
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
  pcVar10 = acStack_160;
  pcStack_a8 = FUN_104c8a2e0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar4 = pcVar6;
  pcVar13 = pcVar12;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_140,pcVar2);
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
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar2 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,acStack_140,&lStack_f8,3);
    pcVar8 = "";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar17 = 0;
    pcVar4 = pcVar10;
    pcVar13 = param_5;
    do {
      if ((&cStack_f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcVar10 = acStack_140;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar10);
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_104c8a5a0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar8;
  pcVar11 = pcVar4;
  pcVar15 = pcVar13;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar10;
  pcStack_190 = pcVar2;
  pcStack_188 = pcVar12;
  pcStack_180 = pcVar6;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar4);
  puVar19 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
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
    pcVar5 = "";
    pcVar10 = acStack_1f8;
    pcVar11 = acStack_1f8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_1e0 = pcVar10;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar17 = 0;
    puVar19 = auStack_1d8;
    pcVar15 = pcVar13;
    do {
      if ((&cStack_1a9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_104c8a7d0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar12 = pcVar11;
  pcVar13 = pcVar15;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar10;
  puStack_230 = puVar19;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar4;
  pcStack_218 = pcVar8;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  puVar19 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
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
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    pcVar6 = "";
    pcVar10 = acStack_298;
    pcVar12 = acStack_298;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_280 = pcVar10;
    func_0x00010007e5dc(&pcStack_280);
    lVar17 = 0;
    puVar19 = auStack_278;
    pcVar13 = pcVar15;
    do {
      if ((&cStack_249)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_104c8aa00;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar8 = pcVar12;
  pcVar3 = pcVar13;
  pcStack_2e0 = unaff_x24;
  pcStack_2d8 = pcVar10;
  puStack_2d0 = puVar19;
  pcStack_2c8 = pcVar1;
  pcStack_2c0 = pcVar11;
  pcStack_2b8 = pcVar5;
  ppppuStack_2b0 = &pppuStack_210;
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  puVar19 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = (char *)auStack_318;
    func_0x00010002b838(auStack_318,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    pcVar2 = "";
    pcVar10 = acStack_338;
    pcVar8 = acStack_338;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_320 = pcVar10;
    func_0x00010007e5dc(&pcStack_320);
    lVar17 = 0;
    puVar19 = auStack_318;
    pcVar3 = pcVar13;
    do {
      if ((&cStack_2e9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_348 = FUN_104c8ac30;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar13 = pcVar8;
  pcVar11 = pcVar3;
  pcStack_380 = unaff_x24;
  pcStack_378 = pcVar10;
  puStack_370 = puVar19;
  pcStack_368 = pcVar1;
  pcStack_360 = pcVar12;
  pcStack_358 = pcVar6;
  ppppuStack_350 = &ppppuStack_2b0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar8);
  puVar19 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = (char *)auStack_3b8;
    func_0x00010002b838(auStack_3b8,pcVar1);
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
    func_0x00010002b838(auStack_3a0,pcVar1);
    acStack_3d8[0] = '\0';
    acStack_3d8[1] = '\0';
    acStack_3d8[2] = '\0';
    acStack_3d8[3] = '\0';
    acStack_3d8[4] = '\0';
    acStack_3d8[5] = '\0';
    acStack_3d8[6] = '\0';
    acStack_3d8[7] = '\0';
    acStack_3d8[8] = '\0';
    acStack_3d8[9] = '\0';
    acStack_3d8[10] = '\0';
    acStack_3d8[0xb] = '\0';
    acStack_3d8[0xc] = '\0';
    acStack_3d8[0xd] = '\0';
    acStack_3d8[0xe] = '\0';
    acStack_3d8[0xf] = '\0';
    acStack_3d8[0x10] = '\0';
    acStack_3d8[0x11] = '\0';
    acStack_3d8[0x12] = '\0';
    acStack_3d8[0x13] = '\0';
    acStack_3d8[0x14] = '\0';
    acStack_3d8[0x15] = '\0';
    acStack_3d8[0x16] = '\0';
    acStack_3d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
    pcVar4 = "";
    pcVar10 = acStack_3d8;
    pcVar13 = acStack_3d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_3c0 = pcVar10;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar17 = 0;
    puVar19 = auStack_3b8;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_389)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_104c8ae60;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar4;
  pcVar12 = pcVar13;
  pcVar3 = pcVar11;
  pcStack_420 = unaff_x24;
  pcStack_418 = pcVar10;
  puStack_410 = puVar19;
  pcStack_408 = pcVar1;
  pcStack_400 = pcVar8;
  pcStack_3f8 = pcVar2;
  ppppuStack_3f0 = &ppppuStack_350;
  _objc_retain(pcVar4);
  _objc_retain(pcVar13);
  puVar19 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = (char *)auStack_458;
    func_0x00010002b838(auStack_458,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_440,pcVar1);
    acStack_478[0] = '\0';
    acStack_478[1] = '\0';
    acStack_478[2] = '\0';
    acStack_478[3] = '\0';
    acStack_478[4] = '\0';
    acStack_478[5] = '\0';
    acStack_478[6] = '\0';
    acStack_478[7] = '\0';
    acStack_478[8] = '\0';
    acStack_478[9] = '\0';
    acStack_478[10] = '\0';
    acStack_478[0xb] = '\0';
    acStack_478[0xc] = '\0';
    acStack_478[0xd] = '\0';
    acStack_478[0xe] = '\0';
    acStack_478[0xf] = '\0';
    acStack_478[0x10] = '\0';
    acStack_478[0x11] = '\0';
    acStack_478[0x12] = '\0';
    acStack_478[0x13] = '\0';
    acStack_478[0x14] = '\0';
    acStack_478[0x15] = '\0';
    acStack_478[0x16] = '\0';
    acStack_478[0x17] = '\0';
    func_0x00010007e1e8(acStack_478,auStack_458,&lStack_428,2);
    pcVar6 = "";
    pcVar10 = acStack_478;
    pcVar12 = acStack_478;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_460 = pcVar10;
    func_0x00010007e5dc(&pcStack_460);
    lVar17 = 0;
    puVar19 = auStack_458;
    pcVar3 = pcVar11;
    do {
      if ((&cStack_429)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar13);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar4);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_104c8b090;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar8 = pcVar12;
  pcVar11 = pcVar3;
  pcStack_4c0 = unaff_x24;
  pcStack_4b8 = pcVar10;
  puStack_4b0 = puVar19;
  pcStack_4a8 = pcVar1;
  pcStack_4a0 = pcVar13;
  pcStack_498 = pcVar4;
  ppppuStack_490 = &ppppuStack_3f0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  puVar19 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = (char *)auStack_4f8;
    func_0x00010002b838(auStack_4f8,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_4e0,pcVar1);
    acStack_518[0] = '\0';
    acStack_518[1] = '\0';
    acStack_518[2] = '\0';
    acStack_518[3] = '\0';
    acStack_518[4] = '\0';
    acStack_518[5] = '\0';
    acStack_518[6] = '\0';
    acStack_518[7] = '\0';
    acStack_518[8] = '\0';
    acStack_518[9] = '\0';
    acStack_518[10] = '\0';
    acStack_518[0xb] = '\0';
    acStack_518[0xc] = '\0';
    acStack_518[0xd] = '\0';
    acStack_518[0xe] = '\0';
    acStack_518[0xf] = '\0';
    acStack_518[0x10] = '\0';
    acStack_518[0x11] = '\0';
    acStack_518[0x12] = '\0';
    acStack_518[0x13] = '\0';
    acStack_518[0x14] = '\0';
    acStack_518[0x15] = '\0';
    acStack_518[0x16] = '\0';
    acStack_518[0x17] = '\0';
    func_0x00010007e1e8(acStack_518,auStack_4f8,&lStack_4c8,2);
    pcVar2 = "";
    pcVar10 = acStack_518;
    pcVar8 = acStack_518;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_500 = pcVar10;
    func_0x00010007e5dc(&pcStack_500);
    lVar17 = 0;
    puVar19 = auStack_4f8;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_4c9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(pcVar12);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar6);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcStack_528 = FUN_104c8b2c0;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar13 = pcVar8;
    pcVar5 = pcVar11;
    pcStack_560 = unaff_x24;
    pcStack_558 = pcVar10;
    puStack_550 = puVar19;
    pcStack_548 = pcVar1;
    pcStack_540 = pcVar12;
    pcStack_538 = pcVar6;
    ppppuStack_530 = &ppppuStack_490;
    _objc_retain(pcVar2);
    cVar9 = (char)pcVar13;
    _objc_retain(pcVar8);
    puVar19 = (undefined8 *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar18 = *(long **)(pcVar4 + 8);
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
      func_0x00010002b838(auStack_598,pcVar1);
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
      func_0x00010002b838(auStack_580,pcVar1);
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      func_0x00010007e1e8(&uStack_5b8,auStack_598,&lStack_568,2);
      puVar14 = &uStack_5b8;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_1108449c0);
      puStack_5a0 = &uStack_5b8;
      func_0x00010007e5dc(&puStack_5a0);
      lVar17 = 0;
      puVar19 = auStack_598;
      pcVar5 = pcVar11;
      do {
        if ((&cStack_569)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar17));
        }
        cVar9 = (char)puVar14;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_568) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_581 < '\0') {
        __ZdlPv(auStack_598[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar2);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      ppcVar7 = &pcStack_600;
      pcStack_5c8 = FUN_104c8b4f0;
      puStack_5f0 = puVar19;
      pcStack_5e8 = pcVar1;
      pcStack_5e0 = pcVar8;
      pcStack_5d8 = pcVar2;
      ppppuStack_5d0 = &ppppuStack_530;
      _objc_retain(pcVar5);
      puStack_5f8 = PTR_PTR_1126e37e0;
      pcStack_600 = pcVar6;
      _objc_msgSendSuper2(&pcStack_600,PTR_s_init_1125d9248);
      if (ppcVar7 != (char **)0x0) {
        *(char *)((long)ppcVar7 + 8) = cVar9;
        pcVar1 = pcVar5;
        func_0x00010bf51e00();
        uVar16 = *(undefined8 *)((long)ppcVar7 + 0x10);
        *(char **)((long)ppcVar7 + 0x10) = pcVar1;
        _objc_release(uVar16);
      }
      _objc_release(pcVar5);
      return (char *)ppcVar7;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c8a2e0; end: 104c8a59f;  */

/* WARNING: Removing unreachable block (ram,0x000104c8a568) */

char * FUN_104c8a2e0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  char cVar10;
  char *pcVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  char *pcVar18;
  char *unaff_x24;
  char *pcStack_560;
  undefined *puStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ****ppppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 *puStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  char acStack_478 [24];
  char *pcStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
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
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(acStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
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
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    pcVar9 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar18 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar18);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_104c8a5a0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar11 = pcVar9;
  pcVar6 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar18;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
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
    pcVar7 = "";
    pcVar18 = acStack_158;
    pcVar11 = acStack_158;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_140 = pcVar18;
    func_0x00010007e5dc(&pcStack_140);
    lVar15 = 0;
    puVar16 = auStack_138;
    pcVar6 = pcVar4;
    do {
      if ((&cStack_109)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_104c8a7d0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar11;
  pcVar13 = pcVar6;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar18;
  puStack_190 = puVar16;
  pcStack_188 = pcVar4;
  pcStack_180 = pcVar9;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar17 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
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
    pcVar18 = acStack_1f8;
    pcVar3 = acStack_1f8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_1e0 = pcVar18;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar15 = 0;
    puVar16 = auStack_1d8;
    pcVar13 = pcVar6;
    do {
      if ((&cStack_1a9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_104c8aa00;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar4 = pcVar3;
  pcVar5 = pcVar13;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar18;
  puStack_230 = puVar16;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar11;
  pcStack_218 = pcVar7;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar16 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar17 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    pcVar9 = "";
    pcVar18 = acStack_298;
    pcVar4 = acStack_298;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_280 = pcVar18;
    func_0x00010007e5dc(&pcStack_280);
    lVar15 = 0;
    puVar16 = auStack_278;
    pcVar5 = pcVar13;
    do {
      if ((&cStack_249)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_261 < '\0') {
      __ZdlPv(auStack_278[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_2a8 = FUN_104c8ac30;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar9;
    pcVar11 = pcVar4;
    pcVar13 = pcVar5;
    pcStack_2e0 = unaff_x24;
    pcStack_2d8 = pcVar18;
    puStack_2d0 = puVar16;
    pcStack_2c8 = pcVar1;
    pcStack_2c0 = pcVar3;
    pcStack_2b8 = pcVar2;
    ppppuStack_2b0 = &pppuStack_210;
    _objc_retain(pcVar9);
    _objc_retain(pcVar4);
    puVar16 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar17 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      unaff_x24 = (char *)auStack_318;
      func_0x00010002b838(auStack_318,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_300,pcVar1);
      acStack_338[0] = '\0';
      acStack_338[1] = '\0';
      acStack_338[2] = '\0';
      acStack_338[3] = '\0';
      acStack_338[4] = '\0';
      acStack_338[5] = '\0';
      acStack_338[6] = '\0';
      acStack_338[7] = '\0';
      acStack_338[8] = '\0';
      acStack_338[9] = '\0';
      acStack_338[10] = '\0';
      acStack_338[0xb] = '\0';
      acStack_338[0xc] = '\0';
      acStack_338[0xd] = '\0';
      acStack_338[0xe] = '\0';
      acStack_338[0xf] = '\0';
      acStack_338[0x10] = '\0';
      acStack_338[0x11] = '\0';
      acStack_338[0x12] = '\0';
      acStack_338[0x13] = '\0';
      acStack_338[0x14] = '\0';
      acStack_338[0x15] = '\0';
      acStack_338[0x16] = '\0';
      acStack_338[0x17] = '\0';
      func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
      pcVar7 = "";
      pcVar18 = acStack_338;
      pcVar11 = acStack_338;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_320 = pcVar18;
      func_0x00010007e5dc(&pcStack_320);
      lVar15 = 0;
      puVar16 = auStack_318;
      pcVar13 = pcVar5;
      do {
        if ((&cStack_2e9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar4);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    if (cStack_301 < '\0') {
      __ZdlPv(auStack_318[0]);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar9);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_348 = FUN_104c8ae60;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcVar3 = pcVar11;
    pcVar5 = pcVar13;
    pcStack_380 = unaff_x24;
    pcStack_378 = pcVar18;
    puStack_370 = puVar16;
    pcStack_368 = pcVar1;
    pcStack_360 = pcVar4;
    pcStack_358 = pcVar9;
    ppppuStack_350 = &ppppuStack_2b0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar11);
    puVar16 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar17 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      unaff_x24 = (char *)auStack_3b8;
      func_0x00010002b838(auStack_3b8,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_3a0,pcVar1);
      acStack_3d8[0] = '\0';
      acStack_3d8[1] = '\0';
      acStack_3d8[2] = '\0';
      acStack_3d8[3] = '\0';
      acStack_3d8[4] = '\0';
      acStack_3d8[5] = '\0';
      acStack_3d8[6] = '\0';
      acStack_3d8[7] = '\0';
      acStack_3d8[8] = '\0';
      acStack_3d8[9] = '\0';
      acStack_3d8[10] = '\0';
      acStack_3d8[0xb] = '\0';
      acStack_3d8[0xc] = '\0';
      acStack_3d8[0xd] = '\0';
      acStack_3d8[0xe] = '\0';
      acStack_3d8[0xf] = '\0';
      acStack_3d8[0x10] = '\0';
      acStack_3d8[0x11] = '\0';
      acStack_3d8[0x12] = '\0';
      acStack_3d8[0x13] = '\0';
      acStack_3d8[0x14] = '\0';
      acStack_3d8[0x15] = '\0';
      acStack_3d8[0x16] = '\0';
      acStack_3d8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
      pcVar2 = "";
      pcVar18 = acStack_3d8;
      pcVar3 = acStack_3d8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_3c0 = pcVar18;
      func_0x00010007e5dc(&pcStack_3c0);
      lVar15 = 0;
      puVar16 = auStack_3b8;
      pcVar5 = pcVar13;
      do {
        if ((&cStack_389)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar11);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar11);
    if (cStack_3a1 < '\0') {
      __ZdlPv(auStack_3b8[0]);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar7);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_3e8 = FUN_104c8b090;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar2;
    pcVar4 = pcVar3;
    pcVar13 = pcVar5;
    pcStack_420 = unaff_x24;
    pcStack_418 = pcVar18;
    puStack_410 = puVar16;
    pcStack_408 = pcVar1;
    pcStack_400 = pcVar11;
    pcStack_3f8 = pcVar7;
    ppppuStack_3f0 = &ppppuStack_350;
    _objc_retain(pcVar2);
    _objc_retain(pcVar3);
    puVar16 = (undefined8 *)0x0;
    if (pcVar6 != (char *)0x0) {
      plVar17 = *(long **)(pcVar6 + 8);
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
      unaff_x24 = (char *)auStack_458;
      func_0x00010002b838(auStack_458,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_440,pcVar1);
      acStack_478[0] = '\0';
      acStack_478[1] = '\0';
      acStack_478[2] = '\0';
      acStack_478[3] = '\0';
      acStack_478[4] = '\0';
      acStack_478[5] = '\0';
      acStack_478[6] = '\0';
      acStack_478[7] = '\0';
      acStack_478[8] = '\0';
      acStack_478[9] = '\0';
      acStack_478[10] = '\0';
      acStack_478[0xb] = '\0';
      acStack_478[0xc] = '\0';
      acStack_478[0xd] = '\0';
      acStack_478[0xe] = '\0';
      acStack_478[0xf] = '\0';
      acStack_478[0x10] = '\0';
      acStack_478[0x11] = '\0';
      acStack_478[0x12] = '\0';
      acStack_478[0x13] = '\0';
      acStack_478[0x14] = '\0';
      acStack_478[0x15] = '\0';
      acStack_478[0x16] = '\0';
      acStack_478[0x17] = '\0';
      func_0x00010007e1e8(acStack_478,auStack_458,&lStack_428,2);
      pcVar9 = "";
      pcVar18 = acStack_478;
      pcVar4 = acStack_478;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_460 = pcVar18;
      func_0x00010007e5dc(&pcStack_460);
      lVar15 = 0;
      puVar16 = auStack_458;
      pcVar13 = pcVar5;
      do {
        if ((&cStack_429)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(pcVar3);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      if (cStack_441 < '\0') {
        __ZdlPv(auStack_458[0]);
      }
      _objc_release(pcVar3);
      _objc_release(pcVar2);
      pcVar7 = pcVar1;
      __Unwind_Resume();
      pcStack_488 = FUN_104c8b2c0;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar11 = pcVar4;
      pcVar6 = pcVar13;
      pcStack_4c0 = unaff_x24;
      pcStack_4b8 = pcVar18;
      puStack_4b0 = puVar16;
      pcStack_4a8 = pcVar1;
      pcStack_4a0 = pcVar3;
      pcStack_498 = pcVar2;
      ppppuStack_490 = &ppppuStack_3f0;
      _objc_retain(pcVar9);
      cVar10 = (char)pcVar11;
      _objc_retain(pcVar4);
      puVar16 = (undefined8 *)0x0;
      if (pcVar7 != (char *)0x0) {
        plVar17 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_4f8,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_4e0,pcVar1);
        uStack_518 = 0;
        uStack_510 = 0;
        uStack_508 = 0;
        func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
        puVar12 = &uStack_518;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1108449c0);
        puStack_500 = &uStack_518;
        func_0x00010007e5dc(&puStack_500);
        lVar15 = 0;
        puVar16 = auStack_4f8;
        pcVar6 = pcVar13;
        do {
          if ((&cStack_4c9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar15));
          }
          cVar10 = (char)puVar12;
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(pcVar4);
      pcVar1 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
        ___stack_chk_fail();
        _objc_release(pcVar4);
        if (cStack_4e1 < '\0') {
          __ZdlPv(auStack_4f8[0]);
        }
        _objc_release(pcVar4);
        _objc_release(pcVar9);
        pcVar2 = pcVar1;
        __Unwind_Resume();
        ppcVar8 = &pcStack_560;
        pcStack_528 = FUN_104c8b4f0;
        puStack_550 = puVar16;
        pcStack_548 = pcVar1;
        pcStack_540 = pcVar4;
        pcStack_538 = pcVar9;
        ppppuStack_530 = &ppppuStack_490;
        _objc_retain(pcVar6);
        puStack_558 = PTR_PTR_1126e37e0;
        pcStack_560 = pcVar2;
        _objc_msgSendSuper2(&pcStack_560,PTR_s_init_1125d9248);
        if (ppcVar8 != (char **)0x0) {
          *(char *)((long)ppcVar8 + 8) = cVar10;
          pcVar1 = pcVar6;
          func_0x00010bf51e00();
          uVar14 = *(undefined8 *)((long)ppcVar8 + 0x10);
          *(char **)((long)ppcVar8 + 0x10) = pcVar1;
          _objc_release(uVar14);
        }
        _objc_release(pcVar6);
        return (char *)ppcVar8;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c8a5a0; end: 104c8a7cf;  */

char * FUN_104c8a5a0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_4a0;
  undefined *puStack_498;
  undefined8 *puStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  pcVar5 = param_3;
  uVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar15 = 0;
    puVar17 = auStack_78;
    uVar13 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
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
  pcStack_a8 = FUN_104c8a7d0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar5;
  uVar7 = uVar13;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
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
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar10 = acStack_138;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar15 = 0;
    puVar17 = auStack_118;
    uVar7 = uVar13;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c8aa00;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar11 = pcVar10;
  uVar13 = uVar7;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar17;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar15 = 0;
    puVar17 = auStack_1b8;
    uVar13 = uVar7;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8ac30;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar3;
  pcVar2 = pcVar11;
  uVar7 = uVar13;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar17;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar8;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar5 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar15 = 0;
    puVar17 = auStack_258;
    uVar7 = uVar13;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_104c8ae60;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar5;
  pcVar10 = pcVar2;
  uVar13 = uVar7;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar17;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar11;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar2);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar1);
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
    func_0x00010002b838(auStack_2e0,pcVar1);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar8 = "";
    unaff_x23 = acStack_318;
    pcVar10 = acStack_318;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar15 = 0;
    puVar17 = auStack_2f8;
    uVar13 = uVar7;
    do {
      if ((&cStack_2c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_104c8b090;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar11 = pcVar10;
  uVar7 = uVar13;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar17;
  pcStack_348 = pcVar1;
  pcStack_340 = pcVar2;
  pcStack_338 = pcVar5;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    pcVar3 = "";
    unaff_x23 = acStack_3b8;
    pcVar11 = acStack_3b8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar15 = 0;
    puVar17 = auStack_398;
    uVar7 = uVar13;
    do {
      if ((&cStack_369)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_104c8b2c0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar11;
  uVar13 = uVar7;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = puVar17;
  pcStack_3e8 = pcVar1;
  pcStack_3e0 = pcVar10;
  pcStack_3d8 = pcVar8;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(pcVar3);
  cVar9 = (char)pcVar2;
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_438,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_420,pcVar1);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&uStack_458,auStack_438,&lStack_408,2);
    puVar12 = &uStack_458;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108449c0);
    puStack_440 = &uStack_458;
    func_0x00010007e5dc(&puStack_440);
    lVar15 = 0;
    puVar17 = auStack_438;
    uVar13 = uVar7;
    do {
      if ((&cStack_409)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar15));
      }
      cVar9 = (char)puVar12;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_4a0;
  pcStack_468 = FUN_104c8b4f0;
  puStack_490 = puVar17;
  pcStack_488 = pcVar1;
  pcStack_480 = pcVar11;
  pcStack_478 = pcVar3;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(uVar13);
  puStack_498 = PTR_PTR_1126e37e0;
  pcStack_4a0 = pcVar5;
  _objc_msgSendSuper2(&pcStack_4a0,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    *(char *)((long)ppcVar6 + 8) = cVar9;
    uVar7 = uVar13;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(undefined8 *)((long)ppcVar6 + 0x10) = uVar7;
    _objc_release(uVar14);
  }
  _objc_release(uVar13);
  return (char *)ppcVar6;
}



/* Entry: 104c8a7d0; end: 104c8a9ff;  */

char * FUN_104c8a7d0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_400;
  undefined *puStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
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
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  pcVar5 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar15 = 0;
    puVar17 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
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
  pcStack_a8 = FUN_104c8aa00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar5;
  uVar13 = uVar7;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
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
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar10 = acStack_138;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar15 = 0;
    puVar17 = auStack_118;
    uVar13 = uVar7;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c8ac30;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar11 = pcVar10;
  uVar7 = uVar13;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar17;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar15 = 0;
    puVar17 = auStack_1b8;
    uVar7 = uVar13;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8ae60;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar3;
  pcVar2 = pcVar11;
  uVar13 = uVar7;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar17;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar8;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar5 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar15 = 0;
    puVar17 = auStack_258;
    uVar13 = uVar7;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_104c8b090;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar5;
  pcVar10 = pcVar2;
  uVar7 = uVar13;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar17;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar11;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar2);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar1);
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
    func_0x00010002b838(auStack_2e0,pcVar1);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar8 = "";
    unaff_x23 = acStack_318;
    pcVar10 = acStack_318;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar15 = 0;
    puVar17 = auStack_2f8;
    uVar7 = uVar13;
    do {
      if ((&cStack_2c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_104c8b2c0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar10;
  uVar13 = uVar7;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar17;
  pcStack_348 = pcVar1;
  pcStack_340 = pcVar2;
  pcStack_338 = pcVar5;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar8);
  cVar9 = (char)pcVar11;
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_398,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_380,pcVar1);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&uStack_3b8,auStack_398,&lStack_368,2);
    puVar12 = &uStack_3b8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108449c0);
    puStack_3a0 = &uStack_3b8;
    func_0x00010007e5dc(&puStack_3a0);
    lVar15 = 0;
    puVar17 = auStack_398;
    uVar13 = uVar7;
    do {
      if ((&cStack_369)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
      }
      cVar9 = (char)puVar12;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_400;
  pcStack_3c8 = FUN_104c8b4f0;
  puStack_3f0 = puVar17;
  pcStack_3e8 = pcVar1;
  pcStack_3e0 = pcVar10;
  pcStack_3d8 = pcVar8;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(uVar13);
  puStack_3f8 = PTR_PTR_1126e37e0;
  pcStack_400 = pcVar5;
  _objc_msgSendSuper2(&pcStack_400,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    *(char *)((long)ppcVar6 + 8) = cVar9;
    uVar7 = uVar13;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(undefined8 *)((long)ppcVar6 + 0x10) = uVar7;
    _objc_release(uVar14);
  }
  _objc_release(uVar13);
  return (char *)ppcVar6;
}



/* Entry: 104c8aa00; end: 104c8ac2f;  */

char * FUN_104c8aa00(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_360;
  undefined *puStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
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
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  pcVar8 = param_3;
  uVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    pcVar8 = acStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar15 = 0;
    puVar17 = auStack_78;
    uVar13 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
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
  pcStack_a8 = FUN_104c8ac30;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar10 = pcVar8;
  uVar7 = uVar13;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
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
    pcVar10 = acStack_138;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar15 = 0;
    puVar17 = auStack_118;
    uVar7 = uVar13;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c8ae60;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar11 = pcVar10;
  uVar13 = uVar7;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar17;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar8;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar15 = 0;
    puVar17 = auStack_1b8;
    uVar13 = uVar7;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8b090;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar2 = pcVar11;
  uVar7 = uVar13;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar17;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_240,pcVar1);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar8 = "";
    unaff_x23 = acStack_278;
    pcVar2 = acStack_278;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar15 = 0;
    puVar17 = auStack_258;
    uVar7 = uVar13;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_104c8b2c0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar2;
  uVar13 = uVar7;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar17;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar11;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar8);
  cVar9 = (char)pcVar10;
  _objc_retain(pcVar2);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_2f8,pcVar1);
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
    func_0x00010002b838(auStack_2e0,pcVar1);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar12 = &uStack_318;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108449c0);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar15 = 0;
    puVar17 = auStack_2f8;
    uVar13 = uVar7;
    do {
      if ((&cStack_2c9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar15));
      }
      cVar9 = (char)puVar12;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_360;
  pcStack_328 = FUN_104c8b4f0;
  puStack_350 = puVar17;
  pcStack_348 = pcVar1;
  pcStack_340 = pcVar2;
  pcStack_338 = pcVar8;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(uVar13);
  puStack_358 = PTR_PTR_1126e37e0;
  pcStack_360 = pcVar5;
  _objc_msgSendSuper2(&pcStack_360,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    *(char *)((long)ppcVar6 + 8) = cVar9;
    uVar7 = uVar13;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(undefined8 *)((long)ppcVar6 + 0x10) = uVar7;
    _objc_release(uVar14);
  }
  _objc_release(uVar13);
  return (char *)ppcVar6;
}



/* Entry: 104c8ac30; end: 104c8ae5f;  */

char * FUN_104c8ac30(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
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
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
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
  pcVar5 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar15 = 0;
    puVar17 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
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
  pcStack_a8 = FUN_104c8ae60;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar5;
  uVar13 = uVar7;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar17 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
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
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
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
    pcVar8 = "";
    unaff_x23 = acStack_138;
    pcVar10 = acStack_138;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar15 = 0;
    puVar17 = auStack_118;
    uVar13 = uVar7;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c8b090;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar11 = pcVar10;
  uVar7 = uVar13;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar17;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  puVar17 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar11 = acStack_1d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar15 = 0;
    puVar17 = auStack_1b8;
    uVar7 = uVar13;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c8b2c0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar11;
  uVar13 = uVar7;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar17;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar10;
  pcStack_1f8 = pcVar8;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  cVar9 = (char)pcVar2;
  _objc_retain(pcVar11);
  puVar17 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar16 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_258,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_240,pcVar1);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar12 = &uStack_278;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_1108449c0);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar15 = 0;
    puVar17 = auStack_258;
    uVar13 = uVar7;
    do {
      if ((&cStack_229)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
      }
      cVar9 = (char)puVar12;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_2c0;
  pcStack_288 = FUN_104c8b4f0;
  puStack_2b0 = puVar17;
  pcStack_2a8 = pcVar1;
  pcStack_2a0 = pcVar11;
  pcStack_298 = pcVar3;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(uVar13);
  puStack_2b8 = PTR_PTR_1126e37e0;
  pcStack_2c0 = pcVar5;
  _objc_msgSendSuper2(&pcStack_2c0,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    *(char *)((long)ppcVar6 + 8) = cVar9;
    uVar7 = uVar13;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(undefined8 *)((long)ppcVar6 + 0x10) = uVar7;
    _objc_release(uVar14);
  }
  _objc_release(uVar13);
  return (char *)ppcVar6;
}



/* Entry: 104c8ae60; end: 104c8b08f;  */

char * FUN_104c8ae60(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
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
  uVar12 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar16 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar14 = 0;
    puVar16 = auStack_78;
    uVar12 = param_4;
    do {
      if ((&cStack_49)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
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
  pcStack_a8 = FUN_104c8b090;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar4;
  uVar6 = uVar12;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar16;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar16 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
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
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar9 = acStack_138;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar14 = 0;
    puVar16 = auStack_118;
    uVar6 = uVar12;
    do {
      if ((&cStack_e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
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
  pcStack_148 = FUN_104c8b2c0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar9;
  uVar12 = uVar6;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar16;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  cVar8 = (char)pcVar10;
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_1b8,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar11 = &uStack_1d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1108449c0);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar16 = auStack_1b8;
    uVar12 = uVar6;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      cVar8 = (char)puVar11;
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_220;
  pcStack_1e8 = FUN_104c8b4f0;
  puStack_210 = puVar16;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar9;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(uVar12);
  puStack_218 = PTR_PTR_1126e37e0;
  pcStack_220 = pcVar4;
  _objc_msgSendSuper2(&pcStack_220,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    *(char *)((long)ppcVar5 + 8) = cVar8;
    uVar6 = uVar12;
    func_0x00010bf51e00();
    uVar13 = *(undefined8 *)((long)ppcVar5 + 0x10);
    *(undefined8 *)((long)ppcVar5 + 0x10) = uVar6;
    _objc_release(uVar13);
  }
  _objc_release(uVar12);
  return (char *)ppcVar5;
}



/* Entry: 104c8b090; end: 104c8b2bf;  */

char * FUN_104c8b090(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
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
  pcVar7 = param_3;
  uVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar5 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
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
  pcStack_a8 = FUN_104c8b2c0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  uVar10 = uVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  cVar6 = (char)pcVar8;
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_118,pcVar2);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar9 = &uStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108449c0);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar10 = uVar5;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      cVar6 = (char)puVar9;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_180;
  pcStack_148 = FUN_104c8b4f0;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(uVar10);
  puStack_178 = PTR_PTR_1126e37e0;
  pcStack_180 = pcVar3;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    *(char *)((long)ppcVar4 + 8) = cVar6;
    uVar5 = uVar10;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar5;
    _objc_release(uVar11);
  }
  _objc_release(uVar10);
  return (char *)ppcVar4;
}



/* Entry: 104c8b2c0; end: 104c8b4ef;  */

char * FUN_104c8b2c0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
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
  pcVar1 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  cVar5 = (char)pcVar1;
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
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar6 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108449c0);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      cVar5 = (char)puVar6;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_e0;
  pcStack_a8 = FUN_104c8b4f0;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  puStack_d8 = PTR_PTR_1126e37e0;
  pcStack_e0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    *(char *)((long)ppcVar3 + 8) = cVar5;
    uVar4 = uVar7;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined8 *)((long)ppcVar3 + 0x10) = uVar4;
    _objc_release(uVar8);
  }
  _objc_release(uVar7);
  return (char *)ppcVar3;
}



/* Entry: 104c8b4f0; end: 104c8b577; -[SCBillboardHoldout initWithIsUserInHoldout:holdoutConfig:] */

undefined1 *
FUN_104c8b4f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e37e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104c8b578; end: 104c8b59b; -[SCBillboardHoldout copyWithZone:] */

undefined8 FUN_104c8b578(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c8b59c; end: 104c8b5ff; -[SCBillboardHoldout hash] */

ulong * FUN_104c8b59c(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_104c8b684;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_104c8b684;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_104c8b684;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_104c8b684:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104c8b600; end: 104c8b69f; -[SCBillboardHoldout isEqual:] */

long FUN_104c8b600(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104c8b684;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104c8b684;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104c8b684;
    }
  }
  lVar3 = 1;
LAB_104c8b684:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104c8b6a0; end: 104c8b6a7; -[SCBillboardHoldout isUserInHoldout] */

undefined1 FUN_104c8b6a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104c8b6a8; end: 104c8b6af; -[SCBillboardHoldout holdoutConfig] */

undefined8 FUN_104c8b6a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c8b6b0; end: 104c8b6bb; -[SCBillboardHoldout .cxx_destruct] */

void FUN_104c8b6b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104c8b6bc; end: 104c8b74b; +[SCBillboardHoldoutConfig excludedFromHoldoutWithCampaignCOFNames:categories:] */

void FUN_104c8b6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae8f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c8b74c; end: 104c8b7e3; +[SCBillboardHoldoutConfig includedInHoldoutWithCampaignCOFNames:categories:] */

void FUN_104c8b74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae8f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c8b7e4; end: 104c8b807; -[SCBillboardHoldoutConfig copyWithZone:] */

undefined8 FUN_104c8b7e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c8b808; end: 104c8b897; -[SCBillboardHoldoutConfig hash] */

void FUN_104c8b808(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e37e8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c8b898; end: 104c8b8db; -[SCBillboardHoldoutConfig internalInit] */

void FUN_104c8b898(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e37e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c8b8dc; end: 104c8b9c3; -[SCBillboardHoldoutConfig isEqual:] */

long FUN_104c8b8dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104c8b99c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104c8b9a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104c8b9a8;
            }
            goto LAB_104c8b99c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104c8b9a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104c8b9c4; end: 104c8ba53; -[SCBillboardHoldoutConfig matchExcludedFromHoldout:includedInHoldout:] */

void FUN_104c8b9c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_104c8ba38;
    lVar2 = 0x28;
    lVar3 = 0x20;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_104c8ba38;
    lVar2 = 0x18;
    lVar3 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar3),*(undefined8 *)(param_1 + lVar2));
LAB_104c8ba38:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c8ba54; end: 104c8ba9b; -[SCBillboardHoldoutConfig .cxx_destruct] */

void FUN_104c8ba54(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104c8ba9c; end: 104c8bb4f; -[SCBillboardCampaignSnapshotSortingObject initWithOriginalSnapshotIndex:campaignSnapshot:cooldownCapStorageUnit:] */

undefined1 *
FUN_104c8ba9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e37f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 104c8bb50; end: 104c8bb73; -[SCBillboardCampaignSnapshotSortingObject copyWithZone:] */

undefined8 FUN_104c8bb50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104c8bb74; end: 104c8bbf3; -[SCBillboardCampaignSnapshotSortingObject hash] */

long * FUN_104c8bb74(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_104c8bc84:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104c8bc90;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104c8bc90;
        }
        goto LAB_104c8bc84;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104c8bc90:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 104c8bbf4; end: 104c8bcab; -[SCBillboardCampaignSnapshotSortingObject isEqual:] */

long FUN_104c8bbf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104c8bc84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104c8bc90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104c8bc90;
        }
        goto LAB_104c8bc84;
      }
    }
    lVar3 = 0;
  }
LAB_104c8bc90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104c8bcac; end: 104c8bcb3; -[SCBillboardCampaignSnapshotSortingObject originalSnapshotIndex] */

undefined8 FUN_104c8bcac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c8bcb4; end: 104c8bcbb; -[SCBillboardCampaignSnapshotSortingObject campaignSnapshot] */

undefined8 FUN_104c8bcb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c8bcbc; end: 104c8bcc3; -[SCBillboardCampaignSnapshotSortingObject cooldownCapStorageUnit] */

undefined8 FUN_104c8bcbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104c8bcc4; end: 104c8bcf3; -[SCBillboardCampaignSnapshotSortingObject .cxx_destruct] */

void FUN_104c8bcc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104c8bcf4; end: 104c8bd5b; +[SCBillboardPbCampaign descriptor] */

void FUN_104c8bcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef290,
                        &PTR____CFConstantStringClassReference_110dabff8,
                        &PTR_s_com_snapchat_billboard_1130a95f0,&PTR_s_campaignId_1130a9708,10,0x48,
                        0x1c);
    puRam00000001136b8698 = puVar1;
  }
  return;
}



/* Entry: 104c8bd5c; end: 104c8bde7; +[SCBillboardPbCampaignUXConfig descriptor] */

undefined * FUN_104c8bd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef2e0,
                        &PTR____CFConstantStringClassReference_110dac018,
                        &PTR_s_com_snapchat_billboard_1130a95f0,&PTR_s_pacConfig_1130a9628,3,0x20,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136b86a0 = puVar1;
  }
  return puRam00000001136b86a0;
}



/* Entry: 104c8bde8; end: 104c8be4f; +[SCBillboardPbCampaignCooldownCapConfig descriptor] */

void FUN_104c8bde8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef330,
                        &PTR____CFConstantStringClassReference_110dac038,
                        &PTR_s_com_snapchat_billboard_1130a95f0,&PTR_s_category_1130a9688,4,0x28,
                        0x1c);
    puRam00000001136b86a8 = puVar1;
  }
  return;
}



/* Entry: 104c8be50; end: 104c8bedb; +[SCBillboardPbCampaignLaunchConfig descriptor] */

undefined * FUN_104c8be50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef380,
                        &PTR____CFConstantStringClassReference_110dac058,
                        &PTR_s_com_snapchat_billboard_1130a95f0,&PTR_s_fstConfig_1130a9608,1,0x10,
                        0x1c);
    func_0x00010c229040();
    puRam00000001136b86b0 = puVar1;
  }
  return puRam00000001136b86b0;
}



/* Entry: 104c8bedc; end: 104c8bf57;  */

undefined * FUN_104c8bedc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b86b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dac078,
                        &UNK_10dd8a6e0,&UNK_10dd8a718,6,FUN_104c8bf58,0);
    do {
      if (puRam00000001136b86b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b86b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b86b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b86b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b86b8;
}



/* Entry: 104c8bf58; end: 104c8bf63;  */

bool FUN_104c8bf58(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 104c8bf64; end: 104c8bfcb; +[SCBillboardPbFullScreenTakeoverLaunchConfig descriptor] */

void FUN_104c8bf64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef420,
                        &PTR____CFConstantStringClassReference_110dac098,
                        &PTR_s_com_snapchat_billboard_1130a9848,&PTR_s_launchPagesArray_1130a9860,1,
                        0x10,0x1c);
    puRam00000001136b86c0 = puVar1;
  }
  return;
}



/* Entry: 104c8bfcc; end: 104c8c033; +[SCBillboardPbCooldownCapStorageUnit descriptor] */

void FUN_104c8bfcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef4c0,
                        &PTR____CFConstantStringClassReference_110dac0b8,
                        &PTR_s_com_snapchat_billboard_1130a9880,&PTR_s_impressionCount_1130a98d8,0xb
                        ,0x50,0x1c);
    puRam00000001136b86c8 = puVar1;
  }
  return;
}



/* Entry: 104c8c034; end: 104c8c09b; +[SCBillboardPbStorageMetadata descriptor] */

void FUN_104c8c034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef510,
                        &PTR____CFConstantStringClassReference_110dac0d8,
                        &PTR_s_com_snapchat_billboard_1130a9880,&PTR_s_version_1130a9898,2,0xc,0x1c)
    ;
    puRam00000001136b86d0 = puVar1;
  }
  return;
}



/* Entry: 104c8c09c; end: 104c8c103; +[SCBillboardPbCampaignCategories descriptor] */

void FUN_104c8c09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef5b0,
                        &PTR____CFConstantStringClassReference_110dac0f8,
                        &PTR_s_com_snapchat_billboard_1130a9a38,&PTR_s_categoriesArray_1130a9a50,1,
                        0x10,0x1c);
    puRam00000001136b86d8 = puVar1;
  }
  return;
}



/* Entry: 104c8c104; end: 104c8c16b; +[SCBillboardPbCampaignCategory descriptor] */

void FUN_104c8c104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef600,
                        &PTR____CFConstantStringClassReference_110dac118,
                        &PTR_s_com_snapchat_billboard_1130a9a38,&PTR_s_categoryName_1130a9a70,4,0x20
                        ,0x1c);
    puRam00000001136b86e0 = puVar1;
  }
  return;
}



/* Entry: 104c8c16c; end: 104c8c1d3; +[SCBillboardPbCampaignsPriority descriptor] */

void FUN_104c8c16c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef6a0,
                        &PTR____CFConstantStringClassReference_110dac138,
                        &PTR_s_com_snapchat_billboard_1130a9af0,
                        &PTR_s_campaignIdsByPriorityArray_1130a9b68,4,0x20,0x1c);
    puRam00000001136b86e8 = puVar1;
  }
  return;
}



/* Entry: 104c8c1d4; end: 104c8c2b7; +[SCBillboardPbCampaignSnapshot descriptor] */

void FUN_104c8c1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b86f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef6f0,
                        &PTR____CFConstantStringClassReference_110dac158,
                        &PTR_s_com_snapchat_billboard_1130a9af0,&PTR_s_campaignCofName_1130a9b08,3,
                        0x18,0x1c);
    puRam00000001136b86f0 = puVar1;
  }
  return;
}



/* Entry: 104c8c2b8; end: 104c8c2c3;  */

bool FUN_104c8c2b8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104c8c2c4; end: 104c8c3bb; +[SCBillboardPbFeedHeaderPromptUXConfig descriptor] */

undefined * FUN_104c8c2c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef790,
                        &PTR____CFConstantStringClassReference_110dac198,
                        &PTR_s_com_snapchat_billboard_1130a9be8,&PTR_s_primaryTextKey_1130a9c00,0xb,
                        0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b8700 = puVar1;
  }
  return puRam00000001136b8700;
}



/* Entry: 104c8c3bc; end: 104c8c3c7;  */

bool FUN_104c8c3bc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104c8c3c8; end: 104c8c443;  */

undefined * FUN_104c8c3c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8710 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dac1d8,
                        &UNK_10dd8a7dc,&UNK_10dd8a7f8,3,FUN_104c8c444,0);
    do {
      if (puRam00000001136b8710 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8710;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8710,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8710 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8710;
}



/* Entry: 104c8c444; end: 104c8c44f;  */

bool FUN_104c8c444(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104c8c450; end: 104c8c4b7; +[SCBillboardPbFullScreenTakeoverUXConfig descriptor] */

void FUN_104c8c450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef830,
                        &PTR____CFConstantStringClassReference_110dac1f8,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_mainImage_1130a9f20,7,0x40,
                        0x1c);
    puRam00000001136b8718 = puVar1;
  }
  return;
}



/* Entry: 104c8c4b8; end: 104c8c543; +[SCBillboardPbFullScreenTakeoverUIComponent descriptor] */

undefined * FUN_104c8c4b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef880,
                        &PTR____CFConstantStringClassReference_110dac218,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_image_1130a9dc0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136b8720 = puVar1;
  }
  return puRam00000001136b8720;
}



/* Entry: 104c8c544; end: 104c8c5bf; +[SCBillboardPbFullScreenTakeoverImage descriptor] */

undefined * FUN_104c8c544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef8d0,
                        &PTR____CFConstantStringClassReference_110dac238,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_imageURL_1130a9ea0,4,0x28,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001136b8728 = puVar1;
  }
  return puRam00000001136b8728;
}



/* Entry: 104c8c5c0; end: 104c8c627; +[SCBillboardPbFullSceenTakeoverTitle descriptor] */

void FUN_104c8c5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef920,
                        &PTR____CFConstantStringClassReference_110dac258,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_textKey_1130a9d80,1,0x10,0x1c
                       );
    puRam00000001136b8730 = puVar1;
  }
  return;
}



/* Entry: 104c8c628; end: 104c8c68f; +[SCBillboardPbFullSceenTakeoverText descriptor] */

void FUN_104c8c628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef970,
                        &PTR____CFConstantStringClassReference_110dac278,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_textKey_1130a9e40,3,0x18,0x1c
                       );
    puRam00000001136b8738 = puVar1;
  }
  return;
}



/* Entry: 104c8c690; end: 104c8c6f7; +[SCBillboardPbFullSceenTakeoverClickButton descriptor] */

void FUN_104c8c690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129ef9c0,
                        &PTR____CFConstantStringClassReference_110dac298,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_textKey_1130a9e00,2,0x18,0x1c
                       );
    puRam00000001136b8740 = puVar1;
  }
  return;
}



/* Entry: 104c8c6f8; end: 104c8c75f; +[SCBillboardPbFullSceenTakeoverDismissButton descriptor] */

void FUN_104c8c6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efa10,
                        &PTR____CFConstantStringClassReference_110dac2b8,
                        &PTR_s_com_snapchat_billboard_1130a9d68,&PTR_s_textKey_1130a9da0,1,0x10,0x1c
                       );
    puRam00000001136b8748 = puVar1;
  }
  return;
}



/* Entry: 104c8c760; end: 104c8c7c7; +[SCBillboardPbProfileActivityCardUXConfig descriptor] */

void FUN_104c8c760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efab0,
                        &PTR____CFConstantStringClassReference_110dac2d8,
                        &PTR_s_com_snapchat_billboard_1130aa008,&PTR_s_uiComponentsArray_1130aa060,2
                        ,0x18,0x1c);
    puRam00000001136b8750 = puVar1;
  }
  return;
}



/* Entry: 104c8c7c8; end: 104c8c853; +[SCBillboardPbProfileActivityCardUIComponent descriptor] */

undefined * FUN_104c8c7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efb00,
                        &PTR____CFConstantStringClassReference_110dac2f8,
                        &PTR_s_com_snapchat_billboard_1130aa008,&PTR_s_title_1130aa0e0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136b8758 = puVar1;
  }
  return puRam00000001136b8758;
}



/* Entry: 104c8c854; end: 104c8c8bb; +[SCBillboardPbProfileActivityCardTitle descriptor] */

void FUN_104c8c854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efb50,
                        &PTR____CFConstantStringClassReference_110dac318,
                        &PTR_s_com_snapchat_billboard_1130aa008,&PTR_s_textKey_1130aa020,1,0x10,0x1c
                       );
    puRam00000001136b8760 = puVar1;
  }
  return;
}



/* Entry: 104c8c8bc; end: 104c8c923; +[SCBillboardPbProfileActivityCardSubtitle descriptor] */

void FUN_104c8c8bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efba0,
                        &PTR____CFConstantStringClassReference_110dac338,
                        &PTR_s_com_snapchat_billboard_1130aa008,&PTR_s_textKey_1130aa040,1,0x10,0x1c
                       );
    puRam00000001136b8768 = puVar1;
  }
  return;
}



/* Entry: 104c8c924; end: 104c8ca1b; +[SCBillboardPbProfileActivityCardIcon descriptor] */

undefined * FUN_104c8c924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efbf0,
                        &PTR____CFConstantStringClassReference_110dac358,
                        &PTR_s_com_snapchat_billboard_1130aa008,&PTR_s_iconURL_1130aa0a0,2,0x10,0x1c
                       );
    func_0x00010c2289e0();
    puRam00000001136b8770 = puVar1;
  }
  return puRam00000001136b8770;
}



/* Entry: 104c8ca1c; end: 104c8ca27;  */

bool FUN_104c8ca1c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104c8ca28; end: 104c8ca8f; +[SCBillboardPbRankingStrategy descriptor] */

void FUN_104c8ca28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efc90,
                        &PTR____CFConstantStringClassReference_110dac398,
                        &PTR_s_com_snapchat_billboard_1130aa140,&PTR_s_rankingInputsArray_1130aa158,
                        2,0x18,0x1c);
    puRam00000001136b8780 = puVar1;
  }
  return;
}



/* Entry: 104c8ca90; end: 104c8caf7; +[SCBillboardPbRankingInput descriptor] */

void FUN_104c8ca90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efce0,
                        &PTR____CFConstantStringClassReference_110dac3b8,
                        &PTR_s_com_snapchat_billboard_1130aa140,&PTR_s_rankingProperty_1130aa198,2,
                        0xc,0x1c);
    puRam00000001136b8788 = puVar1;
  }
  return;
}



/* Entry: 104c8caf8; end: 104c8cbdb; +[SCBillboardPbCampaignSupEntry descriptor] */

void FUN_104c8caf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efd30,
                        &PTR____CFConstantStringClassReference_110dac3d8,
                        &PTR_s_com_snapchat_billboard_1130aa140,&PTR_s_campaignCofName_1130aa1d8,2,
                        0x10,0x1c);
    puRam00000001136b8790 = puVar1;
  }
  return;
}



/* Entry: 104c8cbdc; end: 104c8cbe7;  */

bool FUN_104c8cbdc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104c8cbe8; end: 104c8cc4f; +[SCBillboardPbRecycleMetadata descriptor] */

void FUN_104c8cbe8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efdd0,
                        &PTR____CFConstantStringClassReference_110dac418,
                        &PTR_s_com_snapchat_billboard_1130aa220,
                        &PTR_s_recycleBasedProperty_1130aa2b8,4,0x20,0x1c);
    puRam00000001136b87a0 = puVar1;
  }
  return;
}



/* Entry: 104c8cc50; end: 104c8ccdb; +[SCBillboardPbRecycleBasedProperty descriptor] */

undefined * FUN_104c8cc50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efe20,
                        &PTR____CFConstantStringClassReference_110dac438,
                        &PTR_s_com_snapchat_billboard_1130aa220,&PTR_s_millisSupPropertyId_1130aa238
                        ,2,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136b87a8 = puVar1;
  }
  return puRam00000001136b87a8;
}



/* Entry: 104c8ccdc; end: 104c8cd43; +[SCBillboardPbSupProperty descriptor] */

void FUN_104c8ccdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129efe70,
                        &PTR____CFConstantStringClassReference_110dac458,
                        &PTR_s_com_snapchat_billboard_1130aa220,&PTR_s_propertyId_1130aa278,2,0xc,
                        0x1c);
    puRam00000001136b87b0 = puVar1;
  }
  return;
}



/* Entry: 104c8cd44; end: 104c8ce27; +[SCBillboardPbSupProperties descriptor] */

void FUN_104c8cd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129eff10,
                        &PTR____CFConstantStringClassReference_110dac478,
                        &PTR_s_com_snapchat_billboard_1130aa338,
                        &PTR_s_impressionCountIdArray_1130aa350,0xb,0x60,0x1c);
    puRam00000001136b87b8 = puVar1;
  }
  return;
}



/* Entry: 104c8ce28; end: 104c8ce33;  */

bool FUN_104c8ce28(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104c8ce34; end: 104c8ce9b; +[SCBillboardPbHoldout descriptor] */

void FUN_104c8ce34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129effb0,
                        &PTR____CFConstantStringClassReference_110dac4b8,
                        &PTR_s_com_snapchat_billboard_1130aa4b8,&PTR_s_holdoutState_1130aa4d0,2,0x10
                        ,0x1c);
    puRam00000001136b87c8 = puVar1;
  }
  return;
}



/* Entry: 104c8ce9c; end: 104c8cf37; +[SCBillboardPbHoldout_HoldoutConfig descriptor] */

undefined * FUN_104c8ce9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0000,
                        &PTR____CFConstantStringClassReference_110dac4d8,
                        &PTR_s_com_snapchat_billboard_1130aa4b8,&PTR_s_holdoutExcluded_1130aa510,2,
                        0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_1129effb0);
    puRam00000001136b87d0 = puVar1;
  }
  return puRam00000001136b87d0;
}



/* Entry: 104c8cf38; end: 104c8cfab; -[UNISCBillboardServicesPbRankingService initWithUnifiedGrpcService:] */

undefined1 * FUN_104c8cf38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e37f8;
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



/* Entry: 104c8cfac; end: 104c8d08f; -[UNISCBillboardServicesPbRankingService getRankingWithRequest:callOptionsBuilder:handler:] */

void FUN_104c8cfac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ae990;
  _objc_opt_class(PTR_PTR_1126ae990);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dac4f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104c8d090; end: 104c8d173; -[UNISCBillboardServicesPbRankingService pushCampaignsWithRequest:callOptionsBuilder:handler:] */

void FUN_104c8d090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ae998;
  _objc_opt_class(PTR_PTR_1126ae998);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dac518,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104c8d174; end: 104c8d17f; -[UNISCBillboardServicesPbRankingService .cxx_destruct] */

void FUN_104c8d174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c8d180; end: 104c8d1fb;  */

undefined * FUN_104c8d180(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b87d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dac538,
                        &UNK_10dd8a8d0,&UNK_10dd8a924,3,FUN_104c8d1fc,0);
    do {
      if (puRam00000001136b87d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b87d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b87d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b87d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b87d8;
}



/* Entry: 104c8d1fc; end: 104c8d207;  */

bool FUN_104c8d1fc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104c8d208; end: 104c8d26f; +[SCBillboardServicesPbGetRankingRequest descriptor] */

void FUN_104c8d208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f00f0,
                        &PTR____CFConstantStringClassReference_110dac558,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,
                        &PTR_s_channelsArray_1130aa5e8,4,0x28,0x1c);
    puRam00000001136b87e0 = puVar1;
  }
  return;
}



/* Entry: 104c8d270; end: 104c8d2d7; +[SCBillboardServicesPbGetRankingResponse descriptor] */

void FUN_104c8d270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0140,
                        &PTR____CFConstantStringClassReference_110dac578,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,
                        &PTR_s_fhpCampaignsArray_1130aa668,5,0x30,0x1c);
    puRam00000001136b87e8 = puVar1;
  }
  return;
}



/* Entry: 104c8d2d8; end: 104c8d33f; +[SCBillboardServicesPbCampaignSnapshot descriptor] */

void FUN_104c8d2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0190,
                        &PTR____CFConstantStringClassReference_110dac158,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,
                        &PTR_s_campaignName_1130aa708,7,0x30,0x1c);
    puRam00000001136b87f0 = puVar1;
  }
  return;
}



/* Entry: 104c8d340; end: 104c8d3a7; +[SCBillboardServicesPbContextualOverride descriptor] */

void FUN_104c8d340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b87f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f01e0,
                        &PTR____CFConstantStringClassReference_110dac598,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,&PTR_s_context_1130aa588,3,
                        0x18,0x1c);
    puRam00000001136b87f8 = puVar1;
  }
  return;
}



/* Entry: 104c8d3a8; end: 104c8d40f; +[SCBillboardServicesPbPushCampaignsRequest descriptor] */

void FUN_104c8d3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0230,
                        &PTR____CFConstantStringClassReference_110dac5b8,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,
                        &PTR_s_userIdsArray_1130aa568,1,0x10,0x1c);
    puRam00000001136b8800 = puVar1;
  }
  return;
}



/* Entry: 104c8d410; end: 104c8d4f3; +[SCBillboardServicesPbPushCampaignsResponse descriptor] */

void FUN_104c8d410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0280,
                        &PTR____CFConstantStringClassReference_110dac5d8,
                        &PTR_s_snapchat_billboard_services_api_1130aa550,0,0,4,0x1c);
    puRam00000001136b8808 = puVar1;
  }
  return;
}



/* Entry: 104c8d4f4; end: 104c8d4ff;  */

bool FUN_104c8d4f4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104c8d500; end: 104c8d5e3; +[SCBillboardServicesPbClientSignals descriptor] */

void FUN_104c8d500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f0320,
                        &PTR____CFConstantStringClassReference_110dac618,
                        &PTR_s_snapchat_billboard_services_1130aa7e8,
                        &PTR_s_notificationPermGranted_1130aa800,5,0xc,0x1c);
    puRam00000001136b8818 = puVar1;
  }
  return;
}



/* Entry: 104c8d5e4; end: 104c8d5ef;  */

bool FUN_104c8d5e4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104c8d5f0; end: 104c8d66b;  */

undefined * FUN_104c8d5f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8828 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dac658,
                        &UNK_10dd8a9b0,&UNK_10dd8a9cc,3,FUN_104c8d66c,0);
    do {
      if (puRam00000001136b8828 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8828;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8828,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8828 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8828;
}


