/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1095b70cc; end: 1095b7237;  */

void FUN_1095b70cc(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  __ZNSt3__15mutex4lockEv(param_1 + 6);
  uStack_78 = *param_3;
  puVar3 = (undefined1 *)param_1[5];
  FUN_1095b7584(puVar3,plVar4);
  *puVar3 = 7;
  uVar6 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = uStack_78;
  uStack_78 = uVar6;
  FUN_109380ffc(&uStack_78);
  __ZNSt3__15mutex6unlockEv(param_1 + 6);
  return;
}



/* Entry: 1095b7238; end: 1095b72df;  */

void FUN_1095b7238(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  uStack_38 = *param_3;
  puVar1 = *(undefined1 **)(param_1 + 0x28);
  FUN_1095b7584(puVar1,param_2);
  *puVar1 = 7;
  uVar2 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uStack_38;
  uStack_38 = uVar2;
  FUN_109380ffc(&uStack_38);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  return;
}



/* Entry: 1095b72e0; end: 1095b7387;  */

void FUN_1095b72e0(long param_1,undefined8 param_2,int *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  lStack_38 = (long)*param_3;
  puVar1 = *(undefined1 **)(param_1 + 0x28);
  FUN_1095b7584(puVar1,param_2);
  *puVar1 = 5;
  lVar2 = *(long *)(puVar1 + 8);
  *(long *)(puVar1 + 8) = lStack_38;
  lStack_38 = lVar2;
  FUN_109380ffc(&lStack_38);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  return;
}



/* Entry: 1095b7388; end: 1095b741b;  */

undefined8 * FUN_1095b7388(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = auStack_48;
    func_0x000107c31940(puVar1,*param_1);
    __ZNSt3__16chrono12steady_clock3nowEv();
    dStack_50 = (double)((long)puVar1 - param_1[3]) / 1000000000.0;
    FUN_1095b7238(*puVar2,auStack_48,&dStack_50);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  FUN_109477570(param_1 + 1);
  return param_1;
}



/* Entry: 1095b741c; end: 1095b7583;  */

void FUN_1095b741c(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  else {
    if (*param_1 != '\x02') {
      uVar5 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f5755d0,auStack_60);
      FUN_10937bbbc(uVar5,0x134,auStack_48);
      ___cxa_throw(uVar5,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1095b7520);
      (*pcVar2)();
    }
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  uVar1 = puVar3[1];
  if (uVar1 < (ulong)puVar3[2]) {
    FUN_109381b20(uVar1,param_2);
    puVar4 = (undefined8 *)(uVar1 + 0x10);
    puVar3[1] = puVar4;
  }
  else {
    puVar4 = puVar3;
    FUN_1095b76d0(puVar3,param_2);
  }
  puVar3[1] = puVar4;
  return;
}



/* Entry: 1095b7584; end: 1095b76cf;  */

undefined8 * FUN_1095b7584(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined8 auStack_48 [3];
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  else {
    if (*param_1 != '\x01') {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f5688c5,auStack_60);
      FUN_10937bbbc(uVar3,0x131,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1095b7678);
      (*pcVar1)();
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  auStack_48[0] = param_2;
  FUN_109386c9c();
  return puVar2 + 7;
}



/* Entry: 1095b76d0; end: 1095b77d7;  */

long FUN_1095b76d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_a8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10938153c();
    }
    lVar8 = (long)plVar6 + lVar8;
    plStack_40 = plVar6 + uVar7 * 2;
    plStack_58 = plVar6;
    plStack_50 = (long *)lVar8;
    plStack_48 = (long *)lVar8;
    FUN_109381b20(lVar8,param_2);
    plStack_48 = (long *)(lVar8 + 0x10);
    lVar8 = lVar8 + (*param_1 - param_1[1]);
    func_0x000109381570(param_1,*param_1,param_1[1],lVar8);
    plVar6 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar8;
    lVar8 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar8;
    FUN_109381644(&plStack_58);
    return (long)plVar6;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095b8a58(extraout_x8,&pcStack_e8);
  lVar8 = extraout_x8[1];
  uStack_d0 = extraout_x8[1];
  uStack_d8 = *extraout_x8;
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_c0 = param_1[1];
  lStack_c8 = *param_1;
  if (param_1[1] != 0) {
    plVar6 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_e8 = FUN_1095b8d2c;
  ppuStack_e0 = &PTR_FUN_110afe130;
  uStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  FUN_1094758b4(param_3,&pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  lVar4 = lStack_100;
  if (lStack_100 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    lVar4 = lVar8;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return lVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_1095b7934(&uStack_108);
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar8);
  }
  func_0x00010947771c(extraout_x8);
  __Unwind_Resume();
  func_0x0001094776c4(lVar4 + 0x10);
  if (*(long *)(lVar4 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return lVar4;
}



/* Entry: 1095b77d8; end: 1095b7933;  */

long FUN_1095b77d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095b8a58(param_1,&pcStack_78);
  lVar5 = param_1[1];
  uStack_60 = param_1[1];
  uStack_68 = *param_1;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_78 = FUN_1095b8d2c;
  ppuStack_70 = &PTR_FUN_110afe130;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_1094758b4(param_4,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  lVar4 = lStack_90;
  if (lStack_90 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar5 != 0) {
    lVar4 = lVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  FUN_1095b7934(&uStack_98);
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar5);
  }
  func_0x00010947771c(param_1);
  __Unwind_Resume();
  func_0x0001094776c4(lVar4 + 0x10);
  if (*(long *)(lVar4 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return lVar4;
}



/* Entry: 1095b7934; end: 1095b7967;  */

long FUN_1095b7934(long param_1)

{
  func_0x0001094776c4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1095b7968; end: 1095b89ab;  */

void FUN_1095b7968(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  code *pcVar10;
  long ***ppplVar11;
  long ******pppppplVar12;
  long lVar13;
  ulong uVar14;
  long **pplVar15;
  long *******ppppppplVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  long ******pppppplVar19;
  long ******pppppplVar20;
  long *******ppppppplVar21;
  long lVar22;
  long ******unaff_x21;
  ulong uVar23;
  long *******ppppppplVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  ulong *puVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long *****ppppplVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long ******pppppplStack_4a0;
  long ******pppppplStack_498;
  long ******pppppplStack_490;
  long ***ppplStack_480;
  long *****ppppplStack_478;
  long ******pppppplStack_470;
  ulong uStack_468;
  float fStack_460;
  long *****ppppplStack_450;
  long *****ppppplStack_448;
  long *****ppppplStack_440;
  long ****pppplStack_430;
  long ****pppplStack_428;
  long ******pppppplStack_420;
  long ****pppplStack_418;
  long *****ppppplStack_410;
  long ****pppplStack_408;
  long *****ppppplStack_400;
  long ****pppplStack_3f8;
  long *****ppppplStack_3f0;
  long *****ppppplStack_3e0;
  long *****ppppplStack_3d8;
  long *****ppppplStack_3d0;
  long *****ppppplStack_3c8;
  long *****ppppplStack_3c0;
  long *****ppppplStack_3b8;
  long ****pppplStack_3b0;
  long ****pppplStack_3a8;
  long ****pppplStack_3a0;
  undefined4 uStack_390;
  long ***ppplStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  long ******pppppplStack_330;
  long *****ppppplStack_328;
  long *****ppppplStack_320;
  long ****pppplStack_318;
  long *****ppppplStack_310;
  long ****pppplStack_308;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
  long *****ppppplStack_2f0;
  long *****ppppplStack_2e8;
  long *****ppppplStack_2e0;
  long *****ppppplStack_2d8;
  long *****ppppplStack_2d0;
  long *****ppppplStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  long *****ppppplStack_2a0;
  long *****ppppplStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  long *****appppplStack_270 [2];
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  long *****ppppplStack_250;
  long *****ppppplStack_248;
  long *****ppppplStack_240;
  long *****ppppplStack_238;
  long *****ppppplStack_230;
  long *****ppppplStack_228;
  long *****ppppplStack_220;
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  long *****ppppplStack_1c0;
  long *****ppppplStack_1b8;
  long *****ppppplStack_1b0;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  long *****ppppplStack_190;
  long *****ppppplStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  long *****ppppplStack_160;
  undefined4 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  long *****ppppplStack_100;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  char cStack_a0;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  long ******pppppplStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar12 = (long ******)*param_4;
  if (*(char *)(pppppplVar12 + 0xc) == '\x01') {
    *(int *)(pppppplVar12 + 0xd) = *(int *)(pppppplVar12 + 0xd) + 1;
  }
  else {
    *(int *)((long)pppppplVar12 + 100) = *(int *)((long)pppppplVar12 + 100) + 1;
  }
  ppppplStack_450 = (long *****)0x0;
  ppppplStack_448 = (long *****)0x0;
  ppppplStack_440 = (long *****)0x0;
  puVar27 = (ulong *)*param_3;
  puVar5 = (ulong *)param_3[1];
  ppppplStack_478 = (long *****)0x0;
  ppplStack_480 = (long ***)0x0;
  uStack_468 = 0;
  pppppplStack_470 = (long ******)0x0;
  fStack_460 = 1.0;
  if (puVar27 == puVar5) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    do {
      pppppplVar20 = (long ******)ppppplStack_478;
      pppppplVar19 = (long ******)*puVar27;
      pppppplVar12 = (long ******)puVar27[1];
      uVar14 = ((ulong)(uint)((int)pppppplVar19 << 3) + 8 ^ (ulong)pppppplVar19 >> 0x20) *
               -0x622015f714c7d297;
      uVar14 = ((ulong)pppppplVar19 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      pppppplVar28 = (long ******)((uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
      if ((long ******)ppppplStack_478 != (long ******)0x0) {
        uVar14 = (long)ppppplStack_478 - 1;
        if (((ulong)ppppplStack_478 & uVar14) == 0) {
          unaff_x21 = (long ******)((ulong)pppppplVar28 & uVar14);
        }
        else {
          unaff_x21 = pppppplVar28;
          if (ppppplStack_478 <= pppppplVar28) {
            uVar8 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar8 = (ulong)pppppplVar28 / (ulong)ppppplStack_478;
            }
            unaff_x21 = (long ******)((long)pppppplVar28 - uVar8 * (long)ppppplStack_478);
          }
        }
        pplVar15 = ppplStack_480[(long)unaff_x21];
        if (pplVar15 != (long **)0x0) {
          do {
            while( true ) {
              pplVar15 = (long **)*pplVar15;
              if (pplVar15 == (long **)0x0) goto LAB_1095b7ac4;
              pppppplVar17 = (long ******)pplVar15[1];
              if (pppppplVar17 != pppppplVar28) break;
              if ((long ******)pplVar15[2] == pppppplVar19) goto LAB_1095b7d70;
            }
            if (((ulong)ppppplStack_478 & uVar14) == 0) {
              pppppplVar17 = (long ******)((ulong)pppppplVar17 & uVar14);
            }
            else if (ppppplStack_478 <= pppppplVar17) {
              uVar8 = 0;
              if ((long ******)ppppplStack_478 != (long ******)0x0) {
                uVar8 = (ulong)pppppplVar17 / (ulong)ppppplStack_478;
              }
              pppppplVar17 = (long ******)((long)pppppplVar17 - uVar8 * (long)ppppplStack_478);
            }
          } while (pppppplVar17 == unaff_x21);
        }
      }
LAB_1095b7ac4:
      ppppppplVar24 = (long *******)0x20;
      __Znwm();
      ppppplStack_328 = (long *****)&ppplStack_480;
      ppppplStack_320 = (long *****)0x1;
      *ppppppplVar24 = (long ******)0x0;
      ppppppplVar24[1] = pppppplVar28;
      ppppppplVar24[2] = pppppplVar19;
      ppppppplVar24[3] = pppppplVar12;
      if (pppppplVar12 != (long ******)0x0) {
        pppppplVar12 = pppppplVar12 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
          if (bVar7) {
            *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
          uVar23 = uStack_468;
        } while (cVar6 != '\0');
      }
      pppppplStack_330 = (long ******)ppppppplVar24;
      if ((pppppplVar20 == (long ******)0x0) ||
         (fStack_460 * (float)pppppplVar20 < (float)(uVar23 + 1))) {
        uVar14 = 1;
        if ((long ******)0x2 < pppppplVar20) {
          uVar14 = (ulong)(((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) != 0);
        }
        pppppplVar12 = (long ******)(uVar14 | (long)pppppplVar20 << 1);
        pppppplVar19 = (long ******)(long)((float)(uVar23 + 1) / fStack_460);
        if (pppppplVar12 <= pppppplVar19) {
          pppppplVar12 = pppppplVar19;
        }
        if ((long)pppppplVar12 - 1U == 0) {
          pppppplVar12 = (long ******)0x2;
        }
        else if (((ulong)pppppplVar12 & (long)pppppplVar12 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        ppppplVar25 = ppppplStack_478;
        if (ppppplStack_478 < pppppplVar12) {
LAB_1095b7b84:
          if ((ulong)pppppplVar12 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1095b8860;
          }
          ppplVar11 = (long ***)((long)pppppplVar12 << 3);
          __Znwm();
          bVar7 = ppplStack_480 != (long ***)0x0;
          ppplStack_480 = ppplVar11;
          if (bVar7) {
            __ZdlPv();
          }
          pppppplVar19 = (long ******)0x0;
          do {
            ppplStack_480[(long)pppppplVar19] = (long **)0x0;
            pppppplVar19 = (long ******)((long)pppppplVar19 + 1);
          } while (pppppplVar12 != pppppplVar19);
          ppppplStack_478 = (long *****)pppppplVar12;
          if ((long *******)pppppplStack_470 != (long *******)0x0) {
            pppppplVar19 = (long ******)pppppplStack_470[1];
            uVar23 = (long)pppppplVar12 - 1;
            if (((ulong)pppppplVar12 & uVar23) == 0) {
              pppppplVar19 = (long ******)((ulong)pppppplVar19 & uVar23);
            }
            else if (pppppplVar12 <= pppppplVar19) {
              uVar14 = 0;
              if (pppppplVar12 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar19 / (ulong)pppppplVar12;
              }
              pppppplVar19 = (long ******)((long)pppppplVar19 - uVar14 * (long)pppppplVar12);
            }
            ppplStack_480[(long)pppppplVar19] = (long **)&pppppplStack_470;
            ppppppplVar16 = (long *******)*pppppplStack_470;
            ppppppplVar21 = (long *******)pppppplStack_470;
            while (ppppppplVar16 != (long *******)0x0) {
              pppppplVar20 = ppppppplVar16[1];
              if (((ulong)pppppplVar12 & uVar23) == 0) {
                pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar23);
              }
              else if (pppppplVar12 <= pppppplVar20) {
                uVar14 = 0;
                if (pppppplVar12 != (long ******)0x0) {
                  uVar14 = (ulong)pppppplVar20 / (ulong)pppppplVar12;
                }
                pppppplVar20 = (long ******)((long)pppppplVar20 - uVar14 * (long)pppppplVar12);
              }
              ppppppplVar18 = ppppppplVar16;
              if (pppppplVar20 != pppppplVar19) {
                if (ppplStack_480[(long)pppppplVar20] == (long **)0x0) {
                  ppplStack_480[(long)pppppplVar20] = (long **)ppppppplVar21;
                  pppppplVar19 = pppppplVar20;
                }
                else {
                  *ppppppplVar21 = *ppppppplVar16;
                  *ppppppplVar16 = (long ******)*ppplStack_480[(long)pppppplVar20];
                  *ppplStack_480[(long)pppppplVar20] = (long *)ppppppplVar16;
                  ppppppplVar18 = ppppppplVar21;
                }
              }
              ppppppplVar21 = ppppppplVar18;
              ppppppplVar16 = (long *******)*ppppppplVar18;
            }
          }
        }
        else if (pppppplVar12 < ppppplStack_478) {
          pppppplVar19 = (long ******)(long)((float)uStack_468 / fStack_460);
          if ((ppppplStack_478 < (long ******)0x3) ||
             (((ulong)ppppplStack_478 & (long)ppppplStack_478 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long ******)0x1 < pppppplVar19) {
            pppppplVar19 = (long ******)(1L << (-LZCOUNT((long)pppppplVar19 + -1) & 0x3fU));
          }
          ppplVar11 = ppplStack_480;
          if (pppppplVar12 <= pppppplVar19) {
            pppppplVar12 = pppppplVar19;
          }
          if (pppppplVar12 < ppppplVar25) {
            if (pppppplVar12 != (long ******)0x0) goto LAB_1095b7b84;
            ppplStack_480 = (long ***)0x0;
            if (ppplVar11 != (long ***)0x0) {
              __ZdlPv();
            }
            ppppplStack_478 = (long *****)0x0;
          }
        }
        pppppplVar20 = (long ******)ppppplStack_478;
        if (((ulong)ppppplStack_478 & (long)ppppplStack_478 - 1U) == 0) {
          unaff_x21 = (long ******)((long)ppppplStack_478 - 1U & (ulong)pppppplVar28);
        }
        else {
          unaff_x21 = pppppplVar28;
          if (ppppplStack_478 <= pppppplVar28) {
            uVar23 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar28 / (ulong)ppppplStack_478;
            }
            unaff_x21 = (long ******)((long)pppppplVar28 - uVar23 * (long)ppppplStack_478);
          }
        }
      }
      ppplVar11 = (long ***)ppplStack_480[(long)unaff_x21];
      if (ppplVar11 == (long ***)0x0) {
        *ppppppplVar24 = pppppplStack_470;
        ppplStack_480[(long)unaff_x21] = (long **)&pppppplStack_470;
        pppppplStack_470 = (long ******)ppppppplVar24;
        if (*ppppppplVar24 != (long ******)0x0) {
          pppppplVar12 = (long ******)(*ppppppplVar24)[1];
          if (((ulong)pppppplVar20 & (long)pppppplVar20 - 1U) == 0) {
            pppppplVar12 = (long ******)((ulong)pppppplVar12 & (long)pppppplVar20 - 1U);
          }
          else if (pppppplVar20 <= pppppplVar12) {
            uVar23 = 0;
            if (pppppplVar20 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar12 / (ulong)pppppplVar20;
            }
            pppppplVar12 = (long ******)((long)pppppplVar12 - uVar23 * (long)pppppplVar20);
          }
          ppplVar11 = ppplStack_480 + (long)pppppplVar12;
          goto LAB_1095b7d60;
        }
      }
      else {
        *ppppppplVar24 = (long ******)*ppplVar11;
LAB_1095b7d60:
        *ppplVar11 = (long **)ppppppplVar24;
      }
      uVar23 = uStack_468 + 1;
      uStack_468 = uVar23;
LAB_1095b7d70:
      puVar27 = puVar27 + 2;
    } while (puVar27 != puVar5);
    pppppplVar12 = (long ******)*param_4;
  }
  if ((pppppplVar12[10] != (long *****)0x0) && (pppppplVar12[9] != (long *****)0x0)) {
    ppppplVar25 = pppppplVar12[9];
    do {
      while ((long ******)ppppplStack_478 != (long ******)0x0) {
        pppppplVar19 = (long ******)ppppplVar25[2];
        uVar23 = ((ulong)(uint)((int)pppppplVar19 << 3) + 8 ^ (ulong)pppppplVar19 >> 0x20) *
                 -0x622015f714c7d297;
        uVar23 = ((ulong)pppppplVar19 >> 0x20 ^ uVar23 >> 0x2f ^ uVar23) * -0x622015f714c7d297;
        pppppplVar12 = (long ******)((uVar23 ^ uVar23 >> 0x2f) * -0x622015f714c7d297);
        uVar23 = (long)ppppplStack_478 - 1;
        if (((ulong)ppppplStack_478 & uVar23) == 0) {
          pppppplVar20 = (long ******)((ulong)pppppplVar12 & uVar23);
        }
        else {
          pppppplVar20 = pppppplVar12;
          if (ppppplStack_478 <= pppppplVar12) {
            uVar14 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar12 / (ulong)ppppplStack_478;
            }
            pppppplVar20 = (long ******)((long)pppppplVar12 - uVar14 * (long)ppppplStack_478);
          }
        }
        if (ppplStack_480[(long)pppppplVar20] == (long **)0x0) break;
        ppppppplVar24 = (long *******)*ppplStack_480[(long)pppppplVar20];
joined_r0x0001095b7e54:
        if (ppppppplVar24 == (long *******)0x0) break;
        pppppplVar28 = ppppppplVar24[1];
        if (pppppplVar28 != pppppplVar12) {
          if (((ulong)ppppplStack_478 & uVar23) == 0) {
            pppppplVar28 = (long ******)((ulong)pppppplVar28 & uVar23);
          }
          else if (ppppplStack_478 <= pppppplVar28) {
            uVar14 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar28 / (ulong)ppppplStack_478;
            }
            pppppplVar28 = (long ******)((long)pppppplVar28 - uVar14 * (long)ppppplStack_478);
          }
          if (pppppplVar28 == pppppplVar20) goto LAB_1095b7e9c;
          break;
        }
        if (ppppppplVar24[2] != pppppplVar19) goto LAB_1095b7e9c;
        if (((ulong)ppppplStack_478 & uVar23) == 0) {
          pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar23);
        }
        else if (ppppplStack_478 <= pppppplVar12) {
          uVar14 = 0;
          if ((long ******)ppppplStack_478 != (long ******)0x0) {
            uVar14 = (ulong)pppppplVar12 / (ulong)ppppplStack_478;
          }
          pppppplVar12 = (long ******)((long)pppppplVar12 - uVar14 * (long)ppppplStack_478);
        }
        pppppplVar19 = *ppppppplVar24;
        ppppppplVar16 = (long *******)ppplStack_480[(long)pppppplVar12];
        do {
          ppppppplVar21 = ppppppplVar16;
          ppppppplVar16 = (long *******)*ppppppplVar21;
        } while ((long *******)*ppppppplVar21 != ppppppplVar24);
        if (ppppppplVar21 == &pppppplStack_470) {
LAB_1095b7f30:
          if (pppppplVar19 == (long ******)0x0) {
LAB_1095b7f64:
            ppplStack_480[(long)pppppplVar12] = (long **)0x0;
            pppppplVar19 = *ppppppplVar24;
            goto LAB_1095b7f6c;
          }
          pppppplVar20 = (long ******)pppppplVar19[1];
          if (((ulong)ppppplStack_478 & uVar23) == 0) {
            pppppplVar28 = (long ******)((ulong)pppppplVar20 & uVar23);
          }
          else {
            pppppplVar28 = pppppplVar20;
            if (ppppplStack_478 <= pppppplVar20) {
              uVar14 = 0;
              if ((long ******)ppppplStack_478 != (long ******)0x0) {
                uVar14 = (ulong)pppppplVar20 / (ulong)ppppplStack_478;
              }
              pppppplVar28 = (long ******)((long)pppppplVar20 - uVar14 * (long)ppppplStack_478);
            }
          }
          if (pppppplVar28 != pppppplVar12) goto LAB_1095b7f64;
LAB_1095b7f74:
          if (((ulong)ppppplStack_478 & uVar23) == 0) {
            pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar23);
          }
          else if (ppppplStack_478 <= pppppplVar20) {
            uVar23 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar23 = (ulong)pppppplVar20 / (ulong)ppppplStack_478;
            }
            pppppplVar20 = (long ******)((long)pppppplVar20 - uVar23 * (long)ppppplStack_478);
          }
          if (pppppplVar20 != pppppplVar12) {
            ppplStack_480[(long)pppppplVar20] = (long **)ppppppplVar21;
            pppppplVar19 = *ppppppplVar24;
          }
        }
        else {
          pppppplVar20 = ppppppplVar21[1];
          if (((ulong)ppppplStack_478 & uVar23) == 0) {
            pppppplVar20 = (long ******)((ulong)pppppplVar20 & uVar23);
          }
          else if (ppppplStack_478 <= pppppplVar20) {
            uVar14 = 0;
            if ((long ******)ppppplStack_478 != (long ******)0x0) {
              uVar14 = (ulong)pppppplVar20 / (ulong)ppppplStack_478;
            }
            pppppplVar20 = (long ******)((long)pppppplVar20 - uVar14 * (long)ppppplStack_478);
          }
          if (pppppplVar20 != pppppplVar12) goto LAB_1095b7f30;
LAB_1095b7f6c:
          if (pppppplVar19 != (long ******)0x0) {
            pppppplVar20 = (long ******)pppppplVar19[1];
            goto LAB_1095b7f74;
          }
        }
        *ppppppplVar21 = pppppplVar19;
        *ppppppplVar24 = (long ******)0x0;
        uStack_468 = uStack_468 - 1;
        FUN_10947766c(ppppppplVar24 + 2);
        __ZdlPv(ppppppplVar24);
        ppppplVar25 = (long *****)*ppppplVar25;
        if (ppppplVar25 == (long *****)0x0) goto LAB_1095b7fd0;
      }
      ppppplVar26 = (long *****)(*param_4 + 0x38);
      FUN_1095b9234(ppppplVar26,ppppplVar25);
      ppppplVar25 = ppppplVar26;
    } while (ppppplVar26 != (long *****)0x0);
LAB_1095b7fd0:
    pppppplVar12 = (long ******)*param_4;
    uVar23 = uStack_468;
  }
  ppppppplVar24 = (long *******)pppppplStack_470;
  iVar4 = *(int *)(pppppplVar12 + 0xd);
  iVar3 = iVar4;
  if (iVar4 < 2) {
    iVar3 = 1;
  }
  *(int *)(pppppplVar12 + 0xe) = *(int *)(pppppplVar12 + 0xe) + 1;
  if (*(byte *)(pppppplVar12 + 0xc) == 1) {
    *(int *)(pppppplVar12 + 0x12) = *(int *)(pppppplVar12 + 0x12) + 1;
  }
  iVar4 = (*(int *)((long)pppppplVar12 + 100) + iVar4) * *(int *)pppppplVar12;
  if (uVar23 == 0) {
    *(int *)((long)pppppplVar12 + 0x94) = *(int *)((long)pppppplVar12 + 0x94) + 1;
  }
  if (iVar4 < iVar3 * 100) {
    *(int *)(pppppplVar12 + 0x13) = *(int *)(pppppplVar12 + 0x13) + 1;
  }
  if (((((*(byte *)(pppppplVar12 + 0xc) & 1) == 0) && (uVar23 != 0)) &&
      ((*(char *)((long)pppppplVar12 + 4) != '\x01' || (pppppplVar12[10] == (long *****)0x0)))) &&
     (iVar3 * 100 <= iVar4)) {
    *(int *)(pppppplVar12 + 0xd) = 0;
    *(undefined1 *)(pppppplVar12 + 0xc) = 1;
    pppppplStack_498 = (long ******)0x0;
    pppppplStack_490 = (long ******)0x0;
    pppppplStack_4a0 = (long ******)0x0;
    if ((long *******)pppppplStack_470 != (long *******)0x0) {
      uVar23 = 0xffffffffffffffff;
      ppppppplVar16 = (long *******)pppppplStack_470;
      do {
        uVar14 = uVar23;
        ppppppplVar16 = (long *******)*ppppppplVar16;
        uVar23 = uVar14 + 1;
      } while (ppppppplVar16 != (long *******)0x0);
      pppppplStack_330 = (long ******)&pppppplStack_4a0;
      ppppplStack_328 = (long *****)((ulong)ppppplStack_328 & 0xffffffffffffff00);
      if (0xffffffffffffffe < uVar23) goto LAB_1095b885c;
      ppppppplVar16 = &pppppplStack_4a0;
      lVar22 = uVar14 + 2;
      FUN_10947745c();
      pppppplStack_490 = (long ******)(ppppppplVar16 + lVar22 * 2);
      pppppplStack_4a0 = (long ******)ppppppplVar16;
      do {
        pppppplVar12 = ppppppplVar24[3];
        pppppplVar19 = ppppppplVar24[2];
        ppppppplVar16[1] = ppppppplVar24[3];
        *ppppppplVar16 = pppppplVar19;
        if (pppppplVar12 != (long ******)0x0) {
          pppppplVar12 = pppppplVar12 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
            if (bVar7) {
              *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        ppppppplVar24 = (long *******)*ppppppplVar24;
        ppppppplVar16 = ppppppplVar16 + 2;
      } while (ppppppplVar24 != (long *******)0x0);
      pppppplVar12 = (long ******)*param_4;
      pppppplStack_498 = (long ******)ppppppplVar16;
    }
    pppppplVar19 = (long ******)param_4[1];
    if (pppppplVar19 == (long ******)0x0) {
      ppppplVar25 = pppppplVar12[5];
      ppppplStack_328 = (long *****)0x0;
    }
    else {
      pppppplVar20 = pppppplVar19 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
        if (bVar7) {
          *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppppplVar25 = *(long ******)(*param_4 + 0x28);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar20,0x10);
        if (bVar7) {
          *pppppplVar20 = (long *****)((long)*pppppplVar20 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
        ppppplStack_328 = (long *****)pppppplVar19;
      } while (cVar6 != '\0');
    }
    ppppplStack_320 = (long *****)*param_2;
    ppppplStack_310 = (long *****)param_2[2];
    ppppplStack_2f8 = (long *****)param_2[5];
    ppppplStack_300 = (long *****)param_2[4];
    ppppplStack_2e8 = (long *****)param_2[7];
    ppppplStack_2f0 = (long *****)param_2[6];
    ppppplStack_2d8 = (long *****)param_2[9];
    ppppplStack_2e0 = (long *****)param_2[8];
    ppppplStack_2c8 = (long *****)param_2[0xb];
    ppppplStack_2d0 = (long *****)param_2[10];
    uStack_2c0 = *(undefined4 *)(param_2 + 0xc);
    pppppplStack_330 = pppppplVar12;
    FUN_10937da58(&pppplStack_2b8,param_2 + 0xd);
    ppppplStack_298 = (long *****)param_2[0x11];
    ppppplStack_2a0 = (long *****)param_2[0x10];
    ppppplStack_288 = (long *****)param_2[0x13];
    ppppplStack_290 = (long *****)param_2[0x12];
    ppppplStack_278 = (long *****)param_2[0x15];
    ppppplStack_280 = (long *****)param_2[0x14];
    appppplStack_270[0] = (long *****)param_2[0x16];
    ppppplStack_238 = (long *****)param_2[0x1d];
    ppppplStack_240 = (long *****)param_2[0x1c];
    ppppplStack_228 = (long *****)param_2[0x1f];
    ppppplStack_230 = (long *****)param_2[0x1e];
    ppppplStack_220 = (long *****)param_2[0x20];
    ppppplStack_258 = (long *****)param_2[0x19];
    ppppplStack_260 = (long *****)param_2[0x18];
    ppppplStack_248 = (long *****)param_2[0x1b];
    ppppplStack_250 = (long *****)param_2[0x1a];
    ppppplStack_208 = (long *****)param_2[0x23];
    ppppplStack_210 = (long *****)param_2[0x22];
    if (param_2[0x23] != 0) {
      plVar1 = (long *)(param_2[0x23] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppppplStack_1f8 = (long *****)param_2[0x25];
    ppppplStack_200 = (long *****)param_2[0x24];
    ppppplStack_1e8 = (long *****)param_2[0x27];
    ppppplStack_1f0 = (long *****)param_2[0x26];
    FUN_109460390(&ppppplStack_1e0,param_2 + 0x28);
    uStack_be = *(undefined8 *)((long)param_2 + 0x262);
    uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x25a) >> 0x30);
    ppppplStack_e8 = (long *****)param_2[0x47];
    ppppplStack_f0 = (long *****)param_2[0x46];
    ppppplStack_d8 = (long *****)param_2[0x49];
    ppppplStack_e0 = (long *****)param_2[0x48];
    ppppplStack_d0 = (long *****)param_2[0x4a];
    uStack_c8 = (undefined2)param_2[0x4b];
    uStack_c6 = (undefined6)((ulong)param_2[0x4b] >> 0x10);
    ppppplStack_b0 = (long *****)((ulong)ppppplStack_b0 & 0xffffffffffffff00);
    cStack_a0 = '\0';
    if (*(char *)(param_2 + 0x50) == '\x01') {
      ppppplStack_a8 = (long *****)param_2[0x4f];
      ppppplStack_b0 = (long *****)param_2[0x4e];
      if (param_2[0x4f] != 0) {
        plVar1 = (long *)(param_2[0x4f] + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      cStack_a0 = '\x01';
    }
    pppppplStack_88 = pppppplStack_498;
    pppppplStack_90 = pppppplStack_4a0;
    pppppplStack_80 = pppppplStack_490;
    pppppplStack_498 = (long ******)0x0;
    pppppplStack_490 = (long ******)0x0;
    pppppplStack_4a0 = (long ******)0x0;
    pppplStack_430 = (long ****)FUN_1095b943c;
    pppplStack_428 = (long ****)&PTR_FUN_110afe1c0;
    ppppppplVar24 = (long *******)0x2c0;
    __Znwm();
    *ppppppplVar24 = pppppplStack_330;
    ppppppplVar24[1] = (long ******)ppppplStack_328;
    pppppplStack_330 = (long ******)0x0;
    ppppplStack_328 = (long *****)0x0;
    ppppppplVar24[2] = (long ******)ppppplStack_320;
    ppppppplVar24[4] = (long ******)ppppplStack_310;
    ppppppplVar24[7] = (long ******)ppppplStack_2f8;
    ppppppplVar24[6] = (long ******)ppppplStack_300;
    ppppppplVar24[9] = (long ******)ppppplStack_2e8;
    ppppppplVar24[8] = (long ******)ppppplStack_2f0;
    ppppppplVar24[0xb] = (long ******)ppppplStack_2d8;
    ppppppplVar24[10] = (long ******)ppppplStack_2e0;
    ppppppplVar24[0xd] = (long ******)ppppplStack_2c8;
    ppppppplVar24[0xc] = (long ******)ppppplStack_2d0;
    *(undefined4 *)(ppppppplVar24 + 0xe) = uStack_2c0;
    FUN_10937da58(ppppppplVar24 + 0xf,&pppplStack_2b8);
    ppppppplVar24[0x13] = (long ******)ppppplStack_298;
    ppppppplVar24[0x12] = (long ******)ppppplStack_2a0;
    ppppppplVar24[0x15] = (long ******)ppppplStack_288;
    ppppppplVar24[0x14] = (long ******)ppppplStack_290;
    ppppppplVar24[0x17] = (long ******)ppppplStack_278;
    ppppppplVar24[0x16] = (long ******)ppppplStack_280;
    ppppppplVar24[0x18] = (long ******)appppplStack_270[0];
    ppppppplVar24[0x1f] = (long ******)ppppplStack_238;
    ppppppplVar24[0x1e] = (long ******)ppppplStack_240;
    ppppppplVar24[0x21] = (long ******)ppppplStack_228;
    ppppppplVar24[0x20] = (long ******)ppppplStack_230;
    ppppppplVar24[0x22] = (long ******)ppppplStack_220;
    ppppppplVar24[0x1b] = (long ******)ppppplStack_258;
    ppppppplVar24[0x1a] = (long ******)ppppplStack_260;
    ppppppplVar24[0x1d] = (long ******)ppppplStack_248;
    ppppppplVar24[0x1c] = (long ******)ppppplStack_250;
    ppppppplVar24[0x25] = (long ******)ppppplStack_208;
    ppppppplVar24[0x24] = (long ******)ppppplStack_210;
    if ((long ******)ppppplStack_208 != (long ******)0x0) {
      pppppplVar12 = (long ******)(ppppplStack_208 + 1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
        if (bVar7) {
          *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppppppplVar24[0x27] = (long ******)ppppplStack_1f8;
    ppppppplVar24[0x26] = (long ******)ppppplStack_200;
    ppppppplVar24[0x29] = (long ******)ppppplStack_1e8;
    ppppppplVar24[0x28] = (long ******)ppppplStack_1f0;
    ppppppplVar24[0x2b] = (long ******)ppppplStack_1d8;
    ppppppplVar24[0x2a] = (long ******)ppppplStack_1e0;
    ppppppplVar24[0x2d] = (long ******)ppppplStack_1c8;
    ppppppplVar24[0x2c] = (long ******)ppppplStack_1d0;
    ppppppplVar24[0x2f] = (long ******)ppppplStack_1b8;
    ppppppplVar24[0x2e] = (long ******)ppppplStack_1c0;
    ppppppplVar24[0x30] = (long ******)ppppplStack_1b0;
    ppppppplVar24[0x3a] = (long ******)ppppplStack_160;
    ppppppplVar24[0x37] = (long ******)ppppplStack_178;
    ppppppplVar24[0x36] = (long ******)ppppplStack_180;
    ppppppplVar24[0x39] = (long ******)ppppplStack_168;
    ppppppplVar24[0x38] = (long ******)ppppplStack_170;
    ppppppplVar24[0x33] = (long ******)ppppplStack_198;
    ppppppplVar24[0x32] = (long ******)ppppplStack_1a0;
    ppppppplVar24[0x35] = (long ******)ppppplStack_188;
    ppppppplVar24[0x34] = (long ******)ppppplStack_190;
    *(undefined4 *)(ppppppplVar24 + 0x3c) = uStack_150;
    ppppppplVar24[0x3d] = (long ******)0x0;
    ppppppplVar24[0x3e] = (long ******)0x0;
    ppppppplVar24[0x3f] = (long ******)0x0;
    FUN_1094604a4(ppppppplVar24 + 0x3d,lStack_148,lStack_140,
                  (lStack_140 - lStack_148 >> 3) * -0x5555555555555555);
    ppppppplVar24[0x42] = (long ******)0x0;
    ppppppplVar24[0x41] = (long ******)0x0;
    ppppppplVar24[0x40] = (long ******)0x0;
    FUN_109285684(ppppppplVar24 + 0x40,lStack_130,lStack_128,lStack_128 - lStack_130 >> 2);
    ppppppplVar24[0x45] = (long ******)0x0;
    ppppppplVar24[0x44] = (long ******)0x0;
    ppppppplVar24[0x43] = (long ******)0x0;
    FUN_1092cc0dc();
    ppppppplVar24[0x46] = (long ******)ppppplStack_100;
    ppppppplVar24[0x49] = (long ******)ppppplStack_e8;
    ppppppplVar24[0x48] = (long ******)ppppplStack_f0;
    ppppppplVar24[0x4b] = (long ******)ppppplStack_d8;
    ppppppplVar24[0x4a] = (long ******)ppppplStack_e0;
    ppppppplVar24[0x4d] = (long ******)CONCAT62(uStack_c6,uStack_c8);
    ppppppplVar24[0x4c] = (long ******)ppppplStack_d0;
    *(undefined8 *)((long)ppppppplVar24 + 0x272) = uStack_be;
    *(ulong *)((long)ppppppplVar24 + 0x26a) = CONCAT26(uStack_c0,uStack_c6);
    *(undefined1 *)(ppppppplVar24 + 0x50) = 0;
    *(undefined1 *)(ppppppplVar24 + 0x52) = 0;
    if (cStack_a0 == '\x01') {
      ppppppplVar24[0x51] = (long ******)ppppplStack_a8;
      ppppppplVar24[0x50] = (long ******)ppppplStack_b0;
      if ((long ******)ppppplStack_a8 != (long ******)0x0) {
        pppppplVar12 = (long ******)(ppppplStack_a8 + 1);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppplVar12,0x10);
          if (bVar7) {
            *pppppplVar12 = (long *****)((long)*pppppplVar12 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *(undefined1 *)(ppppppplVar24 + 0x52) = 1;
    }
    ppppppplVar24[0x55] = pppppplStack_88;
    ppppppplVar24[0x54] = pppppplStack_90;
    ppppppplVar24[0x56] = pppppplStack_80;
    pppppplStack_88 = (long ******)0x0;
    pppppplStack_80 = (long ******)0x0;
    pppppplStack_90 = (long ******)0x0;
    pppppplStack_420 = (long ******)ppppppplVar24;
    FUN_1094758b4(ppppplVar25,&pppplStack_430);
    (*(code *)*pppplStack_428)(&pppplStack_428);
    FUN_1095b89ac(&pppppplStack_330);
    if (pppppplVar19 != (long ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar19);
    }
    pppppplStack_330 = (long ******)&pppppplStack_4a0;
    func_0x000109477500(&pppppplStack_330);
    pppppplVar12 = (long ******)*param_4;
  }
  if (pppppplVar12[9] != (long *****)0x0) {
    ppppplVar25 = pppppplVar12[9];
    do {
      uStack_358 = 0;
      uStack_338 = 0;
      ppplStack_378 = (long ***)ppppplVar25[4];
      ppppplVar25[4] = (long ****)0x0;
      FUN_1095ba234(auStack_350,ppppplVar25 + 9);
      FUN_1095ba3a0(auStack_370,ppppplVar25 + 5);
      FUN_1095bcc00(&pppppplStack_330,param_2,&ppplStack_378);
      FUN_1095b9398(&ppplStack_378);
      ppppplVar26 = ppppplStack_448;
      pppppplVar12 = (long ******)ppppplStack_450;
      if (((ulong)ppppplStack_250 & 1) == 0) {
        ppppplVar26 = (long *****)(*param_4 + 0x38);
        FUN_1095b9234(ppppplVar26,ppppplVar25);
      }
      else {
        ppppplVar29 = (long *****)ppppplVar25[2];
        ppppplVar30 = (long *****)ppppplVar25[3];
        if (ppppplVar30 != (long *****)0x0) {
          ppppplVar31 = ppppplVar30 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppplVar31,0x10);
            if (bVar7) {
              *ppppplVar31 = (long ****)((long)*ppppplVar31 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pppplStack_418 = (long ****)ppppplStack_328;
        pppppplStack_420 = pppppplStack_330;
        pppplStack_408 = pppplStack_318;
        ppppplStack_410 = ppppplStack_320;
        pppplStack_3f8 = pppplStack_308;
        ppppplStack_400 = ppppplStack_310;
        ppppplStack_3f0 = ppppplStack_300;
        pppplStack_3b0 = (long ****)CONCAT44(uStack_2bc,uStack_2c0);
        ppppplStack_3b8 = ppppplStack_2c8;
        ppppplStack_3c0 = ppppplStack_2d0;
        pppplStack_3a8 = pppplStack_2b8;
        pppplStack_3a0 = pppplStack_2b0;
        ppppplStack_3d8 = ppppplStack_2e8;
        ppppplStack_3e0 = ppppplStack_2f0;
        ppppplStack_3c8 = ppppplStack_2d8;
        ppppplStack_3d0 = ppppplStack_2e0;
        uVar9 = ppppplStack_2a0._0_4_;
        uStack_390 = ppppplStack_2a0._0_4_;
        if (ppppplStack_440 <= ppppplStack_448) {
          lVar22 = (long)ppppplStack_448 - (long)ppppplStack_450;
          uVar23 = (lVar22 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1;
          pppplStack_430 = (long ****)ppppplVar29;
          pppplStack_428 = (long ****)ppppplVar30;
          if (uVar23 < 0x1745d1745d1745e) {
            lVar13 = (long)ppppplStack_440 - (long)ppppplStack_450 >> 4;
            uVar14 = lVar13 * 0x5d1745d1745d1746;
            if (uVar14 < uVar23 || uVar14 - uVar23 == 0) {
              uVar14 = uVar23;
            }
            if (0xba2e8ba2e8ba2d < (ulong)(lVar13 * 0x2e8ba2e8ba2e8ba3)) {
              uVar14 = 0x1745d1745d1745d;
            }
            if (uVar14 < 0x1745d1745d1745e) {
              pppppplVar19 = (long ******)(uVar14 * 0xb0);
              _malloc();
              if (pppppplVar19 != (long ******)0x0) {
                puVar2 = (undefined8 *)((long)pppppplVar19 + lVar22);
                *puVar2 = ppppplVar29;
                puVar2[1] = ppppplVar30;
                puVar2[3] = ppppplStack_328;
                puVar2[2] = pppppplStack_330;
                puVar2[5] = pppplStack_318;
                puVar2[4] = ppppplStack_320;
                puVar2[7] = pppplStack_308;
                puVar2[6] = ppppplStack_310;
                puVar2[8] = ppppplStack_300;
                puVar2[0xf] = ppppplStack_2c8;
                puVar2[0xe] = ppppplStack_2d0;
                puVar2[0x11] = pppplStack_2b8;
                puVar2[0x10] = CONCAT44(uStack_2bc,uStack_2c0);
                puVar2[0x12] = pppplStack_2b0;
                puVar2[0xb] = ppppplStack_2e8;
                puVar2[10] = ppppplStack_2f0;
                puVar2[0xd] = ppppplStack_2d8;
                puVar2[0xc] = ppppplStack_2e0;
                *(undefined4 *)(puVar2 + 0x14) = uVar9;
                pppppplVar20 = pppppplVar12;
                pppppplVar28 = pppppplVar19;
                if (pppppplVar12 != (long ******)ppppplVar26) {
                  do {
                    ppppplVar29 = *pppppplVar20;
                    pppppplVar28[1] = pppppplVar20[1];
                    *pppppplVar28 = ppppplVar29;
                    *pppppplVar20 = (long *****)0x0;
                    pppppplVar20[1] = (long *****)0x0;
                    ppppplVar29 = pppppplVar20[2];
                    ppppplVar31 = pppppplVar20[5];
                    ppppplVar30 = pppppplVar20[4];
                    pppppplVar28[3] = pppppplVar20[3];
                    pppppplVar28[2] = ppppplVar29;
                    pppppplVar28[5] = ppppplVar31;
                    pppppplVar28[4] = ppppplVar30;
                    ppppplVar30 = pppppplVar20[7];
                    ppppplVar29 = pppppplVar20[6];
                    pppppplVar28[8] = pppppplVar20[8];
                    pppppplVar28[7] = ppppplVar30;
                    pppppplVar28[6] = ppppplVar29;
                    ppppplVar32 = pppppplVar20[0xf];
                    ppppplVar31 = pppppplVar20[0xe];
                    ppppplVar30 = pppppplVar20[0x11];
                    ppppplVar29 = pppppplVar20[0x10];
                    ppppplVar34 = pppppplVar20[0xd];
                    ppppplVar33 = pppppplVar20[0xc];
                    pppppplVar28[0x12] = pppppplVar20[0x12];
                    pppppplVar28[0xf] = ppppplVar32;
                    pppppplVar28[0xe] = ppppplVar31;
                    pppppplVar28[0x11] = ppppplVar30;
                    pppppplVar28[0x10] = ppppplVar29;
                    pppppplVar28[0xd] = ppppplVar34;
                    pppppplVar28[0xc] = ppppplVar33;
                    ppppplVar29 = pppppplVar20[10];
                    pppppplVar28[0xb] = pppppplVar20[0xb];
                    pppppplVar28[10] = ppppplVar29;
                    *(undefined4 *)(pppppplVar28 + 0x14) = *(undefined4 *)(pppppplVar20 + 0x14);
                    pppppplVar20 = pppppplVar20 + 0x16;
                    pppppplVar28 = pppppplVar28 + 0x16;
                  } while (pppppplVar20 != (long ******)ppppplVar26);
                  do {
                    FUN_10947766c(pppppplVar12);
                    pppppplVar12 = pppppplVar12 + 0x16;
                    pppppplVar20 = (long ******)ppppplStack_450;
                  } while (pppppplVar12 != (long ******)ppppplVar26);
                }
                ppppplStack_440 = (long *****)(pppppplVar19 + uVar14 * 0x16);
                pppppplVar12 = (long ******)(puVar2 + 0x16);
                ppppplStack_450 = (long *****)pppppplVar19;
                if (pppppplVar20 != (long ******)0x0) {
                  ppppplStack_448 = (long *****)pppppplVar12;
                  _free(pppppplVar20);
                }
                goto LAB_1095b875c;
              }
            }
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
          }
          else {
            FUN_1095b8a44();
          }
          goto LAB_1095b8860;
        }
        *ppppplStack_448 = (long ****)ppppplVar29;
        ppppplStack_448[1] = (long ****)ppppplVar30;
        pppplStack_430 = (long ****)0x0;
        pppplStack_428 = (long ****)0x0;
        ppppplStack_448[3] = (long ****)ppppplStack_328;
        ppppplStack_448[2] = (long ****)pppppplStack_330;
        ppppplStack_448[5] = pppplStack_318;
        ppppplStack_448[4] = (long ****)ppppplStack_320;
        ppppplStack_448[7] = pppplStack_308;
        ppppplStack_448[6] = (long ****)ppppplStack_310;
        ppppplStack_448[8] = (long ****)ppppplStack_300;
        ppppplStack_448[0xb] = (long ****)ppppplStack_2e8;
        ppppplStack_448[10] = (long ****)ppppplStack_2f0;
        ppppplStack_448[0xd] = (long ****)ppppplStack_2d8;
        ppppplStack_448[0xc] = (long ****)ppppplStack_2e0;
        ppppplStack_448[0xf] = (long ****)ppppplStack_2c8;
        ppppplStack_448[0xe] = (long ****)ppppplStack_2d0;
        ppppplStack_448[0x11] = pppplStack_2b8;
        ppppplStack_448[0x10] = pppplStack_3b0;
        ppppplStack_448[0x12] = pppplStack_2b0;
        *(undefined4 *)(ppppplStack_448 + 0x14) = ppppplStack_2a0._0_4_;
        pppppplVar12 = (long ******)(ppppplStack_448 + 0x16);
LAB_1095b875c:
        pppppplVar19 = (long ******)ppppplVar25[4];
        ppppplVar25[4] = (long ****)ppppplStack_298;
        ppppplStack_448 = (long *****)pppppplVar12;
        ppppplStack_298 = (long *****)pppppplVar19;
        FUN_1095ba234(ppppplVar25 + 9,appppplStack_270);
        FUN_1095ba3a0(ppppplVar25 + 5,&ppppplStack_290);
        ppppplVar26 = (long *****)*ppppplVar25;
      }
      if ((char)ppppplStack_250 == '\x01') {
        FUN_1095b9398(&ppppplStack_298);
      }
      ppppplVar25 = ppppplVar26;
    } while (ppppplVar26 != (long *****)0x0);
    pppppplVar12 = (long ******)*param_4;
  }
  ppppplVar25 = ppppplStack_440;
  param_1[1] = ppppplStack_448;
  *param_1 = ppppplStack_450;
  ppppplStack_448 = (long *****)0x0;
  ppppplStack_440 = (long *****)0x0;
  ppppplStack_450 = (long *****)0x0;
  param_1[2] = ppppplVar25;
  param_1[3] = pppppplVar12;
  param_1[4] = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  FUN_1095b91d8(&ppplStack_480);
  pppppplStack_330 = &ppppplStack_450;
  func_0x000109477490(&pppppplStack_330);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1095b885c:
  FUN_109477448();
LAB_1095b8860:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1095b8864);
  (*pcVar10)();
LAB_1095b7e9c:
  ppppppplVar24 = (long *******)*ppppppplVar24;
  goto joined_r0x0001095b7e54;
}



/* Entry: 1095b89ac; end: 1095b8a43;  */

long FUN_1095b89ac(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x2a0;
  func_0x000109477500(&lStack_28);
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_109454ebc(param_1 + 0x280);
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x218);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x200);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1e8);
    __ZdlPv();
  }
  func_0x000109454f14(param_1 + 0x120);
  _free(*(undefined8 *)(param_1 + 0x78));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1095b8a44; end: 1095b8a57;  */

void FUN_1095b8a44(void)

{
  long lVar1;
  long *extraout_x8;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  lVar1 = 0xb8;
  __Znwm();
  FUN_1095b8ab8();
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  return;
}



/* Entry: 1095b8a58; end: 1095b8ab7;  */

void FUN_1095b8a58(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm();
  FUN_1095b8ab8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1095b8ab8; end: 1095b8aff;  */

undefined8 * FUN_1095b8ab8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afe0f0;
  FUN_1095b8bbc(param_1 + 3);
  return param_1;
}



/* Entry: 1095b8b00; end: 1095b8b0f;  */

void FUN_1095b8b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095b8b10; end: 1095b8b2f;  */

void FUN_1095b8b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe0f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b8b30; end: 1095b8bb7;  */

void FUN_1095b8b30(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x60);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1095b9398(plVar1 + 4);
    FUN_10947766c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_1095b8c60(param_1 + 0x48,0);
  if (*(char *)(param_1 + 0x3f) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1095b8bb8; end: 1095b8bbb;  */

void FUN_1095b8bb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b8bbc; end: 1095b8c5f;  */

undefined4 * FUN_1095b8bbc(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 4,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar2;
  }
  *(undefined8 *)(param_1 + 10) = param_3;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x19) = 100;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x26] = 0;
  return param_1;
}



/* Entry: 1095b8c60; end: 1095b8c87;  */

void FUN_1095b8c60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095b8c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095b8c88; end: 1095b8d2b;  */

undefined8 * FUN_1095b8c88(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1095b8cec;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095b8cec:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1095b8d2c; end: 1095b8e57;  */

void FUN_1095b8d2c(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x20;
  long lVar12;
  long alStack_110 [3];
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long alStack_d0 [3];
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)param_2[3];
  plStack_a8 = plVar3;
  plVar8 = param_2;
  plStack_b0 = unaff_x20;
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_a8 = plVar3;
    plStack_b0 = param_2;
    plStack_88 = plVar3;
    if (plVar3 != (long *)0x0) {
      lVar12 = param_2[2];
      plVar4 = plVar3;
      lStack_90 = lVar12;
      if (lVar12 != 0) {
        FUN_1095ba50c(&lStack_80,param_2[4],lVar12 + 8);
        param_2 = (long *)0x48;
        __Znwm();
        param_2[4] = 0;
        param_2[8] = 0;
        *param_2 = lStack_80;
        lStack_80 = 0;
        FUN_1095b8e58(param_2 + 5,auStack_58);
        FUN_1095b8fc4(param_2 + 1,auStack_78);
        plVar8 = param_2;
        FUN_1095b8c60(lVar12 + 0x30);
        plVar4 = &lStack_80;
        FUN_1095b8c88();
      }
      plVar9 = plVar3 + 1;
      do {
        lVar12 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_a8 = plVar4;
      plStack_b0 = param_2;
      if (lVar12 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plStack_a8 = plVar3;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_1095b8c88(&lStack_80);
  func_0x00010947771c(&lStack_90);
  plVar3 = plStack_a8;
  __Unwind_Resume();
  plVar5 = alStack_d0;
  pcStack_98 = FUN_1095b8e58;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  plVar9 = plVar8;
  plVar6 = plStack_a8;
  plVar11 = plStack_b0;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (plVar8 != plVar3) {
    plVar4 = (long *)plVar3[3];
    plVar10 = (long *)plVar8[3];
    plVar6 = plVar8;
    plVar11 = plVar3;
    if (plVar4 == plVar3) {
      if (plVar10 == plVar8) {
        (**(code **)(*plVar4 + 0x18))(plVar4,alStack_d0);
        (**(code **)(*(long *)plVar3[3] + 0x20))();
        plVar3[3] = 0;
        (**(code **)(*(long *)plVar8[3] + 0x18))((long *)plVar8[3],plVar3);
        (**(code **)(*(long *)plVar8[3] + 0x20))();
        plVar8[3] = 0;
        plVar3[3] = (long)plVar3;
        (**(code **)(alStack_d0[0] + 0x18))(alStack_d0);
        (**(code **)(alStack_d0[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar4 + 0x18))();
        plVar5 = (long *)plVar3[3];
        (**(code **)(*plVar5 + 0x20))();
        plVar3[3] = plVar8[3];
      }
      plVar8[3] = (long)plVar8;
      plVar4 = plVar5;
    }
    else if (plVar10 == plVar8) {
      plVar9 = plVar3;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      plVar4 = (long *)plVar8[3];
      (**(code **)(*plVar4 + 0x20))();
      plVar8[3] = plVar3[3];
      plVar3[3] = (long)plVar3;
    }
    else {
      plVar3[3] = (long)plVar10;
      plVar8[3] = (long)plVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar9 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar3 = alStack_110;
  pcStack_d8 = FUN_1095b8fc4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  plStack_f0 = plVar11;
  plStack_e8 = plVar6;
  ppuStack_e0 = &puStack_a0;
  if (plVar9 != plVar4) {
    plVar6 = (long *)plVar4[3];
    plVar11 = (long *)plVar9[3];
    if (plVar6 == plVar4) {
      if (plVar11 == plVar9) {
        (**(code **)(*plVar6 + 0x18))(plVar6,alStack_110);
        (**(code **)(*(long *)plVar4[3] + 0x20))();
        plVar4[3] = 0;
        (**(code **)(*(long *)plVar9[3] + 0x18))((long *)plVar9[3],plVar4);
        (**(code **)(*(long *)plVar9[3] + 0x20))();
        plVar9[3] = 0;
        plVar4[3] = (long)plVar4;
        (**(code **)(alStack_110[0] + 0x18))(alStack_110);
        (**(code **)(alStack_110[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar6 + 0x18))();
        plVar3 = (long *)plVar4[3];
        (**(code **)(*plVar3 + 0x20))();
        plVar4[3] = plVar9[3];
      }
      plVar9[3] = (long)plVar9;
      plVar4 = plVar3;
    }
    else if (plVar11 == plVar9) {
      plVar8 = plVar4;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      plVar3 = (long *)plVar9[3];
      (**(code **)(*plVar3 + 0x20))();
      plVar9[3] = plVar4[3];
      plVar4[3] = (long)plVar4;
      plVar4 = plVar3;
    }
    else {
      plVar4[3] = (long)plVar11;
      plVar9[3] = (long)plVar6;
      plVar4 = plVar6;
    }
  }
  iVar7 = (int)plVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x0001094776c4(plVar4 + 3);
  if (plVar4[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b8e58; end: 1095b8fc3;  */

void FUN_1095b8e58(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long alStack_80 [3];
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  plVar5 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar6 = (long *)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (plVar1 == param_1) {
      if (plVar6 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      plVar1 = plVar2;
    }
    else if (plVar6 == param_2) {
      plVar5 = param_1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar1 = (long *)param_2[3];
      (**(code **)(*plVar1 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar6;
      param_2[3] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar6 = alStack_80;
  pcStack_48 = FUN_1095b8fc4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar5;
  plStack_60 = unaff_x20;
  plStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar5 != plVar1) {
    plVar3 = (long *)plVar1[3];
    plVar7 = (long *)plVar5[3];
    if (plVar3 == plVar1) {
      if (plVar7 == plVar5) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = 0;
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],plVar1);
        (**(code **)(*(long *)plVar5[3] + 0x20))();
        plVar5[3] = 0;
        plVar1[3] = (long)plVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar6 = (long *)plVar1[3];
        (**(code **)(*plVar6 + 0x20))();
        plVar1[3] = plVar5[3];
      }
      plVar5[3] = (long)plVar5;
      plVar1 = plVar6;
    }
    else if (plVar7 == plVar5) {
      plVar2 = plVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar6 = (long *)plVar5[3];
      (**(code **)(*plVar6 + 0x20))();
      plVar5[3] = plVar1[3];
      plVar1[3] = (long)plVar1;
      plVar1 = plVar6;
    }
    else {
      plVar1[3] = (long)plVar7;
      plVar5[3] = (long)plVar3;
      plVar1 = plVar3;
    }
  }
  iVar4 = (int)plVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x0001094776c4(plVar1 + 3);
  if (plVar1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b8fc4; end: 1095b912f;  */

void FUN_1095b8fc4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x0001094776c4(param_1 + 3);
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b9130; end: 1095b9167;  */

void FUN_1095b9130(long param_1)

{
  func_0x0001094776c4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095b9168; end: 1095b918f;  */

void FUN_1095b9168(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110afe130;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 1095b9190; end: 1095b91d7;  */

void FUN_1095b9190(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10947766c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095b91d8; end: 1095b9233;  */

long * FUN_1095b91d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10947766c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095b9234; end: 1095b9397;  */

long FUN_1095b9234(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  lVar1 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  plVar3 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar3;
    plVar3 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  lVar8 = lVar1;
  if (plVar7 == param_1 + 2) {
LAB_1095b92c0:
    if (lVar1 == 0) {
LAB_1095b92f4:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar8 = *param_2;
      goto LAB_1095b92fc;
    }
    uVar9 = *(ulong *)(lVar1 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar9 & uVar6;
    }
    else if (uVar5 <= uVar9) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar2 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1095b92f4;
  }
  else {
    uVar9 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar9 & uVar6;
    }
    else if (uVar5 <= uVar9) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar2 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1095b92c0;
LAB_1095b92fc:
    if (lVar8 == 0) goto LAB_1095b9338;
  }
  uVar9 = *(ulong *)(lVar8 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar9 = uVar9 & uVar6;
  }
  else if (uVar5 <= uVar9) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar6 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(*param_1 + uVar9 * 8) = plVar7;
    lVar8 = *param_2;
  }
LAB_1095b9338:
  *plVar7 = lVar8;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x0001095b9364(1);
  return lVar1;
}



/* Entry: 1095b9398; end: 1095b943b;  */

undefined8 * FUN_1095b9398(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1095b93fc;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095b93fc:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1095b943c; end: 1095b98c3;  */

void FUN_1095b943c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  long *plStack_170;
  undefined8 **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  byte bStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = *(long **)(param_2 + 0x10);
  plVar5 = (long *)plVar14[1];
  if ((plVar5 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_198 = plVar5, plVar5 != (long *)0x0)) {
    lVar12 = *plVar14;
    lStack_1a0 = lVar12;
    if (lVar12 != 0) {
      plVar9 = plVar5;
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long **)(lVar12 + 0x80) = plVar9;
      puVar11 = *(undefined8 **)(lVar12 + 0x30);
      uStack_f8 = 0;
      uStack_d8 = 0;
      uStack_118 = *puVar11;
      *puVar11 = 0;
      FUN_1095b8e58(auStack_f0,puVar11 + 5);
      FUN_1095b8fc4(auStack_110,puVar11 + 1);
      FUN_1095ba5a8(&puStack_d0,plVar14 + 2,plVar14 + 0x54,&uStack_118);
      puVar11 = &uStack_118;
      FUN_1095b8c88();
      *(int *)(lVar12 + 0x74) = *(int *)(lVar12 + 0x74) + 1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(double *)(lVar12 + 0x88) = (double)((long)puVar11 - *(long *)(lVar12 + 0x80)) / 1000000000.0
      ;
      puVar11 = *(undefined8 **)(lVar12 + 0x30);
      uVar8 = *puVar11;
      *puVar11 = uStack_b8;
      uStack_b8 = uVar8;
      FUN_1095b8e58(puVar11 + 5,auStack_90);
      FUN_1095b8fc4(puVar11 + 1,auStack_b0);
      lStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      if (puStack_d0 != puStack_c8) {
        puVar11 = puStack_d0;
        do {
          FUN_1095bc730(&ppuStack_168,puVar11,plVar14 + 2,puVar11 + 2,puVar11 + 0x14);
          if ((bStack_120 & 1) != 0) {
            puVar6 = (undefined8 *)0x48;
            __Znwm();
            puVar6[4] = 0;
            puVar6[8] = 0;
            *puVar6 = ppuStack_168;
            ppuStack_168 = (undefined8 **)0x0;
            FUN_1095ba234(puVar6 + 5,&uStack_140);
            FUN_1095ba3a0(puVar6 + 1,&ppuStack_160);
            uVar13 = uStack_1b8;
            uVar8 = *puVar11;
            uVar1 = puVar11[1];
            puStack_1c8 = puVar6;
            if (uStack_1b8 < uStack_1b0) {
              FUN_1095b9934(uStack_1b8,uVar8,uVar1,&puStack_1c8);
              uVar13 = uVar13 + 0x20;
            }
            else {
              lVar12 = uStack_1b8 - lStack_1c0;
              uVar13 = (lVar12 >> 5) + 1;
              if (uVar13 >> 0x3b != 0) {
                FUN_1095b9a3c();
                goto LAB_1095b9818;
              }
              uVar10 = (long)(uStack_1b0 - lStack_1c0) >> 4;
              if (uVar10 <= uVar13) {
                uVar10 = uVar13;
              }
              if (0x7fffffffffffffdf < uStack_1b0 - lStack_1c0) {
                uVar10 = 0x7ffffffffffffff;
              }
              plStack_170 = &lStack_1c0;
              if (uVar10 == 0) {
                lVar7 = 0;
              }
              else {
                if (uVar10 >> 0x3b != 0) goto LAB_1095b9814;
                lVar7 = uVar10 << 5;
                __Znwm();
              }
              lVar12 = lVar7 + lVar12;
              uVar10 = lVar7 + uVar10 * 0x20;
              lStack_190 = lVar7;
              lStack_188 = lVar12;
              lStack_180 = lVar12;
              uStack_178 = uVar10;
              FUN_1095b9934(lVar12,uVar8,uVar1,&puStack_1c8);
              lVar7 = lStack_1c0;
              uVar13 = lVar12 + 0x20;
              lVar12 = lVar12 - (uStack_1b8 - lStack_1c0);
              _memcpy(lVar12,lStack_1c0);
              lStack_180 = lVar7;
              uStack_178 = uStack_1b0;
              lStack_190 = lVar7;
              lStack_188 = lVar7;
              lStack_1c0 = lVar12;
              uStack_1b8 = uVar13;
              uStack_1b0 = uVar10;
              FUN_1095b9a50(&lStack_190);
            }
            uStack_1b8 = uVar13;
            if (puStack_1c8 != (undefined8 *)0x0) {
              FUN_1095b9398();
              __ZdlPv();
            }
            if (bStack_120 == 1) {
              FUN_1095b9398(&ppuStack_168);
            }
          }
          puVar11 = puVar11 + 0x18;
          lVar12 = lStack_1a0;
        } while (puVar11 != puStack_c8);
      }
      uStack_138 = uStack_1b0;
      uStack_140 = uStack_1b8;
      lStack_148 = lStack_1c0;
      plVar9 = *(long **)(lVar12 + 0x28);
      lStack_150 = plVar14[1];
      lStack_158 = *plVar14;
      if (plVar14[1] != 0) {
        plVar14 = (long *)(plVar14[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      lStack_1c0 = 0;
      ppuStack_168 = (undefined8 **)FUN_1095b9b04;
      ppuStack_160 = &PTR_FUN_110afe1a8;
      lStack_190 = 0;
      lStack_188 = 0;
      uStack_178 = 0;
      plStack_170 = (long *)0x0;
      lStack_180 = 0;
      if (*plVar9 == 0) {
        FUN_1095b9b04(&ppuStack_168);
      }
      else {
        FUN_10947b248(*plVar9,&ppuStack_168);
      }
      (*(code *)*ppuStack_160)(&ppuStack_160);
      FUN_1095ba0f4(&lStack_180);
      if (lStack_188 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_1095ba0f4(&lStack_1c0);
      FUN_1095b8c88(&uStack_b8);
      ppuStack_168 = &puStack_d0;
      func_0x0001095ba15c(&ppuStack_168);
    }
    plVar14 = plVar5 + 1;
    do {
      lVar12 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_1095b9814:
  func_0x000104c4f740();
LAB_1095b9818:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095b981c);
  (*pcVar4)();
}



/* Entry: 1095b98c4; end: 1095b9933;  */

long FUN_1095b98c4(long param_1)

{
  FUN_1095ba0f4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1095b9934; end: 1095b99c7;  */

undefined8 * FUN_1095b9934(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *param_4;
  param_1[2] = lVar5;
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110afe158;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar5;
  }
  param_1[3] = puVar4;
  *param_4 = 0;
  return param_1;
}



/* Entry: 1095b99c8; end: 1095b99cb;  */

void FUN_1095b99c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095b99cc; end: 1095b99ff;  */

void FUN_1095b99cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b9a00; end: 1095b9a37;  */

undefined8 FUN_1095b9a00(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe198);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095b9a38; end: 1095b9a3b;  */

void FUN_1095b9a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095b9a3c; end: 1095b9a4f;  */

long * FUN_1095b9a3c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x20;
    func_0x0001095b9a9c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1095b9a50; end: 1095b9b03;  */

long * FUN_1095b9a50(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    func_0x0001095b9a9c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095b9b04; end: 1095ba07f;  */

void FUN_1095b9b04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  
  plVar6 = *(long **)(param_1 + 0x18);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x60) = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
      plVar21 = *(long **)(param_1 + 0x20);
      plVar1 = *(long **)(param_1 + 0x28);
      if (plVar21 != plVar1) {
        *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
        do {
          if ((*(char *)(lVar10 + 4) == '\x01') && (*(long *)(lVar10 + 0x50) != 0)) break;
          plVar7 = (long *)plVar21[1];
          if ((plVar7 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
            lVar19 = *plVar21;
            if (lVar19 != 0) {
              plVar20 = (long *)plVar21[2];
              plVar8 = (long *)0x68;
              __Znwm();
              plVar8[2] = lVar19;
              *plVar8 = 0;
              plVar8[1] = 0;
              plVar8[3] = (long)plVar7;
              plVar17 = plVar7 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *plVar17 = *plVar17 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              plVar8[8] = 0;
              plVar8[0xc] = 0;
              plVar8[4] = *plVar20;
              *plVar20 = 0;
              FUN_1095ba234(plVar8 + 9,plVar20 + 5);
              FUN_1095ba3a0(plVar8 + 5,plVar20 + 1);
              uVar11 = plVar8[2];
              uVar13 = ((ulong)(uint)((int)uVar11 << 3) + 8 ^ uVar11 >> 0x20) * -0x622015f714c7d297;
              uVar13 = (uVar11 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
              uVar12 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
              plVar8[1] = uVar12;
              uVar13 = *(ulong *)(lVar10 + 0x40);
              if (uVar13 != 0) {
                uVar14 = uVar13 - 1;
                if ((uVar13 & uVar14) == 0) {
                  uVar15 = uVar12 & uVar14;
                }
                else {
                  uVar15 = uVar12;
                  if (uVar13 <= uVar12) {
                    uVar15 = 0;
                    if (uVar13 != 0) {
                      uVar15 = uVar12 / uVar13;
                    }
                    uVar15 = uVar12 - uVar15 * uVar13;
                  }
                }
                plVar17 = *(long **)(*(long *)(lVar10 + 0x38) + uVar15 * 8);
                if (plVar17 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar17 = (long *)*plVar17;
                      if (plVar17 == (long *)0x0) goto LAB_1095b9cd8;
                      uVar18 = plVar17[1];
                      if (uVar18 != uVar12) break;
                      if (plVar17[2] == uVar11) {
                        FUN_1095b9398(plVar8 + 4);
                        FUN_10947766c(plVar8 + 2);
                        __ZdlPv(plVar8);
                        goto LAB_1095b9f38;
                      }
                    }
                    if ((uVar13 & uVar14) == 0) {
                      uVar18 = uVar18 & uVar14;
                    }
                    else if (uVar13 <= uVar18) {
                      uVar4 = 0;
                      if (uVar13 != 0) {
                        uVar4 = uVar18 / uVar13;
                      }
                      uVar18 = uVar18 - uVar4 * uVar13;
                    }
                  } while (uVar18 == uVar15);
                }
              }
LAB_1095b9cd8:
              fVar22 = (float)(*(long *)(lVar10 + 0x50) + 1);
              if ((uVar13 == 0) || (*(float *)(lVar10 + 0x58) * (float)uVar13 < fVar22)) {
                uVar11 = 1;
                if (2 < uVar13) {
                  uVar11 = (ulong)((uVar13 & uVar13 - 1) != 0);
                }
                uVar11 = uVar11 | uVar13 << 1;
                uVar12 = (ulong)(fVar22 / *(float *)(lVar10 + 0x58));
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (uVar11 - 1 == 0) {
                  uVar11 = 2;
                }
                else if ((uVar11 & uVar11 - 1) != 0) {
                  __ZNSt3__112__next_primeEm();
                  uVar13 = *(ulong *)(lVar10 + 0x40);
                }
                if (uVar13 < uVar11) {
LAB_1095b9d58:
                  if (uVar11 >> 0x3d != 0) {
                    func_0x000104c4f740();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1095ba04c);
                    (*pcVar5)();
                  }
                  lVar19 = uVar11 << 3;
                  __Znwm();
                  lVar9 = *(long *)(lVar10 + 0x38);
                  *(long *)(lVar10 + 0x38) = lVar19;
                  if (lVar9 != 0) {
                    __ZdlPv();
                  }
                  uVar13 = 0;
                  *(ulong *)(lVar10 + 0x40) = uVar11;
                  do {
                    *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar13 * 8) = 0;
                    uVar13 = uVar13 + 1;
                  } while (uVar11 != uVar13);
                  plVar17 = *(long **)(lVar10 + 0x48);
                  uVar13 = uVar11;
                  if (plVar17 != (long *)0x0) {
                    uVar12 = plVar17[1];
                    uVar14 = uVar11 - 1;
                    if ((uVar11 & uVar14) == 0) {
                      uVar12 = uVar12 & uVar14;
                    }
                    else if (uVar11 <= uVar12) {
                      uVar15 = 0;
                      if (uVar11 != 0) {
                        uVar15 = uVar12 / uVar11;
                      }
                      uVar12 = uVar12 - uVar15 * uVar11;
                    }
                    *(undefined8 **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) =
                         (undefined8 *)(lVar10 + 0x48);
                    plVar20 = (long *)*plVar17;
                    while (plVar20 != (long *)0x0) {
                      uVar15 = plVar20[1];
                      if ((uVar11 & uVar14) == 0) {
                        uVar15 = uVar15 & uVar14;
                      }
                      else if (uVar11 <= uVar15) {
                        uVar18 = 0;
                        if (uVar11 != 0) {
                          uVar18 = uVar15 / uVar11;
                        }
                        uVar15 = uVar15 - uVar18 * uVar11;
                      }
                      plVar16 = plVar20;
                      if (uVar15 != uVar12) {
                        lVar19 = *(long *)(lVar10 + 0x38);
                        if (*(long *)(lVar19 + uVar15 * 8) == 0) {
                          *(long **)(lVar19 + uVar15 * 8) = plVar17;
                          uVar12 = uVar15;
                        }
                        else {
                          *plVar17 = *plVar20;
                          *plVar20 = **(undefined8 **)(lVar19 + uVar15 * 8);
                          **(long **)(lVar19 + uVar15 * 8) = (long)plVar20;
                          plVar16 = plVar17;
                        }
                      }
                      plVar17 = plVar16;
                      plVar20 = (long *)*plVar16;
                    }
                  }
                }
                else if (uVar11 < uVar13) {
                  uVar12 = (ulong)((float)*(ulong *)(lVar10 + 0x50) / *(float *)(lVar10 + 0x58));
                  if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if (1 < uVar12) {
                    uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
                  }
                  if (uVar11 <= uVar12) {
                    uVar11 = uVar12;
                  }
                  if (uVar11 < uVar13) {
                    if (uVar11 != 0) goto LAB_1095b9d58;
                    lVar19 = *(long *)(lVar10 + 0x38);
                    *(undefined8 *)(lVar10 + 0x38) = 0;
                    if (lVar19 != 0) {
                      __ZdlPv();
                    }
                    *(undefined8 *)(lVar10 + 0x40) = 0;
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = *(ulong *)(lVar10 + 0x40);
                  }
                }
              }
              uVar12 = plVar8[1];
              uVar11 = uVar13 - 1;
              if ((uVar13 & uVar11) == 0) {
                uVar12 = uVar11 & uVar12;
              }
              else if (uVar13 <= uVar12) {
                uVar14 = 0;
                if (uVar13 != 0) {
                  uVar14 = uVar12 / uVar13;
                }
                uVar12 = uVar12 - uVar14 * uVar13;
              }
              lVar19 = *(long *)(lVar10 + 0x38);
              plVar17 = *(long **)(lVar19 + uVar12 * 8);
              if (plVar17 == (long *)0x0) {
                plVar17 = (long *)(lVar10 + 0x48);
                *plVar8 = *plVar17;
                *plVar17 = (long)plVar8;
                *(long **)(lVar19 + uVar12 * 8) = plVar17;
                if (*plVar8 != 0) {
                  uVar12 = *(ulong *)(*plVar8 + 8);
                  if ((uVar13 & uVar11) == 0) {
                    uVar12 = uVar12 & uVar11;
                  }
                  else if (uVar13 <= uVar12) {
                    uVar11 = 0;
                    if (uVar13 != 0) {
                      uVar11 = uVar12 / uVar13;
                    }
                    uVar12 = uVar12 - uVar11 * uVar13;
                  }
                  plVar17 = (long *)(*(long *)(lVar10 + 0x38) + uVar12 * 8);
                  goto LAB_1095b9f28;
                }
              }
              else {
                *plVar8 = *plVar17;
LAB_1095b9f28:
                *plVar17 = (long)plVar8;
              }
              *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + 1;
            }
LAB_1095b9f38:
            plVar17 = plVar7 + 1;
            do {
              lVar19 = *plVar17;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar3) {
                *plVar17 = lVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar21 = plVar21 + 4;
        } while (plVar21 != plVar1);
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
    }
    plVar21 = plVar6 + 1;
    do {
      lVar10 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 1095ba080; end: 1095ba0b7;  */

void FUN_1095ba080(long param_1)

{
  FUN_1095ba0f4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1095ba0b8; end: 1095ba0f3;  */

void FUN_1095ba0b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110afe1a8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1095ba0f4; end: 1095ba1cb;  */

void FUN_1095ba0f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x20;
        func_0x0001095b9a9c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095ba1cc; end: 1095ba1fb;  */

long FUN_1095ba1cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
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



/* Entry: 1095ba1fc; end: 1095ba21b;  */

void FUN_1095ba1fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1095b89ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095ba21c; end: 1095ba233;  */

void FUN_1095ba21c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1095ba234; end: 1095ba39f;  */

void FUN_1095ba234(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_b8;
  long alStack_80 [3];
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  plVar5 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar6 = (long *)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (plVar1 == param_1) {
      if (plVar6 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      plVar1 = plVar2;
    }
    else if (plVar6 == param_2) {
      plVar5 = param_1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar1 = (long *)param_2[3];
      (**(code **)(*plVar1 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar6;
      param_2[3] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_48 = FUN_1095ba3a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar5;
  plStack_60 = unaff_x20;
  plStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar5 != plVar1) {
    plVar6 = (long *)plVar1[3];
    plVar7 = (long *)plVar5[3];
    if (plVar6 == plVar1) {
      if (plVar7 == plVar5) {
        (**(code **)(*plVar6 + 0x18))(plVar6,alStack_80);
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = 0;
        (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],plVar1);
        (**(code **)(*(long *)plVar5[3] + 0x20))();
        plVar5[3] = 0;
        plVar1[3] = (long)plVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))(alStack_80);
      }
      else {
        (**(code **)(*plVar6 + 0x18))();
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = plVar5[3];
      }
      plVar5[3] = (long)plVar5;
    }
    else if (plVar7 == plVar5) {
      plVar2 = plVar1;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*(long *)plVar5[3] + 0x20))();
      plVar5[3] = plVar1[3];
      plVar1[3] = (long)plVar1;
    }
    else {
      plVar1[3] = (long)plVar7;
      plVar5[3] = (long)plVar6;
    }
  }
  iVar4 = (int)plVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar3 = 0x90;
  __Znwm();
  FUN_1095bb74c();
  uStack_b8 = 0;
  *extraout_x8 = uVar3;
  extraout_x8[1] = &PTR_FUN_110afe1e8;
  extraout_x8[4] = extraout_x8 + 1;
  extraout_x8[5] = &PTR_DAT_110afe278;
  extraout_x8[8] = extraout_x8 + 5;
  FUN_1095bb854(&uStack_b8,0);
  return;
}



/* Entry: 1095ba3a0; end: 1095ba50b;  */

void FUN_1095ba3a0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  undefined8 uStack_78;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar2 = 0x90;
  __Znwm();
  FUN_1095bb74c();
  uStack_78 = 0;
  *extraout_x8 = uVar2;
  extraout_x8[1] = &PTR_FUN_110afe1e8;
  extraout_x8[4] = extraout_x8 + 1;
  extraout_x8[5] = &PTR_DAT_110afe278;
  extraout_x8[8] = extraout_x8 + 5;
  FUN_1095bb854(&uStack_78,0);
  return;
}



/* Entry: 1095ba50c; end: 1095ba5a7;  */

void FUN_1095ba50c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0x90;
  __Znwm();
  FUN_1095bb74c();
  uStack_38 = 0;
  *param_1 = uVar1;
  param_1[1] = &PTR_FUN_110afe1e8;
  param_1[4] = param_1 + 1;
  param_1[5] = &PTR_DAT_110afe278;
  param_1[8] = param_1 + 5;
  FUN_1095bb854(&uStack_38,0);
  return;
}



/* Entry: 1095ba5a8; end: 1095bb453;  */

ulong * FUN_1095ba5a8(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long **pplVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong unaff_x23;
  long lVar26;
  ulong *puVar27;
  long *plStack_310;
  long **pplStack_308;
  long **pplStack_300;
  long lStack_2f0;
  ulong uStack_2e8;
  long *plStack_2e0;
  ulong uStack_2d8;
  float fStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long **pplStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2e8 = 0;
  lStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  fStack_2d0 = 1.0;
  plStack_310 = (long *)0x0;
  pplStack_308 = (long **)0x0;
  pplStack_300 = (long **)0x0;
  plVar25 = (long *)*param_3;
  plVar4 = (long *)param_3[1];
  if (plVar25 == plVar4) {
    puVar24 = (undefined8 *)*param_4;
  }
  else {
    do {
      uVar18 = uStack_2e8;
      uVar3 = *(ulong *)*plVar25;
      plVar21 = (long *)((ulong *)*plVar25)[1];
      if (plVar21 != (long *)0x0) {
        plVar17 = plVar21 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_1b0 = uVar3;
      plStack_1a8 = plVar21;
      if (uVar3 == 0) {
        plStack_d0 = *(long **)(*plVar25 + 0x10);
        plStack_c8 = *(long **)(*plVar25 + 0x18);
        if (plStack_c8 != (long *)0x0) {
          plVar21 = plStack_c8 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (plStack_d0 == (long *)0x0) {
          FUN_1093fd0ac(&UNK_10f57560a);
          goto LAB_1095bb304;
        }
        FUN_1095bbf20(&pplStack_270,*plVar25,plVar25[1],plStack_d0 + 2,0,0);
        if (pplStack_308 < pplStack_300) {
          pplStack_308[1] = plStack_268;
          *pplStack_308 = (long *)pplStack_270;
          plVar1 = plStack_248;
          plVar17 = plStack_250;
          plVar21 = plStack_260;
          pplStack_270 = (long **)0x0;
          plStack_268 = (long *)0x0;
          pplStack_308[3] = plStack_258;
          pplStack_308[2] = plVar21;
          pplStack_308[5] = plVar1;
          pplStack_308[4] = plVar17;
          plVar17 = plStack_230;
          plVar21 = plStack_240;
          pplStack_308[7] = plStack_238;
          pplStack_308[6] = plVar21;
          pplStack_308[8] = plVar17;
          plVar21 = plStack_220;
          pplStack_308[0xb] = plStack_218;
          pplStack_308[10] = plVar21;
          plVar9 = plStack_1e0;
          plVar8 = plStack_1e8;
          plVar22 = plStack_1f0;
          plVar1 = plStack_1f8;
          plVar17 = plStack_200;
          plVar21 = plStack_210;
          pplStack_308[0xd] = plStack_208;
          pplStack_308[0xc] = plVar21;
          pplStack_308[0xf] = plVar1;
          pplStack_308[0xe] = plVar17;
          pplStack_308[0x11] = plVar8;
          pplStack_308[0x10] = plVar22;
          pplStack_308[0x12] = plVar9;
          pplStack_308[0x14] = (long *)0x0;
          pplStack_308[0x15] = (long *)0x0;
          pplStack_308[0x16] = (long *)0x0;
          pplStack_308[0x15] = plStack_1c8;
          pplStack_308[0x14] = plStack_1d0;
          pplStack_308[0x16] = plStack_1c0;
          plStack_1d0 = (long *)0x0;
          plStack_1c8 = (long *)0x0;
          plStack_1c0 = (long *)0x0;
          pplStack_308 = pplStack_308 + 0x18;
        }
        else {
          pplVar11 = &plStack_310;
          FUN_1095bb498(pplVar11,&pplStack_270);
          pplStack_308 = pplVar11;
          if (plStack_1d0 != (long *)0x0) {
            plStack_1c8 = plStack_1d0;
            __ZdlPv();
          }
        }
        plVar21 = plStack_268;
        if (plStack_268 != (long *)0x0) {
          plVar17 = plStack_268 + 1;
          do {
            lVar19 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_268 + 0x10))(plStack_268);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        plVar17 = plStack_c8;
        plVar21 = plStack_1a8;
        if (plStack_c8 != (long *)0x0) {
          plVar1 = plStack_c8 + 1;
          do {
            lVar19 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            plVar21 = plStack_1a8;
          }
        }
      }
      else {
        uVar16 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
        uVar16 = (uVar3 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
        uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
        if (uStack_2e8 != 0) {
          uVar14 = uStack_2e8 - 1;
          if ((uStack_2e8 & uVar14) == 0) {
            unaff_x23 = uVar14 & uVar16;
          }
          else {
            unaff_x23 = uVar16;
            if (uStack_2e8 <= uVar16) {
              uVar20 = 0;
              if (uStack_2e8 != 0) {
                uVar20 = uVar16 / uStack_2e8;
              }
              unaff_x23 = uVar16 - uVar20 * uStack_2e8;
            }
          }
          plVar17 = *(long **)(lStack_2f0 + unaff_x23 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_1095ba868;
                uVar20 = plVar17[1];
                if (uVar20 != uVar16) break;
                if (plVar17[2] == uVar3) goto LAB_1095bab28;
              }
              if ((uStack_2e8 & uVar14) == 0) {
                uVar20 = uVar20 & uVar14;
              }
              else if (uStack_2e8 <= uVar20) {
                uVar23 = 0;
                if (uStack_2e8 != 0) {
                  uVar23 = uVar20 / uStack_2e8;
                }
                uVar20 = uVar20 - uVar23 * uStack_2e8;
              }
            } while (uVar20 == unaff_x23);
          }
        }
LAB_1095ba868:
        plVar17 = (long *)0x30;
        __Znwm();
        *plVar17 = 0;
        plVar17[1] = uVar16;
        plVar17[2] = uVar3;
        plVar17[3] = (long)plVar21;
        if (plVar21 != (long *)0x0) {
          plVar21 = plVar21 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        lVar19 = plVar25[1];
        lVar26 = *plVar25;
        plVar17[5] = plVar25[1];
        plVar17[4] = lVar26;
        if (lVar19 != 0) {
          plVar21 = (long *)(lVar19 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *plVar21 = *plVar21 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if ((uVar18 == 0) || (fStack_2d0 * (float)uVar18 < (float)(uStack_2d8 + 1))) {
          uVar14 = 1;
          if (2 < uVar18) {
            uVar14 = (ulong)((uVar18 & uVar18 - 1) != 0);
          }
          uVar14 = uVar14 | uVar18 << 1;
          uVar18 = (ulong)((float)(uStack_2d8 + 1) / fStack_2d0);
          if (uVar14 <= uVar18) {
            uVar14 = uVar18;
          }
          if (uVar14 - 1 == 0) {
            uVar14 = 2;
          }
          else if ((uVar14 & uVar14 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          uVar18 = uStack_2e8;
          if (uStack_2e8 < uVar14) {
LAB_1095ba93c:
            if (uVar14 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_1095bb304;
            }
            lVar19 = uVar14 << 3;
            __Znwm();
            bVar6 = lStack_2f0 != 0;
            lStack_2f0 = lVar19;
            if (bVar6) {
              __ZdlPv();
            }
            uVar18 = 0;
            do {
              *(undefined8 *)(lStack_2f0 + uVar18 * 8) = 0;
              uVar18 = uVar18 + 1;
            } while (uVar14 != uVar18);
            uStack_2e8 = uVar14;
            if (plStack_2e0 != (long *)0x0) {
              uVar18 = plStack_2e0[1];
              uVar20 = uVar14 - 1;
              if ((uVar14 & uVar20) == 0) {
                uVar18 = uVar18 & uVar20;
              }
              else if (uVar14 <= uVar18) {
                uVar23 = 0;
                if (uVar14 != 0) {
                  uVar23 = uVar18 / uVar14;
                }
                uVar18 = uVar18 - uVar23 * uVar14;
              }
              *(long ***)(lStack_2f0 + uVar18 * 8) = &plStack_2e0;
              plVar21 = (long *)*plStack_2e0;
              plVar1 = plStack_2e0;
              while (plVar21 != (long *)0x0) {
                uVar23 = plVar21[1];
                if ((uVar14 & uVar20) == 0) {
                  uVar23 = uVar23 & uVar20;
                }
                else if (uVar14 <= uVar23) {
                  uVar7 = 0;
                  if (uVar14 != 0) {
                    uVar7 = uVar23 / uVar14;
                  }
                  uVar23 = uVar23 - uVar7 * uVar14;
                }
                plVar22 = plVar21;
                if (uVar23 != uVar18) {
                  if (*(long *)(lStack_2f0 + uVar23 * 8) == 0) {
                    *(long **)(lStack_2f0 + uVar23 * 8) = plVar1;
                    uVar18 = uVar23;
                  }
                  else {
                    *plVar1 = *plVar21;
                    *plVar21 = **(long **)(lStack_2f0 + uVar23 * 8);
                    **(undefined8 **)(lStack_2f0 + uVar23 * 8) = plVar21;
                    plVar22 = plVar1;
                  }
                }
                plVar1 = plVar22;
                plVar21 = (long *)*plVar22;
              }
            }
          }
          else if (uVar14 < uStack_2e8) {
            uVar20 = (ulong)((float)uStack_2d8 / fStack_2d0);
            if ((uStack_2e8 < 3) || ((uStack_2e8 & uStack_2e8 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar20) {
              uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
            }
            lVar19 = lStack_2f0;
            if (uVar14 <= uVar20) {
              uVar14 = uVar20;
            }
            if (uVar14 < uVar18) {
              if (uVar14 != 0) goto LAB_1095ba93c;
              lStack_2f0 = 0;
              if (lVar19 != 0) {
                __ZdlPv();
              }
              uStack_2e8 = 0;
            }
          }
          uVar18 = uStack_2e8;
          if ((uStack_2e8 & uStack_2e8 - 1) == 0) {
            unaff_x23 = uStack_2e8 - 1 & uVar16;
          }
          else {
            unaff_x23 = uVar16;
            if (uStack_2e8 <= uVar16) {
              uVar14 = 0;
              if (uStack_2e8 != 0) {
                uVar14 = uVar16 / uStack_2e8;
              }
              unaff_x23 = uVar16 - uVar14 * uStack_2e8;
            }
          }
        }
        plVar21 = *(long **)(lStack_2f0 + unaff_x23 * 8);
        if (plVar21 == (long *)0x0) {
          *plVar17 = (long)plStack_2e0;
          *(long ***)(lStack_2f0 + unaff_x23 * 8) = &plStack_2e0;
          plStack_2e0 = plVar17;
          if (*plVar17 != 0) {
            uVar16 = *(ulong *)(*plVar17 + 8);
            if ((uVar18 & uVar18 - 1) == 0) {
              uVar16 = uVar16 & uVar18 - 1;
            }
            else if (uVar18 <= uVar16) {
              uVar14 = 0;
              if (uVar18 != 0) {
                uVar14 = uVar16 / uVar18;
              }
              uVar16 = uVar16 - uVar14 * uVar18;
            }
            *(long **)(lStack_2f0 + uVar16 * 8) = plVar17;
          }
        }
        else {
          *plVar17 = *plVar21;
          *plVar21 = (long)plVar17;
        }
        uStack_2d8 = uStack_2d8 + 1;
LAB_1095bab28:
        plVar21 = plStack_1a8;
        if (*(int *)(uVar3 + 8) == 0) {
          puVar13 = &uStack_2b0;
        }
        else {
          if (*(int *)(uVar3 + 8) != 3) {
            FUN_1093fd0ac(&UNK_10f5755ed);
            goto LAB_1095bb304;
          }
          puVar13 = &uStack_2c8;
        }
        puVar27 = (ulong *)puVar13[1];
        if (puVar27 < (ulong *)puVar13[2]) {
          *puVar27 = uVar3;
          puVar27[1] = (ulong)plStack_1a8;
          if (plStack_1a8 != (long *)0x0) {
            plVar17 = plStack_1a8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar27 = puVar27 + 2;
        }
        else {
          unaff_x23 = *puVar13;
          lVar26 = (long)puVar27 - unaff_x23;
          lVar19 = lVar26 >> 4;
          uVar18 = lVar19 + 1;
          if (uVar18 >> 0x3c != 0) {
            FUN_1095bb484();
            goto LAB_1095bb304;
          }
          uVar14 = (long)puVar13[2] - unaff_x23;
          uVar16 = (long)uVar14 >> 3;
          if (uVar16 <= uVar18) {
            uVar16 = uVar18;
          }
          if (0x7fffffffffffffef < uVar14) {
            uVar16 = 0xfffffffffffffff;
          }
          if (uVar16 >> 0x3c != 0) {
            func_0x000104c4f740();
            goto LAB_1095bb304;
          }
          lVar12 = uVar16 << 4;
          __Znwm();
          puVar2 = (ulong *)(lVar12 + lVar26);
          *puVar2 = uVar3;
          puVar2[1] = (ulong)plVar21;
          if (plVar21 != (long *)0x0) {
            plVar17 = plVar21 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = *plVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar26 = puVar13[1] - unaff_x23;
            lVar19 = lVar26 >> 4;
          }
          puVar27 = puVar2 + 2;
          _memcpy(puVar2 + lVar19 * -2,unaff_x23,lVar26);
          *puVar13 = (ulong)(puVar2 + lVar19 * -2);
          puVar13[1] = (ulong)puVar27;
          puVar13[2] = lVar12 + uVar16 * 0x10;
          if (unaff_x23 != 0) {
            __ZdlPv(unaff_x23);
          }
        }
        puVar13[1] = (ulong)puVar27;
      }
      if (plVar21 != (long *)0x0) {
        plVar17 = plVar21 + 1;
        do {
          lVar19 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      plVar25 = plVar25 + 2;
    } while (plVar25 != plVar4);
    puVar24 = (undefined8 *)*param_4;
    if (uStack_2b0 != uStack_2a8) {
      uStack_f8 = 0;
      uStack_d8 = 0;
      uStack_118 = *puVar24;
      *puVar24 = 0;
      FUN_109482730(auStack_f0,puVar24 + 5);
      FUN_10948289c(auStack_110,puVar24 + 1);
      FUN_10947c820(&plStack_d0,param_2,&uStack_2b0,&uStack_118);
      FUN_1095bb7b0(&uStack_118);
      uVar15 = *puVar24;
      *puVar24 = uStack_b8;
      uStack_b8 = uVar15;
      FUN_109482730(puVar24 + 5,auStack_90);
      FUN_10948289c(puVar24 + 1,auStack_b0);
      plVar4 = plStack_c8;
      lVar19 = lStack_2f0;
      for (plVar25 = plStack_d0; lStack_2f0 = lVar19, plVar25 != plVar4; plVar25 = plVar25 + 0x18) {
        FUN_1095bc008(lVar19,uStack_2e8,*plVar25);
        if (lVar19 == 0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1095bb304;
        }
        uVar15 = *(undefined8 *)(lVar19 + 0x20);
        plVar21 = *(long **)(lVar19 + 0x28);
        if (plVar21 != (long *)0x0) {
          plVar17 = plVar21 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = *plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_1a8 = (long *)plVar25[3];
        uStack_1b0 = plVar25[2];
        lStack_198 = plVar25[5];
        lStack_1a0 = plVar25[4];
        lStack_188 = plVar25[7];
        lStack_190 = plVar25[6];
        lStack_180 = plVar25[8];
        lStack_158 = plVar25[0xd];
        lStack_160 = plVar25[0xc];
        lStack_148 = plVar25[0xf];
        lStack_150 = plVar25[0xe];
        lStack_138 = plVar25[0x11];
        lStack_140 = plVar25[0x10];
        lStack_130 = plVar25[0x12];
        lStack_168 = plVar25[0xb];
        lStack_170 = plVar25[10];
        lStack_298 = 0;
        lStack_290 = 0;
        uStack_288 = 0;
        uStack_280 = uVar15;
        plStack_278 = plVar21;
        FUN_10937ec50(&lStack_298,plVar25[0x14],plVar25[0x15],
                      (plVar25[0x15] - plVar25[0x14] >> 2) * -0x5555555555555555);
        lVar26 = lStack_290;
        lVar19 = lStack_298;
        lStack_290 = 0;
        uStack_288 = 0;
        lStack_298 = 0;
        FUN_1095bbf20(&pplStack_270,uVar15,plVar21,&uStack_1b0,lVar19,lVar26);
        if (lVar19 != 0) {
          __ZdlPv(lVar19);
        }
        if (lStack_298 != 0) {
          lStack_290 = lStack_298;
          __ZdlPv();
        }
        if (pplStack_308 < pplStack_300) {
          pplStack_308[1] = plStack_268;
          *pplStack_308 = (long *)pplStack_270;
          plVar1 = plStack_248;
          plVar17 = plStack_250;
          plVar21 = plStack_260;
          pplStack_270 = (long **)0x0;
          plStack_268 = (long *)0x0;
          pplStack_308[3] = plStack_258;
          pplStack_308[2] = plVar21;
          pplStack_308[5] = plVar1;
          pplStack_308[4] = plVar17;
          plVar17 = plStack_230;
          plVar21 = plStack_240;
          pplStack_308[7] = plStack_238;
          pplStack_308[6] = plVar21;
          pplStack_308[8] = plVar17;
          plVar21 = plStack_220;
          pplStack_308[0xb] = plStack_218;
          pplStack_308[10] = plVar21;
          plVar9 = plStack_1e0;
          plVar8 = plStack_1e8;
          plVar22 = plStack_1f0;
          plVar1 = plStack_1f8;
          plVar17 = plStack_200;
          plVar21 = plStack_210;
          pplStack_308[0xd] = plStack_208;
          pplStack_308[0xc] = plVar21;
          pplStack_308[0xf] = plVar1;
          pplStack_308[0xe] = plVar17;
          pplStack_308[0x11] = plVar8;
          pplStack_308[0x10] = plVar22;
          pplStack_308[0x12] = plVar9;
          pplStack_308[0x14] = (long *)0x0;
          pplStack_308[0x15] = (long *)0x0;
          pplStack_308[0x16] = (long *)0x0;
          pplStack_308[0x15] = plStack_1c8;
          pplStack_308[0x14] = plStack_1d0;
          pplStack_308[0x16] = plStack_1c0;
          plStack_1d0 = (long *)0x0;
          plStack_1c8 = (long *)0x0;
          plStack_1c0 = (long *)0x0;
          pplStack_308 = pplStack_308 + 0x18;
        }
        else {
          pplVar11 = &plStack_310;
          FUN_1095bb498(pplVar11,&pplStack_270);
          pplStack_308 = pplVar11;
          if (plStack_1d0 != (long *)0x0) {
            plStack_1c8 = plStack_1d0;
            __ZdlPv();
          }
        }
        plVar21 = plStack_268;
        if (plStack_268 != (long *)0x0) {
          plVar17 = plStack_268 + 1;
          do {
            lVar19 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_268 + 0x10))(plStack_268);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        plVar21 = plStack_278;
        if (plStack_278 != (long *)0x0) {
          plVar17 = plStack_278 + 1;
          do {
            lVar19 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_278 + 0x10))(plStack_278);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        lVar19 = lStack_2f0;
      }
      FUN_1095bb7b0(&uStack_b8);
      pplStack_270 = &plStack_d0;
      FUN_109482a08(&pplStack_270);
      puVar24 = (undefined8 *)*param_4;
    }
  }
  if (uStack_2c8 != uStack_2c0) {
    uStack_d8 = 0;
    uStack_118 = puVar24[9];
    uStack_f8 = 0;
    puVar24[9] = 0;
    FUN_109484668(auStack_f0,puVar24 + 0xe);
    FUN_1094847d4(auStack_110,puVar24 + 10);
    FUN_10947f430(&plStack_d0,param_2,&uStack_2c8,&uStack_118);
    FUN_1095bb894(&uStack_118);
    uVar15 = puVar24[9];
    puVar24[9] = uStack_b8;
    uStack_b8 = uVar15;
    FUN_109484668(puVar24 + 0xe,auStack_90);
    FUN_1094847d4(puVar24 + 10,auStack_b0);
    plVar4 = plStack_c8;
    lVar19 = lStack_2f0;
    for (plVar25 = plStack_d0; lStack_2f0 = lVar19, plVar25 != plVar4; plVar25 = plVar25 + 0x18) {
      FUN_1095bc008(lVar19,uStack_2e8,*plVar25);
      if (lVar19 == 0) {
        FUN_109262df8(&UNK_10f639994);
LAB_1095bb304:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1095bb308);
        (*pcVar10)();
      }
      uVar15 = *(undefined8 *)(lVar19 + 0x20);
      plVar21 = *(long **)(lVar19 + 0x28);
      if (plVar21 != (long *)0x0) {
        plVar17 = plVar21 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plStack_1a8 = (long *)plVar25[3];
      uStack_1b0 = plVar25[2];
      lStack_198 = plVar25[5];
      lStack_1a0 = plVar25[4];
      lStack_188 = plVar25[7];
      lStack_190 = plVar25[6];
      lStack_180 = plVar25[8];
      lStack_158 = plVar25[0xd];
      lStack_160 = plVar25[0xc];
      lStack_148 = plVar25[0xf];
      lStack_150 = plVar25[0xe];
      lStack_138 = plVar25[0x11];
      lStack_140 = plVar25[0x10];
      lStack_130 = plVar25[0x12];
      lStack_168 = plVar25[0xb];
      lStack_170 = plVar25[10];
      lStack_298 = 0;
      lStack_290 = 0;
      uStack_288 = 0;
      uStack_280 = uVar15;
      plStack_278 = plVar21;
      FUN_10937ec50(&lStack_298,plVar25[0x14],plVar25[0x15],
                    (plVar25[0x15] - plVar25[0x14] >> 2) * -0x5555555555555555);
      lVar26 = lStack_290;
      lVar19 = lStack_298;
      lStack_290 = 0;
      uStack_288 = 0;
      lStack_298 = 0;
      FUN_1095bbf20(&pplStack_270,uVar15,plVar21,&uStack_1b0,lVar19,lVar26);
      if (lVar19 != 0) {
        __ZdlPv(lVar19);
      }
      if (lStack_298 != 0) {
        lStack_290 = lStack_298;
        __ZdlPv();
      }
      if (pplStack_308 < pplStack_300) {
        pplStack_308[1] = plStack_268;
        *pplStack_308 = (long *)pplStack_270;
        plVar1 = plStack_248;
        plVar17 = plStack_250;
        plVar21 = plStack_260;
        pplStack_270 = (long **)0x0;
        plStack_268 = (long *)0x0;
        pplStack_308[3] = plStack_258;
        pplStack_308[2] = plVar21;
        pplStack_308[5] = plVar1;
        pplStack_308[4] = plVar17;
        plVar17 = plStack_230;
        plVar21 = plStack_240;
        pplStack_308[7] = plStack_238;
        pplStack_308[6] = plVar21;
        pplStack_308[8] = plVar17;
        plVar21 = plStack_220;
        pplStack_308[0xb] = plStack_218;
        pplStack_308[10] = plVar21;
        plVar9 = plStack_1e0;
        plVar8 = plStack_1e8;
        plVar22 = plStack_1f0;
        plVar1 = plStack_1f8;
        plVar17 = plStack_200;
        plVar21 = plStack_210;
        pplStack_308[0xd] = plStack_208;
        pplStack_308[0xc] = plVar21;
        pplStack_308[0xf] = plVar1;
        pplStack_308[0xe] = plVar17;
        pplStack_308[0x11] = plVar8;
        pplStack_308[0x10] = plVar22;
        pplStack_308[0x12] = plVar9;
        pplStack_308[0x14] = (long *)0x0;
        pplStack_308[0x15] = (long *)0x0;
        pplStack_308[0x16] = (long *)0x0;
        pplStack_308[0x15] = plStack_1c8;
        pplStack_308[0x14] = plStack_1d0;
        pplStack_308[0x16] = plStack_1c0;
        plStack_1d0 = (long *)0x0;
        plStack_1c8 = (long *)0x0;
        plStack_1c0 = (long *)0x0;
        pplStack_308 = pplStack_308 + 0x18;
      }
      else {
        pplVar11 = &plStack_310;
        FUN_1095bb498(pplVar11,&pplStack_270);
        pplStack_308 = pplVar11;
        if (plStack_1d0 != (long *)0x0) {
          plStack_1c8 = plStack_1d0;
          __ZdlPv();
        }
      }
      plVar21 = plStack_268;
      if (plStack_268 != (long *)0x0) {
        plVar17 = plStack_268 + 1;
        do {
          lVar19 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_268 + 0x10))(plStack_268);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      plVar21 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar17 = plStack_278 + 1;
        do {
          lVar19 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      lVar19 = lStack_2f0;
    }
    FUN_1095bb894(&uStack_b8);
    pplStack_270 = &plStack_d0;
    FUN_109482a08(&pplStack_270);
    puVar24 = (undefined8 *)*param_4;
  }
  pplVar11 = pplStack_300;
  param_1[1] = pplStack_308;
  *param_1 = plStack_310;
  plStack_310 = (long *)0x0;
  pplStack_308 = (long **)0x0;
  pplStack_300 = (long **)0x0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[2] = pplVar11;
  param_1[3] = puVar24;
  *param_4 = 0;
  FUN_1095b8e58(param_1 + 8,param_4 + 5);
  FUN_1095b8fc4(param_1 + 4,param_4 + 1);
  pplStack_270 = &plStack_310;
  func_0x0001095ba15c(&pplStack_270);
  FUN_1095bbe30(&lStack_2f0);
  func_0x0001095bb6f0(&uStack_2c8);
  puVar13 = &uStack_2b0;
  func_0x0001095bb6f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_1095bb7b0(&uStack_118);
    pplStack_270 = &plStack_310;
    func_0x0001095ba15c(&pplStack_270);
    FUN_1095bbe30(&lStack_2f0);
    func_0x0001095bb6f0(&uStack_2c8);
    func_0x0001095bb6f0(&uStack_2b0);
    __Unwind_Resume();
    if (puVar13[0x14] != 0) {
      puVar13[0x15] = puVar13[0x14];
      __ZdlPv();
    }
    plVar25 = (long *)puVar13[1];
    if (plVar25 != (long *)0x0) {
      plVar4 = plVar25 + 1;
      do {
        lVar19 = *plVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    return puVar13;
  }
  return puVar13;
}



/* Entry: 1095bb454; end: 1095bb483;  */

long FUN_1095bb454(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
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



/* Entry: 1095bb484; end: 1095bb497;  */

long * FUN_1095bb484(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar10 = plVar3[1] - *plVar3;
  uVar7 = (lVar10 >> 6) * -0x5555555555555555 + 1;
  if (uVar7 < 0x155555555555556) {
    lVar5 = plVar3[2] - *plVar3 >> 6;
    uVar8 = lVar5 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = 0x155555555555555;
    }
    plStack_58 = plVar3;
    if (uVar8 < 0x155555555555556) {
      lVar5 = uVar8 * 0xc0;
      _malloc();
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar5 + lVar10);
        uVar13 = param_2[1];
        uVar12 = *param_2;
        uVar15 = param_2[3];
        uVar14 = param_2[2];
        lStack_60 = lVar5 + uVar8 * 0xc0;
        *param_2 = 0;
        param_2[1] = 0;
        puVar1[1] = uVar13;
        *puVar1 = uVar12;
        puVar1[3] = uVar15;
        puVar1[2] = uVar14;
        uVar12 = param_2[4];
        uVar14 = param_2[7];
        uVar13 = param_2[6];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar12;
        puVar1[7] = uVar14;
        puVar1[6] = uVar13;
        puVar1[8] = param_2[8];
        uVar12 = param_2[0xe];
        uVar14 = param_2[0x11];
        uVar13 = param_2[0x10];
        puVar1[0xf] = param_2[0xf];
        puVar1[0xe] = uVar12;
        puVar1[0x11] = uVar14;
        puVar1[0x10] = uVar13;
        puVar1[0x12] = param_2[0x12];
        uVar14 = param_2[10];
        uVar13 = param_2[0xd];
        uVar12 = param_2[0xc];
        puVar1[0xb] = param_2[0xb];
        puVar1[10] = uVar14;
        puVar1[0xd] = uVar13;
        puVar1[0xc] = uVar12;
        uVar12 = param_2[0x14];
        puVar1[0x15] = param_2[0x15];
        puVar1[0x14] = uVar12;
        puVar1[0x16] = param_2[0x16];
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        plStack_68 = puVar1 + 0x18;
        puVar9 = (undefined8 *)*plVar3;
        puVar2 = (undefined8 *)plVar3[1];
        puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar9 - (long)puVar2));
        puVar4 = puVar9;
        puVar6 = puVar1;
        plVar11 = plStack_68;
        if ((long)puVar9 - (long)puVar2 != 0) {
          do {
            uVar12 = *puVar4;
            puVar6[1] = puVar4[1];
            *puVar6 = uVar12;
            *puVar4 = 0;
            puVar4[1] = 0;
            uVar12 = puVar4[2];
            uVar14 = puVar4[5];
            uVar13 = puVar4[4];
            puVar6[3] = puVar4[3];
            puVar6[2] = uVar12;
            puVar6[5] = uVar14;
            puVar6[4] = uVar13;
            uVar13 = puVar4[7];
            uVar12 = puVar4[6];
            puVar6[8] = puVar4[8];
            puVar6[7] = uVar13;
            puVar6[6] = uVar12;
            uVar13 = puVar4[0xd];
            uVar12 = puVar4[0xc];
            uVar15 = puVar4[0xf];
            uVar14 = puVar4[0xe];
            uVar17 = puVar4[0x11];
            uVar16 = puVar4[0x10];
            puVar6[0x12] = puVar4[0x12];
            puVar6[0xf] = uVar15;
            puVar6[0xe] = uVar14;
            puVar6[0x11] = uVar17;
            puVar6[0x10] = uVar16;
            puVar6[0xd] = uVar13;
            puVar6[0xc] = uVar12;
            uVar12 = puVar4[10];
            puVar6[0xb] = puVar4[0xb];
            puVar6[10] = uVar12;
            puVar6[0x15] = 0;
            puVar6[0x16] = 0;
            puVar6[0x14] = 0;
            uVar12 = puVar4[0x14];
            puVar6[0x15] = puVar4[0x15];
            puVar6[0x14] = uVar12;
            puVar6[0x16] = puVar4[0x16];
            puVar4[0x14] = 0;
            puVar4[0x15] = 0;
            puVar4[0x16] = 0;
            puVar4 = puVar4 + 0x18;
            puVar6 = puVar6 + 0x18;
          } while (puVar4 != puVar2);
          do {
            FUN_1095ba1cc(puVar9);
            puVar9 = puVar9 + 0x18;
          } while (puVar9 != puVar2);
          puVar9 = (undefined8 *)*plVar3;
          plVar11 = plStack_68;
        }
        *plVar3 = (long)puVar1;
        plVar3[1] = (long)plVar11;
        lVar10 = plVar3[2];
        plVar3[2] = lStack_60;
        puStack_78 = puVar9;
        puStack_70 = puVar9;
        plStack_68 = puVar9;
        lStack_60 = lVar10;
        FUN_1095bb6a4(&puStack_78);
        return plVar11;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  FUN_1095bb690();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar10 = plVar3[1];
  lVar5 = plVar3[2];
  while (lVar5 != lVar10) {
    plVar3[2] = lVar5 + -0xc0;
    FUN_1095ba1cc();
    lVar5 = plVar3[2];
  }
  if (*plVar3 != 0) {
    _free();
  }
  return plVar3;
}



/* Entry: 1095bb498; end: 1095bb68f;  */

long * FUN_1095bb498(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar10 = param_1[1] - *param_1;
  uVar7 = (lVar10 >> 6) * -0x5555555555555555 + 1;
  if (uVar7 < 0x155555555555556) {
    lVar5 = param_1[2] - *param_1 >> 6;
    uVar8 = lVar5 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = 0x155555555555555;
    }
    plStack_48 = param_1;
    if (uVar8 < 0x155555555555556) {
      lVar5 = uVar8 * 0xc0;
      _malloc();
      if (lVar5 != 0) {
        puVar1 = (undefined8 *)(lVar5 + lVar10);
        uVar12 = param_2[1];
        uVar11 = *param_2;
        uVar14 = param_2[3];
        uVar13 = param_2[2];
        lStack_50 = lVar5 + uVar8 * 0xc0;
        *param_2 = 0;
        param_2[1] = 0;
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
        puVar1[3] = uVar14;
        puVar1[2] = uVar13;
        uVar11 = param_2[4];
        uVar13 = param_2[7];
        uVar12 = param_2[6];
        puVar1[5] = param_2[5];
        puVar1[4] = uVar11;
        puVar1[7] = uVar13;
        puVar1[6] = uVar12;
        puVar1[8] = param_2[8];
        uVar11 = param_2[0xe];
        uVar13 = param_2[0x11];
        uVar12 = param_2[0x10];
        puVar1[0xf] = param_2[0xf];
        puVar1[0xe] = uVar11;
        puVar1[0x11] = uVar13;
        puVar1[0x10] = uVar12;
        puVar1[0x12] = param_2[0x12];
        uVar13 = param_2[10];
        uVar12 = param_2[0xd];
        uVar11 = param_2[0xc];
        puVar1[0xb] = param_2[0xb];
        puVar1[10] = uVar13;
        puVar1[0xd] = uVar12;
        puVar1[0xc] = uVar11;
        uVar11 = param_2[0x14];
        puVar1[0x15] = param_2[0x15];
        puVar1[0x14] = uVar11;
        puVar1[0x16] = param_2[0x16];
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        plStack_58 = puVar1 + 0x18;
        puVar9 = (undefined8 *)*param_1;
        puVar2 = (undefined8 *)param_1[1];
        puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar9 - (long)puVar2));
        puVar4 = puVar9;
        puVar6 = puVar1;
        plVar3 = plStack_58;
        if ((long)puVar9 - (long)puVar2 != 0) {
          do {
            uVar11 = *puVar4;
            puVar6[1] = puVar4[1];
            *puVar6 = uVar11;
            *puVar4 = 0;
            puVar4[1] = 0;
            uVar11 = puVar4[2];
            uVar13 = puVar4[5];
            uVar12 = puVar4[4];
            puVar6[3] = puVar4[3];
            puVar6[2] = uVar11;
            puVar6[5] = uVar13;
            puVar6[4] = uVar12;
            uVar12 = puVar4[7];
            uVar11 = puVar4[6];
            puVar6[8] = puVar4[8];
            puVar6[7] = uVar12;
            puVar6[6] = uVar11;
            uVar12 = puVar4[0xd];
            uVar11 = puVar4[0xc];
            uVar14 = puVar4[0xf];
            uVar13 = puVar4[0xe];
            uVar16 = puVar4[0x11];
            uVar15 = puVar4[0x10];
            puVar6[0x12] = puVar4[0x12];
            puVar6[0xf] = uVar14;
            puVar6[0xe] = uVar13;
            puVar6[0x11] = uVar16;
            puVar6[0x10] = uVar15;
            puVar6[0xd] = uVar12;
            puVar6[0xc] = uVar11;
            uVar11 = puVar4[10];
            puVar6[0xb] = puVar4[0xb];
            puVar6[10] = uVar11;
            puVar6[0x15] = 0;
            puVar6[0x16] = 0;
            puVar6[0x14] = 0;
            uVar11 = puVar4[0x14];
            puVar6[0x15] = puVar4[0x15];
            puVar6[0x14] = uVar11;
            puVar6[0x16] = puVar4[0x16];
            puVar4[0x14] = 0;
            puVar4[0x15] = 0;
            puVar4[0x16] = 0;
            puVar4 = puVar4 + 0x18;
            puVar6 = puVar6 + 0x18;
          } while (puVar4 != puVar2);
          do {
            FUN_1095ba1cc(puVar9);
            puVar9 = puVar9 + 0x18;
          } while (puVar9 != puVar2);
          puVar9 = (undefined8 *)*param_1;
          plVar3 = plStack_58;
        }
        *param_1 = (long)puVar1;
        param_1[1] = (long)plVar3;
        lVar10 = param_1[2];
        param_1[2] = lStack_50;
        puStack_68 = puVar9;
        puStack_60 = puVar9;
        plStack_58 = puVar9;
        lStack_50 = lVar10;
        FUN_1095bb6a4(&puStack_68);
        return plVar3;
      }
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  FUN_1095bb690();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar10 = plVar3[1];
  lVar5 = plVar3[2];
  while (lVar5 != lVar10) {
    plVar3[2] = lVar5 + -0xc0;
    FUN_1095ba1cc();
    lVar5 = plVar3[2];
  }
  if (*plVar3 != 0) {
    _free();
  }
  return plVar3;
}



/* Entry: 1095bb690; end: 1095bb6a3;  */

long * FUN_1095bb690(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0xc0;
    FUN_1095ba1cc();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    _free();
  }
  return plVar2;
}



/* Entry: 1095bb6a4; end: 1095bb74b;  */

long * FUN_1095bb6a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xc0;
    FUN_1095ba1cc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    _free();
  }
  return param_1;
}



/* Entry: 1095bb74c; end: 1095bb7af;  */

long FUN_1095bb74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10947beac(param_1,param_2,param_3);
  FUN_10947f10c(param_1 + 0x48,param_2,param_3);
  return param_1;
}



/* Entry: 1095bb7b0; end: 1095bb853;  */

undefined8 * FUN_1095bb7b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1095bb814;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095bb814:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1095bb854; end: 1095bb893;  */

void FUN_1095bb854(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095bb894(lVar1 + 0x48);
    FUN_1095bb7b0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095bb894; end: 1095bb937;  */

undefined8 * FUN_1095bb894(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1095bb8f8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095bb8f8:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1095bb938; end: 1095bb93f;  */

void FUN_1095bb938(void)

{
  return;
}



/* Entry: 1095bb940; end: 1095bb963;  */

void FUN_1095bb940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe1e8;
  return;
}



/* Entry: 1095bb964; end: 1095bb97b;  */

void FUN_1095bb964(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afe1e8;
  return;
}



/* Entry: 1095bb97c; end: 1095bb9f3;  */

void FUN_1095bb97c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_1095bb894(lVar1 + 0x48);
    FUN_1095bb7b0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095bb9f4; end: 1095bba07;  */

undefined ** FUN_1095bb9f4(void)

{
  return &PTR_DAT_110afe258;
}



/* Entry: 1095bba08; end: 1095bba2b;  */

void FUN_1095bba08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe278;
  return;
}



/* Entry: 1095bba2c; end: 1095bba43;  */

void FUN_1095bba2c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe278;
  return;
}



/* Entry: 1095bba44; end: 1095bbde7;  */

long * FUN_1095bba44(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)0x90;
  __Znwm();
  *plVar2 = 0;
  plVar2[4] = 0;
  plVar2[8] = 0;
  if (*param_2 == 0) {
    plVar3 = (long *)0x0;
LAB_1095bbba8:
    *plVar2 = (long)plVar3;
    plVar2[9] = 0;
    plVar2[0xd] = 0;
    plVar2[0x11] = 0;
    if (param_2[9] == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)param_2[0x11];
      if (plVar3 != (long *)0x0) {
        if (plVar3 == param_2 + 0xe) {
          plStack_50 = alStack_68;
          (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
          plVar3 = plStack_50;
        }
        else {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      plStack_50 = plVar3;
      FUN_109484668(alStack_68,plVar2 + 0xe);
      if (plStack_50 == alStack_68) {
        lVar4 = 0x20;
LAB_1095bbc3c:
        (**(code **)(*plStack_50 + lVar4))();
      }
      else if (plStack_50 != (long *)0x0) {
        lVar4 = 0x28;
        goto LAB_1095bbc3c;
      }
      plVar3 = (long *)param_2[0xd];
      if (plVar3 != (long *)0x0) {
        if (plVar3 == param_2 + 10) {
          plStack_50 = alStack_68;
          (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
          plVar3 = plStack_50;
        }
        else {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      plStack_50 = plVar3;
      FUN_1094847d4(alStack_68,plVar2 + 10);
      if (plStack_50 == alStack_68) {
        lVar4 = 0x20;
LAB_1095bbcb4:
        (**(code **)(*plStack_50 + lVar4))();
      }
      else if (plStack_50 != (long *)0x0) {
        lVar4 = 0x28;
        goto LAB_1095bbcb4;
      }
      plVar3 = (long *)plVar2[0x11];
      if (plVar3 == (long *)0x0) {
        func_0x000104c501e4();
        goto LAB_1095bbd20;
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2[9]);
    }
    plVar2[9] = (long)plVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return plVar2;
    }
    ___stack_chk_fail();
  }
  else {
    plVar3 = (long *)param_2[8];
    plStack_50 = plVar3;
    if (plVar3 != (long *)0x0) {
      if (plVar3 == param_2 + 5) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        plStack_50 = plVar3;
      }
    }
    FUN_109482730(alStack_68,plVar2 + 5);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bbb0c:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bbb0c;
    }
    plVar3 = (long *)param_2[4];
    if (plVar3 != (long *)0x0) {
      if (plVar3 == param_2 + 1) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
        plVar3 = plStack_50;
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plStack_50 = plVar3;
    FUN_10948289c(alStack_68,plVar2 + 1);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bbb84:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bbb84;
    }
    plVar3 = (long *)plVar2[8];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,*param_2);
      goto LAB_1095bbba8;
    }
  }
  func_0x000104c501e4();
LAB_1095bbd20:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095bbd24);
  (*pcVar1)();
}



/* Entry: 1095bbde8; end: 1095bbe23;  */

long FUN_1095bbde8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe2e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bbe24; end: 1095bbe2f;  */

undefined ** FUN_1095bbe24(void)

{
  return &PTR_DAT_110afe2e8;
}



/* Entry: 1095bbe30; end: 1095bbe93;  */

long * FUN_1095bbe30(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10947766c(plVar1 + 4);
    FUN_109480938(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095bbe94; end: 1095bbf1f;  */

void FUN_1095bbe94(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_10947766c(param_2 + 0x20);
    FUN_109480938(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1095bbf20; end: 1095bbfcb;  */

undefined8 *
FUN_1095bbf20(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5,
             long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  param_1[3] = param_4[1];
  param_1[2] = uVar4;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  uVar5 = param_4[5];
  uVar4 = param_4[4];
  param_1[8] = param_4[6];
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar6 = param_4[9];
  uVar5 = param_4[8];
  uVar8 = param_4[0xb];
  uVar7 = param_4[10];
  uVar10 = param_4[0xd];
  uVar9 = param_4[0xc];
  uVar12 = param_4[0xf];
  uVar11 = param_4[0xe];
  uVar4 = param_4[0x10];
  param_1[0x14] = 0;
  param_1[0x12] = uVar4;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0x11] = uVar12;
  param_1[0x10] = uVar11;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_10937ec50(param_1 + 0x14,param_5,param_6,(param_6 - param_5 >> 2) * -0x5555555555555555);
  return param_1;
}



/* Entry: 1095bbfcc; end: 1095bc007;  */

long FUN_1095bbfcc(long param_1)

{
  long lStack_28;
  
  FUN_1095bb7b0(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_109482a08(&lStack_28);
  return param_1;
}



/* Entry: 1095bc008; end: 1095bc0d3;  */

long * FUN_1095bc008(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1095bc0d4; end: 1095bc10f;  */

long FUN_1095bc0d4(long param_1)

{
  long lStack_28;
  
  FUN_1095bb894(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_109482a08(&lStack_28);
  return param_1;
}



/* Entry: 1095bc110; end: 1095bc207;  */

void FUN_1095bc110(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  puVar4 = (undefined8 *)0xa0;
  __Znwm();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  puVar4[3] = param_3[1];
  puVar4[2] = uVar6;
  puVar4[5] = uVar8;
  puVar4[4] = uVar7;
  uVar6 = param_3[4];
  puVar4[7] = param_3[5];
  puVar4[6] = uVar6;
  puVar4[8] = param_3[6];
  uVar6 = param_3[0xc];
  uVar8 = param_3[0xf];
  uVar7 = param_3[0xe];
  puVar4[0xf] = param_3[0xd];
  puVar4[0xe] = uVar6;
  puVar4[0x11] = uVar8;
  puVar4[0x10] = uVar7;
  puVar4[0x12] = param_3[0x10];
  uVar8 = param_3[8];
  uVar7 = param_3[0xb];
  uVar6 = param_3[10];
  puVar4[0xb] = param_3[9];
  puVar4[10] = uVar8;
  puVar4[0xd] = uVar7;
  puVar4[0xc] = uVar6;
  FUN_1095bc29c(auStack_48);
  FUN_1095bc370(param_1,&uStack_31,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 1095bc208; end: 1095bc29b;  */

void FUN_1095bc208(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_d8 [152];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  auStack_d8[0] = 0;
  uStack_40 = 0;
  FUN_10949201c(auStack_38,param_2,auStack_d8);
  FUN_1095bc610(param_1,&uStack_21,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 1095bc29c; end: 1095bc2fb;  */

undefined8 * FUN_1095bc29c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe308;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 1095bc2fc; end: 1095bc2ff;  */

void FUN_1095bc2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095bc300; end: 1095bc333;  */

void FUN_1095bc300(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095bc334; end: 1095bc36b;  */

undefined8 FUN_1095bc334(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe358);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bc36c; end: 1095bc36f;  */

void FUN_1095bc36c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095bc370; end: 1095bc3c7;  */

void FUN_1095bc370(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_1095bc3c8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1095bc3c8; end: 1095bc40f;  */

undefined8 * FUN_1095bc3c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afe380;
  FUN_1095bc46c(param_1 + 3);
  return param_1;
}



/* Entry: 1095bc410; end: 1095bc41f;  */

void FUN_1095bc410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe380;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095bc420; end: 1095bc43f;  */

void FUN_1095bc420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe380;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095bc440; end: 1095bc467;  */

long FUN_1095bc440(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0001095bbec8(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 1095bc468; end: 1095bc46b;  */

void FUN_1095bc468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095bc46c; end: 1095bc4e3;  */

undefined8 * FUN_1095bc46c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)param_2[1];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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



/* Entry: 1095bc4e4; end: 1095bc53b;  */

void FUN_1095bc4e4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_1095bc53c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1095bc53c; end: 1095bc583;  */

undefined8 * FUN_1095bc53c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afe380;
  FUN_1095bc584(param_1 + 3);
  return param_1;
}



/* Entry: 1095bc584; end: 1095bc60f;  */

undefined8 * FUN_1095bc584(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  uVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  if (plVar3 == (long *)0x0) {
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *param_1 = uVar2;
    param_1[1] = plVar3;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    param_1[2] = 0;
    param_1[3] = 0;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return param_1;
}



/* Entry: 1095bc610; end: 1095bc667;  */

void FUN_1095bc610(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_1095bc668();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1095bc668; end: 1095bc6af;  */

undefined8 * FUN_1095bc668(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afe380;
  FUN_1095bc6b0(param_1 + 3);
  return param_1;
}



/* Entry: 1095bc6b0; end: 1095bc72f;  */

undefined8 * FUN_1095bc6b0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)param_2[1];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[2] = 0;
    param_1[3] = 0;
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



/* Entry: 1095bc730; end: 1095bcbff;  */

void FUN_1095bc730(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  byte bStack_a8;
  undefined8 *puStack_a0;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)*param_2;
  plVar7 = (long *)((long *)*param_2)[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_100 = lVar8;
  plStack_f8 = plVar7;
  if (lVar8 == 0) {
    lStack_110 = *(long *)(*param_2 + 0x10);
    plVar7 = *(long **)(*param_2 + 0x18);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_108 = plVar7;
    if (lStack_110 != 0) {
      FUN_1095b5f1c(&uStack_f0,&lStack_110,param_3,param_4);
      if (bStack_a8 == 1) {
        puVar6 = (undefined8 *)0x50;
        __Znwm();
        puVar6[5] = 0;
        puVar6[9] = 0;
        *puVar6 = &PTR_FUN_110afe680;
        puVar6[1] = uStack_f0;
        uStack_f0 = 0;
        FUN_1095b6f60(puVar6 + 6,auStack_c8);
        FUN_1095b70cc(puVar6 + 2,auStack_e8);
        pppuStack_80 = appuStack_98;
        appuStack_98[0] = &PTR_FUN_110afe6c0;
        pppuStack_60 = appuStack_78;
        appuStack_78[0] = &PTR_DAT_110afe740;
        puStack_a0 = puVar6;
        FUN_1095bd2b8(param_1,&puStack_a0);
        FUN_1095b9398(&puStack_a0);
        if ((bStack_a8 & 1) != 0) {
          FUN_1095b6cec(&uStack_f0);
        }
      }
      else {
        *param_1 = 0;
        param_1[0x48] = 0;
      }
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          goto LAB_1095bcae8;
        }
      }
      goto LAB_1095bcaec;
    }
  }
  else {
    lVar5 = lVar8;
    ___dynamic_cast(lVar8,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b58,0);
    plStack_108 = plVar7;
    if (lVar5 == 0) {
      ___dynamic_cast(lVar8,&PTR_DAT_110af6ad0,&PTR_DAT_110af6b10,0);
      if (lVar8 == 0) {
        lStack_110 = 0;
        plStack_108 = (long *)0x0;
        func_0x000109590110(&lStack_110);
        FUN_10940ce60(&UNK_10f57561d);
        goto LAB_1095bcb84;
      }
      if (plVar7 != (long *)0x0) {
        plVar7 = plVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_110 = lVar8;
      FUN_10947222c(&uStack_f0,&lStack_110,param_3,param_4);
      if (bStack_a8 == 1) {
        puVar6 = (undefined8 *)0x50;
        __Znwm();
        puVar6[5] = 0;
        puVar6[9] = 0;
        *puVar6 = &PTR_DAT_110afe540;
        puVar6[1] = uStack_f0;
        uStack_f0 = 0;
        FUN_109472a80(puVar6 + 6,auStack_c8);
        FUN_109472bec(puVar6 + 2,auStack_e8);
        pppuStack_80 = appuStack_98;
        appuStack_98[0] = &PTR_FUN_110afe580;
        pppuStack_60 = appuStack_78;
        appuStack_78[0] = &PTR_DAT_110afe600;
        puStack_a0 = puVar6;
        FUN_1095bd2b8(param_1,&puStack_a0);
        FUN_1095b9398(&puStack_a0);
        if ((bStack_a8 & 1) != 0) {
          FUN_1094729dc(&uStack_f0);
        }
      }
      else {
        *param_1 = 0;
        param_1[0x48] = 0;
      }
      if (plStack_108 != (long *)0x0) {
        plVar7 = plStack_108 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_1095bcad0;
      }
    }
    else {
      if (plVar7 != (long *)0x0) {
        plVar7 = plVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_110 = lVar5;
      FUN_109470c4c(&uStack_f0,&lStack_110,param_3,param_4,param_5);
      if (bStack_a8 == 1) {
        puVar6 = (undefined8 *)0x50;
        __Znwm();
        puVar6[5] = 0;
        puVar6[9] = 0;
        *puVar6 = &PTR_DAT_110afe3d0;
        puVar6[1] = uStack_f0;
        uStack_f0 = 0;
        FUN_109471f54(puVar6 + 6,auStack_c8);
        FUN_1094720c0(puVar6 + 2,auStack_e8);
        pppuStack_80 = appuStack_98;
        appuStack_98[0] = &PTR_FUN_110afe420;
        pppuStack_60 = appuStack_78;
        appuStack_78[0] = &PTR_DAT_110afe4b0;
        puStack_a0 = puVar6;
        FUN_1095bd2b8(param_1,&puStack_a0);
        FUN_1095b9398(&puStack_a0);
        if ((bStack_a8 & 1) != 0) {
          FUN_109471184(&uStack_f0);
        }
      }
      else {
        *param_1 = 0;
        param_1[0x48] = 0;
      }
      if (plStack_108 != (long *)0x0) {
        plVar7 = plStack_108 + 1;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_1095bcad0:
        plVar7 = plStack_108;
        if (lVar8 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
LAB_1095bcae8:
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
LAB_1095bcaec:
    plVar7 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10940ce60(&UNK_10f56e882);
LAB_1095bcb84:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095bcb88);
  (*pcVar4)();
}



/* Entry: 1095bcc00; end: 1095bcd1f;  */

long * FUN_1095bcc00(undefined1 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  byte bStack_50;
  long lStack_38;
  
  plVar2 = &lStack_1d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)*param_3;
  (**(code **)(*plVar1 + 0x10))(&lStack_f0);
  if ((bStack_50 & 1) == 0) {
    *param_1 = 0;
    param_1[0xe0] = 0;
  }
  else {
    uStack_1c8 = uStack_e8;
    lStack_1d0 = lStack_f0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_1a0 = uStack_c0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_158 = uStack_78;
    uStack_160 = uStack_80;
    uStack_150 = uStack_70;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_140 = uStack_60;
    uStack_f8 = 0;
    lStack_138 = *param_3;
    uStack_118 = 0;
    *param_3 = 0;
    FUN_1095ba234(auStack_110,param_3 + 5);
    FUN_1095ba3a0(auStack_130,param_3 + 1);
    FUN_1095bcd20(param_1);
    plVar1 = &lStack_138;
    FUN_1095b9398();
    param_2 = plVar2;
    unaff_x21 = &lStack_1d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  FUN_1095b9398((undefined1 *)((long)unaff_x21 + 0x98));
  __Unwind_Resume();
  lVar3 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  plVar1[1] = param_2[1];
  *plVar1 = lVar3;
  plVar1[3] = lVar5;
  plVar1[2] = lVar4;
  lVar4 = param_2[5];
  lVar3 = param_2[4];
  plVar1[6] = param_2[6];
  plVar1[5] = lVar4;
  plVar1[4] = lVar3;
  lVar3 = param_2[8];
  plVar1[9] = param_2[9];
  plVar1[8] = lVar3;
  lVar4 = param_2[0xb];
  lVar3 = param_2[10];
  lVar6 = param_2[0xd];
  lVar5 = param_2[0xc];
  lVar8 = param_2[0xf];
  lVar7 = param_2[0xe];
  plVar1[0x10] = param_2[0x10];
  plVar1[0xd] = lVar6;
  plVar1[0xc] = lVar5;
  plVar1[0xf] = lVar8;
  plVar1[0xe] = lVar7;
  plVar1[0xb] = lVar4;
  plVar1[10] = lVar3;
  *(int *)(plVar1 + 0x12) = (int)param_2[0x12];
  plVar1[0x13] = 0;
  plVar1[0x17] = 0;
  plVar1[0x1b] = 0;
  plVar1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  FUN_1095ba234(plVar1 + 0x18,param_2 + 0x18);
  FUN_1095ba3a0(plVar1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(plVar1 + 0x1c) = 1;
  return plVar1;
}



/* Entry: 1095bcd20; end: 1095bce1b;  */

undefined8 * FUN_1095bcd20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  FUN_1095ba234(param_1 + 0x18,param_2 + 0x18);
  FUN_1095ba3a0(param_1 + 0x14,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}



/* Entry: 1095bce1c; end: 1095bcf73;  */

void FUN_1095bce1c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined1 auStack_160 [24];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  byte bStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = 0;
  uStack_188 = *(undefined8 *)(param_2 + 8);
  uStack_168 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_109471f54(auStack_160,param_2 + 0x30);
  FUN_1094720c0(auStack_180,param_2 + 0x10);
  FUN_109470db0(&uStack_140,param_3,&uStack_188);
  puVar1 = &uStack_188;
  FUN_109471184(puVar1);
  if ((bStack_60 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uStack_a8;
    uStack_a8 = uVar2;
    FUN_109471f54(param_2 + 0x30,auStack_80);
    puVar1 = (undefined8 *)(param_2 + 0x10);
    FUN_1094720c0(puVar1,auStack_a0);
    param_1[6] = uStack_110;
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[3] = uStack_128;
    param_1[2] = uStack_130;
    param_1[5] = uStack_118;
    param_1[4] = uStack_120;
    param_1[0xd] = uStack_d8;
    param_1[0xc] = uStack_e0;
    param_1[0xf] = uStack_c8;
    param_1[0xe] = uStack_d0;
    param_1[0x10] = uStack_c0;
    param_1[9] = uStack_f8;
    param_1[8] = uStack_100;
    param_1[0xb] = uStack_e8;
    param_1[10] = uStack_f0;
    *(undefined4 *)(param_1 + 0x12) = uStack_b0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    if ((bStack_60 & 1) != 0) {
      puVar1 = &uStack_a8;
      FUN_109471184(puVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_109471184(&uStack_188);
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 1095bcf74; end: 1095bcf7b;  */

void FUN_1095bcf74(void)

{
  return;
}


