/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10587bb60; end: 10587bbd3; -[SCGrapheneMemoriesSnapDocBackupMetric2 init] */

undefined1 * FUN_10587bb60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eaaa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10587bbd4; end: 10587bc4b;  */

void FUN_10587bbd4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108b9a08,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10587bc4c; end: 10587bcc3;  */

void FUN_10587bc4c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108b9a58,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10587bcc4; end: 10587bd3b;  */

void FUN_10587bcc4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108b9aa8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10587bd3c; end: 10587bdb3;  */

void FUN_10587bd3c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108b9af8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10587bdb4; end: 10587bf27;  */

char * FUN_10587bdb4(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108b9b48,&uStack_80,param_3);
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
  pcStack_88 = FUN_10587bf28;
  puStack_a8 = PTR_PTR_1126eaaa8;
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



/* Entry: 10587bf28; end: 10587bf9b; -[SCGrapheneSnapDocRenderStepMetric2 init] */

undefined1 * FUN_10587bf28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eaaa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10587bf9c; end: 10587c10f;  */

char * FUN_10587bf9c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *pcStack_270;
  undefined *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
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
    plVar12 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b9ba8,acStack_80,param_3);
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
  pcVar10 = acStack_100;
  pcStack_88 = FUN_10587c110;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar9 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  iVar5 = (int)pcVar7;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
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
    iVar5 = 0x108b9bf8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b9bf8,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar9 = pcVar10;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar9 = pcVar10;
      param_4 = pcVar3;
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
  pcStack_108 = FUN_10587c284;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar2 = param_4;
  ppuStack_110 = &puStack_90;
  iVar6 = iVar5;
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_178,pcVar1);
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
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    puVar8 = &UNK_1108b9c48;
    pcVar1 = acStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b9c48,pcVar1,param_4);
    pcStack_180 = acStack_198;
    func_0x00010007e5dc(&pcStack_180);
    lVar11 = 0;
    pcVar2 = param_4;
    do {
      if ((&cStack_149)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar11));
      }
      iVar6 = (int)puVar8;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  pcVar3 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcStack_1a8 = FUN_10587c470;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    pcVar3 = "true";
    if (iVar6 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_218,pcVar3);
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
    func_0x00010002b838(auStack_200,pcVar3);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b9c98,&uStack_238,pcVar2);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar11 = 0;
    do {
      if ((&cStack_1e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar1);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  ppcVar4 = &pcStack_270;
  pcStack_248 = FUN_10587c65c;
  puStack_268 = PTR_PTR_1126eaab0;
  pcStack_270 = pcVar2;
  pcStack_260 = pcVar3;
  pcStack_258 = pcVar1;
  pppuStack_250 = &pppuStack_1b0;
  _objc_msgSendSuper2(&pcStack_270,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 10587c110; end: 10587c283;  */

char * FUN_10587c110(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
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
  
  pcVar7 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar2 = param_3;
  _objc_retain(param_2);
  iVar4 = (int)pcVar1;
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
    iVar4 = 0x108b9bf8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b9bf8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar2 = pcVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar2 = pcVar7;
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
  pcStack_88 = FUN_10587c284;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  iVar5 = iVar4;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar10 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if (iVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_f8,pcVar1);
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
    func_0x00010002b838(auStack_e0,pcVar1);
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
    puVar6 = &UNK_1108b9c48;
    pcVar7 = acStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b9c48,pcVar7,param_4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar9 = 0;
    pcVar8 = param_4;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      iVar5 = (int)puVar6;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_128 = FUN_10587c470;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar7);
  if (pcVar1 != (char *)0x0) {
    plVar10 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_198,pcVar1);
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
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108b9c98,&uStack_1b8,pcVar8);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar9 = 0;
    do {
      if ((&cStack_169)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1f0;
  pcStack_1c8 = FUN_10587c65c;
  puStack_1e8 = PTR_PTR_1126eaab0;
  pcStack_1f0 = pcVar2;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_msgSendSuper2(&pcStack_1f0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 10587c284; end: 10587c46f;  */

char * FUN_10587c284(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
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
  uVar7 = param_4;
  iVar5 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
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
    puVar6 = &UNK_1108b9c48;
    pcVar1 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108b9c48,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      iVar5 = (int)puVar6;
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
  pcStack_a8 = FUN_10587c470;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if (iVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108b9c98,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_170;
  pcStack_148 = FUN_10587c65c;
  puStack_168 = PTR_PTR_1126eaab0;
  pcStack_170 = pcVar3;
  pcStack_160 = pcVar2;
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



/* Entry: 10587c470; end: 10587c65b;  */

char * FUN_10587c470(long param_1,int param_2,char *param_3,undefined8 param_4)

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
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108b9c98,&uStack_98,param_4);
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
  pcStack_a8 = FUN_10587c65c;
  puStack_c8 = PTR_PTR_1126eaab0;
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



/* Entry: 10587c65c; end: 10587c6cf; -[SCGrapheneMemDoubleEncryptionMetric2 init] */

undefined1 * FUN_10587c65c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eaab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10587c6d0; end: 10587c8ff;  */

void FUN_10587c6d0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108b9d48,&uStack_98,param_4);
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
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained();
  if (pcVar1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1;
    func_0x00010bdefda0(pcVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 10587c900; end: 10587c94f;  */

void FUN_10587c900(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdefda0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10587c950; end: 10587cf8b; -[SCMemoriesCRCollageFeaturedStoryManagerServiceProvider _createMashupStyleCRCollageStoriesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10587c950(long param_1,undefined8 param_2)

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
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  
  puVar1 = PTR_PTR_1126bf7d8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11272b06c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar29;
  func_0x00010c0c8ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11272b08c;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar30;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_10587cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_10587cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11272b090;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar31;
  func_0x00010c0c9b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11272b080;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar32;
  func_0x00010c0c8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11272b070;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar33;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11272b074;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar34;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_11272b078;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar35;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_11272b07c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar36;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11272b088;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar37;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010587cfb0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bfe7f20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_11272b098;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar38;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_11272b09c;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar39;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010587cfb0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11272b0a0;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar40;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11272b0a4;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar41;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_11272b0a8;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar42;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11272b0ac;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar43;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar44 = 0;
  }
  else {
    lVar44 = param_1 + _DAT_11272b0b0;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar44;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11272b0b4;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar45;
  func_0x00010c0c7f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_11272b0b8;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar46;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = 0;
  if (param_1 != 0) {
    lVar27 = param_1 + _DAT_11272b0bc;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar27;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005b80(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                      ,lVar14,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,
                      lVar26,lVar28);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar46);
  _objc_release(lVar25);
  _objc_release(lVar45);
  _objc_release(lVar24);
  _objc_release(lVar44);
  _objc_release(lVar23);
  _objc_release(lVar43);
  _objc_release(lVar22);
  _objc_release(lVar42);
  _objc_release(lVar21);
  _objc_release(lVar41);
  _objc_release(lVar20);
  _objc_release(lVar40);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar39);
  _objc_release(lVar17);
  _objc_release(lVar38);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar37);
  _objc_release(lVar13);
  _objc_release(lVar36);
  _objc_release(lVar12);
  _objc_release(lVar35);
  _objc_release(lVar11);
  _objc_release(lVar34);
  _objc_release(lVar10);
  _objc_release(lVar33);
  _objc_release(lVar9);
  _objc_release(lVar32);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar30);
  _objc_release(lVar2);
  _objc_release(lVar29);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587cf8c; end: 10587cfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10587cf8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b084);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10587cfd4; end: 10587d0fb; -[SCMemoriesCRCollageFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10587cfd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b0bc);
  _objc_destroyWeak(param_1 + _DAT_11272b0b8);
  _objc_destroyWeak(param_1 + _DAT_11272b0b4);
  _objc_destroyWeak(param_1 + _DAT_11272b0b0);
  _objc_destroyWeak(param_1 + _DAT_11272b0ac);
  _objc_destroyWeak(param_1 + _DAT_11272b0a8);
  _objc_destroyWeak(param_1 + _DAT_11272b0a4);
  _objc_destroyWeak(param_1 + _DAT_11272b0a0);
  _objc_destroyWeak(param_1 + _DAT_11272b09c);
  _objc_destroyWeak(param_1 + _DAT_11272b098);
  _objc_destroyWeak(param_1 + _DAT_11272b094);
  _objc_destroyWeak(param_1 + _DAT_11272b090);
  _objc_destroyWeak(param_1 + _DAT_11272b08c);
  _objc_destroyWeak(param_1 + _DAT_11272b088);
  _objc_destroyWeak(param_1 + _DAT_11272b084);
  _objc_destroyWeak(param_1 + _DAT_11272b080);
  _objc_destroyWeak(param_1 + _DAT_11272b07c);
  _objc_destroyWeak(param_1 + _DAT_11272b078);
  _objc_destroyWeak(param_1 + _DAT_11272b074);
  _objc_destroyWeak(param_1 + _DAT_11272b070);
  _objc_destroyWeak(param_1 + _DAT_11272b06c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b068);
  return;
}



/* Entry: 10587d0fc; end: 10587d697; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager initWithCoordinator:circumstanceEngine:dataObjectContext:memoriesProfile:snapRenderer:memoriesMashupSnapDocFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:snapDocEditorFactory:memoriesFeaturedStoryDataMutator:imageImporter:mergedDataSource:memoriesUserDefaultsManager:mediaVideoImportServices:memoriesCloudFS:grapheneRegistry:notificationPool:temporaryFileWriter:docObjectContext:memoriesCRFeaturedStoryNetworkCoordinator:userBlizzard:applicationLifecycleEvents:] */

undefined8 *
FUN_10587d0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

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
  puStack_70 = PTR_PTR_1126eaab8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    puVar1[0x1f] = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    func_0x00010bdff1c0(puVar1);
    func_0x00010bdcd7c0(puVar1);
  }
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



/* Entry: 10587d698; end: 10587d6bf; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager snapRendererProgressObservable] */

void FUN_10587d698(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10587d6c0; end: 10587d7d7; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _observeSnapRendererProgress] */

void FUN_10587d6c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    func_0x00010c1178e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10587d7d8; end: 10587d827;  */

void FUN_10587d7d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587d828; end: 10587d963; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager generateMashupStyleFeaturedStoriesForCRFeaturedStories:context:] */

void FUN_10587d828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(uVar1);
  uStack_50 = param_4;
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10587d964; end: 10587d98b;  */

bool FUN_10587d964(undefined8 param_1,long param_2)

{
  func_0x00010c0c7f80();
  return param_2 == 10 || param_2 - 7U < 2;
}



/* Entry: 10587d98c; end: 10587da13;  */

void FUN_10587d98c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    func_0x00010be1b540(param_1);
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10587da14; end: 10587dbe3; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager generateMashupStyleFeaturedStoriesForPhAssets:mashupModel:title:subtitle:featuredStoryType:entrySource:videoCreateSessionId:] */

void FUN_10587da14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_70 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_9);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10587dbe4; end: 10587df27;  */

void FUN_10587dbe4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    puVar3 = PTR_PTR_1126bf7e0;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a480(0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar4 = PTR_PTR_1126bf7e8;
    _objc_opt_new(PTR_PTR_1126bf7e8);
    puVar5 = PTR_PTR_1126bf7f0;
    _objc_opt_new(PTR_PTR_1126bf7f0);
    if (*(long *)(param_1 + 0x38) == 0) {
      puVar6 = PTR_PTR_1126bf7f8;
      _objc_opt_new(PTR_PTR_1126bf7f8);
      puVar7 = puVar6;
      func_0x00010b6fb240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar6);
      _objc_release(puVar7);
      func_0x00010c176d60(puVar5);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c176d60(puVar5);
    }
    func_0x00010c1fd420(puVar4);
    puVar7 = PTR_PTR_1126bf800;
    func_0x00010bf2a820(PTR_PTR_1126bf800);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bf808;
    _objc_alloc(PTR_PTR_1126bf808);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf977c0();
    func_0x00010c028a60(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined **)(lVar1 + 0xd0) = puVar6;
    _objc_release(uVar2);
    func_0x00010bef7840(*(undefined8 *)(lVar1 + 8));
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10587df28; end: 10587e033; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:] */

void FUN_10587df28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10587e034;
  puStack_70 = &UNK_1108475b0;
  lStack_68 = param_1;
  uStack_60 = param_6;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 10587e034; end: 10587e2cf;  */

void FUN_10587e034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_PTR_1126af5d0;
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0xf8);
  if (lVar8 < 2) {
    if (lVar8 == 0) {
      puStack_98 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_10587e2d0;
      uStack_70 = 0x10587e2e0;
      uStack_68 = 0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10587e2ec;
      puStack_a0 = &UNK_1108b9e98;
      puStack_88 = puStack_98;
      func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x30),param_2,
                          &PTR___NSConcreteGlobalBlock_1108b9e78,&puStack_b8);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = puStack_88[5];
      func_0x00010c0fa980(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_1 + 0x38);
      func_0x00010bf3f9a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar8;
      if (lVar8 == 0) {
        lStack_c8 = *(long *)(param_1 + 0x40);
        func_0x00010c15f260();
        _objc_retainAutoreleasedReturnValue();
        lStack_d0 = lStack_c8;
        func_0x00010bf2a780();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_d0;
        func_0x00010c094540(lStack_d0);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c15f260(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf2a780();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf3f980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1ad00(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (lVar8 == 0) {
        _objc_release(lVar2);
        _objc_release(lStack_d0);
        _objc_release(lStack_c8);
      }
      _objc_release(lVar8);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
      return;
    }
    if (lVar8 == 1) {
      lVar8 = *(long *)(param_1 + 0x28);
      goto LAB_10587e298;
    }
  }
  else {
    if (lVar8 == 3) {
      lVar8 = *(long *)(param_1 + 0x28);
      goto LAB_10587e298;
    }
    if (lVar8 == 2) {
      lVar8 = *(long *)(param_1 + 0x28);
      goto LAB_10587e298;
    }
  }
  lVar8 = *(long *)(param_1 + 0x28);
LAB_10587e298:
  if (lVar8 != 0) {
    _objc_retain();
    func_0x00010bf99260(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bf436e0(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 10587e2d0; end: 10587e2eb;  */

void FUN_10587e2d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10587e2ec; end: 10587e323;  */

void FUN_10587e2ec(long param_1,undefined8 param_2)

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



/* Entry: 10587e324; end: 10587e483; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:] */

void FUN_10587e324(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c113c80();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 200);
    _objc_retain(puVar3);
  }
  lVar1 = param_3;
  func_0x00010bf3d240();
  if (lVar1 == 0x10000) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09438;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3d240();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e09418;
    if (lVar1 != 0x20000) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e093f8;
    }
  }
  func_0x000107e67df8(param_3,param_4,param_5,param_7,param_6,param_8,puVar3,
                      &PTR____CFConstantStringClassReference_110e093d8,
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0x90),ppuVar2,*(undefined8 *)(param_1 + 0xa0),0);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10587e484; end: 10587e913; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _generateMashupForFeaturedStories:completionObserver:context:] */

void FUN_10587e484(long param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  undefined **param_5,undefined8 param_6,undefined **param_7,undefined **param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar9;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **unaff_x28;
  undefined1 auStack_2b0 [8];
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_4;
  ppuStack_148 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    ppuVar10 = (undefined **)0x0;
    func_0x000107e67794();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_140 = param_4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar1;
    _objc_release(uVar7);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    ppuVar10 = &puStack_130;
    ppuVar3 = apuStack_f0;
    param_5 = (undefined **)0x10;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      unaff_x22 = puVar1;
      lStack_158 = lVar8;
      do {
        unaff_x23 = (undefined *)0x0;
        puStack_150 = unaff_x22;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar9 = *(undefined ***)(lStack_128 + (long)unaff_x23 * 8);
          lVar2 = param_1;
          func_0x00010beb43c0();
          unaff_x25 = ppuVar9;
          if ((int)lVar2 == 0) goto LAB_10587e88c;
          unaff_x26 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = *(undefined ***)(param_1 + 0x10);
          unaff_x28 = *(undefined ***)(param_1 + 0x70);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = *(undefined ***)(param_1 + 0xa0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = ppuVar9;
          ppuVar3 = unaff_x28;
          param_5 = unaff_x24;
          func_0x000107e69740(ppuVar9,unaff_x26);
          _objc_release(unaff_x24);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
          if ((int)unaff_x27 != 0) {
            ppuVar3 = ppuVar9;
            func_0x00010c0c7f80(ppuVar9);
            ppuVar10 = ppuVar9;
            func_0x00010c0fa980();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar10;
            func_0x00010bf529e0();
            uVar7 = *(undefined8 *)(param_1 + 0x10);
            ppuVar4 = ppuVar9;
            func_0x00010c0c7f80(ppuVar9);
            func_0x000107e68f00(ppuVar5,uVar7,ppuVar4 == (undefined **)0x8,
                                ppuVar3 == (undefined **)0xa);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_138 = ppuVar5;
            _objc_release(ppuVar10);
            unaff_x27 = (undefined **)PTR_PTR_1126bf800;
            func_0x00010bf2a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = (undefined **)PTR_PTR_1126bf808;
            _objc_alloc();
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar9;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar9;
            func_0x00010bf977c0();
            uStack_180 = *(undefined8 *)(param_1 + 0x90);
            uStack_178 = *(undefined8 *)(param_1 + 0x10);
            uStack_170 = 2;
            uStack_168 = 0;
            uStack_190 = 1;
            uStack_188 = 1;
            uStack_1a0 = 1;
            uStack_198 = 0;
            uStack_1b0 = 8;
            uStack_1a8 = 0;
            uStack_1b8 = 1;
            ppuStack_1d0 = ppuStack_140;
            param_6 = 0;
            param_7 = unaff_x27;
            param_8 = ppuStack_148;
            ppuStack_1c8 = ppuVar3;
            ppuStack_1c0 = ppuVar10;
            func_0x00010c028a60();
            _objc_release(ppuVar3);
            _objc_release(uVar7);
            uVar7 = *(undefined8 *)(param_1 + 200);
            puVar1 = PTR_PTR_1126b60f8;
            func_0x00010c0f2b40(PTR_PTR_1126b60f8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar7);
            _objc_release(puVar1);
            uVar7 = *(undefined8 *)(param_1 + 8);
            func_0x00010c25e900(param_1);
            func_0x00010bef7840(uVar7);
            ppuVar3 = ppuVar9;
            func_0x00010c0fa980();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar3;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = ppuVar10;
            func_0x00010bf5a700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar10);
            _objc_release(ppuVar3);
            func_0x00010bf977c0(ppuVar9);
            puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = *(undefined ***)(param_1 + 0x70);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = *(undefined ***)(param_1 + 0xa0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lStack_158;
            ppuVar10 = unaff_x24;
            ppuVar3 = unaff_x25;
            param_5 = ppuVar5;
            func_0x000107e695a0(ppuVar9,puVar1);
            _objc_release(ppuVar5);
            _objc_release(unaff_x25);
            unaff_x22 = puStack_150;
            _objc_release(puVar1);
            _objc_release(unaff_x24);
            _objc_release(unaff_x28);
            _objc_release(unaff_x27);
            _objc_release(ppuStack_138);
            unaff_x26 = param_3;
          }
          unaff_x23 = unaff_x23 + 1;
        } while (unaff_x22 != unaff_x23);
        ppuVar10 = &puStack_130;
        ppuVar3 = apuStack_f0;
        param_5 = (undefined **)0x10;
        unaff_x22 = param_3;
        func_0x00010bf52a60();
      } while (unaff_x22 != (undefined *)0x0);
    }
LAB_10587e88c:
    _objc_release(param_3);
    lVar8 = *(long *)(param_1 + 200);
    func_0x00010bf529e0();
    param_4 = ppuStack_140;
    if (lVar8 == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e093d8;
      func_0x000107e66360(ppuStack_140,0x1b);
    }
  }
  _objc_release(param_4);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar9 = ppuStack_1d0;
  pcStack_1d8 = FUN_10587e914;
  ppuStack_230 = unaff_x28;
  ppuStack_228 = unaff_x27;
  puStack_220 = unaff_x26;
  ppuStack_218 = unaff_x25;
  ppuStack_210 = unaff_x24;
  puStack_208 = unaff_x23;
  puStack_200 = unaff_x22;
  lStack_1f8 = param_1;
  ppuStack_1f0 = param_4;
  puStack_1e8 = param_3;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(ppuVar9);
  ppuVar5 = param_7;
  func_0x00010c0b4ca0();
  func_0x000108ec1614(&uStack_268,*(undefined8 *)(puVar1 + 0x10));
  uVar7 = *(undefined8 *)(puVar1 + 0x10);
  func_0x000108ec16a4(uVar7);
  uVar11 = *(undefined8 *)(puVar1 + 0x78);
  uVar6 = *(undefined8 *)(puVar1 + 0x98);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uStack_260;
  uStack_2a0 = uStack_268;
  uStack_288 = uStack_250;
  uStack_290 = uStack_258;
  uStack_278 = uStack_240;
  uStack_280 = uStack_248;
  ppuVar4 = ppuVar10;
  func_0x000107e6ac9c(ppuVar10,uVar11,&uStack_2a0,1,uVar7,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(&uStack_2a0,puVar1);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_2b0,&uStack_2a0);
  _objc_retain(ppuVar9);
  ppuStack_2a8 = ppuVar5;
  _objc_retain(param_8);
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c297260(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar10);
  _objc_release(param_8);
  _objc_release(ppuVar9);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(&uStack_2a0);
  _objc_release(ppuVar4);
  _objc_release(ppuVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 10587e914; end: 10587eb9f; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _generateCollageWithPHAssets:crFeaturedStory:memoriesMashupModel:memoriesServerGeneratedSnapModel:collageUCOLensID:collageCreativeTools:observer:] */

void FUN_10587e914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_7;
  func_0x00010c0b4ca0();
  func_0x000108ec1614(&uStack_98,*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108ec16a4(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_90;
  uStack_d0 = uStack_98;
  uStack_b8 = uStack_80;
  uStack_c0 = uStack_88;
  uStack_a8 = uStack_70;
  uStack_b0 = uStack_78;
  uVar4 = param_3;
  func_0x000107e6ac9c(param_3,uVar6,&uStack_d0,1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(&uStack_d0,param_1);
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,&uStack_d0);
  _objc_retain(param_9);
  uStack_d8 = uVar1;
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(&uStack_d0);
  _objc_release(uVar4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10587eba0; end: 10587ed83;  */

void FUN_10587eba0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),7,
                          &PTR____CFConstantStringClassReference_110e093d8);
    }
    else {
      _objc_initWeak(auStack_48,lVar1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10587ed84;
      puStack_90 = &UNK_1108b9f28;
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uStack_88 = uVar4;
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uStack_80 = uVar5;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uStack_78 = uVar4;
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      uStack_70 = uVar5;
      _objc_retain(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      uStack_68 = uVar6;
      _objc_retain(uVar4);
      ppuVar3 = &puStack_a8;
      uStack_60 = uVar4;
      _objc_retainBlock(ppuVar3);
      uVar4 = *(undefined8 *)(lVar1 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca600();
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_release(uStack_60);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10587ed84; end: 10587ef4f;  */

void FUN_10587ed84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfbf2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_50,param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar9);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    func_0x00010c297260(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10587ef50; end: 10587f2cb;  */

void FUN_10587ef50(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10587efd8;
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = 0x2d;
  }
  else {
    lVar8 = *(long *)(lVar1 + 0xf8);
    if (lVar8 < 2) {
      if (lVar8 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bfb1920(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010bf5a700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar3 = PTR_PTR_1126bcf30;
        _objc_opt_new();
        func_0x00010c26f320(uVar2);
        func_0x00010c203d40(puVar3);
        func_0x00010c216040(param_2);
        puVar4 = PTR_PTR_1126b25e8;
        _objc_opt_new(PTR_PTR_1126b25e8);
        lVar8 = param_2;
        func_0x00010c0fee00(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        func_0x00010c0fef80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ac2a0();
        _objc_release(lVar5);
        _objc_release(lVar8);
        _objc_release(puVar4);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0d2940(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd9580();
        _objc_release(uVar7);
        uVar7 = *(undefined8 *)(lVar1 + 0x60);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a080();
        _objc_release(uVar7);
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c12f6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_retain(uVar7);
        uVar6 = *(undefined8 *)(lVar1 + 0xd8);
        *(undefined8 *)(lVar1 + 0xd8) = uVar7;
        _objc_release(uVar6);
        func_0x00010be66da0(lVar1);
        uVar6 = uVar7;
        func_0x00010c13cb40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar10);
        _objc_retain(puVar3);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar11);
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar12);
        uVar13 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar13);
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar9);
        _objc_retain(uVar7);
        func_0x00010c297260(uVar6);
        _objc_release(uVar9);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(puVar3);
        _objc_release(uVar10);
        _objc_release(uVar7);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(puVar3);
        _objc_release(uVar2);
        goto LAB_10587efd8;
      }
      if (lVar8 == 1) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = 0xc;
      }
      else {
LAB_10587f028:
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = 0;
      }
    }
    else if (lVar8 == 3) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 0x25;
    }
    else {
      if (lVar8 != 2) goto LAB_10587f028;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 0x23;
    }
  }
  func_0x000107e66360(uVar2,uVar7,&PTR____CFConstantStringClassReference_110e093d8);
LAB_10587efd8:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10587f2cc; end: 10587f48f;  */

void FUN_10587f2cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xd8) == *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8) = 0;
    _objc_release();
    lVar1 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216040();
    if ((param_3 == 0) && (lVar1 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf9c720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c7f80();
      func_0x00010c113c80();
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be73280(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      func_0x000107e664b4(*(undefined8 *)(param_1 + 0x30),param_3,
                          &PTR____CFConstantStringClassReference_110e093d8);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x30),0xe,
                        &PTR____CFConstantStringClassReference_110e093d8);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587f490; end: 10587fa67; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _persistInLocalDB:title:subtitle:expirationDate:entryId:entrySource:phAssets:priority:collageUCOLensId:crFeaturedStory:snapId:observer:] */

void FUN_10587f490(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined *param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_200;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  func_0x00010c0c7f80();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf90fc0();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    puStack_200 = param_9;
    func_0x000107fe998c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    _objc_retain(param_9);
    puVar2 = param_9;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar10 = *plStack_170;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_170 != lVar10) {
            _objc_enumerationMutation(param_9);
          }
          uVar9 = *(undefined8 *)(lStack_178 + (long)puVar8 * 8);
          func_0x00010c09da80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar9);
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = param_9;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_9);
    puVar2 = PTR_PTR_1126bf820;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046fa0();
    _objc_release(puVar8);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c14ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_188,param_1);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10587fc68;
    puStack_1c0 = &UNK_1108b9fe8;
    ppuVar11 = &puStack_1d8;
    param_2 = auStack_188;
    _objc_copyWeak(auStack_198,param_2);
    _objc_retain(param_15);
    puStack_1b8 = param_15;
    _objc_retain(param_3);
    lStack_1b0 = param_3;
    uStack_190 = param_8;
    _objc_retain(param_12);
    uStack_1a8 = param_12;
    _objc_retain(param_13);
    uStack_1a0 = param_13;
    uVar1 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = *(undefined ***)(param_1 + 0xc0);
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(lStack_1b0);
    _objc_release(puStack_1b8);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_188);
    _objc_release(uVar9);
  }
  else {
    puStack_200 = PTR_PTR_1126bf810;
    _objc_alloc();
    func_0x00010c0066e0();
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_10587fa68;
    puStack_128 = &UNK_1108b9f88;
    _objc_retain(param_15);
    puStack_120 = param_15;
    lStack_118 = param_1;
    _objc_retain(param_3);
    lStack_110 = param_3;
    uStack_f8 = param_8;
    _objc_retain(param_12);
    uStack_108 = param_12;
    _objc_retain(param_13);
    uStack_100 = param_13;
    ppuVar7 = &puStack_140;
    func_0x00010c297260(puVar3);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(lStack_110);
    puVar2 = puStack_120;
    ppuVar11 = param_5;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_200);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 8);
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126af4c0;
  if (ppuVar7 == (undefined **)0x0) {
    puVar4 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar4);
    puVar2 = PTR_PTR_1126af4d0;
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar8 = PTR_PTR_1126bf818;
    _objc_alloc(PTR_PTR_1126bf818);
    puVar4 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0172c0(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar6);
    func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010be05680(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587fa68; end: 10587fc67;  */

void FUN_10587fa68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af4c0;
  if (param_3 == 0) {
    uVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126af4d0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126bf818;
    _objc_alloc(PTR_PTR_1126bf818);
    uVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0172c0(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar5);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be05680(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587fc68; end: 10587fde3;  */

void FUN_10587fc68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587fde4; end: 10587fec7;  */

void FUN_10587fde4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be05680(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10587fec8; end: 10588010f; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _doOnSaveWithSaveCompleteData:snapDoc:entrySource:collageUCOLensId:crFeaturedStory:] */

void FUN_10587fec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b80();
  _objc_release(uVar16);
  uVar16 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfbcca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf977c0();
  lVar3 = (long)(int)uVar2;
  func_0x00010b5fb06c(lVar3);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = param_7;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar2 = param_3;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf977c0();
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = uVar11;
  func_0x00010bfa3220();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e69c2c(uVar4,uVar15,uVar13,uVar5,uVar14,uVar16,lVar3,uVar1,0,param_6,uVar7,
                      (long)(int)uVar9,puVar10,uVar12);
  _objc_release(param_6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar16);
  return;
}



/* Entry: 105880110; end: 105880117; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager terminateFeaturedStoriesGenerationIfNeeded] */

void FUN_105880110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateFeaturedStoriesGenerat_112590638,1)
  ;
  return;
}



/* Entry: 105880118; end: 10588013f; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _shouldKeepAddingCommand] */

void FUN_105880118(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_shouldAddCommandForCurrentType__1126690e0,param_1);
  return;
}



/* Entry: 105880140; end: 105880147; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager subType] */

undefined8 FUN_105880140(void)

{
  return 3;
}



/* Entry: 105880148; end: 105880243; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _didReceiveApplicationLifecycleEvents:] */

void FUN_105880148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105880244; end: 10588026f;  */

void FUN_105880244(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105880270; end: 105880377; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _applicationDidEnterBackgroudWithApplicationLifecycleEvents:] */

void FUN_105880270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105880378; end: 1058803af;  */

void FUN_105880378(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becb240(param_1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058803b0; end: 105880457; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _didReceiveMemoryWarning] */

void FUN_1058803b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105880458; end: 105880483;  */

void FUN_105880458(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105880484; end: 10588048b; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _respondToMemoryWarning] */

void FUN_105880484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateFeaturedStoriesGenerat_112590638,2)
  ;
  return;
}



/* Entry: 10588048c; end: 1058804e3; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager _terminateFeaturedStoriesGenerationIfNeededWithReason:] */

void FUN_10588048c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1058804e4;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_40);
  return;
}



/* Entry: 1058804e4; end: 1058805af;  */

void FUN_1058804e4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar4 + 0xd0);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x28) == 2)) {
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c282760();
    if ((int)lVar4 != 0) goto LAB_10588059c;
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x000108ec1a6c();
    _objc_release(lVar2);
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar4 + 0xf8) = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xd8);
  if ((uVar3 == 0) || (func_0x00010c06e0e0(), (uVar3 & 1) != 0)) {
    return;
  }
  func_0x00010bf2dba0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1392c0();
LAB_10588059c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1058805b0; end: 10588072f; -[SCMemoriesMashupStyleFeaturedStoryCRCollageManager .cxx_destruct] */

void FUN_1058805b0(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 105880730; end: 105880937; -[SCMemoriesCRFeaturedStoryDataSource initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:screenshopPersistenceService:applicationLifecycleEvents:circumstanceEngine:fetchLimit:] */

undefined1 *
FUN_105880730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126eaac0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105880938; end: 105880afb; -[SCMemoriesCRFeaturedStoryDataSource observeCameraRollFromPhotoLibrary:referenceDate:] */

void FUN_105880938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105880afc;
  puStack_88 = &UNK_110867bf8;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d5a0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_68);
  uStack_a8 = param_3;
  _objc_retain(param_4);
  puVar3 = puVar2;
  func_0x00010bfb2660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105880afc; end: 105880bb7;  */

void FUN_105880afc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000105881bf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar2);
    func_0x00010bf436e0(param_2);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bded380(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105880bb8; end: 105880d57;  */

void FUN_105880bb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    lVar2 = lVar1;
    func_0x000105881bf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_105880d58;
    uStack_60 = 0x105880d68;
    lStack_58 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010c0c0800(param_2);
    puVar4 = (undefined *)puStack_78[5];
    _objc_retain(puVar4);
    _objc_release(param_2);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_80,8);
    lVar2 = lStack_58;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105880d58; end: 105880d6f;  */

void FUN_105880d58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105880d70; end: 105880e53;  */

void FUN_105880d70(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdf0a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar5 = *(undefined **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105880e54; end: 105880e9b;  */

void FUN_105880e54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105880e9c; end: 1058810db; -[SCMemoriesCRFeaturedStoryDataSource _createDisposableObserverForFetchingAllCameraRoll:referenceDate:observer:] */

void FUN_105880e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be63300();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b6b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4b40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  _objc_initWeak(auStack_80,param_5);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bfab780(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058810dc; end: 1058811cb;  */

void FUN_1058810dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af5d0;
  if ((lVar1 == 0) || (param_1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(param_1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058811cc; end: 105881227;  */

void FUN_1058811cc(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105881228;
  puStack_28 = &UNK_110841f80;
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 105881228; end: 105881233;  */

void FUN_105881228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObject__112628ef8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105881234; end: 10588130b; -[SCMemoriesCRFeaturedStoryDataSource _createObservableForProcessingAllFetchResult:memoriesCRFeaturedStoryType:referenceDate:] */

void FUN_105881234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10588130c;
  puStack_68 = &UNK_1108ba078;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10588130c; end: 1058813af;  */

void FUN_10588130c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x38);
  if (uVar2 < 0xd) {
    if ((1L << (uVar2 & 0x3f) & 0x17ebU) == 0) {
      if (uVar2 == 2) {
        func_0x00010be17b60(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      func_0x00010be0fba0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058813b0; end: 10588149b; -[SCMemoriesCRFeaturedStoryDataSource _fetchAssetsInAlbumsToExcludeWithAllFetchResult:memoriesCRFeaturedStoryType:referenceDate:observer:] */

void FUN_1058813b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10588149c;
  puStack_70 = &UNK_110863fc8;
  lStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10588149c; end: 10588168f;  */

void FUN_10588149c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be63300(uVar1);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  puVar2 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b6b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4b40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,uVar1);
  _objc_initWeak(auStack_60,*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x30));
  _objc_copyWeak(auStack_88,auStack_60);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_copyWeak(auStack_78,auStack_58);
  func_0x00010bfab740(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105881690; end: 10588172b;  */

void FUN_105881690(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17b60(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10588172c; end: 1058817ab;  */

void FUN_10588172c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1058817ac; end: 10588191b; -[SCMemoriesCRFeaturedStoryDataSource _fireUpdateAfterValidationWithAllFetchResult:fetchResultsToExclude:memoriesCRFeaturedStoryType:observer:photoLibraryFetcherForAlbumsToExclude:] */

void FUN_1058817ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ec19fc();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000108ec1a10();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10588191c;
  puStack_a8 = &UNK_1108ba0d8;
  uStack_68 = (undefined1)uVar2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  lStack_90 = param_1;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_5;
  uStack_70 = uVar1;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_c0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10588191c; end: 105881b2f;  */

void FUN_10588191c(long param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x000106c2b74c(puVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),
                      *(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000106c2b56c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010beb3e80();
  puVar3 = puVar4;
  if (iVar2 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c2d77c(puVar4,uVar8,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  puVar4 = puVar3;
  func_0x00010bf529e0();
  lVar9 = *(long *)(param_1 + 0x48);
  cVar1 = *(char *)(param_1 + 0x58);
  if (lVar9 < 7) {
    puVar6 = (undefined *)0x3;
    if (cVar1 != '\0') {
      puVar6 = (undefined *)0x4;
    }
    if (lVar9 != 1) {
      puVar6 = (undefined *)0x1;
    }
    puVar7 = (undefined *)0x3;
    if (4 < lVar9 - 2U) {
      puVar7 = puVar6;
    }
LAB_105881a50:
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 < puVar7) goto LAB_105881ac8;
  }
  else {
    if (lVar9 < 9) {
      if (lVar9 == 7) goto LAB_105881a4c;
      puVar7 = (undefined *)0x5;
      if (lVar9 != 8) {
        puVar7 = (undefined *)0x1;
      }
      goto LAB_105881a50;
    }
    if (lVar9 == 9) {
LAB_105881a4c:
      puVar7 = (undefined *)0x3;
      goto LAB_105881a50;
    }
    puVar7 = (undefined *)0x1;
    if (lVar9 != 0xb) goto LAB_105881a50;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106c2cfc8(lVar9,cVar1,uVar8,uVar5);
  _objc_release(uVar5);
  func_0x00010bf529e0();
  puVar6 = puVar3;
  func_0x00010c25e980(puVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_105881ac8:
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105881b30; end: 105881b63; -[SCMemoriesCRFeaturedStoryDataSource _newPhotoLibraryFetcher] */

void FUN_105881b30(void)

{
  _objc_alloc(PTR_PTR_1126b2670);
                    /* WARNING: Could not recover jumptable at 0x00010c035d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105881b64; end: 105881b73; -[SCMemoriesCRFeaturedStoryDataSource _shouldGetClustersForMashup:] */

bool FUN_105881b64(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 7U < 4;
}



/* Entry: 105881b74; end: 105881c67; -[SCMemoriesCRFeaturedStoryDataSource .cxx_destruct] */

void FUN_105881b74(long param_1)

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



/* Entry: 105881c68; end: 105881e7f;  */

void FUN_105881c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bad10;
  _objc_opt_new();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105881e80;
  uStack_80 = 0x105881e90;
  uStack_78 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  uVar2 = 0;
  puStack_b8 = &uStack_c0;
  puStack_98 = &uStack_a0;
  _dispatch_time(0,*(long *)(param_1 + 0x28) * 1000000);
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105881e98;
  puStack_f0 = &UNK_1108ba108;
  _objc_retain(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_e8 = puVar1;
  puStack_d0 = &uStack_c0;
  _objc_retain(uVar5);
  uStack_e0 = uVar5;
  _objc_retain(param_2);
  uStack_d8 = param_2;
  puStack_c8 = &uStack_a0;
  func_0x00010058c530(uVar2,uVar3,&puStack_108);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0418;
  _objc_retain(puVar1);
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(puStack_e8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105881e80; end: 105881e97;  */

void FUN_105881e80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105881e98; end: 105881f57;  */

void FUN_105881e98(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  if ((bVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25fd20(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf86d40(uVar2);
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105881f58; end: 105881fbf;  */

void FUN_105881f58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf86d40(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105881fc0; end: 105882427; -[SCMemoriesCRFeaturedStoryManager initWithPhotoPermissionCoordinator:coreConfigProvider:memoriesExperimentService:grapheneRegistry:docObjectContext:featureSettingsService:screenshopPersistenceService:applicationLifecycleEvents:memoriesCRFeaturedStoryNetworkCoordinator:userBlizzard:userId:transactorProvider:circumstanceEngine:memoriesUserDefaultsManager:] */

undefined8 *
FUN_105881fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126eaac8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_14);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf828;
    _objc_alloc();
    func_0x00010c035dc0();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar5);
    *(undefined4 *)(puVar1 + 0x14) = 0;
    _objc_release(uVar2);
    _objc_release(param_14);
  }
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



/* Entry: 105882428; end: 10588242f;  */

void FUN_105882428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lRam00000001136c6e10;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_106c2a098;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c6e10,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar2 = uRam00000001136c6e18;
  _objc_retain(uRam00000001136c6e18);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105882430; end: 10588245f;  */

void FUN_105882430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105882460; end: 10588260b; -[SCMemoriesCRFeaturedStoryManager observeAllCRFeaturedStories] */

void FUN_105882460(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar7 = *(undefined **)(param_1 + 0x98);
  if (puVar7 == (undefined *)0x0) {
    uVar1 = param_1;
    func_0x00010be3e860();
    puVar7 = PTR_PTR_1126ae6b8;
    if ((uVar1 & 1) == 0) {
      puVar6 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = *(undefined **)(param_1 + 0x70);
      _objc_retain(puVar6);
      _objc_initWeak(auStack_48,param_1);
      uVar1 = param_1;
      func_0x00010bdf9c40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      uVar3 = uVar2;
      func_0x00010bfb26a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      *(ulong *)(param_1 + 0x98) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar7 = *(undefined **)(param_1 + 0x98);
      _objc_retain(puVar7);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar6);
  }
  else {
    _objc_retain(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10588260c; end: 105882743;  */

void FUN_10588260c(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = puVar1;
    FUN_105886e1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010bf1f3c0();
    puVar5 = PTR_PTR_1126af5d0;
    puVar4 = PTR_PTR_1126ae6b8;
    if ((uVar2 & 1) != 0) {
      puVar4 = puVar1;
      func_0x00010be65a60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10588271c;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
LAB_10588271c:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105882744; end: 105882b43; -[SCMemoriesCRFeaturedStoryManager _observeCRFeaturedStoryWithType:isInForeground:] */

void FUN_105882744(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  puVar9 = puVar1;
  func_0x000106c2ca68(param_3,puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_140;
    do {
      lVar14 = 0;
      do {
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar15 = *(undefined8 *)(lStack_148 + lVar14 * 8);
        uVar2 = uVar15;
        func_0x00010bef0240(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar15;
        func_0x00010c124e20(uVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x000106c2bd1c(param_3,uVar2,uVar5,*(undefined8 *)(param_1 + 0x48));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar2);
        uVar2 = uVar15;
        func_0x00010bef0240(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c124e20(uVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010be65c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(uVar2);
        puVar8 = PTR_PTR_1126ae568;
        _objc_opt_new();
        if (param_3 - 7U < 4) {
          _objc_retain(puVar7);
          puVar10 = puVar7;
        }
        else {
          func_0x00010bdc7500(param_1);
          puVar10 = PTR_PTR_1126ae6b8;
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_110 = puVar7;
          puStack_108 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cab40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
        }
        _objc_initWeak(auStack_158,param_1);
        puVar11 = puVar10;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = auStack_158;
        _objc_copyWeak(auStack_168,puVar9);
        puVar12 = puVar11;
        lStack_160 = param_3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010befa120(puVar1);
        _objc_release(puVar12);
        _objc_destroyWeak(auStack_168);
        _objc_destroyWeak(auStack_158);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(lVar6);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar7 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_158);
    __Unwind_Resume();
    _objc_retain(puVar9);
    puVar1 = (undefined *)(lVar3 + 0x20);
    _objc_loadWeakRetained();
    puVar7 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      FUN_105886e1c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdedc00(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105882b44; end: 105882bc3;  */

void FUN_105882b44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  if (param_1 == 0) {
    FUN_105886e1c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdedc00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105882bc4; end: 105882dcb; -[SCMemoriesCRFeaturedStoryManager _observeCRFeaturedStoryFromPhotoLibraryWithType:featuredStoryId:activationDate:referenceDate:isInForeground:] */

void FUN_105882bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar3 = uVar2;
  uStack_70 = param_7;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105882dcc; end: 105882f9f;  */

void FUN_105882dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = lVar1;
    FUN_105886e1c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105881e80;
    uStack_70 = 0x105881e90;
    uStack_68 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    func_0x00010c0c0800(param_2);
    lVar2 = puStack_88[5];
    _objc_retain(lVar2);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105882fa0; end: 10588349f;  */

void FUN_105882fa0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_f8;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    puVar2 = *(undefined **)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar1;
  }
  else {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x80);
    uVar10 = 0xc0000000;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x000106c2c4c8();
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22ffe0();
      _objc_release(uVar10);
      puStack_f8 = *(undefined **)(param_1 + 0x68);
      func_0x000106c2c450(puStack_f8,*(undefined8 *)(param_1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0;
      puVar1 = PTR____NSArray0__struct_11034ab48;
      puVar5 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      puVar3 = param_2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c29eac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x000106c2bfb0(puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c2410e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1577e0();
      func_0x00010c074c20();
      func_0x00010c113c80();
      func_0x00010c08a360(puVar2);
      puStack_f8 = puVar2;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126bf7e0;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    func_0x000106c2ba3c(uVar9,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    func_0x000106c2bbc8(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a480(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain();
    func_0x00010c0f7fc0(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar10);
    if (3 < *(long *)(param_1 + 0x68) - 7U) {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf529e0();
      puVar4 = puVar3;
      func_0x00010bf977c0();
      func_0x00010b5f5864();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar8);
      _objc_retain(uVar6);
      _objc_retain(puStack_f8);
      _objc_retain(uVar6);
      _objc_retain(uVar8);
      _objc_retain(puVar4);
      _objc_retain(uVar10);
      func_0x00010c0f7fc0(uVar9);
      _objc_release(uVar10);
      _objc_release(puStack_f8);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(uVar10);
    }
    _objc_release(puVar3);
    _objc_release(puStack_f8);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1058834a0; end: 1058835cf;  */

bool FUN_1058834a0(long param_1,long param_2)

{
  func_0x00010c0c7f80(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 1058835d0; end: 1058836eb; -[SCMemoriesCRFeaturedStoryManager setAssetIdViewed:featuredStoryId:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:] */

void FUN_1058835d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058836ec;
  puStack_88 = &UNK_110867cb8;
  uStack_80 = param_4;
  lStack_78 = param_1;
  uStack_70 = param_7;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 1058836ec; end: 105883a9f;  */

void FUN_1058836ec(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar5;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  func_0x00010bf51e00();
  func_0x000106c2bc40(puVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = puVar4;
  func_0x00010c0c7f80();
  iVar2 = (int)puVar5;
  func_0x000106c2c4c8();
  puVar5 = PTR_PTR_1126bf830;
  if (iVar2 == 0) goto LAB_105883a5c;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e800();
    _objc_release(uVar3);
    if ((int)puVar5 == 0) goto LAB_1058837e4;
    puVar5 = puVar4;
    func_0x00010c2410e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0d3c80();
    if (puVar7 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar7);
      puVar6 = puVar7;
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    lVar15 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar15);
    lVar13 = lVar15;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar15);
        }
        puVar5 = puVar6;
        func_0x00010bf4b900();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    puVar7 = PTR_PTR_1126bf838;
    func_0x00010c0c7fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c2b9380();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1058837e4:
    puVar6 = puVar4;
    func_0x000106c2bf44(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c29eac0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 0x38);
    func_0x000106c2c12c(puVar5,*(undefined8 *)(param_1 + 0x40),puVar6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c2410e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x000106c2c254(puVar5,puVar8,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126bf838;
    func_0x00010c0c7fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c2bc9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2b9380();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be4f400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  param_3 = puVar5;
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar12);
LAB_105883a5c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(puVar4 + 0x70);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105883aa0; end: 105883b2f; -[SCMemoriesCRFeaturedStoryManager setCRFeaturedStorySeenInCarouselWithFeaturedStoryId:] */

void FUN_105883aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105883b30;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105883b30; end: 105883c57;  */

void FUN_105883b30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  func_0x00010bf51e00(uVar2);
  func_0x000106c2bc40(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x00010c0c7f80();
  iVar1 = (int)uVar4;
  func_0x000106c2c4c8();
  if ((iVar1 != 0 && uVar3 != 0) && (uVar4 = uVar3, func_0x00010c1577e0(), (uVar4 & 1) == 0)) {
    puVar5 = PTR_PTR_1126bf838;
    func_0x00010c0c7fa0(PTR_PTR_1126bf838);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2b8000();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be4f400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105883c58; end: 105883ce7; -[SCMemoriesCRFeaturedStoryManager setCRFeaturedStoryToBeHiddenWithFeaturedStoryId:] */

void FUN_105883c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105883ce8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105883ce8; end: 105883e0f;  */

void FUN_105883ce8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  func_0x00010bf51e00(uVar2);
  func_0x000106c2bc40(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x00010c0c7f80();
  iVar1 = (int)uVar4;
  func_0x000106c2c4c8();
  if ((iVar1 != 0 && uVar3 != 0) && (uVar4 = uVar3, func_0x00010c074c20(), (uVar4 & 1) == 0)) {
    puVar5 = PTR_PTR_1126bf838;
    func_0x00010c0c7fa0(PTR_PTR_1126bf838);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2b0ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be4f400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105883e10; end: 105883e9f; -[SCMemoriesCRFeaturedStoryManager resetViewProgressForFeaturedStories:] */

void FUN_105883e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105883ea0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105883ea0; end: 10588401f;  */

void FUN_105883ea0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0b8600(lVar2,param_2,&PTR___NSConcreteGlobalBlock_1108ba288);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500();
    _objc_release(uVar4);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be924a0(*(undefined8 *)(param_1 + 0x28));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}


