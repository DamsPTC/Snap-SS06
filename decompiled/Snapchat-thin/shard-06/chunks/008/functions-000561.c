/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eb9c4c; end: 104eb9d47;  */

void FUN_104eb9c4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010beeff20(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb9d48; end: 104eb9d4f;  */

void FUN_104eb9d48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 104eb9d50; end: 104eb9d57; -[SCLensesUnlockableModularCameraWorkflow selectedLens] */

undefined8 FUN_104eb9d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104eb9d58; end: 104eb9d87; -[SCLensesUnlockableModularCameraWorkflow setSelectedLens:] */

void FUN_104eb9d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb9d88; end: 104eb9e8b; -[SCLensesUnlockableModularCameraWorkflow .cxx_destruct] */

void FUN_104eb9d88(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eb9e8c; end: 104eb9eff; -[SCGrapheneLensTappableLinkMetric2 init] */

undefined1 * FUN_104eb9e8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4ce0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104eb9f00; end: 104eba073;  */

char * FUN_104eb9f00(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  char *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
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
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
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
  puVar7 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
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
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    param_4 = puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
      param_4 = puVar6;
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
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar8;
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110857b48);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar6 = (undefined1 *)puVar7;
    param_4 = puVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar6 = (undefined1 *)puVar7;
      param_4 = puVar8;
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
  __Unwind_Resume();
  ppcVar3 = &pcStack_1d0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_1c8 = PTR_PTR_1126e4ce8;
  pcStack_1d0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar6;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined8 *)((long)ppcVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x40);
    *(undefined8 *)((long)ppcVar3 + 0x40) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (char *)ppcVar3;
}



/* Entry: 104eba074; end: 104eba1e7;  */

char * FUN_104eba074(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
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
    (**(code **)(*plVar8 + 0x18))(plVar8);
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
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110857b48);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    param_4 = puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
      param_4 = puVar5;
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
  ppcVar3 = &pcStack_150;
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_148 = PTR_PTR_1126e4ce8;
  pcStack_150 = pcVar2;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar7;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined8 *)((long)ppcVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x40);
    *(undefined8 *)((long)ppcVar3 + 0x40) = param_7;
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  return (char *)ppcVar3;
}



/* Entry: 104eba1e8; end: 104eba35b;  */

char * FUN_104eba1e8(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110857b48);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  ppcVar2 = &pcStack_d0;
  _objc_retain(puVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_c8 = PTR_PTR_1126e4ce8;
  pcStack_d0 = pcVar1;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    _objc_retain(puVar4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 8);
    *(undefined1 **)((long)ppcVar2 + 8) = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x10);
    *(undefined1 **)((long)ppcVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x20);
    *(undefined8 *)((long)ppcVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x18);
    *(undefined8 *)((long)ppcVar2 + 0x18) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x18);
    *(undefined8 *)((long)ppcVar2 + 0x18) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)ppcVar2 + 0x40);
    *(undefined8 *)((long)ppcVar2 + 0x40) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  return (char *)ppcVar2;
}



/* Entry: 104eba35c; end: 104eba493; -[SCLensFriendApiPluginHandler initWithSnapchatterServices:addFriendsScopeServices:lensUserFeatureLauncherServices:contactPermissionInfoServices:contactPermissionRequestScopeExposer:] */

undefined1 *
FUN_104eba35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e4ce8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eba494; end: 104eba757; -[SCLensFriendApiPluginHandler handleRequest:] */

void FUN_104eba494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf95e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  uVar2 = param_3;
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010bf95e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_104eba758;
      puStack_68 = &UNK_110848218;
      ppuVar6 = &puStack_80;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar1);
      puStack_60 = puVar1;
      _objc_retain(param_3);
      uStack_58 = param_3;
      func_0x0001000d76cc("APPSTORE",&puStack_80);
      _objc_release(uStack_58);
      puVar5 = puStack_60;
LAB_104eba5d4:
      _objc_release(puVar5);
      _objc_destroyWeak(ppuVar6 + 6);
      _objc_destroyWeak(auStack_48);
      goto LAB_104eba5e8;
    }
    uVar3 = param_3;
    func_0x00010bf95e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      uVar3 = param_3;
      func_0x00010bf95e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        _objc_initWeak(auStack_48,param_1);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x104eba7b8;
        puStack_a0 = &UNK_110848218;
        ppuVar6 = &puStack_b8;
        _objc_copyWeak(auStack_88,auStack_48);
        _objc_retain(puVar1);
        puStack_98 = puVar1;
        _objc_retain(param_3);
        uStack_90 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_b8);
        _objc_release(uStack_90);
        puVar5 = puStack_98;
        goto LAB_104eba5d4;
      }
      func_0x00010c135700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3d6c0(param_1);
    }
    else {
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2a300(param_1);
    }
  }
  else {
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2a380(param_1);
  }
  _objc_release(uVar2);
LAB_104eba5e8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eba758; end: 104eba817;  */

void FUN_104eba758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c135700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be256c0(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104eba818; end: 104eba81b; -[SCLensFriendApiPluginHandler reset] */

void FUN_104eba818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupIvars_112555788);
  return;
}



/* Entry: 104eba81c; end: 104eba8bf; -[SCLensFriendApiPluginHandler _invalidRequestErrorWithResponseSubject:requestId:] */

void FUN_104eba81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0278;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c03efa0(puVar1,param_2,param_4,5,puVar2,0,0);
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010c0d9840(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eba8c0; end: 104ebaa97; -[SCLensFriendApiPluginHandler _handleSyncContactsWithResponseSubject:requestId:] */

void FUN_104eba8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf49f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd45e0();
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf49f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdc40();
  _objc_release(uVar6);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aeb30;
  _objc_alloc(PTR_PTR_1126aeb30);
  func_0x00010c01f0a0();
  puVar3 = PTR_PTR_1126b1c10;
  _objc_alloc();
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_new(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = PTR_PTR_1126aeb38;
  _objc_alloc(PTR_PTR_1126aeb38);
  func_0x00010c056700();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ebaa98; end: 104ebac37; -[SCLensFriendApiPluginHandler _handleAddFriendsWithResponseSubject:requestId:] */

void FUN_104ebaa98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af668;
  _objc_alloc(PTR_PTR_1126af668);
  func_0x00010c033380();
  puVar2 = PTR_PTR_1126b1c10;
  _objc_alloc();
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_new(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf22980(uVar4,param_2,puVar1,puVar3,0,0,0,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef8d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  uVar6 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d4a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebac38; end: 104ebae23; -[SCLensFriendApiPluginHandler _handleGetContactStatusWithResponseSubject:requestId:] */

void FUN_104ebac38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf49f80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd45e0();
  _objc_release(uVar6);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf49f40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcdc40();
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b0278;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new();
  uVar6 = 1;
  func_0x00010c03efa0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0d9840(param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(uVar6);
  uVar4 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  _dispatch_group_create();
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_104ebb0dc;
  uStack_e8 = 0x104ebb0ec;
  uStack_e0 = 0;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = 0;
  puStack_120 = &uStack_128;
  puStack_100 = &uStack_108;
  _dispatch_group_enter();
  puVar5 = puVar3;
  func_0x00010bdf7b80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_104ebb0f4;
  puStack_168 = &UNK_110857be8;
  puStack_158 = &uStack_108;
  puStack_150 = &uStack_128;
  _objc_retain(uVar8);
  uStack_160 = uVar8;
  func_0x00010bf85880(puVar5);
  _objc_release(puVar5);
  _dispatch_group_enter(uVar8);
  puVar5 = puVar3;
  func_0x00010bdf7b80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x104ebb178;
  puStack_1a0 = &UNK_110857be8;
  puStack_190 = &uStack_108;
  puStack_188 = &uStack_148;
  _objc_retain(uVar8);
  uStack_198 = uVar8;
  func_0x00010c2622c0(puVar5);
  _objc_release(puVar5);
  _objc_initWeak(auStack_1c0,puVar3);
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_104ebb1fc;
  puStack_1f8 = &UNK_110857c18;
  _objc_copyWeak(auStack_1c8,auStack_1c0);
  puStack_1e0 = &uStack_128;
  puStack_1f0 = puVar2;
  uStack_1e8 = uVar6;
  puStack_1d8 = &uStack_148;
  puStack_1d0 = &uStack_108;
  _objc_retain(uVar6);
  _objc_retain(puVar2);
  func_0x000100bc0718(uVar8,uVar4,&puStack_210);
  _objc_release(uStack_1e8);
  _objc_release(puStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1c0);
  _objc_release(uStack_198);
  _objc_release(uStack_160);
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_128,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar4);
  return;
}



/* Entry: 104ebae24; end: 104ebb0db; -[SCLensFriendApiPluginHandler _handleGetFriendsWithResponseSubject:requestId:] */

void FUN_104ebae24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _dispatch_group_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104ebb0dc;
  uStack_88 = 0x104ebb0ec;
  uStack_80 = 0;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x2020000000;
  uStack_d0 = 0;
  puStack_c0 = &uStack_c8;
  puStack_a0 = &uStack_a8;
  _dispatch_group_enter();
  uVar4 = param_1;
  func_0x00010bdf7b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104ebb0f4;
  puStack_108 = &UNK_110857be8;
  puStack_f8 = &uStack_a8;
  puStack_f0 = &uStack_c8;
  _objc_retain(uVar3);
  uStack_100 = uVar3;
  func_0x00010bf85880(uVar4);
  _objc_release(uVar4);
  _dispatch_group_enter(uVar3);
  uVar4 = param_1;
  func_0x00010bdf7b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x104ebb178;
  puStack_140 = &UNK_110857be8;
  puStack_130 = &uStack_a8;
  puStack_128 = &uStack_e8;
  _objc_retain(uVar3);
  uStack_138 = uVar3;
  func_0x00010c2622c0(uVar4);
  _objc_release(uVar4);
  _objc_initWeak(auStack_160,param_1);
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_104ebb1fc;
  puStack_198 = &UNK_110857c18;
  _objc_copyWeak(auStack_168,auStack_160);
  puStack_180 = &uStack_c8;
  uStack_190 = param_3;
  uStack_188 = param_4;
  puStack_178 = &uStack_e8;
  puStack_170 = &uStack_a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100bc0718(uVar3,uVar2,&puStack_1b0);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_release(uStack_138);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_e8,8);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104ebb0dc; end: 104ebb0f3;  */

void FUN_104ebb0dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104ebb0f4; end: 104ebb1fb;  */

void FUN_104ebb0f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ebb1fc; end: 104ebb30b;  */

void FUN_104ebb1fc(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebb30c; end: 104ebb523; -[SCLensFriendApiPluginHandler _handleGetFriendsCompletionWithResponseSubject:incomingCount:suggestedCount:error:requestId:] */

void FUN_104ebb30c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b0278;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_6 == 0) {
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110db9378);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110db9398);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0278;
    _objc_alloc(PTR_PTR_1126b0278);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c03efa0(puVar2,param_2,param_7,1,puVar4,puVar3,0);
    _objc_release(param_7);
    _objc_release(puVar4);
    func_0x00010c0d9840(param_3,param_2,puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c03efa0(puVar2,param_2,param_7,8,puVar1,0,0);
    _objc_release(param_7);
    _objc_release(puVar1);
    func_0x00010c0d9840(param_3,param_2,puVar2);
    puVar3 = param_3;
    puVar1 = puVar2;
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebb524; end: 104ebb56b; -[SCLensFriendApiPluginHandler _dataFetcher] */

void FUN_104ebb524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c244ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ebb56c; end: 104ebb63f; -[SCLensFriendApiPluginHandler _cleanupIvars] */

void FUN_104ebb56c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef8d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c06f880();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef8d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ebb640; end: 104ebb6d7; -[SCLensFriendApiPluginHandler addFriendsWorkflowCompleted:] */

void FUN_104ebb640(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    puVar1 = PTR_PTR_1126b0278;
    _objc_alloc(PTR_PTR_1126b0278);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c03efa0(puVar1);
    _objc_release(puVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddf7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupIvars_112555788);
  return;
}



/* Entry: 104ebb6d8; end: 104ebb6db; -[SCLensFriendApiPluginHandler addFriendsWorkflowSkipped:] */

void FUN_104ebb6d8(void)

{
  return;
}



/* Entry: 104ebb6dc; end: 104ebb6e3; -[SCLensFriendApiPluginHandler contactPermissionWorkflowCompletedWithGoToSettings:] */

void FUN_104ebb6dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contactPermissionWorkflowComplet_1125b0250,0)
  ;
  return;
}



/* Entry: 104ebb6e4; end: 104ebb843; -[SCLensFriendApiPluginHandler contactPermissionWorkflowCompletedWithPermissionGranted:] */

void FUN_104ebb6e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b0278;
    _objc_alloc(PTR_PTR_1126b0278);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c03efa0(puVar1);
    _objc_release(puVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  func_0x00010bddf7a0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104ebb844; end: 104ebb84b; -[SCLensFriendApiPluginHandler contactPermissionWorkflowSkipped] */

void FUN_104ebb844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contactPermissionWorkflowComplet_1125b0250,0)
  ;
  return;
}



/* Entry: 104ebb84c; end: 104ebb8c3; -[SCLensFriendApiPluginHandler .cxx_destruct] */

void FUN_104ebb84c(long param_1)

{
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



/* Entry: 104ebb8c4; end: 104ebbad3; -[SCLensFriendingApiPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebb8c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  puVar3 = PTR_PTR_1126b0258;
  func_0x00010bfba4c0(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0260;
  _objc_alloc(PTR_PTR_1126b0260);
  func_0x00010c03ee80();
  param_1 = param_1 + _DAT_112715ee4;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104ebbad4; end: 104ebbb13;  */

void FUN_104ebbad4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ebbb14; end: 104ebbbe7; -[SCLensFriendingApiPluginEntryPoint _createPluginHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebbb14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1c18;
  _objc_alloc(PTR_PTR_1126b1c18);
  lVar2 = param_1 + _DAT_112715ee8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112715eec;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_112715ef0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_112715ef4;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c049520(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,
                      *(undefined8 *)(param_1 + _DAT_112715ef8));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ebbbe8; end: 104ebbc5f; -[SCLensFriendingApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebbbe8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715ef8,0);
  _objc_destroyWeak(param_1 + _DAT_112715ef4);
  _objc_destroyWeak(param_1 + _DAT_112715ef0);
  _objc_destroyWeak(param_1 + _DAT_112715eec);
  _objc_destroyWeak(param_1 + _DAT_112715ee8);
  _objc_destroyWeak(param_1 + _DAT_112715efc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715ee4);
  return;
}



/* Entry: 104ebbc60; end: 104ebbe47; -[SCLensRemoteApiMemoriesPickerPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebbc60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  puVar3 = PTR_PTR_1126b0258;
  func_0x00010c0c91a0(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0260;
  _objc_alloc(PTR_PTR_1126b0260);
  func_0x00010c03ee80();
  param_1 = param_1 + _DAT_112715f00;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104ebbe48; end: 104ebbe87;  */

void FUN_104ebbe48(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ebbe88; end: 104ebc03f; -[SCLensRemoteApiMemoriesPickerPluginEntryPoint _createMemoriesPickerHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebbe88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = param_1 + _DAT_112715f04;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715f08;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c091140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b1c20;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112715f0c;
  _objc_loadWeakRetained(lVar1);
  lVar5 = param_1 + _DAT_112715f10;
  _objc_loadWeakRetained();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112715f14);
  lVar6 = param_1 + _DAT_112715f18;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112715f1c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_112715f20;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715f24;
  _objc_loadWeakRetained();
  lVar10 = param_1;
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbe20(puVar4,param_2,lVar1,lVar5,lVar2,uVar11,lVar6,lVar7,lVar9,lVar3,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ebc040; end: 104ebc0e7; -[SCLensRemoteApiMemoriesPickerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ebc040(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715f14,0);
  _objc_destroyWeak(param_1 + _DAT_112715f18);
  _objc_destroyWeak(param_1 + _DAT_112715f24);
  _objc_destroyWeak(param_1 + _DAT_112715f08);
  _objc_destroyWeak(param_1 + _DAT_112715f20);
  _objc_destroyWeak(param_1 + _DAT_112715f1c);
  _objc_destroyWeak(param_1 + _DAT_112715f04);
  _objc_destroyWeak(param_1 + _DAT_112715f10);
  _objc_destroyWeak(param_1 + _DAT_112715f0c);
  _objc_destroyWeak(param_1 + _DAT_112715f28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715f00);
  return;
}



/* Entry: 104ebc0e8; end: 104ebc1b3; -[SCLensRemoteApiMemoriesPickerLoggerImpl initWithBlizzardLogger:lensCarouselLogger:lensUserProvider:] */

undefined1 *
FUN_104ebc0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4cf0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ebc1b4; end: 104ebc213; -[SCLensRemoteApiMemoriesPickerLoggerImpl lensMemoriesPickerRequested] */

void FUN_104ebc1b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1c28;
  _objc_opt_new(PTR_PTR_1126b1c28);
  func_0x00010be390a0(param_1,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebc214; end: 104ebc3c3; -[SCLensRemoteApiMemoriesPickerLoggerImpl lensMemoriesPickerClosedWithSelectedMediaTypes:] */

void FUN_104ebc214(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bed0980(param_1,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        puVar3 = PTR_PTR_1126b1c30;
        _objc_opt_new();
        func_0x00010c21acc0();
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b1c38;
  _objc_opt_new();
  func_0x00010c1ae1c0();
  func_0x00010be390a0(param_1,param_2,puVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  _objc_retain(puVar6);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar6,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar6,param_2,uVar5);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar6,param_2,uVar5);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104ebc3c4; end: 104ebc4f7; -[SCLensRemoteApiMemoriesPickerLoggerImpl _inflateLensBaseEvent:] */

void FUN_104ebc3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5f140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(param_3,param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ebc4f8; end: 104ebc523; -[SCLensRemoteApiMemoriesPickerLoggerImpl _typeFromMemoriesPickerMediaType:] */

undefined8 FUN_104ebc4f8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 5;
  if (param_3 != &PTR____CFConstantStringClassReference_110db93f8) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = 4;
  if (param_3 != &PTR____CFConstantStringClassReference_110db93d8) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 104ebc524; end: 104ebc55f; -[SCLensRemoteApiMemoriesPickerLoggerImpl .cxx_destruct] */

void FUN_104ebc524(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ebc560; end: 104ebc6fb; -[SCLensRemoteApiMemoriesPickerPlugin initWithCameraUIServices:contentDeliveryServices:lensPerformerProvider:memoriesPickerScopeExposer:memoriesPickerScopeServices:videoImportServices:blizzardLogger:lensCarouselLogger:lensUserProvider:] */

undefined1 *
FUN_104ebc560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4cf8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_10);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ebc6fc; end: 104ebc8e7; -[SCLensRemoteApiMemoriesPickerPlugin handleRequest:] */

void FUN_104ebc6fc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010bf95e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf32ee0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010bf2b640(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cfc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar3);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    lVar3 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bea1560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104ebc8e8; end: 104ebc953;  */

void FUN_104ebc8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82040();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebc954; end: 104ebc97f; -[SCLensRemoteApiMemoriesPickerPlugin reset] */

void FUN_104ebc954(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ebc980; end: 104ebcbe7; -[SCLensRemoteApiMemoriesPickerPlugin _processRequest:uiContainer:error:] */

void FUN_104ebc980(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) || (param_5 != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea1560(param_1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar8);
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
      puVar1 = PTR_PTR_1126b1c40;
      _objc_alloc();
      lVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c056f60(puVar1,param_2,param_4,lVar2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126aeb48;
      _objc_alloc(PTR_PTR_1126aeb48);
      func_0x00010c0404c0();
      puVar5 = PTR_PTR_1126b1c48;
      _objc_alloc(PTR_PTR_1126b1c48);
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      lVar6 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bff87c0(puVar5,param_2,lVar2,lVar3,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar7 = PTR_PTR_1126b1c50;
      _objc_alloc();
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c040620(puVar7,param_2,puVar4,lVar2,lVar3,lVar6,puVar5,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar7;
      _objc_release(uVar8);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
    }
    uVar8 = param_3;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    _objc_release(uVar9);
    func_0x00010bf192c0(*(undefined8 *)(param_1 + 0x50));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ebcbe8; end: 104ebcc47; -[SCLensRemoteApiMemoriesPickerPlugin _serverErrorServiceResponseForRequestId:] */

void FUN_104ebcbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0278;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03efa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ebcc48; end: 104ebcca3; -[SCLensRemoteApiMemoriesPickerPlugin memoriesPickerDidCancel] */

void FUN_104ebcc48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b0278;
  _objc_alloc(PTR_PTR_1126b0278);
  func_0x00010c03efa0();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebcca4; end: 104ebcd37; -[SCLensRemoteApiMemoriesPickerPlugin memoriesPickerDidSaveMediaWithPayload:] */

void FUN_104ebcca4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (param_3 == 0) {
    func_0x00010bea1560(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR_PTR_1126b0278;
    _objc_alloc(PTR_PTR_1126b0278);
    func_0x00010c03efa0();
  }
  func_0x00010c0d9840(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ebcd38; end: 104ebcdbf; -[SCLensRemoteApiMemoriesPickerPlugin .cxx_destruct] */

void FUN_104ebcd38(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ebcdc0; end: 104ebce2b; -[SCLensMemoriesPickerActionHandler initWithDelegate:] */

undefined1 * FUN_104ebcdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4d00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ebce2c; end: 104ebcec7; -[SCLensMemoriesPickerActionHandler handleActionWithSender:media:] */

void FUN_104ebce2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee520();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebcec8; end: 104ebd047; -[SCLensMemoriesPickerActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_104ebcec8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1c58;
    _objc_opt_class(PTR_PTR_1126b1c58);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = uVar3 != 0;
    if (uVar3 != 0) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c038f40(puVar4);
      _objc_release(lVar6);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar3 = uVar2;
      func_0x00010c0840e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee500(param_1);
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 104ebd048; end: 104ebd05f; -[SCLensMemoriesPickerActionHandler containerViewController] */

void FUN_104ebd048(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ebd060; end: 104ebd06b; -[SCLensMemoriesPickerActionHandler setContainerViewController:] */

void FUN_104ebd060(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104ebd06c; end: 104ebd083; -[SCLensMemoriesPickerActionHandler workFlowDelegate] */

void FUN_104ebd06c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ebd084; end: 104ebd08f; -[SCLensMemoriesPickerActionHandler setWorkFlowDelegate:] */

void FUN_104ebd084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104ebd090; end: 104ebd0bf; -[SCLensMemoriesPickerActionHandler .cxx_destruct] */

void FUN_104ebd090(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ebd0c0; end: 104ebd1a7; -[SCLensMemoriesPickerRouteActionsImpl initWithUIContainer:memoriesPickerScopeExposer:memoriesPickerScopeServices:] */

undefined1 *
FUN_104ebd0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4d08;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ebd1a8; end: 104ebd2db; -[SCLensMemoriesPickerRouteActionsImpl presentLensMemoriesPickerWithScopeDelegate:actionHandler:lensMemoriesLogger:] */

void FUN_104ebd1a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b1c60;
    _objc_alloc(PTR_PTR_1126b1c60);
    puVar3 = puVar2;
    FUN_104ebfc64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052c80(puVar2,param_2,puVar3,0,0,1,1,1,0x101);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf23840(uVar4,param_2,param_3,0,0,param_4,*(undefined8 *)(param_1 + 8),puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar4);
    func_0x00010c094f60(param_5);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ebd2dc; end: 104ebd557; -[SCLensMemoriesPickerRouteActionsImpl persistSelectedMedia:contentDeliveryServices:lensPerformerProvider:lensMemoriesLogger:uiContainer:actionHandlerDelegate:] */

void FUN_104ebd2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010be7c400(param_1);
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_104ebd558;
  pcStack_90 = FUN_104ebd580;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104ebd588;
  puStack_c8 = &UNK_110857ce0;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_8);
  ppuVar1 = &puStack_e0;
  uStack_c0 = param_8;
  _objc_retainBlock();
  uVar2 = param_5;
  ppuStack_88 = ppuVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(ppuStack_88);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebd558; end: 104ebd57f;  */

void FUN_104ebd558(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 104ebd580; end: 104ebd587;  */

void FUN_104ebd580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ebd588; end: 104ebd643;  */

void FUN_104ebd588(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010be02c20(lVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104ebd644; end: 104ebd64f;  */

void FUN_104ebd644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSaveMediaWithPayload__1125bc270,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ebd650; end: 104ebda07;  */

void FUN_104ebd650(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    lVar7 = 0;
    (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x10))();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = puVar4;
    _dispatch_group_create();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(lVar2);
    lVar7 = lVar2;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar7 != 0) {
      lVar6 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          puStack_1b8 = &uStack_180;
          uStack_180 = 0;
          uStack_170 = 0x3032000000;
          pcStack_168 = FUN_104ebda08;
          uStack_160 = 0x104ebda18;
          uStack_158 = 0;
          uStack_1b0 = 0;
          uStack_1a0 = 0x3032000000;
          pcStack_198 = FUN_104ebda08;
          uStack_190 = 0x104ebda18;
          uStack_188 = 0;
          puStack_1d8 = puVar1;
          uStack_1d0 = 0xc2000000;
          pcStack_1c8 = FUN_104ebda20;
          puStack_1c0 = &UNK_110857d10;
          puStack_200 = puVar1;
          uStack_1f8 = 0xc2000000;
          uStack_1f0 = 0x104ebda58;
          puStack_1e8 = &UNK_110857d40;
          puStack_1e0 = &uStack_1b0;
          puStack_1a8 = &uStack_1b0;
          puStack_178 = puStack_1b8;
          func_0x00010c0be4e0(*(undefined8 *)(lStack_148 + lVar9 * 8));
          _dispatch_group_enter(puVar5);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be98d20(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puStack_230 = puVar1;
          uStack_228 = 0xc2000000;
          uStack_220 = 0x104ebda90;
          puStack_218 = &UNK_110857d70;
          _objc_retain(puVar4);
          puStack_210 = puVar4;
          _objc_retain(puVar5);
          puStack_208 = puVar5;
          func_0x00010c297260(uVar8);
          _objc_release(puStack_208);
          _objc_release(puStack_210);
          _objc_release(uVar8);
          __Block_object_dispose(&uStack_1b0,8);
          _objc_release(uStack_188);
          __Block_object_dispose(&uStack_180,8);
          _objc_release(uStack_158);
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        lVar7 = lVar2;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar2);
    lVar7 = *(long *)(param_1 + 0x38);
    puStack_278 = puVar1;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_104ebdac0;
    puStack_260 = &UNK_110857da0;
    _objc_copyWeak(auStack_238,param_1 + 0x50);
    _objc_retain(puVar3);
    puStack_258 = puVar3;
    _objc_retain(puVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    puStack_250 = puVar4;
    _objc_retain(uVar8);
    uStack_240 = *(undefined8 *)(param_1 + 0x48);
    uStack_248 = uVar8;
    func_0x00010bcbe628(puVar5,lVar7,&puStack_278);
    _objc_release(uStack_248);
    _objc_release(puStack_250);
    _objc_release(puStack_258);
    _objc_destroyWeak(auStack_238);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar6 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar2 + 0x40);
  __Unwind_Resume();
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 104ebda08; end: 104ebda1f;  */

void FUN_104ebda08(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104ebda20; end: 104ebdabf;  */

void FUN_104ebda20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ebdac0; end: 104ebdb4f;  */

void FUN_104ebdac0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be55de0(lVar1);
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    lVar2 = lVar1;
    func_0x00010bea1440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ebdb50; end: 104ebdb9f; -[SCLensMemoriesPickerRouteActionsImpl resetWithContentDeliveryServices:completion:] */

void FUN_104ebdb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bde0920(param_1,param_2,param_3);
  func_0x00010be02c20(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ebdba0; end: 104ebdc8f; -[SCLensMemoriesPickerRouteActionsImpl importSelectedAsset:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:] */

void FUN_104ebdba0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    func_0x00010be7c400(param_1,param_2,param_6);
    lVar1 = param_3;
    func_0x00010c0c6c20();
    if (lVar1 == 2) {
      func_0x00010be2ab80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else if (lVar1 == 1) {
      func_0x00010be2ab60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ebdc90; end: 104ebdd47; -[SCLensMemoriesPickerRouteActionsImpl _dismissLensMemoriesPickerWithCompletion:] */

void FUN_104ebdc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ebdd48;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebdd48; end: 104ebdddf;  */

void FUN_104ebdd48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      func_0x00010be02ca0(lVar1);
    }
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c12e1c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a4ae0();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ebdde0; end: 104ebe07f; -[SCLensMemoriesPickerRouteActionsImpl _saveContentWithDeliveryServices:image:video:] */

void FUN_104ebdde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined *)0x0 && param_5 == 0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    if (param_4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110db93f8;
    }
    else {
      puVar3 = param_4;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110db93d8;
    }
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf64e40(0x40d5180000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar7 = param_3;
    func_0x00010bf4c240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar1);
    func_0x00010c14a860(uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar9);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ebe080; end: 104ebe0c7;  */

void FUN_104ebe080(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebe0c8; end: 104ebe23f; -[SCLensMemoriesPickerRouteActionsImpl _handleSaveContentCompletionWithSuccess:type:contentKey:mediaId:promise:] */

void FUN_104ebe0c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 & 1) == 0) {
    func_0x00010bf43d60(param_7,param_2,0);
  }
  else {
    uVar1 = 0x13;
    func_0x00010b7f519c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_5);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110db9478;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110db9498;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_68 = param_4;
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_68,&ppuStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_7,param_2,puVar3);
    _objc_release(param_7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_7 = uVar1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104ebe240; end: 104ebe2a7; -[SCLensMemoriesPickerRouteActionsImpl _serializeMediaPayload:] */

void FUN_104ebe240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&lStack_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (lStack_28 == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ebe2a8; end: 104ebe32f; -[SCLensMemoriesPickerRouteActionsImpl _clearMemoriesFromStorageWithDeliveryServices:] */

void FUN_104ebe2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf4c240(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b940();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ebe330; end: 104ebe557; -[SCLensMemoriesPickerRouteActionsImpl _handleImportCameraRollImage:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:] */

void FUN_104ebe330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010bfe7f20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bdc1860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar3 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar4 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebe558; end: 104ebe6df;  */

void FUN_104ebe558(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_104ebe69c;
  if (param_2 == 0) {
    puVar6 = (undefined *)0x0;
LAB_104ebe68c:
    func_0x00010be7bde0(lVar1);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 != 0) || (puVar6 == (undefined *)0x0)) goto LAB_104ebe68c;
    puVar2 = PTR_PTR_1126b1c68;
    func_0x00010bfe94e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf774c0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
LAB_104ebe69c:
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104ebe6e0; end: 104ebe707;  */

void FUN_104ebe6e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ebe708; end: 104ebe953; -[SCLensMemoriesPickerRouteActionsImpl _handleImportCameraRollVideo:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:] */

void FUN_104ebe708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010c29a4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
  uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
  uVar1 = uVar2;
  func_0x00010bf9d3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(&uStack_90,param_1);
  uVar3 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,&uStack_90);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar4 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(&uStack_90);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ebe954; end: 104ebeaaf;  */

void FUN_104ebe954(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010be7bde0(lVar1);
    }
    else {
      puVar2 = PTR_PTR_1126b1c68;
      func_0x00010c29be00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf774c0(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104ebeab0; end: 104ebead7;  */

void FUN_104ebeab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ebead8; end: 104ebed6b; -[SCLensMemoriesPickerRouteActionsImpl _setupLoadingIndicatorViewController] */

void FUN_104ebead8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined *unaff_x20;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined **)(param_1 + 0x30);
  if (puVar8 == (undefined *)0x0) {
    unaff_x20 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    func_0x00010c219b60();
    puVar8 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar8;
    _objc_release(uVar7);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar7);
    _objc_release(puVar8);
    func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1c8c00(*(undefined8 *)(param_1 + 0x30));
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar7);
    puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = unaff_x20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_80 = puVar8;
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    puStack_78 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar6;
    func_0x00010beef8c0(puStack_88);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(puStack_80);
    func_0x00010c24dbc0(unaff_x20);
    puVar8 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar8);
    puVar2 = unaff_x20;
    _objc_release();
  }
  else {
    puVar2 = puVar8;
    _objc_retain();
    param_1 = unaff_x19;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104ebed6c;
  puStack_b0 = unaff_x20;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (*(long *)(puVar2 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)(puVar2 + 0x28);
    *(undefined **)(puVar2 + 0x28) = param_3;
    _objc_release(uVar7);
    _objc_initWeak(auStack_b8,puVar2);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_104ebee44;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x0001000d76cc("APPSTORE",&puStack_e0);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ebed6c; end: 104ebee43; -[SCLensMemoriesPickerRouteActionsImpl _presentLoadingIndicatorViewControllerWithUiContainer:] */

void FUN_104ebed6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104ebee44;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ebee44; end: 104ebeea3;  */

void FUN_104ebee44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_1;
    func_0x00010beadd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebeea4; end: 104ebeedf; -[SCLensMemoriesPickerRouteActionsImpl _dismissLoadingIndicatorViewController] */

void FUN_104ebeea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x28),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ebeee0; end: 104ebef87; -[SCLensMemoriesPickerRouteActionsImpl _presentImportErrorThenCleanUp] */

void FUN_104ebeee0(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ebef88;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ebef88; end: 104ebefb3;  */

void FUN_104ebef88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebefb4; end: 104ebf17b; -[SCLensMemoriesPickerRouteActionsImpl _presentImportErrorDialog] */

void FUN_104ebefb4(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x00010b75e3bc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60,puVar6);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000104ebfc7c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  puVar1 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar6);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bddefc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ebf17c; end: 104ebf1bb;  */

void FUN_104ebf17c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddefc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ebf1bc; end: 104ebf1bf; -[SCLensMemoriesPickerRouteActionsImpl _cleanUp] */

void FUN_104ebf1bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissLoadingIndicatorViewCont_11255e4c8);
  return;
}



/* Entry: 104ebf1c0; end: 104ebf35f; -[SCLensMemoriesPickerRouteActionsImpl _logMemoriesSelectedEventFromMedia:logger:] */

void FUN_104ebf1c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar7 = *(long *)(lVar6 * 8);
      lVar4 = lVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0 && lVar4 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c094f40(param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 104ebf360; end: 104ebf3bf; -[SCLensMemoriesPickerRouteActionsImpl .cxx_destruct] */

void FUN_104ebf360(long param_1)

{
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



/* Entry: 104ebf3c0; end: 104ebf50b; -[SCLensMemoriesPickerWorkflow initWithRouter:contentDeliveryServices:lensPerformerProvider:videoImportServices:lensMemoriesLogger:delegate:] */

undefined1 *
FUN_104ebf3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e4d10;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ebf50c; end: 104ebf5f3; -[SCLensMemoriesPickerWorkflow beginWorkflow] */

void FUN_104ebf50c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126b1c70;
  _objc_alloc();
  func_0x00010c00a2c0();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}


