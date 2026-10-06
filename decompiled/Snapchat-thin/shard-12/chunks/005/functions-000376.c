/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109250314; end: 1092503b3;  */

void FUN_109250314(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109250360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 1092503b4; end: 109250417;  */

void FUN_1092503b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5ca0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109250418; end: 10925044b;  */

undefined8 * FUN_109250418(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109250314(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 10925044c; end: 109250487;  */

long FUN_10925044c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5ce0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109250488; end: 10925048b;  */

void FUN_109250488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925048c; end: 1092504e3;  */

long FUN_10925048c(long param_1)

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



/* Entry: 1092504e4; end: 1092505df;  */

undefined1  [16] FUN_1092504e4(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uStack_34;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    lVar4 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    puVar1 = (uint *)(*(long *)(param_1 + 0x68) + -4);
    uStack_34 = *puVar1;
    *(uint **)(param_1 + 0x68) = puVar1;
    *(long *)(*(long *)(param_1 + 0x48) + (ulong)uStack_34 * 0x10 + 8) =
         *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2;
    FUN_109231afc((long *)(param_1 + 0x78),&uStack_34);
    uVar3 = (ulong)uStack_34;
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + uVar3 * 0x10);
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    uVar2 = *(long *)(lVar4 + 0xe8) + 3U & 0xfffffffffffffffc;
    *(ulong *)(lVar4 + 0xd0) = uVar2;
    *(ulong *)(lVar4 + 0xd8) = uVar2 + (*(long *)(lVar4 + 0xf0) - *(long *)(lVar4 + 0xe8));
    *(undefined1 *)(lVar4 + 0xe0) = 0;
    uVar6 = param_2[1];
    uVar5 = *param_2;
    *(undefined8 *)(lVar4 + 0x38) = param_2[2];
    *(undefined8 *)(lVar4 + 0x30) = uVar6;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    FUN_10922d864(lVar4,param_2 + 1);
    *(undefined1 *)(lVar4 + 0x240) = 0;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Entry: 1092505e0; end: 1092506af;  */

void FUN_1092505e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uStack_38;
  
  lVar7 = *param_1;
  func_0x000109fcc0a8(*(long *)(lVar7 + 0x18) + 0x820,*(undefined4 *)((long)param_1 + 0x14),param_2)
  ;
  uVar2 = *(uint *)(param_1 + 2);
  uStack_38 = (ulong)uVar2;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x50);
  lVar4 = *(long *)(lVar7 + 0x90);
  lVar1 = lVar4 + (ulong)uVar2 * 0x10;
  lVar5 = *(long *)(lVar1 + 8);
  puVar6 = (uint *)(*(long *)(lVar7 + 200) + -4);
  uVar3 = *puVar6;
  *(uint *)(*(long *)(lVar7 + 0xc0) + lVar5 * 4) = uVar3;
  *(uint **)(lVar7 + 200) = puVar6;
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  if (uVar3 != uVar2) {
    *(long *)(lVar4 + (ulong)uVar3 * 0x10 + 8) = lVar5;
  }
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x50);
  FUN_109246684(param_2);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x50);
  FUN_109231afc(lVar7 + 0xa8,&uStack_38);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x50);
  return;
}



/* Entry: 1092506b0; end: 109250713;  */

void FUN_1092506b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5d00;
  FUN_10922d7c8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109250714; end: 109250743;  */

long FUN_109250714(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1092505e0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 109250744; end: 10925077f;  */

long FUN_109250744(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5d40);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109250780; end: 10925078b;  */

void FUN_109250780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925078c; end: 1092507c7;  */

void FUN_10925078c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110ae5d60;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  return;
}



/* Entry: 1092507c8; end: 1092507eb;  */

void FUN_1092507c8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110ae5d60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return;
}



/* Entry: 1092507ec; end: 109250883;  */

void FUN_1092507ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x248;
  __Znwm();
  FUN_1092463bc();
  *param_1 = lVar1;
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_1092461fc(lVar1 + 200);
  }
  return;
}



/* Entry: 109250884; end: 1092508bf;  */

long FUN_109250884(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5dd0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092508c0; end: 1092508cb;  */

undefined ** FUN_1092508c0(void)

{
  return &PTR_DAT_110ae5dd0;
}



/* Entry: 1092508cc; end: 1092508f3;  */

void FUN_1092508cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_109246718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1092508f4; end: 109250a0f;  */

undefined8 * FUN_1092508f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5df0;
  FUN_109250ba0(param_1 + 9);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109250a10; end: 109250aa3;  */

void FUN_109250a10(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x50);
  puVar1 = *(uint **)(param_1 + 200);
  for (puVar4 = *(uint **)(param_1 + 0xc0); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)*puVar4 * 0x10);
    uVar2 = *(long *)(lVar3 + 0xe8) + 3U & 0xfffffffffffffffc;
    *(ulong *)(lVar3 + 0xd0) = uVar2;
    *(ulong *)(lVar3 + 0xd8) = uVar2 + (*(long *)(lVar3 + 0xf0) - *(long *)(lVar3 + 0xe8));
    *(undefined1 *)(lVar3 + 0xe0) = 0;
    uStack_40 = 0;
    uStack_38 = 0xffffffffffffffff;
    FUN_10922d864(lVar3,&uStack_40);
    *(undefined1 *)(lVar3 + 0x240) = 0;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x50);
  return;
}



/* Entry: 109250aa4; end: 109250ab7;  */

undefined1  [16] FUN_109250aa4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_1092508cc();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109250ab8; end: 109250b37;  */

undefined1  [16] FUN_109250ab8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_1092508cc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109250b38; end: 109250b9f;  */

void FUN_109250b38(long *param_1)

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
        lVar2 = lVar2 + -0x10;
        FUN_1092508cc(lVar2);
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



/* Entry: 109250ba0; end: 109250c53;  */

undefined8 * FUN_109250ba0(undefined8 *param_1)

{
  byte *pbVar1;
  long lStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  pbVar1 = (byte *)*param_1;
  lStack_28 = (long)(param_1[0x10] - param_1[0xf]) >> 2;
  if (((param_1[0x10] - param_1[0xf] != 0) && ((*pbVar1 >> 1 & 1) != 0)) &&
     (*(uint *)(pbVar1 + 8) < 6)) {
    FUN_10923225c(pbVar1,5,2,&UNK_10f55e2a6,0x4a,&lStack_28);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 1);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  FUN_109250b38(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109250c54; end: 109250cf3;  */

void FUN_109250c54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109250ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109250cf4; end: 109250d57;  */

void FUN_109250cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5e50;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109250d58; end: 109250d8b;  */

undefined8 * FUN_109250d58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109250c54(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109250d8c; end: 109250dc7;  */

long FUN_109250d8c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5e90);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109250dc8; end: 109250dcb;  */

void FUN_109250dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109250dcc; end: 109250e6b;  */

void FUN_109250dcc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109250e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109250e6c; end: 109250ecf;  */

void FUN_109250e6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5eb0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109250ed0; end: 109250f03;  */

undefined8 * FUN_109250ed0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109250dcc(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109250f04; end: 109250f3f;  */

long FUN_109250f04(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5ef0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109250f40; end: 109250f43;  */

void FUN_109250f40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109250f44; end: 109250fe3;  */

void FUN_109250f44(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109250f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109250fe4; end: 109251047;  */

void FUN_109250fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5f10;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109251048; end: 10925107b;  */

undefined8 * FUN_109251048(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109250f44(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 10925107c; end: 1092510b7;  */

long FUN_10925107c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5f50);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092510b8; end: 1092510bb;  */

void FUN_1092510b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092510bc; end: 10925115b;  */

void FUN_1092510bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 10925115c; end: 1092511bf;  */

void FUN_10925115c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5f70;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092511c0; end: 1092511f3;  */

undefined8 * FUN_1092511c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1092510bc(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 1092511f4; end: 10925122f;  */

long FUN_1092511f4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae5fb0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251230; end: 109251233;  */

void FUN_109251230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109251234; end: 109251293;  */

void FUN_109251234(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae6010);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109251294; end: 10925133b;  */

long * FUN_109251294(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_FUN_110ae5fd0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_10925133c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10925133c; end: 1092513eb;  */

void FUN_10925133c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 1092513ec; end: 109251493;  */

void FUN_1092513ec(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[2],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(lVar2 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(lVar2 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 109251494; end: 1092514f7;  */

void FUN_109251494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae5fd0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092514f8; end: 109251527;  */

long FUN_1092514f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1092513ec(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 109251528; end: 109251563;  */

long FUN_109251528(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6010);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251564; end: 109251567;  */

void FUN_109251564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109251568; end: 1092515c7;  */

void FUN_109251568(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae6070);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092515c8; end: 10925166f;  */

long * FUN_1092515c8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_FUN_110ae6030;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_109251670(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109251670; end: 10925171f;  */

void FUN_109251670(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 109251720; end: 1092517c7;  */

void FUN_109251720(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[2],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(lVar2 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(lVar2 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 1092517c8; end: 10925182b;  */

void FUN_1092517c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6030;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10925182c; end: 10925185b;  */

long FUN_10925182c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109251720(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10925185c; end: 109251897;  */

long FUN_10925185c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6070);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251898; end: 10925189b;  */

void FUN_109251898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925189c; end: 10925193b;  */

void FUN_10925189c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092518e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 10925193c; end: 10925199f;  */

void FUN_10925193c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6090;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092519a0; end: 1092519d3;  */

undefined8 * FUN_1092519a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10925189c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 1092519d4; end: 109251a0f;  */

long FUN_1092519d4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae60d0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251a10; end: 109251a13;  */

void FUN_109251a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109251a14; end: 109251ab3;  */

void FUN_109251a14(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109251ab4; end: 109251b17;  */

void FUN_109251ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae60f0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109251b18; end: 109251b4b;  */

undefined8 * FUN_109251b18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109251a14(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109251b4c; end: 109251b87;  */

long FUN_109251b4c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6130);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251b88; end: 109251b8b;  */

void FUN_109251b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109251b8c; end: 109251c2b;  */

void FUN_109251b8c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109251c2c; end: 109251c8f;  */

void FUN_109251c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6150;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109251c90; end: 109251cc3;  */

undefined8 * FUN_109251c90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109251b8c(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109251cc4; end: 109251cff;  */

long FUN_109251cc4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6190);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109251d00; end: 109251d03;  */

void FUN_109251d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109251d04; end: 109251d63;  */

void FUN_109251d04(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae61f0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109251d64; end: 109251e0b;  */

long * FUN_109251d64(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_FUN_110ae61b0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_109251e0c(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109251e0c; end: 109251ebb;  */

void FUN_109251e0c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 109251ebc; end: 109251f63;  */

void FUN_109251ebc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[2],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(lVar2 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(lVar2 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109251f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 109251f64; end: 109251fc7;  */

void FUN_109251f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae61b0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109251fc8; end: 109251ff7;  */

long FUN_109251fc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109251ebc(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 109251ff8; end: 109252033;  */

long FUN_109251ff8(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae61f0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109252034; end: 109252037;  */

void FUN_109252034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109252038; end: 1092520e7;  */

void FUN_109252038(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 1092520e8; end: 109252187;  */

void FUN_1092520e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109252134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109252188; end: 1092521eb;  */

void FUN_109252188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6210;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092521ec; end: 10925221f;  */

undefined8 * FUN_1092521ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1092520e8(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252220; end: 10925225b;  */

long FUN_109252220(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6250);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10925225c; end: 10925225f;  */

void FUN_10925225c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109252260; end: 1092522ff;  */

void FUN_109252260(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092522ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109252300; end: 109252363;  */

void FUN_109252300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6270;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109252364; end: 109252397;  */

undefined8 * FUN_109252364(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252260(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252398; end: 1092523d3;  */

long FUN_109252398(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae62b0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092523d4; end: 1092523d7;  */

void FUN_1092523d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092523d8; end: 109252477;  */

void FUN_1092523d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109252424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109252478; end: 1092524db;  */

void FUN_109252478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae62d0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092524dc; end: 10925250f;  */

undefined8 * FUN_1092524dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1092523d8(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 0x28);
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252510; end: 10925254b;  */

long FUN_109252510(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6310);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10925254c; end: 10925254f;  */

void FUN_10925254c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109252550; end: 1092525ef;  */

void FUN_109252550(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010925259c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


