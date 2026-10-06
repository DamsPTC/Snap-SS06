/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c8adc4; end: 105c8af37;  */

char * FUN_105c8adc4(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  char *pcStack_230;
  undefined *puStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3088,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_100;
  pcStack_88 = FUN_105c8af38;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  puVar8 = puVar6;
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar3 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e30d8,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_180;
  pcStack_108 = FUN_105c8b0ac;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  puVar6 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  puVar7 = &uStack_200;
  pcStack_188 = FUN_105c8b220;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar6;
  ppuStack_190 = &ppuStack_110;
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
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_200,puVar6);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_230;
  pcStack_208 = FUN_105c8b394;
  pcStack_220 = pcVar2;
  pcStack_218 = pcVar1;
  ppuStack_210 = &ppuStack_190;
  _objc_retain(puVar8);
  puStack_228 = PTR_PTR_1126ecae8;
  pcStack_230 = pcVar3;
  _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(puVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined1 **)((long)ppcVar4 + 8) = puVar8;
    _objc_release(uVar5);
  }
  _objc_release(puVar8);
  return (char *)ppcVar4;
}



/* Entry: 105c8af38; end: 105c8b0ab;  */

char * FUN_105c8af38(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e30d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_100;
  pcStack_88 = FUN_105c8b0ac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_180;
  pcStack_108 = FUN_105c8b220;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
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
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1b0;
  pcStack_188 = FUN_105c8b394;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar5;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(puVar6);
  puStack_1a8 = PTR_PTR_1126ecae8;
  pcStack_1b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar6;
    _objc_release(uVar4);
  }
  _objc_release(puVar6);
  return (char *)ppcVar3;
}



/* Entry: 105c8b0ac; end: 105c8b21f;  */

char * FUN_105c8b0ac(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
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
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
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
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_100;
  pcStack_88 = FUN_105c8b220;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar6;
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
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
  pcStack_108 = FUN_105c8b394;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  puStack_128 = PTR_PTR_1126ecae8;
  pcStack_130 = pcVar3;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(puVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined1 **)((long)ppcVar4 + 8) = puVar8;
    _objc_release(uVar5);
  }
  _objc_release(puVar8);
  return (char *)ppcVar4;
}



/* Entry: 105c8b220; end: 105c8b393;  */

char * FUN_105c8b220(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108e3178,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_105c8b394;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126ecae8;
  pcStack_b0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 105c8b394; end: 105c8b407; -[SCBillboardSignalProviderScope initWithPlugInRegistry:] */

undefined1 * FUN_105c8b394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecae8;
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



/* Entry: 105c8b408; end: 105c8b40f; -[SCBillboardSignalProviderScope plugInRegistry] */

undefined8 FUN_105c8b408(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c8b410; end: 105c8b41b; -[SCBillboardSignalProviderScope .cxx_destruct] */

void FUN_105c8b410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c8b41c; end: 105c8b497;  */

undefined * FUN_105c8b41c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2220 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e264f8,
                        &UNK_10ddcfbd8,&UNK_10ddd000c,0x35,FUN_105c8b498,0);
    do {
      if (puRam00000001136c2220 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2220;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2220,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2220 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2220;
}



/* Entry: 105c8b498; end: 105c8b4a3;  */

bool FUN_105c8b498(uint param_1)

{
  return param_1 < 0x35;
}



/* Entry: 105c8b4a4; end: 105c8b53f; -[SCRecentlyActiveEducationAlertScope initWithUIContainer:recentlyActiveEducationAlertDelegate:] */

undefined1 *
FUN_105c8b4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecaf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c8b540; end: 105c8b547; -[SCRecentlyActiveEducationAlertScope uiContainer] */

undefined8 FUN_105c8b540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c8b548; end: 105c8b55f; -[SCRecentlyActiveEducationAlertScope recentlyActiveEducationAlertDelegate] */

void FUN_105c8b548(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8b560; end: 105c8b58b; -[SCRecentlyActiveEducationAlertScope .cxx_destruct] */

void FUN_105c8b560(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c8b58c; end: 105c8b627; -[SCFriendingSuggestionTakeoverScope initWithUiContainer:suggestionTakeoverDelegate:] */

undefined1 *
FUN_105c8b58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecaf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c8b628; end: 105c8b62f; -[SCFriendingSuggestionTakeoverScope uiContainer] */

undefined8 FUN_105c8b628(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c8b630; end: 105c8b647; -[SCFriendingSuggestionTakeoverScope suggestionTakeoverDelegate] */

void FUN_105c8b630(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8b648; end: 105c8b673; -[SCFriendingSuggestionTakeoverScope .cxx_destruct] */

void FUN_105c8b648(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c8b674; end: 105c8b6bb; +[SCGalleryFooterActionItem itemWithType:enabled:actionSheetTitleType:] */

void FUN_105c8b674(void)

{
  _objc_alloc(PTR_PTR_1126c38b8);
  func_0x00010c055a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8b6bc; end: 105c8b72f; +[SCGalleryFooterActionItem actionSheetTitleTypeForNumberOfSnapsSelect:numberOfPhotosSelect:numberOfVideosSelect:] */

undefined1
FUN_105c8b6bc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  if ((param_4 == 1) && (param_5 == 0 && param_3 == 0)) {
    return 3;
  }
  if ((1 < param_4) && (param_5 == 0 && param_3 == 0)) {
    return 2;
  }
  if ((param_5 == 1) && (param_4 == 0 && param_3 == 0)) {
    return 5;
  }
  if ((1 < param_5) && (param_4 == 0 && param_3 == 0)) {
    return 4;
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    return 6;
  }
  return param_3 == 1;
}



/* Entry: 105c8b730; end: 105c8c193; -[SCGalleryFooterActionItem initWithType:enabled:actionSheetTitleType:] */

undefined1 *
FUN_105c8b730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecb00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  *(undefined1 *)((long)puVar1 + 0x40) = param_4;
  *(undefined8 *)((long)puVar1 + 0x48) = param_3;
  *(ulong *)((long)puVar1 + 0x50) = param_5;
  *(undefined8 *)((long)puVar1 + 0x28) = 0x3fd999999999999a;
  switch(param_3) {
  case 0:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd284();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105c8be3c;
  case 1:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd29c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    _objc_release();
    if ((long)param_5 < 3) {
      if (param_5 == 0) {
        func_0x000108dfd32c();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_5 == 1) {
        func_0x000108dfd314();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_5 != 2) {
          return (undefined1 *)puVar1;
        }
        func_0x000108dfd35c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if ((long)param_5 < 5) {
      if (param_5 == 3) {
        func_0x000108dfd344();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_5 != 4) {
          return (undefined1 *)puVar1;
        }
        func_0x000108dfd38c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_5 == 5) {
      func_0x000108dfd374();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_5 != 6) {
        return (undefined1 *)puVar1;
      }
      func_0x000108dfd3a4();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = *(undefined **)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    goto code_r0x000105c8c178;
  case 2:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd3bc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    goto code_r0x000105c8c178;
  case 3:
    puVar4 = (undefined1 *)puVar1;
    puVar7 = (undefined1 *)puVar1;
    if ((long)param_5 < 3) {
      if (param_5 == 0) {
        func_0x000108dfd434();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (param_5 == 1) {
        func_0x000108dfd41c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_5 != 2) goto code_r0x000105c8c0b8;
        func_0x000108dfd464();
        _objc_retainAutoreleasedReturnValue();
      }
code_r0x000105c8c0a8:
      puVar7 = *(undefined1 **)((long)puVar1 + 8);
      *(undefined1 **)((long)puVar1 + 8) = puVar4;
      _objc_release();
    }
    else {
      if (4 < (long)param_5) {
        if (param_5 == 5) {
          func_0x000108dfd47c();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (param_5 != 6) goto code_r0x000105c8c0b8;
          func_0x000108dfd4ac();
          _objc_retainAutoreleasedReturnValue();
        }
        goto code_r0x000105c8c0a8;
      }
      if (param_5 == 3) {
        func_0x000108dfd44c();
        _objc_retainAutoreleasedReturnValue();
        goto code_r0x000105c8c0a8;
      }
      if (param_5 == 4) {
        func_0x000108dfd494();
        _objc_retainAutoreleasedReturnValue();
        goto code_r0x000105c8c0a8;
      }
    }
code_r0x000105c8c0b8:
    func_0x000108dfd404();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release();
    func_0x000108dfd404();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar5;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
code_r0x000105c8c158:
    func_0x00010c160fc0(uVar5);
    return (undefined1 *)puVar1;
  case 4:
    puVar7 = (undefined1 *)puVar1;
    if (param_5 < 7) {
      puVar4 = (undefined1 *)puVar1;
      if ((1L << (param_5 & 0x3f) & 0x55U) == 0) {
        func_0x000108dfd4c4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108dfd4dc();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = *(undefined1 **)((long)puVar1 + 8);
      *(undefined1 **)((long)puVar1 + 8) = puVar4;
      _objc_release();
    }
    func_0x000108dfd3d4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    goto code_r0x000105c8c158;
  case 5:
    ppuVar8 = &PTR____CFConstantStringClassReference_110e1e6d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6d8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = ppuVar8;
    _objc_release();
    func_0x000108dfd4f4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105c8be3c;
  case 6:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd53c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar7;
    _objc_release();
    func_0x000108dfd524();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105c8be3c;
  case 7:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd3ec();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release();
    func_0x000107e90abc();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105c8be3c;
  case 8:
    puVar7 = (undefined1 *)puVar1;
    func_0x000107e907ec();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar7;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release();
    func_0x000108dfd554();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    goto code_r0x000105c8c178;
  case 9:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd2cc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar7;
    _objc_release();
    func_0x000108dfd2b4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000105c8be3c;
  case 10:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd2fc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar7;
    _objc_release();
    func_0x000108dfd2e4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
code_r0x000105c8be3c:
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar5);
    goto code_r0x000105c8c178;
  case 0xb:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined ***)((long)puVar1 + 0x18) = &PTR____CFConstantStringClassReference_110e265b8;
    _objc_release(uVar5);
    puVar3 = *(undefined **)((long)puVar1 + 8);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e265d8;
    goto code_r0x000105c8b978;
  case 0xc:
    puVar7 = (undefined1 *)puVar1;
    func_0x000108dfd4f4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar7;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b0c40;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar3 = *(undefined **)((long)puVar1 + 8);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e265f8;
code_r0x000105c8b978:
    *(undefined ***)((long)puVar1 + 8) = ppuVar8;
    goto code_r0x000105c8c178;
  case 0xd:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26618;
    break;
  case 0xe:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26638;
    break;
  case 0xf:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26658;
    break;
  case 0x10:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e266b8;
    break;
  case 0x11:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e266f8;
    break;
  case 0x12:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26678;
    break;
  case 0x13:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26718;
    break;
  case 0x14:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e26698;
    break;
  case 0x15:
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e266d8;
    break;
  default:
    goto LAB_105c8c17c;
  }
  *(undefined ***)((long)puVar1 + 0x18) = ppuVar8;
  _objc_release(uVar5);
  puVar3 = *(undefined **)((long)puVar1 + 8);
  *(undefined ***)((long)puVar1 + 8) = ppuVar8;
code_r0x000105c8c178:
  _objc_release(puVar3);
LAB_105c8c17c:
  return (undefined1 *)puVar1;
}



/* Entry: 105c8c194; end: 105c8c1f7; -[SCGalleryFooterActionItem setDisabledAlertTitle:desc:] */

void FUN_105c8c194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8c1f8; end: 105c8c2bf; -[SCGalleryFooterActionItem actionBarItem] */

void FUN_105c8c1f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar5 = PTR_PTR_1126b66b8;
  puVar3 = PTR_s__handleActionBarItemTap__11252ce90;
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    FUN_105c9d13c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedee0(puVar5,param_2,uVar1,uVar6,uVar8,uVar2,param_1,puVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 105c8c2c0; end: 105c8c37f; -[SCGalleryFooterActionItem actionSheetCell] */

void FUN_105c8c2c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b10a0;
    func_0x00010bf6e3c0(PTR_PTR_1126b10a0,param_2,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    uVar3 = 0x3ff0000000000000;
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
    }
    func_0x00010c1677c0(uVar3,*(undefined8 *)(param_1 + 0x38));
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    FUN_105c9d13c(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c8c380; end: 105c8c3b3; -[SCGalleryFooterActionItem _handleActionBarItemTap:] */

void FUN_105c8c380(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c8c3b4; end: 105c8c497; -[SCGalleryFooterActionItem _handleActionSheetCellTap:] */

void FUN_105c8c3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8c498; end: 105c8c4df;  */

void FUN_105c8c498(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfbce40();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c8c4e0; end: 105c8c4e7; -[SCGalleryFooterActionItem type] */

undefined8 FUN_105c8c4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105c8c4e8; end: 105c8c4ef; -[SCGalleryFooterActionItem actionSheetTitleType] */

undefined8 FUN_105c8c4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105c8c4f0; end: 105c8c507; -[SCGalleryFooterActionItem delegate] */

void FUN_105c8c4f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c8c508; end: 105c8c513; -[SCGalleryFooterActionItem setDelegate:] */

void FUN_105c8c508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105c8c514; end: 105c8c51b; -[SCGalleryFooterActionItem enabled] */

undefined1 FUN_105c8c514(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 105c8c51c; end: 105c8c523; -[SCGalleryFooterActionItem disabledOpacity] */

undefined8 FUN_105c8c51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105c8c524; end: 105c8c52b; -[SCGalleryFooterActionItem disabledAlertTitle] */

undefined8 FUN_105c8c524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105c8c52c; end: 105c8c533; -[SCGalleryFooterActionItem disabledAlertDesc] */

undefined8 FUN_105c8c52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105c8c534; end: 105c8c5b3; -[SCGalleryFooterActionItem .cxx_destruct] */

void FUN_105c8c534(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105c8c5b4; end: 105c8cdeb; -[SCGalleryFooterBarActionHandler initWithCircumstanceEngine:memoriesSendViewPresenter:previewURLVideoProvider:blizzardLogger:spectaclesCustomExportScopeExposer:spectaclesCustomExportScopeServices:memoriesExternalShareAdaptorScopeExposer:videoImportServices:usernameProvider:dataObjectContext:featureSettingsService:memoriesActivityController:memoriesPreviewPresenterBuilder:memoriesThumbnailLogger:memoriesMergedDataSource:galleryLogger:keyService:memoriesEditMutating:memoriesMeoMutating:memoriesStoryMutating:memoriesDeletionMutating:memoriesRetryMutating:memoriesAddSnapMutating:memoriesSnapThumbnailGeneratorBuilder:memoriesPrivateGallerySetupFlowScopeExposer:memoriesDebugViewerScopeExposer:memPlatBackupService:directorModeLaunchServices:directorModeScopeServices:encryptedContentManager:cloudFSService:importEditsResolver:snapDocDownloadingService:snapDocEditorFactory:dreamsSessionService:temporaryFileWriter:memoriesExperimentService:memoriesLinkManagementUIScopeServices:valdiRuntimeProvider:] */

undefined8 *
FUN_105c8c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain();
  puStack_70 = PTR_PTR_1126ecb08;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(&PTR____CFConstantStringClassReference_110ec3438);
    uVar2 = puVar1[1];
    puVar1[1] = &PTR____CFConstantStringClassReference_110ec3438;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[5];
    puVar1[5] = param_27;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x26,param_28);
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_41;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_37;
    _objc_release(uVar2);
  }
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 105c8cdec; end: 105c8d02f; -[SCGalleryFooterBarActionHandler shareItems:snaps:selectedSnapCount:userContext:completion:] */

void FUN_105c8cdec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar2);
      _objc_release(lVar2);
      _objc_release(lVar2);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_7);
      func_0x00010c0f7fc0(uVar10);
      _objc_release(param_7);
      _objc_release(param_4);
      param_1 = param_3;
LAB_105c8cfd4:
      _objc_release(param_1);
      _objc_release(param_7);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x70);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x000107da0188(uVar5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar6 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010bf00560(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar6);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      auVar12 = *(undefined1 (*) [16])(param_3 + 0x20);
      _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x20));
      auVar12 = NEON_ext(auVar12,auVar12,8,1);
      uVar8 = *(undefined8 *)(param_3 + 0x30);
      _objc_retain(uVar8);
      uVar10 = *(undefined8 *)(param_3 + 0x38);
      _objc_retain(uVar10);
      _objc_retain(uVar5);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar10);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(auVar12._8_8_);
      _objc_release(uVar5);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar11 = *(long *)(lVar9 * 8);
      lVar4 = lVar11;
      func_0x00010bfbd100();
      if (lVar4 == 1) {
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 == 0) {
          _objc_release(lVar2);
          _objc_release(lVar2);
          _objc_release(lVar2);
          param_1 = param_1 + 0x178;
          _objc_loadWeakRetained();
          func_0x000108df9400();
          goto LAB_105c8cfd4;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105c8d030; end: 105c8d1af;  */

void FUN_105c8d030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107da0188(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
  auVar5 = NEON_ext(auVar5,auVar5,8,1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(auVar5._8_8_);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c8d1b0; end: 105c8d1c7;  */

void FUN_105c8d1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__shareItems_snaps_selectedSnaps__11258a0a0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 105c8d1c8; end: 105c8d73f; -[SCGalleryFooterBarActionHandler _shareItems:snaps:selectedSnaps:selectedSnapCount:userContext:completion:] */

void FUN_105c8d1c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar2 = param_5;
  func_0x000109023ef8();
  if ((int)lVar2 != 0) {
    uVar6 = param_8;
    _objc_retainBlock();
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    _objc_release(uVar12);
    uVar4 = param_3;
    func_0x00010bf09f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf00560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7ada0(param_1);
    _objc_release(uVar6);
    goto LAB_105c8d6b4;
  }
  uVar3 = *(ulong *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1 + 0x178;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40();
  _objc_release(lVar2);
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf5f400();
  _objc_release(uVar7);
  uVar3 = param_3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x000107da0334();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar3 = uVar9;
  func_0x00010bf977c0();
  lVar10 = (long)(int)uVar3;
  func_0x00010b5f5864(lVar10,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain();
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0xa8));
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar13);
  lVar2 = param_5;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = param_3;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
LAB_105c8d524:
      _objc_retain(param_8);
      func_0x00010be7eea0(param_1);
      _objc_release(param_8);
    }
    else {
      uVar3 = param_3;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x000107da05cc();
      if ((uVar8 & 1) == 0) {
        _objc_release(uVar3);
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
        func_0x000108faa47c();
        _objc_release(uVar3);
        if (iVar1 == 0) goto LAB_105c8d524;
      }
      puVar11 = PTR_PTR_1126c38c0;
      _objc_alloc();
      uVar3 = param_3;
      func_0x00010bf09f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5f400();
      _objc_copyWeak(auStack_118,auStack_70);
      _objc_retain(param_8);
      func_0x00010c016ec0(puVar11);
      _objc_release(uVar12);
      _objc_release(uVar3);
      func_0x00010bf9d620(uVar7);
      _objc_release(puVar11);
      _objc_release(param_8);
      _objc_destroyWeak(auStack_118);
    }
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_105c8d740;
    puStack_f8 = &UNK_1108e3318;
    _objc_copyWeak(auStack_a0,auStack_78);
    _objc_retain(param_8);
    uStack_a8 = param_8;
    _objc_retain(param_5);
    lStack_f0 = param_5;
    uStack_e8 = uVar13;
    _objc_retain(param_3);
    uStack_e0 = param_3;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    uStack_d0 = uVar4;
    puStack_c8 = puVar5;
    uStack_c0 = uVar6;
    lStack_b8 = lVar10;
    uStack_90 = param_6;
    uStack_88 = param_7;
    uStack_80 = uVar12;
    _objc_copyWeak(auStack_98,auStack_70);
    uStack_b0 = uVar7;
    func_0x00010c0f7fc0(uVar14);
    _objc_destroyWeak(auStack_98);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(lStack_f0);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(puVar5);
LAB_105c8d6b4:
  _objc_release(uVar4);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8d740; end: 105c8d8ef;  */

void FUN_105c8d740(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0,0);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b5f9a34(uVar5,uVar2);
    _objc_release(uVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar4);
    uStack_48 = (undefined1)uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    _objc_copyWeak(auStack_68,param_1 + 0x78);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c8d8f0; end: 105c8dabf;  */

void FUN_105c8d8f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    }
  }
  else if (*(char *)(param_1 + 0x90) == '\x01') {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105c8dac0;
    puStack_70 = &UNK_1108e3288;
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar4);
    uStack_68 = uVar4;
    func_0x00010be7eea0(lVar1);
    _objc_release(uStack_68);
  }
  else {
    puVar3 = PTR_PTR_1126c38c0;
    _objc_alloc(PTR_PTR_1126c38c0);
    _objc_copyWeak(auStack_90,param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar4);
    func_0x00010c017320(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58));
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c8dac0; end: 105c8dad3;  */

void FUN_105c8dac0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c8dacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c8dad4; end: 105c8dba7;  */

void FUN_105c8dad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c8dba8; end: 105c8ddd3;  */

void FUN_105c8dba8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c8ddd4; end: 105c8dea7;  */

void FUN_105c8ddd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c8dea8; end: 105c8dedb;  */

void FUN_105c8dea8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c8dedc; end: 105c8deef;  */

void FUN_105c8dedc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c8dee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c8def0; end: 105c8dfb7; -[SCGalleryFooterBarActionHandler _presentSystemExportForItems:snaps:selectedSnapCount:userContext:completion:] */

void FUN_105c8def0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x178;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c3c0(uVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c8dfb8; end: 105c8e0cf; -[SCGalleryFooterBarActionHandler _presentCustomExport:selectedItems:selectedSnaps:allSnaps:] */

void FUN_105c8dfb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x178;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  lVar2 = param_1 + 0x178;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf23da0(uVar3,param_2,puVar1,lVar2,param_1,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x108),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c8e0d0; end: 105c8e327; -[SCGalleryFooterBarActionHandler createStoryWithItems:snaps:tabType:completion:] */

void FUN_105c8e0d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c38c8;
  _objc_alloc();
  lVar2 = param_1 + 0x178;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  uVar6 = param_5 - 2;
  if ((uVar6 < 0xc) && ((0x983U >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0)) {
    uVar7 = *(undefined8 *)(&UNK_10ddd0110 + uVar6 * 8);
    func_0x00010bafa2a4(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04a560(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c29a4c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043e80(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_6);
  lStack_70 = param_5;
  func_0x00010c142b00(puVar1);
  func_0x00010be06940(param_1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8e328; end: 105c8e43f;  */

void FUN_105c8e328(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    if ((int)param_2 == 0) {
      if (param_3 == 0) goto LAB_105c8e418;
      uVar3 = *(undefined8 *)(lVar1 + 0xb8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      uVar4 = *(long *)(param_1 + 0x30) - 2;
      if ((uVar4 < 0xc) && ((0x983U >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
        uVar5 = *(undefined8 *)(&UNK_10ddd0110 + uVar4 * 8);
        func_0x00010bafa2a4(uVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bf593a0(uVar3);
      _objc_release(uVar5);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0xb8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2f6c0();
    }
    _objc_release(uVar3);
  }
LAB_105c8e418:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8e440; end: 105c8e457; -[SCGalleryFooterBarActionHandler _detachEnabledForTabType:] */

uint FUN_105c8e440(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 9) & 0x1b7U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 105c8e458; end: 105c8e68b; -[SCGalleryFooterBarActionHandler deleteItems:snapItems:tabType:completion:] */

void FUN_105c8e458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xf8);
  func_0x000106dbdcd8();
  if ((iVar1 == 0) || (*(long *)(param_1 + 0x168) == 0)) {
    uVar6 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x170);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    if ((lVar2 != 0) && (param_5 < 0x10)) {
      uVar6 = 0xf1f8 >> (ulong)((uint)param_5 & 0x1f);
    }
    _objc_release();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2909a0();
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105c8e68c;
  puStack_b0 = &UNK_11087b8a8;
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  _objc_retain(param_4);
  uStack_80 = (undefined1)uVar5;
  ppuVar4 = &puStack_c8;
  uStack_a0 = param_4;
  uStack_88 = param_5;
  _objc_retainBlock();
  if ((uVar6 & 1) == 0) {
    (*(code *)ppuVar4[2])(ppuVar4,0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    func_0x00010bfc69a0(uVar5);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8e68c; end: 105c8e7db;  */

void FUN_105c8e68c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2218;
    _objc_alloc(PTR_PTR_1126b2218);
    func_0x00010bdfb540(lVar1);
    lVar3 = lVar1 + 0x178;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c016ea0(puVar2);
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010c142b00(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c8e7dc; end: 105c8e7ef;  */

void FUN_105c8e7dc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c8e7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c8e7f0; end: 105c8e8ff;  */

void FUN_105c8e7f0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (param_2 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c8e900;
    puStack_40 = &UNK_110849530;
    puVar2 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar2);
    puStack_38 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    puVar2 = puStack_38;
  }
  else {
    puVar2 = PTR_PTR_1126c38d0;
    func_0x00010bfbc0e0(PTR_PTR_1126c38d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfd3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0e3040(puVar1);
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 105c8e900; end: 105c8e90f;  */

void FUN_105c8e900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c8e90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c8e910; end: 105c8e9d7;  */

void FUN_105c8e910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105c8e9ac;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 105c8e9d8; end: 105c8eae3; -[SCGalleryFooterBarActionHandler lockItems:makePrivate:completion:] */

void FUN_105c8e9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c3220;
    _objc_alloc(PTR_PTR_1126c3220);
    lVar4 = param_1 + 0x178;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c016880(puVar3,param_2,lVar4,param_1);
    _objc_release(lVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be832e0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8eae4; end: 105c8ed0b; -[SCGalleryFooterBarActionHandler addItems:snaps:toStory:tabType:completion:] */

void FUN_105c8eae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126c38d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar4 = param_1 + 0x178;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  uVar8 = param_6 - 2;
  if ((uVar8 < 0xc) && ((0x983U >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0)) {
    uVar9 = *(undefined8 *)(&UNK_10ddd0110 + uVar8 * 8);
    func_0x00010bafa2a4(uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04a560(puVar5,param_2,&PTR____CFConstantStringClassReference_110ec3398,
                      &PTR____CFConstantStringClassReference_110e26758,puVar6,0,0,uVar9,0);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017340(puVar3,param_2,param_5,param_3,param_4,lVar4,puVar5,uVar2,uVar1,uVar7,
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf8));
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(lVar4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105c8ed0c;
  puStack_70 = &UNK_1108e3378;
  uStack_68 = param_7;
  _objc_retain(param_7);
  func_0x00010c142b00(puVar3,param_2,&puStack_88);
  func_0x00010be06940(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(puVar3);
  return;
}



/* Entry: 105c8ed0c; end: 105c8ed1f;  */

void FUN_105c8ed0c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c8ed18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c8ed20; end: 105c8ee0b; -[SCGalleryFooterBarActionHandler sendItems:snaps:orderedSnaps:sourcePage:userContext:] */

void FUN_105c8ed20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x178;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10e1c0(uVar1,param_2,param_3,param_4,param_5,param_6,param_1,0,param_7,0,0,0,0,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c8ee0c; end: 105c8ef17; -[SCGalleryFooterBarActionHandler editCameraRollAsset:userContext:] */

void FUN_105c8ee0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c110a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x178;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_1 + 0x178;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c10dc40(lVar1,param_2,param_3,lVar4,0,param_1,3,param_4,0,0,0,0,0);
    _objc_release(lVar4);
  }
  else {
    func_0x00010c10dc40(lVar1,param_2,param_3,lVar3,0,param_1,3,param_4,0,0,0,0,0);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8ef18; end: 105c8f177; -[SCGalleryFooterBarActionHandler editMemoriesEntry:snaps:snapMediaCloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:userContext:snapDoc:shouldUseRegularPreview:musicSelection:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:] */

void FUN_105c8ef18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_1;
  func_0x00010c110a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x178;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    param_1 = param_1 + 0x178;
    _objc_loadWeakRetained();
    func_0x00010c10dc00(lVar1,param_2,param_3,param_4,uVar2,param_5,param_6,param_7,0,1);
    _objc_release(param_1);
  }
  else {
    func_0x00010c10dc00(lVar1,param_2,param_3,param_4,uVar2,param_5,param_6,param_7,0,1);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c8f178; end: 105c8f2cb; -[SCGalleryFooterBarActionHandler showDebugViewWithSelectedGalleryItems:selectedGallerySnaps:] */

void FUN_105c8f178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126c38e0;
  _objc_alloc(PTR_PTR_1126c38e0);
  func_0x00010c043be0();
  param_1 = param_1 + 0x130;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8f2cc; end: 105c8f353;  */

void FUN_105c8f2cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x178;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c8f354; end: 105c8f357;  */

void FUN_105c8f354(void)

{
  return;
}



/* Entry: 105c8f358; end: 105c8f35b; -[SCGalleryFooterBarActionHandler createDirectorModeSnapWithItems:snaps:completion:] */

void FUN_105c8f358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde94b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__convertSnapDocsWithGalleryItems_112557ec8);
  return;
}



/* Entry: 105c8f35c; end: 105c8f3cf; -[SCGalleryFooterBarActionHandler previewController] */

void FUN_105c8f35c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf22420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105c8f3d0; end: 105c8f543; -[SCGalleryFooterBarActionHandler _promptToLockItems:makePrivate:completion:] */

void FUN_105c8f3d0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  uStack_60 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c135d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8f544; end: 105c8f83f;  */

void FUN_105c8f544(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 6) {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        puVar4 = PTR_PTR_1126c38e8;
        _objc_alloc(PTR_PTR_1126c38e8);
        lVar3 = lVar1 + 0x178;
        _objc_loadWeakRetained(lVar3);
        uVar2 = *(undefined8 *)(lVar1 + 0xf0);
        func_0x00010c29a4c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c016e80(puVar4);
        _objc_release(uVar2);
        _objc_release(lVar3);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_105c8f840;
        puStack_80 = &UNK_1108e33c8;
        puVar8 = auStack_68;
        _objc_copyWeak(puVar8,param_1 + 0x30);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar9);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uStack_70 = uVar9;
        _objc_retain(uVar2);
        uStack_78 = uVar2;
        func_0x00010c142b00(puVar4);
        _objc_release(uStack_78);
        uVar2 = uStack_70;
      }
      else {
        puVar4 = *(undefined **)(param_1 + 0x20);
        func_0x00010b5fd5f8(puVar4,1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(lVar1 + 0x80);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b2220;
        _objc_alloc(PTR_PTR_1126b2220);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04a560(puVar5);
        puVar8 = auStack_a0;
        _objc_copyWeak(puVar8,param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar2);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar7);
        func_0x00010c288c60(uVar9);
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(uVar9);
        _objc_release(uVar7);
      }
      _objc_release(uVar2);
      _objc_destroyWeak(puVar8);
      _objc_release(puVar4);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,0,param_2 == 5);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8f840; end: 105c8fa67;  */

void FUN_105c8f840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **unaff_x23;
  long lVar5;
  long lVar6;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    if ((int)param_2 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar4 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar4);
      lVar2 = lVar4;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar5 = *plStack_120;
        do {
          lVar6 = 0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(lVar4);
            }
            unaff_x23 = *(undefined ***)(lVar1 + 0xb8);
            func_0x00010c269d40(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b5d80();
            _objc_release(unaff_x23);
            lVar6 = lVar6 + 1;
          } while (lVar2 != lVar6);
          lVar2 = lVar4;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar4);
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010b5fd5f8(lVar4,2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_105c8fa68;
        puStack_148 = &UNK_110841fb0;
        _objc_copyWeak(auStack_138,param_1 + 0x30);
        _objc_retain(lVar4);
        lStack_140 = lVar4;
        func_0x00010c0f7fe0(0x3fe8000000000000,lVar2);
        _objc_release(lVar2);
        _objc_release(lStack_140);
        _objc_destroyWeak(auStack_138);
        unaff_x23 = &puStack_160;
      }
      _objc_release(lVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x28));
  __Unwind_Resume();
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126c38f0;
    _objc_alloc(PTR_PTR_1126c38f0);
    lVar2 = lVar1 + 0x178;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c035c40(puVar3);
    _objc_release(lVar2);
    func_0x00010c142b00(puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c8fa68; end: 105c8faef;  */

void FUN_105c8fa68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c38f0;
    _objc_alloc(PTR_PTR_1126c38f0);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar1 + 0x178;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c035c40(puVar2,param_2,uVar4,lVar3);
    _objc_release(lVar3);
    func_0x00010c142b00(puVar2,param_2,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c8faf0; end: 105c8fc77;  */

void FUN_105c8faf0(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      lVar6 = param_2;
      func_0x00010bf529e0(param_2);
      param_3 = (undefined1 *)0x0;
      (**(code **)(lVar7 + 0x10))(lVar7,lVar6 != 0,0);
    }
    func_0x00010bf529e0();
    if (param_2 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar6 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar6);
      lVar7 = lVar6;
      func_0x00010bf52a60();
      if (lVar7 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(lVar6);
            }
            uVar2 = *(undefined8 *)(lVar1 + 0xb8);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b5da0();
            _objc_release(uVar2);
            lVar9 = lVar9 + 1;
          } while (lVar7 != lVar9);
          lVar7 = lVar6;
          puVar5 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar7 != 0);
      }
      _objc_release(lVar6);
      param_3 = (undefined1 *)puVar5;
    }
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b5fd5f8(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97e80(param_3);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105c8fc78; end: 105c8fd33; -[SCGalleryFooterBarActionHandler _snapsFromGalleryItems:] */

void FUN_105c8fc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010b5fd5f8(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97e80(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c8fd34; end: 105c8fe3f;  */

void FUN_105c8fd34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x70);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bfa7340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar1 = puVar2;
  func_0x00010b5fa088();
  puVar4 = puVar2;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bf910;
    func_0x00010c2aebc0(PTR_PTR_1126bf910);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c192d40(0x40a00000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105c8fe40; end: 105c8fef7; -[SCGalleryFooterBarActionHandler convertGalleryItemsToDirectorModeImportedMediaSegments:completion:] */

void FUN_105c8fe40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c8fef8;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c8fef8; end: 105c8ffd3;  */

void FUN_105c8fef8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bebda60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(lVar3 + 0x48);
    uVar1 = *(undefined8 *)(lVar3 + 0xd0);
    uVar2 = *(undefined8 *)(lVar3 + 0xd8);
    uVar5 = *(undefined8 *)(lVar3 + 0xe0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e614a0(uVar4,0,uVar6,uVar1,uVar2,uVar5,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),1);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105c8ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105c8ffd4; end: 105c900db; -[SCGalleryFooterBarActionHandler _convertSnapDocsWithGalleryItems:gallerySnaps:] */

void FUN_105c8ffd4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c900dc; end: 105c90293;  */

void FUN_105c900dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bebda60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010b5fd5f8(uVar4,2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0xf0);
    uVar5 = *(undefined8 *)(lVar1 + 0x158);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x000107e6b1c4(uVar4,uVar8,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,lVar1);
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar3);
    func_0x00010c297260(puVar7);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c90294; end: 105c90413;  */

void FUN_105c90294(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    puVar5 = puVar2;
    if ((lVar4 == 0) && (lVar4 = param_2, func_0x00010bf529e0(), lVar4 != 0)) {
      func_0x00010bf51e00(puVar2);
      puVar6 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010be6d100(lVar1);
      _objc_release(puVar6);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      _objc_retain(param_2);
      func_0x00010bf97e80(uVar8);
      _objc_release(param_2);
      _objc_release(uVar7);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c90414; end: 105c90587;  */

void FUN_105c90414(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(lVar5 + 0x48);
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0xd0);
  uVar4 = *(undefined8 *)(lVar5 + 0xd8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105c90588;
  puStack_a0 = &UNK_1108e3458;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar7;
  _objc_retain(uVar8);
  uStack_90 = uVar8;
  _objc_retain(param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = param_2;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar8;
  _objc_retain(uVar7);
  uStack_78 = uVar7;
  func_0x000107e60dbc(param_2,0,uVar6,uVar2,uVar1,uVar3,uVar4,&puStack_b8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 105c90588; end: 105c906af;  */

void FUN_105c90588(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar7);
    _objc_release(puVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be06120(lVar1);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (lVar4 == lVar5) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00(uVar7);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf51e00(uVar6);
      func_0x00010be6d100(lVar1);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c906b0; end: 105c907a7; -[SCGalleryFooterBarActionHandler _openDirectorModeWithSnapDocs:matchingSnapsForSnapDocFutures:phAssetMediaSegments:] */

void FUN_105c906b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c907a8;
  puStack_50 = &UNK_11085fb08;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  uVar2 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar1,param_2,&puStack_68,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105c907a8; end: 105c90983;  */

void FUN_105c907a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf51e00(uVar8);
  uVar1 = param_2;
  func_0x000107e65ab4(param_2,uVar8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  uVar8 = uVar1;
  func_0x00010bf09f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c38f8;
  _objc_alloc();
  func_0x00010c028ec0();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar5 = *(long *)(param_1 + 0x30) + 0x178;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c038f40(puVar4);
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x140);
  func_0x00010bf235e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x138);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c076220();
  _objc_release(uVar7);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x138);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x138);
  func_0x00010bf7f580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c90984; end: 105c90b2f; -[SCGalleryFooterBarActionHandler _downloadSnapDocWithSnapDocKey:snapDoc:promiseToComplete:] */

void FUN_105c90984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf89260(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c90b30; end: 105c90bff;  */

void FUN_105c90b30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x148);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c12ee80();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105c90c00;
    puStack_40 = &UNK_1108bc678;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    func_0x00010c297260(uVar3,param_2,&puStack_58,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105c90c00; end: 105c90c17;  */

void FUN_105c90c00(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 105c90c18; end: 105c90d17; -[SCGalleryFooterBarActionHandler _dreamsRegisterItems:snaps:] */

void FUN_105c90c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c90d18; end: 105c910bb;  */

void FUN_105c90d18(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x150);
    func_0x00010bf8a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010bf60020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x150);
      func_0x00010bf8a4a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      lVar14 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar14);
      lVar5 = lVar14;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar14);
          }
          puVar9 = PTR_PTR_1126af4c0;
          uVar17 = *(ulong *)(lVar15 * 8);
          _objc_retain(uVar17);
          _objc_opt_class(puVar9);
          uVar10 = uVar17;
          _objc_opt_isKindOfClass(uVar17,puVar9);
          uVar1 = uVar17;
          if ((uVar10 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar17);
          if (uVar1 != 0) {
            lVar11 = *(long *)(lVar4 + 0x70);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010bfa7340();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            _objc_retain(lVar12);
            lVar11 = lVar12;
            func_0x00010bf52a60();
            lVar3 = lRam0000000000000000;
            while (lVar11 != 0) {
              lVar16 = 0;
              do {
                if (lRam0000000000000000 != lVar3) {
                  _objc_enumerationMutation(lVar12);
                }
                uVar7 = *(undefined8 *)(lVar16 * 8);
                func_0x00010c241220(uVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c127060(uVar8);
                _objc_release(uVar7);
                lVar16 = lVar16 + 1;
              } while (lVar11 != lVar16);
              lVar11 = lVar12;
              func_0x00010bf52a60();
            }
            _objc_release(lVar12);
            _objc_release(lVar12);
          }
          _objc_release(uVar1);
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar5);
        lVar5 = lVar14;
        func_0x00010bf52a60();
      }
      _objc_release(lVar14);
      lVar14 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar14);
      lVar5 = lVar14;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar14);
          }
          uVar7 = *(undefined8 *)(lVar15 * 8);
          func_0x00010c241220(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c127060(uVar8);
          _objc_release(uVar7);
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar14;
        func_0x00010bf52a60();
      }
      _objc_release(lVar14);
      _objc_release(uVar8);
    }
    _objc_release(lVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(lVar4 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar13 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(lVar4 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c910bc; end: 105c91103; -[SCGalleryFooterBarActionHandler privateGallerySetupFlowDidCancel:] */

void FUN_105c910bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c91104; end: 105c911a7; -[SCGalleryFooterBarActionHandler privateGallerySetupFlowDidFinish:] */

void FUN_105c91104(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0,1);
    }
  }
  else {
    func_0x00010be832e0(param_1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c911a8; end: 105c91213; -[SCGalleryFooterBarActionHandler spectaclesMemoriesCustomExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

void FUN_105c911a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x108));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4,param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105c91214; end: 105c91217; -[SCGalleryFooterBarActionHandler galleryPreviewControllerWillDismiss:] */

void FUN_105c91214(void)

{
  return;
}



/* Entry: 105c91218; end: 105c9121b; -[SCGalleryFooterBarActionHandler galleryPreviewControllerDidDismiss:] */

void FUN_105c91218(void)

{
  return;
}



/* Entry: 105c9121c; end: 105c9121f; -[SCGalleryFooterBarActionHandler galleryPreviewControllerDidCancel:] */

void FUN_105c9121c(void)

{
  return;
}



/* Entry: 105c91220; end: 105c9122b; -[SCGalleryFooterBarActionHandler galleryPreviewController:presentingViewController:didFailToLoadContent:] */

void FUN_105c91220(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  _objc_retain(in_x4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_107dffd60;
  puStack_38 = &UNK_110841f80;
  uStack_30 = in_x4;
  uStack_28 = in_x3;
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  func_0x0001000d76cc(&UNK_10f45e2cd,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(in_x3);
  _objc_release(in_x4);
  return;
}



/* Entry: 105c9122c; end: 105c9122f; -[SCGalleryFooterBarActionHandler logGalleryPreviewControllerDidDiscardEdits] */

void FUN_105c9122c(void)

{
  return;
}



/* Entry: 105c91230; end: 105c912ab; -[SCGalleryFooterBarActionHandler debugViewerWillDismiss] */

void FUN_105c91230(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x130;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x130;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


