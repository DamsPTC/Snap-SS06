/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105eda128; end: 105eda19f;  */

void FUN_105eda128(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4188,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eda1a0; end: 105eda217;  */

void FUN_105eda1a0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f41d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eda218; end: 105eda28f;  */

void FUN_105eda218(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4228,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eda290; end: 105eda307;  */

void FUN_105eda290(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4278,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eda308; end: 105eda57b;  */

/* WARNING: Removing unreachable block (ram,0x000105eda54c) */
/* WARNING: Removing unreachable block (ram,0x000105edaa34) */

void FUN_105eda308(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

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
  long *plVar11;
  char *unaff_x24;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  char *pcStack_230;
  char *pcStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  char acStack_210 [24];
  undefined1 *puStack_1f8;
  char acStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  char acStack_148 [24];
  char *pcStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_b0 [24];
  undefined1 *puStack_98;
  char acStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(acStack_90,pcVar1);
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
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x24 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x24 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,unaff_x24);
    acStack_b0[0] = '\0';
    acStack_b0[1] = '\0';
    acStack_b0[2] = '\0';
    acStack_b0[3] = '\0';
    acStack_b0[4] = '\0';
    acStack_b0[5] = '\0';
    acStack_b0[6] = '\0';
    acStack_b0[7] = '\0';
    acStack_b0[8] = '\0';
    acStack_b0[9] = '\0';
    acStack_b0[10] = '\0';
    acStack_b0[0xb] = '\0';
    acStack_b0[0xc] = '\0';
    acStack_b0[0xd] = '\0';
    acStack_b0[0xe] = '\0';
    acStack_b0[0xf] = '\0';
    acStack_b0[0x10] = '\0';
    acStack_b0[0x11] = '\0';
    acStack_b0[0x12] = '\0';
    acStack_b0[0x13] = '\0';
    acStack_b0[0x14] = '\0';
    acStack_b0[0x15] = '\0';
    acStack_b0[0x16] = '\0';
    acStack_b0[0x17] = '\0';
    func_0x00010007e1e8(acStack_b0,acStack_90,&lStack_48,3);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_98 = acStack_b0;
    func_0x00010007e5dc(&puStack_98);
    lVar10 = 0;
    param_2 = acStack_90;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcStack_e8 = acStack_90;
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != pcStack_e8);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_b8 = FUN_105eda57c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  pcVar8 = pcVar4;
  pcStack_f0 = unaff_x24;
  pcStack_e0 = param_2;
  pcStack_d8 = pcVar2;
  pcStack_d0 = param_4;
  pcStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
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
    unaff_x24 = (char *)auStack_128;
    func_0x00010002b838(auStack_128,pcVar2);
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
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_148[0] = '\0';
    acStack_148[1] = '\0';
    acStack_148[2] = '\0';
    acStack_148[3] = '\0';
    acStack_148[4] = '\0';
    acStack_148[5] = '\0';
    acStack_148[6] = '\0';
    acStack_148[7] = '\0';
    acStack_148[8] = '\0';
    acStack_148[9] = '\0';
    acStack_148[10] = '\0';
    acStack_148[0xb] = '\0';
    acStack_148[0xc] = '\0';
    acStack_148[0xd] = '\0';
    acStack_148[0xe] = '\0';
    acStack_148[0xf] = '\0';
    acStack_148[0x10] = '\0';
    acStack_148[0x11] = '\0';
    acStack_148[0x12] = '\0';
    acStack_148[0x13] = '\0';
    acStack_148[0x14] = '\0';
    acStack_148[0x15] = '\0';
    acStack_148[0x16] = '\0';
    acStack_148[0x17] = '\0';
    func_0x00010007e1e8(acStack_148,auStack_128,&lStack_f8,2);
    pcVar6 = "";
    pcVar7 = acStack_148;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_130 = acStack_148;
    func_0x00010007e5dc(&pcStack_130);
    lVar10 = 0;
    pcVar8 = pcVar4;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcStack_158 = FUN_105eda7ac;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    ppuStack_160 = &puStack_c0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      plVar11 = *(long **)(pcVar4 + 8);
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
      func_0x00010002b838(acStack_1f0,pcVar1);
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
      acStack_210[0] = '\0';
      acStack_210[1] = '\0';
      acStack_210[2] = '\0';
      acStack_210[3] = '\0';
      acStack_210[4] = '\0';
      acStack_210[5] = '\0';
      acStack_210[6] = '\0';
      acStack_210[7] = '\0';
      acStack_210[8] = '\0';
      acStack_210[9] = '\0';
      acStack_210[10] = '\0';
      acStack_210[0xb] = '\0';
      acStack_210[0xc] = '\0';
      acStack_210[0xd] = '\0';
      acStack_210[0xe] = '\0';
      acStack_210[0xf] = '\0';
      acStack_210[0x10] = '\0';
      acStack_210[0x11] = '\0';
      acStack_210[0x12] = '\0';
      acStack_210[0x13] = '\0';
      acStack_210[0x14] = '\0';
      acStack_210[0x15] = '\0';
      acStack_210[0x16] = '\0';
      acStack_210[0x17] = '\0';
      func_0x00010007e1e8(acStack_210,acStack_1f0,&lStack_1a8,3);
      pcVar1 = "";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108f4368,acStack_210,pcVar9);
      puStack_1f8 = acStack_210;
      func_0x00010007e5dc(&puStack_1f8);
      lVar10 = 0;
      do {
        if ((&cStack_1a9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = acStack_210;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar7);
    pcVar5 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != acStack_1f0);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      __Unwind_Resume();
      puStack_238 = (undefined1 *)&uStack_250;
      pcStack_218 = FUN_105edaa6c;
      if (pcVar5 != (char *)0x0) {
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        pcStack_230 = pcVar7;
        pcStack_228 = pcVar6;
        pppuStack_220 = &ppuStack_160;
        (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                  (*(long **)(pcVar5 + 8),&UNK_1108f43b8,&uStack_250,pcVar1);
        func_0x00010007e5dc(&puStack_238);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105eda57c; end: 105eda7ab;  */

/* WARNING: Removing unreachable block (ram,0x000105edaa34) */

void FUN_105eda57c(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
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
  pcVar4 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
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
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    pcVar5 = param_4;
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_a8 = FUN_105eda7ac;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar1;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    if (pcVar2 != (char *)0x0) {
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
      func_0x00010002b838(auStack_140,pcVar2);
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
      func_0x00010002b838(auStack_128,pcVar2);
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
      func_0x00010002b838(auStack_110,pcVar2);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      pcVar3 = "";
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f4368,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar6 = 0;
      do {
        if ((&cStack_f9)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar6 != -0x48);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_188 = (undefined1 *)&uStack_1a0;
      pcStack_168 = FUN_105edaa6c;
      if (pcVar2 != (char *)0x0) {
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_190 = 0;
        pcStack_180 = pcVar4;
        pcStack_178 = pcVar1;
        ppuStack_170 = &puStack_b0;
        (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                  (*(long **)(pcVar2 + 8),&UNK_1108f43b8,&uStack_1a0,pcVar3);
        func_0x00010007e5dc(&puStack_188);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105eda7ac; end: 105edaa6b;  */

/* WARNING: Removing unreachable block (ram,0x000105edaa34) */

void FUN_105eda7ac(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f4368,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_105edaa6c;
    if (pcVar2 != (char *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      pcStack_e0 = param_3;
      pcStack_d8 = param_2;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                (*(long **)(pcVar2 + 8),&UNK_1108f43b8,&uStack_100,pcVar1);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 105edaa6c; end: 105edaae3;  */

void FUN_105edaa6c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f43b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edaae4; end: 105edac57;  */

void FUN_105edaae4(long param_1,long *param_2,undefined1 *param_3)

{
  char *pcVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *unaff_x22;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  long *plStack_1f0;
  long **pplStack_1e8;
  undefined8 **ppuStack_1e0;
  code *pcStack_1d8;
  long alStack_1d0 [3];
  long *plStack_1b8;
  long **applStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 *puStack_190;
  long *plStack_188;
  long *plStack_180;
  long **pplStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  long alStack_160 [3];
  long *plStack_148;
  long **applStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined1 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
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
  plVar6 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  plVar11 = (long *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar6 = (long *)&UNK_1108f4408;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108f4408,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
      unaff_x22 = &uStack_80;
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
  plVar2 = plVar10;
  __Unwind_Resume();
  plVar9 = alStack_f0;
  pcStack_88 = FUN_105edac58;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar11;
  plStack_a0 = plVar10;
  plStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (plVar2 != (long *)0x0) {
    plVar10 = (long *)plVar2[1];
    pcVar1 = "true";
    if ((int)plVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_d0,pcVar1);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    plVar6 = (long *)&UNK_1108f4458;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f4458,alStack_f0,puVar7);
    pplVar3 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar7 = (undefined1 *)plVar9;
    plVar11 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar3 = applStack_d0[0];
      __ZdlPv();
      puVar7 = (undefined1 *)plVar9;
      plVar11 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar11;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  pplVar4 = pplVar3;
  __Unwind_Resume();
  plVar2 = alStack_160;
  pcStack_f8 = FUN_105edad70;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_120 = (undefined1 *)unaff_x22;
  plStack_118 = plVar11;
  plStack_110 = plVar10;
  pplStack_108 = pplVar3;
  ppuStack_100 = &puStack_90;
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    pcVar1 = "true";
    if ((int)plVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_140,pcVar1);
    alStack_160[0] = 0;
    alStack_160[1] = 0;
    alStack_160[2] = 0;
    func_0x00010007e1e8(alStack_160,applStack_140,&lStack_128,1);
    plVar6 = (long *)&UNK_1108f44a8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f44a8,alStack_160,puVar7);
    pplVar5 = &plStack_148;
    plStack_148 = alStack_160;
    func_0x00010007e5dc();
    puVar7 = (undefined1 *)plVar2;
    plVar11 = alStack_160;
    if (cStack_129 < '\0') {
      pplVar5 = applStack_140[0];
      __ZdlPv();
      puVar7 = (undefined1 *)plVar2;
      plVar11 = alStack_160;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  plStack_148 = plVar11;
  func_0x00010007e5dc(&plStack_148);
  if (cStack_129 < '\0') {
    __ZdlPv(applStack_140[0]);
  }
  pplVar4 = pplVar5;
  __Unwind_Resume();
  pcStack_168 = FUN_105edae88;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)0x0;
  puStack_190 = (undefined1 *)unaff_x22;
  plStack_188 = plVar11;
  plStack_180 = plVar10;
  pplStack_178 = pplVar5;
  ppuStack_170 = &ppuStack_100;
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    pcVar1 = "true";
    if ((int)plVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_1b0,pcVar1);
    alStack_1d0[0] = 0;
    alStack_1d0[1] = 0;
    alStack_1d0[2] = 0;
    func_0x00010007e1e8(alStack_1d0,applStack_1b0,&lStack_198,1);
    plVar6 = (long *)&UNK_1108f44f8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f44f8,alStack_1d0,puVar7);
    pplVar3 = &plStack_1b8;
    plStack_1b8 = alStack_1d0;
    func_0x00010007e5dc();
    plVar11 = alStack_1d0;
    if (cStack_199 < '\0') {
      pplVar3 = applStack_1b0[0];
      __ZdlPv();
      plVar11 = alStack_1d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  plStack_1b8 = plVar11;
  func_0x00010007e5dc(&plStack_1b8);
  if (cStack_199 < '\0') {
    __ZdlPv(applStack_1b0[0]);
  }
  pplVar5 = pplVar3;
  __Unwind_Resume();
  puStack_1f8 = (undefined1 *)&uStack_210;
  pcStack_1d8 = FUN_105edafa0;
  if (pplVar5 != (long **)0x0) {
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    plStack_1f0 = plVar10;
    pplStack_1e8 = pplVar3;
    ppuStack_1e0 = &ppuStack_170;
    (**(code **)(*pplVar5[1] + 0x18))(pplVar5[1],&UNK_1108f4548,&uStack_210,plVar6);
    func_0x00010007e5dc(&puStack_1f8);
  }
  return;
}



/* Entry: 105edac58; end: 105edad6f;  */

void FUN_105edac58(long param_1,undefined *param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  long *plStack_170;
  undefined1 **ppuStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108f4458;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f4458,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar4 = &uStack_e0;
  pcStack_78 = FUN_105edad70;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined1 **)0x0) {
    unaff_x20 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = &UNK_1108f44a8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f44a8,&uStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  pcStack_e8 = FUN_105edae88;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  ppuStack_f0 = &puStack_80;
  if (ppuVar3 != (undefined1 **)0x0) {
    unaff_x20 = (long *)ppuVar3[1];
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar1);
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x00010007e1e8(&uStack_150,appuStack_130,&lStack_118,1);
    param_2 = &UNK_1108f44f8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f44f8,&uStack_150,param_3);
    ppuVar2 = &puStack_138;
    puStack_138 = (undefined1 *)&uStack_150;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_150;
    if (cStack_119 < '\0') {
      ppuVar2 = appuStack_130[0];
      __ZdlPv();
      unaff_x21 = &uStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_178 = (undefined1 *)&uStack_190;
  pcStack_158 = FUN_105edafa0;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    plStack_170 = unaff_x20;
    ppuStack_168 = ppuVar2;
    ppuStack_160 = &ppuStack_f0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108f4548,&uStack_190,param_2);
    func_0x00010007e5dc(&puStack_178);
  }
  return;
}



/* Entry: 105edad70; end: 105edae87;  */

void FUN_105edad70(long param_1,undefined *param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108f44a8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f44a8,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_105edae88;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined1 **)0x0) {
    unaff_x20 = (long *)ppuVar2[1];
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = &UNK_1108f44f8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f44f8,&uStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  ppuVar2 = ppuVar3;
  __Unwind_Resume();
  puStack_108 = (undefined1 *)&uStack_120;
  pcStack_e8 = FUN_105edafa0;
  if (ppuVar2 != (undefined1 **)0x0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_100 = unaff_x20;
    ppuStack_f8 = ppuVar3;
    ppuStack_f0 = &puStack_80;
    (**(code **)(*(long *)ppuVar2[1] + 0x18))(ppuVar2[1],&UNK_1108f4548,&uStack_120,param_2);
    func_0x00010007e5dc(&puStack_108);
  }
  return;
}



/* Entry: 105edae88; end: 105edaf9f;  */

void FUN_105edae88(long param_1,undefined *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1108f44f8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f44f8,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_105edafa0;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_1108f4548,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 105edafa0; end: 105edb017;  */

void FUN_105edafa0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4548,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb018; end: 105edb08b; -[SCGrapheneMapFocusCardsGrapheneMetric2 init] */

undefined1 * FUN_105edb018(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edd80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edb08c; end: 105edb103;  */

void FUN_105edb08c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4658,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb104; end: 105edb11f; +[SCCMapFootstepsOnboardingActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105edb104(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f46a8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105edb120; end: 105edb12b; +[SCCMapFootstepsOnboardingComponent componentPath] */

undefined ** FUN_105edb120(void)

{
  return &PTR____CFConstantStringClassReference_110e30578;
}



/* Entry: 105edb12c; end: 105edb15f; -[SCCMapFootstepsOnboardingComponent initWithViewModel:componentContext:runtime:] */

void FUN_105edb12c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edd88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105edb160; end: 105edb1af; -[SCCMapFootstepsOnboardingComponent setViewModel:] */

void FUN_105edb160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105edb1b0; end: 105edb1f3; -[SCCMapFootstepsOnboardingComponent viewModel] */

void FUN_105edb1b0(undefined8 param_1)

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



/* Entry: 105edb1f4; end: 105edb217; -[SCCMapFootstepsOnboardingContext init] */

void FUN_105edb1f4(void)

{
  func_0x000105edb274(PTR_PTR_1126edd90);
  return;
}



/* Entry: 105edb218; end: 105edb237; +[SCCMapFootstepsOnboardingContext valdiMarshallableObjectDescriptor] */

void FUN_105edb218(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_1108f46f0;
  param_1[1] = &PTR_DAT_1108f4750;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edb238; end: 105edb25b; -[SCCMapFootstepsOnboardingViewModel init] */

void FUN_105edb238(void)

{
  func_0x000105edb274(PTR_PTR_1126edd98);
  return;
}



/* Entry: 105edb25c; end: 105edb287; +[SCCMapFootstepsOnboardingViewModel valdiMarshallableObjectDescriptor] */

void FUN_105edb25c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd1490;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edb288; end: 105edb2fb; -[SCGrapheneFootstepsMetric2 init] */

undefined1 * FUN_105edb288(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edda0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edb2fc; end: 105edb373;  */

void FUN_105edb2fc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4760,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb374; end: 105edb3eb;  */

void FUN_105edb374(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f47b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb3ec; end: 105edb463;  */

void FUN_105edb3ec(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4800,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb464; end: 105edb4db;  */

void FUN_105edb464(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4850,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb4dc; end: 105edb553;  */

void FUN_105edb4dc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f48a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb554; end: 105edb5cb;  */

void FUN_105edb554(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f48f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb5cc; end: 105edb643;  */

void FUN_105edb5cc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4940,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edb644; end: 105edb767;  */

undefined1 ** FUN_105edb644(double param_1,long param_2,int param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    pcVar1 = "true";
    if (param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f4990,&uStack_70,(long)(param_1 * 1000.0));
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc(ppuVar2);
    unaff_x20 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv(appuStack_50[0]);
      unaff_x20 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x20;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110e30598;
}



/* Entry: 105edb768; end: 105edb773; +[SCCMapFootstepsTrayComponent componentPath] */

undefined ** FUN_105edb768(void)

{
  return &PTR____CFConstantStringClassReference_110e30598;
}



/* Entry: 105edb774; end: 105edb7a7; -[SCCMapFootstepsTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105edb774(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edda8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105edb7a8; end: 105edb7f7; -[SCCMapFootstepsTrayComponent setViewModel:] */

void FUN_105edb7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105edb7f8; end: 105edb83b; -[SCCMapFootstepsTrayComponent viewModel] */

void FUN_105edb7f8(undefined8 param_1)

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



/* Entry: 105edb83c; end: 105edb8f3; -[SCCMapFootstepsTrayContext initWithShowSnapButtonObservable:onCloseTray:onTapSnap:] */

undefined8 *
FUN_105edb83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126eddb0;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 105edb8f4; end: 105edb913; +[SCCMapFootstepsTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105edb8f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f49f0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108f4a50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edb914; end: 105edb91f; +[SCCMapInferredSchoolOnboardingDialog componentPath] */

undefined ** FUN_105edb914(void)

{
  return &PTR____CFConstantStringClassReference_110e305b8;
}



/* Entry: 105edb920; end: 105edb953; -[SCCMapInferredSchoolOnboardingDialog initWithViewModel:componentContext:runtime:] */

void FUN_105edb920(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eddb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105edb954; end: 105edb9a3; -[SCCMapInferredSchoolOnboardingDialog setViewModel:] */

void FUN_105edb954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105edb9a4; end: 105edb9e7; -[SCCMapInferredSchoolOnboardingDialog viewModel] */

void FUN_105edb9a4(undefined8 param_1)

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



/* Entry: 105edb9e8; end: 105edba7f; -[SCCMapInferredSchoolOnboardingDialogContext initWithOnTapContinue:onTapNotRightNow:] */

undefined8 *
FUN_105edb9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126eddc0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105edba80; end: 105edba97; +[SCCMapInferredSchoolOnboardingDialogContext valdiMarshallableObjectDescriptor] */

void FUN_105edba80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f4a60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edba98; end: 105edbaa3; +[SCCMapMemoriesTrayComponent componentPath] */

undefined ** FUN_105edba98(void)

{
  return &PTR____CFConstantStringClassReference_110e305d8;
}



/* Entry: 105edbaa4; end: 105edbad7; -[SCCMapMemoriesTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105edbaa4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eddc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105edbad8; end: 105edbb27; -[SCCMapMemoriesTrayComponent setViewModel:] */

void FUN_105edbad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105edbb28; end: 105edbb6b; -[SCCMapMemoriesTrayComponent viewModel] */

void FUN_105edbb28(undefined8 param_1)

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



/* Entry: 105edbb6c; end: 105edbbcf; -[SCCMapMemoriesTrayContext initWithOnCloseTray:] */

undefined8 * FUN_105edbb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126eddd0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105edbbd0; end: 105edbbe7; +[SCCMapMemoriesTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105edbbd0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f4aa8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edbbe8; end: 105edbc03; +[SCCRequestLiveLocationTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105edbbe8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f4ad8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105edbc04; end: 105edbc0f; +[SCCRequestLiveLocationTrayComponent componentPath] */

undefined ** FUN_105edbc04(void)

{
  return &PTR____CFConstantStringClassReference_110e305f8;
}



/* Entry: 105edbc10; end: 105edbc43; -[SCCRequestLiveLocationTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105edbc10(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eddd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105edbc44; end: 105edbc93; -[SCCRequestLiveLocationTrayComponent setViewModel:] */

void FUN_105edbc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105edbc94; end: 105edbcd7; -[SCCRequestLiveLocationTrayComponent viewModel] */

void FUN_105edbc94(undefined8 param_1)

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



/* Entry: 105edbcd8; end: 105edbd0b; -[SCCRequestLiveLocationTrayContext init] */

void FUN_105edbcd8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edde0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105edbd0c; end: 105edbd2b; +[SCCRequestLiveLocationTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105edbd0c(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_1108f4b20;
  param_1[1] = &PTR_DAT_1108f4b50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edbd2c; end: 105edbd67; -[SCCRequestLiveLocationTrayViewModel initWithFriendName:] */

void FUN_105edbd2c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edde8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105edbd68; end: 105edbd7f; +[SCCRequestLiveLocationTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_105edbd68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f4b60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105edbd80; end: 105edbdf3; -[SCGrapheneBitmojiTapMetric2 init] */

undefined1 * FUN_105edbd80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eddf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edbdf4; end: 105edbe6b;  */

void FUN_105edbdf4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4b90,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edbe6c; end: 105edbee3;  */

void FUN_105edbe6c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4be0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edbee4; end: 105edbf5b;  */

void FUN_105edbee4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4c30,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edbf5c; end: 105edbfd3;  */

void FUN_105edbf5c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4c80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edbfd4; end: 105edc04b;  */

void FUN_105edbfd4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f4cd0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edc04c; end: 105edc0bf; -[SCGrapheneMapStartupPromptsMetric2 init] */

undefined1 * FUN_105edc04c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eddf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edc0c0; end: 105edc233;  */

char * FUN_105edc0c0(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f4d20,&uStack_80,param_3);
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
  pcStack_88 = FUN_105edc234;
  puStack_a8 = PTR_PTR_1126ede00;
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



/* Entry: 105edc234; end: 105edc2a7; -[SCGrapheneMapDataBridgingMetric2 init] */

undefined1 * FUN_105edc234(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edc2a8; end: 105edc517;  */

char * FUN_105edc2a8(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  char *pcStack_180;
  undefined *puStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
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
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    param_5 = (long)(param_1 * 1000.0);
    pcVar1 = "\x01";
    pcVar4 = acStack_a8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f4d80,pcVar4,param_5);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar6 = 0;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_b8 = FUN_105edc518;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar5 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_128,pcVar2);
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
    func_0x00010002b838(auStack_110,pcVar2);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010007e1e8(&uStack_148,auStack_128,&lStack_f8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f4dd0,&uStack_148,param_5);
    puStack_130 = &uStack_148;
    func_0x00010007e5dc(&puStack_130);
    lVar6 = 0;
    do {
      if ((&cStack_f9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_180;
  pcStack_158 = FUN_105edc748;
  puStack_178 = PTR_PTR_1126ede08;
  pcStack_180 = pcVar2;
  pcStack_170 = pcVar4;
  pcStack_168 = pcVar1;
  ppuStack_160 = &puStack_c0;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105edc518; end: 105edc747;  */

char * FUN_105edc518(long param_1,char *param_2,char *param_3,undefined8 param_4)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f4dd0,&uStack_98,param_4);
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
  pcStack_a8 = FUN_105edc748;
  puStack_c8 = PTR_PTR_1126ede08;
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



/* Entry: 105edc748; end: 105edc7bb; -[SCGrapheneMapFriendLoadMetric2 init] */

undefined1 * FUN_105edc748(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edc7bc; end: 105edc9a7;  */

char * FUN_105edc7bc(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_270;
  undefined *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  uVar8 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
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
    pcVar5 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f4e60,pcVar5,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_105edc9a8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
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
    func_0x00010002b838(auStack_100,pcVar1);
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
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f4eb0,pcVar6,uVar8);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar7 = acStack_1c0;
  pcStack_148 = FUN_105edcb94;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  pcVar2 = pcVar6;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar4);
  if (pcVar1 != (char *)0x0) {
    plVar10 = *(long **)(pcVar1 + 8);
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
    pcVar5 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f4f00,acStack_1c0,pcVar6);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar2 = pcVar7;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar2 = pcVar7;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcStack_1c8 = FUN_105edcd08;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    plVar10 = *(long **)(pcVar1 + 8);
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
    func_0x00010002b838(auStack_220,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f4f50,&uStack_240,pcVar2);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_270;
  pcStack_248 = FUN_105edce7c;
  puStack_268 = PTR_PTR_1126ede10;
  pcStack_270 = pcVar2;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar5;
  pppuStack_250 = &pppuStack_1d0;
  _objc_msgSendSuper2(&pcStack_270,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105edc9a8; end: 105edcb93;  */

char * FUN_105edc9a8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *pcStack_1d0;
  undefined *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  pcVar3 = param_3;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
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
    pcVar3 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f4eb0,pcVar3,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar2 = param_3;
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
  __Unwind_Resume();
  pcVar7 = acStack_120;
  pcStack_a8 = FUN_105edcb94;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
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
    pcVar5 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f4f00,acStack_120,pcVar3);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar7;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar7;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_105edcd08;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &puStack_b0;
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
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f4f50,&uStack_1a0,pcVar6);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  ppcVar4 = &pcStack_1d0;
  pcStack_1a8 = FUN_105edce7c;
  puStack_1c8 = PTR_PTR_1126ede10;
  pcStack_1d0 = pcVar3;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105edcb94; end: 105edcd07;  */

char * FUN_105edcb94(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
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
  pcVar1 = param_2;
  puVar5 = param_3;
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f4f00,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_105edcd08;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f4f50,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_105edce7c;
  puStack_128 = PTR_PTR_1126ede10;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105edcd08; end: 105edce7b;  */

char * FUN_105edcd08(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f4f50,&uStack_80,param_3);
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
  pcStack_88 = FUN_105edce7c;
  puStack_a8 = PTR_PTR_1126ede10;
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



/* Entry: 105edce7c; end: 105edceef; -[SCGrapheneMapReadyMetric2 init] */

undefined1 * FUN_105edce7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edcef0; end: 105edcf67;  */

void FUN_105edcef0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f5000,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edcf68; end: 105edd07f;  */

undefined1 **
FUN_105edcf68(long param_1,undefined1 **param_2,undefined1 **param_3,undefined1 **param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  int iVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  long lVar10;
  undefined1 **unaff_x21;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined1 **ppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar6 = &puStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  ppuVar3 = param_3;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    puStack_70 = (undefined1 *)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&puStack_70,appuStack_50,&lStack_38,1);
    param_2 = (undefined1 **)&UNK_1108f5050;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f5050,&puStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&puStack_70;
    func_0x00010007e5dc();
    ppuVar3 = ppuVar6;
    param_4 = param_3;
    unaff_x21 = &puStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      ppuVar3 = ppuVar6;
      param_4 = param_3;
      unaff_x21 = &puStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  ppuVar8 = &puStack_f0;
  pcStack_78 = FUN_105edd080;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_2;
  ppuVar7 = ppuVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  iVar5 = (int)ppuVar6;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,pcVar2);
    puStack_f0 = (undefined1 *)0x0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&puStack_f0,auStack_d0,&lStack_b8,1);
    iVar5 = 0x108f50a0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f50a0,&puStack_f0,ppuVar3);
    puStack_d8 = (undefined1 *)&puStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    ppuVar7 = ppuVar8;
    param_4 = ppuVar3;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      ppuVar7 = ppuVar8;
      param_4 = ppuVar3;
    }
  }
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_f8 = FUN_105edd1f4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = &puStack_80;
  _objc_retain(ppuVar7);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    pcVar2 = "true";
    if (iVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_168,pcVar2);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      pcVar2 = (char *)ppuVar7;
      func_0x00010bdc3520(ppuVar7);
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_150,pcVar2);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    func_0x00010007e1e8(&uStack_188,auStack_168,&lStack_138,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108f50f0,&uStack_188,param_4);
    puStack_170 = &uStack_188;
    func_0x00010007e5dc(&puStack_170);
    lVar10 = 0;
    do {
      if ((&cStack_139)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  if (cStack_151 < '\0') {
    __ZdlPv(auStack_168[0]);
  }
  _objc_release(ppuVar7);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_1c0;
  pcStack_198 = FUN_105edd3e0;
  puStack_1b8 = PTR_PTR_1126ede18;
  ppuStack_1c0 = ppuVar3;
  ppuStack_1b0 = ppuVar1;
  ppuStack_1a8 = ppuVar7;
  pppuStack_1a0 = &ppuStack_100;
  _objc_msgSendSuper2(&ppuStack_1c0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar1 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar1;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 105edd080; end: 105edd1f3;  */

char * FUN_105edd080(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
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
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  iVar4 = (int)pcVar1;
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
    iVar4 = 0x108f50a0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f50a0,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar2;
      param_4 = param_3;
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
  __Unwind_Resume();
  pcStack_88 = FUN_105edd1f4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    plVar7 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if (iVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_f8,pcVar1);
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
    func_0x00010002b838(auStack_e0,pcVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f50f0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_150;
  pcStack_128 = FUN_105edd3e0;
  puStack_148 = PTR_PTR_1126ede18;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar1;
  pcStack_138 = pcVar5;
  ppuStack_130 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105edd1f4; end: 105edd3df;  */

char * FUN_105edd1f4(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long lVar4;
  long *plVar5;
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
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
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
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f50f0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar1 = param_3;
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
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_105edd3e0;
  puStack_c8 = PTR_PTR_1126ede18;
  pcStack_d0 = pcVar2;
  pcStack_c0 = pcVar1;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105edd3e0; end: 105edd453; -[SCGrapheneUpsellMetric2 init] */

undefined1 * FUN_105edd3e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edd454; end: 105edd5c7;  */

char * FUN_105edd454(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_1b0;
  undefined *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 **ppuStack_190;
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
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f5180,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_105edd5c8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f51d0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_105edd73c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
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
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108f5220,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1b0;
  pcStack_188 = FUN_105edd8b0;
  puStack_1a8 = PTR_PTR_1126ede20;
  pcStack_1b0 = pcVar2;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar4;
  ppuStack_190 = &ppuStack_110;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 105edd5c8; end: 105edd73b;  */

char * FUN_105edd5c8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
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
  pcVar1 = param_2;
  puVar5 = param_3;
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f51d0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_105edd73c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f5220,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_105edd8b0;
  puStack_128 = PTR_PTR_1126ede20;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 105edd73c; end: 105edd8af;  */

char * FUN_105edd73c(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f5220,&uStack_80,param_3);
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
  pcStack_88 = FUN_105edd8b0;
  puStack_a8 = PTR_PTR_1126ede20;
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



/* Entry: 105edd8b0; end: 105edd923; -[SCGrapheneMapShareBackBannerMetric2 init] */

undefined1 * FUN_105edd8b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105edd924; end: 105edd99b;  */

void FUN_105edd924(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f52a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edd99c; end: 105edda13;  */

void FUN_105edd99c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f52f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edda14; end: 105edda8b;  */

void FUN_105edda14(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f5340,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105edda8c; end: 105eddb03;  */

void FUN_105edda8c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f5390,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eddb04; end: 105eddb7b;  */

void FUN_105eddb04(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108f53e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105eddb7c; end: 105edde67; -[SCMapLocationOnboardingController initWithMultiTrayManager:logEventSender:sharingPreferencesProvider:sharingPreferencesMutator:mapPersonLocationsProvider:mapPeopleFriendsProvider:slippyUpsellRequestService:bitmojiAvatarGenerator:contentFetcher:currentUserId:friendPickerScopeExposer:locationSharingSettingsFactoryServices:circumstanceEngine:] */

undefined8 *
FUN_105eddb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126ede28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 105edde68; end: 105eddeb7; -[SCMapLocationOnboardingController presentTrayUpsellIfNecessaryWithCompletion:] */

void FUN_105edde68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010be12500(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010bee6c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010be10160(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eddeb8; end: 105eddf3f; -[SCMapLocationOnboardingController _userHasBitmoji] */

bool FUN_105eddeb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf1acc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar2);
  return lVar3 != 0;
}



/* Entry: 105eddf40; end: 105eddf9f; -[SCMapLocationOnboardingController _friendsCount] */

undefined8 FUN_105eddf40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105eddfa0; end: 105ede003; -[SCMapLocationOnboardingController _bestFriendsCount] */

undefined8 FUN_105eddfa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ede004; end: 105ede243; -[SCMapLocationOnboardingController _friendsWithBitmojiWithFilterToBestFriends:] */

undefined * FUN_105ede004(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
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
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf00660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf19520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = puVar3;
  func_0x00010bf529e0(puVar3);
  func_0x00010bffc4a0(puVar1,param_2,puVar2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
        lVar4 = *(long *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b96e0(lVar4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar6 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        _objc_release(lVar5);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010be19a60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  return puVar1;
}



/* Entry: 105ede244; end: 105ede27f; -[SCMapLocationOnboardingController _friendsWithBitmojiCount:] */

undefined8 FUN_105ede244(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be19a60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105ede280; end: 105ede3df; -[SCMapLocationOnboardingController _fetchMapPropImageWithCompletion:] */

void FUN_105ede280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b20c0;
  func_0x00010687982c(0x4059000000000000,PTR_PTR_1126b20c0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b20c0;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105ede3e0;
  puStack_60 = &UNK_110853e40;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000106879d48(puVar1,puVar3,uVar4,&puStack_78);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105ede3e0; end: 105ede4ff;  */

void FUN_105ede3e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 0x98);
      *(undefined8 *)(lVar1 + 0x98) = param_2;
      _objc_release(uVar2);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105ede500;
      puStack_58 = &UNK_110848708;
      _objc_copyWeak(auStack_48,param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_50 = uVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_release(uStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}


