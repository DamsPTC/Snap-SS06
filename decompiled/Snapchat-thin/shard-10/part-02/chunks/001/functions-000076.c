/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b1ef00; end: 107b1ef77;  */

void FUN_107b1ef00(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1109fcfd0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107b1ef78; end: 107b1f0eb;  */

char * FUN_107b1ef78(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fd020,&uStack_80,param_3);
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
  pcStack_88 = FUN_107b1f0ec;
  puStack_a8 = PTR_PTR_1126f9e38;
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



/* Entry: 107b1f0ec; end: 107b1f15f; -[SCGrapheneSdnNotificationProcessingMetric2 init] */

undefined1 * FUN_107b1f0ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b1f160; end: 107b1f34b;  */

char * FUN_107b1f160(long param_1,char *param_2,char *param_3,char *param_4)

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
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_670;
  undefined *puStack_668;
  char *pcStack_660;
  char *pcStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5b8 [24];
  char *pcStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  char *pcStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_518 [24];
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  char *pcStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  char *pcStack_438;
  undefined8 *puStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_3f8 [24];
  char *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
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
  pcVar4 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    unaff_x23 = (char *)auStack_78;
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
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd090,pcVar4,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar7 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
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
  pcStack_a8 = FUN_107b1f34c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar5 = pcVar4;
  pcVar6 = pcVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    unaff_x23 = (char *)auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
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
    pcVar9 = "\x01";
    pcVar5 = acStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd0e0,pcVar5,pcVar7);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar13 = 0;
    pcVar6 = pcVar7;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar2 = acStack_1c0;
  pcStack_148 = FUN_107b1f538;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar9;
  pcVar7 = pcVar5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar9);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
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
    unaff_x23 = (char *)auStack_1a0;
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
    pcVar4 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd130,acStack_1c0,pcVar5);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar7 = pcVar2;
    pcVar6 = pcVar5;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar7 = pcVar2;
      pcVar6 = pcVar5;
    }
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcVar5 = acStack_240;
  pcStack_1c8 = FUN_107b1f6ac;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  pcVar9 = pcVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar4);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
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
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    pcVar2 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd180,acStack_240,pcVar7);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar9 = pcVar5;
    pcVar6 = pcVar7;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar9 = pcVar5;
      pcVar6 = pcVar7;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar5 = acStack_2c0;
  pcStack_248 = FUN_107b1f820;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar7 = pcVar9;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
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
    unaff_x23 = (char *)auStack_2a0;
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
    pcVar4 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd1d0,acStack_2c0,pcVar9);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    pcVar7 = pcVar5;
    pcVar6 = pcVar9;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      pcVar7 = pcVar5;
      pcVar6 = pcVar9;
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_2c8 = FUN_107b1f994;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  pcVar9 = pcVar7;
  pcVar5 = pcVar6;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  puVar15 = (undefined8 *)0x0;
  if (pcVar1 != (char *)0x0) {
    plVar14 = *(long **)(pcVar1 + 8);
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
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,pcVar1);
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
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    pcVar2 = "";
    unaff_x23 = acStack_358;
    pcVar9 = acStack_358;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd220,pcVar9,pcVar6);
    pcStack_340 = unaff_x23;
    func_0x00010007e5dc(&pcStack_340);
    lVar13 = 0;
    puVar15 = auStack_338;
    pcVar5 = pcVar6;
    do {
      if ((&cStack_309)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_107b1fbc4;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar10 = pcVar9;
  pcVar12 = pcVar5;
  puStack_3a0 = unaff_x24;
  pcStack_398 = unaff_x23;
  puStack_390 = puVar15;
  pcStack_388 = pcVar1;
  pcStack_380 = pcVar7;
  pcStack_378 = pcVar4;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  pcVar1 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,pcVar1);
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
    func_0x00010002b838(auStack_3c0,pcVar1);
    acStack_3f8[0] = '\0';
    acStack_3f8[1] = '\0';
    acStack_3f8[2] = '\0';
    acStack_3f8[3] = '\0';
    acStack_3f8[4] = '\0';
    acStack_3f8[5] = '\0';
    acStack_3f8[6] = '\0';
    acStack_3f8[7] = '\0';
    acStack_3f8[8] = '\0';
    acStack_3f8[9] = '\0';
    acStack_3f8[10] = '\0';
    acStack_3f8[0xb] = '\0';
    acStack_3f8[0xc] = '\0';
    acStack_3f8[0xd] = '\0';
    acStack_3f8[0xe] = '\0';
    acStack_3f8[0xf] = '\0';
    acStack_3f8[0x10] = '\0';
    acStack_3f8[0x11] = '\0';
    acStack_3f8[0x12] = '\0';
    acStack_3f8[0x13] = '\0';
    acStack_3f8[0x14] = '\0';
    acStack_3f8[0x15] = '\0';
    acStack_3f8[0x16] = '\0';
    acStack_3f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3f8,auStack_3d8,&lStack_3a8,2);
    pcVar6 = "\x01";
    unaff_x23 = acStack_3f8;
    pcVar10 = acStack_3f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd270,pcVar10,pcVar5);
    pcStack_3e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3e0);
    lVar13 = 0;
    pcVar1 = (char *)auStack_3d8;
    pcVar12 = pcVar5;
    do {
      if ((&cStack_3a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_480;
  pcStack_408 = FUN_107b1fdf4;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar3 = pcVar10;
  puStack_440 = unaff_x24;
  pcStack_438 = unaff_x23;
  puStack_430 = (undefined8 *)pcVar1;
  pcStack_428 = pcVar4;
  pcStack_420 = pcVar9;
  pcStack_418 = pcVar2;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(pcVar6);
  plVar14 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x23 = (char *)auStack_460;
    func_0x00010002b838(auStack_460,pcVar1);
    acStack_480[0] = '\0';
    acStack_480[1] = '\0';
    acStack_480[2] = '\0';
    acStack_480[3] = '\0';
    acStack_480[4] = '\0';
    acStack_480[5] = '\0';
    acStack_480[6] = '\0';
    acStack_480[7] = '\0';
    acStack_480[8] = '\0';
    acStack_480[9] = '\0';
    acStack_480[10] = '\0';
    acStack_480[0xb] = '\0';
    acStack_480[0xc] = '\0';
    acStack_480[0xd] = '\0';
    acStack_480[0xe] = '\0';
    acStack_480[0xf] = '\0';
    acStack_480[0x10] = '\0';
    acStack_480[0x11] = '\0';
    acStack_480[0x12] = '\0';
    acStack_480[0x13] = '\0';
    acStack_480[0x14] = '\0';
    acStack_480[0x15] = '\0';
    acStack_480[0x16] = '\0';
    acStack_480[0x17] = '\0';
    func_0x00010007e1e8(acStack_480,auStack_460,&lStack_448,1);
    pcVar7 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd2c0,acStack_480,pcVar10);
    puStack_468 = acStack_480;
    func_0x00010007e5dc(&puStack_468);
    pcVar3 = pcVar11;
    pcVar12 = pcVar10;
    pcVar1 = acStack_480;
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
      pcVar3 = pcVar11;
      pcVar12 = pcVar10;
      pcVar1 = acStack_480;
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_488 = FUN_107b1ff68;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar9 = pcVar3;
  pcVar10 = pcVar12;
  puStack_4c0 = unaff_x24;
  pcStack_4b8 = unaff_x23;
  puStack_4b0 = (undefined8 *)pcVar1;
  plStack_4a8 = plVar14;
  pcStack_4a0 = pcVar4;
  pcStack_498 = pcVar6;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(pcVar7);
  _objc_retain(pcVar3);
  puVar15 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = auStack_4f8;
    func_0x00010002b838(auStack_4f8,pcVar1);
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
    unaff_x23 = acStack_518;
    pcVar9 = acStack_518;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd310,pcVar9,pcVar12);
    pcStack_500 = unaff_x23;
    func_0x00010007e5dc(&pcStack_500);
    lVar13 = 0;
    puVar15 = auStack_4f8;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_4c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_107b20198;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar5 = pcVar9;
  puStack_560 = unaff_x24;
  pcStack_558 = unaff_x23;
  puStack_550 = puVar15;
  pcStack_548 = pcVar1;
  pcStack_540 = pcVar3;
  pcStack_538 = pcVar7;
  pppuStack_530 = &pppuStack_490;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_598;
    func_0x00010002b838(auStack_598,pcVar1);
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
    func_0x00010002b838(auStack_580,pcVar1);
    acStack_5b8[0] = '\0';
    acStack_5b8[1] = '\0';
    acStack_5b8[2] = '\0';
    acStack_5b8[3] = '\0';
    acStack_5b8[4] = '\0';
    acStack_5b8[5] = '\0';
    acStack_5b8[6] = '\0';
    acStack_5b8[7] = '\0';
    acStack_5b8[8] = '\0';
    acStack_5b8[9] = '\0';
    acStack_5b8[10] = '\0';
    acStack_5b8[0xb] = '\0';
    acStack_5b8[0xc] = '\0';
    acStack_5b8[0xd] = '\0';
    acStack_5b8[0xe] = '\0';
    acStack_5b8[0xf] = '\0';
    acStack_5b8[0x10] = '\0';
    acStack_5b8[0x11] = '\0';
    acStack_5b8[0x12] = '\0';
    acStack_5b8[0x13] = '\0';
    acStack_5b8[0x14] = '\0';
    acStack_5b8[0x15] = '\0';
    acStack_5b8[0x16] = '\0';
    acStack_5b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5b8,auStack_598,&lStack_568,2);
    pcVar4 = "\x01";
    unaff_x23 = acStack_5b8;
    pcVar5 = acStack_5b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd360,pcVar5,pcVar10);
    pcStack_5a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_5a0);
    lVar13 = 0;
    puVar15 = auStack_598;
    do {
      if ((&cStack_569)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_5c8 = FUN_107b203c8;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_600 = unaff_x24;
  pcStack_5f8 = unaff_x23;
  puStack_5f0 = puVar15;
  pcStack_5e8 = pcVar1;
  pcStack_5e0 = pcVar9;
  pcStack_5d8 = pcVar2;
  pppuStack_5d0 = &pppuStack_530;
  _objc_retain(pcVar4);
  if (pcVar7 != (char *)0x0) {
    plVar14 = *(long **)(pcVar7 + 8);
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
    func_0x00010002b838(auStack_620,pcVar1);
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    func_0x00010007e1e8(&uStack_640,auStack_620,&lStack_608,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd3b0,&uStack_640,pcVar5);
    puStack_628 = (undefined1 *)&uStack_640;
    func_0x00010007e5dc(&puStack_628);
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_670;
  pcStack_648 = FUN_107b2053c;
  puStack_668 = PTR_PTR_1126f9e40;
  pcStack_670 = pcVar7;
  pcStack_660 = pcVar1;
  pcStack_658 = pcVar4;
  pppuStack_650 = &pppuStack_5d0;
  _objc_msgSendSuper2(&pcStack_670,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 107b1f34c; end: 107b1f537;  */

char * FUN_107b1f34c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_5d0;
  undefined *puStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  char *pcStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_518 [24];
  char *pcStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  char *pcStack_4b8;
  undefined8 *puStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  char acStack_478 [24];
  char *pcStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3e0 [24];
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
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
    plVar14 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    unaff_x23 = (char *)auStack_78;
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
    pcVar4 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd0e0,pcVar4,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar3 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
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
  pcStack_a8 = FUN_107b1f538;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
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
    unaff_x23 = (char *)auStack_100;
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
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd130,acStack_120,pcVar4);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar7;
    pcVar3 = pcVar4;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar7;
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
  pcVar7 = acStack_1a0;
  pcStack_128 = FUN_107b1f6ac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar8;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
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
    unaff_x23 = (char *)auStack_180;
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
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd180,acStack_1a0,pcVar8);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar2 = pcVar7;
    pcVar3 = pcVar8;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar2 = pcVar7;
      pcVar3 = pcVar8;
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
  pcVar7 = acStack_220;
  pcStack_1a8 = FUN_107b1f820;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar2;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar1);
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
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
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar4);
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
    pcVar6 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd1d0,acStack_220,pcVar2);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar8 = pcVar7;
    pcVar3 = pcVar2;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar8 = pcVar7;
      pcVar3 = pcVar2;
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_228 = FUN_107b1f994;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar8;
  pcVar7 = pcVar3;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  puVar15 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
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
    func_0x00010002b838(auStack_280,pcVar1);
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
    pcVar1 = "";
    unaff_x23 = acStack_2b8;
    pcVar2 = acStack_2b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd220,pcVar2,pcVar3);
    pcStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar13 = 0;
    puVar15 = auStack_298;
    pcVar7 = pcVar3;
    do {
      if ((&cStack_269)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_2c8 = FUN_107b1fbc4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar10 = pcVar2;
  pcVar12 = pcVar7;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = puVar15;
  pcStack_2e8 = pcVar4;
  pcStack_2e0 = pcVar8;
  pcStack_2d8 = pcVar6;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  pcVar4 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,pcVar4);
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
    func_0x00010002b838(auStack_320,pcVar4);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    pcVar3 = "\x01";
    unaff_x23 = acStack_358;
    pcVar10 = acStack_358;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd270,pcVar10,pcVar7);
    pcStack_340 = unaff_x23;
    func_0x00010007e5dc(&pcStack_340);
    lVar13 = 0;
    pcVar4 = (char *)auStack_338;
    pcVar12 = pcVar7;
    do {
      if ((&cStack_309)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar6;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar7 = pcVar6;
  __Unwind_Resume();
  pcVar11 = acStack_3e0;
  pcStack_368 = FUN_107b1fdf4;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar5 = pcVar10;
  puStack_3a0 = unaff_x24;
  pcStack_398 = unaff_x23;
  puStack_390 = (undefined8 *)pcVar4;
  pcStack_388 = pcVar6;
  pcStack_380 = pcVar2;
  pcStack_378 = pcVar1;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(pcVar3);
  plVar14 = (long *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar14 = *(long **)(pcVar7 + 8);
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
    unaff_x23 = (char *)auStack_3c0;
    func_0x00010002b838(auStack_3c0,pcVar1);
    acStack_3e0[0] = '\0';
    acStack_3e0[1] = '\0';
    acStack_3e0[2] = '\0';
    acStack_3e0[3] = '\0';
    acStack_3e0[4] = '\0';
    acStack_3e0[5] = '\0';
    acStack_3e0[6] = '\0';
    acStack_3e0[7] = '\0';
    acStack_3e0[8] = '\0';
    acStack_3e0[9] = '\0';
    acStack_3e0[10] = '\0';
    acStack_3e0[0xb] = '\0';
    acStack_3e0[0xc] = '\0';
    acStack_3e0[0xd] = '\0';
    acStack_3e0[0xe] = '\0';
    acStack_3e0[0xf] = '\0';
    acStack_3e0[0x10] = '\0';
    acStack_3e0[0x11] = '\0';
    acStack_3e0[0x12] = '\0';
    acStack_3e0[0x13] = '\0';
    acStack_3e0[0x14] = '\0';
    acStack_3e0[0x15] = '\0';
    acStack_3e0[0x16] = '\0';
    acStack_3e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3e0,auStack_3c0,&lStack_3a8,1);
    pcVar8 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd2c0,acStack_3e0,pcVar10);
    puStack_3c8 = acStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    pcVar5 = pcVar11;
    pcVar12 = pcVar10;
    pcVar4 = acStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      pcVar5 = pcVar11;
      pcVar12 = pcVar10;
      pcVar4 = acStack_3e0;
    }
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_107b1ff68;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar6 = pcVar5;
  pcVar10 = pcVar12;
  puStack_420 = unaff_x24;
  pcStack_418 = unaff_x23;
  puStack_410 = (undefined8 *)pcVar4;
  plStack_408 = plVar14;
  pcStack_400 = pcVar1;
  pcStack_3f8 = pcVar3;
  pppuStack_3f0 = &pppuStack_370;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  puVar15 = (undefined8 *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar14 = *(long **)(pcVar7 + 8);
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
    unaff_x24 = auStack_458;
    func_0x00010002b838(auStack_458,pcVar1);
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
    pcVar2 = "";
    unaff_x23 = acStack_478;
    pcVar6 = acStack_478;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd310,pcVar6,pcVar12);
    pcStack_460 = unaff_x23;
    func_0x00010007e5dc(&pcStack_460);
    lVar13 = 0;
    puVar15 = auStack_458;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_429)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_107b20198;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar3 = pcVar6;
  puStack_4c0 = unaff_x24;
  pcStack_4b8 = unaff_x23;
  puStack_4b0 = puVar15;
  pcStack_4a8 = pcVar1;
  pcStack_4a0 = pcVar5;
  pcStack_498 = pcVar8;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  puVar15 = (undefined8 *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar14 = *(long **)(pcVar7 + 8);
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
    unaff_x24 = auStack_4f8;
    func_0x00010002b838(auStack_4f8,pcVar1);
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
    pcVar4 = "\x01";
    unaff_x23 = acStack_518;
    pcVar3 = acStack_518;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd360,pcVar3,pcVar10);
    pcStack_500 = unaff_x23;
    func_0x00010007e5dc(&pcStack_500);
    lVar13 = 0;
    puVar15 = auStack_4f8;
    do {
      if ((&cStack_4c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_4e1 < '\0') {
    __ZdlPv(auStack_4f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  pcVar8 = pcVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_107b203c8;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_560 = unaff_x24;
  pcStack_558 = unaff_x23;
  puStack_550 = puVar15;
  pcStack_548 = pcVar1;
  pcStack_540 = pcVar6;
  pcStack_538 = pcVar2;
  pppuStack_530 = &pppuStack_490;
  _objc_retain(pcVar4);
  if (pcVar8 != (char *)0x0) {
    plVar14 = *(long **)(pcVar8 + 8);
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
    func_0x00010002b838(auStack_580,pcVar1);
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd3b0,&uStack_5a0,pcVar3);
    puStack_588 = (undefined1 *)&uStack_5a0;
    func_0x00010007e5dc(&puStack_588);
    if (cStack_569 < '\0') {
      __ZdlPv(auStack_580[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  ppcVar9 = &pcStack_5d0;
  pcStack_5a8 = FUN_107b2053c;
  puStack_5c8 = PTR_PTR_1126f9e40;
  pcStack_5d0 = pcVar3;
  pcStack_5c0 = pcVar1;
  pcStack_5b8 = pcVar4;
  pppuStack_5b0 = &pppuStack_530;
  _objc_msgSendSuper2(&pcStack_5d0,PTR_s_init_1125d9248);
  if (ppcVar9 != (char **)0x0) {
    pcVar1 = (char *)ppcVar9;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar9 + 8) = pcVar1;
  }
  return (char *)ppcVar9;
}



/* Entry: 107b1f538; end: 107b1f6ab;  */

char * FUN_107b1f538(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_530;
  undefined *puStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  char *pcStack_4b8;
  undefined8 *puStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  char acStack_478 [24];
  char *pcStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
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
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd130,acStack_80,param_3);
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
  pcVar5 = acStack_100;
  pcStack_88 = FUN_107b1f6ac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar3;
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
    pcVar8 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd180,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar9 = pcVar5;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar9 = pcVar5;
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
  pcVar5 = acStack_180;
  pcStack_108 = FUN_107b1f820;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar2 = pcVar9;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd1d0,acStack_180,pcVar9);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar5;
    param_4 = pcVar9;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar5;
      param_4 = pcVar9;
    }
  }
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcStack_188 = FUN_107b1f994;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar2;
  pcVar5 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar3);
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
    func_0x00010002b838(auStack_1e0,pcVar3);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar8 = "";
    unaff_x23 = acStack_218;
    pcVar9 = acStack_218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd220,pcVar9,param_4);
    pcStack_200 = unaff_x23;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    puVar15 = auStack_1f8;
    pcVar5 = param_4;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_107b1fbc4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar10 = pcVar9;
  pcVar12 = pcVar5;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = puVar15;
  pcStack_248 = pcVar3;
  pcStack_240 = pcVar2;
  pcStack_238 = pcVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  pcVar1 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
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
    func_0x00010002b838(auStack_280,pcVar1);
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
    pcVar6 = "\x01";
    unaff_x23 = acStack_2b8;
    pcVar10 = acStack_2b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd270,pcVar10,pcVar5);
    pcStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar14 = 0;
    pcVar1 = (char *)auStack_298;
    pcVar12 = pcVar5;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_340;
  pcStack_2c8 = FUN_107b1fdf4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar4 = pcVar10;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar1;
  pcStack_2e8 = pcVar3;
  pcStack_2e0 = pcVar9;
  pcStack_2d8 = pcVar8;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar6);
  plVar13 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
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
    unaff_x23 = (char *)auStack_320;
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
    pcVar2 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd2c0,acStack_340,pcVar10);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    pcVar4 = pcVar11;
    pcVar12 = pcVar10;
    pcVar1 = acStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      pcVar4 = pcVar11;
      pcVar12 = pcVar10;
      pcVar1 = acStack_340;
    }
  }
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_348 = FUN_107b1ff68;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar9 = pcVar4;
  pcVar10 = pcVar12;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = (undefined8 *)pcVar1;
  plStack_368 = plVar13;
  pcStack_360 = pcVar3;
  pcStack_358 = pcVar6;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar4);
  puVar15 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,pcVar1);
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
    pcVar8 = "";
    unaff_x23 = acStack_3d8;
    pcVar9 = acStack_3d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd310,pcVar9,pcVar12);
    pcStack_3c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar14 = 0;
    puVar15 = auStack_3b8;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_389)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_3e8 = FUN_107b20198;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar5 = pcVar9;
  puStack_420 = unaff_x24;
  pcStack_418 = unaff_x23;
  puStack_410 = puVar15;
  pcStack_408 = pcVar1;
  pcStack_400 = pcVar4;
  pcStack_3f8 = pcVar2;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_458;
    func_0x00010002b838(auStack_458,pcVar1);
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
    pcVar3 = "\x01";
    unaff_x23 = acStack_478;
    pcVar5 = acStack_478;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd360,pcVar5,pcVar10);
    pcStack_460 = unaff_x23;
    func_0x00010007e5dc(&pcStack_460);
    lVar14 = 0;
    puVar15 = auStack_458;
    do {
      if ((&cStack_429)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_488 = FUN_107b203c8;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4c0 = unaff_x24;
  pcStack_4b8 = unaff_x23;
  puStack_4b0 = puVar15;
  pcStack_4a8 = pcVar1;
  pcStack_4a0 = pcVar9;
  pcStack_498 = pcVar8;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_4e0,pcVar1);
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd3b0,&uStack_500,pcVar5);
    puStack_4e8 = (undefined1 *)&uStack_500;
    func_0x00010007e5dc(&puStack_4e8);
    if (cStack_4c9 < '\0') {
      __ZdlPv(auStack_4e0[0]);
    }
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar7 = &pcStack_530;
  pcStack_508 = FUN_107b2053c;
  puStack_528 = PTR_PTR_1126f9e40;
  pcStack_530 = pcVar2;
  pcStack_520 = pcVar1;
  pcStack_518 = pcVar3;
  pppuStack_510 = &pppuStack_490;
  _objc_msgSendSuper2(&pcStack_530,PTR_s_init_1125d9248);
  if (ppcVar7 != (char **)0x0) {
    pcVar1 = (char *)ppcVar7;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar7 + 8) = pcVar1;
  }
  return (char *)ppcVar7;
}



/* Entry: 107b1f6ac; end: 107b1f81f;  */

char * FUN_107b1f6ac(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_4b0;
  undefined *puStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  char *pcStack_438;
  undefined8 *puStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_3f8 [24];
  char *pcStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
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
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd180,acStack_80,param_3);
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
  pcVar6 = acStack_100;
  pcStack_88 = FUN_107b1f820;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar3;
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
    pcVar5 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd1d0,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar8 = pcVar6;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar6;
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
  pcStack_108 = FUN_107b1f994;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar8;
  pcVar6 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
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
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd220,pcVar2,param_4);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar14 = 0;
    puVar15 = auStack_178;
    pcVar6 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_107b1fbc4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar2;
  pcVar12 = pcVar6;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = puVar15;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar8;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  pcVar3 = (char *)0x0;
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
    unaff_x24 = auStack_218;
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
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    pcVar7 = "\x01";
    unaff_x23 = acStack_238;
    pcVar10 = acStack_238;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd270,pcVar10,pcVar6);
    pcStack_220 = unaff_x23;
    func_0x00010007e5dc(&pcStack_220);
    lVar14 = 0;
    pcVar3 = (char *)auStack_218;
    pcVar12 = pcVar6;
    do {
      if ((&cStack_1e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcVar11 = acStack_2c0;
  pcStack_248 = FUN_107b1fdf4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar4 = pcVar10;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar3;
  pcStack_268 = pcVar5;
  pcStack_260 = pcVar2;
  pcStack_258 = pcVar1;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(pcVar7);
  plVar13 = (long *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
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
    unaff_x23 = (char *)auStack_2a0;
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
    pcVar8 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd2c0,acStack_2c0,pcVar10);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    pcVar4 = pcVar11;
    pcVar12 = pcVar10;
    pcVar3 = acStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      pcVar4 = pcVar11;
      pcVar12 = pcVar10;
      pcVar3 = acStack_2c0;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_2c8 = FUN_107b1ff68;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar5 = pcVar4;
  pcVar10 = pcVar12;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar3;
  plStack_2e8 = plVar13;
  pcStack_2e0 = pcVar1;
  pcStack_2d8 = pcVar7;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar4);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,pcVar1);
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
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    pcVar2 = "";
    unaff_x23 = acStack_358;
    pcVar5 = acStack_358;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd310,pcVar5,pcVar12);
    pcStack_340 = unaff_x23;
    func_0x00010007e5dc(&pcStack_340);
    lVar14 = 0;
    puVar15 = auStack_338;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_309)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar8);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_107b20198;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar2;
  pcVar6 = pcVar5;
  puStack_3a0 = unaff_x24;
  pcStack_398 = unaff_x23;
  puStack_390 = puVar15;
  pcStack_388 = pcVar1;
  pcStack_380 = pcVar4;
  pcStack_378 = pcVar8;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  puVar15 = (undefined8 *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar13 = *(long **)(pcVar7 + 8);
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
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,pcVar1);
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
    func_0x00010002b838(auStack_3c0,pcVar1);
    acStack_3f8[0] = '\0';
    acStack_3f8[1] = '\0';
    acStack_3f8[2] = '\0';
    acStack_3f8[3] = '\0';
    acStack_3f8[4] = '\0';
    acStack_3f8[5] = '\0';
    acStack_3f8[6] = '\0';
    acStack_3f8[7] = '\0';
    acStack_3f8[8] = '\0';
    acStack_3f8[9] = '\0';
    acStack_3f8[10] = '\0';
    acStack_3f8[0xb] = '\0';
    acStack_3f8[0xc] = '\0';
    acStack_3f8[0xd] = '\0';
    acStack_3f8[0xe] = '\0';
    acStack_3f8[0xf] = '\0';
    acStack_3f8[0x10] = '\0';
    acStack_3f8[0x11] = '\0';
    acStack_3f8[0x12] = '\0';
    acStack_3f8[0x13] = '\0';
    acStack_3f8[0x14] = '\0';
    acStack_3f8[0x15] = '\0';
    acStack_3f8[0x16] = '\0';
    acStack_3f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3f8,auStack_3d8,&lStack_3a8,2);
    pcVar3 = "\x01";
    unaff_x23 = acStack_3f8;
    pcVar6 = acStack_3f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd360,pcVar6,pcVar10);
    pcStack_3e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3e0);
    lVar14 = 0;
    puVar15 = auStack_3d8;
    do {
      if ((&cStack_3a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar8 = pcVar1;
  __Unwind_Resume();
  pcStack_408 = FUN_107b203c8;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_440 = unaff_x24;
  pcStack_438 = unaff_x23;
  puStack_430 = puVar15;
  pcStack_428 = pcVar1;
  pcStack_420 = pcVar5;
  pcStack_418 = pcVar2;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(pcVar3);
  if (pcVar8 != (char *)0x0) {
    plVar13 = *(long **)(pcVar8 + 8);
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
    func_0x00010002b838(auStack_460,pcVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd3b0,&uStack_480,pcVar6);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
    }
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar9 = &pcStack_4b0;
  pcStack_488 = FUN_107b2053c;
  puStack_4a8 = PTR_PTR_1126f9e40;
  pcStack_4b0 = pcVar2;
  pcStack_4a0 = pcVar1;
  pcStack_498 = pcVar3;
  pppuStack_490 = &pppuStack_410;
  _objc_msgSendSuper2(&pcStack_4b0,PTR_s_init_1125d9248);
  if (ppcVar9 != (char **)0x0) {
    pcVar1 = (char *)ppcVar9;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar9 + 8) = pcVar1;
  }
  return (char *)ppcVar9;
}



/* Entry: 107b1f820; end: 107b1f993;  */

char * FUN_107b1f820(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_430;
  undefined *puStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  char *pcStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  char *pcStack_318;
  undefined8 *puStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
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
  pcVar4 = param_3;
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
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd1d0,acStack_80,param_3);
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
  pcStack_88 = FUN_107b1f994;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar4;
  pcVar5 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
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
    pcVar8 = "";
    unaff_x23 = acStack_118;
    pcVar9 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd220,pcVar9,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    puVar15 = auStack_f8;
    pcVar5 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_107b1fbc4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar8;
  pcVar10 = pcVar9;
  pcVar12 = pcVar5;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar15;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  pcVar1 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
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
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar6 = "\x01";
    unaff_x23 = acStack_1b8;
    pcVar10 = acStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd270,pcVar10,pcVar5);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar14 = 0;
    pcVar1 = (char *)auStack_198;
    pcVar12 = pcVar5;
    do {
      if ((&cStack_169)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar4 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_240;
  pcStack_1c8 = FUN_107b1fdf4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar3 = pcVar10;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar1;
  pcStack_1e8 = pcVar4;
  pcStack_1e0 = pcVar9;
  pcStack_1d8 = pcVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(pcVar6);
  plVar13 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
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
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    pcVar2 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd2c0,acStack_240,pcVar10);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar3 = pcVar11;
    pcVar12 = pcVar10;
    pcVar1 = acStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar3 = pcVar11;
      pcVar12 = pcVar10;
      pcVar1 = acStack_240;
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_248 = FUN_107b1ff68;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar9 = pcVar3;
  pcVar10 = pcVar12;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar1;
  plStack_268 = plVar13;
  pcStack_260 = pcVar4;
  pcStack_258 = pcVar6;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar15 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar1);
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
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    pcVar8 = "";
    unaff_x23 = acStack_2d8;
    pcVar9 = acStack_2d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd310,pcVar9,pcVar12);
    pcStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar14 = 0;
    puVar15 = auStack_2b8;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_2e8 = FUN_107b20198;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar8;
  pcVar5 = pcVar9;
  puStack_320 = unaff_x24;
  pcStack_318 = unaff_x23;
  puStack_310 = puVar15;
  pcStack_308 = pcVar1;
  pcStack_300 = pcVar3;
  pcStack_2f8 = pcVar2;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(pcVar8);
  _objc_retain(pcVar9);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_358;
    func_0x00010002b838(auStack_358,pcVar1);
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
    func_0x00010002b838(auStack_340,pcVar1);
    acStack_378[0] = '\0';
    acStack_378[1] = '\0';
    acStack_378[2] = '\0';
    acStack_378[3] = '\0';
    acStack_378[4] = '\0';
    acStack_378[5] = '\0';
    acStack_378[6] = '\0';
    acStack_378[7] = '\0';
    acStack_378[8] = '\0';
    acStack_378[9] = '\0';
    acStack_378[10] = '\0';
    acStack_378[0xb] = '\0';
    acStack_378[0xc] = '\0';
    acStack_378[0xd] = '\0';
    acStack_378[0xe] = '\0';
    acStack_378[0xf] = '\0';
    acStack_378[0x10] = '\0';
    acStack_378[0x11] = '\0';
    acStack_378[0x12] = '\0';
    acStack_378[0x13] = '\0';
    acStack_378[0x14] = '\0';
    acStack_378[0x15] = '\0';
    acStack_378[0x16] = '\0';
    acStack_378[0x17] = '\0';
    func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
    pcVar4 = "\x01";
    unaff_x23 = acStack_378;
    pcVar5 = acStack_378;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd360,pcVar5,pcVar10);
    pcStack_360 = unaff_x23;
    func_0x00010007e5dc(&pcStack_360);
    lVar14 = 0;
    puVar15 = auStack_358;
    do {
      if ((&cStack_329)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_107b203c8;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3c0 = unaff_x24;
  pcStack_3b8 = unaff_x23;
  puStack_3b0 = puVar15;
  pcStack_3a8 = pcVar1;
  pcStack_3a0 = pcVar9;
  pcStack_398 = pcVar8;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_3e0,pcVar1);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd3b0,&uStack_400,pcVar5);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    if (cStack_3c9 < '\0') {
      __ZdlPv(auStack_3e0[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar7 = &pcStack_430;
  pcStack_408 = FUN_107b2053c;
  puStack_428 = PTR_PTR_1126f9e40;
  pcStack_430 = pcVar2;
  pcStack_420 = pcVar1;
  pcStack_418 = pcVar4;
  pppuStack_410 = &pppuStack_390;
  _objc_msgSendSuper2(&pcStack_430,PTR_s_init_1125d9248);
  if (ppcVar7 != (char **)0x0) {
    pcVar1 = (char *)ppcVar7;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar7 + 8) = pcVar1;
  }
  return (char *)ppcVar7;
}



/* Entry: 107b1f994; end: 107b1fbc3;  */

char * FUN_107b1f994(long param_1,char *param_2,char *param_3,char *param_4)

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
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_3b0;
  undefined *puStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  char *pcStack_338;
  undefined8 *puStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_2f8 [24];
  char *pcStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  char *pcStack_298;
  undefined8 *puStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
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
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar15 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
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
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd220,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    puVar15 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
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
  pcStack_a8 = FUN_107b1fbc4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar6 = pcVar7;
  pcVar12 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar15;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  pcVar2 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
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
    pcVar9 = "\x01";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd270,pcVar6,pcVar4);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar13 = 0;
    pcVar2 = (char *)auStack_118;
    pcVar12 = pcVar4;
    do {
      if ((&cStack_e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_1c0;
  pcStack_148 = FUN_107b1fdf4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar9;
  pcVar10 = pcVar6;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = (undefined8 *)pcVar2;
  pcStack_168 = pcVar4;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar9);
  plVar14 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x23 = (char *)auStack_1a0;
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
    pcVar3 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd2c0,acStack_1c0,pcVar6);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar10 = pcVar11;
    pcVar12 = pcVar6;
    pcVar2 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar10 = pcVar11;
      pcVar12 = pcVar6;
      pcVar2 = acStack_1c0;
    }
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_107b1ff68;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar3;
  pcVar4 = pcVar10;
  pcVar5 = pcVar12;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar2;
  plStack_1e8 = plVar14;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar9;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(pcVar3);
  _objc_retain(pcVar10);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,pcVar1);
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
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
    pcVar7 = "";
    unaff_x23 = acStack_258;
    pcVar4 = acStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd310,pcVar4,pcVar12);
    pcStack_240 = unaff_x23;
    func_0x00010007e5dc(&pcStack_240);
    lVar13 = 0;
    puVar15 = auStack_238;
    pcVar5 = pcVar12;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar3);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_107b20198;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar9 = pcVar4;
  puStack_2a0 = unaff_x24;
  pcStack_298 = unaff_x23;
  puStack_290 = puVar15;
  pcStack_288 = pcVar1;
  pcStack_280 = pcVar10;
  pcStack_278 = pcVar3;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_2d8;
    func_0x00010002b838(auStack_2d8,pcVar1);
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
    func_0x00010002b838(auStack_2c0,pcVar1);
    acStack_2f8[0] = '\0';
    acStack_2f8[1] = '\0';
    acStack_2f8[2] = '\0';
    acStack_2f8[3] = '\0';
    acStack_2f8[4] = '\0';
    acStack_2f8[5] = '\0';
    acStack_2f8[6] = '\0';
    acStack_2f8[7] = '\0';
    acStack_2f8[8] = '\0';
    acStack_2f8[9] = '\0';
    acStack_2f8[10] = '\0';
    acStack_2f8[0xb] = '\0';
    acStack_2f8[0xc] = '\0';
    acStack_2f8[0xd] = '\0';
    acStack_2f8[0xe] = '\0';
    acStack_2f8[0xf] = '\0';
    acStack_2f8[0x10] = '\0';
    acStack_2f8[0x11] = '\0';
    acStack_2f8[0x12] = '\0';
    acStack_2f8[0x13] = '\0';
    acStack_2f8[0x14] = '\0';
    acStack_2f8[0x15] = '\0';
    acStack_2f8[0x16] = '\0';
    acStack_2f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2f8,auStack_2d8,&lStack_2a8,2);
    pcVar2 = "\x01";
    unaff_x23 = acStack_2f8;
    pcVar9 = acStack_2f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd360,pcVar9,pcVar5);
    pcStack_2e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2e0);
    lVar13 = 0;
    puVar15 = auStack_2d8;
    do {
      if ((&cStack_2a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_107b203c8;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_340 = unaff_x24;
  pcStack_338 = unaff_x23;
  puStack_330 = puVar15;
  pcStack_328 = pcVar1;
  pcStack_320 = pcVar4;
  pcStack_318 = pcVar7;
  pppuStack_310 = &pppuStack_270;
  _objc_retain(pcVar2);
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
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
    func_0x00010002b838(auStack_360,pcVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109fd3b0,&uStack_380,pcVar9);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_3b0;
  pcStack_388 = FUN_107b2053c;
  puStack_3a8 = PTR_PTR_1126f9e40;
  pcStack_3b0 = pcVar7;
  pcStack_3a0 = pcVar1;
  pcStack_398 = pcVar2;
  pppuStack_390 = &pppuStack_310;
  _objc_msgSendSuper2(&pcStack_3b0,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 107b1fbc4; end: 107b1fdf3;  */

char * FUN_107b1fbc4(long param_1,char *param_2,char *param_3,char *param_4)

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
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_310;
  undefined *puStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  char *pcStack_298;
  undefined8 *puStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
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
  pcVar5 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
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
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd270,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar7 = param_4;
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
  pcVar6 = acStack_120;
  pcStack_a8 = FUN_107b1fdf4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar10 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
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
    pcVar9 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd2c0,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar10 = pcVar6;
    pcVar7 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar10 = pcVar6;
      pcVar7 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_107b1ff68;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar9;
  pcVar3 = pcVar10;
  pcVar11 = pcVar7;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar13;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
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
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
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
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar2 = "";
    unaff_x23 = acStack_1b8;
    pcVar3 = acStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd310,pcVar3,pcVar7);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar12 = 0;
    puVar14 = auStack_198;
    pcVar11 = pcVar7;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar9);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_107b20198;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar4 = pcVar3;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = puVar14;
  pcStack_1e8 = pcVar1;
  pcStack_1e0 = pcVar10;
  pcStack_1d8 = pcVar9;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar14 = (undefined8 *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar13 = *(long **)(pcVar7 + 8);
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
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,pcVar1);
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
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
    pcVar5 = "\x01";
    unaff_x23 = acStack_258;
    pcVar4 = acStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd360,pcVar4,pcVar11);
    pcStack_240 = unaff_x23;
    func_0x00010007e5dc(&pcStack_240);
    lVar12 = 0;
    puVar14 = auStack_238;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_107b203c8;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x24;
  pcStack_298 = unaff_x23;
  puStack_290 = puVar14;
  pcStack_288 = pcVar1;
  pcStack_280 = pcVar3;
  pcStack_278 = pcVar2;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(pcVar5);
  if (pcVar7 != (char *)0x0) {
    plVar13 = *(long **)(pcVar7 + 8);
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
    func_0x00010002b838(auStack_2c0,pcVar1);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd3b0,&uStack_2e0,pcVar4);
    puStack_2c8 = (undefined1 *)&uStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_310;
  pcStack_2e8 = FUN_107b2053c;
  puStack_308 = PTR_PTR_1126f9e40;
  pcStack_310 = pcVar4;
  pcStack_300 = pcVar1;
  pcStack_2f8 = pcVar5;
  pppuStack_2f0 = &pppuStack_270;
  _objc_msgSendSuper2(&pcStack_310,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 107b1fdf4; end: 107b1ff67;  */

char * FUN_107b1fdf4(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
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
  pcVar4 = param_3;
  _objc_retain(param_2);
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
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd2c0,acStack_80,param_3);
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
  pcStack_88 = FUN_107b1ff68;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar4;
  pcVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar13 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
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
    pcVar8 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd310,pcVar8,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    pcVar10 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_107b20198;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar9 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar13;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
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
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar7 = "\x01";
    unaff_x23 = acStack_1b8;
    pcVar9 = acStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd360,pcVar9,pcVar10);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar12 = 0;
    puVar13 = auStack_198;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1c8 = FUN_107b203c8;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = puVar13;
  pcStack_1e8 = pcVar1;
  pcStack_1e0 = pcVar8;
  pcStack_1d8 = pcVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    plVar11 = *(long **)(pcVar4 + 8);
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
    func_0x00010002b838(auStack_220,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd3b0,&uStack_240,pcVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_270;
  pcStack_248 = FUN_107b2053c;
  puStack_268 = PTR_PTR_1126f9e40;
  pcStack_270 = pcVar4;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar7;
  pppuStack_250 = &pppuStack_1d0;
  _objc_msgSendSuper2(&pcStack_270,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 107b1ff68; end: 107b20197;  */

char * FUN_107b1ff68(long param_1,char *param_2,char *param_3,undefined8 param_4)

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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd310,pcVar4,param_4);
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
  pcStack_a8 = FUN_107b20198;
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
    pcVar6 = "\x01";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd360,pcVar7,uVar8);
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
  pcStack_148 = FUN_107b203c8;
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
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd3b0,&uStack_1c0,pcVar7);
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
  pcStack_1c8 = FUN_107b2053c;
  puStack_1e8 = PTR_PTR_1126f9e40;
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



/* Entry: 107b20198; end: 107b203c7;  */

char * FUN_107b20198(long param_1,char *param_2,char *param_3,undefined8 param_4)

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
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fd360,pcVar4,param_4);
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
  pcStack_a8 = FUN_107b203c8;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fd3b0,&uStack_120,pcVar4);
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
  pcStack_128 = FUN_107b2053c;
  puStack_148 = PTR_PTR_1126f9e40;
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



/* Entry: 107b203c8; end: 107b2053b;  */

char * FUN_107b203c8(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fd3b0,&uStack_80,param_3);
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
  pcStack_88 = FUN_107b2053c;
  puStack_a8 = PTR_PTR_1126f9e40;
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



/* Entry: 107b2053c; end: 107b205af; -[SCGrapheneSystemNotifMainAppMetric2 init] */

undefined1 * FUN_107b2053c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b205b0; end: 107b207df;  */

void FUN_107b205b0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [24];
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
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
  puVar2 = param_3;
  puVar6 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_1109fd510;
    unaff_x23 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd510,puVar6,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar12 = 0;
    puVar5 = auStack_78;
    puVar10 = param_5;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_107b207e0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar9 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar5);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = (undefined8 *)&UNK_1109fd560;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd560,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar9 = puVar7;
    puVar10 = puVar6;
    puVar5 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar7;
      puVar10 = puVar6;
      puVar5 = &uStack_120;
    }
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_107b20954;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar4 = puVar9;
  puVar11 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar5;
  plStack_148 = plVar13;
  puStack_140 = puVar6;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar7[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f445362;
    }
    else {
      unaff_x23 = puVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,unaff_x23);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar3 = (undefined8 *)&UNK_1109fd5b0;
    puVar9 = &uStack_1b8;
    puVar4 = &uStack_1b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd5b0,puVar4,puVar10);
    puStack_1a0 = puVar9;
    func_0x00010007e5dc(&puStack_1a0);
    lVar12 = 0;
    puVar2 = auStack_198;
    puVar11 = puVar10;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_1c8 = FUN_107b20b3c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar10 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar9;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar6;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar3);
  if (puVar7 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_238,puVar2);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar4 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_220,puVar1);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar5 = (undefined8 *)&UNK_1109fd600;
    puVar10 = &uStack_258;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fd600,puVar10,puVar11);
    puStack_240 = &uStack_258;
    func_0x00010007e5dc(&puStack_240);
    lVar12 = 0;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_107b20b3c(puVar2,puVar5,puVar10,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107b207e0; end: 107b20953;  */

void FUN_107b207e0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
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
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_1109fd560;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fd560,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_5 = param_4;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_107b20954;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar8 = puVar7;
  puVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar13 = (undefined1 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f445362;
    }
    else {
      unaff_x23 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,unaff_x23);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_e0,puVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = (undefined8 *)&UNK_1109fd5b0;
    puVar7 = &uStack_118;
    puVar8 = &uStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fd5b0,puVar8,param_5);
    puStack_100 = puVar7;
    func_0x00010007e5dc(&puStack_100);
    lVar11 = 0;
    puVar13 = auStack_f8;
    puVar10 = param_5;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_107b20b3c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar9 = puVar8;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar7;
  puStack_148 = puVar13;
  puStack_140 = puVar3;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar4 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_198,puVar2);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar8 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar6 = (undefined8 *)&UNK_1109fd600;
    puVar9 = &uStack_1b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109fd600,puVar9,puVar10);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar11 = 0;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  _objc_retain(puVar6);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_107b20b3c(puVar2,puVar6,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107b20954; end: 107b20b3b;  */

void FUN_107b20954(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar5 = param_4;
  uVar7 = param_5;
  _objc_retain(param_3);
  puVar10 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      unaff_x23 = &UNK_10f445362;
    }
    else {
      unaff_x23 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar3 = &UNK_10f44539e;
    if ((int)param_4 == 0) {
      puVar3 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_1109fd5b0;
    param_4 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109fd5b0,puVar5,param_5);
    puStack_80 = param_4;
    func_0x00010007e5dc(&puStack_80);
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
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_107b20b3c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar6 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_4;
  puStack_c8 = puVar10;
  puStack_c0 = puVar1;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_118,puVar1);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_100,puVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar4 = &UNK_1109fd600;
    puVar6 = &uStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109fd600,puVar6,uVar7);
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
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar1 != (undefined *)0x0) {
    FUN_107b20b3c(puVar1,puVar4,puVar6,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107b20b3c; end: 107b20d23;  */

void FUN_107b20b3c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = &UNK_10f44539e;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109fd600;
    puVar3 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109fd600,puVar3,param_5);
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
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107b20b3c(puVar2,puVar1,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b20d24; end: 107b20d9f;  */

void FUN_107b20d24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_107b20b3c(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b20da0; end: 107b20f13;  */

void FUN_107b20da0(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fd650;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd650,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107b20f14;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f445362;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_1109fd6a0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd6a0,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar8;
    param_5 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar8;
      param_5 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_107b21088;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar3 = puVar5;
  puVar10 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_1109fd6f0;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd6f0,puVar3,param_5);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar12 = 0;
    puVar8 = auStack_178;
    puVar10 = param_5;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_107b212b8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    puVar2 = &UNK_10f44539e;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar7 = &UNK_1109fd740;
    puVar9 = &uStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd740,puVar9,puVar10);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar9);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b212b8(puVar5,puVar7,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107b20f14; end: 107b21087;  */

void FUN_107b20f14(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fd6a0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd6a0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_107b21088;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar9 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f445362;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_1109fd6f0;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd6f0,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    puVar9 = param_5;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_107b212b8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar6 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_1109fd740;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd740,puVar8,puVar9);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar11 = 0;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b212b8(puVar5,puVar7,puVar8,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107b21088; end: 107b212b7;  */

void FUN_107b21088(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
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
  puVar1 = param_3;
  puVar2 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109fd6f0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd6f0,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar5 = auStack_78;
    uVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_107b212b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    puVar3 = &UNK_10f44539e;
    if ((int)puVar1 == 0) {
      puVar3 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_1109fd740;
    puVar7 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd740,puVar7,uVar8);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar7);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b212b8(puVar5,puVar6,puVar7,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107b212b8; end: 107b214a3;  */

void FUN_107b212b8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
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
  puVar3 = param_3;
  puVar1 = param_4;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    puVar3 = &UNK_10f44539e;
    if ((int)param_3 == 0) {
      puVar3 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_1109fd740;
    puVar1 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109fd740,puVar1,param_5);
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
  puVar2 = param_4;
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
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_107b212b8(puVar2,puVar3,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b214a4; end: 107b2151f;  */

void FUN_107b214a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_107b212b8(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b21520; end: 107b21693;  */

void FUN_107b21520(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fd790;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd790,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_107b21694;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f445362;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_1109fd7e0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd7e0,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar8;
    param_5 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar8;
      param_5 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_107b21808;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar3 = puVar5;
  puVar10 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_1109fd830;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd830,puVar3,param_5);
    puStack_180 = unaff_x23;
    func_0x00010007e5dc(&puStack_180);
    lVar12 = 0;
    puVar8 = auStack_178;
    puVar10 = param_5;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_107b21a38;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar5;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    puVar2 = &UNK_10f44539e;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_218,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_200,puVar5);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar7 = &UNK_1109fd880;
    puVar9 = &uStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fd880,puVar9,puVar10);
    puStack_220 = &uStack_238;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar9);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b21a38(puVar5,puVar7,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107b21694; end: 107b21807;  */

void FUN_107b21694(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fd7e0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd7e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_107b21808;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar9 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f445362;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_1109fd830;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd830,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    puVar9 = param_5;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_107b21a38;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    puVar1 = &UNK_10f44539e;
    if ((int)puVar6 == 0) {
      puVar1 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_198,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_180,puVar5);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar7 = &UNK_1109fd880;
    puVar8 = &uStack_1b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd880,puVar8,puVar9);
    puStack_1a0 = &uStack_1b8;
    func_0x00010007e5dc(&puStack_1a0);
    lVar11 = 0;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar8);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b21a38(puVar5,puVar7,puVar8,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107b21808; end: 107b21a37;  */

void FUN_107b21808(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
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
  puVar1 = param_3;
  puVar2 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f445362;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109fd830;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd830,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar5 = auStack_78;
    uVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_107b21a38;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    puVar3 = &UNK_10f44539e;
    if ((int)puVar1 == 0) {
      puVar3 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_1109fd880;
    puVar7 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1109fd880,puVar7,uVar8);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar7);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_107b21a38(puVar5,puVar6,puVar7,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107b21a38; end: 107b21c23;  */

void FUN_107b21a38(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
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
  puVar3 = param_3;
  puVar1 = param_4;
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    puVar3 = &UNK_10f44539e;
    if ((int)param_3 == 0) {
      puVar3 = &UNK_10f4453a3;
    }
    func_0x00010002b838(auStack_78,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f445362;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_1109fd880;
    puVar1 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1109fd880,puVar1,param_5);
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
  puVar2 = param_4;
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
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_107b21a38(puVar2,puVar3,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b21c24; end: 107b21c9f;  */

void FUN_107b21c24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_107b21a38(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b21ca0; end: 107b21d1b;  */

undefined * FUN_107b21ca0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727518 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eadcb8,
                        &UNK_10dee1468,&UNK_10dee14a4,6,FUN_107b21d1c,0);
    do {
      if (puRam0000000113727518 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727518;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727518,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727518 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727518;
}



/* Entry: 107b21d1c; end: 107b21d27;  */

bool FUN_107b21d1c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 107b21d28; end: 107b21da3;  */

undefined * FUN_107b21d28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727520 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eadcd8,
                        &UNK_10dee14bc,&UNK_10dee1520,6,FUN_107b21da4,0);
    do {
      if (puRam0000000113727520 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727520;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727520,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727520 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727520;
}



/* Entry: 107b21da4; end: 107b21daf;  */

bool FUN_107b21da4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 107b21db0; end: 107b21e3f;  */

undefined * FUN_107b21db0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727528 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eadcf8,
                        &UNK_10dee1538,&UNK_10dee1558,3,FUN_107b21e40,0,&UNK_10dee1564);
    do {
      if (puRam0000000113727528 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727528;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727528,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727528 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727528;
}



/* Entry: 107b21e40; end: 107b21e4b;  */

bool FUN_107b21e40(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 107b21e4c; end: 107b21eb3; +[SCIDIosNotificationPermissionsRequest descriptor] */

void FUN_107b21e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71960,
                        &PTR____CFConstantStringClassReference_110eadd18,&PTR_DAT_11323ff58,
                        &PTR_DAT_113240050,7,0x20,0x1c);
    puRam0000000113727530 = puVar1;
  }
  return;
}



/* Entry: 107b21eb4; end: 107b21f1b; +[SCIDPermissionSettingsRequest descriptor] */

void FUN_107b21eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b719b0,
                        &PTR____CFConstantStringClassReference_110eadd38,&PTR_DAT_11323ff58,
                        &PTR_DAT_113240130,0xf,0x18,0x1c);
    puRam0000000113727538 = puVar1;
  }
  return;
}



/* Entry: 107b21f1c; end: 107b21f83; +[SCIDPermissionSettingsResponse descriptor] */

void FUN_107b21f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71a00,
                        &PTR____CFConstantStringClassReference_110eadd58,&PTR_DAT_11323ff58,
                        &PTR_s_success_11323ff70,1,4,0x1c);
    puRam0000000113727540 = puVar1;
  }
  return;
}



/* Entry: 107b21f84; end: 107b21feb; +[SCIDUpdatePermissionSettingsRequest descriptor] */

void FUN_107b21f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71a50,
                        &PTR____CFConstantStringClassReference_110eadd78,&PTR_DAT_11323ff58,
                        &PTR_DAT_1132404f0,0x14,0x38,0x1c);
    puRam0000000113727548 = puVar1;
  }
  return;
}



/* Entry: 107b21fec; end: 107b22053; +[SCIDUpdatePermissionSettingsResponse descriptor] */

void FUN_107b21fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71aa0,
                        &PTR____CFConstantStringClassReference_110eadd98,&PTR_DAT_11323ff58,
                        &PTR_s_success_11323ff90,1,4,0x1c);
    puRam0000000113727550 = puVar1;
  }
  return;
}



/* Entry: 107b22054; end: 107b220bb; +[SCIDReadPermissionSettingsRequest descriptor] */

void FUN_107b22054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71af0,
                        &PTR____CFConstantStringClassReference_110eaddb8,&PTR_DAT_11323ff58,
                        &PTR_s_userId_11323ffb0,1,0x10,0x1c);
    puRam0000000113727558 = puVar1;
  }
  return;
}



/* Entry: 107b220bc; end: 107b22123; +[SCIDDeletePermissionSettingsResponse descriptor] */

void FUN_107b220bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71b40,
                        &PTR____CFConstantStringClassReference_110eaddd8,&PTR_DAT_11323ff58,
                        &PTR_s_success_11323ffd0,1,4,0x1c);
    puRam0000000113727560 = puVar1;
  }
  return;
}



/* Entry: 107b22124; end: 107b2218b; +[SCIDDeletePermissionSettingsRequest descriptor] */

void FUN_107b22124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71b90,
                        &PTR____CFConstantStringClassReference_110eaddf8,&PTR_DAT_11323ff58,
                        &PTR_s_userId_11323fff0,1,0x10,0x1c);
    puRam0000000113727568 = puVar1;
  }
  return;
}



/* Entry: 107b2218c; end: 107b22217; +[SCIDReadPermissionSettingsResponse descriptor] */

undefined * FUN_107b2218c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71be0,
                        &PTR____CFConstantStringClassReference_110eade18,&PTR_DAT_11323ff58,
                        &PTR_s_userId_113240310,0xf,0x18,0x1c);
    func_0x00010c229040();
    puRam0000000113727570 = puVar1;
  }
  return puRam0000000113727570;
}



/* Entry: 107b22218; end: 107b2227f; +[SCIDBatchReadPermissionSettingsRequest descriptor] */

void FUN_107b22218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71c30,
                        &PTR____CFConstantStringClassReference_110eade38,&PTR_DAT_11323ff58,
                        &PTR_s_userIdsArray_113240010,1,0x10,0x1c);
    puRam0000000113727578 = puVar1;
  }
  return;
}



/* Entry: 107b22280; end: 107b222e7; +[SCIDBatchReadPermissionSettingsResponse descriptor] */

void FUN_107b22280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71c80,
                        &PTR____CFConstantStringClassReference_110eade58,&PTR_DAT_11323ff58,
                        &PTR_DAT_113240030,1,0x10,0x1c);
    puRam0000000113727580 = puVar1;
  }
  return;
}



/* Entry: 107b222e8; end: 107b2234f; +[SCIDNotificationChannelGroup descriptor] */

void FUN_107b222e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71d20,
                        &PTR____CFConstantStringClassReference_110eade78,&PTR_DAT_113240770,
                        &PTR_DAT_113240788,2,0x10,0x1c);
    puRam0000000113727588 = puVar1;
  }
  return;
}



/* Entry: 107b22350; end: 107b223b7; +[SCIDNotificationChannel descriptor] */

void FUN_107b22350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71d70,
                        &PTR____CFConstantStringClassReference_110eade98,&PTR_DAT_113240770,
                        &PTR_DAT_113240808,8,0x20,0x1c);
    puRam0000000113727590 = puVar1;
  }
  return;
}



/* Entry: 107b223b8; end: 107b2241f; +[SCIDAndroidNotificationPermissionsRequest descriptor] */

void FUN_107b223b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b71dc0,
                        &PTR____CFConstantStringClassReference_110eadeb8,&PTR_DAT_113240770,
                        &PTR_DAT_1132407c8,2,0x18,0x1c);
    puRam0000000113727598 = puVar1;
  }
  return;
}



/* Entry: 107b22420; end: 107b2242b; +[SCDiscoverFeedSubscribeRequestHandler announcerIdentifier] */

undefined ** FUN_107b22420(void)

{
  return &PTR____CFConstantStringClassReference_110eaded8;
}



/* Entry: 107b2242c; end: 107b224cf; -[SCDiscoverFeedSubscribeRequestHandler initWithCreatorSettingsMutator:lazyDiscoverFeedEventsLogger:] */

undefined1 *
FUN_107b2242c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9e48;
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



/* Entry: 107b224d0; end: 107b2376f; -[SCDiscoverFeedSubscribeRequestHandler subscribeToDiscoverFeedStory:shouldSubscribe:shouldLogSubscribeEvent:success:failure:interactionContext:triggeringSection:] */

void FUN_107b224d0(long param_1,undefined8 param_2,undefined **param_3,uint param_4,
                  undefined1 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuStack_498;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107b23770;
  puStack_b8 = &UNK_1109fda00;
  uStack_88 = param_5;
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_3);
  uStack_90 = param_9;
  ppuStack_b0 = param_3;
  uStack_98 = param_8;
  _objc_retain(param_6);
  ppuVar1 = &puStack_d0;
  uStack_a8 = param_6;
  _objc_retainBlock();
  ppuVar2 = param_3;
  func_0x00010c25b720();
  ppuVar6 = ppuVar1;
  if (ppuVar2 == (undefined **)0x3) {
    ppuVar2 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_498 = ppuVar2;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuStack_498 != (undefined **)0x0) {
      uVar13 = *(undefined8 *)(param_1 + 8);
      if (param_4 == 0) {
        ppuVar2 = ppuStack_498;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126b4028;
        func_0x00010bf822c0(PTR_PTR_1126b4028);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126c55c0;
        func_0x00010c12ff40(PTR_PTR_1126c55c0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar1);
        uVar3 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        uVar4 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f9260(uVar13);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(ppuVar2);
        _objc_release(param_7);
      }
      else {
        ppuVar2 = ppuStack_498;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuStack_498;
        func_0x00010bf24ec0(ppuStack_498);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuStack_498;
        func_0x00010c292e20(ppuStack_498);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuStack_498;
        func_0x00010bf85d80(ppuStack_498);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07a6a0(ppuStack_498);
        puVar11 = PTR_PTR_1126c55c0;
        func_0x00010c12ff40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar1);
        uVar3 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        uVar4 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f92a0(uVar13);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(puVar11);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar5);
        _objc_release(ppuVar2);
        _objc_release(param_7);
      }
      goto LAB_107b22c8c;
    }
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c25b720();
    if (ppuVar2 != (undefined **)0xe) {
      ppuVar2 = param_3;
      func_0x00010c25b720();
      if (ppuVar2 == (undefined **)0x2) {
        ppuVar2 = param_3;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_498 = ppuVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuStack_498 == (undefined **)0x0) goto LAB_107b23438;
        uVar4 = *(undefined8 *)(param_1 + 8);
        ppuVar2 = ppuStack_498;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11b1e0();
        func_0x00010c14de00(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b4028;
        func_0x00010bf822c0(PTR_PTR_1126b4028);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar1);
        uVar13 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        uVar3 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f9260(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(ppuVar2);
        _objc_release(param_7);
      }
      else {
        ppuVar2 = param_3;
        func_0x00010c25b720();
        if (ppuVar2 == (undefined **)0xb) {
          ppuVar2 = param_3;
          func_0x00010c259560();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_498 = ppuVar2;
          func_0x00010afefbe8();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (ppuStack_498 == (undefined **)0x0) goto LAB_107b23438;
          uVar4 = *(undefined8 *)(param_1 + 8);
          ppuVar2 = ppuStack_498;
          func_0x00010c11af80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11b1e0();
          func_0x00010c14de00(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126b4028;
          func_0x00010bf822c0(PTR_PTR_1126b4028);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppuVar1);
          uVar13 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_7);
          uVar3 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f9260(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(ppuVar2);
          _objc_release(param_7);
        }
        else {
          ppuVar2 = param_3;
          func_0x00010c25b720();
          if (ppuVar2 == (undefined **)0x5) {
            ppuVar2 = param_3;
            func_0x00010c259560();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_498 = ppuVar2;
            func_0x00010afef744();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            if (ppuStack_498 == (undefined **)0x0) {
              ppuStack_498 = (undefined **)0x0;
              goto LAB_107b23434;
            }
            ppuVar2 = ppuStack_498;
            func_0x00010bef4a60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010bf5b640();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar5 == (undefined **)0x0) {
              ppuVar7 = ppuStack_498;
              func_0x00010bef4a60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar7;
              func_0x00010bf20fa0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar7);
            }
            else {
              _objc_retain(ppuVar5);
              ppuVar6 = ppuVar5;
            }
            _objc_release(ppuVar5);
            _objc_release(ppuVar2);
            ppuVar2 = ppuVar6;
            func_0x00010bfe44e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010c08fa60();
            if (ppuVar5 == (undefined **)0x0) {
              _objc_release(ppuVar2);
LAB_107b23428:
              _objc_release(ppuVar6);
              goto LAB_107b23434;
            }
            uVar13 = *(undefined8 *)(param_1 + 8);
            if (param_4 == 0) {
              puVar11 = PTR_PTR_1126b4028;
              func_0x00010bf822c0(PTR_PTR_1126b4028);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(ppuVar1);
              uVar3 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_7);
              uVar4 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f9260(uVar13);
              _objc_release(uVar4);
              _objc_release(uVar3);
              _objc_release(puVar11);
              _objc_release(param_7);
            }
            else {
              ppuVar5 = ppuVar6;
              func_0x00010c116a20(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuStack_498;
              func_0x00010bf20f80(ppuStack_498);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(ppuVar1);
              uVar3 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_7);
              uVar4 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f92a0(uVar13);
              _objc_release(uVar4);
              _objc_release(uVar3);
              _objc_release(ppuVar7);
              _objc_release(ppuVar5);
              _objc_release(param_7);
            }
            _objc_release(ppuVar1);
          }
          else {
            ppuVar2 = param_3;
            func_0x00010c25b720();
            if (ppuVar2 != (undefined **)0xd) goto LAB_107b23438;
            ppuVar2 = param_3;
            func_0x00010c259560();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_498 = ppuVar2;
            func_0x00010afef86c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            ppuVar2 = ppuStack_498;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar5;
            func_0x00010bf5b480();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
            _objc_release(ppuVar2);
            ppuVar2 = ppuVar6;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010c08fa60();
            _objc_release(ppuVar2);
            if (ppuVar5 == (undefined **)0x0) goto LAB_107b23428;
            uVar13 = *(undefined8 *)(param_1 + 8);
            ppuVar2 = ppuVar1;
            if (param_4 == 0) {
              ppuVar5 = ppuVar6;
              func_0x00010c2923e0(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = PTR_PTR_1126b4028;
              func_0x00010bf822c0(PTR_PTR_1126b4028);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = PTR_PTR_1126c55c0;
              func_0x00010c12ff40(PTR_PTR_1126c55c0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(ppuVar1);
              uVar3 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_7);
              uVar4 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f9260(uVar13);
              _objc_release(uVar4);
              _objc_release(uVar3);
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(ppuVar5);
              _objc_release(param_7);
            }
            else {
              ppuVar5 = ppuVar6;
              func_0x00010c2923e0(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuStack_498;
              func_0x00010bf25140();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = ppuVar6;
              func_0x00010c292e20(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuStack_498;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar9;
              if (ppuVar9 == (undefined **)0x0) {
                ppuVar10 = ppuVar6;
                func_0x00010bf85d80(ppuVar6);
                _objc_retainAutoreleasedReturnValue();
              }
              puVar11 = PTR_PTR_1126c55c0;
              func_0x00010c12ff40();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(ppuVar1);
              uVar3 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_7);
              uVar4 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f92a0(uVar13);
              _objc_release(uVar4);
              _objc_release(uVar3);
              _objc_release(puVar11);
              if (ppuVar9 == (undefined **)0x0) {
                _objc_release(ppuVar10);
              }
              _objc_release(ppuVar9);
              _objc_release(ppuVar8);
              _objc_release(ppuVar7);
              _objc_release(ppuVar5);
              _objc_release(param_7);
            }
          }
          _objc_release(ppuVar2);
        }
      }
LAB_107b22c8c:
      _objc_release(ppuVar6);
      _objc_release(ppuStack_498);
      goto LAB_107b23454;
    }
    ppuVar2 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_498 = ppuVar2;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuStack_498 != (undefined **)0x0) {
      ppuVar2 = ppuStack_498;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar2;
      func_0x00010c08fa60();
      _objc_release(ppuVar2);
      if (ppuVar5 != (undefined **)0x0) {
        uVar13 = *(undefined8 *)(param_1 + 8);
        if (param_4 == 0) {
          ppuVar2 = ppuStack_498;
          func_0x00010c2923e0(ppuStack_498);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126b4028;
          func_0x00010bf822c0(PTR_PTR_1126b4028);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126c55c0;
          func_0x00010c130000(PTR_PTR_1126c55c0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppuVar1);
          uVar3 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_7);
          uVar4 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f9260(uVar13);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(ppuVar2);
          _objc_release(param_7);
        }
        else {
          ppuVar2 = ppuStack_498;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuStack_498;
          func_0x00010bf24ec0(ppuStack_498);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuStack_498;
          func_0x00010c291e80(ppuStack_498);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078f60(ppuStack_498);
          puVar11 = PTR_PTR_1126c55c0;
          func_0x00010c130000();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppuVar1);
          uVar3 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_7);
          uVar4 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f92a0(uVar13);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(puVar11);
          _objc_release(ppuVar7);
          _objc_release(ppuVar5);
          _objc_release(ppuVar2);
          _objc_release(param_7);
        }
        goto LAB_107b22c8c;
      }
    }
LAB_107b23434:
    _objc_release(ppuStack_498);
  }
LAB_107b23438:
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,param_4 ^ 1);
  }
LAB_107b23454:
  _objc_release(ppuVar1);
  _objc_release(uStack_a8);
  _objc_release(ppuStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107b23770; end: 107b237ef;  */

void FUN_107b23770(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be59580();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b237dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 107b237f0; end: 107b239cf;  */

void FUN_107b237f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b23800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b239d0; end: 107b23af7; -[SCDiscoverFeedSubscribeRequestHandler _logSubscribeToStory:withFinalSubscribeState:interactionContext:triggeringSection:] */

void FUN_107b239d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 3) {
    uVar2 = 6;
  }
  else {
    if (param_4 != 0) goto LAB_107b23ae0;
    uVar2 = 7;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  FUN_107cb4cfc(uVar2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar1);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
LAB_107b23ae0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b23af8; end: 107b23b27; -[SCDiscoverFeedSubscribeRequestHandler .cxx_destruct] */

void FUN_107b23af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b23b28; end: 107b23fcb;  */

void FUN_107b23b28(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar8 = param_2;
  FUN_107c040bc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if ((int)param_2 == 0) {
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a480(uVar1);
  }
  else {
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a660(uVar1);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x000107bfa524();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a8c0(uVar1);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  uVar4 = uVar8;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    uVar4 = uVar5;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(ulong *)(param_1 + 0x20);
    _objc_retain();
    _objc_retain(uVar10);
    if (uVar6 == uVar10) {
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
LAB_107b23d9c:
      _objc_retain(uVar8);
      uVar4 = uVar8;
      goto LAB_107b23dc4;
    }
    if (uVar10 == 0) {
      _objc_release();
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    else {
      uVar7 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
      if ((uVar7 & 1) != 0) goto LAB_107b23d9c;
    }
  }
  uVar4 = 0;
LAB_107b23dc4:
  _objc_release(uVar5);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107b23fcc; end: 107b23fd7; +[SCDiscoverFeedSubscribeStatusManager announcerIdentifier] */

undefined ** FUN_107b23fcc(void)

{
  return &PTR____CFConstantStringClassReference_110eadef8;
}



/* Entry: 107b23fd8; end: 107b23fdf; -[SCDiscoverFeedSubscribeStatusManager addListener:] */

void FUN_107b23fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107b23fe0; end: 107b23fe7; -[SCDiscoverFeedSubscribeStatusManager removeListener:] */

void FUN_107b23fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107b23fe8; end: 107b2438f; -[SCDiscoverFeedSubscribeStatusManager initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:interactionHistoryManager:storiesGrapheneMetricsEmitter:sectionKey:pageType:snapchattersDataMutator:snapchattersDataFetcher:snapchattersDataTracker:creatorSettingsMutator:snapTokenProvider:circumstanceEngine:] */

undefined8 *
FUN_107b23fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f9e50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar4);
    uVar4 = puVar1[0xb];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar4);
    puVar1[0x12] = param_8;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = &UNK_10f445a34;
    _dispatch_queue_create(&UNK_10f445a34,0);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107b24390; end: 107b243f3; -[SCDiscoverFeedSubscribeStatusManager dealloc] */

void FUN_107b24390(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f9e50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b243f4; end: 107b244af; -[SCDiscoverFeedSubscribeStatusManager initializeStorySubscribeState:subscribeState:] */

void FUN_107b243f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b244b0; end: 107b244e3;  */

void FUN_107b244b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3bc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b244e4; end: 107b245bb; -[SCDiscoverFeedSubscribeStatusManager initializeStories:] */

void FUN_107b244e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b245bc; end: 107b245ef;  */

void FUN_107b245bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3bc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b245f0; end: 107b246e7; -[SCDiscoverFeedSubscribeStatusManager subscribeStateForStoryDedupeFp:] */

undefined8 FUN_107b245f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[3];
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 107b246e8; end: 107b24727;  */

void FUN_107b246e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bec7120();
  *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b24728; end: 107b24817; -[SCDiscoverFeedSubscribeStatusManager handleSubscribeStoryDedupeFp:snapchatter:currentSubscribeState:] */

void FUN_107b24728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 107b24818; end: 107b2484f;  */

void FUN_107b24818(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be314a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b24850; end: 107b248db; -[SCDiscoverFeedSubscribeStatusManager _initializeStorySubscribeState:subscribeState:] */

void FUN_107b24850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 107b248dc; end: 107b24a97; -[SCDiscoverFeedSubscribeStatusManager _initializeStories:] */

long FUN_107b248dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
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
  func_0x00010bf51e00();
  puVar4 = &uStack_130;
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        uVar1 = uVar7;
        func_0x00010c080120();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = 3;
        if ((int)uVar1 == 0) {
          uVar9 = 0;
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = uVar7;
        func_0x00010c259740(uVar7);
        func_0x00010c0df880(puVar2,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8,param_2,uVar7,puVar2);
        _objc_release(puVar2);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c259740(uVar7);
        func_0x00010c0df880(puVar2,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar9,param_2,puVar3,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar3);
        lVar5 = lVar5 + 1;
      } while (lVar6 != lVar5);
      puVar4 = &uStack_130;
      lVar6 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar4,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release();
  *(undefined8 *)(param_1 + 0x88) = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_3 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar6,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar10 = *(long *)(param_3 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar10,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c2827c0();
    _objc_release(lVar10);
    _objc_release(puVar2);
  }
  return lVar6;
}



/* Entry: 107b24a98; end: 107b24b63; -[SCDiscoverFeedSubscribeStatusManager _subscribeStateForStoryDedupeFp:] */

undefined8 FUN_107b24a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  return uVar2;
}



/* Entry: 107b24b64; end: 107b24c1f; -[SCDiscoverFeedSubscribeStatusManager _updateStoryInPrivateQueueWithDedupeFp:subscribeState:] */

void FUN_107b24b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b24c20; end: 107b24c53;  */

void FUN_107b24c20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b24c54; end: 107b2508f; -[SCDiscoverFeedSubscribeStatusManager _updateStoryDedupeFp:subscribeState:] */

void FUN_107b24c54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar5 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c071f40();
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar5);
    _objc_release(puVar1);
    if (((ulong)puVar4 & 1) != 0) {
      return;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010bec51c0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 3) || (param_4 == 0)) {
    func_0x00010be270c0(param_1);
  }
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x107b24e84;
  puStack_90 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_80,auStack_68);
  lStack_88 = lVar5;
  uStack_78 = param_3;
  lStack_70 = param_4;
  _objc_retain(lVar5);
  func_0x00010007380c(uVar6,&puStack_a8);
  _objc_release(lStack_88);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 107b25090; end: 107b25117; -[SCDiscoverFeedSubscribeStatusManager _storyWithDedupeFp:] */

void FUN_107b25090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25bac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x88) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b25118; end: 107b25703; -[SCDiscoverFeedSubscribeStatusManager _handleChangeInSubscribeStatusForStory:isSubscribed:] */

void FUN_107b25118(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  ppuVar10 = param_4;
  FUN_107c040bc(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_f8 = lVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_3;
    func_0x00010c25b720();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar14 == 2) {
      lVar14 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      lVar14 = lVar13;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + 0x28);
      func_0x00010bf009c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar5);
      puStack_f0 = puVar9;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x107b23cb0;
      puStack_d8 = &UNK_11094c5d8;
      lStack_d0 = lVar5;
      _objc_retain(lVar5);
      ppuVar10 = &puStack_f0;
      puVar7 = puVar6;
      func_0x000100504554(puVar6,ppuVar10);
      _objc_release(lStack_d0);
      _objc_release(lVar5);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar14);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      if ((puVar7 != (undefined *)0x0) &&
         (puVar6 = puVar7, func_0x00010bf529e0(), puVar9 = PTR___NSConcreteStackBlock_11034bd00,
         puVar6 != (undefined *)0x0)) {
        puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_160 = 0xc0000000;
        pcStack_158 = FUN_107b25704;
        puStack_150 = &UNK_1109fda30;
        ppuVar10 = &puStack_168;
        puVar6 = puVar7;
        uStack_148 = (char)param_4;
        func_0x000100504554(puVar7,ppuVar10);
        _objc_release(puVar4);
        puVar4 = puVar6;
      }
      _objc_release(puVar7);
      _objc_release(lVar13);
    }
    lVar14 = param_3;
    func_0x00010c25b720();
    puVar7 = puVar4;
    if ((lVar14 == 3) || (lVar14 = param_3, func_0x00010c25b720(), lVar14 == 0xe)) {
      lVar14 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      lVar14 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      lVar14 = lVar5;
      if (lVar13 != 0) {
        lVar14 = lVar13;
      }
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined **)(param_1 + 0x28);
      func_0x00010bf009c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar14);
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x107b23dec;
      puStack_d8 = &UNK_11094c5d8;
      puStack_f0 = puVar9;
      lStack_d0 = lVar14;
      _objc_retain(lVar14);
      ppuVar10 = &puStack_f0;
      puVar6 = puVar8;
      func_0x000100504554(puVar8,ppuVar10);
      _objc_release(lStack_d0);
      _objc_release(lVar14);
      _objc_release(puVar8);
      if ((puVar6 != (undefined *)0x0) &&
         (puVar8 = puVar6, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
        uStack_188 = 0xc0000000;
        uStack_180 = 0x107b25714;
        puStack_178 = &UNK_1109fda30;
        ppuVar10 = &puStack_190;
        puVar7 = puVar6;
        puStack_190 = puVar9;
        uStack_170 = (char)param_4;
        func_0x000100504554(puVar6,ppuVar10);
        _objc_release(puVar4);
      }
      _objc_release(puVar6);
      _objc_release(lVar14);
      _objc_release(lVar5);
      _objc_release(lVar13);
      param_4 = (undefined **)((ulong)param_4 & 0xffffffff);
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_1 + 0x88) == 0) {
      if ((int)param_4 == 0) {
        func_0x00010c282ae0(*(undefined8 *)(param_1 + 0x30));
      }
      else {
        _objc_retain(puVar7);
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        _objc_retain(puVar7);
        puVar6 = puVar7;
        func_0x00010bf52a60();
        if (puVar6 != (undefined *)0x0) {
          lVar14 = *plStack_130;
          do {
            puVar8 = (undefined *)0x0;
            do {
              if (*plStack_130 != lVar14) {
                _objc_enumerationMutation(puVar7);
              }
              lVar13 = *(long *)(lStack_138 + (long)puVar8 * 8);
              func_0x00010c25b720();
              puVar1 = puVar9;
              if (lVar13 != 0xe) {
                puVar1 = puVar4;
              }
              func_0x00010befa120(puVar1);
              puVar8 = puVar8 + 1;
            } while (puVar6 != puVar8);
            puVar6 = puVar7;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
        }
        _objc_release(puVar7);
        puVar6 = puVar9;
        func_0x00010bf51e00(puVar9);
        _objc_autorelease();
        puVar8 = puVar4;
        func_0x00010bf51e00(puVar4);
        _objc_autorelease();
        _objc_release(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_retain(puVar6);
        _objc_retain(puVar8);
        func_0x00010c28a480(*(undefined8 *)(param_1 + 0x30));
        func_0x00010c10a660(*(undefined8 *)(param_1 + 0x30));
        _objc_release(puVar8);
        _objc_release(puVar6);
      }
    }
    else if ((*(long *)(param_1 + 0x88) == 1) && ((int)param_4 != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c259740(param_3);
      func_0x00010c0df880(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(puVar9);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    lVar14 = lVar3;
    func_0x000107bfa524(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bfa4340(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a8c0(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar14);
    _objc_release(puVar7);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    bVar2 = *(byte *)(param_3 + 0x20);
    puVar9 = PTR_PTR_1126c6d78;
    func_0x00010bf82080(PTR_PTR_1126c6d78,bVar2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((bVar2 & 1) == 0) {
      func_0x00010c2b1080(puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar4 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 107b25704; end: 107b25723;  */

void FUN_107b25704(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78,bVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b17c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((bVar1 & 1) == 0) {
    func_0x00010c2b1080(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b25724; end: 107b25aab; -[SCDiscoverFeedSubscribeStatusManager _handleSubscribeStoryDedupeFp:snapchatter:currentSubscribeState:] */

void FUN_107b25724(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if (param_5 - 1U < 2) goto LAB_107b25a64;
  lVar1 = param_1;
  func_0x00010bec51c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = 1;
    if (param_5 == 3) {
      lVar2 = 2;
    }
    if (param_5 != 4) {
      param_5 = lVar2;
    }
    func_0x00010bee0f40(param_1);
    lVar2 = lVar1;
    func_0x000108471760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      if (param_5 == 2) {
        lVar3 = lVar1;
        func_0x00010c25b720();
        if (lVar3 == 3) {
          if (param_4 != 0) {
LAB_107b2590c:
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            lVar3 = param_4;
            func_0x00010c2923e0(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar7);
            _objc_release(puVar5);
            _objc_release(lVar3);
            _objc_release(puVar4);
            _objc_initWeak(auStack_58,param_1);
            lVar3 = param_4;
            func_0x00010bfb8280();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar3 != 0) {
              puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_b0 = 0xc2000000;
              uStack_a8 = 0x107b25b88;
              puStack_a0 = &UNK_110841fb0;
              ppuVar6 = &puStack_b8;
              _objc_copyWeak(auStack_90,auStack_58);
              _objc_retain(param_4);
              lStack_98 = param_4;
              func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b8);
              lVar3 = lStack_98;
              goto LAB_107b25a0c;
            }
            func_0x00010be8a1c0(param_1);
LAB_107b25a18:
            _objc_destroyWeak(auStack_58);
            goto LAB_107b25a54;
          }
        }
        else {
          lVar3 = lVar1;
          func_0x00010c25b720();
          if ((param_4 != 0) && (lVar3 == 0xe)) goto LAB_107b2590c;
        }
      }
      else {
        if (param_5 != 1) goto LAB_107b25a54;
        lVar3 = lVar1;
        func_0x00010c25b720();
        if (lVar3 == 3) {
          if (param_4 != 0) {
LAB_107b25810:
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            lVar3 = param_4;
            func_0x00010c2923e0(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0da520(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar7);
            _objc_release(puVar5);
            _objc_release(lVar3);
            _objc_release(puVar4);
            _objc_initWeak(auStack_58,param_1);
            puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_80 = 0xc2000000;
            pcStack_78 = FUN_107b25aac;
            puStack_70 = &UNK_110841fb0;
            ppuVar6 = &puStack_88;
            _objc_copyWeak(auStack_60,auStack_58);
            _objc_retain(param_4);
            lStack_68 = param_4;
            func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
            lVar3 = lStack_68;
LAB_107b25a0c:
            _objc_release(lVar3);
            _objc_destroyWeak(ppuVar6 + 5);
            goto LAB_107b25a18;
          }
        }
        else {
          lVar3 = lVar1;
          func_0x00010c25b720();
          if ((param_4 != 0) && (lVar3 == 0xe)) goto LAB_107b25810;
        }
      }
      func_0x00010bea0880(param_1);
    }
LAB_107b25a54:
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107b25a64:
  _objc_release(param_4);
  return;
}



/* Entry: 107b25aac; end: 107b25c53;  */

void FUN_107b25aac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae5c0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126c55c0;
    func_0x00010c12f920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befca80(puVar4,param_2,uVar5,0x4a68a6a6,0x20,0,0,0,puVar3,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960(uVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b25c54; end: 107b2609f; -[SCDiscoverFeedSubscribeStatusManager _sendSubscribeRequestWithStoryKey:story:storyDedupeFp:shouldSubscribe:] */

void FUN_107b25c54(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c25b720();
  if ((lVar2 != 2) && (lVar2 = param_4, func_0x00010c25b720(), lVar2 != 0xb)) {
    _objc_initWeak(auStack_80,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_107b26120;
    puStack_130 = &UNK_1109fda80;
    _objc_copyWeak(auStack_118,auStack_80);
    uStack_108 = param_6;
    _objc_retain(param_4);
    lStack_128 = param_4;
    _objc_retain(param_3);
    uStack_120 = param_3;
    uStack_110 = param_5;
    _objc_copyWeak(auStack_160,auStack_80);
    uStack_150 = param_6;
    _objc_retain(param_4);
    uStack_158 = param_5;
    func_0x00010bfa48e0(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_160);
    _objc_release(uStack_120);
    _objc_release(lStack_128);
    puVar9 = auStack_118;
    goto LAB_107b26014;
  }
  lVar2 = param_4;
  func_0x00010c25b720();
  lVar3 = param_4;
  if (lVar2 == 2) {
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107b25d20:
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b1e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_4;
    func_0x00010c25b720();
    if (lVar2 == 0xb) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107b25d20;
    }
  }
  _objc_initWeak(auStack_80,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4028;
  func_0x00010bf81680(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107b260a0;
  puStack_a8 = &UNK_11087b9c8;
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_88 = param_6;
  _objc_retain(param_4);
  uVar7 = 0;
  lStack_a0 = param_4;
  uStack_90 = param_5;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x107b260e0;
  puStack_e8 = &UNK_1109fda50;
  _objc_copyWeak(auStack_d8,auStack_80);
  uStack_c8 = param_6;
  _objc_retain(param_4);
  uVar8 = 0;
  lStack_e0 = param_4;
  uStack_d0 = param_5;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(lStack_a0);
  puVar9 = auStack_98;
LAB_107b26014:
  _objc_destroyWeak(puVar9);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b260a0; end: 107b2611f;  */

void FUN_107b260a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b26120; end: 107b2617b;  */

void FUN_107b26120(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfe60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2617c; end: 107b261bb;  */

void FUN_107b2617c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b261bc; end: 107b26343; -[SCDiscoverFeedSubscribeStatusManager _updateShouldSubscribe:story:storyKey:storyDedupeFp:accessToken:] */

void FUN_107b261bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1318;
  func_0x00010846c7b8(&PTR____CFConstantStringClassReference_110db1318,param_3,param_5,param_7,
                      *(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_70 = (undefined1)param_3;
  _objc_retain(param_4);
  uStack_78 = param_6;
  func_0x00010c25f5e0(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107b26344; end: 107b263f7;  */

void FUN_107b26344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be31440();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59560();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b263f8; end: 107b264d7; -[SCDiscoverFeedSubscribeStatusManager _handleSubscribeResponseDidSubscribe:story:storyDedupeFp:success:] */

void FUN_107b263f8(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afca8;
  if (param_6 == 0) {
    if ((param_3 & 1) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eacd98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacd98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar2);
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eacd78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacd78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      _objc_release(ppuVar2);
    }
  }
  func_0x00010bee0f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b264d8; end: 107b26563; -[SCDiscoverFeedSubscribeStatusManager _logSubscribeResponse:error:request:] */

void FUN_107b264d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c0f66a0(param_5);
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_logStoriesNetworkRequestWithEndp_112609d78,
             &PTR____CFConstantStringClassReference_110edd0f8,
             &PTR____CFConstantStringClassReference_110eadf18,param_4 == 0,param_5,uVar1);
  return;
}



/* Entry: 107b26564; end: 107b26567; -[SCDiscoverFeedSubscribeStatusManager didStartSnapchattersUpdateDataRequest:] */

void FUN_107b26564(void)

{
  return;
}



/* Entry: 107b26568; end: 107b266d7; -[SCDiscoverFeedSubscribeStatusManager didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107b26568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b266d8;
  puStack_78 = &UNK_1109fdae0;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_copyWeak(auStack_a0,auStack_58);
  uStack_98 = param_4;
  _objc_retain(param_5);
  func_0x00010c0bc6c0(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b266d8; end: 107b2679f;  */

void FUN_107b266d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b267a0; end: 107b268ff; -[SCDiscoverFeedSubscribeStatusManager _updateFriendStatusIfNecessary:success:snapchatter:error:] */

void FUN_107b267a0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  func_0x00010bee0f40(param_1);
  if (param_6 == 0) {
LAB_107b26898:
    if ((param_4 & 1) != 0) goto LAB_107b268e4;
    ppuVar4 = &PTR____CFConstantStringClassReference_110eacd78;
    if (param_3 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110eacd98;
    }
  }
  else {
    uVar2 = param_6;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_107b26898;
    ppuVar4 = &PTR____CFConstantStringClassReference_110daeb18;
  }
  puVar1 = PTR_PTR_1126afca8;
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
  _objc_release(ppuVar4);
LAB_107b268e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107b26900; end: 107b26a2b; -[SCDiscoverFeedSubscribeStatusManager _rehydrateFriendInfoAndUnsubscribeForSnapchatter:] */

void FUN_107b26900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b26a2c; end: 107b26b1b;  */

void FUN_107b26a2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x000108f34d0c(*(undefined8 *)(param_1 + 0xa8),1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ae5c0;
      puVar2 = PTR_PTR_1126c55c0;
      func_0x00010c12f920(PTR_PTR_1126c55c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6ce00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd2960(uVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b26b1c; end: 107b26c17; -[SCDiscoverFeedSubscribeStatusManager .cxx_destruct] */

void FUN_107b26b1c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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



/* Entry: 107b26c18; end: 107b26d1f; -[SCOperaShareableMediaComponents initWithIsSharingVideo:videoURL:remoteURL:overlayImages:firstImage:] */

undefined1 *
FUN_107b26c18(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9e58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107b26d20; end: 107b26d27; -[SCOperaShareableMediaComponents isSharingVideo] */

undefined1 FUN_107b26d20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107b26d28; end: 107b26d2f; -[SCOperaShareableMediaComponents videoURL] */

undefined8 FUN_107b26d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


