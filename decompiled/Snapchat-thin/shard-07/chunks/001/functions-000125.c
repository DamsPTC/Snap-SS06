/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10526a2f8; end: 10526a46b;  */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */

void FUN_10526a2f8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

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
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
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
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
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
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar3 = acStack_140;
  pcStack_88 = FUN_10526a46c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  pcVar7 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(param_4);
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
    func_0x00010002b838(auStack_120,pcVar2);
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
    func_0x00010002b838(auStack_108,pcVar2);
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
    pcVar4 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110872680,acStack_140,param_5);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar10 = 0;
    pcVar6 = pcVar3;
    pcVar7 = param_5;
    do {
      if ((&cStack_d9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_140;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_178 = auStack_120;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_178);
    _objc_release(param_4);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_148 = FUN_10526a72c;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_180 = unaff_x24;
    pcStack_170 = pcVar2;
    pcStack_168 = param_4;
    pcStack_160 = pcVar5;
    pcStack_158 = pcVar1;
    ppuStack_150 = &puStack_90;
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    if (pcVar3 != (char *)0x0) {
      plVar9 = *(long **)(pcVar3 + 8);
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
      func_0x00010002b838(auStack_1b8,pcVar1);
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
      func_0x00010002b838(auStack_1a0,pcVar1);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108727d0,&uStack_1d8,pcVar7);
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
    _objc_release(pcVar6);
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar4);
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



/* Entry: 10526a46c; end: 10526a72b;  */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */

void FUN_10526a46c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *unaff_x24;
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
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110872680,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pcVar5 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10526a72c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
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
    func_0x00010002b838(auStack_138,pcVar2);
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
    func_0x00010002b838(auStack_120,pcVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108727d0,&uStack_158,pcVar4);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar7 = 0;
    do {
      if ((&cStack_109)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    uVar6 = *(undefined8 *)(pcVar4 + 0x20);
    _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  return;
}



/* Entry: 10526a72c; end: 10526a95b;  */

void FUN_10526a72c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108727d0,&uStack_98,param_4);
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
  uVar2 = *(undefined8 *)(pcVar1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10526a95c; end: 10526a983; -[SCInMemoryDeepLinkInfoService deepLinkReferrer] */

void FUN_10526a95c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526a984; end: 10526a98b; -[SCInMemoryDeepLinkInfoService deepLinkSourceType] */

undefined8 FUN_10526a984(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10526a98c; end: 10526aa87; -[SCInMemoryDeepLinkInfoService storeInfoWithDeepLinkSourceType:deepLinkId:deepLinkReferrer:deepLinkURL:shortLinkURL:shareId:] */

void FUN_10526a98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_8;
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10526aa88; end: 10526aadb; -[SCInMemoryDeepLinkInfoService .cxx_destruct] */

void FUN_10526aa88(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10526aadc; end: 10526ab4f; -[SCGrapheneActivationNetworkMetric2 init] */

undefined1 * FUN_10526aadc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e73a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10526ab50; end: 10526ae0f;  */

/* WARNING: Removing unreachable block (ram,0x00010526b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010526add8) */
/* WARNING: Removing unreachable block (ram,0x00010526b7b8) */

undefined **
FUN_10526ab50(long param_1,undefined **param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  char *unaff_x24;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined **ppuStack_250;
  char *pcStack_248;
  char *pcStack_240;
  undefined **ppuStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2;
  pcVar1 = param_3;
  pcVar10 = param_4;
  pcVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
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
      func_0x00010bdc3520();
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
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    ppuVar7 = (undefined **)&UNK_110872840;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    pcVar1 = pcVar4;
    pcVar10 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10526ae10;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar7;
  pcVar4 = pcVar1;
  pcVar11 = pcVar10;
  puStack_100 = (undefined8 *)unaff_x24;
  ppuStack_f0 = ppuVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  ppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  _objc_retain(pcVar1);
  if (ppuVar3 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar3[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar4);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar4);
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
    ppuVar8 = (undefined **)&UNK_110872890;
    pcVar4 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar13 = 0;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_109)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  ppuVar2 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar1);
  _objc_release(ppuVar7);
  __Unwind_Resume();
  pcVar9 = acStack_220;
  pcStack_168 = FUN_10526b040;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar8;
  pcVar1 = pcVar4;
  pcVar10 = pcVar11;
  pcVar12 = pcVar6;
  ppuStack_170 = &puStack_d0;
  _objc_retain(ppuVar8);
  _objc_retain(pcVar4);
  _objc_retain(pcVar11);
  if (ppuVar2 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_200,pcVar1);
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
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_1d0,pcVar1);
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
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1b8,3);
    ppuVar7 = (undefined **)&UNK_1108728e0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar13 = 0;
    pcVar1 = pcVar9;
    pcVar10 = pcVar6;
    do {
      if ((&cStack_1b9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_220;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar4);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  puStack_258 = auStack_200;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_258);
  _objc_release(pcVar11);
  _objc_release(pcVar4);
  _objc_release(ppuVar8);
  ppuVar5 = ppuVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_10526b300;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar7;
  pcVar6 = pcVar1;
  pcVar9 = pcVar10;
  puStack_260 = (undefined8 *)unaff_x24;
  ppuStack_250 = ppuVar2;
  pcStack_248 = pcVar11;
  pcStack_240 = pcVar4;
  ppuStack_238 = ppuVar8;
  pppuStack_230 = &ppuStack_170;
  _objc_retain(ppuVar7);
  _objc_retain(pcVar1);
  if (ppuVar5 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar5[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_280,pcVar6);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    ppuVar3 = (undefined **)&UNK_110872930;
    pcVar6 = acStack_2b8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_2a0 = acStack_2b8;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar13 = 0;
    pcVar9 = pcVar10;
    do {
      if ((&cStack_269)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  ppuVar2 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar1);
  _objc_release(ppuVar7);
  __Unwind_Resume();
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (ppuVar2 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_360,pcVar1);
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
    func_0x00010002b838(auStack_348,pcVar1);
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
    func_0x00010002b838(auStack_330,pcVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_318,3);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110872980,&uStack_380,pcVar12);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    lVar13 = 0;
    do {
      if ((&cStack_319)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = (char *)&uStack_380;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  ppuVar7 = ppuVar3;
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)auStack_360);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    _objc_release(ppuVar3);
    __Unwind_Resume(ppuVar7);
    return &PTR____CFConstantStringClassReference_110dce5f8;
  }
  return ppuVar7;
}



/* Entry: 10526ae10; end: 10526b03f;  */

/* WARNING: Removing unreachable block (ram,0x00010526b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010526b7b8) */

undefined **
FUN_10526ae10(long param_1,undefined **param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  char *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined **ppuStack_190;
  char *pcStack_188;
  char *pcStack_180;
  undefined **ppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
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
  ppuVar5 = param_2;
  pcVar1 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
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
    ppuVar5 = (undefined **)&UNK_110872890;
    pcVar1 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar9 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar8 = acStack_160;
  pcStack_a8 = FUN_10526b040;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar5;
  pcVar3 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  if (ppuVar2 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_140,pcVar3);
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
    func_0x00010002b838(auStack_128,pcVar3);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_110,pcVar3);
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
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    ppuVar6 = (undefined **)&UNK_1108728e0;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar13 = 0;
    pcVar3 = pcVar8;
    pcVar10 = param_5;
    do {
      if ((&cStack_f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  ppuVar2 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  puStack_198 = auStack_140;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_198);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  _objc_release(ppuVar5);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_10526b300;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar6;
  pcVar8 = pcVar3;
  pcVar11 = pcVar10;
  puStack_1a0 = (undefined8 *)unaff_x24;
  ppuStack_190 = ppuVar2;
  pcStack_188 = pcVar9;
  pcStack_180 = pcVar1;
  ppuStack_178 = ppuVar5;
  ppuStack_170 = &puStack_b0;
  _objc_retain(ppuVar6);
  _objc_retain(pcVar3);
  if (ppuVar4 != (undefined **)0x0) {
    plVar14 = (long *)ppuVar4[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
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
    ppuVar7 = (undefined **)&UNK_110872930;
    pcVar8 = acStack_1f8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_1e0 = acStack_1f8;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar13 = 0;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_1a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar3);
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
    _objc_release(pcVar3);
    _objc_release(ppuVar6);
    __Unwind_Resume();
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar7);
    _objc_retain(pcVar8);
    _objc_retain(pcVar11);
    if (ppuVar5 != (undefined **)0x0) {
      plVar14 = (long *)ppuVar5[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_2a0,pcVar1);
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
      func_0x00010002b838(auStack_288,pcVar1);
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
      func_0x00010002b838(auStack_270,pcVar1);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110872980,&uStack_2c0,pcVar12);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      lVar13 = 0;
      do {
        if ((&cStack_259)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
        unaff_x24 = (char *)&uStack_2c0;
      } while (lVar13 != -0x48);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar8);
    ppuVar5 = ppuVar7;
    _objc_release(ppuVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (char *)auStack_2a0);
      _objc_release(pcVar11);
      _objc_release(pcVar8);
      _objc_release(ppuVar7);
      __Unwind_Resume(ppuVar5);
      return &PTR____CFConstantStringClassReference_110dce5f8;
    }
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 10526b040; end: 10526b2ff;  */

/* WARNING: Removing unreachable block (ram,0x00010526b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010526b7b8) */

undefined **
FUN_10526b040(long param_1,undefined **param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  pcVar1 = param_3;
  pcVar7 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
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
      func_0x00010bdc3520();
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
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    ppuVar5 = (undefined **)&UNK_1108728e0;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar1 = pcVar4;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10526b300;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar5;
  pcVar4 = pcVar1;
  pcVar8 = pcVar7;
  puStack_100 = (undefined8 *)unaff_x24;
  ppuStack_f0 = ppuVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  ppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  _objc_retain(pcVar1);
  if (ppuVar3 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar3[1];
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar4);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar4);
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
    ppuVar6 = (undefined **)&UNK_110872930;
    pcVar4 = acStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar10 = 0;
    pcVar8 = pcVar7;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar1);
  ppuVar2 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar1);
    _objc_release(ppuVar5);
    __Unwind_Resume();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar6);
    _objc_retain(pcVar4);
    _objc_retain(pcVar8);
    if (ppuVar2 != (undefined **)0x0) {
      plVar11 = (long *)ppuVar2[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_200,pcVar1);
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
      func_0x00010002b838(auStack_1e8,pcVar1);
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
      func_0x00010002b838(auStack_1d0,pcVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110872980,&uStack_220,pcVar9);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar10 = 0;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = (char *)&uStack_220;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    ppuVar5 = ppuVar6;
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (char *)auStack_200);
      _objc_release(pcVar8);
      _objc_release(pcVar4);
      _objc_release(ppuVar6);
      __Unwind_Resume(ppuVar5);
      return &PTR____CFConstantStringClassReference_110dce5f8;
    }
    return ppuVar5;
  }
  return ppuVar2;
}



/* Entry: 10526b300; end: 10526b52f;  */

/* WARNING: Removing unreachable block (ram,0x00010526b7b8) */

undefined **
FUN_10526b300(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined **ppuVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  pcVar1 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
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
    ppuVar4 = (undefined **)&UNK_110872930;
    pcVar1 = acStack_98;
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
  ppuVar2 = param_2;
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
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    if (ppuVar2 != (undefined **)0x0) {
      plVar7 = (long *)ppuVar2[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(auStack_140,pcVar3);
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
      func_0x00010002b838(auStack_128,pcVar3);
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
      func_0x00010002b838(auStack_110,pcVar3);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110872980,&uStack_160,param_5);
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
    _objc_release(pcVar1);
    ppuVar2 = ppuVar4;
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      _objc_release(ppuVar4);
      __Unwind_Resume(ppuVar2);
      return &PTR____CFConstantStringClassReference_110dce5f8;
    }
    return ppuVar2;
  }
  return ppuVar2;
}



/* Entry: 10526b530; end: 10526b7ef;  */

/* WARNING: Removing unreachable block (ram,0x00010526b7b8) */

undefined **
FUN_10526b530(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
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
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110872980,&uStack_c0,param_5);
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
  ppuVar2 = param_2;
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
    __Unwind_Resume(ppuVar2);
    return &PTR____CFConstantStringClassReference_110dce5f8;
  }
  return ppuVar2;
}



/* Entry: 10526b7f0; end: 10526b7fb; -[SCActivationDeviceIdHoldoutProdSegmentConfig studyExposureName] */

undefined ** FUN_10526b7f0(void)

{
  return &PTR____CFConstantStringClassReference_110dce5f8;
}



/* Entry: 10526b7fc; end: 10526b80f; -[SCActivationDeviceIdHoldoutProdSegmentConfig expirationTime] */

void FUN_10526b7fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x41d968e520000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10526b810; end: 10526b81b; -[SCActivationDeviceIdHoldoutProdSegmentConfig seed] */

undefined ** FUN_10526b810(void)

{
  return &PTR____CFConstantStringClassReference_110dce5f8;
}



/* Entry: 10526b81c; end: 10526b823; -[SCActivationDeviceIdHoldoutProdSegmentConfig version] */

undefined8 FUN_10526b81c(void)

{
  return 2;
}



/* Entry: 10526b824; end: 10526b82f; -[SCActivationDeviceIdHoldoutProdSegmentConfig userRange] */

undefined1  [16] FUN_10526b824(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 100;
  auVar1._0_8_ = 0x60;
  return auVar1;
}



/* Entry: 10526b830; end: 10526b9e7; -[SCActivationDeviceIdHoldoutProdConfig treatments] */

undefined ** FUN_10526b830(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6c40;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8ce0();
  puVar7 = PTR_PTR_1126b6c40;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8ce0();
  ppuVar6 = &puStack_78;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x2) {
    unaff_x23 = puVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = (undefined *)0x32;
    FUN_10540a8a4(0x32,&PTR____CFConstantStringClassReference_110db04d8,unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    puStack_68 = unaff_x24;
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x32;
    FUN_10540a8a4(0x32,&PTR____CFConstantStringClassReference_110db04f8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_68;
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
  else {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return ppuVar8;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10526b9e8;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  ppuStack_b0 = ppuVar8;
  puStack_a8 = puVar2;
  puStack_a0 = puVar7;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  puStack_c8 = PTR_PTR_1126e73a8;
  ppuVar8 = &puStack_d0;
  puStack_d0 = puVar3;
  _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar5 = ppuVar6;
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    puVar7 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    puVar2 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    func_0x00010c125e40(ppuVar5);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    puVar1 = PTR_PTR_1126ae720;
    _objc_retain(ppuVar6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = ppuVar8[1];
    ppuVar8[1] = puVar1;
    _objc_release(puVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar6);
  return ppuVar8;
}



/* Entry: 10526b9e8; end: 10526bb3b; -[SCActivationDeviceIdHoldoutStateProviderImpl initWithClientHardcodedABValueRetriever:] */

undefined8 * FUN_10526b9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e73a8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    puVar3 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    puVar4 = PTR_PTR_1126b6c48;
    _objc_opt_new(PTR_PTR_1126b6c48);
    func_0x00010c125e40(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10526bb3c; end: 10526bc1b;  */

void FUN_10526bb3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b6c40;
  _objc_alloc(PTR_PTR_1126b6c40);
  func_0x00010c008360();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = puVar5;
  func_0x00010bfe3d00();
  func_0x00010c0df760(puVar7,param_2,(int)puVar6 != 2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10526bc1c; end: 10526bc5b; -[SCActivationDeviceIdHoldoutStateProviderImpl featureEnabled] */

undefined8 FUN_10526bc1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10526bc5c; end: 10526bc67; -[SCActivationDeviceIdHoldoutStateProviderImpl .cxx_destruct] */

void FUN_10526bc5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526bc68; end: 10526bce3;  */

undefined * FUN_10526bc68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b9598 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dce618,
                        &UNK_10dd90b30,&UNK_10dd90b58,3,FUN_10526bce4,0);
    do {
      if (puRam00000001136b9598 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b9598;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b9598,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b9598 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b9598;
}



/* Entry: 10526bce4; end: 10526bcef;  */

bool FUN_10526bce4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10526bcf0; end: 10526bd57; +[SCActivationPbHoldout descriptor] */

void FUN_10526bcf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b95a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a264c0,
                        &PTR____CFConstantStringClassReference_110dac4b8,
                        &PTR_s_snapchat_activation_cof_1130cada8,&PTR_s_holdoutState_1130cadc0,1,8,
                        0x1c);
    puRam00000001136b95a0 = puVar1;
  }
  return;
}



/* Entry: 10526bd58; end: 10526bf4b;  */

void FUN_10526bd58(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  param_3 = param_3 & 0xffffffff;
  uVar4 = param_3;
  if (0xf < param_2) {
    uVar5 = param_2 >> 4;
    plVar6 = (long *)(param_1 + 8);
    do {
      param_3 = (plVar6[-1] * -0x775ed61580000000 |
                (ulong)(plVar6[-1] * -0x783c846eeebdac2b) >> 0x21) * 0x4cf5ad432745937f ^ param_3;
      uVar3 = (*plVar6 * 0x4e8b26fe00000000 | (ulong)(*plVar6 * 0x4cf5ad432745937f) >> 0x1f) *
              -0x783c846eeebdac2b ^ uVar4;
      param_3 = ((param_3 >> 0x25 | param_3 << 0x1b) + uVar4) * 5 + 0x52dce729;
      uVar4 = (param_3 + (uVar3 >> 0x21 | uVar3 << 0x1f)) * 5 + 0x38495ab5;
      plVar6 = plVar6 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pbVar1 = (byte *)(param_1 + (param_2 & 0xfffffffffffffff0));
  uVar5 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar5 = (ulong)pbVar1[0xe] << 0x30;
  case 0xe:
    uVar5 = uVar5 | (ulong)pbVar1[0xd] << 0x28;
  case 0xd:
    uVar5 = uVar5 ^ (ulong)pbVar1[0xc] << 0x20;
  case 0xc:
    uVar5 = uVar5 ^ (ulong)pbVar1[0xb] << 0x18;
  case 0xb:
    uVar5 = uVar5 ^ (ulong)pbVar1[10] << 0x10;
  case 10:
    uVar5 = uVar5 ^ (ulong)pbVar1[9] << 8;
  case 9:
    uVar4 = ((uVar5 ^ pbVar1[8]) * 0x4e8b26fe00000000 |
            (uVar5 ^ pbVar1[8]) * 0x4cf5ad432745937f >> 0x1f) * -0x783c846eeebdac2b ^ uVar4;
  case 8:
    uVar5 = (ulong)pbVar1[7] << 0x38;
  case 7:
    uVar5 = uVar5 | (ulong)pbVar1[6] << 0x30;
  case 6:
    uVar5 = uVar5 ^ (ulong)pbVar1[5] << 0x28;
  case 5:
    uVar5 = uVar5 ^ (ulong)pbVar1[4] << 0x20;
  case 4:
    uVar5 = uVar5 ^ (ulong)pbVar1[3] << 0x18;
  case 3:
    uVar5 = uVar5 ^ (ulong)pbVar1[2] << 0x10;
  case 2:
    uVar5 = uVar5 ^ (ulong)pbVar1[1] << 8;
  case 1:
    param_3 = ((uVar5 ^ *pbVar1) * -0x775ed61580000000 |
              (uVar5 ^ *pbVar1) * -0x783c846eeebdac2b >> 0x21) * 0x4cf5ad432745937f ^ param_3;
  case 0:
    uVar5 = (param_3 ^ param_2) + (uVar4 ^ param_2);
    uVar4 = uVar5 + (uVar4 ^ param_2);
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar4 = uVar4 ^ uVar4 >> 0x21;
    lVar2 = uVar4 + (uVar5 ^ uVar5 >> 0x21);
    *param_4 = lVar2;
    param_4[1] = lVar2 + uVar4;
    return;
  }
}



/* Entry: 10526bf4c; end: 10526bfd7; +[SCClientHardcodeStudyDescriptor allStudies] */

undefined * FUN_10526bf4c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10526bfd8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126b6c50;
    _objc_alloc();
    puVar8 = PTR_PTR_1126b6c58;
    puVar2 = PTR_PTR_1126af9b0;
    _objc_alloc();
    puVar3 = PTR_PTR_1126af9b8;
    _objc_opt_new();
    func_0x00010c173040();
    func_0x00010c055080();
    puVar4 = PTR_PTR_1126af9b0;
    _objc_alloc();
    puVar5 = PTR_PTR_1126af9b8;
    _objc_opt_new(PTR_PTR_1126af9b8);
    func_0x00010c173040();
    func_0x00010c055080();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46480(0x41da78223bc00000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e9a0();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      if ((puVar3 == (undefined *)0x0) && (param_2 == 100)) {
        puVar8 = (undefined *)0x1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010526c218();
        puVar8 = (undefined *)(ulong)(puVar3 <= puVar8 && puVar8 < puVar3 + param_2);
        _objc_release(puVar1);
      }
      return puVar8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10526bfd8; end: 10526c18f;  */

undefined * FUN_10526bfd8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126b6c50;
  _objc_alloc();
  puVar6 = PTR_PTR_1126b6c58;
  puVar1 = PTR_PTR_1126af9b0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126af9b8;
  _objc_opt_new();
  func_0x00010c173040();
  func_0x00010c055080();
  puVar3 = PTR_PTR_1126af9b0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126af9b8;
  _objc_opt_new(PTR_PTR_1126af9b8);
  func_0x00010c173040();
  func_0x00010c055080();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46480(0x41da78223bc00000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e9a0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  if ((puVar2 == (undefined *)0x0) && (param_2 == 100)) {
    puVar8 = (undefined *)0x1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010526c218();
    puVar8 = (undefined *)(ulong)(puVar2 <= puVar8 && puVar8 < puVar2 + param_2);
    _objc_release(puVar6);
  }
  return puVar8;
}



/* Entry: 10526c190; end: 10526c2df;  */

bool FUN_10526c190(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  if ((param_1 == (undefined *)0x0) && (param_2 == 100)) {
    bVar3 = true;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010526c218();
    bVar3 = param_1 <= puVar2 && puVar2 < param_1 + param_2;
    _objc_release(puVar1);
  }
  return bVar3;
}



/* Entry: 10526c2e0; end: 10526c453;  */

undefined1 *
FUN_10526c2e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined1 *puVar9;
  undefined1 *unaff_x24;
  long lVar10;
  long lVar11;
  long lStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_140 = param_1;
  uStack_138 = param_2;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010526c218();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar11 = param_3;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x24 = (undefined1 *)0x0;
    lVar10 = *plStack_120;
    unaff_x22 = lVar11;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        puVar3 = puVar9;
        func_0x00010c279220();
        unaff_x24 = puVar3 + (int)unaff_x24;
        if ((long)puVar2 < (long)(int)unaff_x24) {
          _objc_retain(puVar9);
          goto LAB_10526c3fc;
        }
        lVar11 = lVar11 + 1;
      } while (unaff_x22 != lVar11);
      puVar6 = &uStack_130;
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      unaff_x22 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  puVar9 = (undefined1 *)0x0;
LAB_10526c3fc:
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_190;
  pcStack_148 = FUN_10526c454;
  puStack_180 = unaff_x24;
  puStack_178 = puVar9;
  lStack_170 = unaff_x22;
  puStack_168 = puVar2;
  puStack_160 = puVar1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  puStack_188 = PTR_PTR_1126e73b0;
  lStack_190 = lVar11;
  _objc_msgSendSuper2(&lStack_190,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined8 **)((long)plVar4 + 8) = puVar6;
    _objc_release(uVar5);
    _objc_retain(puVar7);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x10);
    *(undefined1 **)((long)plVar4 + 0x10) = puVar7;
    _objc_release(uVar5);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x18);
    *(undefined8 *)((long)plVar4 + 0x18) = uVar8;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x20);
    *(undefined8 *)((long)plVar4 + 0x20) = param_6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined1 *)plVar4;
}



/* Entry: 10526c454; end: 10526c54f; -[SCClientFeatureGatingManualExposureValueImpl initWithTreatment:studyExposureName:experimentLogger:grapheneRegistry:] */

undefined1 *
FUN_10526c454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e73b0;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10526c550; end: 10526c557; -[SCClientFeatureGatingManualExposureValueImpl value] */

void FUN_10526c550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_value_112683588);
  return;
}



/* Entry: 10526c558; end: 10526c5bf; -[SCClientFeatureGatingManualExposureValueImpl configResult] */

void FUN_10526c558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b6c60;
  _objc_alloc(PTR_PTR_1126b6c60);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9c4e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e9c0(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10526c5c0; end: 10526c823; -[SCClientFeatureGatingManualExposureValueImpl expose] */

void FUN_10526c5c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9c4e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5e20(uVar3,param_2,uVar1,uVar4,0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf3ce20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9c4e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6c68;
    _objc_retain(uVar1);
    func_0x00010beec340(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = puVar7;
    func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dce698,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bfec2a0(uVar3,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf3ce40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9c4e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6c70;
    _objc_retain(uVar1);
    func_0x00010beec340(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar8 = puVar7;
    func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dce698,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bfec2a0(uVar3,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10526c824; end: 10526c86b; -[SCClientFeatureGatingManualExposureValueImpl .cxx_destruct] */

void FUN_10526c824(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526c86c; end: 10526c9f3; -[SCClientFeatureGatingValueRetrieverImpl initWithDeviceIdentifierProvider:experimentLogger:circumstanceEngine:grapheneRegistry:userDefaults:] */

undefined1 *
FUN_10526c86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e73b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6c78;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae8e8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae8e8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
    func_0x00010c1260c0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10526c9f4; end: 10526caf3; -[SCClientFeatureGatingValueRetrieverImpl registerClientHardcodeABs] */

void FUN_10526c9f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *in_x5;
  long lVar11;
  long unaff_x22;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 uVar12;
  undefined1 *unaff_x26;
  undefined8 uVar13;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [128];
  long lStack_2b0;
  undefined1 *puStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = PTR_PTR_1126b6c50;
  func_0x00010bf00b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x22 = *plStack_100;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c1260a0(param_1,param_2,*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10526caf4;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar3 = (undefined1 *)puVar9;
  func_0x00010bf3f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x27 = *plStack_230;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != unaff_x27) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x23 = *(undefined **)(lStack_238 + (long)unaff_x28 * 8);
        unaff_x24 = (undefined1 *)puVar9;
        func_0x00010c0691e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined1 *)puVar9;
        func_0x00010bf198a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined1 *)puVar9;
        func_0x00010c115ba0();
        _objc_retainAutoreleasedReturnValue();
        in_x5 = unaff_x26;
        func_0x00010c125e40(puVar1,param_2,unaff_x23,unaff_x24,unaff_x25);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar4 != unaff_x28);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_240,auStack_200,0x10);
      unaff_x22 = 0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puVar3);
  puVar4 = (undefined1 *)puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10526cc78;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lVar5 = *(long *)(puVar4 + 0x38);
  puStack_2a0 = unaff_x28;
  lStack_298 = unaff_x27;
  puStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  lStack_270 = unaff_x22;
  puStack_268 = puVar3;
  puStack_260 = puVar1;
  puStack_258 = (undefined1 *)puVar9;
  ppuStack_250 = &puStack_120;
  func_0x00010c12adc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_370;
  puVar3 = auStack_330;
  lVar10 = 0x10;
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar11 = *plStack_360;
    do {
      lVar10 = 0;
      do {
        if (*plStack_360 != lVar11) {
          _objc_enumerationMutation(lVar5);
        }
        uVar12 = *(undefined8 *)(lStack_368 + lVar10 * 8);
        uVar13 = *(undefined8 *)(puVar4 + 0x28);
        uVar7 = uVar12;
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dce778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c172fe0(uVar13,param_2,0,puVar1);
        _objc_release(puVar1);
        _objc_release(uVar7);
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dc8c58);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b6c70;
        func_0x00010bf150a0(PTR_PTR_1126b6c70);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        func_0x00010be38540(puVar4,param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(uVar12);
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      puVar9 = &uStack_370;
      puVar3 = auStack_330;
      lVar10 = 0x10;
      lVar6 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,puVar9,puVar3);
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  _objc_retain(in_x5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  _objc_opt_new(puVar1);
  func_0x00010c1d0640();
  _objc_release(puVar3);
  if (lVar10 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar10,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf068);
  }
  if (in_x5 != (undefined1 *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,in_x5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf080);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c1d0640(*(undefined8 *)(lVar5 + 0x30),param_2,puVar2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 10526caf4; end: 10526cc77; -[SCClientFeatureGatingValueRetrieverImpl registerClientHardcodeAB:] */

void FUN_10526caf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar12;
  long unaff_x26;
  undefined8 uVar13;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf3f4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        unaff_x24 = param_3;
        func_0x00010c0691e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_3;
        func_0x00010bf198a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_3;
        func_0x00010c115ba0();
        _objc_retainAutoreleasedReturnValue();
        param_6 = unaff_x26;
        func_0x00010c125e40(param_1,param_2,unaff_x23,unaff_x24,unaff_x25);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10526cc78;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar3 = *(long *)(lVar2 + 0x38);
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  lStack_158 = lVar1;
  uStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c12adc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_260;
  puVar9 = auStack_220;
  lVar10 = 0x10;
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_250;
    do {
      lVar10 = 0;
      do {
        if (*plStack_250 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lStack_258 + lVar10 * 8);
        uVar13 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = uVar12;
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dce778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c172fe0(uVar13,param_2,0,puVar5);
        _objc_release(puVar5);
        _objc_release(uVar4);
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dc8c58);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b6c70;
        func_0x00010bf150a0(PTR_PTR_1126b6c70);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
        func_0x00010be38540(lVar2,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(uVar12);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar8 = &uStack_260;
      puVar9 = auStack_220;
      lVar10 = 0x10;
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,puVar8,puVar9);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  _objc_retain(param_6);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  _objc_opt_new(puVar5);
  func_0x00010c1d0640();
  _objc_release(puVar9);
  if (lVar10 != 0) {
    func_0x00010c1d0640(puVar5,param_2,lVar10,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf068);
  }
  if (param_6 != 0) {
    func_0x00010c1d0640(puVar5,param_2,param_6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf080)
    ;
  }
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1d0640(*(undefined8 *)(lVar3 + 0x30),param_2,puVar6,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 10526cc78; end: 10526ce87; -[SCClientFeatureGatingValueRetrieverImpl handleAppWillTerminate] */

void FUN_10526cc78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long in_x5;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c12adc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  lVar9 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = uVar11;
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dce778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c172fe0(uVar12,param_2,0,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar3);
        func_0x00010c25df00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c298be0();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110dc8c58);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b6c70;
        func_0x00010bf150a0(PTR_PTR_1126b6c70);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        func_0x00010be38540(param_1,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar11);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      lVar9 = 0x10;
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,puVar7,puVar8);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  _objc_retain(in_x5);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  _objc_opt_new(puVar4);
  func_0x00010c1d0640();
  _objc_release(puVar8);
  if (lVar9 != 0) {
    func_0x00010c1d0640(puVar4,param_2,lVar9,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf068);
  }
  if (in_x5 != 0) {
    func_0x00010c1d0640(puVar4,param_2,in_x5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf080);
  }
  puVar5 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x30),param_2,puVar5,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 10526ce88; end: 10526cf7f; -[SCClientFeatureGatingValueRetrieverImpl registerCOF:internalConfig:betaConfig:prodConfig:] */

void FUN_10526ce88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d0640();
  _objc_release(param_4);
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf068)
    ;
  }
  if (param_6 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf080)
    ;
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30),param_2,puVar2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10526cf80; end: 10526d003; -[SCClientFeatureGatingValueRetrieverImpl shouldSkipReadingFromCOF:] */

long FUN_10526cf80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be1df60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c25df00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c298be0(lVar1);
    func_0x00010c234a60(param_1,param_2,lVar2,lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10526d004; end: 10526d1c3; -[SCClientFeatureGatingValueRetrieverImpl shouldSkipReadingFromStudyExposureName:version:] */

long FUN_10526d004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x50);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dce778);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf1f320(uVar3,param_2,puVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar4,puVar1);
    _objc_release(puVar4);
    if ((int)uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dc8c58);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b6c70;
      func_0x00010bf150a0(PTR_PTR_1126b6c70);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010be38540(param_1,param_2,puVar6);
      _objc_release(puVar6);
      func_0x00010bf88220(param_1,param_2,param_3,param_4);
      lVar7 = 1;
    }
  }
  else {
    lVar7 = lVar2;
    func_0x00010bf1f3c0(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x50);
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 10526d1c4; end: 10526d25f; -[SCClientFeatureGatingValueRetrieverImpl startUsingCOF:] */

void FUN_10526d1c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c234a40(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be1df60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x00010c25df00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c298be0(uVar1);
      func_0x00010c251780(param_1,param_2,uVar2,uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526d260; end: 10526d31f; -[SCClientFeatureGatingValueRetrieverImpl startUsingStudyExposureName:version:] */

void FUN_10526d260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6c80;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e980();
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dce778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c172fe0(uVar2,param_2,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526d320; end: 10526d3bb; -[SCClientFeatureGatingValueRetrieverImpl doneUsingCOF:] */

void FUN_10526d320(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c234a40(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010be1df60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x00010c25df00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c298be0(uVar1);
      func_0x00010bf88220(param_1,param_2,uVar2,uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526d3bc; end: 10526d47b; -[SCClientFeatureGatingValueRetrieverImpl doneUsingStudyExposureName:version:] */

void FUN_10526d3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dce778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0(uVar2,param_2,0,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126b6c80;
  _objc_alloc(PTR_PTR_1126b6c80);
  func_0x00010c04e980();
  _objc_release(param_3);
  func_0x00010c12d360(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10526d47c; end: 10526d4c7; -[SCClientFeatureGatingValueRetrieverImpl valueFromCOF:crashDetectionOn:] */

void FUN_10526d47c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b84e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526d4c8; end: 10526d657; -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueFromCOF:crashDetectionOn:] */

void FUN_10526d4c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  if ((param_4 == 0) || (lVar2 = param_1, func_0x00010c234a40(), (int)lVar2 == 0)) {
    lVar2 = param_1;
    func_0x00010be1df60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_retain(lVar1);
    }
    else {
      func_0x00010c2933c0(lVar2);
      lVar3 = lVar2;
      func_0x00010c156e80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c25df00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c27b820(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c0b8500(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010bee7880(param_1);
      lVar3 = lVar6;
      if (lVar1 != 0) {
        lVar3 = lVar1;
      }
      _objc_retain(lVar3);
      _objc_release(lVar6);
    }
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10526d658; end: 10526d837; -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueFromCOF:userRange:studySeed:studyExposureName:treatments:] */

void FUN_10526d658(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  FUN_10526c190(param_4,param_5,&PTR____CFConstantStringClassReference_110dce6b8,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((param_4 & 1) == 0) {
    uVar2 = param_3;
    FUN_10526d838(param_3,&PTR____CFConstantStringClassReference_110dce758);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38540(param_1);
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c25d160();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    FUN_10526c2e0(param_6,uVar1,param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar1 = uVar2;
    func_0x00010bf9c4e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_7;
    FUN_10526d838(param_7,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38540(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b6c88;
    _objc_alloc(PTR_PTR_1126b6c88);
    func_0x00010c0556a0();
  }
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10526d838; end: 10526d8cf;  */

void FUN_10526d838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6c70;
  func_0x00010bf0bca0(PTR_PTR_1126b6c70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10526d8d0; end: 10526db17; -[SCClientFeatureGatingValueRetrieverImpl _getConfigForCOF:] */

void FUN_10526d8d0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar3;
  
  uVar3 = param_4;
  _objc_retain();
  iVar2 = (int)uVar3;
  func_0x000100150168();
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x00010c0e00e0(lVar4,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e00e0(lVar4,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126b6c70;
  if (lVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dce7f8;
    if (iVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dce818;
    }
    _objc_retain(param_4);
    _objc_retain(ppuVar1);
    func_0x00010c0ceb00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar8 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110dce858,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010be38540(param_2,param_3,puVar8);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar4 = lVar6;
    func_0x00010bf9c800(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar5,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b6c70;
    if (param_1 <= 0.0) {
      _objc_retain(lVar6);
      lVar4 = lVar6;
      goto LAB_10526dae8;
    }
    _objc_retain(param_4);
    func_0x00010bf9c980(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar5);
    func_0x00010be38540(param_2,param_3,puVar8);
  }
  _objc_release(puVar8);
  lVar4 = 0;
LAB_10526dae8:
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10526db18; end: 10526db87; -[SCClientFeatureGatingValueRetrieverImpl _incrementMetric:] */

void FUN_10526db18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf3ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10526db88; end: 10526dd9b; -[SCClientFeatureGatingValueRetrieverImpl _validateClientAssignmentForCOF:cofExposureValue:clientExposureValue:] */

void FUN_10526db88(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar5 = PTR_s_configResult_1125af238;
  if (param_4 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b6c70;
    func_0x00010bf3f520(PTR_PTR_1126b6c70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_configResult_1125af238);
    if (((ulong)puVar6 & 1) != 0) {
      puVar6 = param_4;
      func_0x00010bf46240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        puVar1 = puVar6;
        func_0x00010c25df20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c08fa60();
        _objc_release(puVar1);
        uVar3 = param_5;
        _objc_opt_respondsToSelector(param_5,puVar5);
        if ((uVar3 & 1) == 0) {
LAB_10526dd58:
          if (puVar2 == (undefined *)0x0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110dce738;
          }
          else {
            ppuVar7 = &PTR____CFConstantStringClassReference_110dce6d8;
          }
          uVar3 = param_3;
          FUN_10526dd9c(param_3,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be38540(param_1);
        }
        else {
          uVar3 = param_5;
          func_0x00010bf46240();
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 == 0) goto LAB_10526dd58;
          uVar4 = uVar3;
          func_0x00010c071ae0();
          ppuVar7 = &PTR____CFConstantStringClassReference_110dce718;
          if ((int)uVar4 == 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110dce6f8;
          }
          uVar4 = param_3;
          FUN_10526dd9c(param_3,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be38540(param_1);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        goto LAB_10526dd24;
      }
    }
    puVar5 = PTR_PTR_1126b6c70;
    _objc_retain(param_3);
    func_0x00010bf3f4e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  _objc_release(puVar5);
  func_0x00010be38540(param_1);
LAB_10526dd24:
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10526dd9c; end: 10526de4f;  */

void FUN_10526dd9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b6c70;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf434e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10526de50; end: 10526de9b; -[SCClientFeatureGatingValueRetrieverImpl boolValueForConfigKeySync:defaultValue:] */

long FUN_10526de50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00010bf1f3c0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 10526de9c; end: 10526dee7; -[SCClientFeatureGatingValueRetrieverImpl intValueForConfigKeySync:defaultValue:] */

long FUN_10526de9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00010c067ec0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 10526dee8; end: 10526df33; -[SCClientFeatureGatingValueRetrieverImpl longValueForConfigKeySync:defaultValue:] */

long FUN_10526dee8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00010c0b4fe0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 10526df34; end: 10526df87; -[SCClientFeatureGatingValueRetrieverImpl floatValueForConfigKeySync:defaultValue:] */

undefined8 FUN_10526df34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010bfb2c80(param_2);
    param_1 = uVar1;
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10526df88; end: 10526e013; -[SCClientFeatureGatingValueRetrieverImpl stringValueForConfigKeySync:defaultValue:] */

void FUN_10526df88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c297000(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x00010c25d700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10526e014; end: 10526e09f; -[SCClientFeatureGatingValueRetrieverImpl protoValueForConfigKeySync:defaultValue:] */

void FUN_10526e014(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c297000(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf04a80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10526e0a0; end: 10526e0a7; -[SCClientFeatureGatingValueRetrieverImpl manualExposureValueForConfigKeySync:] */

void FUN_10526e0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b84f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_manualExposureValueFromCOF_crash_11260bb50,param_3,0);
  return;
}



/* Entry: 10526e0a8; end: 10526e12b; -[SCClientFeatureGatingValueRetrieverImpl .cxx_destruct] */

void FUN_10526e0a8(long param_1)

{
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



/* Entry: 10526e12c; end: 10526e22f; +[SCClientHardcodeSegmentValueConfig configWithStudyExposureName:seed:userRange:expirationTimestamp:treatments:] */

void FUN_10526e12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b6c58;
  _objc_alloc_init();
  if (puVar1 != (undefined *)0x0) {
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)(puVar1 + 0x28) = param_6;
    *(undefined8 *)(puVar1 + 0x30) = param_7;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10526e230; end: 10526e237; -[SCClientHardcodeSegmentValueConfig version] */

undefined8 FUN_10526e230(void)

{
  return 1;
}



/* Entry: 10526e238; end: 10526e23f; -[SCClientHardcodeSegmentValueConfig studyExposureName] */

undefined8 FUN_10526e238(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10526e240; end: 10526e247; -[SCClientHardcodeSegmentValueConfig expirationTime] */

undefined8 FUN_10526e240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10526e248; end: 10526e24f; -[SCClientHardcodeSegmentValueConfig seed] */

undefined8 FUN_10526e248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10526e250; end: 10526e25b; -[SCClientHardcodeSegmentValueConfig userRange] */

undefined1  [16] FUN_10526e250(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 10526e25c; end: 10526e263; -[SCClientHardcodeSegmentValueConfig treatments] */

undefined8 FUN_10526e25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10526e264; end: 10526e2ab; -[SCClientHardcodeSegmentValueConfig .cxx_destruct] */

void FUN_10526e264(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526e2ac; end: 10526e3d7; -[SCClientHardcodeStudyDescriptor initWithStudyName:cofKeys:internalConfig:betaConfig:prodConfig:] */

undefined1 *
FUN_10526e2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e73c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10526e3d8; end: 10526e3df; -[SCClientHardcodeStudyDescriptor studyName] */

undefined8 FUN_10526e3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10526e3e0; end: 10526e3e7; -[SCClientHardcodeStudyDescriptor cofKeys] */

undefined8 FUN_10526e3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10526e3e8; end: 10526e3ef; -[SCClientHardcodeStudyDescriptor internalConfig] */

undefined8 FUN_10526e3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10526e3f0; end: 10526e3f7; -[SCClientHardcodeStudyDescriptor betaConfig] */

undefined8 FUN_10526e3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10526e3f8; end: 10526e3ff; -[SCClientHardcodeStudyDescriptor prodConfig] */

undefined8 FUN_10526e3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10526e400; end: 10526e453; -[SCClientHardcodeStudyDescriptor .cxx_destruct] */

void FUN_10526e400(long param_1)

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



/* Entry: 10526e454; end: 10526e4db; -[SCClientFeatureGatingStudyInfo initWithStudyExposureName:version:] */

undefined1 *
FUN_10526e454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e73c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10526e4dc; end: 10526e4ff; -[SCClientFeatureGatingStudyInfo copyWithZone:] */

undefined8 FUN_10526e4dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10526e500; end: 10526e56b; -[SCClientFeatureGatingStudyInfo hash] */

undefined8 * FUN_10526e500(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10526e5f0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10526e5f0;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10526e5f0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10526e5f0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10526e56c; end: 10526e60b; -[SCClientFeatureGatingStudyInfo isEqual:] */

long FUN_10526e56c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10526e5f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10526e5f0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10526e5f0;
    }
  }
  lVar3 = 1;
LAB_10526e5f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10526e60c; end: 10526e613; -[SCClientFeatureGatingStudyInfo studyExposureName] */

undefined8 FUN_10526e60c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10526e614; end: 10526e61b; -[SCClientFeatureGatingStudyInfo version] */

undefined8 FUN_10526e614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10526e61c; end: 10526e627; -[SCClientFeatureGatingStudyInfo .cxx_destruct] */

void FUN_10526e61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10526e628; end: 10526e653; +[SCGrapheneClientFeatureGatingMetric badState] */

void FUN_10526e628(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e654; end: 10526e67f; +[SCGrapheneClientFeatureGatingMetric assignment] */

void FUN_10526e654(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e680; end: 10526e6ab; +[SCGrapheneClientFeatureGatingMetric missingConfig] */

void FUN_10526e680(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e6ac; end: 10526e6d7; +[SCGrapheneClientFeatureGatingMetric expired] */

void FUN_10526e6ac(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e6d8; end: 10526e703; +[SCGrapheneClientFeatureGatingMetric abStudy] */

void FUN_10526e6d8(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e704; end: 10526e72f; +[SCGrapheneClientFeatureGatingMetric compareToCof] */

void FUN_10526e704(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e730; end: 10526e75b; +[SCGrapheneClientFeatureGatingMetric cofNotSynced] */

void FUN_10526e730(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e75c; end: 10526e787; +[SCGrapheneClientFeatureGatingMetric cofNoConfig] */

void FUN_10526e75c(void)

{
  _objc_alloc(PTR_PTR_1126b6c70);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e788; end: 10526e827; -[SCGrapheneClientFeatureGatingMetric description] */

void FUN_10526e788(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce898;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dce898,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e73d0;
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



/* Entry: 10526e828; end: 10526e9af; -[SCGrapheneRegistry clientFeatureGatingGraphene] */

void FUN_10526e828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10526e8b0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b95b0 != -1) {
    func_0x00010002a2fc(0x1136b95b0,&puStack_48);
  }
  uVar1 = uRam00000001136b95a8;
  _objc_retain(uRam00000001136b95a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526e9b0; end: 10526e9db; +[SCGrapheneClientFeatureGatingCofAbMetric abStudy] */

void FUN_10526e9b0(void)

{
  _objc_alloc(PTR_PTR_1126b6c68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10526e9dc; end: 10526ea7b; -[SCGrapheneClientFeatureGatingCofAbMetric description] */

void FUN_10526e9dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce9b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dce9b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e73d8;
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



/* Entry: 10526ea7c; end: 10526ebbf; -[SCGrapheneRegistry clientFeatureGatingCofAbGraphene] */

void FUN_10526ea7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10526eb04;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b95c0 != -1) {
    func_0x00010002a2fc(0x1136b95c0,&puStack_48);
  }
  uVar1 = uRam00000001136b95b8;
  _objc_retain(uRam00000001136b95b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10526ebc0; end: 10526ec27; -[SCActivationThreadSafeInMemoryCache init] */

undefined1 * FUN_10526ebc0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e73e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10526ec28; end: 10526ec9f; -[SCActivationThreadSafeInMemoryCache objectForKey:] */

void FUN_10526ec28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


