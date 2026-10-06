/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10925f5f8; end: 10925f64b;  */

void FUN_10925f5f8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ae6c90)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10925f64c; end: 10925f663;  */

void FUN_10925f64c(void)

{
  return;
}



/* Entry: 10925f664; end: 10925f6ab;  */

void FUN_10925f664(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1[6] == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_10925f5f8(puVar1);
    *puVar1 = *param_3;
    puVar1[6] = 0;
  }
  return;
}



/* Entry: 10925f6ac; end: 10925f6b3;  */

void FUN_10925f6ac(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 3) == 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar3;
    *param_2 = uVar2;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
  }
  else {
    FUN_10925f5f8();
    uVar3 = param_3[1];
    uVar2 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
  }
  return;
}



/* Entry: 10925f6b4; end: 10925f73b;  */

void FUN_10925f6b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 3) == 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
  }
  else {
    FUN_10925f5f8();
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[2] = param_3[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10925f73c; end: 10925f74f;  */

undefined1  [16] FUN_10925f73c(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar2 = (undefined8 *)&UNK_10f561686;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = lVar3;
    return auVar13;
  }
  func_0x000104c4f740();
  uVar7 = puVar2[2];
  puVar12 = (undefined8 *)*puVar2;
  puVar4 = puVar2;
  if ((long *)(uVar7 - (long)puVar12) < param_4) {
    puVar8 = puVar2;
    plVar9 = param_2;
    plVar6 = param_3;
    if (puVar12 != (undefined8 *)0x0) {
      puVar2[1] = puVar12;
      __ZdlPv();
      uVar7 = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar8 = puVar12;
    }
    if ((long)param_4 < 0) {
      func_0x000104c591bc();
      uVar1 = (int)plVar9 * 3;
      plVar5 = plVar9;
      if ((ulong)(plVar6[1] - *plVar6) < (ulong)((long)(int)uVar1 << 2)) {
        plVar5 = (long *)(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
        func_0x0001074287b0(plVar6,plVar5);
      }
      if (0 < (int)plVar9) {
        lVar3 = 0;
        do {
          lVar10 = *plVar6;
          uVar11 = *puVar8;
          *(undefined4 *)((undefined8 *)(lVar10 + lVar3) + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined8 *)(lVar10 + lVar3) = uVar11;
          lVar3 = lVar3 + 0xc;
          puVar8 = puVar8 + 2;
        } while (((ulong)plVar9 & 0xffffffff) * 0xc - lVar3 != 0);
      }
      auVar15._0_8_ = *plVar6;
      auVar15._8_8_ = plVar5;
      return auVar15;
    }
    plVar9 = (long *)(uVar7 * 2);
    if (plVar9 < param_4 || (long)plVar9 - (long)param_4 == 0) {
      plVar9 = param_4;
    }
    if (0x3ffffffffffffffe < uVar7) {
      plVar9 = (long *)0x7fffffffffffffff;
    }
    FUN_109246380(puVar2,plVar9);
    puVar12 = (undefined8 *)puVar2[1];
    for (; param_3 != param_2; param_2 = (long *)((long)param_2 + 1)) {
      *(char *)puVar12 = (char)*param_2;
      puVar12 = (undefined8 *)((long)puVar12 + 1);
    }
  }
  else {
    puVar8 = (undefined8 *)puVar2[1];
    plVar9 = param_2;
    if ((long *)((long)puVar8 - (long)puVar12) < param_4) {
      plVar6 = (long *)(((long)puVar8 - (long)puVar12) + (long)param_2);
      if (puVar8 != puVar12) {
        _memmove(puVar12,param_2);
        puVar8 = (undefined8 *)puVar2[1];
        puVar4 = puVar12;
        plVar9 = param_2;
      }
      puVar12 = puVar8;
      if (plVar6 != param_3) {
        puVar12 = (undefined8 *)(((long)puVar8 + (long)param_3) - (long)plVar6);
        do {
          plVar5 = (long *)((long)plVar6 + 1);
          *(char *)puVar8 = (char)*plVar6;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
          plVar6 = plVar5;
        } while (plVar5 != param_3);
      }
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      if (lVar3 != 0) {
        puVar4 = puVar12;
        _memmove(puVar12,param_2,lVar3);
        plVar9 = param_2;
      }
      puVar12 = (undefined8 *)((long)puVar12 + lVar3);
    }
  }
  puVar2[1] = puVar12;
  auVar14._8_8_ = plVar9;
  auVar14._0_8_ = puVar4;
  return auVar14;
}



/* Entry: 10925f750; end: 10925f783;  */

undefined1  [16] FUN_10925f750(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar2;
    return auVar12;
  }
  func_0x000104c4f740();
  uVar6 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((long *)(uVar6 - (long)puVar11) < param_4) {
    puVar7 = param_1;
    plVar8 = param_2;
    plVar5 = param_3;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar11;
    }
    if ((long)param_4 < 0) {
      func_0x000104c591bc();
      uVar1 = (int)plVar8 * 3;
      plVar4 = plVar8;
      if ((ulong)(plVar5[1] - *plVar5) < (ulong)((long)(int)uVar1 << 2)) {
        plVar4 = (long *)(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
        func_0x0001074287b0(plVar5,plVar4);
      }
      if (0 < (int)plVar8) {
        lVar2 = 0;
        do {
          lVar9 = *plVar5;
          uVar10 = *puVar7;
          *(undefined4 *)((undefined8 *)(lVar9 + lVar2) + 1) = *(undefined4 *)(puVar7 + 1);
          *(undefined8 *)(lVar9 + lVar2) = uVar10;
          lVar2 = lVar2 + 0xc;
          puVar7 = puVar7 + 2;
        } while (((ulong)plVar8 & 0xffffffff) * 0xc - lVar2 != 0);
      }
      auVar14._0_8_ = *plVar5;
      auVar14._8_8_ = plVar4;
      return auVar14;
    }
    plVar8 = (long *)(uVar6 * 2);
    if (plVar8 < param_4 || (long)plVar8 - (long)param_4 == 0) {
      plVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar6) {
      plVar8 = (long *)0x7fffffffffffffff;
    }
    FUN_109246380(param_1,plVar8);
    puVar11 = (undefined8 *)param_1[1];
    for (; param_3 != param_2; param_2 = (long *)((long)param_2 + 1)) {
      *(char *)puVar11 = (char)*param_2;
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    }
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    plVar8 = param_2;
    if ((long *)((long)puVar7 - (long)puVar11) < param_4) {
      plVar5 = (long *)(((long)puVar7 - (long)puVar11) + (long)param_2);
      if (puVar7 != puVar11) {
        _memmove(puVar11,param_2);
        puVar7 = (undefined8 *)param_1[1];
        puVar3 = puVar11;
        plVar8 = param_2;
      }
      puVar11 = puVar7;
      if (plVar5 != param_3) {
        puVar11 = (undefined8 *)(((long)puVar7 + (long)param_3) - (long)plVar5);
        do {
          plVar4 = (long *)((long)plVar5 + 1);
          *(char *)puVar7 = (char)*plVar5;
          puVar7 = (undefined8 *)((long)puVar7 + 1);
          plVar5 = plVar4;
        } while (plVar4 != param_3);
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        puVar3 = puVar11;
        _memmove(puVar11,param_2,lVar2);
        plVar8 = param_2;
      }
      puVar11 = (undefined8 *)((long)puVar11 + lVar2);
    }
  }
  param_1[1] = puVar11;
  auVar13._8_8_ = plVar8;
  auVar13._0_8_ = puVar3;
  return auVar13;
}



/* Entry: 10925f784; end: 10925f8b7;  */

undefined8 * FUN_10925f784(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  uVar4 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  puVar2 = param_1;
  if (uVar4 - (long)puVar11 < param_4) {
    puVar5 = param_1;
    plVar3 = param_2;
    plVar10 = param_3;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar5 = puVar11;
    }
    if ((long)param_4 < 0) {
      func_0x000104c591bc();
      uVar1 = (int)plVar3 * 3;
      if ((ulong)(plVar10[1] - *plVar10) < (ulong)((long)(int)uVar1 << 2)) {
        func_0x0001074287b0(plVar10,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2
                           );
      }
      if (0 < (int)plVar3) {
        lVar6 = 0;
        do {
          lVar8 = *plVar10;
          uVar9 = *puVar5;
          *(undefined4 *)((undefined8 *)(lVar8 + lVar6) + 1) = *(undefined4 *)(puVar5 + 1);
          *(undefined8 *)(lVar8 + lVar6) = uVar9;
          lVar6 = lVar6 + 0xc;
          puVar5 = puVar5 + 2;
        } while (((ulong)plVar3 & 0xffffffff) * 0xc - lVar6 != 0);
      }
      return (undefined8 *)*plVar10;
    }
    uVar7 = uVar4 * 2;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_109246380(param_1,uVar7);
    puVar11 = (undefined8 *)param_1[1];
    for (; param_3 != param_2; param_2 = (long *)((long)param_2 + 1)) {
      *(char *)puVar11 = (char)*param_2;
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar5 - (long)puVar11) < param_4) {
      plVar3 = (long *)(((long)puVar5 - (long)puVar11) + (long)param_2);
      if (puVar5 != puVar11) {
        _memmove(puVar11,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar2 = puVar11;
      }
      puVar11 = puVar5;
      if (plVar3 != param_3) {
        puVar11 = (undefined8 *)(((long)puVar5 + (long)param_3) - (long)plVar3);
        do {
          plVar10 = (long *)((long)plVar3 + 1);
          *(char *)puVar5 = (char)*plVar3;
          puVar5 = (undefined8 *)((long)puVar5 + 1);
          plVar3 = plVar10;
        } while (plVar10 != param_3);
      }
    }
    else {
      lVar6 = (long)param_3 - (long)param_2;
      if (lVar6 != 0) {
        puVar2 = puVar11;
        _memmove(puVar11,param_2,lVar6);
      }
      puVar11 = (undefined8 *)((long)puVar11 + lVar6);
    }
  }
  param_1[1] = puVar11;
  return puVar2;
}



/* Entry: 10925f8b8; end: 10925f943;  */

long FUN_10925f8b8(undefined8 *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2 * 3;
  if ((ulong)(param_3[1] - *param_3) < (ulong)((long)(int)uVar1 << 2)) {
    func_0x0001074287b0(param_3,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  if (0 < (int)param_2) {
    lVar2 = 0;
    do {
      lVar3 = *param_3;
      uVar4 = *param_1;
      *(undefined4 *)((undefined8 *)(lVar3 + lVar2) + 1) = *(undefined4 *)(param_1 + 1);
      *(undefined8 *)(lVar3 + lVar2) = uVar4;
      lVar2 = lVar2 + 0xc;
      param_1 = param_1 + 2;
    } while ((ulong)param_2 * 0xc - lVar2 != 0);
  }
  return *param_3;
}



/* Entry: 10925f944; end: 10925f99b;  */

long FUN_10925f944(long param_1)

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



/* Entry: 10925f99c; end: 10925f9ab;  */

void FUN_10925f99c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6cc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10925f9ac; end: 10925f9cb;  */

void FUN_10925f9ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6cc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925f9cc; end: 10925f9d7;  */

long FUN_10925f9cc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (_glIsProgram(), iVar1 != 0)) {
    _glDeleteProgram(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x148);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x138) == '\x01') {
    FUN_109265270(param_1 + 0x30);
  }
  return param_1 + 0x18;
}



/* Entry: 10925f9d8; end: 10925fa77;  */

void FUN_10925f9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  func_0x000109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 10925fa78; end: 10925fcb3;  */

undefined8 * FUN_10925fa78(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *extraout_x8;
  undefined4 *puVar7;
  long lStack_2e8;
  undefined4 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined ***pppuStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined **appuStack_288 [2];
  undefined1 auStack_278 [408];
  undefined **appuStack_e0 [19];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x11;
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  *param_1 = &PTR_FUN_110ae6d10;
  param_1[5] = param_2 + 0x930;
  puVar5 = param_1 + 6;
  *puVar5 = 0x32aaaba7;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  puVar7 = (undefined4 *)0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  uVar1 = *(ulong *)(param_3 + 4);
  if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x1f);
  }
  puVar4 = param_1;
  if (uVar1 == 0) {
LAB_10925fb40:
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  }
  else {
    puVar4 = (undefined8 *)(param_3 + 2);
    param_2 = 0;
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(appuStack_288);
    if (((char)appuStack_288[0] == -1) || ((char)appuStack_288[0] == '\0')) goto LAB_10925fb40;
    puVar7 = param_3 + 2;
    __ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE(puVar7,0);
    appuStack_288[0] = (undefined **)((ulong)appuStack_288[0] & 0xffffffffffffff00);
    FUN_109260268(&puStack_2a0,puVar7,appuStack_288);
    FUN_109260128(appuStack_288,param_3 + 2,4);
    pppuStack_2a8 = appuStack_288;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(appuStack_288,puStack_2a0,puVar7);
    FUN_109260220(&pppuStack_2a8);
    appuStack_288[0] = &PTR_DAT_11087cf48;
    appuStack_e0[0] = &PTR_DAT_11087cf70;
    func_0x000107c28018(auStack_278);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_288,&PTR_PTR_11087cf88);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
    param_2 = (long)puStack_298 - (long)puStack_2a0;
    FUN_109260d8c(param_1 + 0x13);
    puVar4 = puStack_2a0;
    if (puStack_2a0 != (undefined8 *)0x0) {
      puStack_298 = puStack_2a0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_2a0 != (undefined8 *)0x0) {
    puStack_298 = puStack_2a0;
    __ZdlPv();
  }
  func_0x000109260444(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(puVar5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_2b8 = FUN_10925fcb4;
  lStack_2e8 = param_2;
  puStack_2e0 = puVar7;
  puStack_2d8 = puVar4;
  puStack_2d0 = puVar5;
  puStack_2c8 = param_1;
  puStack_2c0 = &stack0xfffffffffffffff0;
  if ((*(byte *)((long)puVar6 + 0x24) & 1) != 0) {
    *extraout_x8 = 0;
    *(undefined8 *)(extraout_x8 + 2) = 0;
    *(undefined8 *)(extraout_x8 + 4) = 0;
    if (puVar6[0x16] == 0) {
      return puVar6;
    }
    if (param_2 == 0) {
      puVar6 = (undefined8 *)puVar6[0x15];
    }
    else {
      puVar6 = puVar6 + 0x13;
      FUN_109260360(puVar6,&lStack_2e8);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    lVar2 = puVar6[4];
    lVar3 = puVar6[5];
    *(long *)(extraout_x8 + 2) = lVar2;
    *(long *)(extraout_x8 + 4) = lVar3 - lVar2;
    *extraout_x8 = *(undefined4 *)(puVar6 + 3);
    return puVar6;
  }
  __ZNSt3__15mutex4lockEv(puVar6 + 6);
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 2) = 0;
  *(undefined8 *)(extraout_x8 + 4) = 0;
  if (puVar6[0x16] != 0) {
    if (param_2 == 0) {
      puVar5 = (undefined8 *)puVar6[0x15];
    }
    else {
      puVar5 = puVar6 + 0x13;
      FUN_109260360(puVar5,&lStack_2e8);
      if (puVar5 == (undefined8 *)0x0) goto LAB_10925fd54;
    }
    lVar2 = puVar5[4];
    lVar3 = puVar5[5];
    *(long *)(extraout_x8 + 2) = lVar2;
    *(long *)(extraout_x8 + 4) = lVar3 - lVar2;
    *extraout_x8 = *(undefined4 *)(puVar5 + 3);
  }
LAB_10925fd54:
  puVar6 = puVar6 + 6;
  __ZNSt3__15mutex6unlockEv(puVar6);
  return puVar6;
}



/* Entry: 10925fcb4; end: 10925fd9f;  */

void FUN_10925fcb4(undefined4 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lStack_38 = param_3;
  if ((*(byte *)(param_2 + 0x24) & 1) != 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    if (*(long *)(param_2 + 0xb0) == 0) {
      return;
    }
    if (param_3 == 0) {
      param_2 = *(long *)(param_2 + 0xa8);
    }
    else {
      param_2 = param_2 + 0x98;
      FUN_109260360(param_2,&lStack_38);
      if (param_2 == 0) {
        return;
      }
    }
    lVar3 = *(long *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    *(long *)(param_1 + 2) = lVar3;
    *(long *)(param_1 + 4) = lVar1 - lVar3;
    *param_1 = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x30);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(long *)(param_2 + 0xb0) != 0) {
    if (param_3 == 0) {
      lVar3 = *(long *)(param_2 + 0xa8);
    }
    else {
      lVar3 = param_2 + 0x98;
      FUN_109260360(lVar3,&lStack_38);
      if (lVar3 == 0) goto LAB_10925fd54;
    }
    lVar1 = *(long *)(lVar3 + 0x20);
    lVar2 = *(long *)(lVar3 + 0x28);
    *(long *)(param_1 + 2) = lVar1;
    *(long *)(param_1 + 4) = lVar2 - lVar1;
    *param_1 = *(undefined4 *)(lVar3 + 0x18);
  }
LAB_10925fd54:
  __ZNSt3__15mutex6unlockEv(param_2 + 0x30);
  return;
}



/* Entry: 10925fda0; end: 10925fe5b;  */

void FUN_10925fda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  uStack_38 = param_2;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    puStack_28 = &uStack_38;
    lVar1 = param_1 + 0x70;
    FUN_1092604b8(lVar1,&uStack_38,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    FUN_10925d530(lVar1 + 0x18,param_3);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  }
  else {
    puStack_28 = &uStack_38;
    param_1 = param_1 + 0x70;
    FUN_1092604b8(param_1,&uStack_38,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
    FUN_10925d530(param_1 + 0x18,param_3);
  }
  return;
}



/* Entry: 10925fe5c; end: 10925ffb3;  */

void FUN_10925fe5c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x52) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x80);
    if (plVar5 != (long *)0x0) {
      do {
        iVar1 = *(int *)(plVar5[3] + 0x10);
        if ((iVar1 != 0) && (iVar2 = iVar1, _glIsProgram(), iVar2 != 0)) {
          iStack_5c = 0;
          _glGetProgramiv(iVar1,0x8741,&iStack_5c);
          if (0 < iStack_5c) {
            uStack_64 = 0;
            uStack_60 = 0;
            lStack_80 = 0;
            lStack_78 = 0;
            uStack_70 = 0;
            func_0x000107c27d58(&lStack_80);
            (**(code **)(*(long *)(param_1 + 0x28) + 0x970))
                      (iVar1,iStack_5c,&uStack_60,&uStack_64,lStack_80);
            plStack_48 = plVar5 + 2;
            puStack_58 = &uStack_64;
            puStack_50 = (undefined1 *)&lStack_80;
            FUN_1092608d4(param_1 + 0x98,plStack_48,&UNK_10dd5b8f9,&plStack_48,&puStack_58);
            if (lStack_80 != 0) {
              lStack_78 = lStack_80;
              __ZdlPv();
            }
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      func_0x00010926047c(param_1 + 0x70,*(undefined8 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x80) = 0;
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}



/* Entry: 10925ffb4; end: 10926010f;  */

undefined4 FUN_10925ffb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    FUN_10925fe5c(param_1);
    if (*(long *)(param_1 + 0xb0) == 0) {
      uVar2 = 0;
    }
    else {
      lStack_38 = 0;
      lStack_30 = 0;
      uStack_28 = 0;
      lVar1 = param_1 + 0x98;
      FUN_1092610ac(lVar1,&lStack_38);
      if ((int)lVar1 == 0) {
        uVar2 = 2;
      }
      else {
        func_0x000109fce620(param_2,lStack_38,lStack_30 - lStack_38);
        uVar2 = 0;
        if ((int)param_2 == 0) {
          uVar2 = 3;
        }
      }
      if (lStack_38 != 0) {
        lStack_30 = lStack_38;
        __ZdlPv();
      }
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  }
  else {
    FUN_10925fe5c(param_1);
    if (*(long *)(param_1 + 0xb0) == 0) {
      uVar2 = 0;
    }
    else {
      lStack_38 = 0;
      lStack_30 = 0;
      uStack_28 = 0;
      param_1 = param_1 + 0x98;
      FUN_1092610ac(param_1,&lStack_38);
      if ((int)param_1 == 0) {
        uVar2 = 2;
      }
      else {
        func_0x000109fce620(param_2,lStack_38,lStack_30 - lStack_38);
        uVar2 = 0;
        if ((int)param_2 == 0) {
          uVar2 = 3;
        }
      }
      if (lStack_38 != 0) {
        lStack_30 = lStack_38;
        __ZdlPv();
      }
    }
  }
  return uVar2;
}



/* Entry: 109260110; end: 109260113;  */

long FUN_109260110(long param_1)

{
  FUN_1092602e4(param_1 + 0x98);
  func_0x000109260444(param_1 + 0x70);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109260114; end: 109260127;  */

void FUN_109260114(void)

{
  FUN_109260400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109260128; end: 10926021f;  */

long * FUN_109260128(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  param_1[0x3b] = 0;
  param_1[0x35] = (long)&PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfe0;
  *param_1 = (long)&PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfb8;
  param_1[1] = 0;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x35,param_1 + 2);
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  *param_1 = (long)&PTR_DAT_11087cf48;
  param_1[0x35] = (long)&PTR_DAT_11087cf70;
  func_0x000107c28024(param_1 + 2);
  plVar3 = param_1 + 2;
  func_0x000107c28028(plVar3,plVar2,param_3 | 8);
  if (plVar3 == (long *)0x0) {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  }
  return param_1;
}



/* Entry: 109260220; end: 109260267;  */

undefined8 * FUN_109260220(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar2 = plVar3 + 2;
  func_0x000107c27ffc();
  if (plVar2 == (long *)0x0) {
    lVar1 = (long)plVar3 + *(long *)(*plVar3 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  }
  return param_1;
}



/* Entry: 109260268; end: 1092602e3;  */

undefined8 * FUN_109260268(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109246380(param_1);
    lVar1 = param_1[1];
    _memset(lVar1,*param_3,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1092602e4; end: 10926035f;  */

long * FUN_1092602e4(long *param_1)

{
  long lVar1;
  
  func_0x00010926031c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109260360; end: 1092603ff;  */

long * FUN_109260360(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
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



/* Entry: 109260400; end: 1092604b7;  */

long FUN_109260400(long param_1)

{
  FUN_1092602e4(param_1 + 0x98);
  func_0x000109260444(param_1 + 0x70);
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092604b8; end: 10926088b;  */

undefined1  [16] FUN_1092604b8(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar15 = *param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar9 = plVar14[1];
        if (uVar9 == uVar15) {
          if (plVar14[2] == uVar15) {
            uVar5 = 0;
            goto LAB_109260810;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar14 = (long *)0x28;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  plVar14[2] = *(long *)*param_4;
  plVar14[3] = 0;
  plVar14[4] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_109260620:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109260878);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_109260620;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar6 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar14 = *plVar10;
    *plVar10 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar14 == 0) goto LAB_109260800;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar10;
  }
  *plVar10 = (long)plVar14;
LAB_109260800:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109260810:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10926088c; end: 1092608d3;  */

void FUN_10926088c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10925f944(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1092608d4; end: 109260b2f;  */

undefined1  [16]
FUN_1092608d4(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
  uVar11 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar4 = uVar10 - 1;
    if ((uVar10 & uVar4) == 0) {
      unaff_x25 = uVar4 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar11) {
          if (plVar9[2] == uVar11) {
            uVar3 = 0;
            goto LAB_109260aec;
          }
        }
        else {
          if ((uVar10 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar10 <= uVar7) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar2 * uVar10;
          }
          if (uVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar9 = (long *)0x38;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  puVar1 = (undefined4 *)*param_5;
  plVar5 = (long *)param_5[1];
  plVar9[2] = *(long *)*param_4;
  *(undefined4 *)(plVar9 + 3) = *puVar1;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[4] = 0;
  lVar8 = *plVar5;
  plVar9[5] = plVar5[1];
  plVar9[4] = lVar8;
  plVar9[6] = plVar5[2];
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_109260b30(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_109260adc;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar4 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_109260adc:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_109260aec:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 109260b30; end: 109260bff;  */

void FUN_109260b30(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_109260b78:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        if ((char)param_1[1] == '\x01') {
          if (*(long *)(param_2 + 0x20) != 0) {
            *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x20);
            __ZdlPv();
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_109260b78;
  }
  return;
}



/* Entry: 109260c00; end: 109260d8b;  */

void FUN_109260c00(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if ((char)param_1[1] == '\x01') {
        if (*(long *)(param_2 + 0x20) != 0) {
          *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x20);
          __ZdlPv();
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 109260d8c; end: 10926104b;  */

void FUN_109260d8c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  byte bStack_69;
  int *piStack_68;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if ((param_3 != 0) && (uVar12 = *(uint *)(param_2 + 4), uVar12 != 0)) {
    puVar10 = (undefined8 *)((ulong)uVar12 * 0x48);
    puVar4 = puVar10;
    __Znwm();
    puVar8 = puVar4;
    do {
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      *(undefined4 *)puVar8 = 1;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[6] = 0;
      puVar8 = puVar8 + 9;
    } while (puVar8 != puVar4 + (ulong)uVar12 * 9);
    piVar14 = (int *)(puVar4 + 4);
    uVar13 = 8;
    puVar8 = puVar10;
    do {
      iVar2 = *(int *)(param_2 + uVar13);
      piVar14[-8] = iVar2;
      iVar11 = (int)uVar13;
      if (iVar2 == 0) {
        func_0x000104c59120(&ppuStack_80,*(undefined4 *)(param_2 + (ulong)(iVar11 + 4)),0);
        puVar16 = puStack_78;
        pppuVar5 = (undefined8 ***)ppuStack_80;
        if (-1 < (char)bStack_69) {
          puVar16 = (undefined8 *)(ulong)bStack_69;
          pppuVar5 = &ppuStack_80;
        }
        _memcpy(pppuVar5,param_2 + (ulong)(iVar11 + 8U),puVar16);
        puVar1 = puStack_78;
        pppuVar5 = (undefined8 ***)ppuStack_80;
        if (-1 < (char)bStack_69) {
          puVar1 = (undefined8 *)(ulong)bStack_69;
          pppuVar5 = &ppuStack_80;
        }
        FUN_10925adac(pppuVar5,puVar1);
        if (*piVar14 != 0) {
          FUN_109261244(piVar14 + -6);
          *piVar14 = 0;
        }
        *(undefined8 ****)(piVar14 + -6) = pppuVar5;
        if ((char)bStack_69 < '\0') {
          __ZdlPv(ppuStack_80);
        }
        uVar12 = ((int)puVar16 + 3U & 0xfffffffc) + iVar11 + 8U;
      }
      else {
        if (iVar2 != 1) {
          FUN_109243bf8(&UNK_10f5616d1);
          goto LAB_109261018;
        }
        uVar15 = *(undefined8 *)(param_2 + (ulong)(iVar11 + 4));
        if (*piVar14 != 0) {
          FUN_109261244(piVar14 + -6);
          *piVar14 = 0;
        }
        uVar12 = iVar11 + 0xc;
        *(undefined8 *)(piVar14 + -6) = uVar15;
      }
      piVar14[2] = *(int *)(param_2 + (ulong)uVar12);
      uVar13 = (ulong)*(uint *)(param_2 + (ulong)(uVar12 + 4));
      lVar6 = *(long *)(piVar14 + 4);
      lVar7 = *(long *)(piVar14 + 6);
      ppuStack_80 = (undefined8 **)((ulong)ppuStack_80 & 0xffffffffffffff00);
      uVar9 = lVar7 - lVar6;
      if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
        if (uVar13 < uVar9) {
          lVar7 = lVar6 + uVar13;
          *(long *)(piVar14 + 6) = lVar7;
        }
      }
      else {
        func_0x000105343774(piVar14 + 4,uVar13 - uVar9,&ppuStack_80);
        lVar6 = *(long *)(piVar14 + 4);
        lVar7 = *(long *)(piVar14 + 6);
      }
      _memcpy(lVar6,param_2 + (ulong)(uVar12 + 8),lVar7 - lVar6);
      uVar13 = (ulong)(((int)(lVar7 - lVar6) + 3U & 0xfffffffc) + uVar12 + 8);
      piVar14 = piVar14 + 0x12;
      puVar8 = puVar8 + -9;
    } while (puVar8 != (undefined8 *)0x0);
    puVar8 = puVar4 + 6;
    piVar14 = (int *)(puVar4 + 4);
    puVar16 = puVar10;
    do {
      if (*piVar14 != 0) {
        FUN_1092612e0();
LAB_109261018:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10926101c);
        (*pcVar3)();
      }
      piStack_68 = piVar14 + -6;
      ppuStack_80 = (undefined8 **)(puVar8 + -1);
      puStack_78 = puVar8;
      FUN_1092608d4(param_1,piStack_68,&UNK_10dd5b8f9,&piStack_68,&ppuStack_80);
      puVar8 = puVar8 + 9;
      piVar14 = piVar14 + 0x12;
      puVar16 = puVar16 + -9;
    } while (puVar16 != (undefined8 *)0x0);
    do {
      puVar10 = puVar10 + -9;
      FUN_1092612b0((long)puVar10 + (long)puVar4);
    } while (puVar10 != (undefined8 *)0x0);
    __ZdlPv(puVar4);
  }
  return;
}



/* Entry: 10926104c; end: 1092610ab;  */

long FUN_10926104c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x48;
        FUN_1092612b0(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 0x10) = lVar3;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1092610ac; end: 109261243;  */

undefined8 FUN_1092610ac(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  puVar3 = (undefined4 *)*param_2;
  uVar5 = param_2[1] - (long)puVar3;
  if (uVar5 < 4) {
    func_0x000107c27d58(param_2,4 - uVar5);
    puVar3 = (undefined4 *)*param_2;
    uVar5 = param_2[1] - (long)puVar3;
  }
  *puVar3 = 100;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (uVar5 < 8) {
    func_0x000107c27d58(param_2,8 - uVar5);
    puVar3 = (undefined4 *)*param_2;
  }
  puVar3[1] = uVar2;
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    uVar5 = 8;
    do {
      lVar4 = *param_2;
      uVar6 = param_2[1] - lVar4;
      lVar7 = (uVar5 + 4) - uVar6;
      if (uVar6 <= uVar5 + 4 && lVar7 != 0) {
        func_0x000107c27d58(param_2,lVar7);
        lVar4 = *param_2;
        uVar6 = param_2[1] - lVar4;
      }
      *(undefined4 *)(lVar4 + uVar5) = 1;
      iVar11 = (int)uVar5;
      lVar8 = plVar10[2];
      uVar5 = (ulong)(iVar11 + 4) + 8;
      lVar7 = uVar5 - uVar6;
      if (uVar6 <= uVar5 && lVar7 != 0) {
        func_0x000107c27d58(param_2,lVar7);
        lVar4 = *param_2;
        uVar6 = param_2[1] - lVar4;
      }
      *(long *)(lVar4 + (ulong)(iVar11 + 4)) = lVar8;
      lVar8 = plVar10[3];
      uVar5 = (ulong)(iVar11 + 0xc) + 4;
      lVar7 = uVar5 - uVar6;
      if (uVar6 <= uVar5 && lVar7 != 0) {
        func_0x000107c27d58(param_2,lVar7);
        lVar4 = *param_2;
        uVar6 = param_2[1] - lVar4;
      }
      *(int *)(lVar4 + (ulong)(iVar11 + 0xc)) = (int)lVar8;
      lVar7 = plVar10[4];
      lVar12 = plVar10[5] - lVar7;
      uVar5 = (ulong)(iVar11 + 0x10) + 4;
      lVar8 = uVar5 - uVar6;
      lVar9 = lVar12;
      if (uVar6 <= uVar5 && lVar8 != 0) {
        func_0x000107c27d58(param_2,lVar8);
        lVar7 = plVar10[4];
        lVar4 = *param_2;
        uVar6 = param_2[1] - lVar4;
        lVar9 = plVar10[5] - lVar7;
      }
      *(int *)(lVar4 + (ulong)(iVar11 + 0x10)) = (int)lVar12;
      uVar1 = iVar11 + 0x14;
      uVar5 = lVar9 + (ulong)uVar1;
      lVar8 = uVar5 - uVar6;
      if (uVar6 <= uVar5 && lVar8 != 0) {
        func_0x000107c27d58(param_2,lVar8);
        lVar4 = *param_2;
      }
      _memcpy(lVar4 + (ulong)uVar1,lVar7,lVar9);
      uVar5 = (ulong)(((int)lVar9 + 3U & 0xfffffffc) + uVar1);
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return 1;
}



/* Entry: 109261244; end: 109261297;  */

void FUN_109261244(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ae6d60)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109261298; end: 1092612af;  */

void FUN_109261298(void)

{
  return;
}



/* Entry: 1092612b0; end: 1092612df;  */

void FUN_1092612b0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ae6d60)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 1092612e0; end: 109261313;  */

void FUN_1092612e0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  plVar7 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar7 = (long)(PTR___ZTVSt18bad_variant_access_110346b70 + 0x10);
  puVar9 = (undefined8 *)PTR___ZTISt18bad_variant_access_110346a48;
  ___cxa_throw();
  puVar15 = (undefined8 *)plVar7[1];
  if (puVar15 < (undefined8 *)plVar7[2]) {
    uVar18 = puVar9[1];
    uVar17 = *puVar9;
    puVar15[2] = puVar9[2];
    puVar15[1] = uVar18;
    *puVar15 = uVar17;
    puVar15 = puVar15 + 3;
  }
  else {
    lVar14 = (long)puVar15 - *plVar7;
    uVar11 = (lVar14 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar11) {
      FUN_1092615d0();
      puVar15 = (undefined8 *)plVar7[1];
      if ((*(byte *)(puVar15 + 100) & 1) == 0) {
        FUN_10925e060(puVar15);
        (**(code **)*puVar15)(puVar15);
        *(undefined1 *)(puVar15 + 100) = 1;
      }
      lVar14 = 0;
      do {
        puVar13 = (uint *)puVar15[lVar14 * 3 + 0x21f];
        puVar3 = (uint *)(puVar15 + lVar14 * 3 + 0x21f)[1];
        if (puVar13 != puVar3) {
          uVar11 = 0;
          do {
            lVar10 = plVar7[lVar14 * 3 + 2];
            uVar12 = ((plVar7 + lVar14 * 3 + 2)[1] - lVar10 >> 3) * -0x5555555555555555;
            if (uVar12 <= uVar11) {
              return;
            }
            plVar8 = (long *)(lVar10 + uVar11 * 0x18 + 0x10);
            while (*(uint *)(plVar8 + -2) < *puVar13) {
              uVar11 = uVar11 + 1;
              plVar8 = plVar8 + 3;
              if (uVar12 - uVar11 == 0) {
                return;
              }
            }
            if (*(uint *)(plVar8 + -2) != *puVar13) {
              return;
            }
            plVar2 = plVar7 + (ulong)puVar13[1] * 2 + 0xe;
            if ((((int)plVar2[1] != (int)*plVar8) || (*plVar2 != plVar8[-1])) ||
               (*(uint *)((long)plVar2 + 0xc) != puVar13[2])) {
              lVar10 = plVar8[-1];
              plVar2[1] = *plVar8;
              *plVar2 = lVar10;
              uVar4 = puVar13[1];
              *(undefined4 *)((long)plVar7 + (ulong)uVar4 * 0x10 + 0x7c) =
                   *(undefined4 *)((long)plVar8 + 4);
              lVar10 = plVar8[-1];
              if (lVar10 != 0) {
                lVar6 = *plVar8;
                uVar5 = puVar13[2];
                lVar16 = *plVar7;
                FUN_10926dea0(lVar10,puVar9);
                (**(code **)(lVar16 + 0x7a8))
                          ((ulong)uVar4,*(undefined4 *)(lVar10 + 0xac),(int)lVar6,1,0,uVar5,
                           *(undefined4 *)(lVar10 + 0xa8));
              }
            }
            puVar13 = puVar13 + 3;
          } while (puVar13 != puVar3);
        }
        lVar14 = lVar14 + 1;
        if (lVar14 == 4) {
          return;
        }
      } while( true );
    }
    lVar10 = plVar7[2] - *plVar7 >> 3;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      uVar12 = uVar11;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    plVar8 = plVar7;
    FUN_1092615e4();
    puVar1 = (undefined8 *)((long)plVar8 + lVar14);
    uVar18 = puVar9[1];
    uVar17 = *puVar9;
    puVar1[2] = puVar9[2];
    puVar1[1] = uVar18;
    *puVar1 = uVar17;
    puVar15 = puVar1 + 3;
    lVar10 = (long)puVar1 - (plVar7[1] - *plVar7);
    _memcpy(lVar10);
    lVar14 = *plVar7;
    *plVar7 = lVar10;
    plVar7[1] = (long)puVar15;
    plVar7[2] = (long)(plVar8 + uVar12 * 3);
    if (lVar14 != 0) {
      __ZdlPv();
    }
  }
  plVar7[1] = (long)puVar15;
  return;
}



/* Entry: 109261314; end: 10926140b;  */

void FUN_109261314(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    uVar16 = param_2[1];
    uVar15 = *param_2;
    puVar13[2] = param_2[2];
    puVar13[1] = uVar16;
    *puVar13 = uVar15;
    puVar13 = puVar13 + 3;
  }
  else {
    lVar12 = (long)puVar13 - *param_1;
    uVar9 = (lVar12 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar9) {
      FUN_1092615d0();
      puVar13 = (undefined8 *)param_1[1];
      if ((*(byte *)(puVar13 + 100) & 1) == 0) {
        FUN_10925e060(puVar13);
        (**(code **)*puVar13)(puVar13);
        *(undefined1 *)(puVar13 + 100) = 1;
      }
      lVar12 = 0;
      do {
        puVar11 = (uint *)puVar13[lVar12 * 3 + 0x21f];
        puVar3 = (uint *)(puVar13 + lVar12 * 3 + 0x21f)[1];
        if (puVar11 != puVar3) {
          uVar9 = 0;
          do {
            lVar8 = param_1[lVar12 * 3 + 2];
            uVar10 = ((param_1 + lVar12 * 3 + 2)[1] - lVar8 >> 3) * -0x5555555555555555;
            if (uVar10 <= uVar9) {
              return;
            }
            plVar7 = (long *)(lVar8 + uVar9 * 0x18 + 0x10);
            while (*(uint *)(plVar7 + -2) < *puVar11) {
              uVar9 = uVar9 + 1;
              plVar7 = plVar7 + 3;
              if (uVar10 - uVar9 == 0) {
                return;
              }
            }
            if (*(uint *)(plVar7 + -2) != *puVar11) {
              return;
            }
            plVar2 = param_1 + (ulong)puVar11[1] * 2 + 0xe;
            if ((((int)plVar2[1] != (int)*plVar7) || (*plVar2 != plVar7[-1])) ||
               (*(uint *)((long)plVar2 + 0xc) != puVar11[2])) {
              lVar8 = plVar7[-1];
              plVar2[1] = *plVar7;
              *plVar2 = lVar8;
              uVar4 = puVar11[1];
              *(undefined4 *)((long)param_1 + (ulong)uVar4 * 0x10 + 0x7c) =
                   *(undefined4 *)((long)plVar7 + 4);
              lVar8 = plVar7[-1];
              if (lVar8 != 0) {
                lVar6 = *plVar7;
                uVar5 = puVar11[2];
                lVar14 = *param_1;
                FUN_10926dea0(lVar8,param_2);
                (**(code **)(lVar14 + 0x7a8))
                          ((ulong)uVar4,*(undefined4 *)(lVar8 + 0xac),(int)lVar6,1,0,uVar5,
                           *(undefined4 *)(lVar8 + 0xa8));
              }
            }
            puVar11 = puVar11 + 3;
          } while (puVar11 != puVar3);
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == 4) {
          return;
        }
      } while( true );
    }
    lVar8 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    plVar7 = param_1;
    FUN_1092615e4();
    puVar1 = (undefined8 *)((long)plVar7 + lVar12);
    uVar16 = param_2[1];
    uVar15 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar16;
    *puVar1 = uVar15;
    puVar13 = puVar1 + 3;
    lVar8 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar12 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)(plVar7 + uVar10 * 3);
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  return;
}



/* Entry: 10926140c; end: 1092615cf;  */

void FUN_10926140c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar9 = (undefined8 *)param_1[1];
  if ((*(byte *)(puVar9 + 100) & 1) == 0) {
    FUN_10925e060(puVar9);
    (**(code **)*puVar9)(puVar9);
    *(undefined1 *)(puVar9 + 100) = 1;
  }
  lVar12 = 0;
  do {
    puVar8 = (uint *)puVar9[lVar12 * 3 + 0x21f];
    puVar2 = (uint *)(puVar9 + lVar12 * 3 + 0x21f)[1];
    if (puVar8 != puVar2) {
      uVar13 = 0;
      do {
        lVar10 = param_1[lVar12 * 3 + 2];
        uVar7 = ((param_1 + lVar12 * 3 + 2)[1] - lVar10 >> 3) * -0x5555555555555555;
        if (uVar7 <= uVar13) {
          return;
        }
        plVar6 = (long *)(lVar10 + uVar13 * 0x18 + 0x10);
        while (*(uint *)(plVar6 + -2) < *puVar8) {
          uVar13 = uVar13 + 1;
          plVar6 = plVar6 + 3;
          if (uVar7 - uVar13 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar6 + -2) != *puVar8) {
          return;
        }
        plVar1 = param_1 + (ulong)puVar8[1] * 2 + 0xe;
        if ((((int)plVar1[1] != (int)*plVar6) || (*plVar1 != plVar6[-1])) ||
           (*(uint *)((long)plVar1 + 0xc) != puVar8[2])) {
          lVar10 = plVar6[-1];
          plVar1[1] = *plVar6;
          *plVar1 = lVar10;
          uVar3 = puVar8[1];
          *(int *)((long)param_1 + (ulong)uVar3 * 0x10 + 0x7c) = *(int *)((long)plVar6 + 4);
          lVar10 = plVar6[-1];
          if (lVar10 != 0) {
            lVar5 = *plVar6;
            uVar4 = puVar8[2];
            lVar11 = *param_1;
            FUN_10926dea0(lVar10,param_2);
            (**(code **)(lVar11 + 0x7a8))
                      ((ulong)uVar3,*(undefined4 *)(lVar10 + 0xac),(int)lVar5,1,0,uVar4,
                       *(undefined4 *)(lVar10 + 0xa8));
          }
        }
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar2);
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 1092615d0; end: 1092615e3;  */

undefined1  [16] FUN_1092615d0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = (undefined8 *)&UNK_10f5616fa;
  func_0x000104c4f6cc();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[0x30] = param_2;
  puVar1[0x31] = 0;
  lVar2 = param_2 + 0x930;
  puVar1[0x832] = lVar2;
  puVar1[0x834] = 0;
  puVar1[0x833] = 0;
  puVar1[0x836] = 0;
  puVar1[0x835] = 0;
  puVar1[0x838] = 0;
  puVar1[0x837] = 0;
  puVar1[0x83a] = 0;
  puVar1[0x839] = 0;
  puVar1[0x83c] = 0;
  puVar1[0x83b] = 0;
  puVar1[0x83e] = 0;
  puVar1[0x83d] = 0;
  puVar1[0x840] = 0;
  puVar1[0x83f] = 0;
  puVar1[0x842] = 0;
  puVar1[0x841] = 0;
  puVar1[0x844] = 0;
  puVar1[0x843] = 0;
  puVar1[0x846] = 0;
  puVar1[0x845] = 0;
  puVar1[0x848] = 0;
  puVar1[0x847] = 0;
  puVar1[0x84a] = 0;
  puVar1[0x849] = 0;
  lVar5 = 0x200;
  puVar1[0x84b] = 0;
  puVar4 = puVar1 + 0x84d;
  do {
    puVar4[-1] = 0;
    *(undefined4 *)puVar4 = 0;
    lVar5 = lVar5 + -0x10;
    puVar4 = puVar4 + 2;
  } while (lVar5 != 0);
  *(undefined1 *)(puVar1 + 0x8ac) = 0;
  FUN_109262820(puVar1 + 0x32);
  puVar1[0x8ad] = lVar2;
  puVar1[0x8af] = 0;
  puVar1[0x8ae] = 0;
  puVar1[0x8b1] = 0;
  puVar1[0x8b0] = 0;
  puVar1[0x8b3] = 0;
  puVar1[0x8b2] = 0;
  puVar1[0x8b5] = 0;
  puVar1[0x8b4] = 0;
  puVar1[0x8b7] = 0;
  puVar1[0x8b6] = 0;
  puVar1[0x8b9] = 0;
  puVar1[0x8b8] = 0;
  puVar1[0x8bb] = 0;
  puVar1[0x8ba] = 0;
  puVar1[0x8bd] = 0;
  puVar1[0x8bc] = 0;
  puVar1[0x8bf] = 0;
  puVar1[0x8be] = 0;
  puVar1[0x8c1] = 0;
  puVar1[0x8c0] = 0;
  puVar1[0x8c3] = 0;
  puVar1[0x8c2] = 0;
  puVar1[0x8c5] = 0;
  puVar1[0x8c4] = 0;
  puVar1[0x8c7] = 0;
  puVar1[0x8c6] = 0;
  puVar1[0x8c9] = 0;
  puVar1[0x8c8] = 0;
  lVar5 = -0x60;
  puVar1[0x8ca] = 0;
  do {
    *(undefined8 *)((long)puVar1 + lVar5 + 0x45e0) = *(undefined8 *)((long)puVar1 + lVar5 + 0x45d8);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0);
  puVar1[0x8cb] = lVar2;
  uVar3 = 0xc68;
  _bzero(puVar1 + 0x8cc,0xc68);
  lVar5 = -0x60;
  do {
    *(undefined8 *)((long)puVar1 + lVar5 + 0x46d0) = *(undefined8 *)((long)puVar1 + lVar5 + 0x46c8);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0);
  puVar1[0xa59] = lVar2;
  puVar1[0xa5b] = 0;
  puVar1[0xa5a] = 0;
  puVar1[0xa5d] = 0;
  puVar1[0xa5c] = 0;
  puVar1[0xa5f] = 0;
  puVar1[0xa5e] = 0;
  puVar1[0xa61] = 0;
  puVar1[0xa60] = 0;
  puVar1[0xa63] = 0;
  puVar1[0xa62] = 0;
  puVar1[0xa65] = 0;
  puVar1[0xa64] = 0;
  puVar1[0xa67] = 0;
  puVar1[0xa66] = 0;
  puVar1[0xa69] = 0;
  puVar1[0xa68] = 0;
  puVar1[0xa6b] = 0;
  puVar1[0xa6a] = 0;
  puVar1[0xa6d] = 0;
  puVar1[0xa6c] = 0;
  puVar1[0xa6f] = 0;
  puVar1[0xa6e] = 0;
  puVar1[0xa71] = 0;
  puVar1[0xa70] = 0;
  puVar1[0xa73] = 0;
  puVar1[0xa72] = 0;
  puVar1[0xa75] = 0;
  puVar1[0xa74] = 0;
  puVar1[0xa77] = 0;
  puVar1[0xa76] = 0;
  puVar1[0xa79] = 0;
  puVar1[0xa78] = 0;
  puVar1[0xa7b] = 0;
  puVar1[0xa7a] = 0;
  puVar1[0xa7d] = 0;
  puVar1[0xa7c] = 0;
  puVar1[0xa7f] = 0;
  puVar1[0xa7e] = 0;
  puVar1[0xa81] = 0;
  puVar1[0xa80] = 0;
  puVar1[0xa83] = 0;
  puVar1[0xa82] = 0;
  puVar1[0xa85] = 0;
  puVar1[0xa84] = 0;
  lVar2 = -0x60;
  puVar1[0xa86] = 0;
  do {
    *(undefined8 *)((long)puVar1 + lVar2 + 0x5340) = *(undefined8 *)((long)puVar1 + lVar2 + 0x5338);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  FUN_109261878(puVar1);
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = puVar1;
  return auVar7;
}



/* Entry: 1092615e4; end: 109261627;  */

undefined1  [16] FUN_1092615e4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  lVar1 = param_2 + 0x930;
  param_1[0x832] = lVar1;
  param_1[0x834] = 0;
  param_1[0x833] = 0;
  param_1[0x836] = 0;
  param_1[0x835] = 0;
  param_1[0x838] = 0;
  param_1[0x837] = 0;
  param_1[0x83a] = 0;
  param_1[0x839] = 0;
  param_1[0x83c] = 0;
  param_1[0x83b] = 0;
  param_1[0x83e] = 0;
  param_1[0x83d] = 0;
  param_1[0x840] = 0;
  param_1[0x83f] = 0;
  param_1[0x842] = 0;
  param_1[0x841] = 0;
  param_1[0x844] = 0;
  param_1[0x843] = 0;
  param_1[0x846] = 0;
  param_1[0x845] = 0;
  param_1[0x848] = 0;
  param_1[0x847] = 0;
  param_1[0x84a] = 0;
  param_1[0x849] = 0;
  lVar4 = 0x200;
  param_1[0x84b] = 0;
  puVar3 = param_1 + 0x84d;
  do {
    puVar3[-1] = 0;
    *(undefined4 *)puVar3 = 0;
    lVar4 = lVar4 + -0x10;
    puVar3 = puVar3 + 2;
  } while (lVar4 != 0);
  *(undefined1 *)(param_1 + 0x8ac) = 0;
  FUN_109262820(param_1 + 0x32);
  param_1[0x8ad] = lVar1;
  param_1[0x8af] = 0;
  param_1[0x8ae] = 0;
  param_1[0x8b1] = 0;
  param_1[0x8b0] = 0;
  param_1[0x8b3] = 0;
  param_1[0x8b2] = 0;
  param_1[0x8b5] = 0;
  param_1[0x8b4] = 0;
  param_1[0x8b7] = 0;
  param_1[0x8b6] = 0;
  param_1[0x8b9] = 0;
  param_1[0x8b8] = 0;
  param_1[0x8bb] = 0;
  param_1[0x8ba] = 0;
  param_1[0x8bd] = 0;
  param_1[0x8bc] = 0;
  param_1[0x8bf] = 0;
  param_1[0x8be] = 0;
  param_1[0x8c1] = 0;
  param_1[0x8c0] = 0;
  param_1[0x8c3] = 0;
  param_1[0x8c2] = 0;
  param_1[0x8c5] = 0;
  param_1[0x8c4] = 0;
  param_1[0x8c7] = 0;
  param_1[0x8c6] = 0;
  param_1[0x8c9] = 0;
  param_1[0x8c8] = 0;
  lVar4 = -0x60;
  param_1[0x8ca] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar4 + 0x45e0) =
         *(undefined8 *)((long)param_1 + lVar4 + 0x45d8);
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  param_1[0x8cb] = lVar1;
  uVar2 = 0xc68;
  _bzero(param_1 + 0x8cc,0xc68);
  lVar4 = -0x60;
  do {
    *(undefined8 *)((long)param_1 + lVar4 + 0x46d0) =
         *(undefined8 *)((long)param_1 + lVar4 + 0x46c8);
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  param_1[0xa59] = lVar1;
  param_1[0xa5b] = 0;
  param_1[0xa5a] = 0;
  param_1[0xa5d] = 0;
  param_1[0xa5c] = 0;
  param_1[0xa5f] = 0;
  param_1[0xa5e] = 0;
  param_1[0xa61] = 0;
  param_1[0xa60] = 0;
  param_1[0xa63] = 0;
  param_1[0xa62] = 0;
  param_1[0xa65] = 0;
  param_1[0xa64] = 0;
  param_1[0xa67] = 0;
  param_1[0xa66] = 0;
  param_1[0xa69] = 0;
  param_1[0xa68] = 0;
  param_1[0xa6b] = 0;
  param_1[0xa6a] = 0;
  param_1[0xa6d] = 0;
  param_1[0xa6c] = 0;
  param_1[0xa6f] = 0;
  param_1[0xa6e] = 0;
  param_1[0xa71] = 0;
  param_1[0xa70] = 0;
  param_1[0xa73] = 0;
  param_1[0xa72] = 0;
  param_1[0xa75] = 0;
  param_1[0xa74] = 0;
  param_1[0xa77] = 0;
  param_1[0xa76] = 0;
  param_1[0xa79] = 0;
  param_1[0xa78] = 0;
  param_1[0xa7b] = 0;
  param_1[0xa7a] = 0;
  param_1[0xa7d] = 0;
  param_1[0xa7c] = 0;
  param_1[0xa7f] = 0;
  param_1[0xa7e] = 0;
  param_1[0xa81] = 0;
  param_1[0xa80] = 0;
  param_1[0xa83] = 0;
  param_1[0xa82] = 0;
  param_1[0xa85] = 0;
  param_1[0xa84] = 0;
  lVar1 = -0x60;
  param_1[0xa86] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x5340) =
         *(undefined8 *)((long)param_1 + lVar1 + 0x5338);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0);
  FUN_109261878(param_1);
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 109261628; end: 109261877;  */

undefined8 * FUN_109261628(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  param_2 = param_2 + 0x930;
  param_1[0x832] = param_2;
  param_1[0x834] = 0;
  param_1[0x833] = 0;
  param_1[0x836] = 0;
  param_1[0x835] = 0;
  param_1[0x838] = 0;
  param_1[0x837] = 0;
  param_1[0x83a] = 0;
  param_1[0x839] = 0;
  param_1[0x83c] = 0;
  param_1[0x83b] = 0;
  param_1[0x83e] = 0;
  param_1[0x83d] = 0;
  param_1[0x840] = 0;
  param_1[0x83f] = 0;
  param_1[0x842] = 0;
  param_1[0x841] = 0;
  param_1[0x844] = 0;
  param_1[0x843] = 0;
  param_1[0x846] = 0;
  param_1[0x845] = 0;
  param_1[0x848] = 0;
  param_1[0x847] = 0;
  param_1[0x84a] = 0;
  param_1[0x849] = 0;
  lVar2 = 0x200;
  param_1[0x84b] = 0;
  puVar1 = param_1 + 0x84d;
  do {
    puVar1[-1] = 0;
    *(undefined4 *)puVar1 = 0;
    lVar2 = lVar2 + -0x10;
    puVar1 = puVar1 + 2;
  } while (lVar2 != 0);
  *(undefined1 *)(param_1 + 0x8ac) = 0;
  FUN_109262820(param_1 + 0x32);
  param_1[0x8ad] = param_2;
  param_1[0x8af] = 0;
  param_1[0x8ae] = 0;
  param_1[0x8b1] = 0;
  param_1[0x8b0] = 0;
  param_1[0x8b3] = 0;
  param_1[0x8b2] = 0;
  param_1[0x8b5] = 0;
  param_1[0x8b4] = 0;
  param_1[0x8b7] = 0;
  param_1[0x8b6] = 0;
  param_1[0x8b9] = 0;
  param_1[0x8b8] = 0;
  param_1[0x8bb] = 0;
  param_1[0x8ba] = 0;
  param_1[0x8bd] = 0;
  param_1[0x8bc] = 0;
  param_1[0x8bf] = 0;
  param_1[0x8be] = 0;
  param_1[0x8c1] = 0;
  param_1[0x8c0] = 0;
  param_1[0x8c3] = 0;
  param_1[0x8c2] = 0;
  param_1[0x8c5] = 0;
  param_1[0x8c4] = 0;
  param_1[0x8c7] = 0;
  param_1[0x8c6] = 0;
  param_1[0x8c9] = 0;
  param_1[0x8c8] = 0;
  lVar2 = -0x60;
  param_1[0x8ca] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x45e0) =
         *(undefined8 *)((long)param_1 + lVar2 + 0x45d8);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  param_1[0x8cb] = param_2;
  _bzero(param_1 + 0x8cc,0xc68);
  lVar2 = -0x60;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x46d0) =
         *(undefined8 *)((long)param_1 + lVar2 + 0x46c8);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  param_1[0xa59] = param_2;
  param_1[0xa5b] = 0;
  param_1[0xa5a] = 0;
  param_1[0xa5d] = 0;
  param_1[0xa5c] = 0;
  param_1[0xa5f] = 0;
  param_1[0xa5e] = 0;
  param_1[0xa61] = 0;
  param_1[0xa60] = 0;
  param_1[0xa63] = 0;
  param_1[0xa62] = 0;
  param_1[0xa65] = 0;
  param_1[0xa64] = 0;
  param_1[0xa67] = 0;
  param_1[0xa66] = 0;
  param_1[0xa69] = 0;
  param_1[0xa68] = 0;
  param_1[0xa6b] = 0;
  param_1[0xa6a] = 0;
  param_1[0xa6d] = 0;
  param_1[0xa6c] = 0;
  param_1[0xa6f] = 0;
  param_1[0xa6e] = 0;
  param_1[0xa71] = 0;
  param_1[0xa70] = 0;
  param_1[0xa73] = 0;
  param_1[0xa72] = 0;
  param_1[0xa75] = 0;
  param_1[0xa74] = 0;
  param_1[0xa77] = 0;
  param_1[0xa76] = 0;
  param_1[0xa79] = 0;
  param_1[0xa78] = 0;
  param_1[0xa7b] = 0;
  param_1[0xa7a] = 0;
  param_1[0xa7d] = 0;
  param_1[0xa7c] = 0;
  param_1[0xa7f] = 0;
  param_1[0xa7e] = 0;
  param_1[0xa81] = 0;
  param_1[0xa80] = 0;
  param_1[0xa83] = 0;
  param_1[0xa82] = 0;
  param_1[0xa85] = 0;
  param_1[0xa84] = 0;
  lVar2 = -0x60;
  param_1[0xa86] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x5340) =
         *(undefined8 *)((long)param_1 + lVar2 + 0x5338);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  FUN_109261878(param_1);
  return param_1;
}



/* Entry: 109261878; end: 10926197f;  */

void FUN_109261878(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_109261e40(param_1 + 0xc0,&uStack_50);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_109261e40(param_1,&uStack_50);
  FUN_109262820(param_1 + 400);
  *(undefined8 *)(param_1 + 0x4640) = 0;
  *(undefined8 *)(param_1 + 0x4638) = 0;
  *(undefined8 *)(param_1 + 18000) = 0;
  *(undefined8 *)(param_1 + 0x4648) = 0;
  *(undefined8 *)(param_1 + 0x4620) = 0;
  *(undefined8 *)(param_1 + 0x4618) = 0;
  *(undefined8 *)(param_1 + 0x4630) = 0;
  *(undefined8 *)(param_1 + 0x4628) = 0;
  *(undefined8 *)(param_1 + 0x4600) = 0;
  *(undefined8 *)(param_1 + 0x45f8) = 0;
  *(undefined8 *)(param_1 + 0x4610) = 0;
  *(undefined8 *)(param_1 + 0x4608) = 0;
  lVar2 = 0x60;
  *(undefined8 *)(param_1 + 0x45e0) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  *(undefined8 *)(param_1 + 0x45f0) = 0;
  *(undefined8 *)(param_1 + 0x45e8) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x4580);
  do {
    *puVar1 = puVar1[-1];
    lVar2 = lVar2 + -0x18;
    puVar1 = puVar1 + 3;
  } while (lVar2 != 0);
  _bzero(param_1 + 0x46c8,0xc00);
  lVar2 = 0x60;
  puVar1 = (undefined8 *)(param_1 + 0x4670);
  do {
    *puVar1 = puVar1[-1];
    lVar2 = lVar2 + -0x18;
    puVar1 = puVar1 + 3;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x5420) = 0;
  *(undefined8 *)(param_1 + 0x5418) = 0;
  *(undefined8 *)(param_1 + 0x5430) = 0;
  *(undefined8 *)(param_1 + 0x5428) = 0;
  *(undefined8 *)(param_1 + 0x5400) = 0;
  *(undefined8 *)(param_1 + 0x53f8) = 0;
  *(undefined8 *)(param_1 + 0x5410) = 0;
  *(undefined8 *)(param_1 + 0x5408) = 0;
  *(undefined8 *)(param_1 + 0x53e0) = 0;
  *(undefined8 *)(param_1 + 0x53d8) = 0;
  *(undefined8 *)(param_1 + 0x53f0) = 0;
  *(undefined8 *)(param_1 + 0x53e8) = 0;
  *(undefined8 *)(param_1 + 0x53c0) = 0;
  *(undefined8 *)(param_1 + 0x53b8) = 0;
  *(undefined8 *)(param_1 + 0x53d0) = 0;
  *(undefined8 *)(param_1 + 0x53c8) = 0;
  *(undefined8 *)(param_1 + 0x53a0) = 0;
  *(undefined8 *)(param_1 + 0x5398) = 0;
  *(undefined8 *)(param_1 + 0x53b0) = 0;
  *(undefined8 *)(param_1 + 0x53a8) = 0;
  *(undefined8 *)(param_1 + 0x5380) = 0;
  *(undefined8 *)(param_1 + 0x5378) = 0;
  *(undefined8 *)(param_1 + 0x5390) = 0;
  *(undefined8 *)(param_1 + 0x5388) = 0;
  *(undefined8 *)(param_1 + 0x5360) = 0;
  *(undefined8 *)(param_1 + 0x5358) = 0;
  *(undefined8 *)(param_1 + 0x5370) = 0;
  *(undefined8 *)(param_1 + 0x5368) = 0;
  *(undefined8 *)(param_1 + 0x5340) = 0;
  *(undefined8 *)(param_1 + 0x5338) = 0;
  *(undefined8 *)(param_1 + 0x5350) = 0;
  *(undefined8 *)(param_1 + 0x5348) = 0;
  lVar2 = 0x60;
  puVar1 = (undefined8 *)(param_1 + 0x52e0);
  do {
    *puVar1 = puVar1[-1];
    lVar2 = lVar2 + -0x18;
    puVar1 = puVar1 + 3;
  } while (lVar2 != 0);
  return;
}



/* Entry: 109261980; end: 109261a53;  */

void FUN_109261980(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  puVar4 = auStack_68;
  uStack_70 = param_3;
  FUN_109261a54(puVar4,param_4,param_4 + param_5 * 4);
  lVar3 = param_1 + (ulong)param_2 * 0x30;
  puVar2 = (undefined8 *)(lVar3 + 0xc0);
  puVar1 = puVar2;
  FUN_109261b30(puVar2,&uStack_70);
  if (((ulong)puVar1 & 1) == 0) {
    *puVar2 = uStack_70;
    if (puVar2 != &uStack_70) {
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      if (lStack_48 != 0) {
        lVar5 = lStack_48 << 2;
        do {
          FUN_109261ecc(lVar3 + 200,puVar4);
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -4;
        } while (lVar5 != 0);
      }
    }
    puVar2 = (undefined8 *)(param_1 + (ulong)param_2 * 0x30);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    *puVar2 = 0;
    FUN_109261f4c(puVar2 + 1,(ulong)&uStack_a0 | 8);
  }
  return;
}



/* Entry: 109261a54; end: 109261b2f;  */

undefined8 * FUN_109261a54(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (0x20 < param_3 - param_2) goto LAB_109261afc;
  while( true ) {
    if (param_3 == param_2) {
      return param_1;
    }
    if (7 < (ulong)param_1[4]) break;
    FUN_109261ecc(param_1,param_2);
    param_2 = param_2 + 4;
  }
  param_1[4] = 0;
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000104c4f71c();
  do {
    ___cxa_throw(uVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109261afc:
    uVar1 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c4f71c();
  } while( true );
}



/* Entry: 109261b30; end: 109261b7f;  */

bool FUN_109261b30(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((*param_1 == *param_2) && (param_1[5] == param_2[5])) {
    plVar1 = param_1 + 1;
    _memcmp(plVar1,param_2 + 1,param_1[5] << 2);
    return (int)plVar1 == 0;
  }
  return false;
}



/* Entry: 109261b80; end: 109261e3f;  */

void FUN_109261b80(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  long *plStack_68;
  
  lVar10 = 0;
  lVar4 = *(long *)(param_1 + 0x180);
  do {
    plVar8 = (long *)(param_1 + 0xc0 + lVar10 * 0x30);
    if (*plVar8 == 0) {
      lVar12 = 0;
      puVar1 = (undefined8 *)(param_1 + 0x41a0 + lVar10 * 0x18);
      puVar1[1] = *puVar1;
      puVar1 = (undefined8 *)(param_1 + 0x4200 + lVar10 * 0x18);
      puVar1[1] = *puVar1;
      puVar1 = (undefined8 *)(param_1 + 0x4578 + lVar10 * 0x18);
      puVar1[1] = *puVar1;
      puVar1 = (undefined8 *)(param_1 + 0x4668 + lVar10 * 0x18);
      puVar1[1] = *puVar1;
      puVar1 = (undefined8 *)(param_1 + 0x52d8 + lVar10 * 0x18);
      puVar1[1] = *puVar1;
    }
    else {
      uVar2 = param_1 + lVar10 * 0x30;
      FUN_109261b30(uVar2,plVar8);
      lVar12 = *plVar8;
      if ((uVar2 & 1) == 0) {
        puVar1 = (undefined8 *)(param_1 + 0x41a0 + lVar10 * 0x18);
        puVar1[1] = *puVar1;
        puVar1 = (undefined8 *)(param_1 + 0x4200 + lVar10 * 0x18);
        puVar1[1] = *puVar1;
        puVar1 = (undefined8 *)(param_1 + 0x4578 + lVar10 * 0x18);
        puVar1[1] = *puVar1;
        puVar1 = (undefined8 *)(param_1 + 0x4668 + lVar10 * 0x18);
        puVar1[1] = *puVar1;
        puVar1 = (undefined8 *)(param_1 + 0x52d8 + lVar10 * 0x18);
        puVar1[1] = *puVar1;
        plStack_68 = plVar8 + 1;
        lStack_70 = (long)plStack_68 + plVar8[5] * 4;
        plVar3 = (long *)0x30;
        __Znwm();
        ppuVar5 = &PTR_FUN_110ae6d80;
        *plVar3 = (long)&PTR_FUN_110ae6d80;
        plVar3[1] = param_1;
        *(int *)(plVar3 + 2) = (int)lVar10;
        plVar3[3] = lVar4 + 0x810;
        plVar3[4] = (long)&plStack_68;
        plVar3[5] = (long)&lStack_70;
        lVar13 = *(long *)(lVar12 + 0x40);
        uVar2 = *(ulong *)(lVar13 + 0x80);
        if (uVar2 != 0) {
          lVar7 = 0;
          uVar11 = 0;
          do {
            uVar6 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0x40) + 0x1e8) + uVar11 * 4);
            if (uVar6 < *(ulong *)(lVar12 + 0x850)) {
              (**(code **)(*plVar3 + 0x30))
                        (plVar3,*(long *)(lVar13 + 0x78) + lVar7,
                         *(long *)(lVar12 + 0x848) + uVar6 * 0x20);
              uVar2 = *(ulong *)(lVar13 + 0x80);
            }
            uVar11 = uVar11 + 1;
            lVar7 = lVar7 + 0x14;
          } while (uVar11 < uVar2);
          ppuVar5 = (undefined **)*plVar3;
        }
        (*(code *)ppuVar5[5])(plVar3);
        lVar12 = *plVar8;
      }
    }
    plVar3 = (long *)(param_1 + lVar10 * 0x30);
    *plVar3 = lVar12;
    plVar3[5] = 0;
    if (plVar8[5] != 0) {
      plVar9 = plVar8 + 1;
      lVar12 = plVar8[5] << 2;
      do {
        FUN_109261ecc(plVar3 + 1,plVar9);
        plVar9 = (long *)((long)plVar9 + 4);
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  FUN_109262ba4(param_1 + 400,param_2);
  FUN_10926140c(param_1 + 0x4568,param_2);
  FUN_109262e6c(param_1 + 0x4658,param_2);
  FUN_109262660(param_1 + 0x52c8,param_2);
  return;
}



/* Entry: 109261e40; end: 109261ecb;  */

void FUN_109261e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 4;
  do {
    *param_1 = *param_2;
    if (param_1 != param_2) {
      param_1[5] = 0;
      if (param_2[5] != 0) {
        lVar3 = param_2[5] << 2;
        puVar1 = param_2 + 1;
        do {
          FUN_109261ecc(param_1 + 1,puVar1);
          puVar1 = (undefined8 *)((long)puVar1 + 4);
          lVar3 = lVar3 + -4;
        } while (lVar3 != 0);
      }
    }
    param_1 = param_1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



/* Entry: 109261ecc; end: 109261f4b;  */

undefined4 * FUN_109261ecc(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 < 8) {
    puVar2 = (undefined4 *)(param_1 + uVar4 * 4);
    *puVar2 = *param_2;
    *(ulong *)(param_1 + 0x20) = uVar4 + 1;
    return puVar2;
  }
  puVar1 = (undefined4 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar1;
  puVar3 = (undefined4 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  if (puVar2 != puVar3) {
    *(undefined8 *)(puVar2 + 8) = 0;
    if (*(long *)(puVar3 + 8) != 0) {
      lVar5 = *(long *)(puVar3 + 8) << 2;
      puVar1 = puVar3;
      do {
        FUN_109261fb4(puVar2,puVar1);
        puVar1 = puVar1 + 1;
        lVar5 = lVar5 + -4;
      } while (lVar5 != 0);
    }
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  return puVar2;
}



/* Entry: 109261f4c; end: 109261fb3;  */

long FUN_109261f4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar2 = *(long *)(param_2 + 0x20) << 2;
      lVar1 = param_2;
      do {
        FUN_109261fb4(param_1,lVar1);
        lVar1 = lVar1 + 4;
        lVar2 = lVar2 + -4;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 109261fb4; end: 109262033;  */

undefined4 * FUN_109261fb4(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 < 8) {
    puVar2 = (undefined4 *)(param_1 + uVar3 * 4);
    *puVar2 = *param_2;
    *(ulong *)(param_1 + 0x20) = uVar3 + 1;
    return puVar2;
  }
  puVar1 = (undefined4 *)0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000104c4f71c();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume(puVar2);
  return puVar2;
}



/* Entry: 109262034; end: 10926203b;  */

void FUN_109262034(void)

{
  return;
}



/* Entry: 10926203c; end: 109262083;  */

void FUN_10926203c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110ae6d80;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 109262084; end: 1092620b3;  */

void FUN_109262084(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110ae6d80;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1092620b4; end: 1092623db;  */

uint * FUN_1092620b4(uint *param_1,uint *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong extraout_x8;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  uint auStack_70 [2];
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lVar8 = *param_3;
  if (lVar8 == 0) {
    return param_1;
  }
  lVar9 = *(long *)(param_1 + 2);
  uVar11 = param_2[1];
  lStack_68 = lVar8;
  if ((int)uVar11 < 5) {
    if (2 < (int)uVar11) {
      if (uVar11 == 3) {
        auStack_70[0] = *param_2;
        uStack_60 = (ulong)*(uint *)(param_3 + 3);
        puVar5 = (uint *)(lVar9 + (ulong)param_1[4] * 0x18 + 0x4578);
        FUN_109261314(puVar5,auStack_70);
        return puVar5;
      }
      if (uVar11 != 4) {
        return param_1;
      }
      auStack_70[0] = *param_2;
      lStack_58 = param_3[2];
      uStack_60 = param_3[1];
      puVar5 = (uint *)(lVar9 + (ulong)param_1[4] * 0x18 + 0x4668);
      FUN_10926244c(puVar5,auStack_70);
      return puVar5;
    }
    if (uVar11 != 1) {
      if (uVar11 != 2) {
        return param_1;
      }
      goto LAB_1092621b8;
    }
    uVar2 = (ulong)param_1[4];
    uVar11 = *param_2;
    if (0xff < uVar11) {
LAB_1092622f4:
      lVar3 = lVar9 + (uVar2 & 0xffffffff) * 0x18;
      puVar10 = (undefined8 *)(lVar3 + 0x4200);
      puVar5 = *(uint **)(lVar3 + 0x4208);
      puVar4 = *(uint **)(lVar3 + 0x4210);
      if (puVar4 <= puVar5) {
        puVar7 = (uint *)*puVar10;
        lVar3 = (long)puVar5 - (long)puVar7;
        lVar12 = lVar3 >> 4;
        uVar2 = lVar12 + 1;
        if (uVar2 >> 0x3c != 0) goto LAB_1092623d8;
        goto LAB_10926233c;
      }
      goto LAB_109262314;
    }
    lVar3 = lVar9 + uVar2 * 0x800 + 0x2190;
  }
  else {
    if ((int)uVar11 < 7) {
      if (uVar11 == 5) {
        auStack_70[0] = *param_2;
        uStack_60 = param_3[1];
        puVar5 = (uint *)(lVar9 + (ulong)param_1[4] * 0x18 + 0x52d8);
        FUN_109262544(puVar5,auStack_70);
        return puVar5;
      }
      if (uVar11 != 6) {
        return param_1;
      }
      auStack_70[0] = *param_2;
      lStack_58 = param_3[2];
      uStack_60 = param_3[1] + (ulong)*(uint *)**(undefined8 **)(param_1 + 8);
      puVar5 = (uint *)(lVar9 + (ulong)param_1[4] * 0x18 + 0x4668);
      FUN_10926244c(puVar5,auStack_70);
LAB_1092622a4:
      **(long **)(param_1 + 8) = **(long **)(param_1 + 8) + 4;
      return puVar5;
    }
    if (uVar11 == 7) {
      auStack_70[0] = *param_2;
      uStack_60 = param_3[1] + (ulong)*(uint *)**(undefined8 **)(param_1 + 8);
      puVar5 = (uint *)(lVar9 + (ulong)param_1[4] * 0x18 + 0x52d8);
      FUN_109262544(puVar5,auStack_70);
      goto LAB_1092622a4;
    }
    if (uVar11 != 8) {
      return param_1;
    }
LAB_1092621b8:
    uVar11 = *param_2;
    if (0xff < uVar11) {
      lVar3 = lVar9 + (ulong)param_1[4] * 0x18;
      puVar10 = (undefined8 *)(lVar3 + 0x41a0);
      puVar5 = *(uint **)(lVar3 + 0x41a8);
      puVar4 = *(uint **)(lVar3 + 0x41b0);
      if (puVar5 < puVar4) {
LAB_109262314:
        *puVar5 = uVar11;
        *(long *)(puVar5 + 2) = lVar8;
        puVar5 = puVar5 + 4;
      }
      else {
        puVar7 = (uint *)*puVar10;
        lVar3 = (long)puVar5 - (long)puVar7;
        lVar12 = lVar3 >> 4;
        uVar2 = lVar12 + 1;
        if (uVar2 >> 0x3c != 0) {
          func_0x000109262438();
          uVar2 = extraout_x8;
          goto LAB_1092622f4;
        }
LAB_10926233c:
        uVar6 = (long)puVar4 - (long)puVar7 >> 3;
        if (uVar6 <= uVar2) {
          uVar6 = uVar2;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar4 - (long)puVar7)) {
          uVar6 = 0xfffffffffffffff;
        }
        if (uVar6 >> 0x3c != 0) {
          func_0x000104c4f740();
LAB_1092623d8:
          func_0x000109262424();
          func_0x000107c31948(param_2,&PTR_DAT_110ae6df0);
          param_1 = param_1 + 2;
          if ((int)param_2 == 0) {
            param_1 = (uint *)0x0;
          }
          return param_1;
        }
        lVar1 = uVar6 << 4;
        __Znwm();
        puVar4 = (uint *)(lVar1 + lVar3);
        *puVar4 = uVar11;
        *(long *)(puVar4 + 2) = lVar8;
        puVar5 = puVar4 + 4;
        puVar4 = puVar4 + lVar12 * -4;
        param_1 = puVar4;
        _memcpy(puVar4,puVar7,lVar3);
        *puVar10 = puVar4;
        puVar10[1] = puVar5;
        puVar10[2] = lVar1 + uVar6 * 0x10;
        if (puVar7 != (uint *)0x0) {
          __ZdlPv(puVar7);
          param_1 = puVar7;
        }
      }
      puVar10[1] = puVar5;
      goto LAB_1092623ac;
    }
    lVar3 = lVar9 + (ulong)param_1[4] * 0x800 + 400;
  }
  if (*(long *)(lVar3 + (ulong)uVar11 * 8) == lVar8) {
    return param_1;
  }
  *(long *)(lVar3 + (ulong)uVar11 * 8) = lVar8;
LAB_1092623ac:
  *(undefined1 *)(lVar9 + 0x4560) = 1;
  return param_1;
}



/* Entry: 1092623dc; end: 109262417;  */

long FUN_1092623dc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6df0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109262418; end: 109262423;  */

undefined ** FUN_109262418(void)

{
  return &PTR_DAT_110ae6df0;
}



/* Entry: 109262424; end: 10926244b;  */

void FUN_109262424(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar14 = (undefined8 *)plVar5[1];
  if (puVar14 < (undefined8 *)plVar5[2]) {
    uVar18 = *param_2;
    uVar20 = param_2[3];
    uVar19 = param_2[2];
    puVar14[1] = param_2[1];
    *puVar14 = uVar18;
    puVar14[3] = uVar20;
    puVar14[2] = uVar19;
    puVar14 = puVar14 + 4;
LAB_10926250c:
    plVar5[1] = (long)puVar14;
    return;
  }
  lVar13 = *plVar5;
  lVar16 = (long)puVar14 - lVar13;
  uVar11 = (lVar16 >> 5) + 1;
  if (uVar11 >> 0x3b == 0) {
    uVar9 = plVar5[2] - lVar13;
    uVar10 = (long)uVar9 >> 4;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 >> 0x3b == 0) {
      lVar6 = uVar10 << 5;
      __Znwm();
      puVar1 = (undefined8 *)(lVar6 + lVar16);
      uVar18 = *param_2;
      uVar20 = param_2[3];
      uVar19 = param_2[2];
      puVar1[1] = param_2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      puVar14 = puVar1 + 4;
      _memcpy(puVar1 + (lVar16 >> 5) * -4,lVar13,lVar16);
      *plVar5 = (long)(puVar1 + (lVar16 >> 5) * -4);
      plVar5[1] = (long)puVar14;
      plVar5[2] = lVar6 + uVar10 * 0x20;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10926250c;
    }
  }
  else {
    FUN_109262530();
  }
  func_0x000104c4f740();
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar14 = (undefined8 *)plVar5[1];
  if (puVar14 < (undefined8 *)plVar5[2]) {
    uVar19 = param_2[1];
    uVar18 = *param_2;
    puVar14[2] = param_2[2];
    puVar14[1] = uVar19;
    *puVar14 = uVar18;
    puVar14 = puVar14 + 3;
LAB_10926262c:
    plVar5[1] = (long)puVar14;
    return;
  }
  lVar13 = *plVar5;
  uVar11 = ((long)puVar14 - lVar13 >> 3) * -0x5555555555555555 + 1;
  if (uVar11 < 0xaaaaaaaaaaaaaab) {
    lVar16 = plVar5[2] - lVar13 >> 3;
    uVar10 = lVar16 * 0x5555555555555556;
    if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
      uVar10 = uVar11;
    }
    if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      lVar16 = uVar10 * 0x18;
      __Znwm();
      puVar14 = (undefined8 *)(lVar16 + ((long)puVar14 - lVar13));
      uVar18 = *param_2;
      puVar14[1] = param_2[1];
      *puVar14 = uVar18;
      puVar14[2] = param_2[2];
      puVar14 = puVar14 + 3;
      _memcpy();
      *plVar5 = lVar16;
      plVar5[1] = (long)puVar14;
      plVar5[2] = lVar16 + uVar10 * 0x18;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10926262c;
    }
  }
  else {
    FUN_10926264c();
  }
  func_0x000104c4f740();
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar14 = (undefined8 *)plVar5[1];
  if ((*(byte *)(puVar14 + 100) & 1) == 0) {
    FUN_10925e060(puVar14);
    (**(code **)*puVar14)(puVar14);
    *(undefined1 *)(puVar14 + 100) = 1;
  }
  lVar13 = 0;
  do {
    puVar12 = (uint *)puVar14[lVar13 * 3 + 0x1ef];
    puVar3 = (uint *)(puVar14 + lVar13 * 3 + 0x1ef)[1];
    if (puVar12 != puVar3) {
      uVar11 = 0;
      do {
        lVar16 = plVar5[lVar13 * 3 + 2];
        uVar10 = ((plVar5 + lVar13 * 3 + 2)[1] - lVar16 >> 3) * -0x5555555555555555;
        if (uVar10 <= uVar11) {
          return;
        }
        plVar8 = (long *)(lVar16 + uVar11 * 0x18 + 8);
        while (*(uint *)(plVar8 + -1) < *puVar12) {
          uVar11 = uVar11 + 1;
          plVar8 = plVar8 + 3;
          if (uVar10 - uVar11 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar8 + -1) != *puVar12) {
          return;
        }
        plVar2 = plVar5 + (long)(int)puVar12[1] * 2 + 0xe;
        if ((plVar2[1] != plVar8[1]) || (*plVar2 != *plVar8)) {
          lVar16 = *plVar8;
          plVar2[1] = plVar8[1];
          *plVar2 = lVar16;
          lVar16 = *plVar8;
          if (lVar16 != 0) {
            uVar4 = puVar12[1];
            lVar15 = plVar8[1];
            lVar17 = *(long *)(lVar16 + 0x28);
            lVar6 = *plVar5;
            lVar16 = *(long *)(lVar16 + 0x58);
            if (lVar16 == 0) {
              uVar7 = 0;
            }
            else {
              uStack_140 = *(undefined8 *)(lVar16 + 0x50);
              uStack_138 = *(undefined8 *)(lVar16 + 0x18);
              FUN_10925bdc8(lVar16,param_2,&uStack_140);
              uVar7 = *(undefined4 *)(lVar16 + 0x2c);
            }
            (**(code **)(lVar6 + 0x890))(0x90d2,uVar4,uVar7,lVar15,lVar17 - lVar15);
          }
        }
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar3);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 10926244c; end: 10926252f;  */

void FUN_10926244c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < (undefined8 *)param_1[2]) {
    uVar18 = *param_2;
    uVar20 = param_2[3];
    uVar19 = param_2[2];
    puVar14[1] = param_2[1];
    *puVar14 = uVar18;
    puVar14[3] = uVar20;
    puVar14[2] = uVar19;
    puVar14 = puVar14 + 4;
LAB_10926250c:
    param_1[1] = (long)puVar14;
    return;
  }
  lVar13 = *param_1;
  lVar16 = (long)puVar14 - lVar13;
  uVar11 = (lVar16 >> 5) + 1;
  if (uVar11 >> 0x3b == 0) {
    uVar9 = param_1[2] - lVar13;
    uVar10 = (long)uVar9 >> 4;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 >> 0x3b == 0) {
      lVar5 = uVar10 << 5;
      __Znwm();
      puVar1 = (undefined8 *)(lVar5 + lVar16);
      uVar18 = *param_2;
      uVar20 = param_2[3];
      uVar19 = param_2[2];
      puVar1[1] = param_2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar20;
      puVar1[2] = uVar19;
      puVar14 = puVar1 + 4;
      _memcpy(puVar1 + (lVar16 >> 5) * -4,lVar13,lVar16);
      *param_1 = (long)(puVar1 + (lVar16 >> 5) * -4);
      param_1[1] = (long)puVar14;
      param_1[2] = lVar5 + uVar10 * 0x20;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10926250c;
    }
  }
  else {
    FUN_109262530();
  }
  func_0x000104c4f740();
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar14 = (undefined8 *)plVar6[1];
  if (puVar14 < (undefined8 *)plVar6[2]) {
    uVar19 = param_2[1];
    uVar18 = *param_2;
    puVar14[2] = param_2[2];
    puVar14[1] = uVar19;
    *puVar14 = uVar18;
    puVar14 = puVar14 + 3;
LAB_10926262c:
    plVar6[1] = (long)puVar14;
    return;
  }
  lVar13 = *plVar6;
  uVar11 = ((long)puVar14 - lVar13 >> 3) * -0x5555555555555555 + 1;
  if (uVar11 < 0xaaaaaaaaaaaaaab) {
    lVar16 = plVar6[2] - lVar13 >> 3;
    uVar10 = lVar16 * 0x5555555555555556;
    if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
      uVar10 = uVar11;
    }
    if (0x555555555555554 < (ulong)(lVar16 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      lVar16 = uVar10 * 0x18;
      __Znwm();
      puVar14 = (undefined8 *)(lVar16 + ((long)puVar14 - lVar13));
      uVar18 = *param_2;
      puVar14[1] = param_2[1];
      *puVar14 = uVar18;
      puVar14[2] = param_2[2];
      puVar14 = puVar14 + 3;
      _memcpy();
      *plVar6 = lVar16;
      plVar6[1] = (long)puVar14;
      plVar6[2] = lVar16 + uVar10 * 0x18;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10926262c;
    }
  }
  else {
    FUN_10926264c();
  }
  func_0x000104c4f740();
  plVar6 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar14 = (undefined8 *)plVar6[1];
  if ((*(byte *)(puVar14 + 100) & 1) == 0) {
    FUN_10925e060(puVar14);
    (**(code **)*puVar14)(puVar14);
    *(undefined1 *)(puVar14 + 100) = 1;
  }
  lVar13 = 0;
  do {
    puVar12 = (uint *)puVar14[lVar13 * 3 + 0x1ef];
    puVar3 = (uint *)(puVar14 + lVar13 * 3 + 0x1ef)[1];
    if (puVar12 != puVar3) {
      uVar11 = 0;
      do {
        lVar16 = plVar6[lVar13 * 3 + 2];
        uVar10 = ((plVar6 + lVar13 * 3 + 2)[1] - lVar16 >> 3) * -0x5555555555555555;
        if (uVar10 <= uVar11) {
          return;
        }
        plVar8 = (long *)(lVar16 + uVar11 * 0x18 + 8);
        while (*(uint *)(plVar8 + -1) < *puVar12) {
          uVar11 = uVar11 + 1;
          plVar8 = plVar8 + 3;
          if (uVar10 - uVar11 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar8 + -1) != *puVar12) {
          return;
        }
        plVar2 = plVar6 + (long)(int)puVar12[1] * 2 + 0xe;
        if ((plVar2[1] != plVar8[1]) || (*plVar2 != *plVar8)) {
          lVar16 = *plVar8;
          plVar2[1] = plVar8[1];
          *plVar2 = lVar16;
          lVar16 = *plVar8;
          if (lVar16 != 0) {
            uVar4 = puVar12[1];
            lVar15 = plVar8[1];
            lVar17 = *(long *)(lVar16 + 0x28);
            lVar5 = *plVar6;
            lVar16 = *(long *)(lVar16 + 0x58);
            if (lVar16 == 0) {
              uVar7 = 0;
            }
            else {
              uStack_120 = *(undefined8 *)(lVar16 + 0x50);
              uStack_118 = *(undefined8 *)(lVar16 + 0x18);
              FUN_10925bdc8(lVar16,param_2,&uStack_120);
              uVar7 = *(undefined4 *)(lVar16 + 0x2c);
            }
            (**(code **)(lVar5 + 0x890))(0x90d2,uVar4,uVar7,lVar15,lVar17 - lVar15);
          }
        }
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar3);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 109262530; end: 109262543;  */

void FUN_109262530(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar13 = (undefined8 *)plVar4[1];
  if (puVar13 < (undefined8 *)plVar4[2]) {
    uVar17 = param_2[1];
    uVar16 = *param_2;
    puVar13[2] = param_2[2];
    puVar13[1] = uVar17;
    *puVar13 = uVar16;
    puVar13 = puVar13 + 3;
LAB_10926262c:
    plVar4[1] = (long)puVar13;
    return;
  }
  lVar12 = *plVar4;
  uVar9 = ((long)puVar13 - lVar12 >> 3) * -0x5555555555555555 + 1;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar8 = plVar4[2] - lVar12 >> 3;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      lVar8 = uVar10 * 0x18;
      __Znwm();
      puVar13 = (undefined8 *)(lVar8 + ((long)puVar13 - lVar12));
      uVar16 = *param_2;
      puVar13[1] = param_2[1];
      *puVar13 = uVar16;
      puVar13[2] = param_2[2];
      puVar13 = puVar13 + 3;
      _memcpy();
      *plVar4 = lVar8;
      plVar4[1] = (long)puVar13;
      plVar4[2] = lVar8 + uVar10 * 0x18;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_10926262c;
    }
  }
  else {
    FUN_10926264c();
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar13 = (undefined8 *)plVar4[1];
  if ((*(byte *)(puVar13 + 100) & 1) == 0) {
    FUN_10925e060(puVar13);
    (**(code **)*puVar13)(puVar13);
    *(undefined1 *)(puVar13 + 100) = 1;
  }
  lVar12 = 0;
  do {
    puVar11 = (uint *)puVar13[lVar12 * 3 + 0x1ef];
    puVar2 = (uint *)(puVar13 + lVar12 * 3 + 0x1ef)[1];
    if (puVar11 != puVar2) {
      uVar9 = 0;
      do {
        lVar8 = plVar4[lVar12 * 3 + 2];
        uVar10 = ((plVar4 + lVar12 * 3 + 2)[1] - lVar8 >> 3) * -0x5555555555555555;
        if (uVar10 <= uVar9) {
          return;
        }
        plVar6 = (long *)(lVar8 + uVar9 * 0x18 + 8);
        while (*(uint *)(plVar6 + -1) < *puVar11) {
          uVar9 = uVar9 + 1;
          plVar6 = plVar6 + 3;
          if (uVar10 - uVar9 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar6 + -1) != *puVar11) {
          return;
        }
        plVar1 = plVar4 + (long)(int)puVar11[1] * 2 + 0xe;
        if ((plVar1[1] != plVar6[1]) || (*plVar1 != *plVar6)) {
          lVar8 = *plVar6;
          plVar1[1] = plVar6[1];
          *plVar1 = lVar8;
          lVar8 = *plVar6;
          if (lVar8 != 0) {
            uVar3 = puVar11[1];
            lVar14 = plVar6[1];
            lVar15 = *(long *)(lVar8 + 0x28);
            lVar7 = *plVar4;
            lVar8 = *(long *)(lVar8 + 0x58);
            if (lVar8 == 0) {
              uVar5 = 0;
            }
            else {
              uStack_d0 = *(undefined8 *)(lVar8 + 0x50);
              uStack_c8 = *(undefined8 *)(lVar8 + 0x18);
              FUN_10925bdc8(lVar8,param_2,&uStack_d0);
              uVar5 = *(undefined4 *)(lVar8 + 0x2c);
            }
            (**(code **)(lVar7 + 0x890))(0x90d2,uVar3,uVar5,lVar14,lVar15 - lVar14);
          }
        }
        puVar11 = puVar11 + 4;
      } while (puVar11 != puVar2);
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 109262544; end: 10926264b;  */

void FUN_109262544(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    uVar17 = param_2[1];
    uVar16 = *param_2;
    puVar13[2] = param_2[2];
    puVar13[1] = uVar17;
    *puVar13 = uVar16;
    puVar13 = puVar13 + 3;
LAB_10926262c:
    param_1[1] = (long)puVar13;
    return;
  }
  lVar12 = *param_1;
  uVar9 = ((long)puVar13 - lVar12 >> 3) * -0x5555555555555555 + 1;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar8 = param_1[2] - lVar12 >> 3;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      lVar8 = uVar10 * 0x18;
      __Znwm();
      puVar13 = (undefined8 *)(lVar8 + ((long)puVar13 - lVar12));
      uVar16 = *param_2;
      puVar13[1] = param_2[1];
      *puVar13 = uVar16;
      puVar13[2] = param_2[2];
      puVar13 = puVar13 + 3;
      _memcpy();
      *param_1 = lVar8;
      param_1[1] = (long)puVar13;
      param_1[2] = lVar8 + uVar10 * 0x18;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_10926262c;
    }
  }
  else {
    FUN_10926264c();
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar13 = (undefined8 *)plVar4[1];
  if ((*(byte *)(puVar13 + 100) & 1) == 0) {
    FUN_10925e060(puVar13);
    (**(code **)*puVar13)(puVar13);
    *(undefined1 *)(puVar13 + 100) = 1;
  }
  lVar12 = 0;
  do {
    puVar11 = (uint *)puVar13[lVar12 * 3 + 0x1ef];
    puVar2 = (uint *)(puVar13 + lVar12 * 3 + 0x1ef)[1];
    if (puVar11 != puVar2) {
      uVar9 = 0;
      do {
        lVar8 = plVar4[lVar12 * 3 + 2];
        uVar10 = ((plVar4 + lVar12 * 3 + 2)[1] - lVar8 >> 3) * -0x5555555555555555;
        if (uVar10 <= uVar9) {
          return;
        }
        plVar6 = (long *)(lVar8 + uVar9 * 0x18 + 8);
        while (*(uint *)(plVar6 + -1) < *puVar11) {
          uVar9 = uVar9 + 1;
          plVar6 = plVar6 + 3;
          if (uVar10 - uVar9 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar6 + -1) != *puVar11) {
          return;
        }
        plVar1 = plVar4 + (long)(int)puVar11[1] * 2 + 0xe;
        if ((plVar1[1] != plVar6[1]) || (*plVar1 != *plVar6)) {
          lVar8 = *plVar6;
          plVar1[1] = plVar6[1];
          *plVar1 = lVar8;
          lVar8 = *plVar6;
          if (lVar8 != 0) {
            uVar3 = puVar11[1];
            lVar14 = plVar6[1];
            lVar15 = *(long *)(lVar8 + 0x28);
            lVar7 = *plVar4;
            lVar8 = *(long *)(lVar8 + 0x58);
            if (lVar8 == 0) {
              uVar5 = 0;
            }
            else {
              uStack_c0 = *(undefined8 *)(lVar8 + 0x50);
              uStack_b8 = *(undefined8 *)(lVar8 + 0x18);
              FUN_10925bdc8(lVar8,param_2,&uStack_c0);
              uVar5 = *(undefined4 *)(lVar8 + 0x2c);
            }
            (**(code **)(lVar7 + 0x890))(0x90d2,uVar3,uVar5,lVar14,lVar15 - lVar14);
          }
        }
        puVar11 = puVar11 + 4;
      } while (puVar11 != puVar2);
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 10926264c; end: 10926265f;  */

void FUN_10926264c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar11 = (undefined8 *)plVar4[1];
  if ((*(byte *)(puVar11 + 100) & 1) == 0) {
    FUN_10925e060(puVar11);
    (**(code **)*puVar11)(puVar11);
    *(undefined1 *)(puVar11 + 100) = 1;
  }
  lVar13 = 0;
  do {
    puVar10 = (uint *)puVar11[lVar13 * 3 + 0x1ef];
    puVar2 = (uint *)(puVar11 + lVar13 * 3 + 0x1ef)[1];
    if (puVar10 != puVar2) {
      uVar15 = 0;
      do {
        lVar9 = plVar4[lVar13 * 3 + 2];
        uVar8 = ((plVar4 + lVar13 * 3 + 2)[1] - lVar9 >> 3) * -0x5555555555555555;
        if (uVar8 <= uVar15) {
          return;
        }
        plVar6 = (long *)(lVar9 + uVar15 * 0x18 + 8);
        while (*(uint *)(plVar6 + -1) < *puVar10) {
          uVar15 = uVar15 + 1;
          plVar6 = plVar6 + 3;
          if (uVar8 - uVar15 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar6 + -1) != *puVar10) {
          return;
        }
        plVar1 = plVar4 + (long)(int)puVar10[1] * 2 + 0xe;
        if ((plVar1[1] != plVar6[1]) || (*plVar1 != *plVar6)) {
          lVar9 = *plVar6;
          plVar1[1] = plVar6[1];
          *plVar1 = lVar9;
          lVar9 = *plVar6;
          if (lVar9 != 0) {
            uVar3 = puVar10[1];
            lVar12 = plVar6[1];
            lVar14 = *(long *)(lVar9 + 0x28);
            lVar7 = *plVar4;
            lVar9 = *(long *)(lVar9 + 0x58);
            if (lVar9 == 0) {
              uVar5 = 0;
            }
            else {
              uStack_80 = *(undefined8 *)(lVar9 + 0x50);
              uStack_78 = *(undefined8 *)(lVar9 + 0x18);
              FUN_10925bdc8(lVar9,param_2,&uStack_80);
              uVar5 = *(undefined4 *)(lVar9 + 0x2c);
            }
            (**(code **)(lVar7 + 0x890))(0x90d2,uVar3,uVar5,lVar12,lVar14 - lVar12);
          }
        }
        puVar10 = puVar10 + 4;
      } while (puVar10 != puVar2);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 109262660; end: 10926281f;  */

void FUN_109262660(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar10 = (undefined8 *)param_1[1];
  if ((*(byte *)(puVar10 + 100) & 1) == 0) {
    FUN_10925e060(puVar10);
    (**(code **)*puVar10)(puVar10);
    *(undefined1 *)(puVar10 + 100) = 1;
  }
  lVar12 = 0;
  do {
    puVar9 = (uint *)puVar10[lVar12 * 3 + 0x1ef];
    puVar2 = (uint *)(puVar10 + lVar12 * 3 + 0x1ef)[1];
    if (puVar9 != puVar2) {
      uVar14 = 0;
      do {
        lVar8 = param_1[lVar12 * 3 + 2];
        uVar7 = ((param_1 + lVar12 * 3 + 2)[1] - lVar8 >> 3) * -0x5555555555555555;
        if (uVar7 <= uVar14) {
          return;
        }
        plVar5 = (long *)(lVar8 + uVar14 * 0x18 + 8);
        while (*(uint *)(plVar5 + -1) < *puVar9) {
          uVar14 = uVar14 + 1;
          plVar5 = plVar5 + 3;
          if (uVar7 - uVar14 == 0) {
            return;
          }
        }
        if (*(uint *)(plVar5 + -1) != *puVar9) {
          return;
        }
        plVar1 = param_1 + (long)(int)puVar9[1] * 2 + 0xe;
        if ((plVar1[1] != plVar5[1]) || (*plVar1 != *plVar5)) {
          lVar8 = *plVar5;
          plVar1[1] = plVar5[1];
          *plVar1 = lVar8;
          lVar8 = *plVar5;
          if (lVar8 != 0) {
            uVar3 = puVar9[1];
            lVar11 = plVar5[1];
            lVar13 = *(long *)(lVar8 + 0x28);
            lVar6 = *param_1;
            lVar8 = *(long *)(lVar8 + 0x58);
            if (lVar8 == 0) {
              uVar4 = 0;
            }
            else {
              uStack_70 = *(undefined8 *)(lVar8 + 0x50);
              uStack_68 = *(undefined8 *)(lVar8 + 0x18);
              FUN_10925bdc8(lVar8,param_2,&uStack_70);
              uVar4 = *(undefined4 *)(lVar8 + 0x2c);
            }
            (**(code **)(lVar6 + 0x890))(0x90d2,uVar3,uVar4,lVar11,lVar13 - lVar11);
          }
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar2);
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 109262820; end: 1092628bb;  */

void FUN_109262820(long param_1)

{
  long lVar1;
  
  lVar1 = -0x200;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x42d0) = 0;
    *(undefined4 *)(param_1 + lVar1 + 0x42d8) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0);
  *(undefined8 *)(param_1 + 0x43c8) = 0;
  *(undefined8 *)(param_1 + 0x43c0) = 0;
  *(undefined8 *)(param_1 + 0x43b8) = 0;
  *(undefined8 *)(param_1 + 0x43b0) = 0;
  *(undefined8 *)(param_1 + 0x43a8) = 0;
  *(undefined8 *)(param_1 + 0x43a0) = 0;
  *(undefined8 *)(param_1 + 0x4398) = 0;
  *(undefined8 *)(param_1 + 0x4390) = 0;
  *(undefined8 *)(param_1 + 0x4388) = 0;
  *(undefined8 *)(param_1 + 0x4380) = 0;
  *(undefined8 *)(param_1 + 0x4378) = 0;
  *(undefined8 *)(param_1 + 0x4370) = 0;
  *(undefined8 *)(param_1 + 0x4368) = 0;
  *(undefined8 *)(param_1 + 0x4360) = 0;
  *(undefined8 *)(param_1 + 0x4358) = 0;
  *(undefined8 *)(param_1 + 0x4350) = 0;
  *(undefined8 *)(param_1 + 0x4348) = 0;
  *(undefined8 *)(param_1 + 0x4340) = 0;
  *(undefined8 *)(param_1 + 0x4338) = 0;
  *(undefined8 *)(param_1 + 0x4330) = 0;
  *(undefined8 *)(param_1 + 0x4328) = 0;
  *(undefined8 *)(param_1 + 0x4320) = 0;
  *(undefined8 *)(param_1 + 0x4318) = 0;
  *(undefined8 *)(param_1 + 0x4310) = 0;
  *(undefined8 *)(param_1 + 0x4308) = 0;
  *(undefined8 *)(param_1 + 0x4300) = 0;
  *(undefined8 *)(param_1 + 0x42f8) = 0;
  *(undefined8 *)(param_1 + 0x42f0) = 0;
  *(undefined8 *)(param_1 + 0x42e8) = 0;
  *(undefined8 *)(param_1 + 0x42e0) = 0;
  lVar1 = -0x60;
  *(undefined8 *)(param_1 + 0x42d8) = 0;
  *(undefined8 *)(param_1 + 0x42d0) = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x4078) = *(undefined8 *)(param_1 + lVar1 + 0x4070);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0);
  lVar1 = -0x60;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x40d8) = *(undefined8 *)(param_1 + lVar1 + 0x40d0);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1,0x4000);
  return;
}



/* Entry: 1092628bc; end: 109262ba3;  */

/* WARNING: Possible PIC construction at 0x000109262bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109262bf4) */
/* WARNING: Removing unreachable block (ram,0x000109262c0c) */
/* WARNING: Removing unreachable block (ram,0x000109262c18) */
/* WARNING: Removing unreachable block (ram,0x000109262c30) */
/* WARNING: Removing unreachable block (ram,0x000109262c34) */
/* WARNING: Removing unreachable block (ram,0x000109262c64) */
/* WARNING: Removing unreachable block (ram,0x000109262c38) */
/* WARNING: Removing unreachable block (ram,0x000109262c3c) */
/* WARNING: Removing unreachable block (ram,0x000109262c44) */
/* WARNING: Removing unreachable block (ram,0x000109262c7c) */
/* WARNING: Removing unreachable block (ram,0x000109262c80) */
/* WARNING: Removing unreachable block (ram,0x000109262cdc) */
/* WARNING: Removing unreachable block (ram,0x000109262c50) */
/* WARNING: Removing unreachable block (ram,0x000109262c98) */
/* WARNING: Removing unreachable block (ram,0x000109262ca4) */
/* WARNING: Removing unreachable block (ram,0x000109262cec) */
/* WARNING: Removing unreachable block (ram,0x000109262d38) */
/* WARNING: Removing unreachable block (ram,0x000109262d70) */
/* WARNING: Removing unreachable block (ram,0x000109262d44) */
/* WARNING: Removing unreachable block (ram,0x000109262d50) */
/* WARNING: Removing unreachable block (ram,0x000109262cf8) */
/* WARNING: Removing unreachable block (ram,0x000109262d60) */
/* WARNING: Removing unreachable block (ram,0x000109262d04) */
/* WARNING: Removing unreachable block (ram,0x000109262d10) */
/* WARNING: Removing unreachable block (ram,0x000109262cb4) */
/* WARNING: Removing unreachable block (ram,0x000109262d18) */
/* WARNING: Removing unreachable block (ram,0x000109262d68) */
/* WARNING: Removing unreachable block (ram,0x000109262d24) */
/* WARNING: Removing unreachable block (ram,0x000109262d30) */
/* WARNING: Removing unreachable block (ram,0x000109262cc0) */
/* WARNING: Removing unreachable block (ram,0x000109262d58) */
/* WARNING: Removing unreachable block (ram,0x000109262cc8) */
/* WARNING: Removing unreachable block (ram,0x000109262cd4) */
/* WARNING: Removing unreachable block (ram,0x000109262d74) */
/* WARNING: Removing unreachable block (ram,0x000109262d90) */
/* WARNING: Removing unreachable block (ram,0x000109262d94) */
/* WARNING: Removing unreachable block (ram,0x000109262d9c) */
/* WARNING: Removing unreachable block (ram,0x000109262dac) */
/* WARNING: Removing unreachable block (ram,0x000109262db4) */
/* WARNING: Removing unreachable block (ram,0x000109262dc4) */
/* WARNING: Removing unreachable block (ram,0x000109262dd4) */

void FUN_1092628bc(ulong *param_1,ulong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar17;
  undefined8 uVar18;
  
  puVar16 = (undefined8 *)param_1[0x801];
  if ((*(byte *)(puVar16 + 100) & 1) == 0) {
    FUN_10925e060(puVar16);
    (**(code **)*puVar16)(puVar16);
    *(undefined1 *)(puVar16 + 100) = 1;
  }
  lVar13 = 0;
  do {
    puVar14 = (uint *)puVar16[lVar13 * 3 + 0x213];
    puVar1 = (uint *)(puVar16 + lVar13 * 3 + 0x213)[1];
    if (puVar14 != puVar1) {
      uVar15 = 0;
      uVar6 = *param_2;
      puVar8 = param_1 + lVar13 * 0x100;
      do {
        uVar3 = *puVar14;
        if (uVar3 < 0x100) {
          puVar7 = puVar8 + uVar3;
        }
        else {
          uVar10 = param_1[lVar13 * 3 + 0x802];
          uVar9 = (long)((param_1 + lVar13 * 3 + 0x802)[1] - uVar10) >> 4;
          if (uVar9 <= uVar15) {
            return;
          }
          puVar7 = (ulong *)(uVar10 + uVar15 * 0x10 + 8);
          while ((uint)puVar7[-1] < uVar3) {
            uVar15 = uVar15 + 1;
            puVar7 = puVar7 + 2;
            if (uVar9 == uVar15) {
              return;
            }
          }
          if ((uint)puVar7[-1] != uVar3) {
            return;
          }
        }
        uVar9 = *puVar7;
        if (uVar9 == 0) {
          return;
        }
        iVar4 = *(int *)(uVar9 + 0xb0);
        uVar3 = puVar14[8];
        uVar10 = (ulong)(int)uVar3;
        if (((puVar14[10] & 1) == 0) && (param_1[uVar10 + 0x85a] != 0)) {
          param_1[uVar10 + 0x85a] = 0;
          if (0x1f < uVar3) goto LAB_109262a3c;
          uVar6 = uVar6 | 1L << (uVar10 & 0x3f);
          *param_2 = uVar6;
        }
        puVar7 = param_1 + uVar10 * 2 + 0x81a;
        if ((*puVar7 != uVar9) || ((int)puVar7[1] != iVar4)) {
          *puVar7 = uVar9;
          *(int *)(puVar7 + 1) = iVar4;
          if (0x1f < uVar3) {
LAB_109262a3c:
            puVar7 = (ulong *)&UNK_10f561756;
            uVar18 = 0x109262a48;
            FUN_109262df8();
            puVar5 = &stack0xffffffffffffffd0;
SUB_109262a48:
            puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
            register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x30);
            *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
            *(undefined8 **)(puVar5 + -0x28) = puVar16;
            *(ulong **)(puVar5 + -0x20) = param_1;
            *(ulong **)(puVar5 + -0x18) = param_2;
            *(undefined1 **)(puVar5 + -0x10) = puVar17;
            *(undefined8 *)(puVar5 + -8) = uVar18;
            puVar16 = (undefined8 *)puVar7[0x801];
            if ((*(byte *)(puVar16 + 100) & 1) == 0) {
              FUN_10925e060(puVar16);
              (**(code **)*puVar16)(puVar16);
              *(undefined1 *)(puVar16 + 100) = 1;
            }
            lVar13 = 0;
            uVar15 = *puVar8;
            do {
              puVar14 = (uint *)puVar16[lVar13 * 3 + 0x22b];
              puVar1 = (uint *)(puVar16 + lVar13 * 3 + 0x22b)[1];
              if (puVar14 != puVar1) {
                uVar6 = 0;
                param_1 = puVar7 + lVar13 * 0x100 + 0x400;
                do {
                  uVar3 = *puVar14;
                  if (uVar3 < 0x100) {
                    puVar11 = param_1 + uVar3;
                  }
                  else {
                    uVar10 = puVar7[lVar13 * 3 + 0x80e];
                    uVar9 = (long)((puVar7 + lVar13 * 3 + 0x80e)[1] - uVar10) >> 4;
                    if (uVar9 <= uVar6) {
                      return;
                    }
                    puVar11 = (ulong *)(uVar10 + uVar6 * 0x10 + 8);
                    while ((uint)puVar11[-1] < uVar3) {
                      uVar6 = uVar6 + 1;
                      puVar11 = puVar11 + 2;
                      if (uVar9 == uVar6) {
                        return;
                      }
                    }
                    if ((uint)puVar11[-1] != uVar3) {
                      return;
                    }
                  }
                  uVar9 = *puVar11;
                  if (uVar9 == 0) {
                    return;
                  }
                  puVar2 = *(uint **)(puVar14 + 4);
                  for (puVar12 = *(uint **)(puVar14 + 2); puVar12 != puVar2; puVar12 = puVar12 + 1)
                  {
                    uVar3 = *puVar12;
                    uVar10 = (ulong)(int)uVar3;
                    if (puVar7[uVar10 + 0x85a] != uVar9) {
                      puVar7[uVar10 + 0x85a] = uVar9;
                      if (0x1f < uVar3) {
                        param_2 = (ulong *)&UNK_10f561756;
                        FUN_109262df8();
                        *(undefined8 *)(puVar5 + -0x90) = unaff_x28;
                        *(undefined8 *)(puVar5 + -0x88) = unaff_x27;
                        *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
                        *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
                        *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
                        *(undefined8 *)(puVar5 + -0x68) = unaff_x23;
                        *(undefined8 *)(puVar5 + -0x60) = unaff_x22;
                        *(undefined8 **)(puVar5 + -0x58) = puVar16;
                        *(ulong **)(puVar5 + -0x50) = puVar7;
                        *(ulong **)(puVar5 + -0x48) = puVar8;
                        *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
                        *(code **)(puVar5 + -0x38) = FUN_109262ba4;
                        unaff_x23 = 0x43d0;
                        if ((char)param_2[0x87a] != '\x01') {
                          return;
                        }
                        *(undefined8 *)(puVar5 + -0x98) = 0;
                        FUN_1092628bc();
                        puVar8 = (ulong *)(puVar5 + -0x98);
                        uVar18 = 0x109262bf4;
                        puVar5 = puVar5 + -0xa0;
                        puVar7 = param_2;
                        goto SUB_109262a48;
                      }
                      uVar15 = 1L << (uVar10 & 0x3f) | uVar15;
                      *puVar8 = uVar15;
                    }
                  }
                  puVar14 = puVar14 + 8;
                } while (puVar14 != puVar1);
              }
              lVar13 = lVar13 + 1;
              if (lVar13 == 4) {
                return;
              }
            } while( true );
          }
          uVar6 = uVar6 | 1L << (uVar10 & 0x3f);
          *param_2 = uVar6;
        }
        puVar14 = puVar14 + 0xc;
      } while (puVar14 != puVar1);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 4) {
      return;
    }
  } while( true );
}



/* Entry: 109262ba4; end: 109262df7;  */

void FUN_109262ba4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uStack_68;
  
  if (*(char *)(param_1 + 0x43d0) == '\x01') {
    uStack_68 = 0;
    FUN_1092628bc(param_1,&uStack_68);
    func_0x000109262a48(param_1,&uStack_68);
    uVar2 = uStack_68;
    lVar6 = 0;
    lVar8 = 0;
    do {
      if ((uVar2 >> (lVar8 + 0x1fU & 0x3f) & 1) != 0) {
        lVar3 = param_1 + 0x43c8 + lVar6;
        iVar1 = *(int *)(lVar3 + -0x100);
        lVar5 = *(long *)(lVar3 + -0x108);
        lVar3 = *(long *)(param_1 + 0x43c8 + lVar8 * 8);
        iVar7 = (int)lVar8;
        if (lVar5 == 0 || lVar3 == 0) {
          if (lVar5 != 0) {
            if (param_2 == 0) {
LAB_109262c80:
              _glActiveTexture();
              FUN_10926dea0(lVar5,param_2);
              iVar4 = *(int *)(lVar5 + 0xac);
              if (param_2 != 0) goto LAB_109262c98;
              _glBindTexture(iVar1);
              lVar3 = *(long *)(param_1 + 0x4000);
            }
            else {
              if (iVar7 + 0x84df != *(int *)(param_2 + 0x150)) {
                *(int *)(param_2 + 0x150) = iVar7 + 0x84df;
                goto LAB_109262c80;
              }
              FUN_10926dea0(lVar5,param_2);
              iVar4 = *(int *)(lVar5 + 0xac);
LAB_109262c98:
              if (*(int *)(param_2 + 0x150) == -1) {
LAB_109262d94:
                _glBindTexture(iVar1);
              }
              else {
                if (iVar1 < 0x8c2a) {
                  if (iVar1 < 0x8513) {
                    if (iVar1 == 0xde1) {
                      lVar3 = 1;
                    }
                    else {
                      if (iVar1 != 0x806f) goto LAB_109262d94;
                      lVar3 = 4;
                    }
                  }
                  else if (iVar1 == 0x8513) {
                    lVar3 = 6;
                  }
                  else {
                    if (iVar1 != 0x8c1a) goto LAB_109262d94;
                    lVar3 = 5;
                  }
                }
                else if (iVar1 < 0x9100) {
                  if (iVar1 == 0x8c2a) {
                    lVar3 = 8;
                  }
                  else {
                    if (iVar1 != 0x9009) goto LAB_109262d94;
                    lVar3 = 7;
                  }
                }
                else if (iVar1 == 0x9102) {
                  lVar3 = 3;
                }
                else {
                  if (iVar1 != 0x9100) goto LAB_109262d94;
                  lVar3 = 2;
                }
                lVar5 = *(long *)(param_2 + 0x138) +
                        (ulong)(*(int *)(param_2 + 0x150) - 0x84c0) * 0x24;
                if (*(int *)(lVar5 + lVar3 * 4) != iVar4) {
                  *(int *)(lVar5 + lVar3 * 4) = iVar4;
                  goto LAB_109262d94;
                }
              }
              lVar5 = *(long *)(param_2 + 0xe8) + lVar8 * 4;
              if (*(int *)(lVar5 + 0x7c) == 0) goto LAB_109262dc4;
              lVar3 = *(long *)(param_1 + 0x4000);
              *(undefined4 *)(lVar5 + 0x7c) = 0;
            }
            (**(code **)(lVar3 + 0x820))(iVar7 + 0x1f,0);
          }
        }
        else {
          FUN_10926c05c(lVar3,iVar7 + 0x1f,lVar5,iVar1,param_2);
        }
      }
LAB_109262dc4:
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + -0x10;
    } while (lVar8 != -0x20);
    *(undefined1 *)(param_1 + 0x43d0) = 0;
  }
  return;
}



/* Entry: 109262df8; end: 109262e47;  */

void FUN_109262df8(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109262e48();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 109262e48; end: 109262e6b;  */

void FUN_109262e48(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 109262e6c; end: 1092632e3;  */

void FUN_109262e6c(long *param_1,long param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  
  iVar5 = (int)param_1[1];
  FUN_1092632e4();
  if (iVar5 != 2) {
    iVar5 = (int)param_1[1];
    FUN_1092632e4();
    puVar12 = (undefined8 *)param_1[1];
    if (iVar5 == 1) {
      if ((*(byte *)(puVar12 + 100) & 1) == 0) {
        FUN_10925e060(puVar12);
        (**(code **)*puVar12)(puVar12);
        *(undefined1 *)(puVar12 + 100) = 1;
      }
      lVar7 = 0;
      do {
        puVar15 = (uint *)puVar12[lVar7 * 3 + 0x207];
        puVar2 = (uint *)(puVar12 + lVar7 * 3 + 0x207)[1];
        if (puVar15 != puVar2) {
          uVar16 = 0;
          do {
            if (puVar15[1] != 0xffffffff) {
              lVar11 = param_1[lVar7 * 3 + 2];
              uVar1 = (param_1 + lVar7 * 3 + 2)[1] - lVar11 >> 5;
              if (uVar1 <= uVar16) {
                return;
              }
              plVar8 = (long *)(lVar11 + uVar16 * 0x20 + 8);
              while (*(uint *)(plVar8 + -1) < *puVar15) {
                uVar16 = uVar16 + 1;
                plVar8 = plVar8 + 4;
                if (uVar1 == uVar16) {
                  return;
                }
              }
              if (*(uint *)(plVar8 + -1) != *puVar15) {
                return;
              }
              plVar9 = param_1 + (long)(int)puVar15[1] * 3 + 0xe;
              if ((plVar9[1] != plVar8[1]) || (*plVar9 != *plVar8)) {
                lVar13 = plVar8[1];
                lVar11 = *plVar8;
                plVar9[2] = plVar8[2];
                plVar9[1] = lVar13;
                *plVar9 = lVar11;
                lVar11 = *plVar8;
                if (lVar11 != 0) {
                  uVar3 = puVar15[1];
                  lVar13 = plVar8[1];
                  if (*(long *)(lVar11 + 0x50) == 0) {
                    lVar6 = *(long *)(lVar11 + 0x58);
                    if (lVar6 != 0) {
                      FUN_10925ca24(lVar6,1,0,0,param_2);
                    }
                  }
                  else {
                    lVar6 = *(long *)(*(long *)(lVar11 + 0x50) + 0x10);
                  }
                  if (puVar15[2] == 1) {
                    _glUniform4iv(uVar3,puVar15[3],lVar6 + lVar13);
                  }
                  else {
                    if (puVar15[2] != 0) {
                      FUN_109243bf8(&UNK_10f561777);
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x109263298);
                      (*pcVar4)();
                    }
                    _glUniform4fv(uVar3,puVar15[3],lVar6 + lVar13);
                  }
                  if ((*(long *)(lVar11 + 0x50) == 0) && (*(long *)(lVar11 + 0x58) != 0)) {
                    FUN_10925c194(*(long *)(lVar11 + 0x58),param_2);
                  }
                }
              }
            }
            puVar15 = puVar15 + 4;
          } while (puVar15 != puVar2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
    }
    else {
      if ((*(byte *)(puVar12 + 100) & 1) == 0) {
        FUN_10925e060(puVar12);
        (**(code **)*puVar12)(puVar12);
        *(undefined1 *)(puVar12 + 100) = 1;
      }
      lVar7 = 0;
      do {
        puVar15 = (uint *)puVar12[lVar7 * 3 + 0x1fb];
        puVar2 = (uint *)(puVar12 + lVar7 * 3 + 0x1fb)[1];
        if (puVar15 != puVar2) {
          uVar16 = 0;
          do {
            lVar11 = param_1[lVar7 * 3 + 2];
            uVar1 = (param_1 + lVar7 * 3 + 2)[1] - lVar11 >> 5;
            if (uVar1 <= uVar16) {
              return;
            }
            plVar8 = (long *)(lVar11 + uVar16 * 0x20 + 0x10);
            while (*(uint *)(plVar8 + -2) < *puVar15) {
              uVar16 = uVar16 + 1;
              plVar8 = plVar8 + 4;
              if (uVar1 == uVar16) {
                return;
              }
            }
            if (*(uint *)(plVar8 + -2) != *puVar15) {
              return;
            }
            plVar9 = param_1 + (long)(int)puVar15[1] * 3 + 0xe;
            plVar10 = plVar8 + -1;
            if ((plVar9[1] != *plVar8) || (*plVar9 != *plVar10)) {
              lVar13 = *plVar8;
              lVar11 = *plVar10;
              plVar9[2] = plVar8[1];
              plVar9[1] = lVar13;
              *plVar9 = lVar11;
              lVar11 = *plVar10;
              if (lVar11 != 0) {
                uVar3 = puVar15[1];
                lVar6 = *plVar8;
                lVar13 = *(long *)(lVar11 + 0x28) - lVar6;
                if (plVar8[1] != 0) {
                  lVar13 = plVar8[1];
                }
                lVar14 = *param_1;
                FUN_109245d9c(lVar11,param_2);
                (**(code **)(lVar14 + 0x890))(0x8a11,uVar3,lVar11,lVar6,lVar13);
              }
            }
            puVar15 = puVar15 + 4;
          } while (puVar15 != puVar2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
    }
    return;
  }
  lVar7 = param_1[2];
  if (lVar7 == param_1[3]) {
    return;
  }
  if ((param_1[0xf] == *(long *)(lVar7 + 0x10)) && (param_1[0xe] == *(long *)(lVar7 + 8))) {
    return;
  }
  lVar13 = *(long *)(lVar7 + 0x10);
  lVar11 = *(long *)(lVar7 + 8);
  param_1[0x10] = *(long *)(lVar7 + 0x18);
  param_1[0xf] = lVar13;
  param_1[0xe] = lVar11;
  lVar11 = *(long *)(lVar7 + 8);
  if (lVar11 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar11 + 0x28);
  if (*(long *)(lVar11 + 0x50) == 0) {
    lVar6 = *(long *)(lVar11 + 0x58);
    if (lVar6 != 0) {
      FUN_10925ca24(lVar6,1,0,0,param_2);
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar11 + 0x50) + 0x10);
  }
  func_0x00010925e638(param_1[1],param_2,lVar6 + *(long *)(lVar7 + 0x10),
                      lVar13 - *(long *)(lVar7 + 0x10));
  if (*(long *)(lVar11 + 0x50) != 0) {
    return;
  }
  lVar7 = *(long *)(lVar11 + 0x58);
  if (lVar7 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar7 + 8);
  if (*(char *)(lVar11 + 0x39) != '\x01') goto LAB_10925c2d4;
  iVar5 = *(int *)(lVar7 + 0x28);
  if (param_2 == 0) {
LAB_10925c2b0:
    _glBindBuffer();
    lVar11 = *(long *)(lVar7 + 8);
    iVar5 = *(int *)(lVar7 + 0x28);
  }
  else {
    if (iVar5 < 0x8c2a) {
      if (iVar5 < 0x88eb) {
        if (iVar5 == 0x8892) {
          lVar13 = 1;
        }
        else {
          if (iVar5 != 0x8893) goto LAB_10925c2b0;
          lVar13 = 6;
        }
      }
      else if (iVar5 == 0x88eb) {
        lVar13 = 7;
      }
      else {
        if (iVar5 != 0x88ec) goto LAB_10925c2b0;
        lVar13 = 8;
      }
    }
    else if (iVar5 < 0x8f37) {
      if (iVar5 == 0x8c2a) {
        lVar13 = 9;
      }
      else {
        if (iVar5 != 0x8f36) goto LAB_10925c2b0;
        lVar13 = 2;
      }
    }
    else if (iVar5 == 0x8f37) {
      lVar13 = 3;
    }
    else if (iVar5 == 0x8f3f) {
      lVar13 = 4;
    }
    else {
      if (iVar5 != 0x90ee) goto LAB_10925c2b0;
      lVar13 = 5;
    }
    if (*(int *)(param_2 + 0x110 + lVar13 * 4) != *(int *)(lVar7 + 0x2c)) {
      *(int *)(param_2 + 0x110 + lVar13 * 4) = *(int *)(lVar7 + 0x2c);
      goto LAB_10925c2b0;
    }
  }
  (**(code **)(lVar11 + 0x8a8))(iVar5);
  func_0x00010925cd8c(&stack0xffffffffffffffc8);
LAB_10925c2d4:
  *(undefined1 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined4 *)(lVar7 + 0x48) = 0;
  return;
}



/* Entry: 1092632e4; end: 109263343;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1092632e4(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,uint *param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint *extraout_x8;
  uint *extraout_x8_00;
  undefined1 *extraout_x8_01;
  uint uVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iStack_1934;
  undefined8 uStack_1930;
  uint *puStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined4 uStack_1910;
  int iStack_1904;
  undefined1 auStack_1888 [1776];
  long lStack_1198;
  undefined1 auStack_1158 [1776];
  long lStack_a68;
  undefined1 auStack_a30 [2488];
  long lStack_78;
  
  if ((*(byte *)(param_1 + 100) & 1) == 0) {
    FUN_10925e060(param_1);
    (**(code **)*param_1)(param_1);
    *(undefined1 *)(param_1 + 100) = 1;
  }
  if (*(int *)(param_1[3] + 0x10) != 0) {
    return (uint *)(ulong)*(uint *)(param_1[3] + 0x118);
  }
  puVar8 = &UNK_10f561793;
  FUN_109243bf8();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0x3fc) {
    pcVar15 = FUN_109263430;
LAB_1092633ac:
    (*pcVar15)(auStack_a30,param_3);
    _memcpy(puVar8 + 0x20,auStack_a30,0x9b8);
    *(int *)(puVar8 + 0x18) = param_2;
    func_0x00010925ace4(param_4,param_5);
    *(int *)(puVar8 + 0x10) = (int)param_4;
    func_0x00010925ad44(param_6,param_7);
    *(int *)(puVar8 + 0x14) = (int)param_6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_6;
    }
    ___stack_chk_fail();
  }
  else if (param_2 == 0x406) {
    pcVar15 = (code *)0x109263910;
    goto LAB_1092633ac;
  }
  puVar8 = &UNK_10f5617c7;
  FUN_109243bf8();
  lStack_a68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)extraout_x8 + 0x37) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x2f) = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x1a] = 0;
  extraout_x8[0x1b] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x1e] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x21] = 0;
  extraout_x8[0x22] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x20] = 0;
  extraout_x8[0x23] = 0x3f800000;
  _bzero(extraout_x8 + 0x24,0x65e);
  _bzero(extraout_x8 + 0x1bc,0x2c8);
  FUN_109258024(auStack_1158,puVar8);
  puVar9 = extraout_x8;
  _memcpy(extraout_x8,auStack_1158,0x6ee);
  extraout_x8[0x1bc] = 0x9259944;
  extraout_x8[0x1bd] = 1;
  extraout_x8[0x1be] = 0x9259948;
  extraout_x8[0x1bf] = 1;
  extraout_x8[0x1c0] = 0x9259468;
  extraout_x8[0x1c1] = 1;
  extraout_x8[0x1c2] = 0x925947c;
  extraout_x8[0x1c3] = 1;
  extraout_x8[0x1c4] = 0x9259490;
  extraout_x8[0x1c5] = 1;
  extraout_x8[0x1c6] = 0x92594a4;
  extraout_x8[0x1c7] = 1;
  extraout_x8[0x1c8] = 0x92594b8;
  extraout_x8[0x1c9] = 1;
  extraout_x8[0x1ca] = 0x925994c;
  extraout_x8[0x1cb] = 1;
  extraout_x8[0x1cc] = 0x925916c;
  extraout_x8[0x1cd] = 1;
  *(code **)(extraout_x8 + 0x1ce) = FUN_10925929c;
  extraout_x8[0x1d0] = 0x9259320;
  extraout_x8[0x1d1] = 1;
  extraout_x8[0x1d2] = 0x9259334;
  extraout_x8[0x1d3] = 1;
  extraout_x8[0x1d4] = 0x9259348;
  extraout_x8[0x1d5] = 1;
  extraout_x8[0x1d6] = 0x925935c;
  extraout_x8[0x1d7] = 1;
  extraout_x8[0x1d8] = 0x9259370;
  extraout_x8[0x1d9] = 1;
  extraout_x8[0x1da] = 0x9259384;
  extraout_x8[0x1db] = 1;
  extraout_x8[0x1dc] = 0x9259398;
  extraout_x8[0x1dd] = 1;
  extraout_x8[0x1de] = 0x92593ac;
  extraout_x8[0x1df] = 1;
  extraout_x8[0x1e0] = 0x92593c0;
  extraout_x8[0x1e1] = 1;
  extraout_x8[0x1e2] = 0x92593e8;
  extraout_x8[0x1e3] = 1;
  extraout_x8[0x1e4] = 0x92593fc;
  extraout_x8[0x1e5] = 1;
  extraout_x8[0x1e6] = 0x92593d4;
  extraout_x8[0x1e7] = 1;
  extraout_x8[0x1e8] = 0x9259410;
  extraout_x8[0x1e9] = 1;
  extraout_x8[0x1ea] = 0x9259424;
  extraout_x8[0x1eb] = 1;
  extraout_x8[0x1ec] = 0x9259954;
  extraout_x8[0x1ed] = 1;
  extraout_x8[0x1ee] = 0x9259958;
  extraout_x8[0x1ef] = 1;
  extraout_x8[0x1f0] = 0x925995c;
  extraout_x8[0x1f1] = 1;
  extraout_x8[0x1f2] = 0x9259960;
  extraout_x8[499] = 1;
  *(code **)(extraout_x8 + 500) = FUN_109259144;
  *(code **)(extraout_x8 + 0x1f6) = FUN_109259438;
  extraout_x8[0x1f8] = 0x925943c;
  extraout_x8[0x1f9] = 1;
  *(code **)(extraout_x8 + 0x1fa) = FUN_109259170;
  extraout_x8[0x1fc] = 0x92595a4;
  extraout_x8[0x1fd] = 1;
  extraout_x8[0x1fe] = 0x92595b8;
  extraout_x8[0x1ff] = 1;
  extraout_x8[0x200] = 0x92595cc;
  extraout_x8[0x201] = 1;
  extraout_x8[0x202] = 0x9259590;
  extraout_x8[0x203] = 1;
  extraout_x8[0x204] = 0x9259568;
  extraout_x8[0x205] = 1;
  extraout_x8[0x206] = 0x925957c;
  extraout_x8[0x207] = 1;
  extraout_x8[0x208] = 0x9259554;
  extraout_x8[0x209] = 1;
  extraout_x8[0x20a] = 0x92596a8;
  extraout_x8[0x20b] = 1;
  *(code **)(extraout_x8 + 0x20c) = FUN_1092592a0;
  *(code **)(extraout_x8 + 0x20e) = FUN_1092594cc;
  extraout_x8[0x210] = 0x92594e8;
  extraout_x8[0x211] = 1;
  extraout_x8[0x212] = 0x92594ec;
  extraout_x8[0x213] = 1;
  extraout_x8[0x214] = 0x925961c;
  extraout_x8[0x215] = 1;
  extraout_x8[0x216] = 0x9259630;
  extraout_x8[0x217] = 1;
  extraout_x8[0x218] = 0x9259644;
  extraout_x8[0x219] = 1;
  extraout_x8[0x21a] = 0x9259658;
  extraout_x8[0x21b] = 1;
  extraout_x8[0x21c] = 0x925966c;
  extraout_x8[0x21d] = 1;
  *(code **)(extraout_x8 + 0x21e) = FUN_109259440;
  *(code **)(extraout_x8 + 0x220) = FUN_109259934;
  extraout_x8[0x222] = 0x925993c;
  extraout_x8[0x223] = 1;
  extraout_x8[0x224] = 0x9259454;
  extraout_x8[0x225] = 1;
  extraout_x8[0x226] = 0x92592b4;
  extraout_x8[0x227] = 1;
  extraout_x8[0x228] = 0x92592c8;
  extraout_x8[0x229] = 1;
  extraout_x8[0x22a] = 0x92592dc;
  extraout_x8[0x22b] = 1;
  extraout_x8[0x22c] = 0x92592f0;
  extraout_x8[0x22d] = 1;
  extraout_x8[0x22e] = 0x9259304;
  extraout_x8[0x22f] = 1;
  extraout_x8[0x230] = 0x9259680;
  extraout_x8[0x231] = 1;
  extraout_x8[0x232] = 0x9259694;
  extraout_x8[0x233] = 1;
  extraout_x8[0x234] = 0x92595e0;
  extraout_x8[0x235] = 1;
  extraout_x8[0x236] = 0x92595f4;
  extraout_x8[0x237] = 1;
  extraout_x8[0x238] = 0x9259608;
  extraout_x8[0x239] = 1;
  *(code **)(extraout_x8 + 0x23a) = FUN_1092594f0;
  extraout_x8[0x23c] = 0x9259504;
  extraout_x8[0x23d] = 1;
  extraout_x8[0x23e] = 0x9259518;
  extraout_x8[0x23f] = 1;
  extraout_x8[0x240] = 0x925952c;
  extraout_x8[0x241] = 1;
  extraout_x8[0x242] = 0x9259540;
  extraout_x8[0x243] = 1;
  extraout_x8[0x244] = 0x92596bc;
  extraout_x8[0x245] = 1;
  *(code **)(extraout_x8 + 0x246) = FUN_1092596d0;
  *(code **)(extraout_x8 + 0x248) = FUN_1092596d4;
  extraout_x8[0x24a] = 0x92596e8;
  extraout_x8[0x24b] = 1;
  *(code **)(extraout_x8 + 0x24c) = FUN_109259710;
  extraout_x8[0x250] = 0x9259734;
  extraout_x8[0x251] = 1;
  extraout_x8[0x252] = 0x9259738;
  extraout_x8[0x253] = 1;
  extraout_x8[0x254] = 0x925973c;
  extraout_x8[0x255] = 1;
  *(code **)(extraout_x8 + 0x24e) = FUN_109259740;
  *(code **)(extraout_x8 + 0x256) = FUN_109259754;
  extraout_x8[600] = 0x9259758;
  extraout_x8[0x259] = 1;
  extraout_x8[0x25a] = 0x925975c;
  extraout_x8[0x25b] = 1;
  extraout_x8[0x25c] = 0x9259760;
  extraout_x8[0x25d] = 1;
  extraout_x8[0x25e] = 0x9259764;
  extraout_x8[0x25f] = 1;
  extraout_x8[0x260] = 0x9259768;
  extraout_x8[0x261] = 1;
  extraout_x8[0x262] = 0x9259978;
  extraout_x8[0x263] = 1;
  extraout_x8[0x264] = 0x925976c;
  extraout_x8[0x265] = 1;
  *(code **)(extraout_x8 + 0x266) = FUN_109259964;
  extraout_x8[0x268] = 0x925998c;
  extraout_x8[0x269] = 1;
  extraout_x8[0x26a] = 0x92599a0;
  extraout_x8[0x26b] = 1;
  extraout_x8[0x26c] = 0x92599b4;
  extraout_x8[0x26d] = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a68) {
    return puVar9;
  }
  ___stack_chk_fail();
  lStack_1198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)extraout_x8_00 + 0x37) = 0;
  *(undefined8 *)((long)extraout_x8_00 + 0x2f) = 0;
  extraout_x8_00[6] = 0;
  extraout_x8_00[7] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[8] = 0;
  extraout_x8_00[9] = 0;
  extraout_x8_00[2] = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[0] = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[0x12] = 0;
  extraout_x8_00[0x13] = 0;
  extraout_x8_00[0x10] = 0;
  extraout_x8_00[0x11] = 0;
  extraout_x8_00[0x16] = 0;
  extraout_x8_00[0x17] = 0;
  extraout_x8_00[0x14] = 0;
  extraout_x8_00[0x15] = 0;
  extraout_x8_00[0x1a] = 0;
  extraout_x8_00[0x1b] = 0;
  extraout_x8_00[0x18] = 0;
  extraout_x8_00[0x19] = 0;
  extraout_x8_00[0x1e] = 0;
  extraout_x8_00[0x1f] = 0;
  extraout_x8_00[0x1c] = 0;
  extraout_x8_00[0x1d] = 0;
  extraout_x8_00[0x21] = 0;
  extraout_x8_00[0x22] = 0;
  extraout_x8_00[0x1f] = 0;
  extraout_x8_00[0x20] = 0;
  extraout_x8_00[0x23] = 0x3f800000;
  _bzero(extraout_x8_00 + 0x24,0x65e);
  _bzero(extraout_x8_00 + 0x1bc,0x2c8);
  FUN_1092599c8(auStack_1888,puVar9);
  puVar9 = extraout_x8_00;
  _memcpy(extraout_x8_00,auStack_1888,0x6ee);
  extraout_x8_00[0x1bc] = 0x925a460;
  extraout_x8_00[0x1bd] = 1;
  *(code **)(extraout_x8_00 + 0x1be) = FUN_10925a45c;
  extraout_x8_00[0x1c0] = 0x925a46c;
  extraout_x8_00[0x1c1] = 1;
  extraout_x8_00[0x1c2] = 0x925a470;
  extraout_x8_00[0x1c3] = 1;
  extraout_x8_00[0x1c4] = 0x9259490;
  extraout_x8_00[0x1c5] = 1;
  extraout_x8_00[0x1c6] = 0x92594a4;
  extraout_x8_00[0x1c7] = 1;
  extraout_x8_00[0x1c8] = 0x92594b8;
  extraout_x8_00[0x1c9] = 1;
  extraout_x8_00[0x1ca] = 0x925a474;
  extraout_x8_00[0x1cb] = 1;
  *(code **)(extraout_x8_00 + 0x1cc) = FUN_10925a4a4;
  extraout_x8_00[0x1ce] = 0x925a4b8;
  extraout_x8_00[0x1cf] = 1;
  extraout_x8_00[0x1d0] = 0x925a518;
  extraout_x8_00[0x1d1] = 1;
  extraout_x8_00[0x1d2] = 0x925a51c;
  extraout_x8_00[0x1d3] = 1;
  extraout_x8_00[0x1d4] = 0x925a520;
  extraout_x8_00[0x1d5] = 1;
  extraout_x8_00[0x1d6] = 0x925a524;
  extraout_x8_00[0x1d7] = 1;
  extraout_x8_00[0x1d8] = 0x925a528;
  extraout_x8_00[0x1d9] = 1;
  extraout_x8_00[0x1da] = 0x925a52c;
  extraout_x8_00[0x1db] = 1;
  extraout_x8_00[0x1dc] = 0x925a530;
  extraout_x8_00[0x1dd] = 1;
  extraout_x8_00[0x1de] = 0x925a534;
  extraout_x8_00[0x1df] = 1;
  extraout_x8_00[0x1e0] = 0x925a538;
  extraout_x8_00[0x1e1] = 1;
  extraout_x8_00[0x1e2] = 0x92593e8;
  extraout_x8_00[0x1e3] = 1;
  extraout_x8_00[0x1e4] = 0x92593fc;
  extraout_x8_00[0x1e5] = 1;
  extraout_x8_00[0x1e6] = 0x92593d4;
  extraout_x8_00[0x1e7] = 1;
  extraout_x8_00[0x1e8] = 0x9259410;
  extraout_x8_00[0x1e9] = 1;
  extraout_x8_00[0x1ea] = 0x9259424;
  extraout_x8_00[0x1eb] = 1;
  extraout_x8_00[0x1ec] = 0x925a4bc;
  extraout_x8_00[0x1ed] = 1;
  extraout_x8_00[0x1ee] = 0x925a4c0;
  extraout_x8_00[0x1ef] = 1;
  extraout_x8_00[0x1f0] = 0x925a4c4;
  extraout_x8_00[0x1f1] = 1;
  extraout_x8_00[0x1f2] = 0x925a4c8;
  extraout_x8_00[499] = 1;
  extraout_x8_00[500] = 0x925a4e0;
  extraout_x8_00[0x1f5] = 1;
  *(code **)(extraout_x8_00 + 0x1f6) = FUN_109259438;
  extraout_x8_00[0x1f8] = 0x925943c;
  extraout_x8_00[0x1f9] = 1;
  extraout_x8_00[0x1fa] = 0x925a4a8;
  extraout_x8_00[0x1fb] = 1;
  extraout_x8_00[0x1fc] = 0x925a4cc;
  extraout_x8_00[0x1fd] = 1;
  extraout_x8_00[0x1fe] = 0x925a4d0;
  extraout_x8_00[0x1ff] = 1;
  extraout_x8_00[0x200] = 0x925a4d4;
  extraout_x8_00[0x201] = 1;
  extraout_x8_00[0x202] = 0x925a4d8;
  extraout_x8_00[0x203] = 1;
  extraout_x8_00[0x204] = 0x925a540;
  extraout_x8_00[0x205] = 1;
  extraout_x8_00[0x206] = 0x925a53c;
  extraout_x8_00[0x207] = 1;
  extraout_x8_00[0x208] = 0x925a4dc;
  extraout_x8_00[0x209] = 1;
  *(code **)(extraout_x8_00 + 0x20a) = FUN_10925a414;
  extraout_x8_00[0x20c] = 0x925a418;
  extraout_x8_00[0x20d] = 1;
  extraout_x8_00[0x20e] = 0x925a41c;
  extraout_x8_00[0x20f] = 1;
  extraout_x8_00[0x210] = 0x925a420;
  extraout_x8_00[0x211] = 1;
  extraout_x8_00[0x212] = 0x925a424;
  extraout_x8_00[0x213] = 1;
  extraout_x8_00[0x214] = 0x925a428;
  extraout_x8_00[0x215] = 1;
  extraout_x8_00[0x216] = 0x925a42c;
  extraout_x8_00[0x217] = 1;
  extraout_x8_00[0x218] = 0x925a430;
  extraout_x8_00[0x219] = 1;
  extraout_x8_00[0x21a] = 0x925a434;
  extraout_x8_00[0x21b] = 1;
  extraout_x8_00[0x21c] = 0x925a438;
  extraout_x8_00[0x21d] = 1;
  extraout_x8_00[0x21e] = 0x925a43c;
  extraout_x8_00[0x21f] = 1;
  extraout_x8_00[0x220] = 0x925a440;
  extraout_x8_00[0x221] = 1;
  extraout_x8_00[0x222] = 0x925a444;
  extraout_x8_00[0x223] = 1;
  *(code **)(extraout_x8_00 + 0x224) = FUN_10925a448;
  extraout_x8_00[0x226] = 0x925a4ac;
  extraout_x8_00[0x227] = 1;
  extraout_x8_00[0x228] = 0x925a4b0;
  extraout_x8_00[0x229] = 1;
  extraout_x8_00[0x22a] = 0x92592dc;
  extraout_x8_00[0x22b] = 1;
  extraout_x8_00[0x22c] = 0x92592f0;
  extraout_x8_00[0x22d] = 1;
  extraout_x8_00[0x22e] = 0x925a4b4;
  extraout_x8_00[0x22f] = 1;
  extraout_x8_00[0x230] = 0x925a464;
  extraout_x8_00[0x231] = 1;
  extraout_x8_00[0x232] = 0x925a468;
  extraout_x8_00[0x233] = 1;
  extraout_x8_00[0x234] = 0x925a478;
  extraout_x8_00[0x235] = 1;
  *(code **)(extraout_x8_00 + 0x236) = FUN_10925a47c;
  extraout_x8_00[0x238] = 0x925a490;
  extraout_x8_00[0x239] = 1;
  *(code **)(extraout_x8_00 + 0x23a) = FUN_1092594f0;
  extraout_x8_00[0x23c] = 0x9259504;
  extraout_x8_00[0x23d] = 1;
  extraout_x8_00[0x23e] = 0x9259518;
  extraout_x8_00[0x23f] = 1;
  extraout_x8_00[0x240] = 0x925952c;
  extraout_x8_00[0x241] = 1;
  extraout_x8_00[0x242] = 0x9259540;
  extraout_x8_00[0x243] = 1;
  extraout_x8_00[0x244] = 0x92596bc;
  extraout_x8_00[0x245] = 1;
  *(code **)(extraout_x8_00 + 0x246) = FUN_1092596d0;
  *(code **)(extraout_x8_00 + 0x248) = FUN_1092596d4;
  extraout_x8_00[0x24a] = 0x925a544;
  extraout_x8_00[0x24b] = 1;
  extraout_x8_00[0x24c] = 0x925a548;
  extraout_x8_00[0x24d] = 1;
  extraout_x8_00[0x250] = 0x925a54c;
  extraout_x8_00[0x251] = 1;
  extraout_x8_00[0x252] = 0x925a550;
  extraout_x8_00[0x253] = 1;
  extraout_x8_00[0x254] = 0x925a554;
  extraout_x8_00[0x255] = 1;
  extraout_x8_00[0x24e] = 0x925a558;
  extraout_x8_00[0x24f] = 1;
  extraout_x8_00[0x256] = 0x925a55c;
  extraout_x8_00[599] = 1;
  extraout_x8_00[600] = 0x925a560;
  extraout_x8_00[0x259] = 1;
  extraout_x8_00[0x25a] = 0x925a564;
  extraout_x8_00[0x25b] = 1;
  extraout_x8_00[0x25c] = 0x925a568;
  extraout_x8_00[0x25d] = 1;
  extraout_x8_00[0x25e] = 0x925a56c;
  extraout_x8_00[0x25f] = 1;
  extraout_x8_00[0x260] = 0x925a570;
  extraout_x8_00[0x261] = 1;
  extraout_x8_00[0x262] = 0x9259978;
  extraout_x8_00[0x263] = 1;
  extraout_x8_00[0x264] = 0x925a574;
  extraout_x8_00[0x265] = 1;
  *(code **)(extraout_x8_00 + 0x266) = FUN_109259964;
  extraout_x8_00[0x268] = 0x925998c;
  extraout_x8_00[0x269] = 1;
  extraout_x8_00[0x26a] = 0x92599a0;
  extraout_x8_00[0x26b] = 1;
  extraout_x8_00[0x26c] = 0x92599b4;
  extraout_x8_00[0x26d] = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1198) {
    return puVar9;
  }
  ___stack_chk_fail();
  _bzero(extraout_x8_01,0x7c8);
  FUN_109264810(extraout_x8_01);
  *(undefined2 *)(extraout_x8_01 + 0x6fc) = 0;
  uVar20 = puVar9[6];
  *(undefined8 *)(extraout_x8_01 + 0x700) = 0x100000001;
  *(uint *)(extraout_x8_01 + 0x708) = uVar20;
  *(undefined8 *)(extraout_x8_01 + 0x798) = 1;
  extraout_x8_01[0x790] = *(undefined1 *)((long)puVar9 + 0x3a);
  *(undefined8 *)(extraout_x8_01 + 0x71c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x714) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x72c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x724) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x73c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x734) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x74c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x744) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x75c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x754) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x76c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x764) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x77c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x774) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x784) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x70c) = 0x600000001;
  *(undefined4 *)(extraout_x8_01 + 0x78c) = 2;
  extraout_x8_01[8] = *(undefined1 *)((long)puVar9 + 0x3b);
  extraout_x8_01[1] = *(undefined1 *)((long)puVar9 + 0x3d);
  extraout_x8_01[0x12] = (char)puVar9[0xf];
  extraout_x8_01[0xe] = *(undefined1 *)((long)puVar9 + 0x37);
  if ((char)puVar9[0x16] == '\x01') {
    uVar12 = 7;
    if (*(char *)((long)puVar9 + 0x59) == '\0') {
      uVar12 = 3;
    }
    *(undefined4 *)(extraout_x8_01 + 0x14) = uVar12;
  }
  *extraout_x8_01 = *(undefined1 *)((long)puVar9 + 0x33);
  extraout_x8_01[7] = *(undefined1 *)((long)puVar9 + 0x35);
  extraout_x8_01[6] = (char)puVar9[0xd];
  extraout_x8_01[5] = *(undefined1 *)((long)puVar9 + 0x3f);
  extraout_x8_01[4] = (char)puVar9[0x10];
  extraout_x8_01[9] = (char)puVar9[0x11];
  extraout_x8_01[2] = *(undefined1 *)((long)puVar9 + 0x36);
  extraout_x8_01[3] = 0;
  extraout_x8_01[0x10] = *(undefined1 *)((long)puVar9 + 0x3e);
  extraout_x8_01[0xd] = *(undefined1 *)((long)puVar9 + 0x29);
  extraout_x8_01[0x3f] = *(undefined1 *)((long)puVar9 + 0x45);
  extraout_x8_01[0x1f] = (char)puVar9[0x15];
  extraout_x8_01[0x20] = 1;
  extraout_x8_01[0x1e] = *(undefined1 *)((long)puVar9 + 0x2d);
  extraout_x8_01[0xb] = *(undefined1 *)((long)puVar9 + 0x2e);
  extraout_x8_01[0xc] = 0;
  cVar1 = *(char *)((long)puVar9 + 0x41);
  uVar12 = 1;
  if (cVar1 != '\0') {
    uVar12 = 0xffffffff;
  }
  *(undefined4 *)(extraout_x8_01 + 0xdc) = uVar12;
  extraout_x8_01[0x38] = cVar1;
  extraout_x8_01[0x39] = cVar1;
  uVar2 = *(undefined1 *)((long)puVar9 + 0x42);
  extraout_x8_01[0x3a] = uVar2;
  extraout_x8_01[0x3b] = *(undefined1 *)((long)puVar9 + 0x43);
  extraout_x8_01[0x3c] = uVar2;
  *(undefined4 *)(extraout_x8_01 + 0x24) = 0;
  extraout_x8_01[0x3e] = *(undefined1 *)((long)puVar9 + 0x46);
  extraout_x8_01[0xf] = 0;
  extraout_x8_01[0x11] = 0;
  extraout_x8_01[10] = 0;
  extraout_x8_01[0x1d] = 0;
  *(undefined4 *)(extraout_x8_01 + 300) = 0;
  if (*(char *)((long)puVar9 + 0x5e) == '\x01') {
    fVar26 = (float)puVar9[0x2b];
    if (16.0 <= fVar26) {
      uVar12 = 0x10;
    }
    else if (8.0 <= fVar26) {
      uVar12 = 8;
    }
    else if (4.0 <= fVar26) {
      uVar12 = 4;
    }
    else {
      if (fVar26 < 2.0) goto LAB_109263ff0;
      uVar12 = 2;
    }
    *(undefined4 *)(extraout_x8_01 + 300) = uVar12;
  }
LAB_109263ff0:
  *(undefined4 *)(extraout_x8_01 + 0x40) = 1;
  *(uint *)(extraout_x8_01 + 0x120) = puVar9[0x1b];
  *(undefined8 *)(extraout_x8_01 + 0x124) = 0x400000004;
  extraout_x8_01[0x5c] = (char)puVar9[0xc];
  extraout_x8_01[0x1c] = 0;
  *(uint *)(extraout_x8_01 + 0x58) = puVar9[0x18];
  extraout_x8_01[0x2c] = 1;
  *(undefined2 *)(extraout_x8_01 + 0x7a0) = 0x101;
  *(undefined2 *)(extraout_x8_01 + 0x2f) = 0;
  uVar12 = 5;
  if (*(char *)((long)puVar9 + 0x4a) == '\0') {
    uVar12 = 1;
  }
  *(undefined4 *)(extraout_x8_01 + 0x34) = uVar12;
  if ((char)puVar9[0xb] == '\x01') {
    uStack_1930 = (uint *)((ulong)uStack_1930._4_4_ << 0x20);
    _glGetIntegerv(0x8a2e,&uStack_1930);
    *(uint *)(extraout_x8_01 + 0x70) = (uint)uStack_1930;
    uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
    _glGetIntegerv(0x8a2b,&uStack_1930);
    iStack_1904 = 0;
    _glGetIntegerv(0x8a2d,&iStack_1904);
    iVar13 = iStack_1904;
    if ((int)(uint)uStack_1930 <= iStack_1904) {
      iVar13 = (uint)uStack_1930;
    }
    *(int *)(extraout_x8_01 + 0x6c) = iVar13;
    uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
    _glGetIntegerv(0x8a31,&uStack_1930);
    *(long *)(extraout_x8_01 + 0x78) = (long)(int)(uint)uStack_1930 << 2;
    uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
    _glGetIntegerv(0x8a33,&uStack_1930);
    *(long *)(extraout_x8_01 + 0x80) = (long)(int)(uint)uStack_1930 << 2;
    uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
    _glGetIntegerv(0x8a30,&uStack_1930);
    *(long *)(extraout_x8_01 + 0x90) = (long)(int)(uint)uStack_1930;
    *(long *)(extraout_x8_01 + 0x98) = (long)(int)(uint)uStack_1930;
    uStack_1930 = (uint *)CONCAT44(uStack_1930._4_4_,1);
    _glGetIntegerv(0x8a34,&uStack_1930);
    lVar16 = (long)(int)(uint)uStack_1930;
  }
  else {
    *(undefined8 *)(extraout_x8_01 + 0x6c) = 0x180000000c;
    uStack_1930 = (uint *)((ulong)uStack_1930._4_4_ << 0x20);
    _glGetIntegerv(0x8dfb,&uStack_1930);
    *(long *)(extraout_x8_01 + 0x78) = (long)(int)(uint)uStack_1930 << 4;
    uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
    _glGetIntegerv(0x8dfd,&uStack_1930);
    *(long *)(extraout_x8_01 + 0x80) = (long)(int)(uint)uStack_1930 << 4;
    *(undefined8 *)(extraout_x8_01 + 0x90) = *(undefined8 *)(extraout_x8_01 + 0x78);
    *(long *)(extraout_x8_01 + 0x98) = (long)(int)(uint)uStack_1930 << 4;
    lVar16 = 1;
  }
  uVar12 = 0;
  *(long *)(extraout_x8_01 + 0x118) = lVar16;
  *(undefined8 *)(extraout_x8_01 + 0xe8) = 0x2000000020;
  uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
  if (puVar9[5] != 1) {
    _glGetIntegerv(0x8b4c,&uStack_1930);
    uVar12 = SUB84(uStack_1930,0);
  }
  *(undefined4 *)(extraout_x8_01 + 0xa8) = uVar12;
  *(undefined4 *)(extraout_x8_01 + 0xb8) = uVar12;
  uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
  _glGetIntegerv(0x8872,&uStack_1930);
  *(uint *)(extraout_x8_01 + 0xac) = (uint)uStack_1930;
  *(uint *)(extraout_x8_01 + 0xbc) = (uint)uStack_1930;
  uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
  _glGetIntegerv(0x8b4d,&uStack_1930);
  *(uint *)(extraout_x8_01 + 0xb4) = (uint)uStack_1930;
  *(uint *)(extraout_x8_01 + 0xc4) = (uint)uStack_1930;
  uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
  _glGetIntegerv(0x8869,&uStack_1930);
  *(uint *)(extraout_x8_01 + 0xcc) = (uint)uStack_1930;
  *(uint *)(extraout_x8_01 + 0xd0) = (uint)uStack_1930;
  uStack_1930 = (uint *)((ulong)uStack_1930 & 0xffffffff00000000);
  puVar10 = (uint *)0xd33;
  _glGetIntegerv(0xd33,&uStack_1930);
  bVar6 = false;
  uVar20 = (uint)uStack_1930;
  if ((uint)uStack_1930 < 0x41) {
    uVar20 = 0x40;
  }
  uVar14 = (uint)uStack_1930;
  if ((uint)uStack_1930 < 0x11) {
    uVar14 = 0x10;
  }
  uVar19 = puVar9[0x19];
  *(uint *)(extraout_x8_01 + 0x50) = puVar9[0x1a];
  *(uint *)(extraout_x8_01 + 0x54) = uVar14;
  *(uint *)(extraout_x8_01 + 0x48) = uVar19;
  *(uint *)(extraout_x8_01 + 0x4c) = uVar20;
  *(undefined8 *)(extraout_x8_01 + 0x60) = *(undefined8 *)(puVar9 + 0x1d);
  *(uint *)(extraout_x8_01 + 0x68) = puVar9[0x1f];
  uVar20 = puVar9[0x24];
  uVar28 = *(undefined8 *)(puVar9 + 0x29);
  uVar27 = *(undefined8 *)(puVar9 + 0x27);
  *(undefined8 *)(extraout_x8_01 + 0xf8) = *(undefined8 *)(puVar9 + 0x25);
  *(ulong *)(extraout_x8_01 + 0xf0) = CONCAT44(uVar20,uVar20);
  *(undefined8 *)(extraout_x8_01 + 0x108) = uVar28;
  *(undefined8 *)(extraout_x8_01 + 0x100) = uVar27;
  *(undefined4 *)(extraout_x8_01 + 200) = 0xffff;
  *(undefined8 *)(extraout_x8_01 + 0xd4) = 0x7ff000007ff;
  if (*(char *)((long)puVar9 + 0x4f) == '\x01') {
    bVar6 = puVar9[5] != 0xd;
  }
  extraout_x8_01[0x110] = bVar6;
  extraout_x8_01[0x111] = 1;
  uVar27 = *(undefined8 *)(puVar9 + 0x2e);
  uVar29 = *(undefined8 *)(puVar9 + 0x34);
  uVar28 = *(undefined8 *)(puVar9 + 0x32);
  *(undefined8 *)(extraout_x8_01 + 0x6dc) = *(undefined8 *)(puVar9 + 0x30);
  *(undefined8 *)(extraout_x8_01 + 0x6d4) = uVar27;
  *(undefined8 *)(extraout_x8_01 + 0x6ec) = uVar29;
  *(undefined8 *)(extraout_x8_01 + 0x6e4) = uVar28;
  *(undefined8 *)(extraout_x8_01 + 0x6f4) = *(undefined8 *)(puVar9 + 0x36);
  *(undefined4 *)(extraout_x8_01 + 0x160) = 1;
  *(undefined2 *)(extraout_x8_01 + 0x144) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x13c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x148) = 0;
  *(undefined2 *)(extraout_x8_01 + 0x150) = 0;
  *(undefined2 *)(extraout_x8_01 + 0x15c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x154) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x130) = 0x100000005;
  uVar2 = *(undefined1 *)((long)puVar9 + 0x5d);
  extraout_x8_01[0x138] = uVar2;
  extraout_x8_01[0x139] = uVar2;
  if (uVar20 != 0) {
    *(undefined4 *)(extraout_x8_01 + 0x130) = 7;
  }
  lVar16 = 0x164;
  do {
    *(undefined8 *)((long)(extraout_x8_01 + lVar16) + 8) = 0x100000001;
    *(undefined8 *)(extraout_x8_01 + lVar16) = 0x100000000;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x6d4);
  lVar16 = 0;
  puVar22 = puVar9 + 0x3c;
  lVar21 = 0xf0;
  lVar23 = 0x660;
  lVar24 = 0x250;
  puVar25 = (uint *)&UNK_110ae4714;
  do {
    uVar20 = *puVar25;
    piVar18 = (int *)((long)puVar9 + lVar24);
    iVar13 = *piVar18;
    if (iVar13 == 0) {
      if (*(int *)((long)puVar9 + lVar21) != 0) {
        uVar14 = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x24;
        if ((uVar20 & 1) != 0) {
          uVar14 = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x30;
        }
        goto LAB_1092643f0;
      }
    }
    else {
      bVar3 = *(byte *)((long)puVar9 + lVar23);
      if ((bVar3 >> 1 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar16 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x100;
      }
      if ((bVar3 >> 4 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar16 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x400;
      }
      if ((bVar3 >> 2 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar16 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x60;
      }
      if ((bVar3 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar16 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x200;
      }
      if ((bVar3 >> 3 & 1) != 0) {
        uVar14 = 4;
        if ((uVar20 & 1) != 0) {
          uVar14 = 0x10;
        }
        *(uint *)(extraout_x8_01 + lVar16 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar16 + 0x164) | uVar14;
      }
      cVar1 = *(char *)((long)puVar9 + lVar23 + 1);
      if (cVar1 == '\x02') {
        uVar14 = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 3;
      }
      else {
        if (cVar1 != '\x01') goto LAB_1092643f4;
        uVar14 = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 1;
      }
LAB_1092643f0:
      *(uint *)(extraout_x8_01 + lVar16 + 0x164) = uVar14;
    }
LAB_1092643f4:
    *(undefined8 *)(extraout_x8_01 + lVar16 + 0x168) = 0x100000001;
    *(undefined4 *)(extraout_x8_01 + lVar16 + 0x170) = 1;
    if (*(int *)((long)puVar9 + lVar21) != 0) {
      puVar10 = puVar9 + 8;
      FUN_109264940(puVar10,0x8d41);
      *(int *)(extraout_x8_01 + lVar16 + 0x168) = (int)puVar10;
      *(uint *)(extraout_x8_01 + lVar16 + 0x164) = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x80
      ;
      iVar13 = *(int *)((long)puVar9 + lVar24);
    }
    if ((iVar13 != 0) && (*(char *)((long)puVar9 + lVar23 + 1) == '\x03')) {
      puVar10 = puVar9 + 8;
      FUN_109264940(puVar10,0x9100,piVar18[-1]);
      *(int *)(extraout_x8_01 + lVar16 + 0x16c) = (int)puVar10;
      puVar10 = puVar9 + 8;
      FUN_109264940(puVar10,0x9102,piVar18[-1]);
      *(int *)(extraout_x8_01 + lVar16 + 0x170) = (int)puVar10;
      *(uint *)(extraout_x8_01 + lVar16 + 0x164) = *(uint *)(extraout_x8_01 + lVar16 + 0x164) | 0x80
      ;
    }
    lVar16 = lVar16 + 0x10;
    lVar21 = lVar21 + 4;
    lVar23 = lVar23 + 2;
    lVar24 = lVar24 + 0xc;
    puVar25 = puVar25 + 8;
    if (lVar16 == 0x570) {
      *(undefined8 *)(extraout_x8_01 + 0x3cc) = 0x100000001;
      *(undefined8 *)(extraout_x8_01 + 0x3c4) = 0x100000043;
      if (((*(byte *)((long)puVar9 + 0x47) & 1) == 0) && ((puVar9[0x12] & 1) == 0)) {
        if (*(char *)((long)puVar9 + 0x49) != '\x01') {
          return puVar10;
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      uVar20 = 1;
      lVar16 = 0x168;
      do {
        if (uVar20 <= *(uint *)(extraout_x8_01 + lVar16)) {
          uVar20 = *(uint *)(extraout_x8_01 + lVar16);
        }
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x6d8);
      if ((*(byte *)((long)puVar9 + 0x47) & 1) == 0) {
        uVar14 = 0xffffffff;
      }
      else if (puVar9[8] == 0x3fc || uVar20 < 2) {
        uVar14 = 1;
      }
      else {
        uStack_1930 = (uint *)0x0;
        puStack_1928 = (uint *)0x0;
        uVar14 = 1;
        lVar16 = 0xf0;
        uStack_1920 = 0;
        do {
          if (*puVar22 != 0) {
            iStack_1904 = 0;
            _glGetInternalformativ(0x8d41,*puVar22,0x9380,1,&iStack_1904);
            if (0 < iStack_1904) {
              func_0x000108a5942c(&uStack_1930);
              _glGetInternalformativ(0x8d41,*puVar22,0x80a9,iStack_1904,uStack_1930);
              puVar10 = uStack_1930;
              while (puVar10 != puStack_1928) {
                uVar19 = *puVar10;
                if ((uVar19 & uVar19 - 1) != 0 || 0x3f < uVar19 - 1) {
                  uVar19 = 0;
                }
                uVar14 = uVar19 | uVar14;
                puVar10 = puVar10 + 1;
              }
            }
          }
          lVar16 = lVar16 + 4;
          puVar22 = (uint *)((long)puVar9 + lVar16);
        } while (lVar16 != 0x24c);
        puVar10 = uStack_1930;
        if (uStack_1930 != (uint *)0x0) {
          puStack_1928 = uStack_1930;
          __ZdlPv();
        }
      }
      iStack_1904 = 0;
      if (bVar6) {
        puVar10 = (uint *)0x955f;
        _glGetIntegerv(0x955f,&iStack_1904);
      }
      uVar19 = 1;
      do {
        if ((uVar19 & uVar14) != 0) {
          uStack_1910 = 0;
          puStack_1928 = (uint *)0x0;
          uStack_1930 = (uint *)0x0;
          uStack_1918 = 0;
          uStack_1920 = 0;
          iStack_1934 = 0;
          if (*(char *)((long)puVar9 + 0x47) == '\x01') {
            (*pcRam0000000113829e30)(uVar19,9,&iStack_1934,&uStack_1930);
          }
          puVar22 = (uint *)0x1;
          do {
            uVar11 = (int)puVar22 - 3;
            if (uVar11 < 6) {
              puVar10 = (uint *)(ulong)*(uint *)(&UNK_10dfbfbcc + (ulong)uVar11 * 4);
            }
            else {
              puVar10 = (uint *)0x1;
            }
            if (puVar22 < (uint *)0x9) {
              uVar11 = *(uint *)(&UNK_10dfbfbe4 + (ulong)((int)puVar22 - 1) * 4);
            }
            else {
              uVar11 = 1;
            }
            uVar7 = (uint)puVar10;
            if (*(char *)((long)puVar9 + 0x47) == '\x01') {
              uVar4 = iStack_1934 - 1;
              if (0 < iStack_1934) {
                bVar5 = false;
                if (7 < uVar4) {
                  uVar4 = 8;
                }
                uVar17 = (ulong)(uVar4 + 1);
                piVar18 = (int *)&uStack_1930;
                do {
                  iVar13 = 0;
                  if (((uVar7 < 5) && ((1 << (ulong)(uVar7 & 0x1f) & 0x16U) != 0)) &&
                     ((iVar13 = 0, uVar11 < 5 && ((1 << (ulong)(uVar11 & 0x1f) & 0x16U) != 0)))) {
                    iVar13 = *(int *)(&UNK_10dfbfba8 +
                                     (ulong)((int)((ulong)puVar10 >> 1) * 2 + (uVar7 >> 1) +
                                            (uVar11 >> 1)) * 4);
                  }
                  bVar5 = (bool)(bVar5 | *piVar18 == iVar13);
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 1;
                } while (uVar17 != 0);
                if (bVar5) goto LAB_109264780;
              }
            }
            else if (bVar6) {
              if ((uVar7 < 5) &&
                 (((((1 << (ulong)(uVar7 & 0x1f) & 0x16U) != 0 && (uVar11 < 5)) &&
                   ((1 << (ulong)(uVar11 & 0x1f) & 0x16U) != 0)) &&
                  ((((uVar7 & 0xfffffffe) + (uVar7 >> 1) + (uVar11 >> 1) & 0x1b) != 2 &&
                   ((int)(uVar7 * uVar19 * uVar11) <= iStack_1904)))))) {
LAB_109264780:
                *(uint *)(extraout_x8_01 + (long)puVar22 * 4 + 0x7a4) =
                     *(uint *)(extraout_x8_01 + (long)puVar22 * 4 + 0x7a4) | uVar19;
                if (uVar19 == 1) {
                  puVar10 = puVar22;
                  FUN_10922e6d8();
                  *(uint *)(extraout_x8_01 + 0x18) =
                       *(uint *)(extraout_x8_01 + 0x18) | (uint)puVar10;
                }
              }
            }
            else if (((char)puVar9[0x12] == '\x01') && (FUN_10924955c(), (int)puVar10 != 0))
            goto LAB_109264780;
            puVar22 = (uint *)((long)puVar22 + 1);
          } while (puVar22 != (uint *)0x9);
        }
        if ((0x20 < uVar19) || (uVar19 = uVar19 << 1, uVar20 < uVar19)) {
          return puVar10;
        }
      } while( true );
    }
  } while( true );
}



/* Entry: 109263344; end: 10926342f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109263344(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  uint *puVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int iStack_1914;
  undefined8 uStack_1910;
  uint *puStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined4 uStack_18f0;
  int iStack_18e4;
  undefined1 auStack_1868 [1776];
  long lStack_1178;
  undefined1 auStack_1138 [1776];
  long lStack_a48;
  undefined1 auStack_a10 [2488];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0x3fc) {
    pcVar18 = FUN_109263430;
LAB_1092633ac:
    (*pcVar18)(auStack_a10,param_3);
    _memcpy(param_1 + 0x20,auStack_a10,0x9b8);
    *(int *)(param_1 + 0x18) = param_2;
    func_0x00010925ace4(param_4,param_5);
    *(int *)(param_1 + 0x10) = (int)param_4;
    func_0x00010925ad44(param_6,param_7);
    *(int *)(param_1 + 0x14) = (int)param_6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (param_2 == 0x406) {
    pcVar18 = (code *)0x109263910;
    goto LAB_1092633ac;
  }
  puVar9 = &UNK_10f5617c7;
  FUN_109243bf8();
  lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)extraout_x8 + 0x37) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x2f) = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0xe] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x7c) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x8c) = 0x3f800000;
  _bzero(extraout_x8 + 0x12,0x65e);
  _bzero(extraout_x8 + 0xde,0x2c8);
  FUN_109258024(auStack_1138,puVar9);
  puVar10 = extraout_x8;
  _memcpy(extraout_x8,auStack_1138,0x6ee);
  extraout_x8[0xde] = 0x109259944;
  extraout_x8[0xdf] = 0x109259948;
  extraout_x8[0xe0] = 0x109259468;
  extraout_x8[0xe1] = 0x10925947c;
  extraout_x8[0xe2] = 0x109259490;
  extraout_x8[0xe3] = 0x1092594a4;
  extraout_x8[0xe4] = 0x1092594b8;
  extraout_x8[0xe5] = 0x10925994c;
  extraout_x8[0xe6] = 0x10925916c;
  extraout_x8[0xe7] = FUN_10925929c;
  extraout_x8[0xe8] = 0x109259320;
  extraout_x8[0xe9] = 0x109259334;
  extraout_x8[0xea] = 0x109259348;
  extraout_x8[0xeb] = 0x10925935c;
  extraout_x8[0xec] = 0x109259370;
  extraout_x8[0xed] = 0x109259384;
  extraout_x8[0xee] = 0x109259398;
  extraout_x8[0xef] = 0x1092593ac;
  extraout_x8[0xf0] = 0x1092593c0;
  extraout_x8[0xf1] = 0x1092593e8;
  extraout_x8[0xf2] = 0x1092593fc;
  extraout_x8[0xf3] = 0x1092593d4;
  extraout_x8[0xf4] = 0x109259410;
  extraout_x8[0xf5] = 0x109259424;
  extraout_x8[0xf6] = 0x109259954;
  extraout_x8[0xf7] = 0x109259958;
  extraout_x8[0xf8] = 0x10925995c;
  extraout_x8[0xf9] = 0x109259960;
  extraout_x8[0xfa] = FUN_109259144;
  extraout_x8[0xfb] = FUN_109259438;
  extraout_x8[0xfc] = 0x10925943c;
  extraout_x8[0xfd] = FUN_109259170;
  extraout_x8[0xfe] = 0x1092595a4;
  extraout_x8[0xff] = 0x1092595b8;
  extraout_x8[0x100] = 0x1092595cc;
  extraout_x8[0x101] = 0x109259590;
  extraout_x8[0x102] = 0x109259568;
  extraout_x8[0x103] = 0x10925957c;
  extraout_x8[0x104] = 0x109259554;
  extraout_x8[0x105] = 0x1092596a8;
  extraout_x8[0x106] = FUN_1092592a0;
  extraout_x8[0x107] = FUN_1092594cc;
  extraout_x8[0x108] = 0x1092594e8;
  extraout_x8[0x109] = 0x1092594ec;
  extraout_x8[0x10a] = 0x10925961c;
  extraout_x8[0x10b] = 0x109259630;
  extraout_x8[0x10c] = 0x109259644;
  extraout_x8[0x10d] = 0x109259658;
  extraout_x8[0x10e] = 0x10925966c;
  extraout_x8[0x10f] = FUN_109259440;
  extraout_x8[0x110] = FUN_109259934;
  extraout_x8[0x111] = 0x10925993c;
  extraout_x8[0x112] = 0x109259454;
  extraout_x8[0x113] = 0x1092592b4;
  extraout_x8[0x114] = 0x1092592c8;
  extraout_x8[0x115] = 0x1092592dc;
  extraout_x8[0x116] = 0x1092592f0;
  extraout_x8[0x117] = 0x109259304;
  extraout_x8[0x118] = 0x109259680;
  extraout_x8[0x119] = 0x109259694;
  extraout_x8[0x11a] = 0x1092595e0;
  extraout_x8[0x11b] = 0x1092595f4;
  extraout_x8[0x11c] = 0x109259608;
  extraout_x8[0x11d] = FUN_1092594f0;
  extraout_x8[0x11e] = 0x109259504;
  extraout_x8[0x11f] = 0x109259518;
  extraout_x8[0x120] = 0x10925952c;
  extraout_x8[0x121] = 0x109259540;
  extraout_x8[0x122] = 0x1092596bc;
  extraout_x8[0x123] = FUN_1092596d0;
  extraout_x8[0x124] = FUN_1092596d4;
  extraout_x8[0x125] = 0x1092596e8;
  extraout_x8[0x126] = FUN_109259710;
  extraout_x8[0x128] = 0x109259734;
  extraout_x8[0x129] = 0x109259738;
  extraout_x8[0x12a] = 0x10925973c;
  extraout_x8[0x127] = FUN_109259740;
  extraout_x8[299] = FUN_109259754;
  extraout_x8[300] = 0x109259758;
  extraout_x8[0x12d] = 0x10925975c;
  extraout_x8[0x12e] = 0x109259760;
  extraout_x8[0x12f] = 0x109259764;
  extraout_x8[0x130] = 0x109259768;
  extraout_x8[0x131] = 0x109259978;
  extraout_x8[0x132] = 0x10925976c;
  extraout_x8[0x133] = FUN_109259964;
  extraout_x8[0x134] = 0x10925998c;
  extraout_x8[0x135] = 0x1092599a0;
  extraout_x8[0x136] = 0x1092599b4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
    return;
  }
  ___stack_chk_fail();
  lStack_1178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)extraout_x8_00 + 0x37) = 0;
  *(undefined8 *)((long)extraout_x8_00 + 0x2f) = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  extraout_x8_00[9] = 0;
  extraout_x8_00[8] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[0xd] = 0;
  extraout_x8_00[0xc] = 0;
  extraout_x8_00[0xf] = 0;
  extraout_x8_00[0xe] = 0;
  *(undefined8 *)((long)extraout_x8_00 + 0x84) = 0;
  *(undefined8 *)((long)extraout_x8_00 + 0x7c) = 0;
  *(undefined4 *)((long)extraout_x8_00 + 0x8c) = 0x3f800000;
  _bzero(extraout_x8_00 + 0x12,0x65e);
  _bzero(extraout_x8_00 + 0xde,0x2c8);
  FUN_1092599c8(auStack_1868,puVar10);
  puVar10 = extraout_x8_00;
  _memcpy(extraout_x8_00,auStack_1868,0x6ee);
  extraout_x8_00[0xde] = 0x10925a460;
  extraout_x8_00[0xdf] = FUN_10925a45c;
  extraout_x8_00[0xe0] = 0x10925a46c;
  extraout_x8_00[0xe1] = 0x10925a470;
  extraout_x8_00[0xe2] = 0x109259490;
  extraout_x8_00[0xe3] = 0x1092594a4;
  extraout_x8_00[0xe4] = 0x1092594b8;
  extraout_x8_00[0xe5] = 0x10925a474;
  extraout_x8_00[0xe6] = FUN_10925a4a4;
  extraout_x8_00[0xe7] = 0x10925a4b8;
  extraout_x8_00[0xe8] = 0x10925a518;
  extraout_x8_00[0xe9] = 0x10925a51c;
  extraout_x8_00[0xea] = 0x10925a520;
  extraout_x8_00[0xeb] = 0x10925a524;
  extraout_x8_00[0xec] = 0x10925a528;
  extraout_x8_00[0xed] = 0x10925a52c;
  extraout_x8_00[0xee] = 0x10925a530;
  extraout_x8_00[0xef] = 0x10925a534;
  extraout_x8_00[0xf0] = 0x10925a538;
  extraout_x8_00[0xf1] = 0x1092593e8;
  extraout_x8_00[0xf2] = 0x1092593fc;
  extraout_x8_00[0xf3] = 0x1092593d4;
  extraout_x8_00[0xf4] = 0x109259410;
  extraout_x8_00[0xf5] = 0x109259424;
  extraout_x8_00[0xf6] = 0x10925a4bc;
  extraout_x8_00[0xf7] = 0x10925a4c0;
  extraout_x8_00[0xf8] = 0x10925a4c4;
  extraout_x8_00[0xf9] = 0x10925a4c8;
  extraout_x8_00[0xfa] = 0x10925a4e0;
  extraout_x8_00[0xfb] = FUN_109259438;
  extraout_x8_00[0xfc] = 0x10925943c;
  extraout_x8_00[0xfd] = 0x10925a4a8;
  extraout_x8_00[0xfe] = 0x10925a4cc;
  extraout_x8_00[0xff] = 0x10925a4d0;
  extraout_x8_00[0x100] = 0x10925a4d4;
  extraout_x8_00[0x101] = 0x10925a4d8;
  extraout_x8_00[0x102] = 0x10925a540;
  extraout_x8_00[0x103] = 0x10925a53c;
  extraout_x8_00[0x104] = 0x10925a4dc;
  extraout_x8_00[0x105] = FUN_10925a414;
  extraout_x8_00[0x106] = 0x10925a418;
  extraout_x8_00[0x107] = 0x10925a41c;
  extraout_x8_00[0x108] = 0x10925a420;
  extraout_x8_00[0x109] = 0x10925a424;
  extraout_x8_00[0x10a] = 0x10925a428;
  extraout_x8_00[0x10b] = 0x10925a42c;
  extraout_x8_00[0x10c] = 0x10925a430;
  extraout_x8_00[0x10d] = 0x10925a434;
  extraout_x8_00[0x10e] = 0x10925a438;
  extraout_x8_00[0x10f] = 0x10925a43c;
  extraout_x8_00[0x110] = 0x10925a440;
  extraout_x8_00[0x111] = 0x10925a444;
  extraout_x8_00[0x112] = FUN_10925a448;
  extraout_x8_00[0x113] = 0x10925a4ac;
  extraout_x8_00[0x114] = 0x10925a4b0;
  extraout_x8_00[0x115] = 0x1092592dc;
  extraout_x8_00[0x116] = 0x1092592f0;
  extraout_x8_00[0x117] = 0x10925a4b4;
  extraout_x8_00[0x118] = 0x10925a464;
  extraout_x8_00[0x119] = 0x10925a468;
  extraout_x8_00[0x11a] = 0x10925a478;
  extraout_x8_00[0x11b] = FUN_10925a47c;
  extraout_x8_00[0x11c] = 0x10925a490;
  extraout_x8_00[0x11d] = FUN_1092594f0;
  extraout_x8_00[0x11e] = 0x109259504;
  extraout_x8_00[0x11f] = 0x109259518;
  extraout_x8_00[0x120] = 0x10925952c;
  extraout_x8_00[0x121] = 0x109259540;
  extraout_x8_00[0x122] = 0x1092596bc;
  extraout_x8_00[0x123] = FUN_1092596d0;
  extraout_x8_00[0x124] = FUN_1092596d4;
  extraout_x8_00[0x125] = 0x10925a544;
  extraout_x8_00[0x126] = 0x10925a548;
  extraout_x8_00[0x128] = 0x10925a54c;
  extraout_x8_00[0x129] = 0x10925a550;
  extraout_x8_00[0x12a] = 0x10925a554;
  extraout_x8_00[0x127] = 0x10925a558;
  extraout_x8_00[299] = 0x10925a55c;
  extraout_x8_00[300] = 0x10925a560;
  extraout_x8_00[0x12d] = 0x10925a564;
  extraout_x8_00[0x12e] = 0x10925a568;
  extraout_x8_00[0x12f] = 0x10925a56c;
  extraout_x8_00[0x130] = 0x10925a570;
  extraout_x8_00[0x131] = 0x109259978;
  extraout_x8_00[0x132] = 0x10925a574;
  extraout_x8_00[0x133] = FUN_109259964;
  extraout_x8_00[0x134] = 0x10925998c;
  extraout_x8_00[0x135] = 0x1092599a0;
  extraout_x8_00[0x136] = 0x1092599b4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1178) {
    return;
  }
  ___stack_chk_fail();
  _bzero(extraout_x8_01,0x7c8);
  FUN_109264810(extraout_x8_01);
  *(undefined2 *)(extraout_x8_01 + 0x6fc) = 0;
  uVar14 = *(undefined4 *)(puVar10 + 3);
  *(undefined8 *)(extraout_x8_01 + 0x700) = 0x100000001;
  *(undefined4 *)(extraout_x8_01 + 0x708) = uVar14;
  *(undefined8 *)(extraout_x8_01 + 0x798) = 1;
  extraout_x8_01[0x790] = *(undefined1 *)((long)puVar10 + 0x3a);
  *(undefined8 *)(extraout_x8_01 + 0x71c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x714) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x72c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x724) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x73c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x734) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x74c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x744) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x75c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x754) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x76c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x764) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x77c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x774) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x784) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x70c) = 0x600000001;
  *(undefined4 *)(extraout_x8_01 + 0x78c) = 2;
  extraout_x8_01[8] = *(undefined1 *)((long)puVar10 + 0x3b);
  extraout_x8_01[1] = *(undefined1 *)((long)puVar10 + 0x3d);
  extraout_x8_01[0x12] = *(undefined1 *)((long)puVar10 + 0x3c);
  extraout_x8_01[0xe] = *(undefined1 *)((long)puVar10 + 0x37);
  if (*(char *)(puVar10 + 0xb) == '\x01') {
    uVar14 = 7;
    if (*(char *)((long)puVar10 + 0x59) == '\0') {
      uVar14 = 3;
    }
    *(undefined4 *)(extraout_x8_01 + 0x14) = uVar14;
  }
  *extraout_x8_01 = *(undefined1 *)((long)puVar10 + 0x33);
  extraout_x8_01[7] = *(undefined1 *)((long)puVar10 + 0x35);
  extraout_x8_01[6] = *(undefined1 *)((long)puVar10 + 0x34);
  extraout_x8_01[5] = *(undefined1 *)((long)puVar10 + 0x3f);
  extraout_x8_01[4] = *(undefined1 *)(puVar10 + 8);
  extraout_x8_01[9] = *(undefined1 *)((long)puVar10 + 0x44);
  extraout_x8_01[2] = *(undefined1 *)((long)puVar10 + 0x36);
  extraout_x8_01[3] = 0;
  extraout_x8_01[0x10] = *(undefined1 *)((long)puVar10 + 0x3e);
  extraout_x8_01[0xd] = *(undefined1 *)((long)puVar10 + 0x29);
  extraout_x8_01[0x3f] = *(undefined1 *)((long)puVar10 + 0x45);
  extraout_x8_01[0x1f] = *(undefined1 *)((long)puVar10 + 0x54);
  extraout_x8_01[0x20] = 1;
  extraout_x8_01[0x1e] = *(undefined1 *)((long)puVar10 + 0x2d);
  extraout_x8_01[0xb] = *(undefined1 *)((long)puVar10 + 0x2e);
  extraout_x8_01[0xc] = 0;
  cVar2 = *(char *)((long)puVar10 + 0x41);
  uVar14 = 1;
  if (cVar2 != '\0') {
    uVar14 = 0xffffffff;
  }
  *(undefined4 *)(extraout_x8_01 + 0xdc) = uVar14;
  extraout_x8_01[0x38] = cVar2;
  extraout_x8_01[0x39] = cVar2;
  uVar3 = *(undefined1 *)((long)puVar10 + 0x42);
  extraout_x8_01[0x3a] = uVar3;
  extraout_x8_01[0x3b] = *(undefined1 *)((long)puVar10 + 0x43);
  extraout_x8_01[0x3c] = uVar3;
  *(undefined4 *)(extraout_x8_01 + 0x24) = 0;
  extraout_x8_01[0x3e] = *(undefined1 *)((long)puVar10 + 0x46);
  extraout_x8_01[0xf] = 0;
  extraout_x8_01[0x11] = 0;
  extraout_x8_01[10] = 0;
  extraout_x8_01[0x1d] = 0;
  *(undefined4 *)(extraout_x8_01 + 300) = 0;
  if (*(char *)((long)puVar10 + 0x5e) == '\x01') {
    fVar28 = *(float *)((long)puVar10 + 0xac);
    if (16.0 <= fVar28) {
      uVar14 = 0x10;
    }
    else if (8.0 <= fVar28) {
      uVar14 = 8;
    }
    else if (4.0 <= fVar28) {
      uVar14 = 4;
    }
    else {
      if (fVar28 < 2.0) goto LAB_109263ff0;
      uVar14 = 2;
    }
    *(undefined4 *)(extraout_x8_01 + 300) = uVar14;
  }
LAB_109263ff0:
  *(undefined4 *)(extraout_x8_01 + 0x40) = 1;
  *(undefined4 *)(extraout_x8_01 + 0x120) = *(undefined4 *)((long)puVar10 + 0x6c);
  *(undefined8 *)(extraout_x8_01 + 0x124) = 0x400000004;
  extraout_x8_01[0x5c] = *(undefined1 *)(puVar10 + 6);
  extraout_x8_01[0x1c] = 0;
  *(undefined4 *)(extraout_x8_01 + 0x58) = *(undefined4 *)(puVar10 + 0xc);
  extraout_x8_01[0x2c] = 1;
  *(undefined2 *)(extraout_x8_01 + 0x7a0) = 0x101;
  *(undefined2 *)(extraout_x8_01 + 0x2f) = 0;
  uVar14 = 5;
  if (*(char *)((long)puVar10 + 0x4a) == '\0') {
    uVar14 = 1;
  }
  *(undefined4 *)(extraout_x8_01 + 0x34) = uVar14;
  if (*(char *)((long)puVar10 + 0x2c) == '\x01') {
    uStack_1910 = (uint *)((ulong)uStack_1910._4_4_ << 0x20);
    _glGetIntegerv(0x8a2e,&uStack_1910);
    *(uint *)(extraout_x8_01 + 0x70) = (uint)uStack_1910;
    uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
    _glGetIntegerv(0x8a2b,&uStack_1910);
    iStack_18e4 = 0;
    _glGetIntegerv(0x8a2d,&iStack_18e4);
    iVar15 = iStack_18e4;
    if ((int)(uint)uStack_1910 <= iStack_18e4) {
      iVar15 = (uint)uStack_1910;
    }
    *(int *)(extraout_x8_01 + 0x6c) = iVar15;
    uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
    _glGetIntegerv(0x8a31,&uStack_1910);
    *(long *)(extraout_x8_01 + 0x78) = (long)(int)(uint)uStack_1910 << 2;
    uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
    _glGetIntegerv(0x8a33,&uStack_1910);
    *(long *)(extraout_x8_01 + 0x80) = (long)(int)(uint)uStack_1910 << 2;
    uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
    _glGetIntegerv(0x8a30,&uStack_1910);
    *(long *)(extraout_x8_01 + 0x90) = (long)(int)(uint)uStack_1910;
    *(long *)(extraout_x8_01 + 0x98) = (long)(int)(uint)uStack_1910;
    uStack_1910 = (uint *)CONCAT44(uStack_1910._4_4_,1);
    _glGetIntegerv(0x8a34,&uStack_1910);
    lVar19 = (long)(int)(uint)uStack_1910;
  }
  else {
    *(undefined8 *)(extraout_x8_01 + 0x6c) = 0x180000000c;
    uStack_1910 = (uint *)((ulong)uStack_1910._4_4_ << 0x20);
    _glGetIntegerv(0x8dfb,&uStack_1910);
    *(long *)(extraout_x8_01 + 0x78) = (long)(int)(uint)uStack_1910 << 4;
    uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
    _glGetIntegerv(0x8dfd,&uStack_1910);
    *(long *)(extraout_x8_01 + 0x80) = (long)(int)(uint)uStack_1910 << 4;
    *(undefined8 *)(extraout_x8_01 + 0x90) = *(undefined8 *)(extraout_x8_01 + 0x78);
    *(long *)(extraout_x8_01 + 0x98) = (long)(int)(uint)uStack_1910 << 4;
    lVar19 = 1;
  }
  uVar14 = 0;
  *(long *)(extraout_x8_01 + 0x118) = lVar19;
  *(undefined8 *)(extraout_x8_01 + 0xe8) = 0x2000000020;
  uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
  if (*(int *)((long)puVar10 + 0x14) != 1) {
    _glGetIntegerv(0x8b4c,&uStack_1910);
    uVar14 = SUB84(uStack_1910,0);
  }
  *(undefined4 *)(extraout_x8_01 + 0xa8) = uVar14;
  *(undefined4 *)(extraout_x8_01 + 0xb8) = uVar14;
  uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
  _glGetIntegerv(0x8872,&uStack_1910);
  *(uint *)(extraout_x8_01 + 0xac) = (uint)uStack_1910;
  *(uint *)(extraout_x8_01 + 0xbc) = (uint)uStack_1910;
  uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
  _glGetIntegerv(0x8b4d,&uStack_1910);
  *(uint *)(extraout_x8_01 + 0xb4) = (uint)uStack_1910;
  *(uint *)(extraout_x8_01 + 0xc4) = (uint)uStack_1910;
  uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
  _glGetIntegerv(0x8869,&uStack_1910);
  *(uint *)(extraout_x8_01 + 0xcc) = (uint)uStack_1910;
  *(uint *)(extraout_x8_01 + 0xd0) = (uint)uStack_1910;
  uStack_1910 = (uint *)((ulong)uStack_1910 & 0xffffffff00000000);
  _glGetIntegerv(0xd33,&uStack_1910);
  bVar7 = false;
  uVar23 = (uint)uStack_1910;
  if ((uint)uStack_1910 < 0x41) {
    uVar23 = 0x40;
  }
  uVar17 = (uint)uStack_1910;
  if ((uint)uStack_1910 < 0x11) {
    uVar17 = 0x10;
  }
  uVar14 = *(undefined4 *)((long)puVar10 + 100);
  *(undefined4 *)(extraout_x8_01 + 0x50) = *(undefined4 *)(puVar10 + 0xd);
  *(uint *)(extraout_x8_01 + 0x54) = uVar17;
  *(undefined4 *)(extraout_x8_01 + 0x48) = uVar14;
  *(uint *)(extraout_x8_01 + 0x4c) = uVar23;
  *(undefined8 *)(extraout_x8_01 + 0x60) = *(undefined8 *)((long)puVar10 + 0x74);
  *(undefined4 *)(extraout_x8_01 + 0x68) = *(undefined4 *)((long)puVar10 + 0x7c);
  iVar15 = *(int *)(puVar10 + 0x12);
  uVar30 = *(undefined8 *)((long)puVar10 + 0xa4);
  uVar29 = *(undefined8 *)((long)puVar10 + 0x9c);
  *(undefined8 *)(extraout_x8_01 + 0xf8) = *(undefined8 *)((long)puVar10 + 0x94);
  *(ulong *)(extraout_x8_01 + 0xf0) = CONCAT44(iVar15,iVar15);
  *(undefined8 *)(extraout_x8_01 + 0x108) = uVar30;
  *(undefined8 *)(extraout_x8_01 + 0x100) = uVar29;
  *(undefined4 *)(extraout_x8_01 + 200) = 0xffff;
  *(undefined8 *)(extraout_x8_01 + 0xd4) = 0x7ff000007ff;
  if (*(char *)((long)puVar10 + 0x4f) == '\x01') {
    bVar7 = *(int *)((long)puVar10 + 0x14) != 0xd;
  }
  extraout_x8_01[0x110] = bVar7;
  extraout_x8_01[0x111] = 1;
  uVar29 = puVar10[0x17];
  uVar31 = puVar10[0x1a];
  uVar30 = puVar10[0x19];
  *(undefined8 *)(extraout_x8_01 + 0x6dc) = puVar10[0x18];
  *(undefined8 *)(extraout_x8_01 + 0x6d4) = uVar29;
  *(undefined8 *)(extraout_x8_01 + 0x6ec) = uVar31;
  *(undefined8 *)(extraout_x8_01 + 0x6e4) = uVar30;
  *(undefined8 *)(extraout_x8_01 + 0x6f4) = puVar10[0x1b];
  *(undefined4 *)(extraout_x8_01 + 0x160) = 1;
  *(undefined2 *)(extraout_x8_01 + 0x144) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x13c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x148) = 0;
  *(undefined2 *)(extraout_x8_01 + 0x150) = 0;
  *(undefined2 *)(extraout_x8_01 + 0x15c) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x154) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x130) = 0x100000005;
  uVar3 = *(undefined1 *)((long)puVar10 + 0x5d);
  extraout_x8_01[0x138] = uVar3;
  extraout_x8_01[0x139] = uVar3;
  if (iVar15 != 0) {
    *(undefined4 *)(extraout_x8_01 + 0x130) = 7;
  }
  lVar19 = 0x164;
  do {
    *(undefined8 *)((long)(extraout_x8_01 + lVar19) + 8) = 0x100000001;
    *(undefined8 *)(extraout_x8_01 + lVar19) = 0x100000000;
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0x6d4);
  lVar19 = 0;
  piVar21 = (int *)(puVar10 + 0x1e);
  lVar24 = 0xf0;
  lVar26 = 0x660;
  lVar27 = 0x250;
  puVar16 = (uint *)&UNK_110ae4714;
  do {
    uVar23 = *puVar16;
    piVar1 = (int *)((long)puVar10 + lVar27);
    iVar15 = *piVar1;
    if (iVar15 == 0) {
      if (*(int *)((long)puVar10 + lVar24) != 0) {
        uVar17 = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x24;
        if ((uVar23 & 1) != 0) {
          uVar17 = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x30;
        }
        goto LAB_1092643f0;
      }
    }
    else {
      bVar4 = *(byte *)((long)puVar10 + lVar26);
      if ((bVar4 >> 1 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar19 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x100;
      }
      if ((bVar4 >> 4 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar19 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x400;
      }
      if ((bVar4 >> 2 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar19 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x60;
      }
      if ((bVar4 & 1) != 0) {
        *(uint *)(extraout_x8_01 + lVar19 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x200;
      }
      if ((bVar4 >> 3 & 1) != 0) {
        uVar17 = 4;
        if ((uVar23 & 1) != 0) {
          uVar17 = 0x10;
        }
        *(uint *)(extraout_x8_01 + lVar19 + 0x164) =
             *(uint *)(extraout_x8_01 + lVar19 + 0x164) | uVar17;
      }
      cVar2 = *(char *)((long)puVar10 + lVar26 + 1);
      if (cVar2 == '\x02') {
        uVar17 = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 3;
      }
      else {
        if (cVar2 != '\x01') goto LAB_1092643f4;
        uVar17 = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 1;
      }
LAB_1092643f0:
      *(uint *)(extraout_x8_01 + lVar19 + 0x164) = uVar17;
    }
LAB_1092643f4:
    *(undefined8 *)(extraout_x8_01 + lVar19 + 0x168) = 0x100000001;
    *(undefined4 *)(extraout_x8_01 + lVar19 + 0x170) = 1;
    if (*(int *)((long)puVar10 + lVar24) != 0) {
      puVar11 = puVar10 + 4;
      FUN_109264940(puVar11,0x8d41);
      *(int *)(extraout_x8_01 + lVar19 + 0x168) = (int)puVar11;
      *(uint *)(extraout_x8_01 + lVar19 + 0x164) = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x80
      ;
      iVar15 = *(int *)((long)puVar10 + lVar27);
    }
    if ((iVar15 != 0) && (*(char *)((long)puVar10 + lVar26 + 1) == '\x03')) {
      puVar11 = puVar10 + 4;
      FUN_109264940(puVar11,0x9100,piVar1[-1]);
      *(int *)(extraout_x8_01 + lVar19 + 0x16c) = (int)puVar11;
      puVar11 = puVar10 + 4;
      FUN_109264940(puVar11,0x9102,piVar1[-1]);
      *(int *)(extraout_x8_01 + lVar19 + 0x170) = (int)puVar11;
      *(uint *)(extraout_x8_01 + lVar19 + 0x164) = *(uint *)(extraout_x8_01 + lVar19 + 0x164) | 0x80
      ;
    }
    lVar19 = lVar19 + 0x10;
    lVar24 = lVar24 + 4;
    lVar26 = lVar26 + 2;
    lVar27 = lVar27 + 0xc;
    puVar16 = puVar16 + 8;
    if (lVar19 == 0x570) {
      *(undefined8 *)(extraout_x8_01 + 0x3cc) = 0x100000001;
      *(undefined8 *)(extraout_x8_01 + 0x3c4) = 0x100000043;
      if (((*(byte *)((long)puVar10 + 0x47) & 1) == 0) && ((*(byte *)(puVar10 + 9) & 1) == 0)) {
        if (*(char *)((long)puVar10 + 0x49) != '\x01') {
          return;
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      uVar23 = 1;
      lVar19 = 0x168;
      do {
        if (uVar23 <= *(uint *)(extraout_x8_01 + lVar19)) {
          uVar23 = *(uint *)(extraout_x8_01 + lVar19);
        }
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x6d8);
      if ((*(byte *)((long)puVar10 + 0x47) & 1) == 0) {
        uVar17 = 0xffffffff;
      }
      else if (*(int *)(puVar10 + 4) == 0x3fc || uVar23 < 2) {
        uVar17 = 1;
      }
      else {
        uStack_1910 = (uint *)0x0;
        puStack_1908 = (uint *)0x0;
        uVar17 = 1;
        lVar19 = 0xf0;
        uStack_1900 = 0;
        do {
          if (*piVar21 != 0) {
            iStack_18e4 = 0;
            _glGetInternalformativ(0x8d41,*piVar21,0x9380,1,&iStack_18e4);
            if (0 < iStack_18e4) {
              func_0x000108a5942c(&uStack_1910);
              _glGetInternalformativ(0x8d41,*piVar21,0x80a9,iStack_18e4,uStack_1910);
              puVar16 = uStack_1910;
              while (puVar16 != puStack_1908) {
                uVar22 = *puVar16;
                if ((uVar22 & uVar22 - 1) != 0 || 0x3f < uVar22 - 1) {
                  uVar22 = 0;
                }
                uVar17 = uVar22 | uVar17;
                puVar16 = puVar16 + 1;
              }
            }
          }
          lVar19 = lVar19 + 4;
          piVar21 = (int *)((long)puVar10 + lVar19);
        } while (lVar19 != 0x24c);
        if (uStack_1910 != (uint *)0x0) {
          puStack_1908 = uStack_1910;
          __ZdlPv();
        }
      }
      iStack_18e4 = 0;
      if (bVar7) {
        _glGetIntegerv(0x955f,&iStack_18e4);
      }
      uVar22 = 1;
      do {
        if ((uVar22 & uVar17) != 0) {
          uStack_18f0 = 0;
          puStack_1908 = (uint *)0x0;
          uStack_1910 = (uint *)0x0;
          uStack_18f8 = 0;
          uStack_1900 = 0;
          iStack_1914 = 0;
          if (*(char *)((long)puVar10 + 0x47) == '\x01') {
            (*pcRam0000000113829e30)(uVar22,9,&iStack_1914,&uStack_1910);
          }
          uVar25 = 1;
          do {
            uVar8 = (int)uVar25 - 3;
            if (uVar8 < 6) {
              uVar12 = (ulong)*(uint *)(&UNK_10dfbfbcc + (ulong)uVar8 * 4);
            }
            else {
              uVar12 = 1;
            }
            uVar8 = (uint)uVar12;
            if (uVar25 < 9) {
              uVar13 = *(uint *)(&UNK_10dfbfbe4 + (ulong)((int)uVar25 - 1) * 4);
            }
            else {
              uVar13 = 1;
            }
            if (*(char *)((long)puVar10 + 0x47) == '\x01') {
              uVar5 = iStack_1914 - 1;
              if (0 < iStack_1914) {
                bVar6 = false;
                if (7 < uVar5) {
                  uVar5 = 8;
                }
                uVar20 = (ulong)(uVar5 + 1);
                piVar21 = (int *)&uStack_1910;
                do {
                  iVar15 = 0;
                  if (((uVar8 < 5) && ((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0)) &&
                     ((iVar15 = 0, uVar13 < 5 && ((1 << (ulong)(uVar13 & 0x1f) & 0x16U) != 0)))) {
                    iVar15 = *(int *)(&UNK_10dfbfba8 +
                                     (ulong)((int)(uVar12 >> 1) * 2 + (uVar8 >> 1) + (uVar13 >> 1))
                                     * 4);
                  }
                  bVar6 = (bool)(bVar6 | *piVar21 == iVar15);
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 1;
                } while (uVar20 != 0);
                if (bVar6) goto LAB_109264780;
              }
            }
            else if (bVar7) {
              if ((uVar8 < 5) &&
                 (((((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0 && (uVar13 < 5)) &&
                   ((1 << (ulong)(uVar13 & 0x1f) & 0x16U) != 0)) &&
                  ((((uVar8 & 0xfffffffe) + (uVar8 >> 1) + (uVar13 >> 1) & 0x1b) != 2 &&
                   ((int)(uVar8 * uVar22 * uVar13) <= iStack_18e4)))))) {
LAB_109264780:
                *(uint *)(extraout_x8_01 + uVar25 * 4 + 0x7a4) =
                     *(uint *)(extraout_x8_01 + uVar25 * 4 + 0x7a4) | uVar22;
                if (uVar22 == 1) {
                  uVar12 = uVar25;
                  FUN_10922e6d8();
                  *(uint *)(extraout_x8_01 + 0x18) = *(uint *)(extraout_x8_01 + 0x18) | (uint)uVar12
                  ;
                }
              }
            }
            else if ((*(char *)(puVar10 + 9) == '\x01') && (FUN_10924955c(), uVar8 != 0))
            goto LAB_109264780;
            uVar25 = uVar25 + 1;
          } while (uVar25 != 9);
        }
        if ((0x20 < uVar22) || (uVar22 = uVar22 << 1, uVar23 < uVar22)) {
          return;
        }
      } while( true );
    }
  } while( true );
}



/* Entry: 109263430; end: 109263def;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109263430(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *extraout_x8;
  undefined1 *extraout_x8_00;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iStack_f04;
  undefined8 uStack_f00;
  uint *puStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined4 uStack_ee0;
  int iStack_ed4;
  undefined1 auStack_e58 [1776];
  long lStack_768;
  undefined1 auStack_728 [1776];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)param_1 + 0x37) = 0;
  *(undefined8 *)((long)param_1 + 0x2f) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
  _bzero(param_1 + 0x12,0x65e);
  _bzero(param_1 + 0xde,0x2c8);
  FUN_109258024(auStack_728,param_2);
  puVar9 = param_1;
  _memcpy(param_1,auStack_728,0x6ee);
  param_1[0xde] = 0x109259944;
  param_1[0xdf] = 0x109259948;
  param_1[0xe0] = 0x109259468;
  param_1[0xe1] = 0x10925947c;
  param_1[0xe2] = 0x109259490;
  param_1[0xe3] = 0x1092594a4;
  param_1[0xe4] = 0x1092594b8;
  param_1[0xe5] = 0x10925994c;
  param_1[0xe6] = 0x10925916c;
  param_1[0xe7] = FUN_10925929c;
  param_1[0xe8] = 0x109259320;
  param_1[0xe9] = 0x109259334;
  param_1[0xea] = 0x109259348;
  param_1[0xeb] = 0x10925935c;
  param_1[0xec] = 0x109259370;
  param_1[0xed] = 0x109259384;
  param_1[0xee] = 0x109259398;
  param_1[0xef] = 0x1092593ac;
  param_1[0xf0] = 0x1092593c0;
  param_1[0xf1] = 0x1092593e8;
  param_1[0xf2] = 0x1092593fc;
  param_1[0xf3] = 0x1092593d4;
  param_1[0xf4] = 0x109259410;
  param_1[0xf5] = 0x109259424;
  param_1[0xf6] = 0x109259954;
  param_1[0xf7] = 0x109259958;
  param_1[0xf8] = 0x10925995c;
  param_1[0xf9] = 0x109259960;
  param_1[0xfa] = FUN_109259144;
  param_1[0xfb] = FUN_109259438;
  param_1[0xfc] = 0x10925943c;
  param_1[0xfd] = FUN_109259170;
  param_1[0xfe] = 0x1092595a4;
  param_1[0xff] = 0x1092595b8;
  param_1[0x100] = 0x1092595cc;
  param_1[0x101] = 0x109259590;
  param_1[0x102] = 0x109259568;
  param_1[0x103] = 0x10925957c;
  param_1[0x104] = 0x109259554;
  param_1[0x105] = 0x1092596a8;
  param_1[0x106] = FUN_1092592a0;
  param_1[0x107] = FUN_1092594cc;
  param_1[0x108] = 0x1092594e8;
  param_1[0x109] = 0x1092594ec;
  param_1[0x10a] = 0x10925961c;
  param_1[0x10b] = 0x109259630;
  param_1[0x10c] = 0x109259644;
  param_1[0x10d] = 0x109259658;
  param_1[0x10e] = 0x10925966c;
  param_1[0x10f] = FUN_109259440;
  param_1[0x110] = FUN_109259934;
  param_1[0x111] = 0x10925993c;
  param_1[0x112] = 0x109259454;
  param_1[0x113] = 0x1092592b4;
  param_1[0x114] = 0x1092592c8;
  param_1[0x115] = 0x1092592dc;
  param_1[0x116] = 0x1092592f0;
  param_1[0x117] = 0x109259304;
  param_1[0x118] = 0x109259680;
  param_1[0x119] = 0x109259694;
  param_1[0x11a] = 0x1092595e0;
  param_1[0x11b] = 0x1092595f4;
  param_1[0x11c] = 0x109259608;
  param_1[0x11d] = FUN_1092594f0;
  param_1[0x11e] = 0x109259504;
  param_1[0x11f] = 0x109259518;
  param_1[0x120] = 0x10925952c;
  param_1[0x121] = 0x109259540;
  param_1[0x122] = 0x1092596bc;
  param_1[0x123] = FUN_1092596d0;
  param_1[0x124] = FUN_1092596d4;
  param_1[0x125] = 0x1092596e8;
  param_1[0x126] = FUN_109259710;
  param_1[0x128] = 0x109259734;
  param_1[0x129] = 0x109259738;
  param_1[0x12a] = 0x10925973c;
  param_1[0x127] = FUN_109259740;
  param_1[299] = FUN_109259754;
  param_1[300] = 0x109259758;
  param_1[0x12d] = 0x10925975c;
  param_1[0x12e] = 0x109259760;
  param_1[0x12f] = 0x109259764;
  param_1[0x130] = 0x109259768;
  param_1[0x131] = 0x109259978;
  param_1[0x132] = 0x10925976c;
  param_1[0x133] = FUN_109259964;
  param_1[0x134] = 0x10925998c;
  param_1[0x135] = 0x1092599a0;
  param_1[0x136] = 0x1092599b4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)extraout_x8 + 0x37) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x2f) = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0xe] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x84) = 0;
  *(undefined8 *)((long)extraout_x8 + 0x7c) = 0;
  *(undefined4 *)((long)extraout_x8 + 0x8c) = 0x3f800000;
  _bzero(extraout_x8 + 0x12,0x65e);
  _bzero(extraout_x8 + 0xde,0x2c8);
  FUN_1092599c8(auStack_e58,puVar9);
  puVar9 = extraout_x8;
  _memcpy(extraout_x8,auStack_e58,0x6ee);
  extraout_x8[0xde] = 0x10925a460;
  extraout_x8[0xdf] = FUN_10925a45c;
  extraout_x8[0xe0] = 0x10925a46c;
  extraout_x8[0xe1] = 0x10925a470;
  extraout_x8[0xe2] = 0x109259490;
  extraout_x8[0xe3] = 0x1092594a4;
  extraout_x8[0xe4] = 0x1092594b8;
  extraout_x8[0xe5] = 0x10925a474;
  extraout_x8[0xe6] = FUN_10925a4a4;
  extraout_x8[0xe7] = 0x10925a4b8;
  extraout_x8[0xe8] = 0x10925a518;
  extraout_x8[0xe9] = 0x10925a51c;
  extraout_x8[0xea] = 0x10925a520;
  extraout_x8[0xeb] = 0x10925a524;
  extraout_x8[0xec] = 0x10925a528;
  extraout_x8[0xed] = 0x10925a52c;
  extraout_x8[0xee] = 0x10925a530;
  extraout_x8[0xef] = 0x10925a534;
  extraout_x8[0xf0] = 0x10925a538;
  extraout_x8[0xf1] = 0x1092593e8;
  extraout_x8[0xf2] = 0x1092593fc;
  extraout_x8[0xf3] = 0x1092593d4;
  extraout_x8[0xf4] = 0x109259410;
  extraout_x8[0xf5] = 0x109259424;
  extraout_x8[0xf6] = 0x10925a4bc;
  extraout_x8[0xf7] = 0x10925a4c0;
  extraout_x8[0xf8] = 0x10925a4c4;
  extraout_x8[0xf9] = 0x10925a4c8;
  extraout_x8[0xfa] = 0x10925a4e0;
  extraout_x8[0xfb] = FUN_109259438;
  extraout_x8[0xfc] = 0x10925943c;
  extraout_x8[0xfd] = 0x10925a4a8;
  extraout_x8[0xfe] = 0x10925a4cc;
  extraout_x8[0xff] = 0x10925a4d0;
  extraout_x8[0x100] = 0x10925a4d4;
  extraout_x8[0x101] = 0x10925a4d8;
  extraout_x8[0x102] = 0x10925a540;
  extraout_x8[0x103] = 0x10925a53c;
  extraout_x8[0x104] = 0x10925a4dc;
  extraout_x8[0x105] = FUN_10925a414;
  extraout_x8[0x106] = 0x10925a418;
  extraout_x8[0x107] = 0x10925a41c;
  extraout_x8[0x108] = 0x10925a420;
  extraout_x8[0x109] = 0x10925a424;
  extraout_x8[0x10a] = 0x10925a428;
  extraout_x8[0x10b] = 0x10925a42c;
  extraout_x8[0x10c] = 0x10925a430;
  extraout_x8[0x10d] = 0x10925a434;
  extraout_x8[0x10e] = 0x10925a438;
  extraout_x8[0x10f] = 0x10925a43c;
  extraout_x8[0x110] = 0x10925a440;
  extraout_x8[0x111] = 0x10925a444;
  extraout_x8[0x112] = FUN_10925a448;
  extraout_x8[0x113] = 0x10925a4ac;
  extraout_x8[0x114] = 0x10925a4b0;
  extraout_x8[0x115] = 0x1092592dc;
  extraout_x8[0x116] = 0x1092592f0;
  extraout_x8[0x117] = 0x10925a4b4;
  extraout_x8[0x118] = 0x10925a464;
  extraout_x8[0x119] = 0x10925a468;
  extraout_x8[0x11a] = 0x10925a478;
  extraout_x8[0x11b] = FUN_10925a47c;
  extraout_x8[0x11c] = 0x10925a490;
  extraout_x8[0x11d] = FUN_1092594f0;
  extraout_x8[0x11e] = 0x109259504;
  extraout_x8[0x11f] = 0x109259518;
  extraout_x8[0x120] = 0x10925952c;
  extraout_x8[0x121] = 0x109259540;
  extraout_x8[0x122] = 0x1092596bc;
  extraout_x8[0x123] = FUN_1092596d0;
  extraout_x8[0x124] = FUN_1092596d4;
  extraout_x8[0x125] = 0x10925a544;
  extraout_x8[0x126] = 0x10925a548;
  extraout_x8[0x128] = 0x10925a54c;
  extraout_x8[0x129] = 0x10925a550;
  extraout_x8[0x12a] = 0x10925a554;
  extraout_x8[0x127] = 0x10925a558;
  extraout_x8[299] = 0x10925a55c;
  extraout_x8[300] = 0x10925a560;
  extraout_x8[0x12d] = 0x10925a564;
  extraout_x8[0x12e] = 0x10925a568;
  extraout_x8[0x12f] = 0x10925a56c;
  extraout_x8[0x130] = 0x10925a570;
  extraout_x8[0x131] = 0x109259978;
  extraout_x8[0x132] = 0x10925a574;
  extraout_x8[0x133] = FUN_109259964;
  extraout_x8[0x134] = 0x10925998c;
  extraout_x8[0x135] = 0x1092599a0;
  extraout_x8[0x136] = 0x1092599b4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_768) {
    return;
  }
  ___stack_chk_fail();
  _bzero(extraout_x8_00,0x7c8);
  FUN_109264810(extraout_x8_00);
  *(undefined2 *)(extraout_x8_00 + 0x6fc) = 0;
  uVar13 = *(undefined4 *)(puVar9 + 3);
  *(undefined8 *)(extraout_x8_00 + 0x700) = 0x100000001;
  *(undefined4 *)(extraout_x8_00 + 0x708) = uVar13;
  *(undefined8 *)(extraout_x8_00 + 0x798) = 1;
  extraout_x8_00[0x790] = *(undefined1 *)((long)puVar9 + 0x3a);
  *(undefined8 *)(extraout_x8_00 + 0x71c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x714) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x72c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x724) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x73c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x734) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x74c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x744) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x75c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x754) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x76c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x764) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x77c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x774) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x784) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x70c) = 0x600000001;
  *(undefined4 *)(extraout_x8_00 + 0x78c) = 2;
  extraout_x8_00[8] = *(undefined1 *)((long)puVar9 + 0x3b);
  extraout_x8_00[1] = *(undefined1 *)((long)puVar9 + 0x3d);
  extraout_x8_00[0x12] = *(undefined1 *)((long)puVar9 + 0x3c);
  extraout_x8_00[0xe] = *(undefined1 *)((long)puVar9 + 0x37);
  if (*(char *)(puVar9 + 0xb) == '\x01') {
    uVar13 = 7;
    if (*(char *)((long)puVar9 + 0x59) == '\0') {
      uVar13 = 3;
    }
    *(undefined4 *)(extraout_x8_00 + 0x14) = uVar13;
  }
  *extraout_x8_00 = *(undefined1 *)((long)puVar9 + 0x33);
  extraout_x8_00[7] = *(undefined1 *)((long)puVar9 + 0x35);
  extraout_x8_00[6] = *(undefined1 *)((long)puVar9 + 0x34);
  extraout_x8_00[5] = *(undefined1 *)((long)puVar9 + 0x3f);
  extraout_x8_00[4] = *(undefined1 *)(puVar9 + 8);
  extraout_x8_00[9] = *(undefined1 *)((long)puVar9 + 0x44);
  extraout_x8_00[2] = *(undefined1 *)((long)puVar9 + 0x36);
  extraout_x8_00[3] = 0;
  extraout_x8_00[0x10] = *(undefined1 *)((long)puVar9 + 0x3e);
  extraout_x8_00[0xd] = *(undefined1 *)((long)puVar9 + 0x29);
  extraout_x8_00[0x3f] = *(undefined1 *)((long)puVar9 + 0x45);
  extraout_x8_00[0x1f] = *(undefined1 *)((long)puVar9 + 0x54);
  extraout_x8_00[0x20] = 1;
  extraout_x8_00[0x1e] = *(undefined1 *)((long)puVar9 + 0x2d);
  extraout_x8_00[0xb] = *(undefined1 *)((long)puVar9 + 0x2e);
  extraout_x8_00[0xc] = 0;
  cVar2 = *(char *)((long)puVar9 + 0x41);
  uVar13 = 1;
  if (cVar2 != '\0') {
    uVar13 = 0xffffffff;
  }
  *(undefined4 *)(extraout_x8_00 + 0xdc) = uVar13;
  extraout_x8_00[0x38] = cVar2;
  extraout_x8_00[0x39] = cVar2;
  uVar3 = *(undefined1 *)((long)puVar9 + 0x42);
  extraout_x8_00[0x3a] = uVar3;
  extraout_x8_00[0x3b] = *(undefined1 *)((long)puVar9 + 0x43);
  extraout_x8_00[0x3c] = uVar3;
  *(undefined4 *)(extraout_x8_00 + 0x24) = 0;
  extraout_x8_00[0x3e] = *(undefined1 *)((long)puVar9 + 0x46);
  extraout_x8_00[0xf] = 0;
  extraout_x8_00[0x11] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[0x1d] = 0;
  *(undefined4 *)(extraout_x8_00 + 300) = 0;
  if (*(char *)((long)puVar9 + 0x5e) == '\x01') {
    fVar26 = *(float *)((long)puVar9 + 0xac);
    if (16.0 <= fVar26) {
      uVar13 = 0x10;
    }
    else if (8.0 <= fVar26) {
      uVar13 = 8;
    }
    else if (4.0 <= fVar26) {
      uVar13 = 4;
    }
    else {
      if (fVar26 < 2.0) goto LAB_109263ff0;
      uVar13 = 2;
    }
    *(undefined4 *)(extraout_x8_00 + 300) = uVar13;
  }
LAB_109263ff0:
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x120) = *(undefined4 *)((long)puVar9 + 0x6c);
  *(undefined8 *)(extraout_x8_00 + 0x124) = 0x400000004;
  extraout_x8_00[0x5c] = *(undefined1 *)(puVar9 + 6);
  extraout_x8_00[0x1c] = 0;
  *(undefined4 *)(extraout_x8_00 + 0x58) = *(undefined4 *)(puVar9 + 0xc);
  extraout_x8_00[0x2c] = 1;
  *(undefined2 *)(extraout_x8_00 + 0x7a0) = 0x101;
  *(undefined2 *)(extraout_x8_00 + 0x2f) = 0;
  uVar13 = 5;
  if (*(char *)((long)puVar9 + 0x4a) == '\0') {
    uVar13 = 1;
  }
  *(undefined4 *)(extraout_x8_00 + 0x34) = uVar13;
  if (*(char *)((long)puVar9 + 0x2c) == '\x01') {
    uStack_f00 = (uint *)((ulong)uStack_f00._4_4_ << 0x20);
    _glGetIntegerv(0x8a2e,&uStack_f00);
    *(uint *)(extraout_x8_00 + 0x70) = (uint)uStack_f00;
    uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
    _glGetIntegerv(0x8a2b,&uStack_f00);
    iStack_ed4 = 0;
    _glGetIntegerv(0x8a2d,&iStack_ed4);
    iVar14 = iStack_ed4;
    if ((int)(uint)uStack_f00 <= iStack_ed4) {
      iVar14 = (uint)uStack_f00;
    }
    *(int *)(extraout_x8_00 + 0x6c) = iVar14;
    uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
    _glGetIntegerv(0x8a31,&uStack_f00);
    *(long *)(extraout_x8_00 + 0x78) = (long)(int)(uint)uStack_f00 << 2;
    uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
    _glGetIntegerv(0x8a33,&uStack_f00);
    *(long *)(extraout_x8_00 + 0x80) = (long)(int)(uint)uStack_f00 << 2;
    uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
    _glGetIntegerv(0x8a30,&uStack_f00);
    *(long *)(extraout_x8_00 + 0x90) = (long)(int)(uint)uStack_f00;
    *(long *)(extraout_x8_00 + 0x98) = (long)(int)(uint)uStack_f00;
    uStack_f00 = (uint *)CONCAT44(uStack_f00._4_4_,1);
    _glGetIntegerv(0x8a34,&uStack_f00);
    lVar17 = (long)(int)(uint)uStack_f00;
  }
  else {
    *(undefined8 *)(extraout_x8_00 + 0x6c) = 0x180000000c;
    uStack_f00 = (uint *)((ulong)uStack_f00._4_4_ << 0x20);
    _glGetIntegerv(0x8dfb,&uStack_f00);
    *(long *)(extraout_x8_00 + 0x78) = (long)(int)(uint)uStack_f00 << 4;
    uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
    _glGetIntegerv(0x8dfd,&uStack_f00);
    *(long *)(extraout_x8_00 + 0x80) = (long)(int)(uint)uStack_f00 << 4;
    *(undefined8 *)(extraout_x8_00 + 0x90) = *(undefined8 *)(extraout_x8_00 + 0x78);
    *(long *)(extraout_x8_00 + 0x98) = (long)(int)(uint)uStack_f00 << 4;
    lVar17 = 1;
  }
  uVar13 = 0;
  *(long *)(extraout_x8_00 + 0x118) = lVar17;
  *(undefined8 *)(extraout_x8_00 + 0xe8) = 0x2000000020;
  uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
  if (*(int *)((long)puVar9 + 0x14) != 1) {
    _glGetIntegerv(0x8b4c,&uStack_f00);
    uVar13 = SUB84(uStack_f00,0);
  }
  *(undefined4 *)(extraout_x8_00 + 0xa8) = uVar13;
  *(undefined4 *)(extraout_x8_00 + 0xb8) = uVar13;
  uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
  _glGetIntegerv(0x8872,&uStack_f00);
  *(uint *)(extraout_x8_00 + 0xac) = (uint)uStack_f00;
  *(uint *)(extraout_x8_00 + 0xbc) = (uint)uStack_f00;
  uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
  _glGetIntegerv(0x8b4d,&uStack_f00);
  *(uint *)(extraout_x8_00 + 0xb4) = (uint)uStack_f00;
  *(uint *)(extraout_x8_00 + 0xc4) = (uint)uStack_f00;
  uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
  _glGetIntegerv(0x8869,&uStack_f00);
  *(uint *)(extraout_x8_00 + 0xcc) = (uint)uStack_f00;
  *(uint *)(extraout_x8_00 + 0xd0) = (uint)uStack_f00;
  uStack_f00 = (uint *)((ulong)uStack_f00 & 0xffffffff00000000);
  _glGetIntegerv(0xd33,&uStack_f00);
  bVar7 = false;
  uVar21 = (uint)uStack_f00;
  if ((uint)uStack_f00 < 0x41) {
    uVar21 = 0x40;
  }
  uVar16 = (uint)uStack_f00;
  if ((uint)uStack_f00 < 0x11) {
    uVar16 = 0x10;
  }
  uVar13 = *(undefined4 *)((long)puVar9 + 100);
  *(undefined4 *)(extraout_x8_00 + 0x50) = *(undefined4 *)(puVar9 + 0xd);
  *(uint *)(extraout_x8_00 + 0x54) = uVar16;
  *(undefined4 *)(extraout_x8_00 + 0x48) = uVar13;
  *(uint *)(extraout_x8_00 + 0x4c) = uVar21;
  *(undefined8 *)(extraout_x8_00 + 0x60) = *(undefined8 *)((long)puVar9 + 0x74);
  *(undefined4 *)(extraout_x8_00 + 0x68) = *(undefined4 *)((long)puVar9 + 0x7c);
  iVar14 = *(int *)(puVar9 + 0x12);
  uVar28 = *(undefined8 *)((long)puVar9 + 0xa4);
  uVar27 = *(undefined8 *)((long)puVar9 + 0x9c);
  *(undefined8 *)(extraout_x8_00 + 0xf8) = *(undefined8 *)((long)puVar9 + 0x94);
  *(ulong *)(extraout_x8_00 + 0xf0) = CONCAT44(iVar14,iVar14);
  *(undefined8 *)(extraout_x8_00 + 0x108) = uVar28;
  *(undefined8 *)(extraout_x8_00 + 0x100) = uVar27;
  *(undefined4 *)(extraout_x8_00 + 200) = 0xffff;
  *(undefined8 *)(extraout_x8_00 + 0xd4) = 0x7ff000007ff;
  if (*(char *)((long)puVar9 + 0x4f) == '\x01') {
    bVar7 = *(int *)((long)puVar9 + 0x14) != 0xd;
  }
  extraout_x8_00[0x110] = bVar7;
  extraout_x8_00[0x111] = 1;
  uVar27 = puVar9[0x17];
  uVar29 = puVar9[0x1a];
  uVar28 = puVar9[0x19];
  *(undefined8 *)(extraout_x8_00 + 0x6dc) = puVar9[0x18];
  *(undefined8 *)(extraout_x8_00 + 0x6d4) = uVar27;
  *(undefined8 *)(extraout_x8_00 + 0x6ec) = uVar29;
  *(undefined8 *)(extraout_x8_00 + 0x6e4) = uVar28;
  *(undefined8 *)(extraout_x8_00 + 0x6f4) = puVar9[0x1b];
  *(undefined4 *)(extraout_x8_00 + 0x160) = 1;
  *(undefined2 *)(extraout_x8_00 + 0x144) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x13c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x148) = 0;
  *(undefined2 *)(extraout_x8_00 + 0x150) = 0;
  *(undefined2 *)(extraout_x8_00 + 0x15c) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x154) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x130) = 0x100000005;
  uVar3 = *(undefined1 *)((long)puVar9 + 0x5d);
  extraout_x8_00[0x138] = uVar3;
  extraout_x8_00[0x139] = uVar3;
  if (iVar14 != 0) {
    *(undefined4 *)(extraout_x8_00 + 0x130) = 7;
  }
  lVar17 = 0x164;
  do {
    *(undefined8 *)((long)(extraout_x8_00 + lVar17) + 8) = 0x100000001;
    *(undefined8 *)(extraout_x8_00 + lVar17) = 0x100000000;
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x6d4);
  lVar17 = 0;
  piVar19 = (int *)(puVar9 + 0x1e);
  lVar22 = 0xf0;
  lVar24 = 0x660;
  lVar25 = 0x250;
  puVar15 = (uint *)&UNK_110ae4714;
  do {
    uVar21 = *puVar15;
    piVar1 = (int *)((long)puVar9 + lVar25);
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      if (*(int *)((long)puVar9 + lVar22) != 0) {
        uVar16 = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x24;
        if ((uVar21 & 1) != 0) {
          uVar16 = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x30;
        }
        goto LAB_1092643f0;
      }
    }
    else {
      bVar4 = *(byte *)((long)puVar9 + lVar24);
      if ((bVar4 >> 1 & 1) != 0) {
        *(uint *)(extraout_x8_00 + lVar17 + 0x164) =
             *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x100;
      }
      if ((bVar4 >> 4 & 1) != 0) {
        *(uint *)(extraout_x8_00 + lVar17 + 0x164) =
             *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x400;
      }
      if ((bVar4 >> 2 & 1) != 0) {
        *(uint *)(extraout_x8_00 + lVar17 + 0x164) =
             *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x60;
      }
      if ((bVar4 & 1) != 0) {
        *(uint *)(extraout_x8_00 + lVar17 + 0x164) =
             *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x200;
      }
      if ((bVar4 >> 3 & 1) != 0) {
        uVar16 = 4;
        if ((uVar21 & 1) != 0) {
          uVar16 = 0x10;
        }
        *(uint *)(extraout_x8_00 + lVar17 + 0x164) =
             *(uint *)(extraout_x8_00 + lVar17 + 0x164) | uVar16;
      }
      cVar2 = *(char *)((long)puVar9 + lVar24 + 1);
      if (cVar2 == '\x02') {
        uVar16 = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 3;
      }
      else {
        if (cVar2 != '\x01') goto LAB_1092643f4;
        uVar16 = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 1;
      }
LAB_1092643f0:
      *(uint *)(extraout_x8_00 + lVar17 + 0x164) = uVar16;
    }
LAB_1092643f4:
    *(undefined8 *)(extraout_x8_00 + lVar17 + 0x168) = 0x100000001;
    *(undefined4 *)(extraout_x8_00 + lVar17 + 0x170) = 1;
    if (*(int *)((long)puVar9 + lVar22) != 0) {
      puVar10 = puVar9 + 4;
      FUN_109264940(puVar10,0x8d41);
      *(int *)(extraout_x8_00 + lVar17 + 0x168) = (int)puVar10;
      *(uint *)(extraout_x8_00 + lVar17 + 0x164) = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x80
      ;
      iVar14 = *(int *)((long)puVar9 + lVar25);
    }
    if ((iVar14 != 0) && (*(char *)((long)puVar9 + lVar24 + 1) == '\x03')) {
      puVar10 = puVar9 + 4;
      FUN_109264940(puVar10,0x9100,piVar1[-1]);
      *(int *)(extraout_x8_00 + lVar17 + 0x16c) = (int)puVar10;
      puVar10 = puVar9 + 4;
      FUN_109264940(puVar10,0x9102,piVar1[-1]);
      *(int *)(extraout_x8_00 + lVar17 + 0x170) = (int)puVar10;
      *(uint *)(extraout_x8_00 + lVar17 + 0x164) = *(uint *)(extraout_x8_00 + lVar17 + 0x164) | 0x80
      ;
    }
    lVar17 = lVar17 + 0x10;
    lVar22 = lVar22 + 4;
    lVar24 = lVar24 + 2;
    lVar25 = lVar25 + 0xc;
    puVar15 = puVar15 + 8;
    if (lVar17 == 0x570) {
      *(undefined8 *)(extraout_x8_00 + 0x3cc) = 0x100000001;
      *(undefined8 *)(extraout_x8_00 + 0x3c4) = 0x100000043;
      if (((*(byte *)((long)puVar9 + 0x47) & 1) == 0) && ((*(byte *)(puVar9 + 9) & 1) == 0)) {
        if (*(char *)((long)puVar9 + 0x49) != '\x01') {
          return;
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      uVar21 = 1;
      lVar17 = 0x168;
      do {
        if (uVar21 <= *(uint *)(extraout_x8_00 + lVar17)) {
          uVar21 = *(uint *)(extraout_x8_00 + lVar17);
        }
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != 0x6d8);
      if ((*(byte *)((long)puVar9 + 0x47) & 1) == 0) {
        uVar16 = 0xffffffff;
      }
      else if (*(int *)(puVar9 + 4) == 0x3fc || uVar21 < 2) {
        uVar16 = 1;
      }
      else {
        uStack_f00 = (uint *)0x0;
        puStack_ef8 = (uint *)0x0;
        uVar16 = 1;
        lVar17 = 0xf0;
        uStack_ef0 = 0;
        do {
          if (*piVar19 != 0) {
            iStack_ed4 = 0;
            _glGetInternalformativ(0x8d41,*piVar19,0x9380,1,&iStack_ed4);
            if (0 < iStack_ed4) {
              func_0x000108a5942c(&uStack_f00);
              _glGetInternalformativ(0x8d41,*piVar19,0x80a9,iStack_ed4,uStack_f00);
              puVar15 = uStack_f00;
              while (puVar15 != puStack_ef8) {
                uVar20 = *puVar15;
                if ((uVar20 & uVar20 - 1) != 0 || 0x3f < uVar20 - 1) {
                  uVar20 = 0;
                }
                uVar16 = uVar20 | uVar16;
                puVar15 = puVar15 + 1;
              }
            }
          }
          lVar17 = lVar17 + 4;
          piVar19 = (int *)((long)puVar9 + lVar17);
        } while (lVar17 != 0x24c);
        if (uStack_f00 != (uint *)0x0) {
          puStack_ef8 = uStack_f00;
          __ZdlPv();
        }
      }
      iStack_ed4 = 0;
      if (bVar7) {
        _glGetIntegerv(0x955f,&iStack_ed4);
      }
      uVar20 = 1;
      do {
        if ((uVar20 & uVar16) != 0) {
          uStack_ee0 = 0;
          puStack_ef8 = (uint *)0x0;
          uStack_f00 = (uint *)0x0;
          uStack_ee8 = 0;
          uStack_ef0 = 0;
          iStack_f04 = 0;
          if (*(char *)((long)puVar9 + 0x47) == '\x01') {
            (*pcRam0000000113829e30)(uVar20,9,&iStack_f04,&uStack_f00);
          }
          uVar23 = 1;
          do {
            uVar8 = (int)uVar23 - 3;
            if (uVar8 < 6) {
              uVar11 = (ulong)*(uint *)(&UNK_10dfbfbcc + (ulong)uVar8 * 4);
            }
            else {
              uVar11 = 1;
            }
            uVar8 = (uint)uVar11;
            if (uVar23 < 9) {
              uVar12 = *(uint *)(&UNK_10dfbfbe4 + (ulong)((int)uVar23 - 1) * 4);
            }
            else {
              uVar12 = 1;
            }
            if (*(char *)((long)puVar9 + 0x47) == '\x01') {
              uVar5 = iStack_f04 - 1;
              if (0 < iStack_f04) {
                bVar6 = false;
                if (7 < uVar5) {
                  uVar5 = 8;
                }
                uVar18 = (ulong)(uVar5 + 1);
                piVar19 = (int *)&uStack_f00;
                do {
                  iVar14 = 0;
                  if (((uVar8 < 5) && ((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0)) &&
                     ((iVar14 = 0, uVar12 < 5 && ((1 << (ulong)(uVar12 & 0x1f) & 0x16U) != 0)))) {
                    iVar14 = *(int *)(&UNK_10dfbfba8 +
                                     (ulong)((int)(uVar11 >> 1) * 2 + (uVar8 >> 1) + (uVar12 >> 1))
                                     * 4);
                  }
                  bVar6 = (bool)(bVar6 | *piVar19 == iVar14);
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 1;
                } while (uVar18 != 0);
                if (bVar6) goto LAB_109264780;
              }
            }
            else if (bVar7) {
              if ((uVar8 < 5) &&
                 (((((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0 && (uVar12 < 5)) &&
                   ((1 << (ulong)(uVar12 & 0x1f) & 0x16U) != 0)) &&
                  ((((uVar8 & 0xfffffffe) + (uVar8 >> 1) + (uVar12 >> 1) & 0x1b) != 2 &&
                   ((int)(uVar8 * uVar20 * uVar12) <= iStack_ed4)))))) {
LAB_109264780:
                *(uint *)(extraout_x8_00 + uVar23 * 4 + 0x7a4) =
                     *(uint *)(extraout_x8_00 + uVar23 * 4 + 0x7a4) | uVar20;
                if (uVar20 == 1) {
                  uVar11 = uVar23;
                  FUN_10922e6d8();
                  *(uint *)(extraout_x8_00 + 0x18) = *(uint *)(extraout_x8_00 + 0x18) | (uint)uVar11
                  ;
                }
              }
            }
            else if ((*(char *)(puVar9 + 9) == '\x01') && (FUN_10924955c(), uVar8 != 0))
            goto LAB_109264780;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 9);
        }
        if ((0x20 < uVar20) || (uVar20 = uVar20 << 1, uVar21 < uVar20)) {
          return;
        }
      } while( true );
    }
  } while( true );
}



/* Entry: 109263df0; end: 10926480f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109263df0(undefined1 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iStack_a4;
  undefined8 uStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_74;
  
  _bzero(param_1,0x7c8);
  FUN_109264810(param_1);
  *(undefined2 *)(param_1 + 0x6fc) = 0;
  uVar12 = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x700) = 0x100000001;
  *(undefined4 *)(param_1 + 0x708) = uVar12;
  *(undefined8 *)(param_1 + 0x798) = 1;
  param_1[0x790] = *(undefined1 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x71c) = 0;
  *(undefined8 *)(param_1 + 0x714) = 0;
  *(undefined8 *)(param_1 + 0x72c) = 0;
  *(undefined8 *)(param_1 + 0x724) = 0;
  *(undefined8 *)(param_1 + 0x73c) = 0;
  *(undefined8 *)(param_1 + 0x734) = 0;
  *(undefined8 *)(param_1 + 0x74c) = 0;
  *(undefined8 *)(param_1 + 0x744) = 0;
  *(undefined8 *)(param_1 + 0x75c) = 0;
  *(undefined8 *)(param_1 + 0x754) = 0;
  *(undefined8 *)(param_1 + 0x76c) = 0;
  *(undefined8 *)(param_1 + 0x764) = 0;
  *(undefined8 *)(param_1 + 0x77c) = 0;
  *(undefined8 *)(param_1 + 0x774) = 0;
  *(undefined8 *)(param_1 + 0x784) = 0;
  *(undefined8 *)(param_1 + 0x70c) = 0x600000001;
  *(undefined4 *)(param_1 + 0x78c) = 2;
  param_1[8] = *(undefined1 *)(param_2 + 0x3b);
  param_1[1] = *(undefined1 *)(param_2 + 0x3d);
  param_1[0x12] = *(undefined1 *)(param_2 + 0x3c);
  param_1[0xe] = *(undefined1 *)(param_2 + 0x37);
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar12 = 7;
    if (*(char *)(param_2 + 0x59) == '\0') {
      uVar12 = 3;
    }
    *(undefined4 *)(param_1 + 0x14) = uVar12;
  }
  *param_1 = *(undefined1 *)(param_2 + 0x33);
  param_1[7] = *(undefined1 *)(param_2 + 0x35);
  param_1[6] = *(undefined1 *)(param_2 + 0x34);
  param_1[5] = *(undefined1 *)(param_2 + 0x3f);
  param_1[4] = *(undefined1 *)(param_2 + 0x40);
  param_1[9] = *(undefined1 *)(param_2 + 0x44);
  param_1[2] = *(undefined1 *)(param_2 + 0x36);
  param_1[3] = 0;
  param_1[0x10] = *(undefined1 *)(param_2 + 0x3e);
  param_1[0xd] = *(undefined1 *)(param_2 + 0x29);
  param_1[0x3f] = *(undefined1 *)(param_2 + 0x45);
  param_1[0x1f] = *(undefined1 *)(param_2 + 0x54);
  param_1[0x20] = 1;
  param_1[0x1e] = *(undefined1 *)(param_2 + 0x2d);
  param_1[0xb] = *(undefined1 *)(param_2 + 0x2e);
  param_1[0xc] = 0;
  cVar2 = *(char *)(param_2 + 0x41);
  uVar12 = 1;
  if (cVar2 != '\0') {
    uVar12 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar12;
  param_1[0x38] = cVar2;
  param_1[0x39] = cVar2;
  uVar3 = *(undefined1 *)(param_2 + 0x42);
  param_1[0x3a] = uVar3;
  param_1[0x3b] = *(undefined1 *)(param_2 + 0x43);
  param_1[0x3c] = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x3e] = *(undefined1 *)(param_2 + 0x46);
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    fVar25 = *(float *)(param_2 + 0xac);
    if (16.0 <= fVar25) {
      uVar12 = 0x10;
    }
    else if (8.0 <= fVar25) {
      uVar12 = 8;
    }
    else if (4.0 <= fVar25) {
      uVar12 = 4;
    }
    else {
      if (fVar25 < 2.0) goto LAB_109263ff0;
      uVar12 = 2;
    }
    *(undefined4 *)(param_1 + 300) = uVar12;
  }
LAB_109263ff0:
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x124) = 0x400000004;
  param_1[0x5c] = *(undefined1 *)(param_2 + 0x30);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x60);
  param_1[0x2c] = 1;
  *(undefined2 *)(param_1 + 0x7a0) = 0x101;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  uVar12 = 5;
  if (*(char *)(param_2 + 0x4a) == '\0') {
    uVar12 = 1;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    uStack_a0 = (uint *)((ulong)uStack_a0._4_4_ << 0x20);
    _glGetIntegerv(0x8a2e,&uStack_a0);
    *(uint *)(param_1 + 0x70) = (uint)uStack_a0;
    uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
    _glGetIntegerv(0x8a2b,&uStack_a0);
    iStack_74 = 0;
    _glGetIntegerv(0x8a2d,&iStack_74);
    iVar13 = iStack_74;
    if ((int)(uint)uStack_a0 <= iStack_74) {
      iVar13 = (uint)uStack_a0;
    }
    *(int *)(param_1 + 0x6c) = iVar13;
    uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
    _glGetIntegerv(0x8a31,&uStack_a0);
    *(long *)(param_1 + 0x78) = (long)(int)(uint)uStack_a0 << 2;
    uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
    _glGetIntegerv(0x8a33,&uStack_a0);
    *(long *)(param_1 + 0x80) = (long)(int)(uint)uStack_a0 << 2;
    uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
    _glGetIntegerv(0x8a30,&uStack_a0);
    *(long *)(param_1 + 0x90) = (long)(int)(uint)uStack_a0;
    *(long *)(param_1 + 0x98) = (long)(int)(uint)uStack_a0;
    uStack_a0 = (uint *)CONCAT44(uStack_a0._4_4_,1);
    _glGetIntegerv(0x8a34,&uStack_a0);
    lVar16 = (long)(int)(uint)uStack_a0;
  }
  else {
    *(undefined8 *)(param_1 + 0x6c) = 0x180000000c;
    uStack_a0 = (uint *)((ulong)uStack_a0._4_4_ << 0x20);
    _glGetIntegerv(0x8dfb,&uStack_a0);
    *(long *)(param_1 + 0x78) = (long)(int)(uint)uStack_a0 << 4;
    uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
    _glGetIntegerv(0x8dfd,&uStack_a0);
    *(long *)(param_1 + 0x80) = (long)(int)(uint)uStack_a0 << 4;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x98) = (long)(int)(uint)uStack_a0 << 4;
    lVar16 = 1;
  }
  uVar12 = 0;
  *(long *)(param_1 + 0x118) = lVar16;
  *(undefined8 *)(param_1 + 0xe8) = 0x2000000020;
  uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
  if (*(int *)(param_2 + 0x14) != 1) {
    _glGetIntegerv(0x8b4c,&uStack_a0);
    uVar12 = SUB84(uStack_a0,0);
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar12;
  *(undefined4 *)(param_1 + 0xb8) = uVar12;
  uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
  _glGetIntegerv(0x8872,&uStack_a0);
  *(uint *)(param_1 + 0xac) = (uint)uStack_a0;
  *(uint *)(param_1 + 0xbc) = (uint)uStack_a0;
  uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
  _glGetIntegerv(0x8b4d,&uStack_a0);
  *(uint *)(param_1 + 0xb4) = (uint)uStack_a0;
  *(uint *)(param_1 + 0xc4) = (uint)uStack_a0;
  uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
  _glGetIntegerv(0x8869,&uStack_a0);
  *(uint *)(param_1 + 0xcc) = (uint)uStack_a0;
  *(uint *)(param_1 + 0xd0) = (uint)uStack_a0;
  uStack_a0 = (uint *)((ulong)uStack_a0 & 0xffffffff00000000);
  _glGetIntegerv(0xd33,&uStack_a0);
  bVar7 = false;
  uVar20 = (uint)uStack_a0;
  if ((uint)uStack_a0 < 0x41) {
    uVar20 = 0x40;
  }
  uVar15 = (uint)uStack_a0;
  if ((uint)uStack_a0 < 0x11) {
    uVar15 = 0x10;
  }
  uVar12 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x68);
  *(uint *)(param_1 + 0x54) = uVar15;
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  *(uint *)(param_1 + 0x4c) = uVar20;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x7c);
  iVar13 = *(int *)(param_2 + 0x90);
  uVar27 = *(undefined8 *)(param_2 + 0xa4);
  uVar26 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x94);
  *(ulong *)(param_1 + 0xf0) = CONCAT44(iVar13,iVar13);
  *(undefined8 *)(param_1 + 0x108) = uVar27;
  *(undefined8 *)(param_1 + 0x100) = uVar26;
  *(undefined4 *)(param_1 + 200) = 0xffff;
  *(undefined8 *)(param_1 + 0xd4) = 0x7ff000007ff;
  if (*(char *)(param_2 + 0x4f) == '\x01') {
    bVar7 = *(int *)(param_2 + 0x14) != 0xd;
  }
  param_1[0x110] = bVar7;
  param_1[0x111] = 1;
  uVar26 = *(undefined8 *)(param_2 + 0xb8);
  uVar28 = *(undefined8 *)(param_2 + 0xd0);
  uVar27 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0x6dc) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x6d4) = uVar26;
  *(undefined8 *)(param_1 + 0x6ec) = uVar28;
  *(undefined8 *)(param_1 + 0x6e4) = uVar27;
  *(undefined8 *)(param_1 + 0x6f4) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined2 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(undefined2 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0x100000005;
  uVar3 = *(undefined1 *)(param_2 + 0x5d);
  param_1[0x138] = uVar3;
  param_1[0x139] = uVar3;
  if (iVar13 != 0) {
    *(undefined4 *)(param_1 + 0x130) = 7;
  }
  lVar16 = 0x164;
  do {
    *(undefined8 *)((long)(param_1 + lVar16) + 8) = 0x100000001;
    *(undefined8 *)(param_1 + lVar16) = 0x100000000;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x6d4);
  lVar16 = 0;
  piVar18 = (int *)(param_2 + 0xf0);
  lVar21 = 0xf0;
  lVar23 = 0x660;
  lVar24 = 0x250;
  puVar14 = (uint *)&UNK_110ae4714;
  do {
    uVar20 = *puVar14;
    piVar1 = (int *)(param_2 + lVar24);
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      if (*(int *)(param_2 + lVar21) != 0) {
        uVar15 = *(uint *)(param_1 + lVar16 + 0x164) | 0x24;
        if ((uVar20 & 1) != 0) {
          uVar15 = *(uint *)(param_1 + lVar16 + 0x164) | 0x30;
        }
        goto LAB_1092643f0;
      }
    }
    else {
      bVar4 = *(byte *)(param_2 + lVar23);
      if ((bVar4 >> 1 & 1) != 0) {
        *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x100;
      }
      if ((bVar4 >> 4 & 1) != 0) {
        *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x400;
      }
      if ((bVar4 >> 2 & 1) != 0) {
        *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x60;
      }
      if ((bVar4 & 1) != 0) {
        *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x200;
      }
      if ((bVar4 >> 3 & 1) != 0) {
        uVar15 = 4;
        if ((uVar20 & 1) != 0) {
          uVar15 = 0x10;
        }
        *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | uVar15;
      }
      cVar2 = *(char *)(param_2 + lVar23 + 1);
      if (cVar2 == '\x02') {
        uVar15 = *(uint *)(param_1 + lVar16 + 0x164) | 3;
      }
      else {
        if (cVar2 != '\x01') goto LAB_1092643f4;
        uVar15 = *(uint *)(param_1 + lVar16 + 0x164) | 1;
      }
LAB_1092643f0:
      *(uint *)(param_1 + lVar16 + 0x164) = uVar15;
    }
LAB_1092643f4:
    *(undefined8 *)(param_1 + lVar16 + 0x168) = 0x100000001;
    *(undefined4 *)(param_1 + lVar16 + 0x170) = 1;
    if (*(int *)(param_2 + lVar21) != 0) {
      lVar9 = param_2 + 0x20;
      FUN_109264940(lVar9,0x8d41);
      *(int *)(param_1 + lVar16 + 0x168) = (int)lVar9;
      *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x80;
      iVar13 = *(int *)(param_2 + lVar24);
    }
    if ((iVar13 != 0) && (*(char *)(param_2 + lVar23 + 1) == '\x03')) {
      lVar9 = param_2 + 0x20;
      FUN_109264940(lVar9,0x9100,piVar1[-1]);
      *(int *)(param_1 + lVar16 + 0x16c) = (int)lVar9;
      lVar9 = param_2 + 0x20;
      FUN_109264940(lVar9,0x9102,piVar1[-1]);
      *(int *)(param_1 + lVar16 + 0x170) = (int)lVar9;
      *(uint *)(param_1 + lVar16 + 0x164) = *(uint *)(param_1 + lVar16 + 0x164) | 0x80;
    }
    lVar16 = lVar16 + 0x10;
    lVar21 = lVar21 + 4;
    lVar23 = lVar23 + 2;
    lVar24 = lVar24 + 0xc;
    puVar14 = puVar14 + 8;
    if (lVar16 == 0x570) {
      *(undefined8 *)(param_1 + 0x3cc) = 0x100000001;
      *(undefined8 *)(param_1 + 0x3c4) = 0x100000043;
      if (((*(byte *)(param_2 + 0x47) & 1) == 0) && ((*(byte *)(param_2 + 0x48) & 1) == 0)) {
        if (*(char *)(param_2 + 0x49) != '\x01') {
          return;
        }
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      uVar20 = 1;
      lVar16 = 0x168;
      do {
        if (uVar20 <= *(uint *)(param_1 + lVar16)) {
          uVar20 = *(uint *)(param_1 + lVar16);
        }
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x6d8);
      if ((*(byte *)(param_2 + 0x47) & 1) == 0) {
        uVar15 = 0xffffffff;
      }
      else if (*(int *)(param_2 + 0x20) == 0x3fc || uVar20 < 2) {
        uVar15 = 1;
      }
      else {
        uStack_a0 = (uint *)0x0;
        puStack_98 = (uint *)0x0;
        uVar15 = 1;
        lVar16 = 0xf0;
        uStack_90 = 0;
        do {
          if (*piVar18 != 0) {
            iStack_74 = 0;
            _glGetInternalformativ(0x8d41,*piVar18,0x9380,1,&iStack_74);
            if (0 < iStack_74) {
              func_0x000108a5942c(&uStack_a0);
              _glGetInternalformativ(0x8d41,*piVar18,0x80a9,iStack_74,uStack_a0);
              puVar14 = uStack_a0;
              while (puVar14 != puStack_98) {
                uVar19 = *puVar14;
                if ((uVar19 & uVar19 - 1) != 0 || 0x3f < uVar19 - 1) {
                  uVar19 = 0;
                }
                uVar15 = uVar19 | uVar15;
                puVar14 = puVar14 + 1;
              }
            }
          }
          lVar16 = lVar16 + 4;
          piVar18 = (int *)(param_2 + lVar16);
        } while (lVar16 != 0x24c);
        if (uStack_a0 != (uint *)0x0) {
          puStack_98 = uStack_a0;
          __ZdlPv();
        }
      }
      iStack_74 = 0;
      if (bVar7) {
        _glGetIntegerv(0x955f,&iStack_74);
      }
      uVar19 = 1;
      do {
        if ((uVar19 & uVar15) != 0) {
          uStack_80 = 0;
          puStack_98 = (uint *)0x0;
          uStack_a0 = (uint *)0x0;
          uStack_88 = 0;
          uStack_90 = 0;
          iStack_a4 = 0;
          if (*(char *)(param_2 + 0x47) == '\x01') {
            (*pcRam0000000113829e30)(uVar19,9,&iStack_a4,&uStack_a0);
          }
          uVar22 = 1;
          do {
            uVar8 = (int)uVar22 - 3;
            if (uVar8 < 6) {
              uVar10 = (ulong)*(uint *)(&UNK_10dfbfbcc + (ulong)uVar8 * 4);
            }
            else {
              uVar10 = 1;
            }
            uVar8 = (uint)uVar10;
            if (uVar22 < 9) {
              uVar11 = *(uint *)(&UNK_10dfbfbe4 + (ulong)((int)uVar22 - 1) * 4);
            }
            else {
              uVar11 = 1;
            }
            if (*(char *)(param_2 + 0x47) == '\x01') {
              uVar5 = iStack_a4 - 1;
              if (0 < iStack_a4) {
                bVar6 = false;
                if (7 < uVar5) {
                  uVar5 = 8;
                }
                uVar17 = (ulong)(uVar5 + 1);
                piVar18 = (int *)&uStack_a0;
                do {
                  iVar13 = 0;
                  if (((uVar8 < 5) && ((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0)) &&
                     ((iVar13 = 0, uVar11 < 5 && ((1 << (ulong)(uVar11 & 0x1f) & 0x16U) != 0)))) {
                    iVar13 = *(int *)(&UNK_10dfbfba8 +
                                     (ulong)((int)(uVar10 >> 1) * 2 + (uVar8 >> 1) + (uVar11 >> 1))
                                     * 4);
                  }
                  bVar6 = (bool)(bVar6 | *piVar18 == iVar13);
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 1;
                } while (uVar17 != 0);
                if (bVar6) goto LAB_109264780;
              }
            }
            else if (bVar7) {
              if ((uVar8 < 5) &&
                 (((((1 << (ulong)(uVar8 & 0x1f) & 0x16U) != 0 && (uVar11 < 5)) &&
                   ((1 << (ulong)(uVar11 & 0x1f) & 0x16U) != 0)) &&
                  ((((uVar8 & 0xfffffffe) + (uVar8 >> 1) + (uVar11 >> 1) & 0x1b) != 2 &&
                   ((int)(uVar8 * uVar19 * uVar11) <= iStack_74)))))) {
LAB_109264780:
                *(uint *)(param_1 + uVar22 * 4 + 0x7a4) =
                     *(uint *)(param_1 + uVar22 * 4 + 0x7a4) | uVar19;
                if (uVar19 == 1) {
                  uVar10 = uVar22;
                  FUN_10922e6d8();
                  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | (uint)uVar10;
                }
              }
            }
            else if ((*(char *)(param_2 + 0x48) == '\x01') && (FUN_10924955c(), uVar8 != 0))
            goto LAB_109264780;
            uVar22 = uVar22 + 1;
          } while (uVar22 != 9);
        }
        if ((0x20 < uVar19) || (uVar19 = uVar19 << 1, uVar20 < uVar19)) {
          return;
        }
      } while( true );
    }
  } while( true );
}



/* Entry: 109264810; end: 10926493f;  */

undefined8 * FUN_109264810(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  param_1[7] = 0;
  param_1[8] = 0x100000001;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  param_1[0xd] = 0xc00000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x18;
  param_1[0x10] = 0x100;
  param_1[0xf] = 0x800;
  param_1[0x11] = 0x100;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x13] = 0x100;
  param_1[0x12] = 0x800;
  param_1[0x14] = 0x100;
  param_1[0x16] = 0x800000000;
  param_1[0x15] = 0x800000000;
  param_1[0x18] = 0x800000000;
  param_1[0x17] = 0x800000000;
  param_1[0x1a] = 0x7ff00000008;
  param_1[0x19] = 0x80000ffff;
  param_1[0x1c] = 0xffffffff00000004;
  param_1[0x1b] = 0x1000007ff;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x102) = 0;
  param_1[0x23] = 1;
  param_1[0x24] = 0x100000001;
  _bzero(param_1 + 0x25,0x5ac);
  lVar1 = 0x164;
  do {
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0x100000001;
    *(undefined8 *)((long)param_1 + lVar1) = 0x100000000;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x6d4);
  *(undefined8 *)((long)param_1 + 0x6f6) = 0;
  *(undefined8 *)((long)param_1 + 0x6ee) = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0;
  *(undefined8 *)((long)param_1 + 0x6d4) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = 0;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined8 *)((long)param_1 + 0x70c) = 0;
  *(undefined8 *)((long)param_1 + 0x704) = 0;
  *(undefined8 *)((long)param_1 + 0x71c) = 0;
  *(undefined8 *)((long)param_1 + 0x714) = 0;
  *(undefined8 *)((long)param_1 + 0x72c) = 0;
  *(undefined8 *)((long)param_1 + 0x724) = 0;
  *(undefined8 *)((long)param_1 + 0x73c) = 0;
  *(undefined8 *)((long)param_1 + 0x734) = 0;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined8 *)((long)param_1 + 0x744) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0;
  *(undefined8 *)((long)param_1 + 0x77c) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0;
  *(undefined8 *)((long)param_1 + 0x789) = 0;
  *(undefined8 *)((long)param_1 + 0x781) = 0;
  param_1[0xf3] = 1;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)((long)param_1 + 0x7c4) = 0;
  *(undefined8 *)((long)param_1 + 0x7ac) = 0;
  *(undefined8 *)((long)param_1 + 0x7a4) = 0;
  *(undefined8 *)((long)param_1 + 0x7bc) = 0;
  *(undefined8 *)((long)param_1 + 0x7b4) = 0;
  return param_1;
}



/* Entry: 109264940; end: 109264aaf;  */

undefined8 FUN_109264940(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar8;
  uint *puStack_50;
  uint *puStack_48;
  int iStack_34;
  uint *puVar7;
  
  iStack_34 = 0;
  (**(code **)(param_1 + 2000))(param_2,param_3,0x9380,1,&iStack_34);
  FUN_10925b8c4(&puStack_50,(long)iStack_34);
  (**(code **)(param_1 + 2000))(param_2,param_3,0x80a9,iStack_34,puStack_50);
  puVar4 = puStack_50;
  if (puStack_50 != puStack_48 && puStack_50 + 1 != puStack_48) {
    puVar3 = puStack_50;
    puVar6 = puStack_50 + 1;
    uVar5 = *puStack_50;
    do {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      uVar1 = uVar5;
      if ((int)uVar5 <= (int)uVar2) {
        uVar1 = uVar2;
      }
      puVar4 = puVar6;
      if ((int)uVar2 <= (int)uVar5) {
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
      puVar6 = puVar7;
      uVar5 = uVar1;
    } while (puVar7 != puStack_48);
  }
  if (puVar4 != puStack_48) {
    uVar5 = *puVar4;
    if (0x3f < uVar5) {
      uVar8 = 0x40;
      goto joined_r0x000109264a3c;
    }
    if (0x1f < uVar5) {
      uVar8 = 0x20;
      goto joined_r0x000109264a3c;
    }
    if (0xf < uVar5) {
      uVar8 = 0x10;
      goto joined_r0x000109264a3c;
    }
    if (7 < uVar5) {
      uVar8 = 8;
      goto joined_r0x000109264a3c;
    }
    if (3 < uVar5) {
      uVar8 = 4;
      goto joined_r0x000109264a3c;
    }
    if (1 < uVar5) {
      uVar8 = 2;
      goto joined_r0x000109264a3c;
    }
  }
  uVar8 = 1;
joined_r0x000109264a3c:
  if (puStack_50 != (uint *)0x0) {
    puStack_48 = puStack_50;
    __ZdlPv();
  }
  return uVar8;
}



/* Entry: 109264ab0; end: 109264b13;  */

long FUN_109264ab0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (_glIsProgram(), iVar1 != 0)) {
    _glDeleteProgram(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_109265270(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 109264b14; end: 109264be7;  */

void FUN_109264b14(long *param_1)

{
  long lVar1;
  undefined8 **ppuStack_48;
  undefined8 **appuStack_40 [2];
  char cStack_29;
  int iStack_28;
  
  if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
    FUN_1092655dc(appuStack_40,param_1[1],param_1 + 2,0,0);
    if (iStack_28 == 1) {
      lVar1 = *param_1;
      ppuStack_48 = appuStack_40[0];
      if (-1 < cStack_29) {
        ppuStack_48 = appuStack_40;
      }
      if (((*(byte *)(lVar1 + 0x813) >> 5 & 1) != 0) && (*(uint *)(lVar1 + 0x818) < 6)) {
        FUN_10925f9d8(lVar1 + 0x810,5,0x20000000,&UNK_10f5617e5,0x32,&ppuStack_48);
      }
    }
    FUN_10925f5f8(appuStack_40);
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}



/* Entry: 109264be8; end: 109264c77;  */

undefined1 * FUN_109264be8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_138 [264];
  
  puVar1 = param_1;
  FUN_109264b14();
  if ((param_1[0x120] & 1) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar2 = &UNK_10f561818;
      FUN_109243bf8();
      FUN_109265270(auStack_138);
      __Unwind_Resume();
      if (puVar2[0x108] == '\x01') {
        FUN_109264d10();
      }
      else {
        FUN_10926511c();
        puVar2[0x108] = 1;
      }
      return puVar2;
    }
    FUN_10926f2cc(auStack_138,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10),param_1[0x129],
                  param_1[0x12a],param_2);
    FUN_109264c78(param_1 + 0x18,auStack_138);
    puVar1 = auStack_138;
    FUN_109265270(puVar1);
  }
  return puVar1;
}



/* Entry: 109264c78; end: 109264d0f;  */

long FUN_109264c78(long param_1)

{
  if (*(char *)(param_1 + 0x108) == '\x01') {
    FUN_109264d10();
  }
  else {
    FUN_10926511c();
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return param_1;
}



/* Entry: 109264d10; end: 10926511b;  */

long * FUN_109264d10(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    func_0x000109264f54(param_1);
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = param_1 + 3;
  if (*plVar2 != 0) {
    func_0x000109264fa0(plVar2);
    __ZdlPv(*plVar2);
    *plVar2 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar2 = param_1 + 6;
  if (*plVar2 != 0) {
    func_0x000109264fec(plVar2);
    __ZdlPv(*plVar2);
    *plVar2 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_109241b08(param_1 + 9);
  lVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  plVar2 = param_1 + 0xc;
  if (*plVar2 != 0) {
    func_0x000109265038(plVar2);
    __ZdlPv(*plVar2);
    *plVar2 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  lVar3 = param_2[0x10];
  lVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar3;
  param_1[0xf] = lVar1;
  *(undefined1 *)((long)param_2 + 0x8f) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  lVar1 = param_2[0x12];
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  param_1[0x12] = lVar1;
  FUN_109241da0(param_1 + 0x14);
  lVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = lVar1;
  param_1[0x16] = param_2[0x16];
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    param_1[0x18] = lVar1;
    __ZdlPv();
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = lVar1;
  param_1[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  plVar2 = param_1 + 0x1a;
  if (*plVar2 != 0) {
    func_0x000109265084(plVar2);
    __ZdlPv(*plVar2);
    *plVar2 = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  lVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = lVar1;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  plVar2 = param_1 + 0x1d;
  if (*plVar2 != 0) {
    func_0x0001092650d0(plVar2);
    __ZdlPv(*plVar2);
    *plVar2 = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  lVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = lVar1;
  param_1[0x1f] = param_2[0x1f];
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  return param_1;
}



/* Entry: 10926511c; end: 10926526f;  */

void FUN_10926511c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  uVar1 = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  param_1[0x12] = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  param_1[0x16] = param_2[0x16];
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 109265270; end: 1092654b3;  */

long FUN_109265270(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xe8;
  func_0x000109265334(&lStack_28);
  lStack_28 = param_1 + 0xd0;
  func_0x000109265374(&lStack_28);
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xa0;
  func_0x00010922df48(&lStack_28);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lStack_28 = param_1 + 0x60;
  func_0x0001092653b4(&lStack_28);
  lStack_28 = param_1 + 0x48;
  func_0x00010922dfd4(&lStack_28);
  lStack_28 = param_1 + 0x30;
  func_0x0001092653f4(&lStack_28);
  lStack_28 = param_1 + 0x18;
  func_0x000109265434(&lStack_28);
  lStack_28 = param_1;
  func_0x000109265474(&lStack_28);
  return param_1;
}



/* Entry: 1092654b4; end: 1092655db;  */

long FUN_1092654b4(long param_1,undefined8 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_1;
  _glCreateProgram();
  puStack_58 = (undefined4 *)0x0;
  puStack_50 = (undefined4 *)0x0;
  uStack_48 = 0;
  if (param_2[1] != 0) {
    plVar6 = (long *)*param_2;
    lVar7 = param_2[1] << 3;
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        FUN_10926ccd8(lVar5);
        puVar1 = puStack_58;
        puVar2 = puStack_50;
        if ((*(int *)(lVar5 + 0x178) != 0) || (*(int *)(lVar5 + 0x160) == 0))
        goto joined_r0x00010926556c;
        _glAttachShader(lVar4);
        FUN_109231afc(&puStack_58,(int *)(lVar5 + 0x160));
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x52) & 1) != 0)) {
    (**(code **)(param_1 + 0x960))(lVar4,0x8257,1);
  }
  _glLinkProgram(lVar4);
  puVar1 = puStack_58;
  puVar2 = puStack_50;
joined_r0x00010926556c:
  for (; puVar3 = puStack_50, puVar1 != puStack_50; puVar1 = puVar1 + 1) {
    puStack_50 = puVar2;
    _glDetachShader(lVar4,*puVar1);
    puVar2 = puStack_50;
    puStack_50 = puVar3;
  }
  if (puStack_58 != (undefined4 *)0x0) {
    puStack_50 = puStack_58;
    __ZdlPv(puStack_58);
  }
  return lVar4;
}



/* Entry: 1092655dc; end: 1092657f3;  */

void FUN_1092655dc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,long *param_4,
                  long param_5)

{
  undefined8 ******ppppppuVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *****pppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  int iStack_80;
  undefined4 uStack_7c;
  char cStack_69;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_5 != 0) {
    param_5 = param_5 << 3;
    do {
      lVar5 = *param_4;
      if (lVar5 != 0) {
        FUN_10926ccd8(lVar5);
        piVar3 = (int *)&UNK_10f5618d9;
        uVar4 = 0x30;
        if (*(int *)(lVar5 + 0x178) == 0) {
          if (*(int *)(lVar5 + 0x160) != 0) goto LAB_109265644;
        }
        else if (*(int *)(lVar5 + 0x178) == 1) {
          piVar3 = *(int **)(lVar5 + 0x160);
          uVar4 = *(ulong *)(lVar5 + 0x168);
          if (-1 < (char)*(byte *)(lVar5 + 0x177)) {
            piVar3 = (int *)(lVar5 + 0x160);
            uVar4 = (ulong)*(byte *)(lVar5 + 0x177);
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_68,piVar3,uVar4);
        break;
      }
LAB_109265644:
      param_4 = param_4 + 1;
      param_5 = param_5 + -8;
    } while (param_5 != 0);
  }
  uVar4 = uStack_60;
  if (-1 < (long)uStack_58) {
    uVar4 = uStack_58 >> 0x38;
  }
  if (uVar4 == 0) {
    iStack_80 = 0;
    _glGetProgramiv(*param_3,0x8b82,&iStack_80);
    iVar2 = iStack_80;
    if (iStack_80 == 1) {
      func_0x000107c31940(&iStack_80,"");
    }
    else {
      FUN_1092657f4(&iStack_80,*param_3);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppuStack_98,&UNK_10f56190a,&iStack_80);
      ppppppuVar1 = (undefined8 ******)pppppuStack_98;
      if (-1 < (char)bStack_81) {
        uStack_90 = (ulong)bStack_81;
        ppppppuVar1 = &pppppuStack_98;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_68,ppppppuVar1,uStack_90);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(pppppuStack_98);
      }
    }
    if (cStack_69 < '\0') {
      __ZdlPv(CONCAT44(uStack_7c,iStack_80));
    }
    if (iVar2 == 1) {
      *(undefined4 *)param_1 = *param_3;
      *(undefined4 *)(param_1 + 3) = 0;
      if (-1 < (long)uStack_58) {
        return;
      }
      __ZdlPv(uStack_68);
      return;
    }
  }
  _glDeleteProgram(*param_3);
  *param_3 = 0;
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[2] = uStack_58;
  *(undefined4 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1092657f4; end: 10926588b;  */

void FUN_1092657f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uStack_24;
  
  uStack_24 = 0;
  _glGetProgramiv(param_2,0x8b84,&uStack_24);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < (int)uStack_24) {
    func_0x000104c59120(param_1,(ulong)uStack_24 + 1,0);
    puVar1 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar1 = param_1;
    }
    _glGetProgramInfoLog(param_2,uStack_24,&uStack_24,puVar1);
  }
  return;
}



/* Entry: 10926588c; end: 109265977;  */

undefined8 * FUN_10926588c(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long lStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  char cStack_49;
  int aiStack_48 [6];
  
  if (((param_2 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x52) == '\x01')) &&
     (puVar4 = param_3, FUN_10925fcb4(aiStack_48,param_2), aiStack_48[0] != 0)) {
    _glCreateProgram();
    if ((*(byte *)(param_1 + 0x52) & 1) == 0) {
      puVar2 = (undefined8 *)&UNK_10f561939;
      FUN_109243bf8();
      if (cStack_49 < '\0') {
        __ZdlPv(CONCAT44(uStack_5c,iStack_60));
      }
      puVar3 = puVar2;
      __Unwind_Resume();
      pcStack_68 = FUN_109265978;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = param_3;
      uVar1 = *puVar4;
      *(undefined4 *)(puVar3 + 4) = 0x17;
      *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
      *puVar3 = &PTR_FUN_110ae6e10;
      puVar3[5] = param_3 + 0x204;
      puVar3[6] = param_3 + 0x24c;
      lStack_80 = param_1;
      puStack_78 = puVar2;
      puStack_70 = &stack0xfffffffffffffff0;
      FUN_109265eec(puVar3 + 7,uVar1);
      uStack_81 = 0;
      func_0x0001074b2d2c(puVar3 + 10,*puVar4,&uStack_81);
      uStack_82 = 0;
      func_0x0001074b2d2c(puVar3 + 0xd,*puVar4,&uStack_82);
      (**(code **)(puVar3[6] + 0x978))((ulong)(puVar3[8] - puVar3[7]) >> 2);
      return puVar3;
    }
    (**(code **)(param_1 + 0x968))();
    iStack_60 = 0;
    _glGetProgramiv(param_2,0x8b82,&iStack_60);
    if (iStack_60 == 1) {
      return param_2;
    }
    FUN_1092657f4(&iStack_60,param_2);
    _glDeleteProgram(param_2);
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT44(uStack_5c,iStack_60));
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 109265978; end: 109265a73;  */

undefined8 * FUN_109265978(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 4) = 0x17;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  *param_1 = &PTR_FUN_110ae6e10;
  param_1[5] = param_2 + 0x810;
  param_1[6] = param_2 + 0x930;
  FUN_109265eec(param_1 + 7,uVar1);
  uStack_21 = 0;
  func_0x0001074b2d2c(param_1 + 10,*param_3,&uStack_21);
  uStack_22 = 0;
  func_0x0001074b2d2c(param_1 + 0xd,*param_3,&uStack_22);
  (**(code **)(param_1[6] + 0x978))((ulong)(param_1[8] - param_1[7]) >> 2);
  return param_1;
}



/* Entry: 109265a74; end: 109265ae3;  */

long FUN_109265a74(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x980))
            ((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 2);
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109265ae4; end: 109265ae7;  */

long FUN_109265ae4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x980))
            ((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 2);
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109265ae8; end: 109265afb;  */

void FUN_109265ae8(void)

{
  FUN_109265a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109265afc; end: 109265b67;  */

void FUN_109265afc(long param_1)

{
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x5c) == '\x01') {
    iStack_34 = 0;
    _glGetIntegerv(0x8fbb,&iStack_34);
    if ((iStack_34 != 0) && (0 < *(long *)(param_1 + 0x58))) {
      uStack_30 = *(undefined8 *)(param_1 + 0x50);
      uStack_28 = 0;
      FUN_109265fe0(&uStack_30);
    }
  }
  return;
}



/* Entry: 109265b68; end: 109265bc3;  */

void FUN_109265b68(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((param_2 <= *(uint *)(param_1 + 0x24) && param_3 <= *(uint *)(param_1 + 0x24) - param_2) &&
      param_3 != 0) {
    uVar1 = (ulong)param_3;
    lVar2 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x68);
    uVar4 = (ulong)param_2;
    do {
      uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
      uVar6 = 1L << (uVar4 & 0x3f);
      *(ulong *)(lVar2 + uVar5) = *(ulong *)(lVar2 + uVar5) & (uVar6 ^ 0xffffffffffffffff);
      *(ulong *)(lVar3 + uVar5) = *(ulong *)(lVar3 + uVar5) & (uVar6 ^ 0xffffffffffffffff);
      uVar4 = uVar4 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109265bc4; end: 109265c9b;  */

undefined8 FUN_109265bc4(long param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  if (param_5 < (param_3 & 0xffffffff)) {
    return 3;
  }
  if ((uint)param_2 <= *(uint *)(param_1 + 0x24) &&
      (uint)param_3 <= *(uint *)(param_1 + 0x24) - (uint)param_2) {
    FUN_109265afc(param_1);
    uVar1 = *(ulong *)(param_1 + 0x50);
    FUN_109265c9c(uVar1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 2;
    }
    uVar1 = *(ulong *)(param_1 + 0x68);
    func_0x000109265d1c(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      if ((uint)param_3 != 0) {
        lVar2 = (param_2 & 0xffffffff) << 2;
        param_3 = param_3 & 0xffffffff;
        do {
          uStack_38 = 0;
          (**(code **)(*(long *)(param_1 + 0x30) + 0x9c8))
                    (*(undefined4 *)(*(long *)(param_1 + 0x38) + lVar2),0x8866,&uStack_38);
          *param_4 = uStack_38;
          lVar2 = lVar2 + 4;
          param_3 = param_3 - 1;
          param_4 = param_4 + 1;
        } while (param_3 != 0);
      }
      return 0;
    }
  }
  return 3;
}



/* Entry: 109265c9c; end: 109265d9b;  */

bool FUN_109265c9c(long param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  
  uVar9 = (ulong)(param_2 & 0x3f);
  uVar2 = param_3 + param_2 & 0x3f;
  if (uVar9 + param_3 < 0x40 && (param_2 & 0x3f) == uVar2) {
    return false;
  }
  puVar7 = (ulong *)(param_1 + (ulong)(param_2 >> 6) * 8);
  puVar1 = (ulong *)((long)puVar7 + (uVar9 + param_3 >> 3 & 0x3ffffff8));
  do {
    uVar3 = 1L << (uVar9 & 0x3f) & *puVar7;
    bVar6 = uVar3 != 0;
    if (uVar3 != 0) {
      return bVar6;
    }
    iVar8 = (int)uVar9;
    lVar4 = 8;
    if (iVar8 != 0x3f) {
      lVar4 = 0;
    }
    puVar7 = (ulong *)((long)puVar7 + lVar4);
    uVar5 = 0;
    if (iVar8 != 0x3f) {
      uVar5 = iVar8 + 1;
    }
    uVar9 = (ulong)uVar5;
  } while ((uVar5 != uVar2) || (puVar7 != puVar1));
  return bVar6;
}



/* Entry: 109265d9c; end: 109265edb;  */

uint FUN_109265d9c(long param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong param_5,
                  long param_6,ulong param_7)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_60;
  uint uStack_54;
  
  uVar4 = 3;
  if ((((param_3 & 0xffffffff) <= param_5) && (uVar5 = param_3 & 0xffffffff, uVar5 <= param_7)) &&
     ((uint)param_2 <= *(uint *)(param_1 + 0x24) &&
      (uint)param_3 <= *(uint *)(param_1 + 0x24) - (uint)param_2)) {
    FUN_109265afc(param_1);
    uVar3 = *(ulong *)(param_1 + 0x50);
    FUN_109265c9c(uVar3,param_2,param_3);
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x68);
      func_0x000109265d1c(uVar3,param_2,param_3);
      if ((uVar3 & 1) == 0) {
        if ((uint)param_3 == 0) {
          uVar4 = 0;
        }
        else {
          lVar6 = (param_2 & 0xffffffff) << 2;
          uVar4 = 1;
          do {
            uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar6);
            uStack_54 = 0;
            (**(code **)(*(long *)(param_1 + 0x30) + 0x9a8))(uVar1,0x8867,&uStack_54);
            uVar2 = uStack_54;
            *(bool *)param_6 = uStack_54 != 0;
            if (uStack_54 != 0) {
              uStack_60 = 0;
              (**(code **)(*(long *)(param_1 + 0x30) + 0x9c8))(uVar1,0x8866,&uStack_60);
              *param_4 = uStack_60;
            }
            uVar4 = uVar4 & uVar2;
            param_4 = param_4 + 1;
            param_6 = param_6 + 1;
            lVar6 = lVar6 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          uVar4 = (uVar4 ^ 0xffffffff) & 1;
        }
      }
      else {
        uVar4 = 3;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  return uVar4;
}



/* Entry: 109265edc; end: 109265eeb;  */

undefined8 FUN_109265edc(void)

{
  return 4;
}



/* Entry: 109265eec; end: 109265f5f;  */

undefined8 * FUN_109265eec(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109265f60(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 109265f60; end: 109265f97;  */

void FUN_109265f60(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1;
    func_0x000107c2ab8c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_109231bc0();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *(uint *)(plVar2 + 1);
  puVar4 = (ulong *)*plVar2;
  puVar5 = puVar4;
  if (uVar1 != 0) {
    uVar3 = (ulong)(0x40 - uVar1);
    uVar6 = uVar3;
    if (param_2 <= uVar3) {
      uVar6 = param_2;
    }
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar4 | 0xffffffffffffffffU >> (uVar3 - uVar6 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar6;
    *plVar2 = (long)puVar5;
  }
  uVar6 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar5,0xff,uVar6 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *plVar2 = (long)(puVar5 + uVar6);
    puVar5[uVar6] = puVar5[uVar6] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}


