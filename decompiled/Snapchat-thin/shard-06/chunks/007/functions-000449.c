/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c990b8; end: 104c9922b;  */

char * FUN_104c990b8(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_370;
  undefined *puStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
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
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845d10,acStack_80,param_3);
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
  pcVar7 = acStack_100;
  pcStack_88 = FUN_104c9922c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
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
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845d60,acStack_100,pcVar3);
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
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_104c993a0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pcVar7 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_178,pcVar1);
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
    pcVar1 = "";
    pcVar2 = acStack_198;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845db0,pcVar2,param_4);
    pcStack_180 = acStack_198;
    func_0x00010007e5dc(&pcStack_180);
    lVar9 = 0;
    pcVar7 = param_4;
    do {
      if ((&cStack_149)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar8 = acStack_220;
  pcStack_1a8 = FUN_104c9958c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar2;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_200,pcVar3);
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
    pcVar5 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e00,acStack_220,pcVar2);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar6 = pcVar8;
    pcVar7 = pcVar2;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar6 = pcVar8;
      pcVar7 = pcVar2;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar8 = acStack_2a0;
  pcStack_228 = FUN_104c99700;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e50,acStack_2a0,pcVar6);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar2 = pcVar8;
    pcVar7 = pcVar6;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar2 = pcVar8;
      pcVar7 = pcVar6;
    }
  }
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_2a8 = FUN_104c99874;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_318,pcVar3);
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
    func_0x00010002b838(auStack_300,pcVar3);
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    func_0x00010007e1e8(&uStack_338,auStack_318,&lStack_2e8,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845ea0,&uStack_338,pcVar7);
    puStack_320 = &uStack_338;
    func_0x00010007e5dc(&puStack_320);
    lVar9 = 0;
    do {
      if ((&cStack_2e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar4 = &pcStack_370;
  pcStack_348 = FUN_104c99aa4;
  puStack_368 = PTR_PTR_1126e38c8;
  pcStack_370 = pcVar3;
  pcStack_360 = pcVar2;
  pcStack_358 = pcVar1;
  pppuStack_350 = &pppuStack_2b0;
  _objc_msgSendSuper2(&pcStack_370,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104c9922c; end: 104c9939f;  */

char * FUN_104c9922c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_2f0;
  undefined *puStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
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
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
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
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845d60,acStack_80,param_3);
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
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_104c993a0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_f8,pcVar2);
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
    pcVar4 = "";
    pcVar6 = acStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845db0,pcVar6,param_4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar9 = 0;
    pcVar8 = param_4;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
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
  __Unwind_Resume();
  pcVar7 = acStack_1a0;
  pcStack_128 = FUN_104c9958c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  pcVar2 = pcVar6;
  ppuStack_130 = &puStack_90;
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
    pcVar5 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e00,acStack_1a0,pcVar6);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar2 = pcVar7;
    pcVar8 = pcVar6;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar2 = pcVar7;
      pcVar8 = pcVar6;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar7 = acStack_220;
  pcStack_1a8 = FUN_104c99700;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar5;
  pcVar6 = pcVar2;
  pppuStack_1b0 = &ppuStack_130;
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
    func_0x00010002b838(auStack_200,pcVar1);
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
    pcVar4 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e50,acStack_220,pcVar2);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar6 = pcVar7;
    pcVar8 = pcVar2;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar6 = pcVar7;
      pcVar8 = pcVar2;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_228 = FUN_104c99874;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
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
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845ea0,&uStack_2b8,pcVar8);
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
  _objc_release(pcVar6);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  __Unwind_Resume();
  ppcVar3 = &pcStack_2f0;
  pcStack_2c8 = FUN_104c99aa4;
  puStack_2e8 = PTR_PTR_1126e38c8;
  pcStack_2f0 = pcVar1;
  pcStack_2e0 = pcVar6;
  pcStack_2d8 = pcVar4;
  pppuStack_2d0 = &pppuStack_230;
  _objc_msgSendSuper2(&pcStack_2f0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104c993a0; end: 104c9958b;  */

char * FUN_104c993a0(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
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
  char acStack_1a0 [24];
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
  pcVar4 = param_3;
  pcVar3 = param_4;
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
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845db0,pcVar4,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    pcVar3 = param_4;
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
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_104c9958c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_100,pcVar3);
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
    pcVar6 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e00,acStack_120,pcVar4);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar7 = pcVar8;
    pcVar3 = pcVar4;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar7 = pcVar8;
      pcVar3 = pcVar4;
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
  __Unwind_Resume();
  pcVar8 = acStack_1a0;
  pcStack_128 = FUN_104c99700;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar7;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
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
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845e50,acStack_1a0,pcVar7);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar2 = pcVar8;
    pcVar3 = pcVar7;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar2 = pcVar8;
      pcVar3 = pcVar7;
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcStack_1a8 = FUN_104c99874;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar10 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_218,pcVar4);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar4 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_200,pcVar4);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110845ea0,&uStack_238,pcVar3);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar9 = 0;
    do {
      if ((&cStack_1e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar5 = &pcStack_270;
  pcStack_248 = FUN_104c99aa4;
  puStack_268 = PTR_PTR_1126e38c8;
  pcStack_270 = pcVar4;
  pcStack_260 = pcVar2;
  pcStack_258 = pcVar1;
  pppuStack_250 = &pppuStack_1b0;
  _objc_msgSendSuper2(&pcStack_270,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 104c9958c; end: 104c996ff;  */

char * FUN_104c9958c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcStack_1d0;
  undefined *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110845e00,acStack_80,param_3);
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
  pcVar7 = acStack_100;
  pcStack_88 = FUN_104c99700;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
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
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110845e50,acStack_100,pcVar3);
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
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_104c99874;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_178,pcVar1);
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
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110845ea0,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar9 = 0;
    do {
      if ((&cStack_149)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  ppcVar4 = &pcStack_1d0;
  pcStack_1a8 = FUN_104c99aa4;
  puStack_1c8 = PTR_PTR_1126e38c8;
  pcStack_1d0 = pcVar1;
  pcStack_1c0 = pcVar6;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 104c99700; end: 104c99873;  */

char * FUN_104c99700(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
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
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110845e50,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
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
  pcStack_88 = FUN_104c99874;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
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
    func_0x00010002b838(auStack_f8,pcVar2);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110845ea0,&uStack_118,param_4);
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
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_150;
  pcStack_128 = FUN_104c99aa4;
  puStack_148 = PTR_PTR_1126e38c8;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104c99874; end: 104c99aa3;  */

char * FUN_104c99874(long param_1,char *param_2,char *param_3,undefined8 param_4)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110845ea0,&uStack_98,param_4);
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
  pcStack_a8 = FUN_104c99aa4;
  puStack_c8 = PTR_PTR_1126e38c8;
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



/* Entry: 104c99aa4; end: 104c99b17; -[SCGrapheneFacebookLoginMetric2 init] */

undefined1 * FUN_104c99aa4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e38c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c99b18; end: 104c99b8f;  */

void FUN_104c99b18(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110845f70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104c99b90; end: 104c99d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c99b90(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
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
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110845fc0,acStack_80,param_3);
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
  pcVar11 = acStack_100;
  pcStack_88 = FUN_104c99d04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
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
    unaff_x23 = (char *)auStack_e0;
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
    pcVar6 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110846010,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar7 = pcVar11;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar7 = pcVar11;
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
  pcStack_108 = FUN_104c99e78;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar7;
  pcVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
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
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110846060,pcVar2,param_4);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar14 = 0;
    puVar15 = auStack_178;
    pcVar11 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_104c9a0a8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = puVar15;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar7;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
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
    func_0x00010002b838(auStack_218,pcVar3);
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
    func_0x00010002b838(auStack_200,pcVar3);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108460b0,&uStack_238,pcVar11);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar14 = 0;
    do {
      if ((&cStack_1e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar5 = PTR_PTR_1126aeb40;
  _objc_alloc(PTR_PTR_1126aeb40);
  lVar14 = (long)_DAT_11270fec0;
  pcVar1 = pcVar3 + lVar14;
  _objc_loadWeakRetained(pcVar1);
  pcVar6 = pcVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3 + _DAT_11270fec4;
  _objc_loadWeakRetained(pcVar2);
  pcVar7 = pcVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ae0(puVar5);
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  puVar8 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  _objc_initWeak(auStack_2a8,pcVar3);
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_2b0,auStack_2a8);
  func_0x00010bf11fe0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aeb50;
  _objc_alloc();
  pcVar1 = pcVar3 + lVar14;
  _objc_loadWeakRetained(pcVar1);
  pcVar6 = pcVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3 + _DAT_11270fec8;
  _objc_loadWeakRetained(pcVar2);
  pcVar7 = pcVar2;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040880();
  lVar14 = (long)_DAT_11270fecc;
  uVar12 = *(undefined8 *)(pcVar3 + lVar14);
  *(undefined **)(pcVar3 + lVar14) = puVar10;
  _objc_release(uVar12);
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  func_0x00010bf192c0(*(undefined8 *)(pcVar3 + lVar14));
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar8);
  _objc_release(puVar5);
  return;
}



/* Entry: 104c99d04; end: 104c99e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c99d04(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
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
  pcVar5 = param_3;
  _objc_retain(param_2);
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
    pcVar1 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110846010,acStack_80,param_3);
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
  pcStack_88 = FUN_104c99e78;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar5;
  pcVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar15 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
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
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
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
    unaff_x23 = acStack_118;
    pcVar7 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110846060,pcVar7,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    puVar15 = auStack_f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_104c9a0a8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar15;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108460b0,&uStack_1b8,pcVar11);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar14 = 0;
    do {
      if ((&cStack_169)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126aeb40;
  _objc_alloc(PTR_PTR_1126aeb40);
  lVar14 = (long)_DAT_11270fec0;
  pcVar5 = pcVar1 + lVar14;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1 + _DAT_11270fec4;
  _objc_loadWeakRetained(pcVar2);
  pcVar7 = pcVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ae0(puVar4);
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  puVar8 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  _objc_initWeak(auStack_228,pcVar1);
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_230,auStack_228);
  func_0x00010bf11fe0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aeb50;
  _objc_alloc();
  pcVar5 = pcVar1 + lVar14;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1 + _DAT_11270fec8;
  _objc_loadWeakRetained(pcVar2);
  pcVar7 = pcVar2;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040880();
  lVar14 = (long)_DAT_11270fecc;
  uVar12 = *(undefined8 *)(pcVar1 + lVar14);
  *(undefined **)(pcVar1 + lVar14) = puVar10;
  _objc_release(uVar12);
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  func_0x00010bf192c0(*(undefined8 *)(pcVar1 + lVar14));
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar8);
  _objc_release(puVar4);
  return;
}



/* Entry: 104c99e78; end: 104c9a0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c99e78(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
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
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110846060,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c9a0a8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108460b0,&uStack_138,uVar10);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar11 = 0;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
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
  puVar4 = PTR_PTR_1126aeb40;
  _objc_alloc(PTR_PTR_1126aeb40);
  lVar11 = (long)_DAT_11270fec0;
  pcVar1 = pcVar2 + lVar11;
  _objc_loadWeakRetained(pcVar1);
  pcVar3 = pcVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2 + _DAT_11270fec4;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ae0(puVar4);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  puVar7 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  _objc_initWeak(auStack_1a8,pcVar2);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aeb50;
  _objc_alloc();
  pcVar1 = pcVar2 + lVar11;
  _objc_loadWeakRetained(pcVar1);
  pcVar3 = pcVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2 + _DAT_11270fec8;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040880();
  lVar11 = (long)_DAT_11270fecc;
  uVar10 = *(undefined8 *)(pcVar2 + lVar11);
  *(undefined **)(pcVar2 + lVar11) = puVar9;
  _objc_release(uVar10);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  func_0x00010bf192c0(*(undefined8 *)(pcVar2 + lVar11));
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  return;
}



/* Entry: 104c9a0a8; end: 104c9a2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9a0a8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108460b0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar11 = 0;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
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
  puVar2 = PTR_PTR_1126aeb40;
  _objc_alloc(PTR_PTR_1126aeb40);
  lVar11 = (long)_DAT_11270fec0;
  pcVar3 = pcVar1 + lVar11;
  _objc_loadWeakRetained(pcVar3);
  pcVar4 = pcVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1 + _DAT_11270fec4;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ae0(puVar2);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  puVar7 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  _objc_initWeak(auStack_108,pcVar1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_110,auStack_108);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aeb50;
  _objc_alloc();
  pcVar3 = pcVar1 + lVar11;
  _objc_loadWeakRetained(pcVar3);
  pcVar4 = pcVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1 + _DAT_11270fec8;
  _objc_loadWeakRetained(pcVar5);
  pcVar6 = pcVar5;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040880();
  lVar11 = (long)_DAT_11270fecc;
  uVar10 = *(undefined8 *)(pcVar1 + lVar11);
  *(undefined **)(pcVar1 + lVar11) = puVar9;
  _objc_release(uVar10);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(pcVar3);
  func_0x00010bf192c0(*(undefined8 *)(pcVar1 + lVar11));
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar7);
  _objc_release(puVar2);
  return;
}



/* Entry: 104c9a2d8; end: 104c9a517; -[SCInAppRatingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9a2d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126aeb40;
  _objc_alloc(PTR_PTR_1126aeb40);
  lVar9 = (long)_DAT_11270fec0;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11270fec4;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ae0(puVar1);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  _objc_initWeak(auStack_68,param_1);
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aeb50;
  _objc_alloc();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11270fec8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040880();
  lVar10 = (long)_DAT_11270fecc;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar7;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar9);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(puVar1);
  return;
}



/* Entry: 104c9a518; end: 104c9a557;  */

void FUN_104c9a518(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be37ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c9a558; end: 104c9a5d3; -[SCInAppRatingEntryPoint _inAppRatingLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9a558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aeb58;
  _objc_alloc(PTR_PTR_1126aeb58);
  param_1 = param_1 + _DAT_11270fed0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9a5d4; end: 104c9a633; -[SCInAppRatingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9a5d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fec4);
  _objc_destroyWeak(param_1 + _DAT_11270fed0);
  _objc_destroyWeak(param_1 + _DAT_11270fec8);
  _objc_destroyWeak(param_1 + _DAT_11270fec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270fecc,0);
  return;
}



/* Entry: 104c9a634; end: 104c9a6a7; -[SCInAppRatingLogger initWithUserTrackedLogger:] */

undefined1 * FUN_104c9a634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e38d0;
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



/* Entry: 104c9a6a8; end: 104c9a6fb; -[SCInAppRatingLogger logUserViewPreprompt] */

void FUN_104c9a6a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeb60;
  _objc_opt_new(PTR_PTR_1126aeb60);
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



/* Entry: 104c9a6fc; end: 104c9a703; -[SCInAppRatingLogger logUserTapNotNowOnPreprompt] */

void FUN_104c9a6fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logUserRatingPrepromptAction__1125742f0,1);
  return;
}



/* Entry: 104c9a704; end: 104c9a70b; -[SCInAppRatingLogger logUserTapSureOnPreprompt] */

void FUN_104c9a704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logUserRatingPrepromptAction__1125742f0,0);
  return;
}



/* Entry: 104c9a70c; end: 104c9a773; -[SCInAppRatingLogger _logUserRatingPrepromptAction:] */

void FUN_104c9a70c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeb68;
  _objc_opt_new(PTR_PTR_1126aeb68);
  func_0x00010c161620();
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



/* Entry: 104c9a774; end: 104c9a77f; -[SCInAppRatingLogger .cxx_destruct] */

void FUN_104c9a774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9a780; end: 104c9a823; -[SCInAppRatingUIRouteActions initWithUiContainer:window:] */

undefined1 *
FUN_104c9a780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e38d8;
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



/* Entry: 104c9a824; end: 104c9a8af; -[SCInAppRatingUIRouteActions showPrepromptWithDelegate:] */

void FUN_104c9a824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104c9a8b0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104c9a8b0; end: 104c9a8bb;  */

void FUN_104c9a8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showPrepromptWithDelegate__11258c338,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104c9a8bc; end: 104c9a8f7; -[SCInAppRatingUIRouteActions _showPrepromptWithDelegate:] */

void FUN_104c9a8bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be79b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c9a8f8; end: 104c9a903; -[SCInAppRatingUIRouteActions dismissPreprompt] */

void FUN_104c9a8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104c9a904; end: 104c9a947; -[SCInAppRatingUIRouteActions showOSInAppRatingPrompt] */

void FUN_104c9a904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___SKStoreReviewController_1126aeb70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2a72c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136540(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c9a948; end: 104c9ab03; -[SCInAppRatingUIRouteActions _prepromptWithDelegate:] */

void FUN_104c9a948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  FUN_104c9aec8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104c9aee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff3e0(puVar4,param_2,uVar2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000104c9aef8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104c9ab04;
  puStack_70 = &UNK_110846190;
  _objc_retain(param_3);
  uStack_68 = param_3;
  func_0x00010beef340(puVar5,param_2,uVar2,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000104c9af10();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104c9ab0c;
  puStack_98 = &UNK_110846190;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010beef340(puVar6,param_2,uVar2,0,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bef6960(puVar4,param_2,puVar5);
  func_0x00010bef6960(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uStack_90);
  _objc_release(puVar5);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104c9ab04; end: 104c9ab13;  */

void FUN_104c9ab04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_userDidTapNotNow_112682188);
  return;
}



/* Entry: 104c9ab14; end: 104c9ab43; -[SCInAppRatingUIRouteActions .cxx_destruct] */

void FUN_104c9ab14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9ab44; end: 104c9ac37; -[SCInAppRatingWorkflow initWithRouter:inAppRatingScopeDelegate:inAppRatingRecorder:inAppRatingLogger:] */

undefined1 *
FUN_104c9ab44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e38e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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



/* Entry: 104c9ac38; end: 104c9acb7; -[SCInAppRatingWorkflow beginWorkflow] */

void FUN_104c9ac38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104c9acb8;
  puStack_30 = &UNK_1108461c0;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2ee0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9acb8; end: 104c9acc3;  */

void FUN_104c9acb8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2393d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showPrepromptWithDelegate__11266bf18,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c9acc4; end: 104c9ada3; -[SCInAppRatingWorkflow userDidTapSure] */

void FUN_104c9acc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104c9ad68;
  puStack_30 = &UNK_1108461c0;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e00();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9ada4; end: 104c9ae83; -[SCInAppRatingWorkflow userDidTapNotNow] */

void FUN_104c9ada4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104c9ae48;
  puStack_30 = &UNK_1108461c0;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2de0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104c9ae84; end: 104c9aec7; -[SCInAppRatingWorkflow .cxx_destruct] */

void FUN_104c9ae84(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9aec8; end: 104c9af27;  */

void FUN_104c9aec8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dace18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dace18,
                      &PTR____CFConstantStringClassReference_110dace38,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104c9af28; end: 104c9b00b; -[SCInAppRatingRecorderServiceProvider provide] */

void FUN_104c9af28(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aeb88;
  _objc_alloc(PTR_PTR_1126aeb88);
  func_0x00010c01d540();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c9b00c; end: 104c9b04b;  */

void FUN_104c9b00c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be37ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c9b04c; end: 104c9b17b; -[SCInAppRatingRecorderServiceProvider _inAppRatingRecorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9b04c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126aeb90;
  _objc_alloc(PTR_PTR_1126aeb90);
  lVar2 = param_1 + _DAT_11270fef0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11270fef4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aeb98;
  lVar6 = lVar5;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar7,param_2,lVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c011e00(puVar1,param_2,lVar3,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9b17c; end: 104c9b1b3; -[SCInAppRatingRecorderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9b17c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270fef4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270fef0);
  return;
}



/* Entry: 104c9b1b4; end: 104c9b1bf; -[SCFeatureSettingsService isRatingInAppPromptRecordsAvailable] */

void FUN_104c9b1b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110daced8);
  return;
}



/* Entry: 104c9b1c0; end: 104c9b1cb; -[SCFeatureSettingsService ratingInAppPromptRecordsServerParam] */

undefined ** FUN_104c9b1c0(void)

{
  return &PTR____CFConstantStringClassReference_110daced8;
}



/* Entry: 104c9b1cc; end: 104c9b1db; -[SCFeatureSettingsService setRatingInAppPromptRecords:] */

void FUN_104c9b1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110daced8,param_3);
  return;
}



/* Entry: 104c9b1dc; end: 104c9b203; -[SCFeatureSettingsService rating_inapp_prompt_records_client_value:] */

void FUN_104c9b1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104c9b204; end: 104c9b22b; -[SCFeatureSettingsService rating_inapp_prompt_records_server_value:] */

void FUN_104c9b204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104c9b22c; end: 104c9b23f; -[SCFeatureSettingsService ratingInAppPromptRecords] */

void FUN_104c9b22c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110daced8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104c9b240; end: 104c9b34f; -[SCInAppRatingRecordsParser initWithSerializedJSON:] */

undefined1 * FUN_104c9b240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e38e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar4;
      func_0x00010c0d3c80();
    }
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c9b350; end: 104c9b453; -[SCInAppRatingRecordsParser serialized] */

undefined * FUN_104c9b350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dacef8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar4 = puVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + 8);
}



/* Entry: 104c9b454; end: 104c9b45b; -[SCInAppRatingRecordsParser prePromptDialogViewedDict] */

undefined8 FUN_104c9b454(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c9b45c; end: 104c9b467; -[SCInAppRatingRecordsParser .cxx_destruct] */

void FUN_104c9b45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9b468; end: 104c9b5f3; -[SCInAppRatingRecorderImpl initWithFeatureSettingsService:inAppRatingConfig:] */

undefined8 *
FUN_104c9b468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e38f0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104c9b5f4; end: 104c9b85f; -[SCInAppRatingRecorderImpl hasPrepromptedBefore] */

ulong FUN_104c9b5f4(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar12 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf915c0();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c105e40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf529e0();
  if (iVar1 == 0) {
    uVar13 = (ulong)(uVar13 != 0);
    _objc_release(uVar4);
    _objc_release();
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0c2740();
    _objc_release(uVar4);
    _objc_release();
    if (uVar13 < uVar3) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c105e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar2;
      func_0x00010bf52a60(uVar2,param_2,&puStack_130,auStack_f0,0x10);
      if (uVar4 != 0) {
        lVar15 = *plStack_120;
        do {
          uVar13 = 0;
          do {
            if (*plStack_120 != lVar15) {
              _objc_enumerationMutation(uVar2);
            }
            puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
            lVar14 = *(long *)(lStack_128 + uVar13 * 8);
            func_0x00010c0b4ca0(lVar14);
            func_0x00010bf655e0((double)lVar14);
            _objc_retainAutoreleasedReturnValue();
            param_3 = *(undefined ***)(param_1 + 0x18);
            func_0x00010bf51a20(param_3);
            puVar6 = puVar5;
            func_0x00010c083d40(puVar5,param_2,param_3);
            if (((ulong)puVar6 & 1) != 0) {
              _objc_release(puVar5);
LAB_104c9b814:
              _objc_release();
              goto LAB_104c9b81c;
            }
            uVar7 = *(ulong *)(param_1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar7;
            func_0x00010c105e40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_release(uVar7);
            param_3 = &PTR____CFConstantStringClassReference_110dace98;
            uVar3 = uVar8;
            func_0x00010c0720c0(uVar8,param_2,&PTR____CFConstantStringClassReference_110dace98);
            _objc_release(uVar8);
            _objc_release(puVar5);
            if ((uVar3 & 1) != 0) goto LAB_104c9b814;
            uVar13 = uVar13 + 1;
          } while (uVar4 != uVar13);
          uVar4 = uVar2;
          ppuVar12 = &puStack_130;
          func_0x00010bf52a60(uVar2,param_2,&puStack_130,auStack_f0,0x10);
        } while (uVar4 != 0);
      }
      _objc_release();
      uVar13 = 0;
      param_3 = ppuVar12;
    }
    else {
LAB_104c9b81c:
      uVar13 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar13;
  }
  ___stack_chk_fail();
  uVar4 = uVar2;
  func_0x00010be20d60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010be23180(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(uVar2 + 0x10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c105e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar13);
  uVar9 = *(undefined8 *)(uVar2 + 0x10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c15e940();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(uVar2 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7720();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return uVar4;
}



/* Entry: 104c9b860; end: 104c9b95b; -[SCInAppRatingRecorderImpl recordPrepromptAction:] */

void FUN_104c9b860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be20d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be23180(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c105e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15e940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7720();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c9b95c; end: 104c9b9db; -[SCInAppRatingRecorderImpl _getNowTimeStamp] */

void FUN_104c9b95c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df7c0(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c9b9dc; end: 104c9b9f7; -[SCInAppRatingRecorderImpl _getStringFromPrepromptAction:] */

undefined ** FUN_104c9b9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dace98;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dace78;
  }
  return ppuVar1;
}



/* Entry: 104c9b9f8; end: 104c9ba33; -[SCInAppRatingRecorderImpl .cxx_destruct] */

void FUN_104c9b9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9ba34; end: 104c9ba9b; +[SCActivationPbInAppRatingConfig descriptor] */

void FUN_104c9ba34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f1a40,
                        &PTR____CFConstantStringClassReference_110dacf58,
                        &PTR_s_snapchat_activation_cof_1130ab7b8,&PTR_s_enableReprompt_1130ab7d0,3,
                        0x18,0x1c);
    puRam00000001136b8900 = puVar1;
  }
  return;
}



/* Entry: 104c9ba9c; end: 104c9bbb7; -[SCInAppRatingTrigger initWithSnapSendEvents:inAppRatingRecorder:circumstanceEngine:storageQuotaManager:delegate:] */

undefined1 *
FUN_104c9ba9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e38f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c9bbb8; end: 104c9bc0f; -[SCInAppRatingTrigger startObservingSnapSendEventsIfNeed] */

void FUN_104c9bbb8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be34460();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010be44840(), (int)uVar1 != 0)) &&
     ((uVar1 = param_1, func_0x00010beb2ce0(), (int)uVar1 == 0 ||
      (uVar1 = param_1, func_0x00010be45100(), (uVar1 & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObservingSnapSendEvents_11258dcf0);
    return;
  }
  return;
}



/* Entry: 104c9bc10; end: 104c9bcd7; -[SCInAppRatingTrigger _startObservingSnapSendEvents] */

void FUN_104c9bc10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104c9bcd8; end: 104c9bd03;  */

void FUN_104c9bcd8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c9bd04; end: 104c9bd3f; -[SCInAppRatingTrigger _handleSnapSendEvents] */

void FUN_104c9bd04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfeb200();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c9bd40; end: 104c9bd57; -[SCInAppRatingTrigger _isTargetUser] */

void FUN_104c9bd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dacf78,0,0);
  return;
}



/* Entry: 104c9bd58; end: 104c9bd97; -[SCInAppRatingTrigger _hasPrepromptedBefore] */

undefined8 FUN_104c9bd58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda860();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104c9bd98; end: 104c9bdaf; -[SCInAppRatingTrigger _shouldCheckStorageQuota] */

void FUN_104c9bd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dacf98,1,0);
  return;
}



/* Entry: 104c9bdb0; end: 104c9be17; -[SCInAppRatingTrigger _isUserOverStorageQuota] */

long FUN_104c9bdb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08b180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c079740(lVar2);
  }
  _objc_release(lVar2);
  return lVar1;
}



/* Entry: 104c9be18; end: 104c9be73; -[SCInAppRatingTrigger .cxx_destruct] */

void FUN_104c9be18(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9be74; end: 104c9bf9f; -[SCInAppRatingTriggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9be74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_11270ff20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(lVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar4);
  return;
}



/* Entry: 104c9bfa0; end: 104c9bfcb;  */

void FUN_104c9bfa0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd30a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c9bfcc; end: 104c9c11b; -[SCInAppRatingTriggerEntryPoint _begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9bfcc(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126aebb0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11270ff24;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c243020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11270ff28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfeb1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11270ff2c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11270ff30;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048660();
  lVar11 = (long)_DAT_11270ff34;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24fa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar11),PTR_s_startObservingSnapSendEventsIfNe_1126718c8);
  return;
}



/* Entry: 104c9c11c; end: 104c9c143; -[SCInAppRatingTriggerEntryPoint inAppRatingScopeDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9c11c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11270ff38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104c9c144; end: 104c9c19b; -[SCInAppRatingTriggerEntryPoint inAppRatingTriggered] */

void FUN_104c9c144(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104c9c19c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104c9c19c; end: 104c9c26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9c19c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11270ff3c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aebb8;
  _objc_alloc(PTR_PTR_1126aebb8);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11270ff38),param_2,
                      puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104c9c26c; end: 104c9c2ff; -[SCInAppRatingTriggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9c26c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270ff38,0);
  _objc_destroyWeak(param_1 + _DAT_11270ff30);
  _objc_destroyWeak(param_1 + _DAT_11270ff20);
  _objc_destroyWeak(param_1 + _DAT_11270ff28);
  _objc_destroyWeak(param_1 + _DAT_11270ff24);
  _objc_destroyWeak(param_1 + _DAT_11270ff2c);
  _objc_destroyWeak(param_1 + _DAT_11270ff3c);
  _objc_destroyWeak(param_1 + _DAT_11270ff40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270ff34,0);
  return;
}



/* Entry: 104c9c300; end: 104c9c373; -[SCInAppRatingRecorderServices initWithInAppRatingRecorder:] */

undefined1 * FUN_104c9c300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3900;
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



/* Entry: 104c9c374; end: 104c9c37b; -[SCInAppRatingRecorderServices inAppRatingRecorder] */

undefined8 FUN_104c9c374(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c9c37c; end: 104c9c387; -[SCInAppRatingRecorderServices .cxx_destruct] */

void FUN_104c9c37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9c388; end: 104c9c423; -[SCInAppRatingScope initWithUiContainer:delegate:] */

undefined1 *
FUN_104c9c388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3908;
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



/* Entry: 104c9c424; end: 104c9c42b; -[SCInAppRatingScope uiContainer] */

undefined8 FUN_104c9c424(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c9c42c; end: 104c9c443; -[SCInAppRatingScope delegate] */

void FUN_104c9c42c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c9c444; end: 104c9c46f; -[SCInAppRatingScope .cxx_destruct] */

void FUN_104c9c444(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c9c470; end: 104c9c47b; -[SCFeatureSettingsService hasVerificationTakeoverTimestampSeconds] */

void FUN_104c9c470(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dacfd8);
  return;
}



/* Entry: 104c9c47c; end: 104c9c487; -[SCFeatureSettingsService lastVerificationTakeoverTimestampSecondsServerParam] */

undefined ** FUN_104c9c47c(void)

{
  return &PTR____CFConstantStringClassReference_110dacfd8;
}



/* Entry: 104c9c488; end: 104c9c497; -[SCFeatureSettingsService setLastVerificationTakeoverTimestampSeconds:] */

void FUN_104c9c488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dacfd8,param_3);
  return;
}



/* Entry: 104c9c498; end: 104c9c49f; -[SCFeatureSettingsService LAST_VERIFICATION_TAKEOVER_TIMESTAMP_SECONDS_client_value:] */

void FUN_104c9c498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c9c4a0; end: 104c9c4a7; -[SCFeatureSettingsService LAST_VERIFICATION_TAKEOVER_TIMESTAMP_SECONDS_server_value:] */

void FUN_104c9c4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c9c4a8; end: 104c9c4b7; -[SCFeatureSettingsService lastVerificationTakeoverTimestampSeconds] */

void FUN_104c9c4a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dacfd8,0);
  return;
}



/* Entry: 104c9c4b8; end: 104c9c4c3; -[SCFeatureSettingsService hasVerificationTakeoverImpressionCount] */

void FUN_104c9c4b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dacff8);
  return;
}



/* Entry: 104c9c4c4; end: 104c9c4cf; -[SCFeatureSettingsService verificationTakeoverImpressionCountServerParam] */

undefined ** FUN_104c9c4c4(void)

{
  return &PTR____CFConstantStringClassReference_110dacff8;
}



/* Entry: 104c9c4d0; end: 104c9c4df; -[SCFeatureSettingsService setVerificationTakeoverImpressionCount:] */

void FUN_104c9c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dacff8,param_3);
  return;
}



/* Entry: 104c9c4e0; end: 104c9c4e7; -[SCFeatureSettingsService VERIFICATION_TAKEOVER_IMPRESSION_COUNT_client_value:] */

void FUN_104c9c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104c9c4e8; end: 104c9c4ef; -[SCFeatureSettingsService VERIFICATION_TAKEOVER_IMPRESSION_COUNT_server_value:] */

void FUN_104c9c4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104c9c4f0; end: 104c9c4ff; -[SCFeatureSettingsService verificationTakeoverImpressionCount] */

void FUN_104c9c4f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dacff8,0);
  return;
}



/* Entry: 104c9c500; end: 104c9c7e7; -[SCIdentityVerificationTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9c500(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126aebc0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11270ff5c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c293fc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11270ff60;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bfcdfa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef920();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11270ff50);
  *(undefined **)(param_1 + _DAT_11270ff50) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104c9c7e8;
  puStack_88 = &UNK_110846280;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11270ff58;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bee8340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_11270ff58;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar6;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee8340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 104c9c7e8; end: 104c9c8cf;  */

void FUN_104c9c7e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010be07680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0404c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9c8d0; end: 104c9ca2f; -[SCIdentityVerificationTakeoverEntryPoint _verificationTakeoverProvider:providerType:campaignId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9c8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126aebc8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11270ff64;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010bfa2b80(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11270ff54;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270ff58;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0408e0(puVar1,param_2,param_3,param_4,param_5,lVar2,lVar4,lVar6,
                      *(undefined8 *)(param_1 + _DAT_11270ff50));
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9ca30; end: 104c9cb93; -[SCIdentityVerificationTakeoverEntryPoint _emailVerificationTakeoverUIRouteActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9ca30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126aebd0;
  _objc_alloc(PTR_PTR_1126aebd0);
  lVar2 = param_1;
  FUN_104c9cb94(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110dad018,
                      &PTR____CFConstantStringClassReference_110dad038);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_104c9f614();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000104c9f644();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000104c9f674();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000104c9f68c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_11270ff6c);
  }
  func_0x00010c03f920(puVar1,param_2,lVar3,puVar4,puVar5,puVar6,puVar7,puVar8,
                      &PTR___NSConcreteGlobalBlock_1108462d0,uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c9cb94; end: 104c9cbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c9cb94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11270ff68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


