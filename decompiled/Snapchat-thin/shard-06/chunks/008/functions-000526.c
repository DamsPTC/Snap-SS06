/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e0c708; end: 104e0c76b; -[SCCountdownsDeeplinkLogger init] */

undefined1 * FUN_104e0c708(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0b70;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e0c76c; end: 104e0c77b; -[SCCountdownsDeeplinkLogger logDeeplinkReceivedWith:] */

char * FUN_104e0c76c(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
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
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108516b0,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_104e0c990;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  puVar9 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar6 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851700,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = (undefined1 *)puVar8;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = (undefined1 *)puVar8;
    }
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_104e0cb04;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851750,&uStack_180,puVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_1b0;
  pcStack_188 = FUN_104e0cc78;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar6;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(puVar7);
  puStack_1a8 = PTR_PTR_1126e4578;
  pcStack_1b0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(puVar7);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined1 **)((long)ppcVar4 + 8) = puVar7;
    _objc_release(uVar5);
  }
  _objc_release(puVar7);
  return (char *)ppcVar4;
}



/* Entry: 104e0c77c; end: 104e0c78b; -[SCCountdownsDeeplinkLogger logDeeplinkProcessedWith:] */

char * FUN_104e0c77c(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
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
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851700,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_104e0cb04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110851750,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = (undefined1 *)puVar8;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = (undefined1 *)puVar8;
    }
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  ppcVar5 = &pcStack_130;
  pcStack_108 = FUN_104e0cc78;
  pcStack_120 = pcVar3;
  pcStack_118 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar9);
  puStack_128 = PTR_PTR_1126e4578;
  pcStack_130 = pcVar4;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    _objc_retain(puVar9);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
    *(undefined1 **)((long)ppcVar5 + 8) = puVar9;
    _objc_release(uVar6);
  }
  _objc_release(puVar9);
  return (char *)ppcVar5;
}



/* Entry: 104e0c78c; end: 104e0c79b; -[SCCountdownsDeeplinkLogger logDeeplinkFailedWith:] */

char * FUN_104e0c78c(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
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
  
  lVar1 = *(long *)(param_1 + 8);
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110851750,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_b0;
  pcStack_88 = FUN_104e0cc78;
  pcStack_a0 = pcVar2;
  pcStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_a8 = PTR_PTR_1126e4578;
  pcStack_b0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(undefined1 **)((long)ppcVar4 + 8) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return (char *)ppcVar4;
}



/* Entry: 104e0c79c; end: 104e0c7a7; -[SCCountdownsDeeplinkLogger .cxx_destruct] */

void FUN_104e0c79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0c7a8; end: 104e0c81b; -[SCGrapheneCountdownsDeeplinkMetric2 init] */

undefined1 * FUN_104e0c7a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e0c81c; end: 104e0c98f;  */

char * FUN_104e0c81c(long param_1,char *param_2,undefined1 *param_3)

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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108516b0,&uStack_80,param_3);
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
  pcStack_88 = FUN_104e0c990;
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110851700,&uStack_100,puVar6);
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
  pcStack_108 = FUN_104e0cb04;
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110851750,&uStack_180,puVar8);
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
  pcStack_188 = FUN_104e0cc78;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar5;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(puVar6);
  puStack_1a8 = PTR_PTR_1126e4578;
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



/* Entry: 104e0c990; end: 104e0cb03;  */

char * FUN_104e0c990(long param_1,char *param_2,undefined1 *param_3)

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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110851700,&uStack_80,param_3);
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
  pcStack_88 = FUN_104e0cb04;
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110851750,&uStack_100,puVar6);
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
  pcStack_108 = FUN_104e0cc78;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  puStack_128 = PTR_PTR_1126e4578;
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



/* Entry: 104e0cb04; end: 104e0cc77;  */

char * FUN_104e0cb04(long param_1,char *param_2,undefined1 *param_3)

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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110851750,&uStack_80,param_3);
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
  pcStack_88 = FUN_104e0cc78;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_a8 = PTR_PTR_1126e4578;
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



/* Entry: 104e0cc78; end: 104e0cceb; -[UNISCCountdownsCountdowns initWithUnifiedGrpcService:] */

undefined1 * FUN_104e0cc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4578;
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



/* Entry: 104e0ccec; end: 104e0cdcf; -[UNISCCountdownsCountdowns createCountdownWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0ccec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0b78;
  _objc_opt_class(PTR_PTR_1126b0b78);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0cdd0; end: 104e0ceb3; -[UNISCCountdownsCountdowns updateCountdownWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0cdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0b80;
  _objc_opt_class(PTR_PTR_1126b0b80);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0ceb4; end: 104e0cf97; -[UNISCCountdownsCountdowns deleteCountdownWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0ceb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0b88;
  _objc_opt_class(PTR_PTR_1126b0b88);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6458,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0cf98; end: 104e0d07b; -[UNISCCountdownsCountdowns getCountdownsWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0cf98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0b90;
  _objc_opt_class(PTR_PTR_1126b0b90);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6478,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d07c; end: 104e0d15f; -[UNISCCountdownsCountdowns getSharedCountdownsWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0d07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0b98;
  _objc_opt_class(PTR_PTR_1126b0b98);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6498,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d160; end: 104e0d243; -[UNISCCountdownsCountdowns getClosestUpcomingCountdownWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0d160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0ba0;
  _objc_opt_class(PTR_PTR_1126b0ba0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db64b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d244; end: 104e0d327; -[UNISCCountdownsCountdowns getCountdownByIDWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0d244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0ba8;
  _objc_opt_class(PTR_PTR_1126b0ba8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db64d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d328; end: 104e0d40b; -[UNISCCountdownsCountdowns leaveCountdownWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0d328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0bb0;
  _objc_opt_class(PTR_PTR_1126b0bb0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db64f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d40c; end: 104e0d4ef; -[UNISCCountdownsCountdowns getCountdownDetailWithRequest:callOptionsBuilder:handler:] */

void FUN_104e0d40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b0bb8;
  _objc_opt_class(PTR_PTR_1126b0bb8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db6518,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0d4f0; end: 104e0d4fb; -[UNISCCountdownsCountdowns .cxx_destruct] */

void FUN_104e0d4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0d4fc; end: 104e0d5fb; -[SCCountdownsActionHandler initWithCountdownServices:circumstanceEngine:userPreferences:countdownsPageDismissalCallback:] */

undefined1 *
FUN_104e0d4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4580;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0bc0;
    _objc_alloc();
    func_0x00010bffeae0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e0d5fc; end: 104e0d8ff; -[SCCountdownsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

byte FUN_104e0d5fc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_opt_class(PTR_PTR_1126b02a8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    _objc_release(uVar3);
    bVar5 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if (((uVar4 & 1) == 0) && (uVar4 = uVar3, func_0x00010c0720c0(), (int)uVar4 == 0)) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        bVar5 = 0;
        goto LAB_104e0d854;
      }
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar3);
    }
    uVar3 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    uVar6 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar4 != 0) {
      puVar2 = PTR_PTR_1126b0bc8;
      _objc_opt_class(PTR_PTR_1126b0bc8);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar2);
      uVar3 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar6);
      if (uVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(uVar6 + 0x18);
      }
      _objc_retain(uVar6);
      _objc_release(uVar3);
    }
    puVar2 = PTR_PTR_1126b0bd0;
    _objc_opt_class(PTR_PTR_1126b0bd0);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar3 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar6);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      _objc_retain(param_4);
      _objc_retain(param_4);
      func_0x00010c0bdf00(uVar6);
      bVar5 = *(byte *)(puStack_78 + 3);
      _objc_release(param_4);
      _objc_release(param_4);
      __Block_object_dispose(&uStack_80,8);
    }
  }
  _objc_release(uVar3);
LAB_104e0d854:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar5 & 1;
}



/* Entry: 104e0d900; end: 104e0dda7;  */

void FUN_104e0d900(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar9 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar9 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar9 != 0) {
        uVar3 = *(ulong *)(param_1 + 0x30);
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b0bc8;
        _objc_opt_class(PTR_PTR_1126b0bc8);
        uVar5 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar1 = uVar3;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar3);
        lVar11 = *(long *)(param_1 + 0x28);
        if (uVar1 == 0) {
          _objc_retain(0);
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(uVar3 + 0x10);
          _objc_retain(uVar9);
        }
        _objc_release(uVar1);
        _objc_retain(param_2);
        _objc_retain(param_3);
        _objc_retain(uVar9);
        uVar10 = 0;
        if ((param_2 != 0) && (lVar11 != 0)) {
          if (*(long *)(lVar11 + 8) == 0) {
            uVar10 = 0;
          }
          else {
            puVar4 = PTR_PTR_1126aead8;
            _objc_alloc(PTR_PTR_1126aead8);
            lVar6 = lVar11 + 0x20;
            _objc_loadWeakRetained(lVar6);
            uVar10 = 1;
            func_0x00010c038f40(puVar4);
            _objc_release(lVar6);
            func_0x000104e0dea4(param_2,param_3);
            puVar7 = PTR_PTR_1126b0b68;
            _objc_alloc(PTR_PTR_1126b0b68);
            func_0x000106e404d0();
            uVar8 = *(undefined8 *)(lVar11 + 8);
            func_0x00010c0f1960(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c10bc60();
            _objc_release(uVar2);
            _objc_release(uVar8);
            _objc_release(puVar7);
            _objc_release(puVar4);
          }
        }
        _objc_release(uVar9);
        _objc_release(param_3);
        _objc_release(param_2);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar10;
        _objc_release(uVar9);
      }
      goto LAB_104e0dd34;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    _objc_retain(param_2);
    _objc_retain(param_3);
    uVar10 = 0;
    if ((param_2 != 0) && (lVar11 != 0)) {
      if (*(long *)(lVar11 + 8) == 0) goto LAB_104e0dd14;
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar6 = lVar11 + 0x20;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c038f40(puVar4);
      _objc_release(lVar6);
      func_0x000104e0dea4(param_2,param_3);
      puVar7 = PTR_PTR_1126b0b60;
      _objc_alloc(PTR_PTR_1126b0b60);
      func_0x000106e40154();
      uVar2 = *(undefined8 *)(lVar11 + 8);
      func_0x00010c0f1960(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10bc80();
      _objc_release(uVar9);
      _objc_release(uVar2);
      goto LAB_104e0db68;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28);
    _objc_retain(param_2);
    _objc_retain(param_3);
    uVar10 = 0;
    if ((param_2 != 0) && (lVar11 != 0)) {
      if (*(long *)(lVar11 + 8) == 0) {
LAB_104e0dd14:
        uVar10 = 0;
      }
      else {
        puVar4 = PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        lVar6 = lVar11 + 0x20;
        _objc_loadWeakRetained(lVar6);
        func_0x00010c038f40(puVar4);
        _objc_release(lVar6);
        func_0x000104e0dea4(param_2,param_3);
        puVar7 = PTR_PTR_1126b0b60;
        _objc_alloc(PTR_PTR_1126b0b60);
        func_0x000106e40154();
        uVar2 = *(undefined8 *)(lVar11 + 8);
        func_0x00010c0f1960(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10bc40();
        _objc_release(uVar9);
        _objc_release(uVar2);
        func_0x00010c17a3c0(*(undefined8 *)(lVar11 + 0x10));
LAB_104e0db68:
        uVar10 = 1;
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar10;
LAB_104e0dd34:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e0dda8; end: 104e0ddab;  */

void FUN_104e0dda8(void)

{
  return;
}



/* Entry: 104e0ddac; end: 104e0de33; -[SCCountdownsActionHandler getTraitCollectionFetcher] */

void FUN_104e0ddac(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e0de34;
  puStack_38 = &UNK_110851830;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104e0de34; end: 104e0df2f;  */

void FUN_104e0de34(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e0df30; end: 104e0df47; -[SCCountdownsActionHandler presentingViewController] */

void FUN_104e0df30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e0df48; end: 104e0df53; -[SCCountdownsActionHandler setPresentingViewController:] */

void FUN_104e0df48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104e0df54; end: 104e0df6b; -[SCCountdownsActionHandler containerViewController] */

void FUN_104e0df54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e0df6c; end: 104e0df77; -[SCCountdownsActionHandler setContainerViewController:] */

void FUN_104e0df6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104e0df78; end: 104e0e037; -[SCCountdownsActionHandler .cxx_destruct] */

void FUN_104e0df78(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0e038; end: 104e0e0db; -[SCProfileCountdownBadgingHelper initWithCircumstanceEngine:preferences:] */

undefined1 *
FUN_104e0e038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4588;
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



/* Entry: 104e0e0dc; end: 104e0e13b; -[SCProfileCountdownBadgingHelper shouldShowCellIconBadging] */

uint FUN_104e0e0dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  puVar1 = PTR_PTR_1126b0bd8;
  func_0x00010c07b3c0(PTR_PTR_1126b0bd8,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)puVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf53000();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 104e0e13c; end: 104e0e197; -[SCProfileCountdownBadgingHelper setCellIconBadgingHasBeenShown] */

void FUN_104e0e13c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0bd8;
  func_0x00010c07b3c0(PTR_PTR_1126b0bd8,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1847a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e0e198; end: 104e0e1f3; -[SCProfileCountdownBadgingHelper setProfileIconCountdownsBadgingHasBeenShown] */

void FUN_104e0e198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0bd8;
  func_0x00010c07b3c0(PTR_PTR_1126b0bd8,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e0e1f4; end: 104e0e223; -[SCProfileCountdownBadgingHelper .cxx_destruct] */

void FUN_104e0e1f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0e224; end: 104e0e36b;  */

undefined1  [16] FUN_104e0e224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104e0e36c;
  uStack_40 = 0x104e0e37c;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104e0e36c;
  uStack_70 = 0x104e0e37c;
  uStack_68 = 0;
  func_0x00010c0bdf00(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  uVar2 = puStack_88[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104e0e36c; end: 104e0e383;  */

void FUN_104e0e36c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e0e384; end: 104e0e40b;  */

void FUN_104e0e384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e0e40c; end: 104e0e44b;  */

void FUN_104e0e40c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e0e44c; end: 104e0e513; -[SCProfileCountdownDataLoader initWithNetworkRequester:updateBlock:] */

undefined1 *
FUN_104e0e44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e0e514; end: 104e0e5c7; -[SCProfileCountdownDataLoader loadCountdownData:performer:] */

void FUN_104e0e514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e0e5c8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f88c0(param_4,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e0e5c8; end: 104e0e877;  */

void FUN_104e0e5c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_104e0e224();
  lVar4 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(lVar3);
  if (lVar4 == 0) goto LAB_104e0e7fc;
  _objc_retain(lVar1);
  _objc_retain(param_2);
  if (lVar1 == param_2) {
    _objc_release(param_2);
    _objc_release(lVar1);
LAB_104e0e694:
    _objc_retain(lVar1);
    _objc_retain(lVar3);
    _objc_initWeak(auStack_48,lVar4);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    _objc_retain(lVar1);
    lStack_58 = lVar1;
    func_0x00010bfc3be0(uVar5);
    _objc_release(lStack_58);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    lVar4 = lVar3;
  }
  else {
    if (param_2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c071ae0();
      _objc_release(param_2);
      _objc_release(lVar1);
      if ((int)lVar2 != 0) goto LAB_104e0e694;
    }
    _objc_retain(lVar1);
    _objc_retain(param_2);
    _objc_retain(lVar3);
    _objc_initWeak(auStack_48,lVar4);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    _objc_copyWeak(&lStack_58,auStack_48);
    _objc_retain(lVar3);
    func_0x00010bfca380(uVar5);
    _objc_release(lVar3);
    _objc_destroyWeak(&lStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar3);
    lVar4 = param_2;
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
LAB_104e0e7fc:
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e0e878; end: 104e0e9e3;  */

void FUN_104e0e878(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010bf5e5e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar2);
      lVar3 = param_2;
      func_0x00010bf530c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfece40();
      _objc_release(lVar3);
      if (lVar4 == 0x7fffffffffffffff) {
        lVar4 = 0;
      }
      else {
        lVar3 = param_2;
        func_0x00010bf530c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
      lVar3 = param_2;
      func_0x00010bf530e0(param_2);
      FUN_104e0e9e4(lVar1,lVar4,lVar3 != 0,*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar4);
    }
    else {
      FUN_104e0e9e4(lVar1,0,1,*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e0e9e4; end: 104e0ea7f;  */

void FUN_104e0e9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0f88c0(param_4);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104e0ea80; end: 104e0eb33;  */

undefined8 FUN_104e0ea80(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfd5e40();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf53040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2510e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1552c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (*(double *)(param_1 + 0x20) < (double)lVar3) {
      uVar4 = 1;
      *param_4 = 1;
      goto LAB_104e0eb10;
    }
  }
  uVar4 = 0;
LAB_104e0eb10:
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 104e0eb34; end: 104e0ec33;  */

void FUN_104e0eb34(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar3 = param_2;
      func_0x00010bfd5e20();
      if ((uVar3 & 1) != 0) {
        uVar3 = param_2;
        func_0x00010bf52fc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        FUN_104e0e9e4(lVar1,uVar3,1,*(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar3);
        goto LAB_104e0ec0c;
      }
    }
    else {
      uVar3 = param_3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar2 & 1) == 0) {
        FUN_104e0e9e4(lVar1,0,1,*(undefined8 *)(param_1 + 0x20));
        goto LAB_104e0ec0c;
      }
    }
    FUN_104e0ec34(lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
LAB_104e0ec0c:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e0ec34; end: 104e0ed23;  */

void FUN_104e0ec34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc4200(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104e0ed24; end: 104e0ed9f;  */

void FUN_104e0ed24(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      lVar3 = param_2;
      func_0x00010bf530e0(param_2);
      bVar1 = lVar3 != 0;
    }
    else {
      bVar1 = true;
    }
    FUN_104e0e9e4(lVar2,0,bVar1,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e0eda0; end: 104e0edcb;  */

void FUN_104e0eda0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104e0edc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 104e0edcc; end: 104e0ee07; -[SCProfileCountdownDataLoader .cxx_destruct] */

void FUN_104e0edcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0ee08; end: 104e0f2af; -[SCCountdownsFriendProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0ee08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  ulong uVar24;
  long lVar25;
  
  puVar2 = PTR_PTR_1126b0be0;
  lVar25 = (long)_DAT_112713994;
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar1);
  func_0x000104e0dfc4(puVar2,lVar1);
  _objc_release(lVar1);
  if ((int)puVar2 != 0) {
    uVar3 = param_1 + lVar25;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0bf0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c27d720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27d740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010c27d880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      uVar24 = uVar4;
      func_0x00010bf1f440();
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c067fc0();
      uVar24 = (ulong)(puVar7 == (undefined *)0x1);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar24 & 1) == 0) {
      lVar23 = (long)_DAT_112713998;
      lVar1 = param_1 + lVar23;
      _objc_loadWeakRetained();
      lVar8 = lVar1;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar8;
      func_0x000100bf119c();
      if ((int)lVar1 != 0) {
        lVar1 = param_1 + _DAT_11271399c;
        _objc_loadWeakRetained();
        lVar9 = lVar1;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b0be8;
        _objc_alloc();
        lVar10 = param_1 + _DAT_1127139a0;
        _objc_loadWeakRetained();
        lVar11 = lVar10;
        func_0x00010bf89340();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_1 + _DAT_1127139a4;
        _objc_loadWeakRetained();
        lVar13 = lVar12;
        func_0x00010bf50420();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_1 + _DAT_1127139a8;
        _objc_loadWeakRetained();
        lVar25 = param_1 + lVar25;
        _objc_loadWeakRetained();
        lVar15 = lVar25;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = param_1 + _DAT_1127139ac;
        _objc_loadWeakRetained();
        lVar17 = param_1 + _DAT_1127139b0;
        _objc_loadWeakRetained();
        lVar18 = lVar17;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_1 + _DAT_1127139b4;
        _objc_loadWeakRetained();
        lVar20 = param_1;
        func_0x00010bde3b80();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = param_1 + _DAT_1127139b8;
        _objc_loadWeakRetained();
        lVar22 = lVar21;
        func_0x00010c1067a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00e480();
        _objc_release(lVar22);
        _objc_release(lVar21);
        _objc_release(lVar20);
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar25);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        lVar25 = param_1 + _DAT_1127139bc;
        _objc_loadWeakRetained(lVar25);
        lVar10 = lVar25;
        func_0x00010c244ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar9);
        func_0x00010c2448c0(lVar12);
        _objc_release(lVar12);
        _objc_release(lVar10);
        _objc_release(lVar25);
        param_1 = param_1 + lVar23;
        _objc_loadWeakRetained(param_1);
        lVar25 = param_1;
        func_0x00010c1018e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125b60();
        _objc_release(lVar25);
        _objc_release(param_1);
        _objc_release(lVar9);
        _objc_release(lVar9);
        _objc_release(puVar2);
        _objc_release(lVar1);
      }
      _objc_release(lVar8);
    }
  }
  return;
}



/* Entry: 104e0f2b0; end: 104e0f32b;  */

void FUN_104e0f2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0b58;
  func_0x00010c2447a0(PTR_PTR_1126b0b58,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0bd0;
  func_0x00010bfb9240(PTR_PTR_1126b0bd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9300(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e0f32c; end: 104e0f393; -[SCCountdownsFriendProfileSectionEntryPoint _composerBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0f32c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127139c0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e0f394; end: 104e0f443; -[SCCountdownsFriendProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0f394(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127139b8);
  _objc_destroyWeak(param_1 + _DAT_1127139c0);
  _objc_destroyWeak(param_1 + _DAT_1127139b4);
  _objc_destroyWeak(param_1 + _DAT_1127139b0);
  _objc_destroyWeak(param_1 + _DAT_1127139ac);
  _objc_destroyWeak(param_1 + _DAT_1127139a8);
  _objc_destroyWeak(param_1 + _DAT_112713994);
  _objc_destroyWeak(param_1 + _DAT_1127139a4);
  _objc_destroyWeak(param_1 + _DAT_1127139a0);
  _objc_destroyWeak(param_1 + _DAT_1127139bc);
  _objc_destroyWeak(param_1 + _DAT_11271399c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713998);
  return;
}



/* Entry: 104e0f444; end: 104e0f89b; -[SCCountdownsMyProfileSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0f444(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  ulong uVar22;
  long lVar23;
  
  puVar2 = PTR_PTR_1126b0be0;
  lVar23 = (long)_DAT_1127139c4;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar1);
  func_0x000104e0dfc4(puVar2,lVar1);
  _objc_release(lVar1);
  if ((int)puVar2 != 0) {
    uVar3 = param_1 + lVar23;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0bf0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c27d720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27d740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010c27d880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      uVar22 = uVar4;
      func_0x00010bf1f440();
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c067fc0();
      uVar22 = (ulong)(puVar7 == (undefined *)0x1);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar22 & 1) == 0) {
      lVar1 = param_1 + _DAT_1127139c8;
      _objc_loadWeakRetained();
      lVar8 = lVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b0be8;
      _objc_alloc();
      lVar9 = param_1 + _DAT_1127139cc;
      _objc_loadWeakRetained();
      lVar10 = lVar9;
      func_0x00010bf89340();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1 + _DAT_1127139d0;
      _objc_loadWeakRetained();
      lVar12 = lVar11;
      func_0x00010bf50420();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1 + _DAT_1127139d4;
      _objc_loadWeakRetained();
      lVar23 = param_1 + lVar23;
      _objc_loadWeakRetained();
      lVar14 = lVar23;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + _DAT_1127139d8;
      _objc_loadWeakRetained();
      lVar16 = param_1 + _DAT_1127139dc;
      _objc_loadWeakRetained();
      lVar17 = lVar16;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1 + _DAT_1127139e0;
      _objc_loadWeakRetained();
      lVar19 = param_1;
      func_0x00010bde3b80();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_1 + _DAT_1127139e4;
      _objc_loadWeakRetained();
      lVar21 = lVar20;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e480();
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar23);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      lVar23 = param_1 + _DAT_1127139e8;
      _objc_loadWeakRetained(lVar23);
      lVar9 = lVar23;
      func_0x00010c244ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar8);
      func_0x00010c2448c0(lVar11);
      _objc_release(lVar11);
      _objc_release(lVar9);
      _objc_release(lVar23);
      param_1 = param_1 + _DAT_1127139ec;
      _objc_loadWeakRetained(param_1);
      lVar23 = param_1;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar23);
      _objc_release(param_1);
      _objc_release(lVar8);
      _objc_release(lVar8);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 104e0f89c; end: 104e0f917;  */

void FUN_104e0f89c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0b58;
  func_0x00010c2447a0(PTR_PTR_1126b0b58,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0bd0;
  func_0x00010bfb9240(PTR_PTR_1126b0bd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9300(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e0f918; end: 104e0f97f; -[SCCountdownsMyProfileSectionEntryPoint _composerBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0f918(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127139f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104e0f980; end: 104e0fa2f; -[SCCountdownsMyProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0f980(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127139e4);
  _objc_destroyWeak(param_1 + _DAT_1127139f0);
  _objc_destroyWeak(param_1 + _DAT_1127139e0);
  _objc_destroyWeak(param_1 + _DAT_1127139dc);
  _objc_destroyWeak(param_1 + _DAT_1127139d8);
  _objc_destroyWeak(param_1 + _DAT_1127139d4);
  _objc_destroyWeak(param_1 + _DAT_1127139c4);
  _objc_destroyWeak(param_1 + _DAT_1127139d0);
  _objc_destroyWeak(param_1 + _DAT_1127139cc);
  _objc_destroyWeak(param_1 + _DAT_1127139e8);
  _objc_destroyWeak(param_1 + _DAT_1127139c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127139ec);
  return;
}



/* Entry: 104e0fa30; end: 104e0fa4b; -[SCUnifiedProfileCountdownsSection sectionInsets] */

void FUN_104e0fa30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0x4028000000000000,0x4030000000000000,
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 104e0fa4c; end: 104e0fa53; -[SCUnifiedProfileCountdownsSection minimumSectionInteritemSpacing] */

undefined8 FUN_104e0fa4c(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 104e0fa54; end: 104e0fa5b; -[SCUnifiedProfileCountdownsSection minimumSectionLineSpacing] */

undefined8 FUN_104e0fa54(void)

{
  return 0x4018000000000000;
}



/* Entry: 104e0fa5c; end: 104e0fecf; -[SCUnifiedProfileCountdownsSectionCreator initWithDownloader:conversationIdResolver:participantInfo:isMyProfilePage:countdownServices:circumstanceEngine:countdownsNetworkServices:valdiRuntimeProvider:composerPeopleBridgeFriendServices:composerBlizzardLogger:userPreferences:] */

undefined8 *
FUN_104e0fa5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined1 param_6,undefined8 param_7,undefined8 param_8,undefined ***param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_a8 = PTR_PTR_1126e4598;
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  pppuVar10 = param_9;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(&ppuStack_78,puVar1);
    puVar3 = PTR_PTR_1126b0bf8;
    _objc_alloc();
    ppuStack_a0 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x104e10364;
    puStack_88 = &UNK_1108434b0;
    pppuVar10 = &ppuStack_a0;
    _objc_copyWeak(auStack_80,&ppuStack_78);
    func_0x00010c006260();
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(&ppuStack_78);
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    FUN_104e13c98();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b0c00;
    _objc_alloc();
    func_0x00010c043040();
    func_0x00010c161980();
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0c08;
    _objc_alloc();
    func_0x00010c04f820();
    puVar5 = puVar1 + 1;
    uVar2 = *puVar5;
    *puVar5 = puVar3;
    _objc_release(uVar2);
    uVar2 = *puVar5;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f12378;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(uVar2);
    _objc_release(puVar3);
    func_0x00010c161980(*puVar5);
    puVar3 = PTR_PTR_1126b0c10;
    _objc_opt_new();
    func_0x00010c1f9240(*puVar5);
    _objc_release(puVar3);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = 0;
    _objc_release(uVar2);
    if (param_5 != 0) {
      FUN_104e0fed0(puVar1);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(pppuVar10 + 4);
  _objc_destroyWeak(&ppuStack_78);
  __Unwind_Resume();
  if (param_3 != 0) {
    puVar1 = (undefined8 *)PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar5 = puVar1;
    FUN_104e13c98();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000104e13d10();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x000108f72910(puVar5,puVar6,&PTR____CFConstantStringClassReference_110db6698,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c286480(*(undefined8 *)(param_3 + 0x18));
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bfcb6c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0bc0;
    _objc_alloc();
    func_0x00010bffeae0();
    puVar8 = PTR_PTR_1126b0c18;
    _objc_alloc(PTR_PTR_1126b0c18);
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010bf53120(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e4a0(puVar8);
    _objc_release(uVar2);
    _objc_release(uVar9);
    func_0x00010c1f9240(*(undefined8 *)(param_3 + 8));
    _objc_storeWeak(param_3 + 0x20,puVar8);
    uVar2 = *(undefined8 *)(param_3 + 0x90);
    func_0x000106639468(uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x88);
    *(undefined8 *)(param_3 + 0x88) = uVar2;
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 104e0fed0; end: 104e100af;  */

void FUN_104e0fed0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar2 = puVar1;
    FUN_104e13c98();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000104e13d10();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000108f72910(puVar2,puVar3,&PTR____CFConstantStringClassReference_110db6698,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c286480(*(undefined8 *)(param_1 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfcb6c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0bc0;
    _objc_alloc();
    func_0x00010bffeae0();
    puVar3 = PTR_PTR_1126b0c18;
    _objc_alloc(PTR_PTR_1126b0c18);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf53120(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e4a0(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c1f9240(*(undefined8 *)(param_1 + 8));
    _objc_storeWeak(param_1 + 0x20,puVar3);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    func_0x000106639468(uVar7,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e100b0; end: 104e1018b; -[SCUnifiedProfileCountdownsSectionCreator setParticipantInfo:] */

void FUN_104e100b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c155a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2890a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e1018c;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar2,param_2,&puStack_70);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e1018c; end: 104e101cb;  */

void FUN_104e1018c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  _objc_release(uVar7);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar2 = puVar1;
    FUN_104e13c98();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000104e13d10();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x000108f72910(puVar2,puVar3,&PTR____CFConstantStringClassReference_110db6698,puVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c286480(*(undefined8 *)(lVar8 + 0x18));
    uVar7 = *(undefined8 *)(lVar8 + 0x10);
    func_0x00010bfcb6c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0bc0;
    _objc_alloc();
    func_0x00010bffeae0();
    puVar3 = PTR_PTR_1126b0c18;
    _objc_alloc(PTR_PTR_1126b0c18);
    uVar5 = *(undefined8 *)(lVar8 + 0x58);
    func_0x00010bf53120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e4a0(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c1f9240(*(undefined8 *)(lVar8 + 8));
    _objc_storeWeak(lVar8 + 0x20,puVar3);
    uVar6 = *(undefined8 *)(lVar8 + 0x90);
    func_0x000106639468(uVar6,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar8 + 0x88);
    *(undefined8 *)(lVar8 + 0x88) = uVar6;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e101cc; end: 104e101f3; -[SCUnifiedProfileCountdownsSectionCreator configuration] */

void FUN_104e101cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e101f4; end: 104e1023b; -[SCUnifiedProfileCountdownsSectionCreator order] */

undefined8 FUN_104e101f4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  FUN_104e1023c(uVar1,*(undefined8 *)(param_1 + 0x80));
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x2a;
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar2 = 0x3b;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}



/* Entry: 104e1023c; end: 104e10313;  */

bool FUN_104e1023c(double param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = false;
  if ((param_2 != 0) && (param_3 != 0)) {
    _objc_retain(param_2);
    func_0x00010bf5e5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(param_3);
    lVar2 = param_2;
    func_0x00010bf53040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010c2510e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1552c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    bVar1 = false;
    if ((double)lVar4 <= (double)(long)param_1 + 86400.0) {
      bVar1 = (double)(long)param_1 + -86400.0 <= (double)lVar4;
    }
  }
  return bVar1;
}



/* Entry: 104e10314; end: 104e1033b; -[SCUnifiedProfileCountdownsSectionCreator section] */

void FUN_104e10314(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e1033c; end: 104e103a7; -[SCUnifiedProfileCountdownsSectionCreator actionHandler] */

void FUN_104e1033c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e103a8; end: 104e104a7; -[SCUnifiedProfileCountdownsSectionCreator countdownsDataProviderDidReceiveCountdown:] */

void FUN_104e103a8(long param_1,undefined8 param_2,long param_3)

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
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x90) != param_3) {
    lVar1 = param_3;
    FUN_104e1023c(param_3,*(undefined8 *)(param_1 + 0x80));
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    FUN_104e1023c(uVar2,*(undefined8 *)(param_1 + 0x80));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = param_3;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    func_0x000106639468(uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    _objc_release(uVar4);
    if ((int)lVar1 != (int)uVar2) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_104e104a8;
      puStack_40 = &UNK_110842e18;
      uStack_38 = uVar2;
      _objc_retain(uVar2);
      func_0x0001000d76cc("APPSTORE",&puStack_58);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104e104a8; end: 104e104e3;  */

void FUN_104e104a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e104e4; end: 104e104fb; -[SCUnifiedProfileCountdownsSectionCreator lifecycleAnnouncer] */

void FUN_104e104e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e104fc; end: 104e10507; -[SCUnifiedProfileCountdownsSectionCreator setLifecycleAnnouncer:] */

void FUN_104e104fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104e10508; end: 104e1050f; -[SCUnifiedProfileCountdownsSectionCreator participantInfo] */

undefined8 FUN_104e10508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104e10510; end: 104e105f7; -[SCUnifiedProfileCountdownsSectionCreator .cxx_destruct] */

void FUN_104e10510(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e105f8; end: 104e10603; +[SCUnifiedProfileCountdownsSectionDataProvider announcerIdentifier] */

undefined ** FUN_104e105f8(void)

{
  return &PTR____CFConstantStringClassReference_110db66d8;
}



/* Entry: 104e10604; end: 104e1060b; -[SCUnifiedProfileCountdownsSectionDataProvider addListener:] */

void FUN_104e10604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104e1060c; end: 104e10613; -[SCUnifiedProfileCountdownsSectionDataProvider removeListener:] */

void FUN_104e1060c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104e10614; end: 104e1090f; -[SCUnifiedProfileCountdownsSectionDataProvider initWithDownloader:participantInfo:traitCollectionFetcher:countdownsNetworkRequester:valdiRuntimeProvider:composerPeopleBridgeFriendServices:composerBlizzardLogger:countdownBadgingHelper:delegate:circumstanceEngine:] */

undefined8 *
FUN_104e10614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126e45a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    puVar1[5] = 2;
    puVar3 = PTR_PTR_1126aea90;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xc,param_11);
    *(undefined1 *)(puVar1 + 8) = 0;
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126b0c20;
    _objc_alloc();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c02f4c0();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 104e10910; end: 104e10a67;  */

void FUN_104e10910(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    *(undefined8 *)(param_1 + 0x28) = 2;
    uVar4 = param_2;
    func_0x00010bfd5e40();
    uVar1 = param_2;
    if ((int)uVar4 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar4 = *(ulong *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_retain(uVar1);
    if (uVar4 == uVar1) {
      uVar5 = 1;
    }
    else if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4;
      func_0x00010c071ae0();
    }
    _objc_release(uVar1);
    _objc_release(uVar4);
    if (((*(byte *)(param_1 + 0x40) != param_3) || ((*(byte *)(param_1 + 0x41) & 1) == 0)) ||
       ((uVar5 & 1) == 0)) {
      _objc_retain(uVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      *(ulong *)(param_1 + 0x38) = uVar1;
      _objc_release(uVar2);
      *(char *)(param_1 + 0x40) = (char)param_3;
      *(undefined1 *)(param_1 + 0x41) = 1;
      lVar3 = param_1 + 0x88;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c155aa0();
      _objc_release(lVar3);
      func_0x00010c0bbc80(*(undefined8 *)(param_1 + 0x80));
      lVar3 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf53100();
      _objc_release(lVar3);
    }
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e10a68; end: 104e10b5f; -[SCUnifiedProfileCountdownsSectionDataProvider setSectionDataModel:] */

void FUN_104e10a68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x98);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
LAB_104e10ae0:
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    lVar3 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf96740(uVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar3);
    }
    else {
      lVar1 = lVar3;
      func_0x00010c071ae0(lVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar3);
      if ((int)lVar1 != 0) goto LAB_104e10ae0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c155aa0();
    _objc_release(lVar3);
    func_0x00010c0bbc80(*(undefined8 *)(param_1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e10b60; end: 104e10b8b; -[SCUnifiedProfileCountdownsSectionDataProvider reloadGRPCData] */

void FUN_104e10b60(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 1) {
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c09b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_loadCountdownData_performer__1126046a0,
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 104e10b8c; end: 104e10bc3; -[SCUnifiedProfileCountdownsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_104e10b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c128cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadGRPCData_112627d58);
  return;
}



/* Entry: 104e10bc4; end: 104e10be7; -[SCUnifiedProfileCountdownsSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_104e10bc4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 2;
  }
  uVar1 = 1;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 104e10be8; end: 104e10c47; -[SCUnifiedProfileCountdownsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_104e10be8(long param_1)

{
  undefined *puVar1;
  
  if ((*(long *)(param_1 + 0x28) == 1) && ((*(byte *)(param_1 + 0x42) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x42) = 1;
    puVar1 = PTR_PTR_1126b0c28;
    _objc_opt_new(PTR_PTR_1126b0c28);
    func_0x000108c7a5d0();
    _objc_release(puVar1);
  }
  return 2;
}



/* Entry: 104e10c48; end: 104e10e5f; -[SCUnifiedProfileCountdownsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_104e10c48(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  
  ppuVar2 = &puStack_110;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  _objc_initWeak(auStack_a8,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104e10e60;
  puStack_c0 = &UNK_110851a18;
  lStack_b8 = lVar8;
  _objc_copyWeak(auStack_b0,auStack_a8);
  ppuVar1 = &puStack_d8;
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar10);
  puStack_110 = puVar5;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104e10ef0;
  puStack_f8 = &UNK_110851a48;
  puVar7 = auStack_a8;
  uStack_f0 = uVar9;
  uStack_e8 = uVar10;
  _objc_copyWeak(auStack_e0);
  _objc_retainBlock();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110db66f8;
  ppuVar3 = ppuVar1;
  _objc_retainBlock();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110db6738;
  puVar4 = (undefined1 *)ppuVar2;
  ppuStack_90 = ppuVar3;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar5 = PTR_PTR_1126b0c30;
  _objc_opt_class(PTR_PTR_1126b0c30);
  puVar6 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar5);
  puVar4 = puVar7;
  if (((ulong)puVar6 & 1) == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  _objc_retain(puVar4);
  func_0x00010c191460(puVar4);
  _objc_release(puVar4);
  lVar8 = lVar8 + 0x28;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    func_0x00010c1e40e0(*(undefined8 *)(lVar8 + 0x68));
  }
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104e10e60; end: 104e10f8b;  */

void FUN_104e10e60(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0c30;
  _objc_opt_class(PTR_PTR_1126b0c30);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c191460(uVar1);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1e40e0(*(undefined8 *)(param_1 + 0x68));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e10f8c; end: 104e115cf; -[SCUnifiedProfileCountdownsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_104e10f8c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    cVar2 = *(char *)(param_1 + 0x40);
    puVar11 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar12 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x68);
    func_0x00010c2334c0();
    lVar13 = *(long *)(param_1 + 0x78);
    func_0x000108fab140(lVar13);
    puVar14 = PTR_PTR_1126b0c48;
    _objc_alloc();
    puVar15 = puVar14;
    func_0x000104e13cb0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar6);
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_104e11670;
    uStack_a8 = 0x104e11680;
    uStack_a0 = 0;
    func_0x00010c0bdf00(uVar6);
    uVar18 = puStack_c0[5];
    _objc_retain(uVar18);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    _objc_release(uVar6);
    FUN_104e13d28(puVar14,puVar15,uVar18,puVar11,uVar3,0 < lVar13,puVar12,
                  *(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar18);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (cVar2 == '\0') {
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_90 = puVar15;
      FUN_104e115d0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = param_1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
  }
  else {
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_104e11670;
    uStack_a8 = 0x104e11680;
    uStack_a0 = 0;
    func_0x00010c0bdf00(*(undefined8 *)(param_1 + 0x18));
    lVar4 = *(long *)(param_1 + 0x38);
    func_0x00010bf53040(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar4;
    func_0x00010bf52fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar13;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    _objc_release(lVar4);
    puVar11 = PTR_PTR_1126b0bc8;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfe5ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar6;
    FUN_104e14b18(puVar11,uVar6,lVar5 != 0,*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar6);
    puVar12 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    lVar7 = *(long *)(param_1 + 0x38);
    func_0x00010bf53040();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b0c58;
    _objc_alloc();
    uVar16 = puStack_c0[5];
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfe5ea0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar7;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010bf5b440(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c2510e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x00010c1552c0();
    puVar15 = PTR_PTR_1126b0c68;
    _objc_alloc();
    func_0x00010bff8500();
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    FUN_104e0e224();
    uVar6 = uVar10;
    func_0x00010c0720c0();
    ppuVar1 = &PTR_PTR_1133ba488;
    if ((int)uVar6 == 0) {
      ppuVar1 = &PTR_PTR_1133ba490;
    }
    puVar17 = *ppuVar1;
    _objc_retain(puVar17);
    func_0x00010c1d86a0(puVar15);
    _objc_retain(puVar15);
    _objc_release(puVar17);
    _objc_release(uVar10);
    _objc_release(uVar18);
    _objc_release(puVar15);
    FUN_104e142f8(puVar14,puVar12,uVar16,uVar8,lVar13,lVar5,lVar9 * 1000,puVar15);
    _objc_release(puVar15);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar13);
    _objc_release(uVar8);
    puVar15 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    _objc_release(puVar14);
    _objc_release(lVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    puStack_80 = puVar15;
    FUN_104e115d0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_c8,8);
    __Unwind_Resume();
    puVar11 = (undefined *)0x0;
    if (param_3 != 0) {
      puVar12 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      puVar14 = PTR_PTR_1126b0c50;
      _objc_alloc(PTR_PTR_1126b0c50);
      FUN_104e140c0();
      puVar11 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar14);
      _objc_release(puVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104e115d0; end: 104e1166f;  */

void FUN_104e115d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar2 = PTR_PTR_1126b0c50;
    _objc_alloc(PTR_PTR_1126b0c50);
    FUN_104e140c0();
    puVar3 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    func_0x00010bffd260();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e11670; end: 104e11687;  */

void FUN_104e11670(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e11688; end: 104e11707;  */

void FUN_104e11688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e11708; end: 104e11713; -[SCUnifiedProfileCountdownsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_104e11708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0c60,PTR_s_contentCellClassesByReuseIdentif_1125b0998);
  return;
}



/* Entry: 104e11714; end: 104e1172b; -[SCUnifiedProfileCountdownsSectionDataProvider dataProviderDelegate] */

void FUN_104e11714(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e1172c; end: 104e11737; -[SCUnifiedProfileCountdownsSectionDataProvider setDataProviderDelegate:] */

void FUN_104e1172c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 104e11738; end: 104e1173f; -[SCUnifiedProfileCountdownsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_104e11738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104e11740; end: 104e11747; -[SCUnifiedProfileCountdownsSectionDataProvider sectionDataModel] */

undefined8 FUN_104e11740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104e11748; end: 104e1189b; -[SCUnifiedProfileCountdownsSectionDataProvider .cxx_destruct] */

void FUN_104e11748(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104e1189c; end: 104e11953; +[SCUnifiedProfileCountdownsCellClassesByReuseIdentifier contentCellClassesByReuseIdentifier] */

undefined ** FUN_104e1189c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db66f8;
  puVar1 = PTR_PTR_1126b0c30;
  _objc_opt_class();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110db6738;
  puVar2 = PTR_PTR_1126b0c38;
  puStack_30 = puVar1;
  _objc_opt_class();
  ppuStack_38 = &PTR____CFConstantStringClassReference_110db6718;
  puVar1 = PTR_PTR_1126b0c70;
  puStack_28 = puVar2;
  _objc_opt_class();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_48,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110db66d8;
}


