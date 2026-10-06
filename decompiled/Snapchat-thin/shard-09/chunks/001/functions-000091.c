/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069af81c; end: 1069af893;  */

void FUN_1069af81c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950500,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069af894; end: 1069af90b;  */

void FUN_1069af894(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950550,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069af90c; end: 1069afa7f;  */

void FUN_1069af90c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  pcVar1 = param_2;
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109505a0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069afa80;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109505f0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069afa80; end: 1069afaf7;  */

void FUN_1069afa80(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109505f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069afaf8; end: 1069afc6b;  */

void FUN_1069afaf8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950640,&uStack_80,param_3);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_1069afc6c;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950690,&uStack_100,puVar5);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_1069afde0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  puVar5 = puVar7;
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
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109506e0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  pcStack_188 = FUN_1069aff54;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  pppuStack_190 = &ppuStack_110;
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
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950730,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_280;
  pcStack_208 = FUN_1069b00c8;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  puVar5 = puVar7;
  pppuStack_210 = &pppuStack_190;
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
    func_0x00010002b838(auStack_260,pcVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950780,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcStack_288 = FUN_1069b023c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pppuStack_290 = &pppuStack_210;
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
    func_0x00010002b838(auStack_2e0,pcVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109507d0,&uStack_300,puVar5);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_328 = (undefined1 *)&uStack_340;
  pcStack_308 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    pcStack_320 = pcVar2;
    pcStack_318 = pcVar1;
    pppuStack_310 = &pppuStack_290;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_340,pcVar4);
    func_0x00010007e5dc(&puStack_328);
  }
  return;
}



/* Entry: 1069afc6c; end: 1069afddf;  */

void FUN_1069afc6c(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950690,&uStack_80,param_3);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_1069afde0;
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
    pcVar4 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109506e0,&uStack_100,puVar5);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_1069aff54;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  puVar5 = puVar7;
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950730,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  pcStack_188 = FUN_1069b00c8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  pppuStack_190 = &ppuStack_110;
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
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950780,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_208 = FUN_1069b023c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pppuStack_210 = &pppuStack_190;
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
    func_0x00010002b838(auStack_260,pcVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109507d0,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    pcStack_2a0 = pcVar2;
    pcStack_298 = pcVar4;
    pppuStack_290 = &pppuStack_210;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_2c0,pcVar1);
    func_0x00010007e5dc(&puStack_2a8);
  }
  return;
}



/* Entry: 1069afde0; end: 1069aff53;  */

void FUN_1069afde0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  char *pcStack_220;
  char *pcStack_218;
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
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109506e0,&uStack_80,param_3);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_1069aff54;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950730,&uStack_100,puVar5);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_1069b00c8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  puVar5 = puVar7;
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950780,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_1069b023c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pppuStack_190 = &ppuStack_110;
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
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109507d0,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    pcStack_220 = pcVar2;
    pcStack_218 = pcVar1;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_240,pcVar4);
    func_0x00010007e5dc(&puStack_228);
  }
  return;
}



/* Entry: 1069aff54; end: 1069b00c7;  */

void FUN_1069aff54(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950730,&uStack_80,param_3);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_1069b00c8;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110950780,&uStack_100,puVar5);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1069b023c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
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
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109507d0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    pcStack_1a0 = pcVar2;
    pcStack_198 = pcVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_1c0,pcVar1);
    func_0x00010007e5dc(&puStack_1a8);
  }
  return;
}



/* Entry: 1069b00c8; end: 1069b023b;  */

void FUN_1069b00c8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110950780,&uStack_80,param_3);
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
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1069b023c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
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
    pcVar4 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109507d0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 1069b023c; end: 1069b03af;  */

void FUN_1069b023c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  pcVar1 = param_2;
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109507d0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069b03b0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950820,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069b03b0; end: 1069b0427;  */

void FUN_1069b03b0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950820,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b0428; end: 1069b0657;  */

void FUN_1069b0428(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
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
  pcVar1 = param_2;
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110950870,&uStack_98,param_4);
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
  pcVar2 = param_2;
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
  pcStack_a8 = FUN_1069b0658;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1109508c0,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1069b0658; end: 1069b06cf;  */

void FUN_1069b0658(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109508c0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b06d0; end: 1069b0843;  */

void FUN_1069b06d0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  pcVar1 = param_2;
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110950910,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069b0844;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950960,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069b0844; end: 1069b08bb;  */

void FUN_1069b0844(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950960,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b08bc; end: 1069b0933;  */

void FUN_1069b08bc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109509b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b0934; end: 1069b09ab;  */

void FUN_1069b0934(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950a00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b09ac; end: 1069b0a23;  */

void FUN_1069b09ac(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950a50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b0a24; end: 1069b0b97;  */

void FUN_1069b0a24(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
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
  pcVar1 = param_2;
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110950aa0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1069b0b98;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110950af0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1069b0b98; end: 1069b0c0f;  */

void FUN_1069b0b98(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950af0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b0c10; end: 1069b0c87;  */

void FUN_1069b0c10(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110950b40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1069b0c88; end: 1069b1227; -[WebLensArchiveReader initWithArchivePath:] */

undefined8 * FUN_1069b0c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *unaff_x21;
  long *plVar18;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined uStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_b8 = PTR_PTR_1126f40f0;
  puVar17 = &uStack_c0;
  puVar13 = PTR_s_init_1125d9248;
  uStack_c0 = param_1;
  _objc_msgSendSuper2();
  if (puVar17 != (undefined8 *)0x0) {
    _objc_retainAutorelease(param_3);
    uVar14 = param_3;
    func_0x00010bdc3520(param_3);
    func_0x00010002b838(&pppuStack_d8,uVar14);
    ppppuVar5 = (undefined8 ****)pppuStack_d8;
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
      ppppuVar5 = &pppuStack_d8;
    }
    func_0x00010a151324(&uStack_f0,ppppuVar5,uStack_d0);
    func_0x00010a151214();
    puVar13 = (undefined *)CONCAT71(uStack_ef,uStack_f0);
    if (-1 < cStack_d9) {
      puVar13 = &uStack_f0;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcStack_b0 = FUN_1069b161c;
    ppuStack_a8 = &PTR_FUN_110950c70;
    func_0x00010a150300(&puStack_100);
    plVar6 = plStack_f8;
    puVar16 = puStack_100;
    puStack_100 = (undefined8 *)0x0;
    plStack_f8 = (long *)0x0;
    plVar18 = (long *)puVar17[2];
    puVar17[2] = plVar6;
    puVar17[1] = puVar16;
    if (plVar18 != (long *)0x0) {
      plVar6 = plVar18 + 1;
      do {
        lVar15 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    unaff_x21 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar6 = plStack_f8 + 1;
      do {
        lVar15 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    lVar15 = puVar17[1];
    if (lVar15 != 0) {
      puVar16 = *(undefined8 **)(lVar15 + 0x18);
      unaff_x21 = *(long **)(lVar15 + 0x20);
      puStack_100 = puVar16;
      plStack_f8 = unaff_x21;
      if (unaff_x21 == (long *)0x0) {
        if (puVar16 != (undefined8 *)0x0) goto LAB_1069b0e74;
      }
      else {
        plVar6 = unaff_x21 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar16 != (undefined8 *)0x0) {
LAB_1069b0e74:
          func_0x0001092bce90(puVar16);
          plVar6 = (long *)*puVar16;
          (**(code **)(*plVar6 + 0x50))();
          puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = *plVar6;
          lVar2 = plVar6[1];
          if (lVar15 != lVar2) {
            do {
              ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar9 != (undefined **)0x0) {
                ppuVar1 = ppuVar9;
              }
              _objc_retain(ppuVar1);
              _objc_release(ppuVar9);
              func_0x00010befa120(puVar7);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar8);
              _objc_release(puVar10);
              _objc_release(ppuVar1);
              lVar15 = lVar15 + 0x28;
            } while (lVar15 != lVar2);
          }
          puVar10 = puVar7;
          func_0x00010bf51e00();
          uVar14 = puVar17[3];
          puVar17[3] = puVar10;
          _objc_release(uVar14);
          puVar10 = puVar8;
          func_0x00010bf51e00();
          uVar14 = puVar17[4];
          puVar17[4] = puVar10;
          _objc_release(uVar14);
          if (*(char *)((long)puVar17 + 0x3f) < '\0') {
            __ZdlPv(puVar17[5]);
          }
          puVar17[6] = uStack_e8;
          puVar17[5] = CONCAT71(uStack_ef,uStack_f0);
          puVar17[7] = CONCAT17(cStack_d9,uStack_e0);
          cStack_d9 = '\0';
          uStack_f0 = 0;
          _objc_release(puVar8);
          _objc_release(puVar7);
          unaff_x21 = plStack_f8;
          if (plStack_f8 != (long *)0x0) {
            plVar6 = plStack_f8 + 1;
            do {
              lVar15 = *plVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
            }
          }
          if (cStack_d9 < '\0') {
            __ZdlPv(CONCAT71(uStack_ef,uStack_f0));
          }
          if ((char)bStack_c1 < '\0') {
            __ZdlPv(pppuStack_d8);
          }
          _objc_retain(puVar17);
          puVar16 = puVar17;
          goto LAB_1069b1090;
        }
        do {
          lVar15 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
        }
      }
    }
    if (cStack_d9 < '\0') {
      __ZdlPv(CONCAT71(uStack_ef,uStack_f0));
    }
    if ((char)bStack_c1 < '\0') {
      __ZdlPv(pppuStack_d8);
    }
  }
  while( true ) {
    puVar16 = (undefined8 *)0x0;
LAB_1069b1090:
    _objc_release(param_3);
    puVar11 = puVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
    iVar12 = (int)puVar13;
    if (iVar12 == 0) {
      __Unwind_Resume();
      puVar17 = (undefined8 *)puVar11[3];
      _objc_retain(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
      return puVar17;
    }
    _objc_release(unaff_x21);
    FUN_1069b1648(&puStack_100);
    if (cStack_d9 < '\0') {
      __ZdlPv(CONCAT71(uStack_ef,uStack_f0));
    }
    if ((char)bStack_c1 < '\0') {
      __ZdlPv(pppuStack_d8);
    }
    ___cxa_begin_catch(puVar11);
    if (iVar12 == 2) {
      ___cxa_end_catch();
    }
    else {
      ___cxa_end_catch();
    }
  }
  return puVar16;
}



/* Entry: 1069b1228; end: 1069b124f; -[WebLensArchiveReader entryNames] */

void FUN_1069b1228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069b1250; end: 1069b12b3; -[WebLensArchiveReader sizeOfEntryAtPath:] */

ulong FUN_1069b1250(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c282760(uVar1);
    uVar2 = uVar2 & 0xffffffff;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1069b12b4; end: 1069b1563; -[WebLensArchiveReader readEntryAtPath:] */

void FUN_1069b12b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  bool bVar10;
  long *aplStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  long *plStack_58;
  long *plStack_50;
  
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) goto LAB_1069b1480;
  uVar5 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc3520();
  func_0x00010002b838(aplStack_78,uVar5);
  uVar1 = *(ulong *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x28);
  if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x3f);
    lVar2 = param_1 + 0x28;
  }
  pplVar6 = aplStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pplVar6,0,lVar2,uVar1);
  plStack_58 = pplVar6[1];
  ppuStack_60 = (undefined8 **)*pplVar6;
  plStack_50 = pplVar6[2];
  pplVar6[1] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  *pplVar6 = (long *)0x0;
  if (cStack_61 < '\0') {
    __ZdlPv(aplStack_78[0]);
  }
  puVar8 = (undefined8 *)(param_1 + 0x40);
  __ZNSt3__15mutex4lockEv();
  func_0x00010a151214();
  plVar7 = plStack_58;
  pppuVar3 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)plStack_50) {
    plVar7 = (long *)((ulong)plStack_50 >> 0x38);
    pppuVar3 = &ppuStack_60;
  }
  func_0x00010a14f6f8(aplStack_78,*puVar8,pppuVar3,plVar7);
  if (aplStack_78[0] == (long *)0x0) {
    __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
LAB_1069b146c:
    puVar4 = (undefined *)0x0;
  }
  else {
    if (*(uint *)(aplStack_78[0] + 1) < 5) {
      plVar7 = (long *)*aplStack_78[0];
      (**(code **)(*plVar7 + 0x10))();
      if ((int)plVar7 == 0) goto LAB_1069b1424;
      puVar8 = (undefined8 *)*aplStack_78[0];
      (**(code **)*puVar8)();
      plVar7 = (long *)*aplStack_78[0];
      (**(code **)(*plVar7 + 0x18))();
      bVar10 = true;
      if ((puVar8 != (undefined8 *)0x0) && (0 < (long)plVar7)) {
        puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        bVar10 = false;
      }
    }
    else {
LAB_1069b1424:
      bVar10 = true;
    }
    plVar7 = aplStack_78[0];
    aplStack_78[0] = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x40))();
      }
      __ZdlPv(plVar7);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
    if (bVar10) goto LAB_1069b146c;
  }
  if ((long)plStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
LAB_1069b1480:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069b1564; end: 1069b15ef; -[WebLensArchiveReader .cxx_destruct] */

void FUN_1069b1564(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1069b15f0; end: 1069b161b; -[WebLensArchiveReader .cxx_construct] */

void FUN_1069b15f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1069b161c; end: 1069b162b;  */

void FUN_1069b161c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105277f8c(param_3);
  return;
}



/* Entry: 1069b162c; end: 1069b1647;  */

void FUN_1069b162c(void)

{
  return;
}



/* Entry: 1069b1648; end: 1069b169f;  */

long FUN_1069b1648(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1069b16a0; end: 1069b171f; -[SCConnectedLensInTalkServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b16a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110950c90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf7d0;
  _objc_alloc(PTR_PTR_1126cf7d0);
  func_0x00010c00a540();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112754d74),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069b1720; end: 1069b173b;  */

void FUN_1069b1720(void)

{
  _objc_opt_new(PTR_PTR_1126cf7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b173c; end: 1069b1777; -[SCConnectedLensInTalkServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b173c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112754d74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754d78);
  return;
}



/* Entry: 1069b1778; end: 1069b187f; -[SCLensTalkVideoHandlingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b1778(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_112754d7c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0961e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069b1880; end: 1069b18f7;  */

void FUN_1069b1880(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bf487a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010beace60(param_1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069b18f8; end: 1069b195b; -[SCLensTalkVideoHandlingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b18f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112754d80;
  func_0x00010bf3a200(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f40f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b195c; end: 1069b1a2b; -[SCLensTalkVideoHandlingEntryPoint _setupHandlerWithConnectedLensComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b195c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cf7d8;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112754d84;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112754d88;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf48800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0020a0(puVar1,param_2,param_3,lVar2,lVar4);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112754d80);
  *(undefined **)(param_1 + _DAT_112754d80) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1069b1a2c; end: 1069b1a7f; -[SCLensTalkVideoHandlingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b1a2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754d7c);
  _objc_destroyWeak(param_1 + _DAT_112754d88);
  _objc_destroyWeak(param_1 + _DAT_112754d84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754d80,0);
  return;
}



/* Entry: 1069b1a80; end: 1069b1ae3; -[SCTalkLensProcessingResolutionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b1a80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112754d8c;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + _DAT_112754d90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13aa60(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b1ae4; end: 1069b1b33; -[SCTalkLensProcessingResolutionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b1ae4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754d8c);
  _objc_destroyWeak(param_1 + _DAT_112754d90);
  _objc_destroyWeak(param_1 + _DAT_112754d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754d94);
  return;
}



/* Entry: 1069b1b34; end: 1069b1b4f; -[SCTalkLensProcessingResolverServiceProvider provide] */

void FUN_1069b1b34(void)

{
  _objc_opt_new(PTR_PTR_1126cf7e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b1b50; end: 1069b1b5f; -[SCTalkLensProcessingResolverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b1b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754d9c);
  return;
}



/* Entry: 1069b1b60; end: 1069b1bd3; -[SCLensVideoStreamAdapter initWithLensStreamProvider:] */

undefined1 * FUN_1069b1b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4100;
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



/* Entry: 1069b1bd4; end: 1069b1bdb; -[SCLensVideoStreamAdapter currentFrame] */

void FUN_1069b1bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentFrame_1125b54b0);
  return;
}



/* Entry: 1069b1bdc; end: 1069b1be3; -[SCLensVideoStreamAdapter currentFrameTimestampUs] */

void FUN_1069b1bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5ecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_currentFrameTimestampUs_1125b54d0);
  return;
}



/* Entry: 1069b1be4; end: 1069b1bef; -[SCLensVideoStreamAdapter .cxx_destruct] */

void FUN_1069b1be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b1bf0; end: 1069b1c53; -[SCTalkLensProcessingResolver init] */

undefined1 * FUN_1069b1bf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069b1c54; end: 1069b1c5b; -[SCTalkLensProcessingResolver lensProcessingLegacyServicesFuture] */

void FUN_1069b1c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 1069b1c5c; end: 1069b1c63; -[SCTalkLensProcessingResolver resolveLensProcessingLegacyServices:] */

void FUN_1069b1c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeWithValue__1125ae900);
  return;
}



/* Entry: 1069b1c64; end: 1069b1c6f; -[SCTalkLensProcessingResolver .cxx_destruct] */

void FUN_1069b1c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b1c70; end: 1069b1d0f; -[SCConnectedLensInTalkServiceImpl init] */

undefined1 * FUN_1069b1c70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069b1d10; end: 1069b1d57; -[SCConnectedLensInTalkServiceImpl connectedLensSessionJoined] */

void FUN_1069b1d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069b1d58; end: 1069b1db3; -[SCConnectedLensInTalkServiceImpl isInConnectedLensSessionObservable] */

void FUN_1069b1d58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1069b1db4; end: 1069b1dbf; -[SCConnectedLensInTalkServiceImpl .cxx_destruct] */

void FUN_1069b1db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b1dc0; end: 1069b1fbf; -[SCLensTalkVideoCallHandler initWithConnectedLensComponent:talkVideoHandlingScope:connectedLensInTalkService:] */

undefined8 *
FUN_1069b1dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f4118;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 3) = 0;
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c075380();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = uVar5;
    func_0x00010c268560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069b1fc0; end: 1069b1fc7;  */

void FUN_1069b1fc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1069b1fc8; end: 1069b1ff3;  */

void FUN_1069b1fc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b1ff4; end: 1069b201f; -[SCLensTalkVideoCallHandler cleanup] */

void FUN_1069b1ff4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b2020; end: 1069b2073; -[SCLensTalkVideoCallHandler _handleSelfStreamUpdateWithIsSelfStream:] */

void FUN_1069b2020(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x18) = (char)param_3;
  func_0x00010bde6360();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c257000();
  }
  else {
    func_0x00010c251de0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b2074; end: 1069b213b; -[SCLensTalkVideoCallHandler _handleRemoteVideoStream:] */

void FUN_1069b2074(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if ((bool)param_1[0x19] != (param_3 != 0)) {
    param_1[0x19] = param_3 != 0;
    if (param_3 == 0) {
      func_0x00010bde6360(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dfa0();
    }
    else {
      puVar1 = PTR_PTR_1126cf7e8;
      _objc_alloc(PTR_PTR_1126cf7e8);
      func_0x00010c025920();
      func_0x00010bde6360(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befae40();
      _objc_release(param_1);
      param_1 = puVar1;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b213c; end: 1069b2143; -[SCLensTalkVideoCallHandler _connectedLensComponent] */

void FUN_1069b213c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1069b2144; end: 1069b22cb; -[SCLensTalkVideoCallHandler _handleInConnectedLensSession] */

void FUN_1069b2144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c07d700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069b22cc;
  puStack_68 = &UNK_110842a38;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c12a700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1069b22cc; end: 1069b232b;  */

void FUN_1069b22cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2fd00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b232c; end: 1069b2373;  */

void FUN_1069b232c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ee00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b2374; end: 1069b23af; -[SCLensTalkVideoCallHandler .cxx_destruct] */

void FUN_1069b2374(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b23b0; end: 1069b247b; -[SCTLensARBarWrapperView initWithFrame:lensUIProvider:] */

undefined1 *
FUN_1069b23b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4120;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_lensUIProvider__1125e2bd8,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf08e80(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    func_0x00010c14c940(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b247c; end: 1069b2483; -[SCTLensARBarWrapperView touchSurface] */

undefined8 FUN_1069b247c(void)

{
  return 1;
}



/* Entry: 1069b2484; end: 1069b254f; -[SCTLensCTAWrapperView initWithFrame:lensUIProvider:] */

undefined1 *
FUN_1069b2484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4128;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_lensUIProvider__1125e2bd8,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010c24a300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    func_0x00010c14c920(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b2550; end: 1069b2557; -[SCTLensCTAWrapperView touchSurface] */

undefined8 FUN_1069b2550(void)

{
  return 2;
}



/* Entry: 1069b2558; end: 1069b2623; -[SCTLensCarouselWrapperView initWithFrame:lensUIProvider:] */

undefined1 *
FUN_1069b2558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4130;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_lensUIProvider__1125e2bd8,param_7);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010c090820(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    func_0x00010c14c940(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b2624; end: 1069b262b; -[SCTLensCarouselWrapperView touchSurface] */

undefined8 FUN_1069b2624(void)

{
  return 0;
}



/* Entry: 1069b262c; end: 1069b271f; -[SCTLensCarouselWrapperView layoutSubviews] */

void FUN_1069b262c(undefined8 param_1)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1069b26d4;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069b2720; end: 1069b27d7; -[SCTLensTouchObservingGestureRecognizer initWithTouchActiveChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1069b2720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithTarget_action__1125f1c48,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754dc0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112754dc0) = uVar2;
    _objc_release(uVar3);
    func_0x00010c178280(puVar1);
    func_0x00010c18b5a0(puVar1);
    func_0x00010c18b5c0(puVar1);
    func_0x00010c18b5e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b27d8; end: 1069b287f; -[SCTLensTouchObservingGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b27d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_48 = PTR_PTR_1126f4138;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3,param_4);
  lVar3 = (long)_DAT_112754dc4;
  lVar4 = *(long *)(param_1 + lVar3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  *(long *)(param_1 + lVar3) = *(long *)(param_1 + lVar3) + lVar2;
  if (lVar4 == 0) {
    func_0x00010c0dcde0(param_1);
  }
  return;
}



/* Entry: 1069b2880; end: 1069b2903; -[SCTLensTouchObservingGestureRecognizer touchesEnded:withEvent:] */

void FUN_1069b2880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_touchesEnded_withEvent__11267b788;
  puStack_38 = PTR_PTR_1126f4138;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3,param_4);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bfd1680(param_1);
  return;
}



/* Entry: 1069b2904; end: 1069b2987; -[SCTLensTouchObservingGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1069b2904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_touchesCancelled_withEvent__112526c90;
  puStack_38 = PTR_PTR_1126f4138;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3,param_4);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bfd1680(param_1);
  return;
}



/* Entry: 1069b2988; end: 1069b29d3; -[SCTLensTouchObservingGestureRecognizer handleLiftedTouchCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2988(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112754dc4);
  lVar1 = 0;
  if (param_3 <= uVar2) {
    lVar1 = uVar2 - param_3;
  }
  *(long *)(param_1 + _DAT_112754dc4) = lVar1;
  if (param_3 <= uVar2 && uVar2 - param_3 != 0) {
    return;
  }
  func_0x00010c0dcde0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,5);
  return;
}



/* Entry: 1069b29d4; end: 1069b2a1f; -[SCTLensTouchObservingGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b29d4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4138;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  *(undefined8 *)(param_1 + _DAT_112754dc4) = 0;
  return;
}



/* Entry: 1069b2a20; end: 1069b2a3f; -[SCTLensTouchObservingGestureRecognizer notifyActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112754dc0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069b2a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1069b2a40; end: 1069b2a47; -[SCTLensTouchObservingGestureRecognizer gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1069b2a40(void)

{
  return 1;
}



/* Entry: 1069b2a48; end: 1069b2a5b; -[SCTLensTouchObservingGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754dc0,0);
  return;
}



/* Entry: 1069b2a5c; end: 1069b2bb7; -[SCTTouchTrackingWrapperView initWithFrame:lensUIProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069b2a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4140;
  puVar1 = &uStack_60;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112754dc8,param_7);
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126cf7f0;
    _objc_alloc(PTR_PTR_1126cf7f0);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0549a0(puVar2);
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1069b2bb8; end: 1069b2c23;  */

void FUN_1069b2bb8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0978c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277480(param_1);
    func_0x00010c1bcea0(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b2c24; end: 1069b2cb3; -[SCTTouchTrackingWrapperView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2c24(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4140;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + _DAT_112754dc8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c277480(param_1);
    func_0x00010c1bcea0(lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1069b2cb4; end: 1069b2cbb; -[SCTTouchTrackingWrapperView requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_1069b2cb4(void)

{
  return 0;
}



/* Entry: 1069b2cbc; end: 1069b2cdb; -[SCTTouchTrackingWrapperView lensUIProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2cbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112754dc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b2cdc; end: 1069b2ceb; -[SCTTouchTrackingWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754dc8);
  return;
}



/* Entry: 1069b2cec; end: 1069b3157; -[SCModularCallEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b2cec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126cf7f8;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1069b3158(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf29340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffac20();
  uVar20 = *(undefined8 *)(param_1 + _DAT_112754dd4);
  *(undefined **)(param_1 + _DAT_112754dd4) = puVar1;
  _objc_release(uVar20);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126cf800;
  _objc_alloc();
  lVar4 = param_1;
  func_0x0001069b317c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c268980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf280a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x0001069b317c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf28040();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x0001069b317c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c268820();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_1069b3158();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c22bb60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112754e18;
  _objc_loadWeakRetained();
  lVar17 = lVar2;
  func_0x00010c268a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112754e24;
  _objc_loadWeakRetained();
  lVar18 = lVar3;
  func_0x00010c0b3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050680();
  uVar20 = *(undefined8 *)(param_1 + _DAT_112754dd8);
  *(undefined **)(param_1 + _DAT_112754dd8) = puVar1;
  _objc_release(uVar20);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar2 = param_1;
  func_0x0001069b31c4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf281e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2355a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
    _objc_initWeak(auStack_70,param_1);
    param_1 = param_1 + _DAT_112754e2c;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = auStack_80;
    _objc_copyWeak(puVar19,auStack_70);
    uStack_78 = param_2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9d60(lVar2);
    _objc_release(puVar19);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    return;
  }
  lVar2 = param_1 + _DAT_112754dfc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf0340(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1069b3158; end: 1069b31e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b3158(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754df4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b31e8; end: 1069b3237;  */

void FUN_1069b31e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf0340(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069b3238; end: 1069b3417; -[SCModularCallEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b3238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112754ddc;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  lVar5 = param_1;
  FUN_1069b3158(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0978c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208080();
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  FUN_1069b3158(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0978c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c80c0();
  _objc_release(lVar3);
  _objc_release(lVar5);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112754dd8));
  lVar5 = (long)_DAT_112754de0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112754de4;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    func_0x00010bfaf680(puVar1);
  }
  else {
    lVar3 = param_1 + _DAT_112754df0;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      func_0x00010bfaf680(puVar1);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1069b3418;
      puStack_50 = &UNK_110842e18;
      _objc_retain(puVar1);
      puStack_48 = puVar1;
      func_0x00010bf6f440(lVar4,param_2,&puStack_68);
      _objc_release(puStack_48);
    }
    *(undefined1 *)(param_1 + lVar5) = 1;
    func_0x00010bedc300(param_1);
    _objc_release(lVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c117720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069b3418; end: 1069b341f;  */

void FUN_1069b3418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1069b3420; end: 1069b3d03; -[SCModularCallEntryPoint _createModularCallViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b3420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  uStack_98 = 0;
  uVar39 = 0x2020000000;
  uStack_88 = 0x2020000000;
  uStack_80 = 1;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  lVar1 = param_1;
  puStack_d0 = &uStack_d8;
  puStack_b0 = &uStack_b8;
  puStack_90 = &uStack_98;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf280a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1069b3d04;
  puStack_e8 = &UNK_110950d30;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1069b3e40;
  puStack_110 = &UNK_110950d60;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x1069b3e54;
  puStack_140 = &UNK_110950db0;
  puStack_138 = &uStack_98;
  puStack_130 = &uStack_b8;
  puStack_108 = &uStack_d8;
  lStack_e0 = param_1;
  func_0x00010c0c0280();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_160,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_188 = puVar4;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1069b3e74;
  puStack_170 = &UNK_110852ad0;
  _objc_copyWeak(auStack_168,auStack_160);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf808;
  _objc_alloc();
  lVar5 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf2b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c0978c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112754e0c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112754e00;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_112754e04;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_112754e08;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112754dec;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112754dec;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf07b80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112754e34;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c22bba0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112754e20;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf281e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112754e10;
  _objc_loadWeakRetained();
  lVar26 = param_1 + _DAT_112754e14;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf34a60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0ee5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112754e30;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112754dfc;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  func_0x00010c22bb80();
  lVar36 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  func_0x00010bf488c0();
  func_0x00010c00af00();
  lVar38 = (long)_DAT_112754de8;
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar4;
  _objc_release(uVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c1b05e0(*(undefined8 *)(param_1 + lVar38));
  lVar1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0dc140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce180(*(undefined8 *)(param_1 + lVar38));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar11 = param_1;
  func_0x00010bebeb80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0978c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208080();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar9 = param_1;
  func_0x00010be60720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112754df4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0978c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c80c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b16e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112754e20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf281e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28200();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_198,auStack_160);
  uStack_190 = uVar39;
  func_0x00010c150360(uVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + _DAT_112754de0);
  *(undefined **)(param_1 + _DAT_112754de0) = puVar4;
  _objc_release(uVar37);
  lVar1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bedc300(param_1);
  _objc_destroyWeak(auStack_198);
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b3d04; end: 1069b3e3f;  */

void FUN_1069b3d04(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c2688a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  if (param_4 != 0) {
    uVar5 = uVar2;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c074920();
    if ((int)uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001069b31c4();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf281e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c074b20();
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar5);
      if ((int)uVar4 == 0) goto LAB_1069b3e28;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001069b3158(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010bf287e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf517c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b7c0(uVar1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    _objc_release(uVar5);
  }
LAB_1069b3e28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069b3e40; end: 1069b3e73;  */

void FUN_1069b3e40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 1069b3e74; end: 1069b3f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b3e74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b0e90;
    _objc_alloc(PTR_PTR_1126b0e90);
    lVar1 = param_1 + _DAT_112754e1c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c80(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069b3f2c; end: 1069b3f5f;  */

void FUN_1069b3f2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6c680(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b3f60; end: 1069b40e3; -[SCModularCallEntryPoint _sponsoredLensAttachmentContainer:] */

void FUN_1069b3f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069b40e4;
  puStack_70 = &UNK_11084d918;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = param_2;
  func_0x00010c0311a0(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069b40e4; end: 1069b4217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b40e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2080a0(*(undefined8 *)(lVar1 + _DAT_112754dd8));
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069b4218; end: 1069b4263; -[SCModularCallEntryPoint _miniCameraTrayContainer:] */

void FUN_1069b4218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3b20;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038ea0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


