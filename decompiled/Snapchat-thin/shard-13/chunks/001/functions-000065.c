/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fdc92c; end: 109fdc967;  */

long FUN_109fdc92c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b98fe0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fdc968; end: 109fdc973;  */

undefined ** FUN_109fdc968(void)

{
  return &PTR_DAT_110b98fe0;
}



/* Entry: 109fdc974; end: 109fdca1f;  */

void FUN_109fdc974(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 109fdca20; end: 109fdca23;  */

void FUN_109fdca20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109fdca24; end: 109fdca37;  */

void FUN_109fdca24(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdca38; end: 109fdcabb;  */

void FUN_109fdca38(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109fcc0a8(*(long *)(param_1 + 0x20) + 0x820,*(undefined4 *)(param_1 + 0x28),plVar1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109fdca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 109fdcabc; end: 109fdcac7;  */

void FUN_109fdcabc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdcac8; end: 109fdcafb;  */

void FUN_109fdcac8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110b99000;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109fdcafc; end: 109fdcb17;  */

void FUN_109fdcafc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110b99000;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109fdcb18; end: 109fdcbef;  */

void FUN_109fdcb18(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = uVar3;
  *(undefined4 *)(puVar1 + 4) = 0x12;
  *puVar1 = &PTR_DAT_110ae2ce8;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  *puVar2 = &PTR_DAT_110b99070;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  puVar2[4] = uVar3;
  puVar2[5] = 0xffffffff;
  param_1[1] = puVar2;
  func_0x0001092316c4(param_1,puVar1 + 1,puVar1);
  func_0x000109250078(uVar3,param_1);
  return;
}



/* Entry: 109fdcbf0; end: 109fdcc2b;  */

long FUN_109fdcbf0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b990b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fdcc2c; end: 109fdcc3b;  */

undefined ** FUN_109fdcc2c(void)

{
  return &PTR_DAT_110b990b0;
}



/* Entry: 109fdcc3c; end: 109fdcc4f;  */

void FUN_109fdcc3c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdcc50; end: 109fdccd3;  */

void FUN_109fdcc50(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_109fcc0a8(*(long *)(param_1 + 0x20) + 0x820,*(undefined4 *)(param_1 + 0x28),plVar1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109fdcc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}



/* Entry: 109fdccd4; end: 109fdccd7;  */

void FUN_109fdccd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdccd8; end: 109fdcdc3;  */

void FUN_109fdccd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b990d0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdcdc4; end: 109fdcdc7;  */

void FUN_109fdcdc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdcdc8; end: 109fdcebf;  */

undefined1  [16] FUN_109fdcdc8(long param_1,undefined8 param_2)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  uint uStack_34;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    uVar3 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = (uint *)(*(long *)(param_1 + 0x68) + -4);
    uStack_34 = *puVar1;
    *(uint **)(param_1 + 0x68) = puVar1;
    *(long *)(*(long *)(param_1 + 0x48) + (ulong)uStack_34 * 0x10 + 8) =
         *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2;
    func_0x000109231afc((long *)(param_1 + 0x78),&uStack_34);
    uVar2 = (ulong)uStack_34;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + uVar2 * 0x10);
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    FUN_109fd2c58(uVar3,param_2);
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 109fdcec0; end: 109fdcf77;  */

void FUN_109fdcec0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uStack_38;
  
  uStack_38 = param_3;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + (param_3 & 0xffffffff) * 0x10;
  lVar4 = *(long *)(lVar1 + 8);
  puVar5 = (uint *)(*(long *)(param_1 + 0x80) + -4);
  uVar2 = *puVar5;
  *(uint *)(*(long *)(param_1 + 0x78) + lVar4 * 4) = uVar2;
  *(uint **)(param_1 + 0x80) = puVar5;
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  if (uVar2 != (uint)param_3) {
    *(long *)(lVar3 + (ulong)uVar2 * 0x10 + 8) = lVar4;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  func_0x000109fd2d50(param_2);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  func_0x000109231afc(param_1 + 0x60,&uStack_38);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return;
}



/* Entry: 109fdcf78; end: 109fdcfc3;  */

void FUN_109fdcf78(long *param_1,undefined8 param_2)

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
  FUN_109fcc0a8(*(long *)(lVar7 + 0x18) + 0x820,*(undefined4 *)((long)param_1 + 0x14),param_2);
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
  func_0x000109fd2d50(param_2);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x50);
  func_0x000109231afc(lVar7 + 0xa8,&uStack_38);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x50);
  return;
}



/* Entry: 109fdcfc4; end: 109fdd027;  */

void FUN_109fdcfc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99130;
  func_0x00010922d7c8(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd028; end: 109fdd057;  */

long FUN_109fdd028(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109fdcf78(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 109fdd058; end: 109fdd093;  */

long FUN_109fdd058(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b99170);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fdd094; end: 109fdd09f;  */

void FUN_109fdd094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd0a0; end: 109fdd0d3;  */

void FUN_109fdd0a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110b99190;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109fdd0d4; end: 109fdd0ef;  */

void FUN_109fdd0d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110b99190;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109fdd0f0; end: 109fdd163;  */

void FUN_109fdd0f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x738;
  __Znwm();
  FUN_109fd28fc();
  *param_1 = uVar1;
  return;
}



/* Entry: 109fdd164; end: 109fdd19f;  */

long FUN_109fdd164(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b99200);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fdd1a0; end: 109fdd1ab;  */

undefined ** FUN_109fdd1a0(void)

{
  return &PTR_DAT_110b99200;
}



/* Entry: 109fdd1ac; end: 109fdd253;  */

undefined8 * FUN_109fdd1ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99220;
  FUN_109fdd3e0(param_1 + 9);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fdd254; end: 109fdd2bb;  */

void FUN_109fdd254(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x50);
  puVar1 = *(uint **)(param_1 + 200);
  for (puVar2 = *(uint **)(param_1 + 0xc0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    func_0x000109fd2cfc(*(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)*puVar2 * 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x50);
  return;
}



/* Entry: 109fdd2bc; end: 109fdd2cf;  */

undefined1  [16] FUN_109fdd2bc(undefined8 param_1,undefined8 param_2)

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
    FUN_109fdd350();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109fdd2d0; end: 109fdd34f;  */

undefined1  [16] FUN_109fdd2d0(long *param_1,undefined8 param_2)

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
    FUN_109fdd350();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109fdd350; end: 109fdd377;  */

void FUN_109fdd350(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_109fd2a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109fdd378; end: 109fdd3df;  */

void FUN_109fdd378(long *param_1)

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
        FUN_109fdd350(lVar2);
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



/* Entry: 109fdd3e0; end: 109fdd493;  */

undefined8 * FUN_109fdd3e0(undefined8 *param_1)

{
  byte *pbVar1;
  long lStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  pbVar1 = (byte *)*param_1;
  lStack_28 = (long)(param_1[0x10] - param_1[0xf]) >> 2;
  if (((param_1[0x10] - param_1[0xf] != 0) && ((*pbVar1 >> 1 & 1) != 0)) &&
     (*(uint *)(pbVar1 + 8) < 6)) {
    func_0x00010923225c(pbVar1,5,2,&UNK_10f55e2a6,0x4a,&lStack_28);
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
  FUN_109fdd378(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 109fdd494; end: 109fdd57f;  */

void FUN_109fdd494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99280;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd580; end: 109fdd583;  */

void FUN_109fdd580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd584; end: 109fdd66f;  */

void FUN_109fdd584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b992d0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd670; end: 109fdd673;  */

void FUN_109fdd670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd674; end: 109fdd75f;  */

void FUN_109fdd674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99320;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd760; end: 109fdd763;  */

void FUN_109fdd760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd764; end: 109fdd84f;  */

void FUN_109fdd764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99370;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd850; end: 109fdd853;  */

void FUN_109fdd850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd854; end: 109fdd93f;  */

void FUN_109fdd854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b993c0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdd940; end: 109fdd943;  */

void FUN_109fdd940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdd944; end: 109fdd9eb;  */

long * FUN_109fdd944(long *param_1,long param_2,undefined8 *param_3)

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
  *puVar3 = &PTR_DAT_110b99410;
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
  FUN_109fdd9ec(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109fdd9ec; end: 109fddb87;  */

void FUN_109fdd9ec(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109fddb88; end: 109fddb8b;  */

void FUN_109fddb88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fddb8c; end: 109fddc77;  */

void FUN_109fddb8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99460;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fddc78; end: 109fddc7b;  */

void FUN_109fddc78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fddc7c; end: 109fddd67;  */

void FUN_109fddc7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b994b0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fddd68; end: 109fddd6b;  */

void FUN_109fddd68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fddd6c; end: 109fdde57;  */

void FUN_109fddd6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99500;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fdde58; end: 109fdde5b;  */

void FUN_109fdde58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdde5c; end: 109fddf47;  */

void FUN_109fdde5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99550;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fddf48; end: 109fddf4b;  */

void FUN_109fddf48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fddf4c; end: 109fde037;  */

void FUN_109fddf4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b995a0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fde038; end: 109fde03b;  */

void FUN_109fde038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde03c; end: 109fde127;  */

void FUN_109fde03c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b995f0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fde128; end: 109fde12b;  */

void FUN_109fde128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde12c; end: 109fde217;  */

void FUN_109fde12c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99640;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fde218; end: 109fde21b;  */

void FUN_109fde218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde21c; end: 109fde36f;  */

long * FUN_109fde21c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = param_2;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  lVar8 = param_3[1];
  lVar7 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar5 = param_3[2];
  *plVar4 = (long)&PTR_FUN_110b99690;
  plVar4[2] = 0;
  plVar4[3] = param_2;
  plVar4[5] = lVar8;
  plVar4[4] = lVar7;
  *(int *)(plVar4 + 6) = (int)lVar5;
  *(undefined4 *)((long)plVar4 + 0x34) = 0;
  param_1[1] = (long)plVar4;
  if (*(long *)(param_2 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0x10) + 8) != -1) {
      return param_1;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return param_1;
}



/* Entry: 109fde370; end: 109fde45b;  */

void FUN_109fde370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99690;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fde45c; end: 109fde45f;  */

void FUN_109fde45c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde460; end: 109fde5b3;  */

long * FUN_109fde460(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = param_2;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  lVar8 = param_3[1];
  lVar7 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar5 = param_3[2];
  *plVar4 = (long)&PTR_FUN_110b996e0;
  plVar4[2] = 0;
  plVar4[3] = param_2;
  plVar4[5] = lVar8;
  plVar4[4] = lVar7;
  *(int *)(plVar4 + 6) = (int)lVar5;
  *(undefined4 *)((long)plVar4 + 0x34) = 0;
  param_1[1] = (long)plVar4;
  if (*(long *)(param_2 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0x10) + 8) != -1) {
      return param_1;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return param_1;
}



/* Entry: 109fde5b4; end: 109fde69f;  */

void FUN_109fde5b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b996e0;
  func_0x0001092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109fde6a0; end: 109fde6a3;  */

void FUN_109fde6a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde6a4; end: 109fde77b;  */

void FUN_109fde6a4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  FUN_109fde77c(&uStack_50,&uStack_21,param_2);
  plStack_38 = plStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_109fd097c(param_1,&uStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 109fde77c; end: 109fde7db;  */

void FUN_109fde77c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x980;
  __Znwm();
  FUN_109fde7dc();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x20) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x28);
    }
    *(long *)(lVar4 + 0x20) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x28) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 109fde7dc; end: 109fde823;  */

undefined8 * FUN_109fde7dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b99730;
  FUN_109fd80a4(param_1 + 3);
  return param_1;
}



/* Entry: 109fde824; end: 109fde833;  */

void FUN_109fde824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109fde834; end: 109fde853;  */

void FUN_109fde834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b99730;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fde854; end: 109fde85f;  */

void FUN_109fde854(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x8b8);
  lVar1 = *(long *)(param_1 + 0x8b0);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x18;
    lStack_38 = lVar2;
    func_0x00010924f584(&lStack_38);
  }
  *(long *)(param_1 + 0x8b8) = lVar1;
  func_0x00010924c250(param_1 + 0x8a0,0);
  func_0x00010924c278(param_1 + 0x8a8,0);
  FUN_109fdc650(param_1 + 0x950);
  __ZNSt3__15mutexD1Ev(param_1 + 0x910);
  _objc_release(*(undefined8 *)(param_1 + 0x8f8));
  _objc_release(*(undefined8 *)(param_1 + 0x8f0));
  func_0x00010922e6fc(param_1 + 0x18);
  return;
}



/* Entry: 109fde860; end: 109fde967;  */

void FUN_109fde860(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109fde968; end: 109fdea57;  */

void FUN_109fde968(long param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  undefined4 uStack_c8;
  long lStack_58;
  undefined4 uStack_50;
  long lStack_38;
  
  if (*(char *)(param_3 + 0x78) == '\x01') {
    iVar3 = *(int *)(param_3 + 0x74);
  }
  else {
    iVar3 = -1;
  }
  if (iVar3 != *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xa8) = iVar3;
    lStack_58 = param_1 + 0xa0;
    uStack_50 = 0;
    FUN_109fdece8(&lStack_58,4);
  }
  func_0x000109261a54(&lStack_58,param_4,param_4 + param_5 * 4);
  lVar5 = param_1 + (param_2 & 0xffffffff) * 0x28;
  if ((*(long *)(lVar5 + 0x20) != lStack_38) ||
     (lVar7 = lVar5, _memcmp(lVar5,&lStack_58,*(long *)(lVar5 + 0x20) << 2), (int)lVar7 != 0)) {
    plVar2 = &lStack_58;
    func_0x000109261f4c(lVar5,plVar2);
    if (3 < (uint)param_2) {
      puVar1 = &UNK_10f62faa9;
      func_0x000109262df8();
      func_0x000104bd46a0();
      _objc_retain(plVar2);
      if (((puVar1[0xa0] & 0xf) != 0) && (*(int *)(puVar1 + 0xa8) != -1)) {
        lVar5 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        plVar6 = (long *)(puVar1 + 0x20);
        lVar7 = 0xa0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        do {
          if (*plVar6 != 0) {
            uVar4 = *plVar6 - 1;
            _memcpy((long)&uStack_150 + lVar5 * 4,plVar6 + -4,uVar4 * 4 + 4);
            lVar5 = lVar5 + (uVar4 & 0x3fffffffffffffff) + 1;
          }
          plVar6 = plVar6 + 5;
          lVar7 = lVar7 + -0x28;
        } while (lVar7 != 0);
        if (lVar5 != 0) {
          func_0x00010c220f40(plVar2);
          func_0x00010c19f040(plVar2);
        }
        uStack_c8 = 0;
        pbStack_d0 = puVar1 + 0xa0;
        func_0x000109fded98(&pbStack_d0,4);
      }
      _objc_release(plVar2);
      return;
    }
    *(ulong *)(param_1 + 0xa0) = *(ulong *)(param_1 + 0xa0) | 1L << (param_2 & 0x3f);
  }
  return;
}



/* Entry: 109fdea58; end: 109fdeb83;  */

void FUN_109fdea58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_2);
  if (((*(byte *)(param_1 + 0xa0) & 0xf) != 0) && (*(int *)(param_1 + 0xa8) != -1)) {
    lVar2 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    plVar3 = (long *)(param_1 + 0x20);
    lVar4 = 0xa0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    do {
      if (*plVar3 != 0) {
        uVar1 = *plVar3 - 1;
        _memcpy((long)&uStack_f0 + lVar2 * 4,plVar3 + -4,uVar1 * 4 + 4);
        lVar2 = lVar2 + (uVar1 & 0x3fffffffffffffff) + 1;
      }
      plVar3 = plVar3 + 5;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    if (lVar2 != 0) {
      func_0x00010c220f40(param_2);
      func_0x00010c19f040(param_2);
    }
    uStack_68 = 0;
    pbStack_70 = (byte *)(param_1 + 0xa0);
    func_0x000109fded98(&pbStack_70,4);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 109fdeb84; end: 109fdec8f;  */

void FUN_109fdeb84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_2);
  if (((*(byte *)(param_1 + 0xa0) & 0xf) != 0) && (*(int *)(param_1 + 0xa8) != -1)) {
    lVar3 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    plVar2 = (long *)(param_1 + 0x20);
    lVar4 = 0xa0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    do {
      if (*plVar2 != 0) {
        uVar1 = *plVar2 - 1;
        _memcpy((long)&uStack_e0 + lVar3 * 4,plVar2 + -4,uVar1 * 4 + 4);
        lVar3 = lVar3 + (uVar1 & 0x3fffffffffffffff) + 1;
      }
      plVar2 = plVar2 + 5;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    if (lVar3 != 0) {
      func_0x00010c174ce0(param_2);
    }
    uStack_58 = 0;
    pbStack_60 = (byte *)(param_1 + 0xa0);
    func_0x000109fded98(&pbStack_60,4);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 109fdec90; end: 109fdece7;  */

void FUN_109fdec90(long param_1)

{
  long lStack_30;
  undefined4 uStack_28;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lStack_30 = param_1 + 0xa0;
  uStack_28 = 0;
  func_0x000109fded98(&lStack_30,4);
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  return;
}



/* Entry: 109fdece8; end: 109fdee43;  */

void FUN_109fdece8(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 | 0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar4,0xff,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] = puVar4[uVar5] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 109fdee44; end: 109fdeed3;  */

undefined4 FUN_109fdee44(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if ((param_2 == 0) || (*(ulong *)(param_1 + 0x68) <= param_2)) {
    uVar1 = *(ulong *)(param_1 + 0x70);
    if (uVar1 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      func_0x00010c252d60();
      if (3 < uVar1) {
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        _objc_release(uVar2);
        *(undefined4 *)(param_1 + 0x78) = 1;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    uVar3 = 1;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return uVar3;
}



/* Entry: 109fdeed4; end: 109fdef43;  */

void FUN_109fdeed4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x70);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010c252d60();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    if (lVar1 != 4) {
      func_0x00010c2a14a0(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar2);
  *(undefined4 *)(param_1 + 0x78) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109fdef44; end: 109fdef9b;  */

void FUN_109fdef44(long param_1)

{
  ulong uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x70);
  if ((uVar1 != 0) && (func_0x00010c252d60(), uVar1 < 3)) {
    func_0x00010c2a15c0(*(undefined8 *)(param_1 + 0x70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109fdef9c; end: 109fdf023;  */

void FUN_109fdef9c(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109fdf024; end: 109fdf15f;  */

void FUN_109fdf024(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x28);
  func_0x00010922d97c(&uStack_40,*(undefined8 *)(param_2 + 0x18),param_2);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  *puVar5 = &PTR_DAT_110b981a0;
  puVar5[1] = uStack_40;
  puVar5[2] = plVar2;
  if (plVar2 == (long *)0x0) {
    *param_1 = puVar5;
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = puVar5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x28);
  return;
}



/* Entry: 109fdf160; end: 109fdf277;  */

undefined8 * FUN_109fdf160(undefined8 *param_1)

{
  _objc_release(param_1[0xe]);
  *param_1 = &PTR_DAT_110b97d00;
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fdf278; end: 109fdf4cf;  */

undefined8 * FUN_109fdf278(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0x11;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110b99858;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  puVar3 = PTR__OBJC_CLASS___MTLBinaryArchiveDescriptor_1126de040;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLBinaryArchiveDescriptor_1126de040);
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(&uStack_80,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    uStack_78 = *(undefined8 *)(param_3 + 4);
    uStack_80 = *(undefined8 *)(param_3 + 2);
    lStack_70 = *(long *)(param_3 + 6);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf384a0();
  _objc_retain(0);
  func_0x00010c21d340(puVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x8d8);
  func_0x00010c0d8560();
  _objc_retain(0);
  uVar7 = param_1[0xb];
  param_1[0xb] = uVar6;
  _objc_release(uVar7);
  if (param_1[0xb] != 0) {
    _objc_release(0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    _objc_release(0);
    _objc_release(puVar3);
    return param_1;
  }
  func_0x000109243bf8(&UNK_10f62faca);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fdf43c);
  (*pcVar2)();
}



/* Entry: 109fdf4d0; end: 109fdf607;  */

void FUN_109fdf4d0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 auStack_ab0 [2];
  undefined1 auStack_aa8 [40];
  undefined8 uStack_a80;
  undefined1 auStack_a78 [40];
  undefined8 uStack_a50;
  undefined1 auStack_a48 [1144];
  undefined1 auStack_5d0 [80];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [1064];
  long lStack_148;
  undefined4 uStack_138;
  undefined1 auStack_130 [40];
  undefined8 uStack_108;
  undefined1 auStack_100 [40];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [80];
  
  func_0x00010928b998(auStack_570);
  if (lStack_148 != 0) {
    FUN_109fce474(auStack_ab0,lStack_148 + 0x28,*(undefined4 *)(param_2 + 0x430),
                  *(undefined1 *)(param_2 + 0x2e8));
    uStack_138 = auStack_ab0[0];
    func_0x00010928bd7c(auStack_130,auStack_aa8);
    uStack_108 = uStack_a80;
    func_0x000109261f4c(auStack_100,auStack_a78);
    uStack_d8 = uStack_a50;
    func_0x000109261f4c(auStack_d0,auStack_a48);
  }
  lStack_148 = 0;
  func_0x00010928b998(auStack_ab0,auStack_570);
  uVar2 = *param_3;
  _objc_retain(uVar2);
  uVar1 = *param_4;
  uStack_580 = uVar2;
  _objc_retain(uVar1);
  uStack_578 = uVar1;
  FUN_109fdf608(param_1 + 0x28,auStack_ab0);
  _objc_release(uStack_578);
  _objc_release(uStack_580);
  func_0x000109234a54(auStack_5d0);
  func_0x000109234a54(auStack_90);
  return;
}



/* Entry: 109fdf608; end: 109fdf69f;  */

void FUN_109fdf608(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000109295560(uVar1,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x538);
    uVar3 = *(undefined8 *)(param_2 + 0x530);
    *(undefined8 *)(param_2 + 0x538) = 0;
    *(undefined8 *)(param_2 + 0x530) = 0;
    *(undefined8 *)(uVar1 + 0x538) = uVar4;
    *(undefined8 *)(uVar1 + 0x530) = uVar3;
    lVar2 = uVar1 + 0x540;
  }
  else {
    lVar2 = param_1;
    FUN_109fdfcbc(param_1,param_2);
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109fdf6a0; end: 109fdf73f;  */

void FUN_109fdf6a0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [56];
  undefined8 uStack_40;
  
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_80 = param_2[6];
  func_0x000109249ebc(auStack_78,param_2 + 7);
  uVar1 = *param_3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  FUN_109fdf740(param_1 + 0x40,&uStack_b0);
  _objc_release(uStack_40);
  func_0x00010922e088(auStack_78);
  return;
}



/* Entry: 109fdf740; end: 109fdf7bb;  */

void FUN_109fdf740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    puVar1[6] = param_2[6];
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    func_0x00010924a098(puVar1 + 7,param_2 + 7);
    uVar2 = param_2[0xe];
    param_2[0xe] = 0;
    puVar1[0xe] = uVar2;
    puVar1 = puVar1 + 0xf;
  }
  else {
    puVar1 = param_1;
    FUN_109fdfea0(param_1,param_2);
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 109fdf7bc; end: 109fdfb27;  */

undefined4 FUN_109fdf7bc(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar5 = *(long *)(param_1 + 0x28);
  lVar12 = *(long *)(param_1 + 0x30);
  lStack_68 = param_1;
  if (lVar5 == lVar12) {
    lVar11 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar6 = lVar5;
      FUN_109fe7110(lVar5,lVar5 + 0x530,lVar5 + 0x538);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x58);
      lStack_70 = lVar7;
      func_0x00010befaea0();
      lVar11 = lStack_70;
      _objc_retain(lStack_70);
      _objc_release(lVar7);
      if (lVar11 == 0) {
        uVar3 = 1;
      }
      if ((uVar3 & 1) == 0) {
        lVar7 = lVar11;
        func_0x00010bf6e340(lVar11);
        _objc_retainAutoreleasedReturnValue();
        FUN_109fe5184(&uStack_90);
        uVar2 = uStack_80;
        uVar1 = uStack_90;
        uStack_80 = uStack_80 & 0xffffffffffffff;
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        _objc_release(lVar7);
        if ((long)uVar2 < 0) {
          __ZdlPv(uVar1);
        }
      }
      _objc_release(lVar6);
      lVar5 = lVar5 + 0x540;
      lVar7 = lVar11;
    } while (lVar5 != lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x48);
  puVar8 = PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038;
  for (lVar5 = *(long *)(param_1 + 0x40);
      PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038 = puVar8, lVar5 != lVar12;
      lVar5 = lVar5 + 0x78) {
    _objc_alloc_init(puVar8);
    func_0x00010c180680();
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x58);
    func_0x00010bef7940();
    _objc_retain(lVar11);
    _objc_release(lVar11);
    if (lVar11 == 0) {
      uVar3 = 1;
    }
    if ((uVar3 & 1) == 0) {
      lVar7 = lVar11;
      func_0x00010bf6e340(lVar11);
      _objc_retainAutoreleasedReturnValue();
      FUN_109fe5184(&uStack_90);
      uVar2 = uStack_80;
      uVar1 = uStack_90;
      uStack_80 = uStack_80 & 0xffffffffffffff;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      _objc_release(lVar7);
      if ((long)uVar2 < 0) {
        __ZdlPv(uVar1);
      }
    }
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    uStack_90 = *param_2;
    uStack_80 = param_2[2];
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  iVar4 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c15e8e0();
  _objc_retain(lVar11);
  _objc_release(lVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if ((long)uStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  _objc_release(lVar11);
  uVar10 = 0;
  if (iVar4 == 0) {
    uVar10 = 3;
  }
  FUN_109fdfb28(&lStack_68);
  return uVar10;
}



/* Entry: 109fdfb28; end: 109fdfb7f;  */

long * FUN_109fdfb28(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(lVar2 + 0x30);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x540;
    FUN_109fdfc8c(lVar3);
  }
  *(long *)(lVar2 + 0x30) = lVar1;
  FUN_109fdfbcc((undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x40));
  return param_1;
}



/* Entry: 109fdfb80; end: 109fdfb87;  */

void FUN_109fdfb80(void)

{
  return;
}



/* Entry: 109fdfb88; end: 109fdfb9b;  */

void FUN_109fdfb88(void)

{
  FUN_109fe00e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fdfb9c; end: 109fdfbcb;  */

void FUN_109fdfb9c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109fdfbcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 109fdfbcc; end: 109fdfc8b;  */

void FUN_109fdfbcc(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x78) {
    _objc_release(*(undefined8 *)(lVar1 + -8));
    func_0x00010922e088(lVar1 + -0x40);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109fdfc8c; end: 109fdfcbb;  */

long FUN_109fdfc8c(long param_1)

{
  long lStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x538));
  _objc_release(*(undefined8 *)(param_1 + 0x530));
  if (*(char *)(param_1 + 0x528) == '\x01') {
    lStack_28 = param_1 + 0x510;
    func_0x000109234ab4(&lStack_28);
    if (*(long *)(param_1 + 0x4f8) != 0) {
      *(long *)(param_1 + 0x500) = *(long *)(param_1 + 0x4f8);
      __ZdlPv();
    }
    lStack_28 = param_1 + 0x4e0;
    func_0x00010922e0d8(&lStack_28);
  }
  return param_1 + 0x4e0;
}



/* Entry: 109fdfcbc; end: 109fdfe3f;  */

long * FUN_109fdfcbc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar9 = param_1[1] - *param_1;
  uVar6 = (lVar9 >> 6) * -0x30c30c30c30c30c3 + 1;
  if (0x30c30c30c30c30 < uVar6) {
    FUN_109fdfe40();
LAB_109fdfe3c:
    func_0x000104c4f740();
    plVar4 = (long *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    lVar9 = plVar4[1];
    lVar5 = plVar4[2];
    while (lVar5 != lVar9) {
      plVar4[2] = lVar5 + -0x540;
      FUN_109fdfc8c();
      lVar5 = plVar4[2];
    }
    if (*plVar4 != 0) {
      __ZdlPv();
    }
    return plVar4;
  }
  lVar5 = param_1[2] - *param_1 >> 6;
  uVar7 = lVar5 * -0x6186186186186186;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar7 = uVar6;
  }
  if (0x18618618618617 < (ulong)(lVar5 * -0x30c30c30c30c30c3)) {
    uVar7 = 0x30c30c30c30c30;
  }
  plStack_58 = param_1;
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    if (0x30c30c30c30c30 < uVar7) goto LAB_109fdfe3c;
    lVar5 = uVar7 * 0x540;
    __Znwm();
  }
  lVar9 = lVar5 + lVar9;
  func_0x000109295560(lVar9,param_2);
  uVar12 = *(undefined8 *)(param_2 + 0x538);
  uVar11 = *(undefined8 *)(param_2 + 0x530);
  *(undefined8 *)(param_2 + 0x538) = 0;
  *(undefined8 *)(param_2 + 0x530) = 0;
  *(undefined8 *)(lVar9 + 0x538) = uVar12;
  *(undefined8 *)(lVar9 + 0x530) = uVar11;
  lVar8 = *param_1;
  lVar2 = param_1[1];
  lVar1 = lVar9 + (lVar8 - lVar2);
  lVar3 = lVar1;
  lVar10 = lVar8;
  if (lVar8 - lVar2 != 0) {
    do {
      func_0x000109295560(lVar3,lVar10);
      uVar12 = *(undefined8 *)(lVar10 + 0x538);
      uVar11 = *(undefined8 *)(lVar10 + 0x530);
      *(undefined8 *)(lVar10 + 0x538) = 0;
      *(undefined8 *)(lVar10 + 0x530) = 0;
      *(undefined8 *)(lVar3 + 0x538) = uVar12;
      *(undefined8 *)(lVar3 + 0x530) = uVar11;
      lVar10 = lVar10 + 0x540;
      lVar3 = lVar3 + 0x540;
    } while (lVar10 != lVar2);
    do {
      FUN_109fdfc8c(lVar8);
      lVar8 = lVar8 + 0x540;
    } while (lVar8 != lVar2);
    lVar8 = *param_1;
  }
  *param_1 = lVar1;
  param_1[1] = lVar9 + 0x540;
  lStack_60 = param_1[2];
  param_1[2] = lVar5 + uVar7 * 0x540;
  lStack_78 = lVar8;
  lStack_70 = lVar8;
  lStack_68 = lVar8;
  FUN_109fdfe54(&lStack_78);
  return (long *)(lVar9 + 0x540);
}


