/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098aff1c; end: 1098aff2f;  */

undefined1  [16] FUN_1098aff1c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint auStack_60 [2];
  long *plStack_58;
  
  puVar4 = &UNK_10f58603d;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0x1555555555555556) {
    lVar5 = (long)param_2 * 0xc;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000104c4f740();
  puVar6 = auStack_60;
  puVar7 = *(uint **)(puVar4 + 0x38);
  do {
    auStack_60[0] = *puVar7;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = auStack_60[0];
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar2) {
      *puVar7 = auStack_60[0] + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_58 = (long *)*param_2;
  *param_2 = 0;
  FUN_1098b0000();
  plVar3 = plStack_58;
  plStack_58 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  auVar9._8_8_ = puVar6;
  return auVar9;
}



/* Entry: 1098aff30; end: 1098aff73;  */

undefined1  [16] FUN_1098aff30(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint auStack_50 [2];
  long *plStack_48;
  
  if (param_2 < (undefined8 *)0x1555555555555556) {
    lVar4 = (long)param_2 * 0xc;
    __Znwm(lVar4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000104c4f740();
  puVar5 = auStack_50;
  puVar6 = *(uint **)(param_1 + 0x38);
  do {
    auStack_50[0] = *puVar6;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = auStack_50[0];
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar2) {
      *puVar6 = auStack_50[0] + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_48 = (long *)*param_2;
  *param_2 = 0;
  FUN_1098b0000();
  plVar3 = plStack_48;
  plStack_48 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  auVar8._8_8_ = puVar5;
  return auVar8;
}



/* Entry: 1098aff74; end: 1098affff;  */

int FUN_1098aff74(long param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  int aiStack_30 [2];
  long *plStack_28;
  
  piVar5 = *(int **)(param_1 + 0x38);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  aiStack_30[0] = iVar1;
  FUN_1098b0000(param_1,aiStack_30);
  plVar4 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return iVar1;
}



/* Entry: 1098b0000; end: 1098b004f;  */

void FUN_1098b0000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    *puVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(puVar1 + 2) = uVar2;
    puVar1 = puVar1 + 4;
  }
  else {
    puVar1 = param_1;
    FUN_1098b01b0();
  }
  *(undefined4 **)(param_1 + 2) = puVar1;
  return;
}



/* Entry: 1098b0050; end: 1098b0113;  */

void FUN_1098b0050(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 auStack_70 [2];
  long *plStack_68;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_1098b036c();
      auStack_70[0] = (int)param_2;
      FUN_1098b0050(param_1 + 3,auStack_70);
      plStack_68 = (long *)*param_3;
      *param_3 = 0;
      auStack_70[0] = (int)param_2;
      FUN_1098b0000(param_1,auStack_70);
      plVar4 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_1098b0380();
    lVar3 = *param_1;
    puVar2 = (undefined4 *)((long)plVar4 + lVar8);
    lVar7 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar7,lVar3);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar4 + uVar6 * 4;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 1098b0114; end: 1098b01af;  */

void FUN_1098b0114(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 auStack_40 [2];
  long *plStack_38;
  
  auStack_40[0] = param_2;
  FUN_1098b0050(param_1 + 0x18,auStack_40);
  plStack_38 = (long *)*param_3;
  *param_3 = 0;
  auStack_40[0] = param_2;
  FUN_1098b0000(param_1,auStack_40);
  plVar1 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 1098b01b0; end: 1098b02ef;  */

long * FUN_1098b01b0(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  puVar11 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  lVar12 = (long)puVar3 - (long)puVar11 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = param_1[2] - (long)puVar11 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar11)) {
      uVar9 = 0xfffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar9 >> 0x3c == 0) {
      lVar4 = uVar9 << 4;
      __Znwm();
      puVar2 = (undefined4 *)(lVar4 + ((long)puVar3 - (long)puVar11));
      lStack_60 = lVar4 + uVar9 * 0x10;
      *puVar2 = *param_2;
      uVar10 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(puVar2 + 2) = uVar10;
      plStack_68 = (long *)(puVar2 + 4);
      puVar7 = puVar11;
      puVar8 = puVar2 + lVar12 * -4;
      plVar5 = plStack_68;
      if (puVar11 != puVar3) {
        do {
          *puVar8 = *puVar7;
          uVar10 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar8 + 2) = uVar10;
          puVar7 = puVar7 + 4;
          puVar8 = puVar8 + 4;
        } while (puVar7 != puVar3);
        do {
          plVar5 = *(long **)(puVar11 + 2);
          *(undefined8 *)(puVar11 + 2) = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          puVar11 = puVar11 + 4;
        } while (puVar11 != puVar3);
        puVar11 = (undefined4 *)*param_1;
        plVar5 = plStack_68;
      }
      *param_1 = (long)(puVar2 + lVar12 * -4);
      param_1[1] = (long)plVar5;
      lVar12 = param_1[2];
      param_1[2] = lStack_60;
      puStack_78 = puVar11;
      puStack_70 = puVar11;
      plStack_68 = (long *)puVar11;
      lStack_60 = lVar12;
      FUN_1098b0304(&puStack_78);
      return plVar5;
    }
  }
  else {
    FUN_1098b02f0();
  }
  func_0x000104c4f740();
  plVar5 = (long *)&UNK_10f586044;
  func_0x000104c4f6cc();
  lVar12 = plVar5[1];
  lVar4 = plVar5[2];
  while (lVar4 != lVar12) {
    plVar5[2] = lVar4 + -0x10;
    plVar6 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    lVar4 = lVar4 + -0x10;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
      lVar4 = plVar5[2];
    }
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 1098b02f0; end: 1098b0303;  */

long * FUN_1098b02f0(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)&UNK_10f586044;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar4 = plVar2[2];
  while (lVar4 != lVar1) {
    plVar2[2] = lVar4 + -0x10;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    lVar4 = lVar4 + -0x10;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      lVar4 = plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1098b0304; end: 1098b036b;  */

long * FUN_1098b0304(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x10;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    lVar3 = lVar3 + -0x10;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      lVar3 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b036c; end: 1098b037f;  */

undefined1  [16] FUN_1098b036c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  ulong uStack_80;
  long lStack_78;
  
  puVar2 = &UNK_10f586044;
  func_0x000104c4f6cc(&UNK_10f586044);
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = (long)param_2 << 2;
    __Znwm(lVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000104c4f740();
  FUN_1098b04b4(auStack_a0,puVar2 + 0x68);
  if (lStack_90 != lStack_98) {
    plVar5 = (long *)(lStack_98 + (uStack_80 >> 6) * 8);
    plVar4 = (long *)(*plVar5 + (uStack_80 & 0x3f) * 0x40);
    plVar1 = (long *)(*(long *)(lStack_98 + (lStack_78 + uStack_80 >> 6) * 8) +
                     (lStack_78 + uStack_80 & 0x3f) * 0x40);
    if (plVar4 != plVar1) {
      uVar6 = 0;
      do {
        if ((((uVar6 & 1) == 0) && (*plVar4 == plVar4[1])) && (plVar4[3] == plVar4[4])) {
          uVar6 = (uint)*(byte *)(plVar4 + 6);
        }
        else {
          uVar6 = 1;
        }
        param_2 = plVar4;
        FUN_1098b0524(puVar2,plVar4);
        plVar4 = plVar4 + 8;
        if ((long)plVar4 - *plVar5 == 0x1000) {
          plVar5 = plVar5 + 1;
          plVar4 = (long *)*plVar5;
        }
      } while (plVar4 != plVar1);
      goto LAB_1098b047c;
    }
  }
  uVar6 = 0;
LAB_1098b047c:
  func_0x0001098b08dc(auStack_a0);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar6 & 1;
  auVar8._8_8_ = param_2;
  return auVar8;
}



/* Entry: 1098b0380; end: 1098b03b3;  */

undefined1  [16] FUN_1098b0380(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  ulong uStack_70;
  long lStack_68;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar2 = (long)param_2 << 2;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  FUN_1098b04b4(auStack_90,param_1 + 0x68);
  if (lStack_80 != lStack_88) {
    plVar4 = (long *)(lStack_88 + (uStack_70 >> 6) * 8);
    plVar3 = (long *)(*plVar4 + (uStack_70 & 0x3f) * 0x40);
    plVar1 = (long *)(*(long *)(lStack_88 + (lStack_68 + uStack_70 >> 6) * 8) +
                     (lStack_68 + uStack_70 & 0x3f) * 0x40);
    if (plVar3 != plVar1) {
      uVar5 = 0;
      do {
        if ((((uVar5 & 1) == 0) && (*plVar3 == plVar3[1])) && (plVar3[3] == plVar3[4])) {
          uVar5 = (uint)*(byte *)(plVar3 + 6);
        }
        else {
          uVar5 = 1;
        }
        param_2 = plVar3;
        FUN_1098b0524(param_1,plVar3);
        plVar3 = plVar3 + 8;
        if ((long)plVar3 - *plVar4 == 0x1000) {
          plVar4 = plVar4 + 1;
          plVar3 = (long *)*plVar4;
        }
      } while (plVar3 != plVar1);
      goto LAB_1098b047c;
    }
  }
  uVar5 = 0;
LAB_1098b047c:
  func_0x0001098b08dc(auStack_90);
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar5 & 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 1098b03b4; end: 1098b04b3;  */

byte FUN_1098b03b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  ulong uStack_50;
  long lStack_48;
  
  FUN_1098b04b4(auStack_70,param_1 + 0x68);
  if (lStack_60 != lStack_68) {
    plVar3 = (long *)(lStack_68 + (uStack_50 >> 6) * 8);
    plVar2 = (long *)(*plVar3 + (uStack_50 & 0x3f) * 0x40);
    plVar1 = (long *)(*(long *)(lStack_68 + (lStack_48 + uStack_50 >> 6) * 8) +
                     (lStack_48 + uStack_50 & 0x3f) * 0x40);
    if (plVar2 != plVar1) {
      bVar4 = 0;
      do {
        if ((((bVar4 & 1) == 0) && (*plVar2 == plVar2[1])) && (plVar2[3] == plVar2[4])) {
          bVar4 = *(byte *)(plVar2 + 6);
        }
        else {
          bVar4 = 1;
        }
        FUN_1098b0524(param_1,plVar2);
        plVar2 = plVar2 + 8;
        if ((long)plVar2 - *plVar3 == 0x1000) {
          plVar3 = plVar3 + 1;
          plVar2 = (long *)*plVar3;
        }
      } while (plVar2 != plVar1);
      goto LAB_1098b047c;
    }
  }
  bVar4 = 0;
LAB_1098b047c:
  func_0x0001098b08dc(auStack_70);
  return bVar4 & 1;
}



/* Entry: 1098b04b4; end: 1098b0523;  */

void FUN_1098b04b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 1098b0524; end: 1098b05c7;  */

void FUN_1098b0524(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lStack_48;
  
  puVar1 = (undefined4 *)param_2[4];
  for (puVar3 = (undefined4 *)param_2[3]; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    FUN_1098b05c8(param_1,*puVar3);
  }
  puVar1 = (undefined4 *)param_2[1];
  for (puVar3 = (undefined4 *)*param_2; puVar3 != puVar1; puVar3 = puVar3 + 4) {
    uVar2 = *puVar3;
    lStack_48 = param_1;
    (**(code **)(**(long **)(puVar3 + 2) + 0x10))(*(long **)(puVar3 + 2),&lStack_48);
    func_0x0001098b0b0c(param_1 + 0xe0,uVar2);
  }
  if ((*(byte *)(param_2 + 6) & 1) != 0) {
    func_0x0001098bdafc(*(long *)(param_1 + 0x58) + 0x10);
  }
  return;
}



/* Entry: 1098b05c8; end: 1098b09ff;  */

void FUN_1098b05c8(long param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  
  plVar4 = (long *)(param_1 + 0xf0);
  plVar7 = (long *)*plVar4;
  plVar11 = plVar4;
  if (plVar7 != (long *)0x0) {
    do {
      lVar6 = 8;
      if (param_2 <= *(int *)((long)plVar7 + 0x1c)) {
        lVar6 = 0;
        plVar11 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar6);
    } while (plVar7 != (long *)0x0);
    if ((plVar11 != plVar4) && (*(int *)((long)plVar11 + 0x1c) <= param_2)) {
      plVar4 = *(long **)(param_1 + 0xe0);
      iVar13 = (int)plVar11[4];
      lVar6 = *plVar4 + (long)iVar13 * 0x60;
      puVar16 = *(uint **)(lVar6 + 0x48);
      puVar1 = *(uint **)(lVar6 + 0x50);
      if (puVar16 != puVar1) {
        do {
          if ((int)((ulong)*puVar16 & 0x1fffffff) != 0) {
            puVar12 = (undefined8 *)(plVar4[3] + ((ulong)*puVar16 & 0x1fffffff) * 0xc);
            FUN_1098bda24(*(long *)(param_1 + 0x58) + 0x10,puVar12);
            *puVar12 = 0xffffffff40000000;
            *(undefined4 *)(puVar12 + 1) = 0;
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
        iVar13 = (int)plVar11[4];
      }
      lVar5 = (long)iVar13;
      func_0x0001096389b8(param_1 + 0xe8,plVar11);
      __ZdlPv(plVar11);
      lVar6 = **(long **)(param_1 + 0xe0) + (long)iVar13 * 0x60;
      puVar1 = *(uint **)(lVar6 + 0x50);
      for (puVar16 = *(uint **)(lVar6 + 0x48); puVar16 != puVar1; puVar16 = puVar16 + 1) {
        uVar2 = *puVar16;
        uVar8 = (ulong)uVar2 & 0x1fffffff;
        if ((uint)uVar8 != 0) {
          lVar6 = *(long *)(param_1 + 0x120);
          if (uVar8 != lVar6 - *(long *)(param_1 + 0x118) >> 3) {
            lVar9 = uVar8 * 8 + -8;
            *(undefined8 *)(*(long *)(param_1 + 0x118) + lVar9) = *(undefined8 *)(lVar6 + -8);
            lVar6 = *(long *)(param_1 + 0x120);
            **(uint **)(*(long *)(param_1 + 0x118) + lVar9) = uVar2;
          }
          *(long *)(param_1 + 0x120) = lVar6 + -8;
          lVar9 = *(long *)(param_1 + 0xe0);
          lVar6 = *(long *)(lVar9 + 0x20);
          if (uVar8 + 1 != (lVar6 - *(long *)(lVar9 + 0x18) >> 2) * -0x5555555555555555) {
            puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x18) + uVar8 * 0xc);
            uVar10 = *(undefined8 *)(lVar6 + -0xc);
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar6 + -4);
            *puVar12 = uVar10;
            lVar6 = *(long *)(lVar9 + 0x18) + uVar8 * 0xc;
            iVar3 = *(int *)(lVar6 + 4);
            if (iVar3 != -1) {
              *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x208) +
                                                     (long)iVar3 * 8) + 0x68) + 0x10) +
                       (long)*(int *)(lVar6 + 8) * 0xc) = (uint)uVar8 | 0x20000000;
            }
          }
          *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + -0xc;
        }
      }
      lVar6 = *(long *)(param_1 + 0x108);
      if (lVar5 + 1 != lVar6 - *(long *)(param_1 + 0x100) >> 3) {
        *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar5 * 8) = *(undefined8 *)(lVar6 + -8);
        lVar6 = *(long *)(param_1 + 0x108);
        *(int *)(*(long *)(*(long *)(param_1 + 0x100) + lVar5 * 8) + 0x20) = iVar13;
      }
      *(long *)(param_1 + 0x108) = lVar6 + -8;
      plVar11 = *(long **)(param_1 + 0xe0);
      lVar6 = plVar11[1];
      if (lVar5 + 1 != (lVar6 - *plVar11 >> 5) * -0x5555555555555555) {
        puVar15 = (undefined8 *)(*plVar11 + (long)iVar13 * 0x60);
        *puVar15 = *(undefined8 *)(lVar6 + -0x60);
        puVar12 = puVar15 + 1;
        (**(code **)*puVar12)(puVar12);
        (**(code **)(*(long *)(lVar6 + -0x58) + 0x10))(puVar12,(long *)(lVar6 + -0x58));
        puVar15[8] = *(undefined8 *)(lVar6 + -0x20);
        FUN_1098b0ed4(puVar15 + 9,lVar6 + -0x18);
        lVar6 = plVar11[1];
      }
      puVar12 = (undefined8 *)(lVar6 + -0x60);
      if ((undefined8 *)plVar11[1] != puVar12) {
        puVar15 = (undefined8 *)plVar11[1] + -0xb;
        do {
          if (puVar15[8] != 0) {
            puVar15[9] = puVar15[8];
            __ZdlPv();
          }
          puVar14 = puVar15 + -1;
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar15 + -0xc;
        } while (puVar14 != puVar12);
      }
      plVar11[1] = (long)puVar12;
      return;
    }
  }
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    lVar6 = *(long *)(lVar5 + 0x148);
    if (-1 < *(char *)(lVar5 + 0x15f)) {
      lVar6 = lVar5 + 0x148;
    }
    func_0x00010ae06f08(1,2,&UNK_10f58604b,&UNK_10f5860d6,0x27,&UNK_10f586114,in_x6,in_x7,
                        &UNK_10f586144,lVar6);
  }
  return;
}



/* Entry: 1098b0a00; end: 1098b0a3f;  */

void FUN_1098b0a00(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_1098b0a40(&lStack_28);
  return;
}



/* Entry: 1098b0a40; end: 1098b0abf;  */

void FUN_1098b0a40(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar5 = plVar3[1];
    lVar2 = lVar4;
    if (lVar5 != lVar4) {
      do {
        plVar1 = *(long **)(lVar5 + -8);
        *(undefined8 *)(lVar5 + -8) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1098b0ac0; end: 1098b0bab;  */

long * FUN_1098b0ac0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b0bac; end: 1098b0ddf;  */

undefined1  [16]
FUN_1098b0bac(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5
             )

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    plVar16 = plVar4 + 1;
    *plVar4 = *param_2;
    plVar4 = param_1;
LAB_1098b0c64:
    param_1[1] = (long)plVar16;
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = plVar4;
    return auVar17;
  }
  plVar14 = (long *)*param_1;
  lVar15 = (long)plVar4 - (long)plVar14;
  uVar8 = (lVar15 >> 3) + 1;
  if (uVar8 >> 0x3d == 0) {
    uVar7 = param_1[2] - (long)plVar14;
    uVar12 = (long)uVar7 >> 2;
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d == 0) {
      lVar2 = uVar12 << 3;
      __Znwm();
      plVar4 = (long *)(lVar2 + lVar15);
      plVar5 = plVar4 + -(lVar15 >> 3);
      plVar16 = plVar4 + 1;
      *plVar4 = *param_2;
      plVar4 = plVar5;
      param_2 = plVar14;
      _memcpy(plVar5,plVar14,lVar15);
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar16;
      param_1[2] = lVar2 + uVar12 * 8;
      if (plVar14 != (long *)0x0) {
        __ZdlPv(plVar14);
        plVar4 = plVar14;
      }
      goto LAB_1098b0c64;
    }
  }
  else {
    func_0x0001098b0eac();
  }
  func_0x000104c4f740();
  uVar8 = (long)((int)((ulong)(*(long *)(*param_1 + 0x20) - *(long *)(*param_1 + 0x18)) >> 2) *
                -0x55555555) - 1;
  plVar4 = (long *)param_1[7];
  plVar16 = (long *)param_1[8];
  lVar15 = (long)plVar16 - (long)plVar4;
  uVar12 = lVar15 >> 3;
  if (uVar12 < uVar8) {
    uVar7 = uVar8 - uVar12;
    if ((ulong)(param_1[9] - (long)plVar16 >> 3) < uVar7) {
      if (uVar8 >> 0x3d == 0) {
        uVar10 = param_1[9] - (long)plVar4;
        uVar13 = (long)uVar10 >> 2;
        if (uVar13 <= uVar8) {
          uVar13 = uVar8;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar13 = 0x1fffffffffffffff;
        }
        if (uVar13 >> 0x3d == 0) {
          lVar3 = uVar13 << 3;
          __Znwm();
          lVar2 = lVar3 + lVar15;
          _bzero(lVar2,uVar7 * 8);
          plVar16 = (long *)(lVar2 + uVar12 * -8);
          plVar14 = plVar16;
          plVar5 = plVar4;
          _memcpy(plVar16,plVar4,lVar15);
          param_1[7] = (long)plVar16;
          param_1[8] = lVar2 + uVar7 * 8;
          param_1[9] = lVar3 + uVar13 * 8;
          if (plVar4 != (long *)0x0) {
            __ZdlPv(plVar4);
            plVar14 = plVar4;
          }
          goto LAB_1098b0d94;
        }
      }
      else {
        func_0x0001098b0ec0();
      }
      func_0x000104c4f740();
      plVar4 = param_1 + 1;
      plVar16 = plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        plVar14 = (long *)*plVar4;
        do {
          while (plVar4 = plVar14, *(int *)((long)plVar4 + 0x1c) <= (int)*param_2) {
            if ((int)*param_2 <= *(int *)((long)plVar4 + 0x1c)) {
              uVar6 = 0;
              goto LAB_1098b0e94;
            }
            plVar14 = (long *)plVar4[1];
            if ((long *)plVar4[1] == (long *)0x0) {
              plVar16 = plVar4 + 1;
              goto LAB_1098b0e4c;
            }
          }
          plVar14 = (long *)*plVar4;
          plVar16 = plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
LAB_1098b0e4c:
      plVar14 = (long *)0x28;
      __Znwm();
      piVar11 = (int *)*param_5;
      *(int *)((long)plVar14 + 0x1c) = *(int *)*param_4;
      *(int *)(plVar14 + 4) = *piVar11;
      func_0x000109638964(param_1,plVar4,plVar16,plVar14);
      uVar6 = 1;
      plVar4 = plVar14;
LAB_1098b0e94:
      auVar19._8_8_ = uVar6;
      auVar19._0_8_ = plVar4;
      return auVar19;
    }
    plVar5 = (long *)(uVar7 * 8);
    plVar14 = plVar16;
    _bzero(plVar16,plVar5);
    plVar4 = plVar16 + uVar7;
  }
  else {
    plVar14 = param_1;
    plVar5 = param_2;
    if (uVar12 <= uVar8) goto LAB_1098b0d94;
    plVar4 = plVar4 + uVar8;
  }
  param_1[8] = (long)plVar4;
LAB_1098b0d94:
  puVar1 = (uint *)param_2[10];
  for (puVar9 = (uint *)param_2[9]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
    if ((int)((ulong)*puVar9 & 0x1fffffff) != 0) {
      *(uint **)(param_1[7] + ((ulong)*puVar9 & 0x1fffffff) * 8 + -8) = puVar9;
    }
  }
  auVar18._8_8_ = plVar5;
  auVar18._0_8_ = plVar14;
  return auVar18;
}



/* Entry: 1098b0de0; end: 1098b0eab;  */

undefined1  [16]
FUN_1098b0de0(long param_1,int *param_2,undefined8 param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, *(int *)((long)plVar4 + 0x1c) <= *param_2) {
        if (*param_2 <= *(int *)((long)plVar4 + 0x1c)) {
          uVar2 = 0;
          goto LAB_1098b0e94;
        }
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar5 = plVar4 + 1;
          goto LAB_1098b0e4c;
        }
      }
      plVar1 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_1098b0e4c:
  plVar1 = (long *)0x28;
  __Znwm();
  puVar3 = (undefined4 *)*param_5;
  *(undefined4 *)((long)plVar1 + 0x1c) = *(undefined4 *)*param_4;
  *(undefined4 *)(plVar1 + 4) = *puVar3;
  func_0x000109638964(param_1,plVar4,plVar5,plVar1);
  uVar2 = 1;
  plVar4 = plVar1;
LAB_1098b0e94:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = plVar4;
  return auVar6;
}



/* Entry: 1098b0eac; end: 1098b0ed3;  */

void FUN_1098b0eac(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  lVar2 = *param_2;
  plVar1[1] = param_2[1];
  *plVar1 = lVar2;
  plVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1098b0ed4; end: 1098b0fa7;  */

void FUN_1098b0ed4(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
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
  return;
}



/* Entry: 1098b0fa8; end: 1098b0ff3;  */

void FUN_1098b0fa8(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  FUN_1098b0ff4(param_1 + 0x48,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 1098b0ff4; end: 1098b136b;  */

void FUN_1098b0ff4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar16 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)param_1[2];
  uVar3 = (long)puVar11 - (long)puVar16;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((long)puVar11 - (long)puVar16) * 8 - 1;
  }
  uVar2 = param_1[4];
  uVar10 = param_1[5] + uVar2;
  if (uVar1 != uVar10) goto LAB_1098b12c0;
  if (uVar2 < 0x40) {
    puVar12 = (undefined8 *)param_1[3];
    puVar14 = (undefined8 *)*param_1;
    if (uVar3 < (ulong)((long)puVar12 - (long)puVar14)) {
      uVar6 = 0x1000;
      puVar8 = param_2;
      __Znwm();
      if (puVar12 == puVar11) {
        if (puVar16 == puVar14) {
          lVar9 = (long)puVar12 - (long)puVar16 >> 2;
          if (puVar11 == puVar16) {
            lVar9 = 1;
          }
          lVar13 = lVar9 * 2;
          FUN_1098b1468();
          puVar16 = (undefined8 *)(lVar9 + (lVar13 + 6U & 0xfffffffffffffff8));
          lVar13 = param_1[2] - param_1[1];
          puVar11 = puVar16;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)((long)puVar16 + lVar13);
            puVar12 = (undefined8 *)param_1[1];
            puVar14 = puVar16;
            do {
              *puVar14 = *puVar12;
              lVar13 = lVar13 + -8;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar13 != 0);
          }
          lVar13 = *param_1;
          *param_1 = lVar9;
          param_1[1] = (long)puVar16;
          param_1[2] = (long)puVar11;
          param_1[3] = lVar9 + (long)puVar8 * 8;
          if (lVar13 != 0) {
            __ZdlPv(lVar13);
            puVar16 = (undefined8 *)param_1[1];
          }
        }
        puVar16[-1] = uVar6;
        lVar9 = param_1[1];
        param_1[1] = lVar9 + -8;
        uVar6 = *(undefined8 *)(lVar9 + -8);
        param_1[1] = lVar9;
        goto LAB_1098b1054;
      }
      *puVar11 = uVar6;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar8 = (undefined8 *)((long)puVar12 - (long)puVar14 >> 2);
      if (puVar12 == puVar14) {
        puVar8 = (undefined8 *)0x1;
      }
      puVar15 = param_2;
      FUN_1098b1468();
      uVar6 = 0x1000;
      puVar7 = puVar15;
      __Znwm();
      puVar12 = (undefined8 *)((long)puVar8 + uVar3);
      puVar14 = puVar8 + (long)puVar15;
      puVar5 = puVar8;
      if (uVar3 == (long)puVar15 * 8) {
        if ((long)uVar3 < 1) {
          puVar12 = (undefined8 *)((long)puVar12 - (long)puVar8 >> 2);
          if (puVar11 == puVar16) {
            puVar12 = (undefined8 *)0x1;
          }
          puVar5 = puVar12;
          FUN_1098b1468();
          puVar12 = puVar5 + ((ulong)puVar12 >> 2);
          puVar14 = puVar5 + (long)puVar7;
          if (puVar8 != (undefined8 *)0x0) {
            __ZdlPv(puVar8);
          }
        }
        else {
          lVar9 = ((long)puVar12 - (long)puVar8 >> 3) + 1;
          puVar12 = puVar12 + -((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
        }
      }
      puVar16 = puVar12 + 1;
      *puVar12 = uVar6;
      puVar11 = (undefined8 *)param_1[2];
      puVar8 = puVar5;
      if (puVar11 != (undefined8 *)param_1[1]) {
        do {
          puVar5 = puVar8;
          puVar15 = puVar12;
          if (puVar12 == puVar8) {
            if (puVar16 < puVar14) {
              lVar9 = ((long)puVar14 - (long)puVar16 >> 3) + 1;
              lVar13 = (long)puVar16 - (long)puVar8;
              lVar4 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar16 + ((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
              puVar15 = (undefined8 *)((long)puVar16 - lVar13);
              if (lVar4 != 0) {
                _memmove(puVar15,puVar12,lVar4);
                puVar7 = puVar12;
              }
            }
            else {
              puVar15 = (undefined8 *)((long)puVar14 - (long)puVar8 >> 2);
              if ((long)puVar14 - (long)puVar8 == 0) {
                puVar15 = (undefined8 *)0x1;
              }
              puVar5 = puVar15;
              FUN_1098b1468();
              puVar15 = (undefined8 *)((long)puVar5 + ((long)puVar15 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar9 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar15;
              if (lVar9 != 0) {
                puVar16 = (undefined8 *)((long)puVar15 + lVar9);
                puVar14 = puVar15;
                do {
                  *puVar14 = *puVar12;
                  lVar9 = lVar9 + -8;
                  puVar14 = puVar14 + 1;
                  puVar12 = puVar12 + 1;
                } while (lVar9 != 0);
              }
              puVar14 = puVar5 + (long)puVar7;
              if (puVar8 != (undefined8 *)0x0) {
                __ZdlPv(puVar8);
              }
            }
          }
          puVar11 = puVar11 + -1;
          puVar12 = puVar15 + -1;
          *puVar12 = *puVar11;
          puVar8 = puVar5;
        } while (puVar11 != (undefined8 *)param_1[1]);
      }
      lVar9 = *param_1;
      *param_1 = (long)puVar5;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar16;
      param_1[3] = (long)puVar14;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x40;
    uVar6 = *puVar16;
    param_1[1] = (long)(puVar16 + 1);
LAB_1098b1054:
    FUN_1098b136c(param_1,uVar6);
  }
  puVar16 = (undefined8 *)param_1[1];
  uVar10 = param_1[5] + param_1[4];
LAB_1098b12c0:
  puVar16 = (undefined8 *)(puVar16[uVar10 >> 6] + (uVar10 & 0x3f) * 0x40);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  uVar6 = *param_2;
  puVar16[1] = param_2[1];
  *puVar16 = uVar6;
  puVar16[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  uVar6 = param_2[3];
  puVar16[4] = param_2[4];
  puVar16[3] = uVar6;
  puVar16[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar6 = param_2[6];
  puVar16[7] = param_2[7];
  puVar16[6] = uVar6;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 1098b136c; end: 1098b1467;  */

void FUN_1098b136c(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098b1468();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098b1468; end: 1098b149b;  */

/* WARNING: Removing unreachable block (ram,0x0001098b1584) */

void FUN_1098b1468(ulong param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *extraout_x8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_1098b24f8;
  puVar5[1] = FUN_1098b2744;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar8;
  uVar11 = *param_2;
  puVar5[10] = param_2[1];
  puVar5[9] = uVar11;
  puVar5[0xb] = param_1;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar6 = puVar5 + 0xb;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098b177c(puVar5 + 0xd,puVar5 + 9);
    puVar5[0xb] = puVar5[0xd];
    plVar7 = (long *)(puVar5[0xd] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xe) = 1;
      lVar8 = puVar5[0xb];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_58 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_68 = 0;
            puStack_60 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_68);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xb];
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xd];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b16a0);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098b149c; end: 1098b177b;  */

/* WARNING: Removing unreachable block (ram,0x0001098b1584) */

void FUN_1098b149c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_1098b24f8;
  puVar5[1] = FUN_1098b2744;
  FUN_1092ba17c(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  uVar11 = *param_3;
  puVar5[10] = param_3[1];
  puVar5[9] = uVar11;
  puVar5[0xb] = param_2;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar6 = puVar5 + 0xb;
  FUN_1092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1098b177c(puVar5 + 0xd,puVar5 + 9);
    puVar5[0xb] = puVar5[0xd];
    plVar7 = (long *)(puVar5[0xd] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xe) = 1;
      lVar8 = puVar5[0xb];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xb];
    if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) == 0) {
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar5[0xd];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      FUN_1092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    FUN_1092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b16a0);
    (*pcVar4)();
  }
  return;
}



/* Entry: 1098b177c; end: 1098b1cd3;  */

void FUN_1098b177c(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar11 = *param_2;
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  *puVar6 = FUN_1098b1f78;
  puVar6[1] = FUN_1098b242c;
  puVar6[0xc] = param_2;
  puVar6[0xd] = lVar11;
  FUN_1092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar9;
  uVar7 = lVar11 + 0x20;
  puVar6[10] = uVar7;
  func_0x000109d197a4();
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 0;
    uVar7 = puVar6[10];
    puStack_68 = (undefined8 *)puVar6[3];
    puStack_78 = (undefined8 *)0x0;
    plStack_70 = puVar6;
    func_0x000109d197e8(uVar7,&puStack_78);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  lVar9 = puVar6[0xc];
  lVar11 = puVar6[0xd];
  puVar6[9] = puVar6[10];
  plVar10 = *(long **)(lVar11 + 0xa8);
  plStack_70 = (long *)0x0;
  puStack_68 = (undefined8 *)0x0;
  if (plVar10 == (long *)0x0) {
    uVar12 = *(undefined8 *)(lVar9 + 8);
    puVar8 = (undefined8 *)0xc0;
    __Znwm();
    puVar8[2] = 0;
    puVar8[1] = 0x200000006;
    *(undefined2 *)(puVar8 + 3) = 4;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar8 + 3;
    puVar8[0x12] = 0;
    *(undefined2 *)(puVar8 + 0x13) = 0;
    *puVar8 = &PTR_DAT_110b17c40;
    puStack_78 = puVar8 + 0x14;
    *puStack_78 = uVar12;
    *(undefined1 *)(puVar8 + 0x16) = 1;
    puVar8[0x17] = 0;
    pcStack_60 = FUN_1098b1d04;
    plStack_70 = puVar8;
    puStack_68 = puVar8;
  }
  else {
    pcStack_58 = (code *)0x0;
    (**(code **)(*plVar10 + 0x28))(plVar10,0,&pcStack_58);
    if (pcStack_58 != (code *)0x0) {
      FUN_1092af97c(&pcStack_58);
      goto LAB_1098b1bcc;
    }
    uVar12 = *(undefined8 *)(lVar9 + 8);
    puVar8 = (undefined8 *)0xc8;
    __Znwm();
    puVar8[2] = 0;
    puVar8[1] = 0x200000006;
    *(undefined2 *)(puVar8 + 3) = 4;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar8 + 3;
    puVar8[0x12] = 0;
    *(undefined2 *)(puVar8 + 0x13) = 0;
    puVar8[0x14] = uVar12;
    *puVar8 = &PTR_FUN_110b17c08;
    *(undefined1 *)(puVar8 + 0x16) = 1;
    puVar8[0x17] = 0;
    puVar8[0x18] = plVar10;
    if (plStack_70 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_70 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_70 + 8))();
        }
      }
    }
    plStack_70 = puVar8;
    if (puStack_68 != (undefined8 *)0x0) {
      FUN_1092b4274(&puStack_68);
    }
    pcStack_60 = FUN_1098b1cd4;
    puStack_78 = puVar8 + 0x14;
    puStack_68 = puVar8;
    __ZNSt13exception_ptrD1Ev(&pcStack_58);
  }
  puVar4 = puStack_78;
  puVar8 = (undefined8 *)(lVar11 + 0x98);
  if (puStack_78[3] != 0) {
    FUN_1092b4274();
  }
  puVar4[3] = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  pcStack_58 = pcStack_60;
  puStack_50 = puStack_78;
  puStack_48 = puVar8;
  (**(code **)*puVar8)(puVar8,&pcStack_58);
  plVar10 = plStack_70;
  puVar6[0xb] = plStack_70;
  plStack_70 = (long *)0x0;
  if ((puStack_68 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_68), plStack_70 != (long *)0x0))
  {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  puVar6[10] = plVar10;
  plVar10 = plVar10 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar6[10] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 1;
    lVar9 = puVar6[10];
    plVar10 = (long *)(lVar9 + 0x10);
    puVar8 = (undefined8 *)puVar6[3];
    do {
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puStack_78 = (undefined8 *)0x0;
          plStack_70 = puVar6;
          puStack_68 = puVar8;
          func_0x000109d1b588(lVar9 + 0x18,&puStack_78);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  plVar10 = (long *)puVar6[10];
  if (((uint)*(undefined8 *)(puVar6[10] + 0x10) >> 5 & 1) == 0) {
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)puVar6[0xb];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    FUN_1092ba100(puVar6 + 2);
    func_0x000109d19904(puVar6 + 9);
    func_0x000109d1a1d0(puVar6 + 2);
    __ZdlPv(puVar6);
    return;
  }
  FUN_1092af97c(plVar10 + 0x12);
LAB_1098b1bcc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1098b1bd0);
  (*pcVar5)();
}



/* Entry: 1098b1cd4; end: 1098b1d03;  */

void FUN_1098b1cd4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_1098b1d04();
                    /* WARNING: Could not recover jumptable at 0x0001098b1d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 1098b1d04; end: 1098b1e2f;  */

void FUN_1098b1d04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long lStack_28;
  
  lStack_28 = param_1[3];
  param_1[3] = 0;
  *(undefined4 *)(*param_1 + 0x18) = 1;
  lVar8 = *param_1;
  uVar6 = *(undefined8 *)(lVar8 + 0x210);
  FUN_1098b03b4(uVar6);
  FUN_1098bdbd8(*param_1,uVar6);
  lVar4 = lStack_28;
  pbVar7 = (byte *)*param_1;
  if ((*pbVar7 & 1) != 0) {
    *pbVar7 = 0;
    FUN_1092af97c(pbVar7 + 8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1098b1df8);
    (*pcVar5)();
  }
  *(undefined4 *)(lVar8 + 0x18) = 0;
  plVar1 = (long *)(lStack_28 + 0x10);
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        func_0x000109d1b4dc(lStack_28 + 0x18);
        goto LAB_1098b1da4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_1098b1da4:
      if ((char)param_1[2] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_28 = 0;
      if ((lVar4 != 0) && (FUN_1092b4274(&lStack_28,lVar4), lStack_28 != 0)) {
        FUN_1092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 1098b1e30; end: 1098b1f77;  */

undefined8 * FUN_1098b1e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b17c08;
  if (param_1[0x17] != 0) {
    FUN_1092b4274();
  }
  *param_1 = &PTR_FUN_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ae8c08;
  return param_1;
}



/* Entry: 1098b1f78; end: 1098b242b;  */

void FUN_1098b1f78(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  code *pcStack_48;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x60);
    lVar8 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    plVar10 = *(long **)(lVar8 + 0xa8);
    plStack_58 = (long *)0x0;
    puStack_50 = (undefined8 *)0x0;
    if (plVar10 == (long *)0x0) {
      uVar11 = *(undefined8 *)(lVar9 + 8);
      puVar6 = (undefined8 *)0xc0;
      __Znwm();
      puVar6[2] = 0;
      puVar6[1] = 0x200000006;
      *(undefined2 *)(puVar6 + 3) = 4;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = puVar6 + 3;
      puVar6[0x12] = 0;
      *(undefined2 *)(puVar6 + 0x13) = 0;
      *puVar6 = &PTR_DAT_110b17c40;
      puStack_60 = puVar6 + 0x14;
      *puStack_60 = uVar11;
      *(undefined1 *)(puVar6 + 0x16) = 1;
      puVar6[0x17] = 0;
      pcStack_48 = FUN_1098b1d04;
      plStack_58 = puVar6;
      puStack_50 = puVar6;
    }
    else {
      pcStack_78 = (code *)0x0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&pcStack_78);
      if (pcStack_78 != (code *)0x0) {
        FUN_1092af97c(&pcStack_78);
        goto LAB_1098b234c;
      }
      uVar11 = *(undefined8 *)(lVar9 + 8);
      puVar6 = (undefined8 *)0xc8;
      __Znwm();
      puVar6[2] = 0;
      puVar6[1] = 0x200000006;
      *(undefined2 *)(puVar6 + 3) = 4;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = puVar6 + 3;
      puVar6[0x12] = 0;
      *(undefined2 *)(puVar6 + 0x13) = 0;
      puVar6[0x14] = uVar11;
      *puVar6 = &PTR_FUN_110b17c08;
      *(undefined1 *)(puVar6 + 0x16) = 1;
      puVar6[0x17] = 0;
      puVar6[0x18] = plVar10;
      if (plStack_58 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_58 + 1);
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plStack_58 + 8))();
          }
        }
      }
      plStack_58 = puVar6;
      if (puStack_50 != (undefined8 *)0x0) {
        FUN_1092b4274(&puStack_50);
      }
      pcStack_48 = FUN_1098b1cd4;
      puStack_60 = puVar6 + 0x14;
      puStack_50 = puVar6;
      __ZNSt13exception_ptrD1Ev(&pcStack_78);
    }
    puVar4 = puStack_60;
    puVar6 = (undefined8 *)(lVar8 + 0x98);
    if (puStack_60[3] != 0) {
      FUN_1092b4274();
    }
    puVar4[3] = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    pcStack_78 = pcStack_48;
    puStack_70 = puStack_60;
    puStack_68 = puVar6;
    (**(code **)*puVar6)(puVar6,&pcStack_78);
    plVar10 = plStack_58;
    *(long **)(param_1 + 0x58) = plStack_58;
    plStack_58 = (long *)0x0;
    if ((puStack_50 != (undefined8 *)0x0) && (FUN_1092b4274(&puStack_50), plStack_58 != (long *)0x0)
       ) {
      puVar1 = (ulong *)(plStack_58 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_58 + 8))();
        }
      }
    }
    *(long **)(param_1 + 0x50) = plVar10;
    plVar10 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar9 = *(long *)(param_1 + 0x50);
      plVar10 = (long *)(lVar9 + 0x10);
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      do {
        lVar8 = *plVar10;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_60 = (undefined8 *)0x0;
            plStack_58 = (long *)param_1;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&puStack_60);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar10 = *(long **)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) == 0) {
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = *(long **)(param_1 + 0x58);
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    FUN_1092ba100(param_1 + 0x10);
    func_0x000109d19904(param_1 + 0x48);
    func_0x000109d1a1d0(param_1 + 0x10);
    __ZdlPv(param_1);
    return;
  }
  FUN_1092af97c(plVar10 + 0x12);
LAB_1098b234c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1098b2350);
  (*pcVar5)();
}



/* Entry: 1098b242c; end: 1098b24f7;  */

void FUN_1098b242c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    func_0x000109d19904(param_1 + 0x48);
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b24f8; end: 1098b2743;  */

void FUN_1098b24f8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    FUN_1098b177c(param_1 + 0x68,param_1 + 0x48);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68);
    plVar5 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar8 = *(long *)(param_1 + 0x58);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
    FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b2688);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_1092ba100(param_1 + 0x10);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b2744; end: 1098b2807;  */

void FUN_1098b2744(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b2808; end: 1098b290f;  */

long * FUN_1098b2808(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)param_2;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    __ZnwmSt11align_val_t(lVar2,param_2[1]);
    param_2 = (long *)*param_1;
  }
  param_1[1] = lVar2;
  lVar2 = param_2[5];
  lVar1 = param_2[6];
  if (lVar1 - lVar2 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(*param_1 + 0x28) + lVar3 * 8) + 0x10))
                (param_1[1] + *(long *)(*(long *)(*param_1 + 0x10) + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar1 - lVar2 >> 3 != lVar3);
  }
  return param_1;
}



/* Entry: 1098b2910; end: 1098b29ef;  */

void FUN_1098b2910(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_68 = 1;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  func_0x0001073bf8d4(&lStack_60,param_2[1] - *param_2 >> 3);
  puVar1 = (undefined8 *)param_2[1];
  for (puVar4 = (undefined8 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    FUN_1098b29f0(&lStack_70,*puVar4);
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  lVar3 = param_2[2];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = 0;
  if (uStack_68 != 0) {
    uVar2 = ((lStack_70 + uStack_68) - 1) / uStack_68;
  }
  param_1[1] = uStack_68;
  *param_1 = uVar2 * uStack_68;
  param_1[3] = lStack_58;
  param_1[2] = lStack_60;
  param_1[4] = lStack_50;
  param_1[6] = lVar6;
  param_1[5] = lVar5;
  param_1[7] = lVar3;
  return;
}



/* Entry: 1098b29f0; end: 1098b2a9b;  */

void FUN_1098b29f0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  if ((ulong)param_1[1] <= uVar2) {
    uVar1 = uVar2;
  }
  param_1[1] = uVar1;
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = ((uVar2 + *param_1) - 1) / uVar2;
  }
  lStack_28 = uVar1 * uVar2;
  FUN_1093fd894(param_1 + 2,&lStack_28);
  *param_1 = *param_2 + lStack_28;
  return;
}



/* Entry: 1098b2a9c; end: 1098b2b5f;  */

undefined1  [16] FUN_1098b2a9c(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)param_1[2]) {
    plVar9 = plVar6 + 1;
    *plVar6 = *param_2;
    plVar6 = param_1;
  }
  else {
    lVar15 = (long)plVar6 - *param_1;
    uVar7 = (lVar15 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
      FUN_1098b2b60();
      plVar6 = (long *)&UNK_10f58614d;
      func_0x000104c4f6cc();
      if ((ulong)param_2 >> 0x3d == 0) {
        lVar15 = (long)param_2 << 3;
        __Znwm(lVar15);
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = lVar15;
        return auVar21;
      }
      func_0x000104c4f740();
      plVar6[1] = 1;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      plVar5 = plVar6 + 8;
      plVar6[9] = 0;
      *plVar5 = 0;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[10] = 0;
      if (param_2[1] - *param_2 == 0) {
        lVar15 = 0;
        uStack_138 = 1;
        lStack_130 = 0;
        lStack_148 = 0;
        lStack_150 = 0;
        plStack_120 = (long *)0x0;
        lStack_128 = 0;
        lStack_140 = -1;
        plVar9 = param_2;
      }
      else {
        uVar7 = param_2[1] - *param_2 >> 3;
        if (0x492492492492492 < uVar7) {
          FUN_1098b3188();
LAB_1098b3048:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b304c);
          (*pcVar4)();
        }
        plVar16 = param_2;
        plStack_120 = plVar5;
        FUN_1098b319c();
        plVar9 = (long *)plVar6[9];
        lVar15 = uVar7 + (plVar6[8] - (long)plVar9);
        func_0x0001098b31e4(plVar6[8],plVar9,lVar15);
        lStack_140 = plVar6[8];
        plVar6[8] = lVar15;
        plVar6[9] = uVar7;
        lStack_128 = plVar6[10];
        plVar6[10] = uVar7 + (long)plVar16 * 0x38;
        uStack_138 = lStack_140;
        lStack_130 = lStack_140;
        func_0x0001098b32bc(&lStack_140);
        lVar15 = *param_2;
        lVar1 = param_2[1];
        uStack_138 = 1;
        lStack_140 = 0;
        lStack_128 = 0;
        lStack_130 = 0;
        lStack_118 = 0;
        plStack_120 = (long *)0x0;
        lStack_108 = 0;
        lStack_110 = 0;
        if ((lVar1 - lVar15 & 0x7fffffff8U) == 0) {
          lStack_148 = 0;
          lStack_150 = 0;
          lVar15 = 0;
          lStack_140 = -1;
        }
        else {
          uVar7 = 0;
          do {
            plVar16 = *(long **)(*param_2 + uVar7 * 8);
            uVar10 = (ulong)(uint)((int)((ulong)(plVar16[1] - *plVar16) >> 5) * -0x55555555);
            uVar17 = ((ulong)(plVar16[4] - plVar16[3]) >> 2) * -0x5555555500000000;
            uVar12 = plVar6[9];
            if (uVar12 < (ulong)plVar6[10]) {
              plVar9 = (long *)(uVar17 | uVar10);
              FUN_1098b3308(uVar12);
              lVar8 = uVar12 + 0x38;
              plVar6[9] = lVar8;
            }
            else {
              lVar19 = uVar12 - *plVar5;
              plVar13 = (long *)((lVar19 >> 3) * 0x6db6db6db6db6db7 + 1);
              if ((long *)0x492492492492492 < plVar13) {
                FUN_1098b3188();
                goto LAB_1098b3048;
              }
              lVar8 = plVar6[10] - *plVar5 >> 3;
              plVar14 = (long *)(lVar8 * -0x2492492492492492);
              if (plVar14 < plVar13 || (long)plVar14 - (long)plVar13 == 0) {
                plVar14 = plVar13;
              }
              if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
                plVar14 = (long *)0x492492492492492;
              }
              plStack_d0 = plVar5;
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)0x0;
                plVar9 = (long *)0x0;
              }
              else {
                FUN_1098b319c();
              }
              lVar19 = (long)plVar14 + lVar19;
              lVar3 = (long)plVar9 * 7;
              plStack_f0 = plVar14;
              plStack_e8 = (long *)lVar19;
              plStack_e0 = (long *)lVar19;
              plStack_d8 = plVar14 + lVar3;
              FUN_1098b3308(lVar19,uVar17 | uVar10);
              lVar8 = lVar19 + 0x38;
              plVar9 = (long *)plVar6[9];
              lVar19 = lVar19 + (plVar6[8] - (long)plVar9);
              func_0x0001098b31e4(plVar6[8],plVar9,lVar19);
              plStack_f0 = (long *)plVar6[8];
              plVar6[8] = lVar19;
              plVar6[9] = lVar8;
              plStack_d8 = (long *)plVar6[10];
              plVar6[10] = (long)(plVar14 + lVar3);
              plStack_e8 = plStack_f0;
              plStack_e0 = plStack_f0;
              func_0x0001098b32bc(&plStack_f0);
            }
            plVar6[9] = lVar8;
            uVar2 = (int)((ulong)(plVar16[1] - *plVar16) >> 5) * -0x55555555;
            if (uVar2 != 0) {
              uVar12 = 0;
              lVar19 = 0x40;
              do {
                if (**(long **)(*plVar16 + lVar19) != 0) {
                  plStack_f0 = *(long **)(*plVar16 + lVar19);
                  FUN_1098b2a9c(&lStack_118,&plStack_f0);
                  plVar9 = plStack_f0;
                  FUN_1098b29f0(&lStack_140);
                  plVar13 = (long *)(lVar8 + -0x38);
                  if (((uVar12 >> 0x1d & 7) == 0) ||
                     (plVar13 = (long *)(lVar8 + -0x20), puVar11 = (undefined8 *)(lVar8 + -8),
                     ((uint)(uVar12 >> 0x1d) & 7) == 1)) {
                    puVar11 = (undefined8 *)(*plVar13 + (uVar12 & 0x1fffffff) * 8);
                  }
                  *puVar11 = *(undefined8 *)(lStack_128 + -8);
                }
                uVar12 = uVar12 + 1;
                lVar19 = lVar19 + 0x60;
              } while (uVar2 != uVar12);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != ((ulong)(lVar1 - lVar15) >> 3 & 0xffffffff));
          lStack_148 = lStack_110;
          lStack_150 = lStack_118;
          lStack_140 = lStack_140 + -1;
          lVar15 = lStack_108;
        }
      }
      plVar5 = plStack_120;
      lVar19 = lStack_128;
      lVar1 = lStack_130;
      uVar7 = 0;
      if (uStack_138 != 0) {
        uVar7 = (lStack_140 + uStack_138) / uStack_138;
      }
      lStack_140 = uVar7 * uStack_138;
      lStack_128 = 0;
      plStack_120 = (long *)0x0;
      lStack_130 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      plVar6[1] = uStack_138;
      *plVar6 = lStack_140;
      if (plVar6[2] != 0) {
        plVar6[3] = plVar6[2];
        __ZdlPv();
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
      }
      lVar8 = plVar6[5];
      plVar6[3] = lVar19;
      plVar6[2] = lVar1;
      plVar6[4] = (long)plVar5;
      if (lVar8 != 0) {
        plVar6[6] = lVar8;
        __ZdlPv();
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar6[7] = 0;
      }
      plVar6[6] = lStack_148;
      plVar6[5] = lStack_150;
      plVar6[7] = lVar15;
      lVar15 = *param_2;
      lVar1 = param_2[1];
      if ((lVar1 - lVar15 & 0x7fffffff8U) != 0) {
        uVar7 = 0;
        do {
          lVar19 = *(long *)(*param_2 + uVar7 * 8);
          uVar2 = (int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >> 2) *
                  -0x55555555;
          if (uVar2 != 0) {
            uVar18 = 0;
            do {
              plVar9 = (long *)(uVar7 << 0x20 | (ulong)(uVar18 | 0x20000000));
              func_0x0001098b30e4(plVar6,plVar9,*param_2,param_2[1] - *param_2 >> 3);
              uVar18 = uVar18 + 1;
            } while (uVar2 != uVar18);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != ((ulong)(lVar1 - lVar15) >> 3 & 0xffffffff));
      }
      if (lStack_118 != 0) {
        lStack_110 = lStack_118;
        __ZdlPv();
      }
      if (lStack_130 != 0) {
        lStack_128 = lStack_130;
        __ZdlPv();
      }
      auVar22._8_8_ = plVar9;
      auVar22._0_8_ = plVar6;
      return auVar22;
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    plVar5 = param_1;
    FUN_1098b2b74();
    plVar6 = (long *)((long)plVar5 + lVar15);
    plVar9 = plVar6 + 1;
    *plVar6 = *param_2;
    param_2 = (long *)*param_1;
    lVar15 = (long)plVar6 - (param_1[1] - (long)param_2);
    _memcpy(lVar15);
    plVar6 = (long *)*param_1;
    *param_1 = lVar15;
    param_1[1] = (long)plVar9;
    param_1[2] = (long)(plVar5 + uVar12);
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar9;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = plVar6;
  return auVar20;
}



/* Entry: 1098b2b60; end: 1098b2b73;  */

undefined1  [16] FUN_1098b2b60(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  
  plVar5 = (long *)&UNK_10f58614d;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar6 = (long)param_2 << 3;
    __Znwm(lVar6);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar6;
    return auVar20;
  }
  func_0x000104c4f740();
  plVar5[1] = 1;
  *plVar5 = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  plVar17 = plVar5 + 8;
  plVar5[9] = 0;
  *plVar17 = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[10] = 0;
  if (param_2[1] - *param_2 == 0) {
    lVar6 = 0;
    uStack_108 = 1;
    lStack_100 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    plStack_f0 = (long *)0x0;
    lStack_f8 = 0;
    lStack_110 = -1;
    plVar9 = param_2;
  }
  else {
    uVar7 = param_2[1] - *param_2 >> 3;
    if (0x492492492492492 < uVar7) {
      FUN_1098b3188();
LAB_1098b3048:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b304c);
      (*pcVar4)();
    }
    plVar13 = param_2;
    plStack_f0 = plVar17;
    FUN_1098b319c();
    plVar9 = (long *)plVar5[9];
    lVar6 = uVar7 + (plVar5[8] - (long)plVar9);
    func_0x0001098b31e4(plVar5[8],plVar9,lVar6);
    lStack_110 = plVar5[8];
    plVar5[8] = lVar6;
    plVar5[9] = uVar7;
    lStack_f8 = plVar5[10];
    plVar5[10] = uVar7 + (long)plVar13 * 0x38;
    uStack_108 = lStack_110;
    lStack_100 = lStack_110;
    func_0x0001098b32bc(&lStack_110);
    lVar6 = *param_2;
    lVar1 = param_2[1];
    uStack_108 = 1;
    lStack_110 = 0;
    lStack_f8 = 0;
    lStack_100 = 0;
    lStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    lStack_d8 = 0;
    lStack_e0 = 0;
    if ((lVar1 - lVar6 & 0x7fffffff8U) == 0) {
      lStack_118 = 0;
      lStack_120 = 0;
      lVar6 = 0;
      lStack_110 = -1;
    }
    else {
      uVar7 = 0;
      do {
        plVar13 = *(long **)(*param_2 + uVar7 * 8);
        uVar14 = (ulong)(uint)((int)((ulong)(plVar13[1] - *plVar13) >> 5) * -0x55555555);
        uVar15 = ((ulong)(plVar13[4] - plVar13[3]) >> 2) * -0x5555555500000000;
        uVar18 = plVar5[9];
        if (uVar18 < (ulong)plVar5[10]) {
          plVar9 = (long *)(uVar15 | uVar14);
          FUN_1098b3308(uVar18);
          lVar8 = uVar18 + 0x38;
          plVar5[9] = lVar8;
        }
        else {
          lVar19 = uVar18 - *plVar17;
          plVar11 = (long *)((lVar19 >> 3) * 0x6db6db6db6db6db7 + 1);
          if ((long *)0x492492492492492 < plVar11) {
            FUN_1098b3188();
            goto LAB_1098b3048;
          }
          lVar8 = plVar5[10] - *plVar17 >> 3;
          plVar12 = (long *)(lVar8 * -0x2492492492492492);
          if (plVar12 < plVar11 || (long)plVar12 - (long)plVar11 == 0) {
            plVar12 = plVar11;
          }
          if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
            plVar12 = (long *)0x492492492492492;
          }
          plStack_a0 = plVar17;
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
            plVar9 = (long *)0x0;
          }
          else {
            FUN_1098b319c();
          }
          lVar19 = (long)plVar12 + lVar19;
          lVar3 = (long)plVar9 * 7;
          plStack_c0 = plVar12;
          plStack_b8 = (long *)lVar19;
          plStack_b0 = (long *)lVar19;
          plStack_a8 = plVar12 + lVar3;
          FUN_1098b3308(lVar19,uVar15 | uVar14);
          lVar8 = lVar19 + 0x38;
          plVar9 = (long *)plVar5[9];
          lVar19 = lVar19 + (plVar5[8] - (long)plVar9);
          func_0x0001098b31e4(plVar5[8],plVar9,lVar19);
          plStack_c0 = (long *)plVar5[8];
          plVar5[8] = lVar19;
          plVar5[9] = lVar8;
          plStack_a8 = (long *)plVar5[10];
          plVar5[10] = (long)(plVar12 + lVar3);
          plStack_b8 = plStack_c0;
          plStack_b0 = plStack_c0;
          func_0x0001098b32bc(&plStack_c0);
        }
        plVar5[9] = lVar8;
        uVar2 = (int)((ulong)(plVar13[1] - *plVar13) >> 5) * -0x55555555;
        if (uVar2 != 0) {
          uVar18 = 0;
          lVar19 = 0x40;
          do {
            if (**(long **)(*plVar13 + lVar19) != 0) {
              plStack_c0 = *(long **)(*plVar13 + lVar19);
              FUN_1098b2a9c(&lStack_e8,&plStack_c0);
              plVar9 = plStack_c0;
              FUN_1098b29f0(&lStack_110);
              plVar11 = (long *)(lVar8 + -0x38);
              if (((uVar18 >> 0x1d & 7) == 0) ||
                 (plVar11 = (long *)(lVar8 + -0x20), puVar10 = (undefined8 *)(lVar8 + -8),
                 ((uint)(uVar18 >> 0x1d) & 7) == 1)) {
                puVar10 = (undefined8 *)(*plVar11 + (uVar18 & 0x1fffffff) * 8);
              }
              *puVar10 = *(undefined8 *)(lStack_f8 + -8);
            }
            uVar18 = uVar18 + 1;
            lVar19 = lVar19 + 0x60;
          } while (uVar2 != uVar18);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != ((ulong)(lVar1 - lVar6) >> 3 & 0xffffffff));
      lStack_118 = lStack_e0;
      lStack_120 = lStack_e8;
      lStack_110 = lStack_110 + -1;
      lVar6 = lStack_d8;
    }
  }
  plVar17 = plStack_f0;
  lVar19 = lStack_f8;
  lVar1 = lStack_100;
  uVar7 = 0;
  if (uStack_108 != 0) {
    uVar7 = (lStack_110 + uStack_108) / uStack_108;
  }
  lStack_110 = uVar7 * uStack_108;
  lStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  lStack_100 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plVar5[1] = uStack_108;
  *plVar5 = lStack_110;
  if (plVar5[2] != 0) {
    plVar5[3] = plVar5[2];
    __ZdlPv();
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
  }
  lVar8 = plVar5[5];
  plVar5[3] = lVar19;
  plVar5[2] = lVar1;
  plVar5[4] = (long)plVar17;
  if (lVar8 != 0) {
    plVar5[6] = lVar8;
    __ZdlPv();
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
  }
  plVar5[6] = lStack_118;
  plVar5[5] = lStack_120;
  plVar5[7] = lVar6;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  if ((lVar1 - lVar6 & 0x7fffffff8U) != 0) {
    uVar7 = 0;
    do {
      lVar19 = *(long *)(*param_2 + uVar7 * 8);
      uVar2 = (int)((ulong)(*(long *)(lVar19 + 0x20) - *(long *)(lVar19 + 0x18)) >> 2) * -0x55555555
      ;
      if (uVar2 != 0) {
        uVar16 = 0;
        do {
          plVar9 = (long *)(uVar7 << 0x20 | (ulong)(uVar16 | 0x20000000));
          func_0x0001098b30e4(plVar5,plVar9,*param_2,param_2[1] - *param_2 >> 3);
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != ((ulong)(lVar1 - lVar6) >> 3 & 0xffffffff));
  }
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  auVar21._8_8_ = plVar9;
  auVar21._0_8_ = plVar5;
  return auVar21;
}



/* Entry: 1098b2b74; end: 1098b2ba7;  */

undefined1  [16] FUN_1098b2b74(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    __Znwm(lVar5);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar5;
    return auVar19;
  }
  func_0x000104c4f740();
  param_1[1] = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar16 = param_1 + 8;
  param_1[9] = 0;
  *plVar16 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  if (param_2[1] - *param_2 == 0) {
    lVar5 = 0;
    uStack_f8 = 1;
    lStack_f0 = 0;
    lStack_108 = 0;
    lStack_110 = 0;
    plStack_e0 = (long *)0x0;
    lStack_e8 = 0;
    lStack_100 = -1;
    plVar8 = param_2;
  }
  else {
    uVar6 = param_2[1] - *param_2 >> 3;
    if (0x492492492492492 < uVar6) {
      FUN_1098b3188();
LAB_1098b3048:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b304c);
      (*pcVar4)();
    }
    plVar12 = param_2;
    plStack_e0 = plVar16;
    FUN_1098b319c();
    plVar8 = (long *)param_1[9];
    lVar5 = uVar6 + (param_1[8] - (long)plVar8);
    func_0x0001098b31e4(param_1[8],plVar8,lVar5);
    lStack_100 = param_1[8];
    param_1[8] = lVar5;
    param_1[9] = uVar6;
    lStack_e8 = param_1[10];
    param_1[10] = uVar6 + (long)plVar12 * 0x38;
    uStack_f8 = lStack_100;
    lStack_f0 = lStack_100;
    func_0x0001098b32bc(&lStack_100);
    lVar5 = *param_2;
    lVar1 = param_2[1];
    uStack_f8 = 1;
    lStack_100 = 0;
    lStack_e8 = 0;
    lStack_f0 = 0;
    lStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    if ((lVar1 - lVar5 & 0x7fffffff8U) == 0) {
      lStack_108 = 0;
      lStack_110 = 0;
      lVar5 = 0;
      lStack_100 = -1;
    }
    else {
      uVar6 = 0;
      do {
        plVar12 = *(long **)(*param_2 + uVar6 * 8);
        uVar13 = (ulong)(uint)((int)((ulong)(plVar12[1] - *plVar12) >> 5) * -0x55555555);
        uVar14 = ((ulong)(plVar12[4] - plVar12[3]) >> 2) * -0x5555555500000000;
        uVar17 = param_1[9];
        if (uVar17 < (ulong)param_1[10]) {
          plVar8 = (long *)(uVar14 | uVar13);
          FUN_1098b3308(uVar17);
          lVar7 = uVar17 + 0x38;
          param_1[9] = lVar7;
        }
        else {
          lVar18 = uVar17 - *plVar16;
          plVar10 = (long *)((lVar18 >> 3) * 0x6db6db6db6db6db7 + 1);
          if ((long *)0x492492492492492 < plVar10) {
            FUN_1098b3188();
            goto LAB_1098b3048;
          }
          lVar7 = param_1[10] - *plVar16 >> 3;
          plVar11 = (long *)(lVar7 * -0x2492492492492492);
          if (plVar11 < plVar10 || (long)plVar11 - (long)plVar10 == 0) {
            plVar11 = plVar10;
          }
          if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
            plVar11 = (long *)0x492492492492492;
          }
          plStack_90 = plVar16;
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)0x0;
            plVar8 = (long *)0x0;
          }
          else {
            FUN_1098b319c();
          }
          lVar18 = (long)plVar11 + lVar18;
          lVar3 = (long)plVar8 * 7;
          plStack_b0 = plVar11;
          plStack_a8 = (long *)lVar18;
          plStack_a0 = (long *)lVar18;
          plStack_98 = plVar11 + lVar3;
          FUN_1098b3308(lVar18,uVar14 | uVar13);
          lVar7 = lVar18 + 0x38;
          plVar8 = (long *)param_1[9];
          lVar18 = lVar18 + (param_1[8] - (long)plVar8);
          func_0x0001098b31e4(param_1[8],plVar8,lVar18);
          plStack_b0 = (long *)param_1[8];
          param_1[8] = lVar18;
          param_1[9] = lVar7;
          plStack_98 = (long *)param_1[10];
          param_1[10] = (long)(plVar11 + lVar3);
          plStack_a8 = plStack_b0;
          plStack_a0 = plStack_b0;
          func_0x0001098b32bc(&plStack_b0);
        }
        param_1[9] = lVar7;
        uVar2 = (int)((ulong)(plVar12[1] - *plVar12) >> 5) * -0x55555555;
        if (uVar2 != 0) {
          uVar17 = 0;
          lVar18 = 0x40;
          do {
            if (**(long **)(*plVar12 + lVar18) != 0) {
              plStack_b0 = *(long **)(*plVar12 + lVar18);
              FUN_1098b2a9c(&lStack_d8,&plStack_b0);
              plVar8 = plStack_b0;
              FUN_1098b29f0(&lStack_100);
              plVar10 = (long *)(lVar7 + -0x38);
              if (((uVar17 >> 0x1d & 7) == 0) ||
                 (plVar10 = (long *)(lVar7 + -0x20), puVar9 = (undefined8 *)(lVar7 + -8),
                 ((uint)(uVar17 >> 0x1d) & 7) == 1)) {
                puVar9 = (undefined8 *)(*plVar10 + (uVar17 & 0x1fffffff) * 8);
              }
              *puVar9 = *(undefined8 *)(lStack_e8 + -8);
            }
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 0x60;
          } while (uVar2 != uVar17);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != ((ulong)(lVar1 - lVar5) >> 3 & 0xffffffff));
      lStack_108 = lStack_d0;
      lStack_110 = lStack_d8;
      lStack_100 = lStack_100 + -1;
      lVar5 = lStack_c8;
    }
  }
  plVar16 = plStack_e0;
  lVar18 = lStack_e8;
  lVar1 = lStack_f0;
  uVar6 = 0;
  if (uStack_f8 != 0) {
    uVar6 = (lStack_100 + uStack_f8) / uStack_f8;
  }
  lStack_100 = uVar6 * uStack_f8;
  lStack_e8 = 0;
  plStack_e0 = (long *)0x0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  param_1[1] = uStack_f8;
  *param_1 = lStack_100;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar7 = param_1[5];
  param_1[3] = lVar18;
  param_1[2] = lVar1;
  param_1[4] = (long)plVar16;
  if (lVar7 != 0) {
    param_1[6] = lVar7;
    __ZdlPv();
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  param_1[6] = lStack_108;
  param_1[5] = lStack_110;
  param_1[7] = lVar5;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if ((lVar1 - lVar5 & 0x7fffffff8U) != 0) {
    uVar6 = 0;
    do {
      lVar18 = *(long *)(*param_2 + uVar6 * 8);
      uVar2 = (int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >> 2) * -0x55555555
      ;
      if (uVar2 != 0) {
        uVar15 = 0;
        do {
          plVar8 = (long *)(uVar6 << 0x20 | (ulong)(uVar15 | 0x20000000));
          func_0x0001098b30e4(param_1,plVar8,*param_2,param_2[1] - *param_2 >> 3);
          uVar15 = uVar15 + 1;
        } while (uVar2 != uVar15);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != ((ulong)(lVar1 - lVar5) >> 3 & 0xffffffff));
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  auVar20._8_8_ = plVar8;
  auVar20._0_8_ = param_1;
  return auVar20;
}



/* Entry: 1098b2ba8; end: 1098b30a3;  */

long * FUN_1098b2ba8(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  param_1[1] = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar16 = param_1 + 8;
  param_1[9] = 0;
  *plVar16 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  if (param_2[1] - *param_2 == 0) {
    lVar11 = 0;
    uStack_d8 = 1;
    lStack_d0 = 0;
    lStack_e8 = 0;
    lStack_f0 = 0;
    plStack_c0 = (long *)0x0;
    lStack_c8 = 0;
    lStack_e0 = -1;
  }
  else {
    uVar5 = param_2[1] - *param_2 >> 3;
    if (0x492492492492492 < uVar5) {
      FUN_1098b3188();
LAB_1098b3048:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b304c);
      (*pcVar4)();
    }
    plVar12 = param_2;
    plStack_c0 = plVar16;
    FUN_1098b319c();
    plVar7 = (long *)param_1[9];
    lVar11 = uVar5 + (param_1[8] - (long)plVar7);
    func_0x0001098b31e4(param_1[8],plVar7,lVar11);
    lStack_e0 = param_1[8];
    param_1[8] = lVar11;
    param_1[9] = uVar5;
    lStack_c8 = param_1[10];
    param_1[10] = uVar5 + (long)plVar12 * 0x38;
    uStack_d8 = lStack_e0;
    lStack_d0 = lStack_e0;
    func_0x0001098b32bc(&lStack_e0);
    lVar11 = *param_2;
    lVar1 = param_2[1];
    uStack_d8 = 1;
    lStack_e0 = 0;
    lStack_c8 = 0;
    lStack_d0 = 0;
    lStack_b8 = 0;
    plStack_c0 = (long *)0x0;
    lStack_a8 = 0;
    lStack_b0 = 0;
    if ((lVar1 - lVar11 & 0x7fffffff8U) == 0) {
      lStack_e8 = 0;
      lStack_f0 = 0;
      lVar11 = 0;
      lStack_e0 = -1;
    }
    else {
      uVar5 = 0;
      do {
        plVar12 = *(long **)(*param_2 + uVar5 * 8);
        uVar13 = (ulong)(uint)((int)((ulong)(plVar12[1] - *plVar12) >> 5) * -0x55555555);
        uVar14 = ((ulong)(plVar12[4] - plVar12[3]) >> 2) * -0x5555555500000000;
        uVar17 = param_1[9];
        if (uVar17 < (ulong)param_1[10]) {
          plVar7 = (long *)(uVar14 | uVar13);
          FUN_1098b3308(uVar17);
          lVar6 = uVar17 + 0x38;
          param_1[9] = lVar6;
        }
        else {
          lVar18 = uVar17 - *plVar16;
          plVar9 = (long *)((lVar18 >> 3) * 0x6db6db6db6db6db7 + 1);
          if ((long *)0x492492492492492 < plVar9) {
            FUN_1098b3188();
            goto LAB_1098b3048;
          }
          lVar6 = param_1[10] - *plVar16 >> 3;
          plVar10 = (long *)(lVar6 * -0x2492492492492492);
          if (plVar10 < plVar9 || (long)plVar10 - (long)plVar9 == 0) {
            plVar10 = plVar9;
          }
          if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
            plVar10 = (long *)0x492492492492492;
          }
          plStack_70 = plVar16;
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)0x0;
            plVar7 = (long *)0x0;
          }
          else {
            FUN_1098b319c();
          }
          lVar18 = (long)plVar10 + lVar18;
          lVar3 = (long)plVar7 * 7;
          plStack_90 = plVar10;
          plStack_88 = (long *)lVar18;
          plStack_80 = (long *)lVar18;
          plStack_78 = plVar10 + lVar3;
          FUN_1098b3308(lVar18,uVar14 | uVar13);
          lVar6 = lVar18 + 0x38;
          plVar7 = (long *)param_1[9];
          lVar18 = lVar18 + (param_1[8] - (long)plVar7);
          func_0x0001098b31e4(param_1[8],plVar7,lVar18);
          plStack_90 = (long *)param_1[8];
          param_1[8] = lVar18;
          param_1[9] = lVar6;
          plStack_78 = (long *)param_1[10];
          param_1[10] = (long)(plVar10 + lVar3);
          plStack_88 = plStack_90;
          plStack_80 = plStack_90;
          func_0x0001098b32bc(&plStack_90);
        }
        param_1[9] = lVar6;
        uVar2 = (int)((ulong)(plVar12[1] - *plVar12) >> 5) * -0x55555555;
        if (uVar2 != 0) {
          uVar17 = 0;
          lVar18 = 0x40;
          do {
            if (**(long **)(*plVar12 + lVar18) != 0) {
              plStack_90 = *(long **)(*plVar12 + lVar18);
              FUN_1098b2a9c(&lStack_b8,&plStack_90);
              plVar7 = plStack_90;
              FUN_1098b29f0(&lStack_e0);
              plVar9 = (long *)(lVar6 + -0x38);
              if (((uVar17 >> 0x1d & 7) == 0) ||
                 (plVar9 = (long *)(lVar6 + -0x20), puVar8 = (undefined8 *)(lVar6 + -8),
                 ((uint)(uVar17 >> 0x1d) & 7) == 1)) {
                puVar8 = (undefined8 *)(*plVar9 + (uVar17 & 0x1fffffff) * 8);
              }
              *puVar8 = *(undefined8 *)(lStack_c8 + -8);
            }
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 0x60;
          } while (uVar2 != uVar17);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != ((ulong)(lVar1 - lVar11) >> 3 & 0xffffffff));
      lStack_e8 = lStack_b0;
      lStack_f0 = lStack_b8;
      lStack_e0 = lStack_e0 + -1;
      lVar11 = lStack_a8;
    }
  }
  plVar16 = plStack_c0;
  lVar18 = lStack_c8;
  lVar1 = lStack_d0;
  uVar5 = 0;
  if (uStack_d8 != 0) {
    uVar5 = (lStack_e0 + uStack_d8) / uStack_d8;
  }
  lStack_e0 = uVar5 * uStack_d8;
  lStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  param_1[1] = uStack_d8;
  *param_1 = lStack_e0;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar6 = param_1[5];
  param_1[3] = lVar18;
  param_1[2] = lVar1;
  param_1[4] = (long)plVar16;
  if (lVar6 != 0) {
    param_1[6] = lVar6;
    __ZdlPv();
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  param_1[6] = lStack_e8;
  param_1[5] = lStack_f0;
  param_1[7] = lVar11;
  lVar11 = *param_2;
  lVar1 = param_2[1];
  if ((lVar1 - lVar11 & 0x7fffffff8U) != 0) {
    uVar5 = 0;
    do {
      lVar18 = *(long *)(*param_2 + uVar5 * 8);
      uVar2 = (int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >> 2) * -0x55555555
      ;
      if (uVar2 != 0) {
        uVar15 = 0;
        do {
          func_0x0001098b30e4(param_1,uVar5 << 0x20 | (ulong)(uVar15 | 0x20000000),*param_2,
                              param_2[1] - *param_2 >> 3);
          uVar15 = uVar15 + 1;
        } while (uVar2 != uVar15);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != ((ulong)(lVar1 - lVar11) >> 3 & 0xffffffff));
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b30a4; end: 1098b3187;  */

long FUN_1098b30a4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b3188; end: 1098b319b;  */

void FUN_1098b3188(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x492492492492492 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        param_3[2] = puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar3 = puVar2[3];
        param_3[4] = puVar2[4];
        param_3[3] = uVar3;
        uVar3 = puVar2[6];
        param_3[5] = puVar2[5];
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        param_3[6] = uVar3;
        puVar2 = puVar2 + 7;
        param_3 = param_3 + 7;
      } while (puVar2 != param_2);
      do {
        func_0x0001098b3278(puVar1);
        puVar1 = puVar1 + 7;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x38);
  return;
}



/* Entry: 1098b319c; end: 1098b3307;  */

void FUN_1098b319c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        param_3[2] = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar2 = puVar1[3];
        param_3[4] = puVar1[4];
        param_3[3] = uVar2;
        uVar2 = puVar1[6];
        param_3[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        param_3[6] = uVar2;
        puVar1 = puVar1 + 7;
        param_3 = param_3 + 7;
      } while (puVar1 != param_2);
      do {
        func_0x0001098b3278(param_1);
        param_1 = param_1 + 7;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x38);
  return;
}



/* Entry: 1098b3308; end: 1098b337b;  */

long FUN_1098b3308(long param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0xffffffffffffffff;
  lVar1 = param_1;
  FUN_109460520(param_1,(long)(int)param_2,&uStack_28);
  FUN_109460520(lVar1 + 0x18,param_2 >> 0x20,&uStack_28);
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  return param_1;
}



/* Entry: 1098b337c; end: 1098b347f;  */

void FUN_1098b337c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x0001098b3278(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098b3480; end: 1098b353f;  */

void FUN_1098b3480(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  lVar1 = param_2;
  func_0x0001098b39b0();
  if (param_3 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    (**(code **)(*param_3 + 0x10))(&lStack_58,param_3,param_5,param_6);
    func_0x0001098b33ec(param_1,lStack_58,lStack_50 - lStack_58 >> 2,
                        *(long *)(param_2 + 0x40) + (long)(int)lVar1 * 0x38);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1098b3540; end: 1098b3957;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1098b3540(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *******pppppppuStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  
  lVar15 = param_1;
  FUN_1098b2ba8();
  plVar12 = (long *)(lVar15 + 0x60);
  *plVar12 = 0;
  plVar10 = (long *)(lVar15 + 0x58);
  *plVar10 = (long)plVar12;
  *(undefined8 *)(lVar15 + 0x68) = 0;
  lVar4 = param_3[3];
  ppppppuStack_70 = (undefined8 ******)0x0;
  pppppppuStack_68 = (undefined8 *******)0x0;
  pppppppuStack_78 = (undefined8 *******)0x0;
  lVar7 = param_3[4] - lVar4;
  lVar9 = lVar4;
  if (lVar7 != 0) {
    uVar11 = lVar7 >> 3;
    if (uVar11 >> 0x3d != 0) {
      FUN_1098b2b60();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098b38f0);
      (*pcVar1)();
    }
    pppppppuVar3 = &pppppppuStack_78;
    uVar6 = uVar11;
    FUN_1098b2b74();
    pppppppuStack_68 = pppppppuVar3 + uVar6;
    uVar6 = 0;
    pppppppuStack_78 = pppppppuVar3;
    do {
      pppppppuVar3[uVar6] = (undefined8 ******)&UNK_110b17c68;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar11 - 1 & 0x1fffffffffffffff) + 1);
    ppppppuStack_70 = (undefined8 ******)((long)pppppppuVar3 + lVar7);
    lVar4 = param_3[3];
    lVar9 = param_3[4];
  }
  lStack_88 = (long)ppppppuStack_70;
  lVar7 = lVar15 + 0x70;
  if (2 < (int)((ulong)(lVar9 - lVar4) >> 3)) {
    uVar11 = 2;
    do {
      lVar8 = *(long *)(param_3[3] + uVar11 * 8);
      if (((uint)*(undefined8 *)(*(long *)(lVar8 + 0x50) + 0x10) >> 1 & 1) != 0) {
        pppppppuStack_78[uVar11] = *(undefined8 *******)(*(long *)(lVar8 + 0x70) + 8);
      }
      uVar11 = uVar11 + 1;
    } while (((ulong)(lVar9 - lVar4) >> 3 & 0x7fffffff) != uVar11);
  }
  pppppppuStack_90 = pppppppuStack_78;
  pppppppuStack_80 = pppppppuStack_68;
  pppppppuStack_78 = (undefined8 *******)0x0;
  ppppppuStack_70 = (undefined8 ******)0x0;
  pppppppuStack_68 = (undefined8 *******)0x0;
  FUN_1098b2910(lVar7,&pppppppuStack_90);
  if (pppppppuStack_90 != (undefined8 *******)0x0) {
    __ZdlPv();
  }
  if (pppppppuStack_78 != (undefined8 *******)0x0) {
    ppppppuStack_70 = pppppppuStack_78;
    __ZdlPv();
  }
  *(long *)(param_1 + 0xb0) = lVar7;
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    __ZnwmSt11align_val_t(lVar4,*(undefined8 *)(param_1 + 0x78));
    lVar7 = *(long *)(param_1 + 0xb0);
  }
  *(long *)(param_1 + 0xb8) = lVar4;
  lVar4 = *(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28);
  if (lVar4 != 0) {
    lVar7 = 0;
    uVar11 = 0;
    do {
      if (1 < uVar11) {
        lVar9 = *(long *)(param_3[3] + (lVar7 >> 0x1d));
        if (((uint)*(undefined8 *)(*(long *)(lVar9 + 0x50) + 0x10) >> 1 & 1) != 0) {
          puVar5 = *(undefined8 **)(lVar9 + 0x70);
          (**(code **)*puVar5)
                    (puVar5,*(long *)(param_1 + 0xb8) +
                            *(long *)(*(long *)(*(long *)(param_1 + 0xb0) + 0x10) + uVar11 * 8));
        }
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0x100000000;
    } while (lVar4 >> 3 != uVar11);
  }
  if (plVar10 == param_3) {
    return param_1;
  }
  plVar13 = (long *)*param_3;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar4 = *plVar10;
    *plVar10 = (long)plVar12;
    *(undefined8 *)(*plVar12 + 0x10) = 0;
    *plVar12 = 0;
    *(undefined8 *)(lVar15 + 0x68) = 0;
    lVar7 = *(long *)(lVar4 + 8);
    if (lVar7 != 0) {
      lVar4 = lVar7;
    }
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar15 = lVar4;
      FUN_1098b3b3c();
      do {
        lVar7 = lVar15;
        if (plVar13 == param_3 + 1) break;
        lVar9 = plVar13[4];
        *(long *)(lVar4 + 0x28) = plVar13[5];
        *(long *)(lVar4 + 0x20) = lVar9;
        *(int *)(lVar4 + 0x30) = (int)plVar13[6];
        plVar12 = plVar10;
        FUN_1098b3a74(plVar10,&pppppppuStack_78,lVar4 + 0x20);
        FUN_1098b3ae8(plVar10,pppppppuStack_78,plVar12,lVar4);
        if (lVar15 != 0) {
          FUN_1098b3b3c();
        }
        plVar12 = (long *)plVar13[1];
        plVar14 = plVar13;
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar13 = (long *)plVar14[2];
            bVar2 = (long *)*plVar13 != plVar14;
            plVar14 = plVar13;
          } while (bVar2);
        }
        else {
          do {
            plVar13 = plVar12;
            plVar12 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        bVar2 = lVar15 != 0;
        lVar4 = lVar15;
        lVar15 = lVar7;
      } while (bVar2);
      FUN_1098b3a34(plVar10,lVar4);
      if (lVar7 == 0) goto joined_r0x0001098b3848;
      lVar4 = *(long *)(lVar7 + 0x10);
      while (lVar15 = lVar4, lVar15 != 0) {
        lVar7 = lVar15;
        lVar4 = *(long *)(lVar15 + 0x10);
      }
    }
    FUN_1098b3a34(plVar10,lVar7);
  }
joined_r0x0001098b3848:
  while (plVar13 != param_3 + 1) {
    lVar4 = 0x38;
    __Znwm();
    lVar15 = plVar13[5];
    lVar7 = plVar13[4];
    *(long *)(lVar4 + 0x30) = plVar13[6];
    *(long *)(lVar4 + 0x28) = lVar15;
    *(long *)(lVar4 + 0x20) = lVar7;
    plVar12 = plVar10;
    FUN_1098b3a74(plVar10,&pppppppuStack_78,lVar4 + 0x20);
    FUN_1098b3ae8(plVar10,pppppppuStack_78,plVar12,lVar4);
    plVar12 = (long *)plVar13[1];
    plVar14 = plVar13;
    if ((long *)plVar13[1] == (long *)0x0) {
      do {
        plVar13 = (long *)plVar14[2];
        bVar2 = (long *)*plVar13 != plVar14;
        plVar14 = plVar13;
      } while (bVar2);
    }
    else {
      do {
        plVar13 = plVar12;
        plVar12 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 1098b3958; end: 1098b3a2b;  */

long FUN_1098b3958(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x40;
  FUN_1098b337c(&lStack_28);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b3a2c; end: 1098b3a33;  */

void FUN_1098b3a2c(void)

{
  return;
}



/* Entry: 1098b3a34; end: 1098b3a73;  */

void FUN_1098b3a34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1098b3a34(param_1,*param_2);
    FUN_1098b3a34(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1098b3a74; end: 1098b3ae7;  */

long * FUN_1098b3a74(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar2 = (long *)(param_1 + 8);
  do {
    plVar4 = plVar2;
    if (plVar3 == (long *)0x0) {
LAB_1098b3ad4:
      *param_2 = (long)plVar4;
      return plVar2;
    }
    while( true ) {
      plVar4 = plVar3;
      uVar1 = *param_3;
      func_0x000107c2abd8(uVar1,param_3[1],plVar4[4],plVar4[5]);
      if (((uint)uVar1 >> 7 & 1) != 0) break;
      plVar3 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar2 = plVar4 + 1;
        goto LAB_1098b3ad4;
      }
    }
    plVar3 = (long *)*plVar4;
    plVar2 = plVar4;
  } while( true );
}



/* Entry: 1098b3ae8; end: 1098b3b3b;  */

void FUN_1098b3ae8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 1098b3b3c; end: 1098b3b8f;  */

void FUN_1098b3b3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 1098b3b90; end: 1098b3c43;  */

undefined8 * FUN_1098b3b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  func_0x0001098b3be8(param_1,param_2,*puVar2,puVar2);
  if (puVar2 != param_1) {
    uVar1 = *param_2;
    func_0x000107c2abd8(uVar1,param_2[1],param_1[4],param_1[5]);
    if (((uint)uVar1 >> 7 & 1) == 0) {
      return param_1;
    }
  }
  return puVar2;
}



/* Entry: 1098b3c44; end: 1098b402b;  */

void FUN_1098b3c44(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar20 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar20;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000108a5942c(param_1 + 3,(param_1[1] - *param_1 >> 3) + 1);
  uVar12 = param_1[1] - *param_1;
  if ((uVar12 & 0x7fffffff8) != 0) {
    piVar8 = (int *)param_1[3];
    uVar12 = uVar12 >> 3 & 0xffffffff;
    iVar14 = *piVar8;
    puVar5 = (undefined8 *)*param_1;
    do {
      piVar8 = piVar8 + 1;
      iVar14 = iVar14 + (int)((ulong)(((long *)*puVar5)[1] - *(long *)*puVar5) >> 5) * -0x55555555;
      *piVar8 = iVar14;
      uVar12 = uVar12 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar12 != 0);
  }
  param_1[7] = param_1[6];
  param_1[10] = param_1[9];
  func_0x000108a5942c(param_1 + 0xc,(long)*(int *)(param_1[4] + -4));
  plVar10 = param_1 + 0xf;
  FUN_1098b402c();
  iVar14 = *(int *)(param_1[4] + -4);
  uVar6 = (ulong)iVar14;
  lVar20 = param_1[0xf];
  plVar16 = (long *)param_1[0x10];
  lVar15 = (long)plVar16 - lVar20;
  bVar4 = uVar6 < (ulong)((lVar15 >> 3) * -0x5555555555555555);
  uVar12 = uVar6 + (lVar15 >> 3) * 0x5555555555555555;
  if (bVar4 || uVar12 == 0) {
    if (bVar4) {
      plVar10 = (long *)(lVar20 + (long)iVar14 * 0x18);
      while (plVar17 = plVar16, plVar17 != plVar10) {
        plVar16 = plVar17 + -3;
        if (*plVar16 != 0) {
          plVar17[-2] = *plVar16;
          __ZdlPv();
        }
      }
      param_1[0x10] = (long)plVar10;
    }
  }
  else {
    if ((ulong)((param_1[0x11] - (long)plVar16 >> 3) * -0x5555555555555555) < uVar12) {
      if (iVar14 < 0) {
        FUN_1098b4154();
      }
      else {
        lVar9 = param_1[0x11] - lVar20 >> 3;
        uVar13 = lVar9 * 0x5555555555555556;
        if (uVar13 < uVar6 || uVar13 - uVar6 == 0) {
          uVar13 = uVar6;
        }
        if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar13 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar13 < 0xaaaaaaaaaaaaaab) {
          lVar9 = uVar13 * 0x18;
          __Znwm();
          lVar18 = ((uVar12 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
          _bzero(lVar9 + lVar15,lVar18);
          _memcpy(lVar9,lVar20,lVar15);
          param_1[0xf] = lVar9;
          param_1[0x10] = lVar9 + lVar15 + lVar18;
          param_1[0x11] = lVar9 + uVar13 * 0x18;
          if (lVar20 != 0) {
            __ZdlPv(lVar20);
          }
          goto LAB_1098b3e90;
        }
      }
      func_0x000104c4f740();
      plVar16 = (long *)*plVar10;
      plVar17 = (long *)plVar10[1];
      while (plVar3 = plVar17, plVar3 != plVar16) {
        plVar17 = plVar3 + -3;
        if (*plVar17 != 0) {
          plVar3[-2] = *plVar17;
          __ZdlPv();
        }
      }
      plVar10[1] = (long)plVar16;
      return;
    }
    uVar12 = (uVar12 * 0x18 - 0x18) / 0x18;
    _bzero(plVar16,uVar12 * 0x18 + 0x18);
    param_1[0x10] = (long)(plVar16 + uVar12 * 3 + 3);
  }
LAB_1098b3e90:
  lVar20 = *param_1;
  lVar15 = param_1[1];
  if ((lVar15 - lVar20 & 0x7fffffff8U) != 0) {
    uVar12 = 0;
    do {
      plVar10 = *(long **)(*param_1 + uVar12 * 8);
      uVar2 = (int)((ulong)(plVar10[1] - *plVar10) >> 5) * -0x55555555;
      if (uVar2 != 0) {
        uVar6 = 0;
        uVar13 = uVar12 << 0x20;
        do {
          lVar9 = *plVar10 + uVar6 * 0x60;
          puVar19 = *(uint **)(lVar9 + 0x48);
          puVar1 = *(uint **)(lVar9 + 0x50);
          if (puVar19 == puVar1) {
            iVar14 = 0;
          }
          else {
            iVar14 = 0;
            do {
              uVar7 = uVar13 | *puVar19;
              uVar11 = (ulong)*puVar19 & 0xe0000000;
              if (uVar11 == 0x20000000) {
                do {
                  uVar7 = *(ulong *)(*(long *)(*(long *)(*param_1 + ((long)uVar7 >> 0x20) * 8) +
                                              0x18) + (uVar7 & 0x1fffffff) * 0xc);
                  uVar11 = uVar7 & 0xe0000000;
                } while (uVar11 == 0x20000000);
              }
              if (uVar11 != 0x40000000) {
                iVar14 = iVar14 + 1;
                FUN_1098b4080(param_1[0xf] +
                              (long)(int)(*(int *)(param_1[3] + ((long)uVar7 >> 0x20) * 4) +
                                         ((uint)uVar7 & 0x1fffffff)) * 0x18,uVar6 | uVar13);
              }
              puVar19 = puVar19 + 1;
            } while (puVar19 != puVar1);
          }
          *(int *)(param_1[0xc] +
                  (long)(int)(*(int *)(param_1[3] +
                                      (-(uVar12 >> 0x1f & 1) & 0xfffffffc00000000 |
                                      (uVar12 & 0xffffffff) << 2)) + ((uint)uVar6 & 0x1fffffff)) * 4
                  ) = iVar14;
          if (iVar14 == 0) {
            plVar16 = param_1 + 9;
            if (*(char *)(*(long *)(lVar9 + 8) + 8) == '\0') {
              plVar16 = param_1 + 6;
            }
            FUN_1098b4080(plVar16,uVar6 | uVar13);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != ((ulong)(lVar15 - lVar20) >> 3 & 0xffffffff));
  }
  return;
}



/* Entry: 1098b402c; end: 1098b407f;  */

void FUN_1098b402c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1098b4080; end: 1098b4153;  */

/* WARNING: Possible PIC construction at 0x0001098b414c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098b4320) */

void FUN_1098b4080(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 **ppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *extraout_x8;
  ulong extraout_x8_00;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar27;
  undefined8 uVar28;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 *puVar23;
  
  ppuVar7 = (undefined1 **)&stack0xffffffffffffffb0;
  ppuVar27 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    puVar25 = puVar9 + 1;
    *puVar9 = param_2;
LAB_1098b4130:
    param_1[1] = (long)puVar25;
    return;
  }
  lVar19 = *param_1;
  lVar20 = (long)puVar9 - lVar19;
  lVar21 = lVar20 >> 3;
  uVar18 = lVar21 + 1;
  uVar16 = param_2;
  if (uVar18 >> 0x3d == 0) {
    uVar15 = param_1[2] - lVar19;
    unaff_x25 = (long)uVar15 >> 2;
    if (unaff_x25 <= uVar18) {
      unaff_x25 = uVar18;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      unaff_x25 = 0x1fffffffffffffff;
    }
    if (unaff_x25 >> 0x3d == 0) {
      lVar8 = unaff_x25 << 3;
      __Znwm();
      puVar9 = (undefined8 *)(lVar8 + lVar20);
      puVar25 = puVar9 + 1;
      *puVar9 = param_2;
      _memcpy(puVar9 + -lVar21,lVar19,lVar20);
      *param_1 = (long)(puVar9 + -lVar21);
      param_1[1] = (long)puVar25;
      param_1[2] = lVar8 + unaff_x25 * 8;
      if (lVar19 != 0) {
        __ZdlPv(lVar19);
      }
      goto LAB_1098b4130;
    }
    func_0x000104c4f740();
    ppuVar7 = &puStack_60;
    uStack_58 = 0x1098b4154;
    uVar28 = 0x1098b4168;
    puStack_60 = (undefined1 *)ppuVar27;
    func_0x000104c4f6cc(&DAT_10f62a4d8);
    ppuVar27 = &puStack_60;
  }
  else {
    uVar28 = 0x1098b4150;
  }
  *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar27;
  *(undefined8 *)((long)ppuVar7 + -8) = uVar28;
  puVar17 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *(undefined8 *)((long)ppuVar7 + -0x70) = unaff_x28;
  *(undefined8 *)((long)ppuVar7 + -0x68) = unaff_x27;
  *(undefined8 *)((long)ppuVar7 + -0x60) = unaff_x26;
  *(ulong *)((long)ppuVar7 + -0x58) = unaff_x25;
  *(undefined8 **)((long)ppuVar7 + -0x50) = puVar9;
  *(long *)((long)ppuVar7 + -0x48) = lVar21;
  *(long *)((long)ppuVar7 + -0x40) = lVar20;
  *(undefined8 *)((long)ppuVar7 + -0x38) = param_2;
  *(long *)((long)ppuVar7 + -0x30) = lVar19;
  *(long **)((long)ppuVar7 + -0x28) = param_1;
  *(undefined1 **)((long)ppuVar7 + -0x20) = (undefined1 *)((long)ppuVar7 + -0x10);
  *(code **)((long)ppuVar7 + -0x18) = FUN_1098b417c;
  puVar9 = (undefined8 *)0xd0;
  __Znwm();
  *puVar9 = FUN_1098b4a1c;
  puVar9[1] = FUN_1098b4bac;
  FUN_1092ba17c(puVar9 + 2);
  lVar19 = puVar9[7];
  if (lVar19 != 0) {
    plVar14 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *extraout_x8 = lVar19;
  func_0x000109d1a6fc(puVar9 + 0x16);
  puVar9[0xd] = 0;
  puVar9[9] = puVar17;
  puVar9[10] = uVar16;
  puVar9[0xb] = param_3;
  puVar9[0xc] = param_4;
  puVar22 = *(undefined4 **)(param_4 + 0x60);
  puVar2 = *(undefined4 **)(param_4 + 0x68);
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar11 = (undefined4 *)((long)puVar2 - (long)puVar22);
  if (puVar11 != (undefined4 *)0x0) {
    if ((long)puVar11 < 0) {
      FUN_1098b48c4();
      goto LAB_1098b4490;
    }
    puVar10 = puVar11;
    __Znwm();
    puVar9[0xd] = puVar10;
    puVar9[0xe] = puVar10;
    puVar9[0xf] = (long)puVar10 + (long)puVar11;
    do {
      puVar23 = puVar22 + 1;
      puVar11 = puVar10 + 1;
      *puVar10 = *puVar22;
      puVar10 = puVar11;
      puVar22 = puVar23;
    } while (puVar23 != puVar2);
    puVar9[0xe] = puVar11;
  }
  puVar25 = *(undefined8 **)(param_4 + 0x30);
  puVar3 = *(undefined8 **)(param_4 + 0x38);
  puVar24 = *(undefined8 **)(param_4 + 0x48);
  puVar26 = *(undefined8 **)(param_4 + 0x50);
  ppuVar12 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)((long)puVar26 - (long)puVar24);
  plVar14 = puVar9 + 0x15;
  *plVar14 = puVar9[0x17];
  puVar17 = *ppuVar12;
  puVar9[0x11] = param_5;
  puVar9[0x12] = puVar17;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x17] = 0;
  uVar18 = (long)puVar3 - (long)puVar25;
  *(int *)(puVar9 + 0x10) = (int)(extraout_x8_00 >> 3) + (int)(uVar18 >> 3);
  if (uVar18 != 0) {
    do {
      puVar24 = puVar25 + 1;
      FUN_1098b4550(puVar9 + 9,*puVar25);
      puVar25 = puVar24;
    } while (puVar24 != puVar3);
    puVar24 = *(undefined8 **)(param_4 + 0x48);
    puVar26 = *(undefined8 **)(param_4 + 0x50);
  }
  for (; puVar24 != puVar26; puVar24 = puVar24 + 1) {
    FUN_1098b4648(puVar9 + 9,*puVar24);
  }
  puVar9[0x18] = puVar9[0x16];
  plVar13 = (long *)(puVar9[0x16] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar9[0x18] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x19) = 0;
    lVar19 = puVar9[0x18];
    plVar13 = (long *)(lVar19 + 0x10);
    uVar16 = puVar9[3];
    do {
      lVar20 = *plVar13;
      if (lVar20 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          *(undefined8 *)((long)ppuVar7 + -0x88) = 0;
          *(undefined8 **)((long)ppuVar7 + -0x80) = puVar9;
          *(undefined8 *)((long)ppuVar7 + -0x78) = uVar16;
          func_0x000109d1b588(lVar19 + 0x18,(undefined1 *)((long)ppuVar7 + -0x88));
          *(undefined8 *)(lVar19 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar20 >> 1 & 1) == 0);
  }
  plVar13 = (long *)puVar9[0x18];
  if (((uint)*(undefined8 *)(puVar9[0x18] + 0x10) >> 5 & 1) == 0) {
    if (plVar13 != (long *)0x0) {
      puVar1 = (ulong *)(plVar13 + 1);
      do {
        uVar18 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar18 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar18 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    if (*plVar14 != 0) {
      FUN_1092b4274(plVar14);
    }
    __ZNSt13exception_ptrD1Ev(puVar9 + 0x14);
    if (puVar9[0xd] != 0) {
      puVar9[0xe] = puVar9[0xd];
      __ZdlPv();
    }
    if (puVar9[0x17] != 0) {
      FUN_1092b4274(puVar9 + 0x17);
    }
    plVar14 = (long *)puVar9[0x16];
    if (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar18 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar18 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar18 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
    }
    FUN_1092ba100(puVar9 + 2);
    func_0x000109d1a1d0(puVar9 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar9);
    return;
  }
  FUN_1092af97c(plVar13 + 0x12);
LAB_1098b4490:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098b4494);
  (*pcVar6)();
}



/* Entry: 1098b4154; end: 1098b417b;  */

/* WARNING: Removing unreachable block (ram,0x0001098b4320) */

void FUN_1098b4154(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x8;
  long lVar13;
  ulong extraout_x8_00;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 *puVar18;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar14 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar7 = (undefined8 *)0xd0;
  __Znwm();
  *puVar7 = FUN_1098b4a1c;
  puVar7[1] = FUN_1098b4bac;
  FUN_1092ba17c(puVar7 + 2);
  lVar13 = puVar7[7];
  if (lVar13 != 0) {
    plVar12 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *extraout_x8 = lVar13;
  func_0x000109d1a6fc(puVar7 + 0x16);
  puVar7[0xd] = 0;
  puVar7[9] = puVar14;
  puVar7[10] = param_2;
  puVar7[0xb] = param_3;
  puVar7[0xc] = param_4;
  puVar17 = *(undefined4 **)(param_4 + 0x60);
  puVar2 = *(undefined4 **)(param_4 + 0x68);
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar9 = (undefined4 *)((long)puVar2 - (long)puVar17);
  if (puVar9 != (undefined4 *)0x0) {
    if ((long)puVar9 < 0) {
      FUN_1098b48c4();
      goto LAB_1098b4490;
    }
    puVar8 = puVar9;
    __Znwm();
    puVar7[0xd] = puVar8;
    puVar7[0xe] = puVar8;
    puVar7[0xf] = (long)puVar8 + (long)puVar9;
    do {
      puVar18 = puVar17 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar17;
      puVar8 = puVar9;
      puVar17 = puVar18;
    } while (puVar18 != puVar2);
    puVar7[0xe] = puVar9;
  }
  puVar21 = *(undefined8 **)(param_4 + 0x30);
  puVar3 = *(undefined8 **)(param_4 + 0x38);
  puVar19 = *(undefined8 **)(param_4 + 0x48);
  puVar20 = *(undefined8 **)(param_4 + 0x50);
  ppuVar10 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)((long)puVar20 - (long)puVar19);
  plVar12 = puVar7 + 0x15;
  *plVar12 = puVar7[0x17];
  puVar14 = *ppuVar10;
  puVar7[0x11] = param_5;
  puVar7[0x12] = puVar14;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x17] = 0;
  uVar15 = (long)puVar3 - (long)puVar21;
  *(int *)(puVar7 + 0x10) = (int)(extraout_x8_00 >> 3) + (int)(uVar15 >> 3);
  if (uVar15 != 0) {
    do {
      puVar19 = puVar21 + 1;
      FUN_1098b4550(puVar7 + 9,*puVar21);
      puVar21 = puVar19;
    } while (puVar19 != puVar3);
    puVar19 = *(undefined8 **)(param_4 + 0x48);
    puVar20 = *(undefined8 **)(param_4 + 0x50);
  }
  for (; puVar19 != puVar20; puVar19 = puVar19 + 1) {
    FUN_1098b4648(puVar7 + 9,*puVar19);
  }
  puVar7[0x18] = puVar7[0x16];
  plVar11 = (long *)(puVar7[0x16] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = *plVar11 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x19) = 0;
    lVar13 = puVar7[0x18];
    plVar11 = (long *)(lVar13 + 0x10);
    uStack_88 = puVar7[3];
    do {
      lVar16 = *plVar11;
      if (lVar16 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uStack_98 = 0;
          puStack_90 = puVar7;
          func_0x000109d1b588(lVar13 + 0x18,&uStack_98);
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar16 >> 1 & 1) == 0);
  }
  plVar11 = (long *)puVar7[0x18];
  if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) == 0) {
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    if (*plVar12 != 0) {
      FUN_1092b4274(plVar12);
    }
    __ZNSt13exception_ptrD1Ev(puVar7 + 0x14);
    if (puVar7[0xd] != 0) {
      puVar7[0xe] = puVar7[0xd];
      __ZdlPv();
    }
    if (puVar7[0x17] != 0) {
      FUN_1092b4274(puVar7 + 0x17);
    }
    plVar12 = (long *)puVar7[0x16];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    FUN_1092ba100(puVar7 + 2);
    func_0x000109d1a1d0(puVar7 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar7);
    return;
  }
  FUN_1092af97c(plVar11 + 0x12);
LAB_1098b4490:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098b4494);
  (*pcVar6)();
}



/* Entry: 1098b417c; end: 1098b454f;  */

/* WARNING: Removing unreachable block (ram,0x0001098b4320) */

void FUN_1098b417c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong extraout_x8;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined4 *puVar18;
  
  puVar7 = (undefined8 *)0xd0;
  __Znwm();
  *puVar7 = FUN_1098b4a1c;
  puVar7[1] = FUN_1098b4bac;
  FUN_1092ba17c(puVar7 + 2);
  lVar13 = puVar7[7];
  if (lVar13 != 0) {
    plVar12 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar13;
  func_0x000109d1a6fc(puVar7 + 0x16);
  puVar7[0xd] = 0;
  puVar7[9] = param_2;
  puVar7[10] = param_3;
  puVar7[0xb] = param_4;
  puVar7[0xc] = param_5;
  puVar17 = *(undefined4 **)(param_5 + 0x60);
  puVar2 = *(undefined4 **)(param_5 + 0x68);
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar9 = (undefined4 *)((long)puVar2 - (long)puVar17);
  if (puVar9 != (undefined4 *)0x0) {
    if ((long)puVar9 < 0) {
      FUN_1098b48c4();
      goto LAB_1098b4490;
    }
    puVar8 = puVar9;
    __Znwm();
    puVar7[0xd] = puVar8;
    puVar7[0xe] = puVar8;
    puVar7[0xf] = (long)puVar8 + (long)puVar9;
    do {
      puVar18 = puVar17 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar17;
      puVar8 = puVar9;
      puVar17 = puVar18;
    } while (puVar18 != puVar2);
    puVar7[0xe] = puVar9;
  }
  puVar21 = *(undefined8 **)(param_5 + 0x30);
  puVar3 = *(undefined8 **)(param_5 + 0x38);
  puVar19 = *(undefined8 **)(param_5 + 0x48);
  puVar20 = *(undefined8 **)(param_5 + 0x50);
  ppuVar10 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)((long)puVar20 - (long)puVar19);
  plVar12 = puVar7 + 0x15;
  *plVar12 = puVar7[0x17];
  puVar14 = *ppuVar10;
  puVar7[0x11] = param_6;
  puVar7[0x12] = puVar14;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x17] = 0;
  uVar15 = (long)puVar3 - (long)puVar21;
  *(int *)(puVar7 + 0x10) = (int)(extraout_x8 >> 3) + (int)(uVar15 >> 3);
  if (uVar15 != 0) {
    do {
      puVar19 = puVar21 + 1;
      FUN_1098b4550(puVar7 + 9,*puVar21);
      puVar21 = puVar19;
    } while (puVar19 != puVar3);
    puVar19 = *(undefined8 **)(param_5 + 0x48);
    puVar20 = *(undefined8 **)(param_5 + 0x50);
  }
  for (; puVar19 != puVar20; puVar19 = puVar19 + 1) {
    FUN_1098b4648(puVar7 + 9,*puVar19);
  }
  puVar7[0x18] = puVar7[0x16];
  plVar11 = (long *)(puVar7[0x16] + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = *plVar11 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar7 + 0x19) = 0;
    lVar13 = puVar7[0x18];
    plVar11 = (long *)(lVar13 + 0x10);
    uStack_68 = puVar7[3];
    do {
      lVar16 = *plVar11;
      if (lVar16 == 0) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uStack_78 = 0;
          puStack_70 = puVar7;
          func_0x000109d1b588(lVar13 + 0x18,&uStack_78);
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar16 >> 1 & 1) == 0);
  }
  plVar11 = (long *)puVar7[0x18];
  if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) == 0) {
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    if (*plVar12 != 0) {
      FUN_1092b4274(plVar12);
    }
    __ZNSt13exception_ptrD1Ev(puVar7 + 0x14);
    if (puVar7[0xd] != 0) {
      puVar7[0xe] = puVar7[0xd];
      __ZdlPv();
    }
    if (puVar7[0x17] != 0) {
      FUN_1092b4274(puVar7 + 0x17);
    }
    plVar12 = (long *)puVar7[0x16];
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar15 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar15 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar15 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    FUN_1092ba100(puVar7 + 2);
    func_0x000109d1a1d0(puVar7 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar7);
    return;
  }
  FUN_1092af97c(plVar11 + 0x12);
LAB_1098b4490:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098b4494);
  (*pcVar6)();
}



/* Entry: 1098b4550; end: 1098b4647;  */

void FUN_1098b4550(long param_1,long param_2)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  pbVar2 = (byte *)(param_1 + 0x50);
  if ((*pbVar2 & 1) == 0) {
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x78) +
                     (long)(int)(*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) +
                                         (param_2 >> 0x20) * 4) + ((uint)param_2 & 0x1fffffff)) *
                     0x18);
    plVar10 = (long *)*plVar7;
    plVar7 = (long *)plVar7[1];
    if (plVar10 != plVar7) {
      piVar3 = (int *)(param_1 + 0x38);
      do {
        piVar1 = (int *)(*(long *)(param_1 + 0x20) +
                        (long)(int)(*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) +
                                            (*plVar10 >> 0x20) * 4) + ((uint)*plVar10 & 0x1fffffff))
                        * 4);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          FUN_1098b4648(param_1);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar7);
    }
  }
  piVar3 = (int *)(param_1 + 0x38);
  do {
    iVar4 = *piVar3;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = iVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 + -1 != 0) {
    return;
  }
  plVar10 = (long *)(param_1 + 0x60);
  if ((*pbVar2 & 1) != 0) {
    *pbVar2 = 0;
    lVar9 = *plVar10;
    *plVar10 = 0;
    func_0x000109d1b350(lVar9,param_1 + 0x58);
    if (lVar9 != 0) {
      FUN_1092b4274(&stack0xffffffffffffffd8,lVar9);
    }
    return;
  }
  lVar9 = *plVar10;
  *plVar10 = 0;
  plVar10 = (long *)(lVar9 + 0x10);
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        func_0x000109d1b4dc(lVar9 + 0x18);
        goto code_r0x000109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
      if (lVar9 != 0) {
code_r0x000109d1a7c8:
        FUN_1092b4274(&stack0xffffffffffffffd8,lVar9);
      }
      return;
    }
  } while( true );
}



/* Entry: 1098b4648; end: 1098b480b;  */

void FUN_1098b4648(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_68 [8];
  long lStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  iVar5 = (int)(param_2 >> 0x20);
  if (((iVar5 < 2) ||
      (puVar1 = *(undefined8 **)
                 (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x18) + (param_2 >> 0x20) * 8) +
                 0xb0), puVar1 == (undefined8 *)0x0)) || (*(char *)(puVar1[1] + 8) != '\x01')) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
  }
  else {
    (*(code *)*puVar1)();
  }
  plVar3 = (long *)puVar1[2];
  puStack_48 = puVar1;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x20;
    __Znwm();
    *plVar3 = param_1;
    *(int *)(plVar3 + 1) = (int)param_2;
    *(int *)((long)plVar3 + 0xc) = iVar5;
    plVar3[3] = 0x1098b4a10;
    pcStack_58 = FUN_1098b4908;
    plStack_50 = plVar3;
    (**(code **)*puVar1)(puVar1,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3,0,&lStack_60);
    if (lStack_60 != 0) {
      plVar3 = &lStack_60;
      __ZNSt13exception_ptrD1Ev(plVar3);
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x18) + ((long)param_2 >> 0x20) * 8)
        ;
        func_0x000109d1857c();
        __ZNSt13exception_ptrC1ERKS_(auStack_68,plVar3);
        FUN_1098bc668((byte *)(param_1 + 0x50),auStack_68,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar4 + 8),
                      *(undefined8 *)(lVar4 + 0x10),&UNK_10f586154,0x13);
        __ZNSt13exception_ptrD1Ev(auStack_68);
      }
      FUN_1098b4550(param_1,param_2);
      return;
    }
    plVar2 = (long *)0x28;
    __Znwm();
    *plVar2 = param_1;
    *(int *)(plVar2 + 1) = (int)param_2;
    *(int *)((long)plVar2 + 0xc) = iVar5;
    plVar2[3] = (long)FUN_1098b4a04;
    plVar2[4] = (long)plVar3;
    pcStack_58 = FUN_1098b48d8;
    plStack_50 = plVar2;
    (**(code **)*puVar1)(puVar1,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  return;
}



/* Entry: 1098b480c; end: 1098b48c3;  */

long FUN_1098b480c(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1092b4274();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b48c4; end: 1098b48d7;  */

void FUN_1098b48c4(void)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar2 = *(long **)(puVar1 + 0x20);
  FUN_1098b4908();
                    /* WARNING: Could not recover jumptable at 0x0001098b4904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 1098b48d8; end: 1098b4907;  */

void FUN_1098b48d8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_1098b4908();
                    /* WARNING: Could not recover jumptable at 0x0001098b4904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 1098b4908; end: 1098b4a03;  */

void FUN_1098b4908(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  if (((uint)*(undefined8 *)
              (*(long *)(*(long *)(*(long *)(plVar1[8] + 0x18) + ((long)uVar2 >> 0x20) * 8) + 0x50)
              + 0x10) >> 1 & 1) != 0) {
    puVar3 = (undefined8 *)
             (**(long **)(*(long *)plVar1[3] + ((long)uVar2 >> 0x20) * 8) +
             (uVar2 & 0x1fffffff) * 0x60);
    (*(code *)*puVar3)(((long *)*plVar1)[3],
                       *(long *)(*(long *)*plVar1 + 0x40) + (long)(int)(uVar2 >> 0x20) * 0x38,
                       uVar2 & 0xffffffff,puVar3[9],(long)(puVar3[10] - puVar3[9]) >> 2);
  }
  FUN_1098b4550(plVar1,uVar2);
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 1098b4a04; end: 1098b4a1b;  */

void FUN_1098b4a04(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1098b4a1c; end: 1098b4bab;  */

void FUN_1098b4a1c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_1092b4274();
    }
    __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
    if (*(long *)(param_1 + 0x68) != 0) {
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
      __ZdlPv();
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_1092b4274();
    }
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    FUN_1092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  FUN_1092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b4b30);
  (*pcVar4)();
}



/* Entry: 1098b4bac; end: 1098b4c9b;  */

void FUN_1098b4bac(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0xc0);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1092b4274();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_1092b4274();
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098b4c9c; end: 1098b4ee3;  */

void FUN_1098b4c9c(undefined8 *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 uStack_81;
  long alStack_80 [3];
  int iStack_64;
  
  iStack_64 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_81 = 0;
  func_0x0001074b2d2c(alStack_80,*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18) >> 3,
                      &uStack_81);
  puVar2 = *(uint **)(*(long *)(param_3 + 0x30) + 0x30);
  puVar1 = *(uint **)(*(long *)(param_3 + 0x30) + 0x38);
  if (puVar2 != puVar1) {
    lVar6 = *(long *)(param_3 + 0x18);
    do {
      uVar9 = *puVar2;
      uVar7 = puVar2[1];
      while( true ) {
        uVar8 = (ulong)(int)uVar7;
        uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(alStack_80[0] + uVar11) =
             1L << (uVar8 & 0x3f) | *(ulong *)(alStack_80[0] + uVar11);
        if (uVar9 >> 0x1d != 1) break;
        puVar10 = (uint *)(*(long *)(*(long *)(lVar6 + uVar8 * 8) + 0x30) +
                          (ulong)(uVar9 & 0x1fffffff) * 0xc);
        uVar9 = *puVar10;
        uVar7 = puVar10[1];
      }
      puVar2 = puVar2 + 3;
    } while (puVar2 != puVar1);
  }
  uVar8 = *(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18);
  if (2 < (int)(uVar8 >> 3)) {
    uVar11 = 2;
    do {
      if ((((*(ulong *)(alStack_80[0] + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) &&
          (lVar6 = *(long *)(*(long *)(param_3 + 0x18) + uVar11 * 8),
          (*(byte *)(*(long *)(lVar6 + 0x80) + 8) & 1) == 0)) &&
         (uVar9 = (int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 5) *
                  -0x55555555, uVar9 != 0)) {
        uVar12 = 0;
        plVar13 = (long *)(*(long *)(param_2 + 0x40) + uVar11 * 0x38);
        do {
          if (**(long **)(*(long *)(lVar6 + 0x18) + uVar12 * 0x60 + 0x40) != 0) {
            plVar3 = plVar13;
            if (((uVar12 >> 0x1d & 7) == 0) ||
               (plVar3 = plVar13 + 3, puVar4 = (ulong *)(plVar13 + 6),
               ((uint)(uVar12 >> 0x1d) & 7) == 1)) {
              puVar4 = (ulong *)(*plVar3 + (uVar12 & 0x1fffffff) * 8);
            }
            if (*(ulong *)(*(long *)(param_2 + 0x10) + (long)iStack_64 * 8) < *puVar4) {
              puVar5 = (ulong *)(*(long *)(param_2 + 0x10) + (long)iStack_64 * 8);
              do {
                puVar5 = puVar5 + 1;
                iStack_64 = iStack_64 + 1;
              } while (*puVar5 < *puVar4);
            }
            FUN_10923b3a0(param_1,&iStack_64);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar9);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != (uVar8 >> 3 & 0x7fffffff));
  }
  if (alStack_80[0] != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1098b4ee4; end: 1098b4f5b;  */

void FUN_1098b4ee4(long *param_1,int *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar1 = param_1[3];
    lVar2 = *param_1;
    param_3 = param_3 << 2;
    do {
      lVar3 = (long)*param_2;
      lVar4 = *(long *)(*(long *)(lVar2 + 0x10) + lVar3 * 8);
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x28) + lVar3 * 8) + 0x18))(lVar1 + lVar4);
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x28) + lVar3 * 8) + 0x10))(lVar1 + lVar4);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 1098b4f5c; end: 1098b4fd3;  */

undefined8 * FUN_1098b4f5c(undefined8 *param_1,int param_2)

{
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    uStack_38 = 0x100000000;
    uStack_30 = 0;
    FUN_1098ac19c(param_1 + 3,&uStack_38);
  }
  return param_1;
}



/* Entry: 1098b4fd4; end: 1098b50a7;  */

void FUN_1098b4fd4(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_3 >> 0x20;
  FUN_1098b50a8(param_1,*param_1 + (long)(int)param_3 * 0x60,param_1[1]);
  lVar2 = param_1[3];
  lVar3 = param_1[4];
  lVar4 = (long)param_3 >> 0x20;
  if ((int)(param_3 >> 0x20) != (int)((ulong)(lVar3 - lVar2) >> 2) * -0x55555555) {
    lVar6 = lVar4 * 0xc;
    do {
      FUN_1098bda24(param_2,lVar2 + lVar6);
      lVar2 = param_1[3];
      lVar3 = param_1[4];
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
      lVar6 = lVar6 + 0xc;
    } while (uVar1 != (int)((ulong)(lVar3 - lVar2) >> 2) * -0x55555555);
  }
  lVar6 = lVar3 - (lVar2 + lVar4 * 0xc);
  if (lVar6 != 0) {
    lVar2 = lVar2 + lVar4 * 0xc;
    lVar6 = lVar2 + lVar6;
    if (lVar3 != lVar6) {
      _memmove(lVar2,lVar6,lVar3 - lVar6);
    }
    param_1[4] = lVar2 + (lVar3 - lVar6);
  }
  return;
}



/* Entry: 1098b50a8; end: 1098b50fb;  */

long FUN_1098b50a8(long param_1,long param_2,long param_3)

{
  undefined1 uStack_21;
  
  if (param_3 != param_2) {
    FUN_1098b50fc(&uStack_21,param_3,*(undefined8 *)(param_1 + 8),param_2);
    FUN_1098ad2d8(param_1);
  }
  return param_2;
}



/* Entry: 1098b50fc; end: 1098b5193;  */

undefined1  [16]
FUN_1098b50fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    *param_4 = *param_2;
    puVar1 = param_4 + 1;
    (**(code **)*puVar1)(puVar1);
    (**(code **)(param_2[1] + 0x10))(puVar1,param_2 + 1);
    param_4[8] = param_2[8];
    FUN_1098b0ed4(param_4 + 9,param_2 + 9);
    param_4 = param_4 + 0xc;
    puVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = puVar1;
  return auVar2;
}



/* Entry: 1098b5194; end: 1098b5277;  */

void FUN_1098b5194(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int aiStack_4c [3];
  
  FUN_1092a997c(param_1,*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (param_3 < (int)((ulong)(lVar3 - lVar2) >> 3) * -0x55555555) {
    do {
      lVar4 = *(long *)(*(long *)(param_2 + 0x18) + (long)param_3 * 8);
      lVar1 = *(long *)(lVar4 + 0x30);
      if (1 < (int)((ulong)(*(long *)(lVar4 + 0x38) - lVar1) >> 2) * -0x55555555) {
        aiStack_4c[0] = param_3;
        FUN_10923b3a0(lVar2 + (long)*(int *)(lVar1 + 0x10) * 0x18,aiStack_4c);
        lVar2 = *param_1;
        lVar3 = param_1[1];
        param_3 = aiStack_4c[0];
      }
      param_3 = param_3 + 1;
    } while (param_3 < (int)((ulong)(lVar3 - lVar2) >> 3) * -0x55555555);
  }
  return;
}



/* Entry: 1098b5278; end: 1098b5493;  */

void FUN_1098b5278(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  uint *apuStack_b8 [3];
  int iStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  uVar5 = *(long *)(param_2 + 0x20) - lVar12;
  uVar9 = uVar5 >> 3;
  if ((int)uVar9 != 0) {
    uVar11 = 0;
    do {
      uStack_98 = (uint)uVar11;
      if (*(long *)(*(long *)(lVar12 + uVar11 * 8) + 0x60) == 0) {
        uVar1 = uStack_98;
        if ((int)(uint)uVar9 <= (int)uStack_98) {
          uVar1 = (uint)uVar9;
        }
        uVar9 = (ulong)uVar1;
      }
      else {
        func_0x000108a5413c(&uStack_80,&uStack_98);
      }
      uVar11 = uVar11 + 1;
    } while ((uVar5 >> 3 & 0xffffffff) != uVar11);
  }
  FUN_1098b5194(&uStack_98,param_2,uVar9);
  do {
    do {
      if (lStack_58 == 0) {
        apuStack_b8[0] = &uStack_98;
        func_0x0001092a9abc(apuStack_b8);
        FUN_1098b5494(&uStack_80);
        return;
      }
      iVar3 = *(int *)(puStack_78[uStack_60 >> 10] + (uStack_60 & 0x3ff) * 4);
      lStack_58 = lStack_58 + -1;
      uStack_60 = uStack_60 + 1;
      if (0x7ff < uStack_60) {
        __ZdlPv(*puStack_78);
        puStack_78 = puStack_78 + 1;
        uStack_60 = uStack_60 - 0x400;
      }
      plVar6 = (long *)(CONCAT44(uStack_94,uStack_98) + (long)iVar3 * 0x18);
      piVar10 = (int *)*plVar6;
      piVar2 = (int *)plVar6[1];
    } while (piVar10 == piVar2);
    lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + (long)iVar3 * 8) + 0x60);
    do {
      iStack_9c = *piVar10;
      lVar7 = *(long *)(*(long *)(param_2 + 0x18) + (long)iStack_9c * 8);
      lVar8 = *(long *)(lVar7 + 0x60);
      if (lVar8 == 0) {
        *(long *)(lVar7 + 0x60) = lVar12;
        func_0x000108a5413c(&uStack_80,&iStack_9c);
        FUN_10923b3a0(param_1,&iStack_9c);
      }
      else if (lVar8 != lVar12) {
        func_0x00010b0ae4b8(apuStack_b8,&UNK_10f586172,0x1b);
        func_0x000105687ee0(apuStack_b8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b543c);
        (*pcVar4)();
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar2);
  } while( true );
}



/* Entry: 1098b5494; end: 1098b552b;  */

long * FUN_1098b5494(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_1098b5510;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_1098b5510:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x000108a55470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b552c; end: 1098b5637;  */

void FUN_1098b552c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_e0 [24];
  ulong *puStack_c8;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  FUN_1098b5840(auStack_e0,param_2,param_3,param_4);
  uStack_38 = (undefined1 *)((ulong)uStack_38._4_4_ << 0x20);
  if ((*puStack_c8 & 1) == 0) {
    *puStack_c8 = *puStack_c8 | 1;
    func_0x000108a5413c(auStack_b0,&uStack_38);
  }
  uVar1 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
  if (2 < (int)(uVar1 >> 3)) {
    uVar2 = 2;
    do {
      if (((uint)*(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_2 + 0x18) + uVar2 * 8) + 0x50) + 0x10) >> 1 &
          1) == 0) {
        FUN_1098b5638(auStack_e0,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar1 >> 3 & 0x7fffffff) != uVar2);
  }
  FUN_1098b5688(param_1,auStack_e0);
  FUN_1098b5de4(auStack_68);
  uStack_38 = auStack_80;
  FUN_1098b5ec8(&uStack_38);
  FUN_1098b5494(auStack_b0);
  if (puStack_c8 != (ulong *)0x0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1098b5638; end: 1098b5687;  */

void FUN_1098b5638(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iStack_14;
  
  uVar1 = (ulong)(long)param_2 >> 6;
  uVar2 = 1L << ((long)param_2 & 0x3fU);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x18) + uVar1 * 8);
  if ((uVar3 & uVar2) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = uVar3 | uVar2;
    iStack_14 = param_2;
    func_0x000108a5413c(param_1 + 0x30,&iStack_14);
  }
  return;
}



/* Entry: 1098b5688; end: 1098b57eb;  */

void FUN_1098b5688(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = param_2[0xb];
  while (lVar2 != 0) {
    uVar3 = param_2[10];
    uVar1 = *(uint *)(((undefined8 *)param_2[7])[uVar3 >> 10] + (uVar3 & 0x3ff) * 4);
    param_2[10] = uVar3 + 1;
    param_2[0xb] = lVar2 + -1;
    if (0x7ff < uVar3 + 1) {
      __ZdlPv(*(undefined8 *)param_2[7]);
      param_2[7] = param_2[7] + 8;
      param_2[10] = param_2[10] + -0x400;
    }
    lVar2 = *(long *)(*(long *)(*param_2 + 0x18) + (long)(int)uVar1 * 8);
    uVar3 = (*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18) >> 5) * -0x5555555555555555;
    if (0 < (int)uVar3) {
      lVar4 = (ulong)uVar1 << 0x20;
      uVar3 = uVar3 & 0x7fffffff;
      do {
        FUN_1098b5f38(param_2,lVar4);
        lVar4 = lVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = (*(long *)(lVar2 + 0x38) - *(long *)(lVar2 + 0x30) >> 2) * -0x5555555555555555;
    if (0 < (int)uVar3) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_1098b5f38(param_2,uVar5 & 0xdfffffff | (long)(int)uVar1 << 0x20 | 0x20000000U);
        FUN_1098b5f38(param_2,*(undefined8 *)(*(long *)(lVar2 + 0x30) + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0xc;
      } while ((uVar3 & 0x7fffffff) != uVar5);
    }
    lVar2 = param_2[0xb];
  }
  *param_1 = param_2[3];
  lVar2 = param_2[4];
  param_1[2] = param_2[5];
  param_1[1] = lVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1098b57ec; end: 1098b583f;  */

long FUN_1098b57ec(long param_1)

{
  long lStack_28;
  
  FUN_1098b5de4(param_1 + 0x78);
  lStack_28 = param_1 + 0x60;
  FUN_1098b5ec8(&lStack_28);
  FUN_1098b5494(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b5840; end: 1098b5b53;  */

long * FUN_1098b5840(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 0xc;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  uVar9 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  uVar5 = uVar9;
  func_0x000108adee10(param_1 + 3,uVar9,&uStack_88);
  lVar7 = param_1[0xc];
  if ((ulong)((param_1[0xe] - lVar7 >> 3) * 0x6db6db6db6db6db7) < uVar9) {
    if (0x492492492492492 < uVar9) {
      FUN_1098b5b54();
LAB_1098b5af0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1098b5af4);
      (*pcVar4)();
    }
    lVar8 = param_1[0xd];
    plStack_68 = plVar1;
    FUN_1098b5b68();
    lVar7 = uVar9 + (lVar8 - lVar7);
    lVar3 = uVar5 * 0x38;
    uVar5 = param_1[0xd];
    lVar8 = lVar7 + (param_1[0xc] - uVar5);
    func_0x0001098b5bb0(param_1[0xc],uVar5,lVar8);
    uStack_88 = param_1[0xc];
    param_1[0xc] = lVar8;
    param_1[0xd] = lVar7;
    lStack_70 = param_1[0xe];
    param_1[0xe] = uVar9 + lVar3;
    uStack_80 = uStack_88;
    uStack_78 = uStack_88;
    func_0x0001098b5c8c(&uStack_88);
  }
  plVar12 = *(long **)(*param_1 + 0x18);
  plVar2 = *(long **)(*param_1 + 0x20);
  if (plVar12 != plVar2) {
    uVar9 = param_1[0xd];
    do {
      lVar7 = *plVar12;
      uVar10 = (ulong)(uint)((int)((ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 5)
                            * -0x55555555);
      uVar11 = ((ulong)(*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30)) >> 2) *
               -0x5555555500000000;
      if (uVar9 < (ulong)param_1[0xe]) {
        uVar5 = uVar11 | uVar10;
        FUN_1098b5cd8(uVar9,uVar5,0);
        uVar9 = uVar9 + 0x38;
        param_1[0xd] = uVar9;
      }
      else {
        lVar7 = uVar9 - *plVar1;
        uVar9 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
        if (0x492492492492492 < uVar9) {
          FUN_1098b5b54();
          goto LAB_1098b5af0;
        }
        lVar8 = param_1[0xe] - *plVar1 >> 3;
        uVar6 = lVar8 * -0x2492492492492492;
        if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
          uVar6 = uVar9;
        }
        if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
          uVar6 = 0x492492492492492;
        }
        if (uVar6 == 0) {
          uVar6 = 0;
          uVar5 = 0;
          plStack_68 = plVar1;
        }
        else {
          plStack_68 = plVar1;
          FUN_1098b5b68();
        }
        lVar7 = uVar6 + lVar7;
        lVar8 = uVar6 + uVar5 * 0x38;
        uStack_88 = uVar6;
        uStack_80 = lVar7;
        uStack_78 = lVar7;
        lStack_70 = lVar8;
        FUN_1098b5cd8(lVar7,uVar11 | uVar10,0);
        uVar9 = lVar7 + 0x38;
        uVar5 = param_1[0xd];
        lVar7 = lVar7 + (param_1[0xc] - uVar5);
        func_0x0001098b5bb0(param_1[0xc],uVar5,lVar7);
        uStack_88 = param_1[0xc];
        param_1[0xc] = lVar7;
        param_1[0xd] = uVar9;
        lStack_70 = param_1[0xe];
        param_1[0xe] = lVar8;
        uStack_80 = uStack_88;
        uStack_78 = uStack_88;
        func_0x0001098b5c8c(&uStack_88);
      }
      param_1[0xd] = uVar9;
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
  }
  return param_1;
}



/* Entry: 1098b5b54; end: 1098b5b67;  */

void FUN_1098b5b54(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x492492492492492 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        param_3[2] = puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar3 = puVar2[3];
        param_3[4] = puVar2[4];
        param_3[3] = uVar3;
        param_3[5] = puVar2[5];
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar2 + 6);
        puVar2 = puVar2 + 7;
        param_3 = param_3 + 7;
      } while (puVar2 != param_2);
      do {
        func_0x0001098b5c48(puVar1);
        puVar1 = puVar1 + 7;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x38);
  return;
}



/* Entry: 1098b5b68; end: 1098b5cd7;  */

void FUN_1098b5b68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x492492492492492 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        param_3[2] = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar2 = puVar1[3];
        param_3[4] = puVar1[4];
        param_3[3] = uVar2;
        param_3[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar1 + 6);
        puVar1 = puVar1 + 7;
        param_3 = param_3 + 7;
      } while (puVar1 != param_2);
      do {
        func_0x0001098b5c48(param_1);
        param_1 = param_1 + 7;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x38);
  return;
}



/* Entry: 1098b5cd8; end: 1098b5d3f;  */

long FUN_1098b5cd8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1098b5d40(param_1,(long)(int)param_2);
  FUN_1098b5d40(lVar1 + 0x18,param_2 >> 0x20,param_3);
  *(int *)(param_1 + 0x30) = (int)param_3;
  return param_1;
}



/* Entry: 1098b5d40; end: 1098b5dcf;  */

long * FUN_1098b5d40(long *param_1,ulong param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
      FUN_1098b5dd0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098b5db4);
      (*pcVar1)();
    }
    puVar4 = (undefined4 *)(param_2 << 2);
    puVar2 = puVar4;
    __Znwm();
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)(puVar2 + param_2);
    puVar3 = puVar2;
    do {
      *puVar3 = param_3;
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (puVar4 != (undefined4 *)0x0);
    param_1[1] = (long)(puVar2 + param_2);
  }
  return param_1;
}



/* Entry: 1098b5dd0; end: 1098b5de3;  */

long * FUN_1098b5dd0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar5 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)plVar3[2];
  plVar3[5] = 0;
  lVar4 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)plVar3[2];
    puVar5 = (undefined8 *)(plVar3[1] + 8);
    plVar3[1] = (long)puVar5;
    lVar4 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar4 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_1098b5e60;
    lVar4 = 0x100;
  }
  plVar3[4] = lVar4;
LAB_1098b5e60:
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  lVar4 = plVar3[2];
  if (lVar4 != plVar3[1]) {
    plVar3[2] = lVar4 + ((plVar3[1] - lVar4) + 7U & 0xfffffffffffffff8);
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 1098b5de4; end: 1098b5e7b;  */

long * FUN_1098b5de4(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_1098b5e60;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_1098b5e60:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b5e7c; end: 1098b5ec7;  */

long * FUN_1098b5e7c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098b5ec8; end: 1098b5f37;  */

void FUN_1098b5ec8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x38;
        func_0x0001098b5c48(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098b5f38; end: 1098b60ab;  */

void FUN_1098b5f38(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  FUN_1098b60ac();
  lVar4 = param_1[0x14];
  do {
    if (lVar4 == 0) {
      return;
    }
    uVar6 = param_1[0x13] + lVar4 + -1;
    puVar1 = (ulong *)(*(long *)(param_1[0x10] + (uVar6 >> 8) * 8) + (uVar6 & 0xff) * 0x10);
    uVar2 = (uint)*puVar1;
    lVar8 = *(long *)(*(long *)(*param_1 + 0x18) + (long)(int)*(uint *)((long)puVar1 + 4) * 8);
    if (uVar2 >> 0x1d == 1) {
      if (puVar1[1] == 0) {
        puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x30) + (ulong)(uVar2 & 0x1fffffff) * 0xc);
        if (((int)*(uint *)((long)puVar5 + 4) < 2) ||
           (*(int *)(*(long *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x18) +
                                                  (ulong)*(uint *)((long)puVar5 + 4) * 8) + 0x68) +
                              0x10) + (long)*(int *)(puVar5 + 1) * 0xc + 8) != 1)) {
          uVar3 = *puVar5;
          goto LAB_1098b607c;
        }
        uVar6 = 1;
        goto LAB_1098b608c;
      }
LAB_1098b6020:
      uVar6 = *puVar1;
      plVar7 = (long *)(param_1[0xc] + (long)(int)(uVar6 >> 0x20) * 0x38);
      uVar2 = (int)uVar6 >> 0x1d;
      if (uVar2 == 1) {
        lVar8 = plVar7[3];
LAB_1098b6058:
        plVar7 = (long *)(lVar8 + (uVar6 & 0x1fffffff) * 4);
      }
      else {
        if ((uVar2 & 0xff) == 0) {
          lVar8 = *plVar7;
          goto LAB_1098b6058;
        }
        plVar7 = plVar7 + 6;
      }
      *(undefined4 *)plVar7 = 2;
      param_1[0x14] = lVar4 + -1;
      func_0x0001098b6928(param_1 + 0xf);
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18) + (ulong)(uVar2 & 0x1fffffff) * 0x60;
      lVar8 = *(long *)(lVar9 + 0x48);
      if ((ulong)(*(long *)(lVar9 + 0x50) - lVar8 >> 2) <= puVar1[1]) goto LAB_1098b6020;
      uVar3 = CONCAT44(*(uint *)((long)puVar1 + 4),*(undefined4 *)(lVar8 + puVar1[1] * 4));
LAB_1098b607c:
      FUN_1098b60ac(param_1,uVar3);
      uVar6 = puVar1[1] + 1;
LAB_1098b608c:
      puVar1[1] = uVar6;
    }
    lVar4 = param_1[0x14];
  } while( true );
}



/* Entry: 1098b60ac; end: 1098b67f7;  */

void FUN_1098b60ac(long *param_1,undefined8 **param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 ****ppppuVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****unaff_x26;
  undefined8 ****unaff_x27;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  byte bStack_91;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar21 = (undefined8 ****)((ulong)param_2 >> 0x20);
  ppppuVar9 = ppppuVar21;
  FUN_1098b5638();
  if (((ulong)param_2 & 0xe0000000) != 0x40000000) {
    plVar13 = (long *)(param_1[0xc] + (long)(int)((ulong)param_2 >> 0x20) * 0x38);
    uVar1 = (int)param_2 >> 0x1d;
    if (uVar1 == 1) {
      lVar14 = plVar13[3];
LAB_1098b6138:
      plVar13 = (long *)(lVar14 + ((ulong)param_2 & 0x1fffffff) * 4);
    }
    else {
      if ((uVar1 & 0xff) == 0) {
        lVar14 = *plVar13;
        goto LAB_1098b6138;
      }
      plVar13 = plVar13 + 6;
    }
    if ((int)*plVar13 == 0) {
      unaff_x26 = (undefined8 ****)param_1[0x10];
      unaff_x27 = (undefined8 ****)param_1[0x11];
      uVar4 = (long)unaff_x27 - (long)unaff_x26;
      *(int *)plVar13 = 1;
      uVar22 = 0;
      if (uVar4 != 0) {
        uVar22 = ((long)unaff_x27 - (long)unaff_x26) * 0x20 - 1;
      }
      uVar2 = param_1[0x13];
      uVar17 = param_1[0x14] + uVar2;
      if (uVar22 == uVar17) {
        if (uVar2 < 0x100) {
          ppppuVar21 = (undefined8 ****)param_1[0x12];
          ppppuVar23 = (undefined8 ****)param_1[0xf];
          if (uVar4 < (ulong)((long)ppppuVar21 - (long)ppppuVar23)) {
            pppuVar11 = (undefined8 ***)0x1000;
            __Znwm();
            if (ppppuVar21 == unaff_x27) {
              if (unaff_x26 == ppppuVar23) {
                lVar14 = (long)ppppuVar21 - (long)unaff_x26 >> 2;
                if (unaff_x27 == unaff_x26) {
                  lVar14 = 1;
                }
                ppppuVar21 = (undefined8 ****)(lVar14 * 2);
                func_0x0001098b68f4();
                unaff_x26 = (undefined8 ****)(lVar14 + ((long)ppppuVar21 + 6U & 0xfffffffffffffff8))
                ;
                lVar18 = param_1[0x11] - param_1[0x10];
                ppppuVar23 = unaff_x26;
                if (lVar18 != 0) {
                  ppppuVar23 = (undefined8 ****)((long)unaff_x26 + lVar18);
                  puVar16 = (undefined8 *)param_1[0x10];
                  ppppuVar15 = unaff_x26;
                  do {
                    *ppppuVar15 = (undefined8 ***)*puVar16;
                    lVar18 = lVar18 + -8;
                    puVar16 = puVar16 + 1;
                    ppppuVar15 = ppppuVar15 + 1;
                  } while (lVar18 != 0);
                }
                lVar18 = param_1[0xf];
                param_1[0xf] = lVar14;
                param_1[0x10] = (long)unaff_x26;
                param_1[0x11] = (long)ppppuVar23;
                param_1[0x12] = lVar14 + (long)ppppuVar9 * 8;
                if (lVar18 != 0) {
                  __ZdlPv(lVar18);
                  unaff_x26 = (undefined8 ****)param_1[0x10];
                }
              }
              unaff_x26[-1] = pppuVar11;
              lVar14 = param_1[0x10];
              param_1[0x10] = lVar14 + -8;
              pppuVar11 = *(undefined8 ****)(lVar14 + -8);
              param_1[0x10] = lVar14;
              goto LAB_1098b634c;
            }
            *unaff_x27 = pppuVar11;
            param_1[0x11] = param_1[0x11] + 8;
          }
          else {
            ppppuVar15 = (undefined8 ****)((long)ppppuVar21 - (long)ppppuVar23 >> 2);
            if (ppppuVar21 == ppppuVar23) {
              ppppuVar15 = (undefined8 ****)0x1;
            }
            func_0x0001098b68f4();
            pppuVar11 = (undefined8 ***)0x1000;
            ppppuVar12 = ppppuVar9;
            __Znwm();
            ppppuVar21 = (undefined8 ****)((long)ppppuVar15 + uVar4);
            ppppuVar23 = ppppuVar15 + (long)ppppuVar9;
            ppppuVar10 = ppppuVar15;
            if (uVar4 == (long)ppppuVar9 * 8) {
              if ((long)uVar4 < 1) {
                ppppuVar21 = (undefined8 ****)((long)ppppuVar21 - (long)ppppuVar15 >> 2);
                if (unaff_x27 == unaff_x26) {
                  ppppuVar21 = (undefined8 ****)0x1;
                }
                ppppuVar10 = ppppuVar21;
                func_0x0001098b68f4();
                ppppuVar21 = ppppuVar10 + ((ulong)ppppuVar21 >> 2);
                ppppuVar23 = ppppuVar10 + (long)ppppuVar12;
                if (ppppuVar15 != (undefined8 ****)0x0) {
                  __ZdlPv(ppppuVar15);
                }
              }
              else {
                lVar14 = ((long)ppppuVar21 - (long)ppppuVar15 >> 3) + 1;
                ppppuVar21 = ppppuVar21 + -((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
              }
            }
            ppppuVar9 = ppppuVar21 + 1;
            *ppppuVar21 = pppuVar11;
            unaff_x27 = (undefined8 ****)param_1[0x11];
            ppppuVar15 = ppppuVar10;
            if (unaff_x27 != (undefined8 ****)param_1[0x10]) {
              do {
                ppppuVar10 = ppppuVar15;
                ppppuVar24 = ppppuVar21;
                if (ppppuVar21 == ppppuVar15) {
                  if (ppppuVar9 < ppppuVar23) {
                    lVar14 = ((long)ppppuVar23 - (long)ppppuVar9 >> 3) + 1;
                    lVar18 = (long)ppppuVar9 - (long)ppppuVar15;
                    lVar5 = (long)ppppuVar9 - (long)ppppuVar15;
                    ppppuVar9 = ppppuVar9 + ((ulong)(lVar14 - (lVar14 >> 0x3f)) >> 1);
                    ppppuVar24 = (undefined8 ****)((long)ppppuVar9 - lVar18);
                    if (lVar5 != 0) {
                      _memmove(ppppuVar24,ppppuVar21,lVar5);
                      ppppuVar12 = ppppuVar21;
                    }
                  }
                  else {
                    ppppuVar24 = (undefined8 ****)((long)ppppuVar23 - (long)ppppuVar15 >> 2);
                    if ((long)ppppuVar23 - (long)ppppuVar15 == 0) {
                      ppppuVar24 = (undefined8 ****)0x1;
                    }
                    ppppuVar10 = ppppuVar24;
                    func_0x0001098b68f4();
                    ppppuVar24 = (undefined8 ****)
                                 ((long)ppppuVar10 +
                                 ((long)ppppuVar24 * 2 + 6U & 0xfffffffffffffff8));
                    lVar14 = (long)ppppuVar9 - (long)ppppuVar15;
                    ppppuVar9 = ppppuVar24;
                    if (lVar14 != 0) {
                      ppppuVar9 = (undefined8 ****)((long)ppppuVar24 + lVar14);
                      ppppuVar23 = ppppuVar24;
                      do {
                        *ppppuVar23 = *ppppuVar21;
                        lVar14 = lVar14 + -8;
                        ppppuVar23 = ppppuVar23 + 1;
                        ppppuVar21 = ppppuVar21 + 1;
                      } while (lVar14 != 0);
                    }
                    ppppuVar23 = ppppuVar10 + (long)ppppuVar12;
                    if (ppppuVar15 != (undefined8 ****)0x0) {
                      __ZdlPv(ppppuVar15);
                    }
                  }
                }
                unaff_x27 = unaff_x27 + -1;
                ppppuVar21 = ppppuVar24 + -1;
                *ppppuVar21 = *unaff_x27;
                ppppuVar15 = ppppuVar10;
              } while (unaff_x27 != (undefined8 ****)param_1[0x10]);
            }
            lVar14 = param_1[0xf];
            param_1[0xf] = (long)ppppuVar10;
            param_1[0x10] = (long)ppppuVar21;
            param_1[0x11] = (long)ppppuVar9;
            param_1[0x12] = (long)ppppuVar23;
            if (lVar14 != 0) {
              __ZdlPv();
            }
          }
        }
        else {
          param_1[0x13] = uVar2 - 0x100;
          pppuVar11 = *unaff_x26;
          param_1[0x10] = (long)(unaff_x26 + 1);
LAB_1098b634c:
          FUN_1098b67f8(param_1 + 0xf,pppuVar11);
        }
        unaff_x26 = (undefined8 ****)param_1[0x10];
        uVar17 = param_1[0x14] + param_1[0x13];
      }
      pppuVar11 = unaff_x26[uVar17 >> 8];
      pppuVar11[(uVar17 & 0xff) * 2] = param_2;
      (pppuVar11 + (uVar17 & 0xff) * 2)[1] = (undefined8 **)0x0;
      param_1[0x14] = param_1[0x14] + 1;
    }
    else if ((int)*plVar13 == 1) {
      unaff_x26 = &pppuStack_a8;
      func_0x000107c31940(&pppuStack_a8,"");
      unaff_x27 = (undefined8 ****)0x7ffffffffffffff7;
      do {
        lVar14 = param_1[0x14] + -1;
        uVar22 = lVar14 + param_1[0x13];
        lVar18 = *(long *)(param_1[0x10] + (uVar22 >> 8) * 8);
        uVar1 = *(uint *)(lVar18 + (uVar22 & 0xff) * 0x10 + 4);
        if ((uint)ppppuVar21 != uVar1) {
          lVar14 = *(long *)(*(long *)(*param_1 + 0x18) + (long)(int)uVar1 * 8);
          uVar22 = *(ulong *)(lVar14 + 0x10);
          if (0x7ffffffffffffff7 < uVar22) {
            func_0x000104c4f6b8();
            goto LAB_1098b675c;
          }
          uVar19 = *(undefined8 *)(lVar14 + 8);
          if (uVar22 < 0x17) {
            uStack_80 = CONCAT17((char)uVar22,(undefined7)uStack_80);
            puVar7 = &uStack_90;
            if (uVar22 != 0) goto LAB_1098b6204;
          }
          else {
            puVar16 = (undefined8 *)0x19;
            if ((uVar22 | 7) != 0x17) {
              puVar16 = (undefined8 *)((uVar22 | 7) + 1);
            }
            puVar7 = puVar16;
            __Znwm();
            uStack_80 = (ulong)puVar16 | 0x8000000000000000;
            uStack_88 = (undefined7)uVar22;
            uStack_81 = (undefined1)(uVar22 >> 0x38);
            uStack_90._0_7_ = SUB87(puVar7,0);
            uStack_90._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
LAB_1098b6204:
            _memmove(puVar7,uVar19,uVar22);
          }
          *(undefined1 *)((long)puVar7 + uVar22) = 0;
          puVar8 = &uStack_90;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar8,0,&DAT_10f68f57e,1);
          pppuStack_b8 = (undefined8 ***)puVar8[1];
          pppuStack_c0 = (undefined8 ***)*puVar8;
          uStack_b0 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          uVar22 = CONCAT17(uStack_99,uStack_a0);
          ppppuVar21 = (undefined8 ****)pppuStack_a8;
          if (-1 < (char)bStack_91) {
            uVar22 = (ulong)bStack_91;
            ppppuVar21 = unaff_x26;
          }
          ppppuVar9 = &pppuStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar9,ppppuVar21,uVar22);
          ppppuVar21 = (undefined8 ****)*ppppuVar9;
          uStack_78 = SUB87(ppppuVar9[1],0);
          uStack_71 = (undefined1)*(undefined8 *)((long)ppppuVar9 + 0xf);
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar9 + 0xf) >> 8);
          bVar3 = *(byte *)((long)ppppuVar9 + 0x17);
          ppppuVar9[1] = (undefined8 ***)0x0;
          ppppuVar9[2] = (undefined8 ***)0x0;
          *ppppuVar9 = (undefined8 ***)0x0;
          if ((char)bStack_91 < '\0') {
            __ZdlPv(pppuStack_a8);
          }
          uStack_a0 = uStack_78;
          uStack_99 = uStack_71;
          uStack_98 = uStack_70;
          pppuStack_a8 = ppppuVar21;
          bStack_91 = bVar3;
          if ((long)uStack_b0 < 0) {
            __ZdlPv(pppuStack_c0);
          }
          if ((long)uStack_80 < 0) {
            __ZdlPv(CONCAT17(uStack_90._7_1_,(undefined7)uStack_90));
          }
          lVar14 = param_1[0x14] + -1;
          uVar22 = lVar14 + param_1[0x13];
          lVar18 = *(long *)(param_1[0x10] + (uVar22 >> 8) * 8);
          ppppuVar21 = (undefined8 ****)(ulong)uVar1;
        }
        iVar20 = (int)ppppuVar21;
        if (*(undefined8 ***)(lVar18 + (uVar22 & 0xff) * 0x10) == param_2) goto LAB_1098b6610;
        param_1[0x14] = lVar14;
        func_0x0001098b6928(param_1 + 0xf);
      } while( true );
    }
  }
  iVar20 = (int)ppppuVar21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1098b6610:
  uVar22 = CONCAT17(uStack_99,uStack_a0);
  if (-1 < (char)bStack_91) {
    uVar22 = (ulong)bStack_91;
  }
  if (uVar22 == 0) {
    lVar14 = *(long *)(*(long *)(*param_1 + 0x18) + (long)iVar20 * 8);
    ppppuVar21 = *(undefined8 *****)(lVar14 + 0x10);
    if (unaff_x27 < ppppuVar21) {
      func_0x000104c4f6b8();
      goto LAB_1098b675c;
    }
    uVar19 = *(undefined8 *)(lVar14 + 8);
    if (ppppuVar21 < (undefined8 ****)0x17) {
      uStack_b0 = CONCAT17((char)ppppuVar21,(undefined7)uStack_b0);
      ppppuVar23 = &pppuStack_c0;
      if (ppppuVar21 != (undefined8 ****)0x0) goto LAB_1098b6694;
    }
    else {
      ppppuVar9 = (undefined8 ****)0x19;
      if (((ulong)ppppuVar21 | 7) != 0x17) {
        ppppuVar9 = (undefined8 ****)(((ulong)ppppuVar21 | 7) + 1);
      }
      ppppuVar23 = ppppuVar9;
      __Znwm();
      uStack_b0 = (ulong)ppppuVar9 | 0x8000000000000000;
      pppuStack_c0 = ppppuVar23;
      pppuStack_b8 = ppppuVar21;
LAB_1098b6694:
      _memmove(ppppuVar23,uVar19,ppppuVar21);
    }
    *(undefined1 *)((long)ppppuVar23 + (long)ppppuVar21) = 0;
    ppppuVar21 = &pppuStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppuVar21,0,&DAT_10f68f57e,1);
    ppppuVar9 = (undefined8 ****)*ppppuVar21;
    uStack_90._0_7_ = SUB87(ppppuVar21[1],0);
    uStack_90._7_1_ = (undefined1)*(undefined8 *)((long)ppppuVar21 + 0xf);
    uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar21 + 0xf) >> 8);
    bVar3 = *(byte *)((long)ppppuVar21 + 0x17);
    ppppuVar21[1] = (undefined8 ***)0x0;
    ppppuVar21[2] = (undefined8 ***)0x0;
    *ppppuVar21 = (undefined8 ***)0x0;
    if ((char)bStack_91 < '\0') {
      __ZdlPv(pppuStack_a8);
    }
    unaff_x26[1] = (undefined8 ***)CONCAT17(uStack_90._7_1_,(undefined7)uStack_90);
    *(ulong *)((long)unaff_x26 + 0xf) = CONCAT71(uStack_88,uStack_90._7_1_);
    pppuStack_a8 = ppppuVar9;
    bStack_91 = bVar3;
    if ((long)uStack_b0 < 0) {
      __ZdlPv(pppuStack_c0);
    }
  }
  func_0x00010b0ae4b8(&pppuStack_c0,&UNK_10f58618e,0x2c);
  func_0x000105687ee0(&pppuStack_c0);
LAB_1098b675c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1098b6760);
  (*pcVar6)();
}



/* Entry: 1098b67f8; end: 1098b68f3;  */

void FUN_1098b67f8(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098b68f4();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098b68f4; end: 1098b6983;  */

void FUN_1098b68f4(ulong param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  if (0x1ff < (ulong)(lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)))) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return;
}



/* Entry: 1098b6984; end: 1098b6b9b;  */

void FUN_1098b6984(long *param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                  long param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 **ppuStack_198;
  long *plStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  long lStack_180;
  char cStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  undefined8 **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_b0 = (code *)CONCAT44(uStack_b0._4_4_,param_5);
  puVar9 = (uint *)((long)&uStack_b0 + 4);
  FUN_1098af048(&lStack_108,0,&uStack_b0,puVar9,1);
  uStack_b0 = FUN_1098b6b9c;
  uStack_a8 = &PTR_FUN_110b17c88;
  lVar10 = param_2 + 0x18;
  plVar7 = &uStack_b0;
  plVar17 = &lStack_108;
  lStack_a0 = param_2;
  FUN_1098aef4c(lVar10,plVar7,plVar17);
  (*(code *)*uStack_a8)(&uStack_a8);
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  ppuVar3 = *(undefined8 ***)(param_2 + 0x70);
  (*(code *)(*ppuVar3)[1])();
  ppuVar4 = ppuVar3;
  plVar8 = plVar7;
  ppuVar5 = (undefined8 **)&uStack_b0;
  if (plVar7 != (long *)0x0) {
    plVar16 = (long *)0x0;
    do {
      if (*(uint *)(param_3 + (long)plVar16 * 4) >> 0x1d != 2) {
        (*(code *)param_1[2])(&lStack_f0,param_1[1],plVar16);
        plVar17 = (long *)*param_1;
        uStack_b0 = (code *)CONCAT44(0x20000000,(int)lVar10);
        uStack_a8 = (undefined **)
                    CONCAT44(uStack_a8._4_4_,*(undefined4 *)((long)ppuVar3 + (long)plVar16 * 4));
        lStack_118 = 0;
        uStack_110 = 0;
        lStack_120 = 0;
        FUN_1098afc14(&lStack_120,&uStack_b0,(long)&uStack_a8 + 4,3);
        lVar11 = param_2 + 0x18;
        plVar8 = &lStack_f0;
        puVar9 = (uint *)&lStack_120;
        FUN_1098aeecc(lVar11,plVar8,plVar17);
        *(int *)(param_3 + (long)plVar16 * 4) = (int)lVar11;
        if (lStack_120 != 0) {
          lStack_118 = lStack_120;
          __ZdlPv();
        }
        ppuVar4 = apuStack_e8;
        (*(code *)*apuStack_e8[0])();
      }
      plVar16 = (long *)((long)plVar16 + 1);
      ppuVar5 = ppuVar3;
    } while (plVar7 != plVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*uStack_a8)(ppuVar5 + 1);
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_1098b6b9c;
  uVar1 = (int)*puVar9 >> 0x1d;
  if (uVar1 == 1) {
    lVar11 = plVar8[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      plVar7 = plVar8 + 6;
      goto LAB_1098b6bf0;
    }
    lVar11 = *plVar8;
  }
  plVar7 = (long *)(lVar11 + ((ulong)*puVar9 & 0x1fffffff) * 8);
LAB_1098b6bf0:
  plVar16 = (long *)0x1132e0508;
  if (*plVar7 != -1) {
    plVar16 = (long *)((long)ppuVar5 + *plVar7);
  }
  if (*plVar16 != 0) {
    pppuVar6 = &ppuStack_198;
    ppuStack_198 = ppuVar5;
    plStack_190 = plVar8;
    lStack_150 = lVar10;
    plStack_148 = param_1;
    lStack_140 = param_2;
    ppuStack_138 = ppuVar4;
    puStack_130 = &stack0xfffffffffffffff0;
    FUN_1098af634(pppuVar6,(ulong)plVar17 & 0xffffffff);
    puVar13 = (undefined8 *)*plVar16;
    lVar10 = *(long *)(*(long *)(param_6 + 0x10) + 0x48);
    FUN_1098b3480(&lStack_168,*puVar13,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28)
                  ,*(undefined8 *)(*(long *)(param_6 + 0x10) + 0x70),1);
    lVar10 = lStack_168;
    if (lStack_160 - lStack_168 == 0) {
      uStack_188 = 0;
      cStack_170 = '\0';
    }
    else {
      lVar15 = puVar13[3];
      lVar14 = lStack_160 - lStack_168 >> 3;
      FUN_1098af46c(&uStack_188,lVar14);
      lVar11 = 0;
      cStack_170 = '\x01';
      do {
        lVar12 = *(long *)(lVar10 + lVar11 * 8);
        lVar2 = 0;
        if (-1 < lVar12) {
          lVar2 = lVar15 + lVar12;
        }
        *(long *)(CONCAT71(uStack_187,uStack_188) + lVar11 * 8) = lVar2;
        lVar11 = lVar11 + 1;
      } while (lVar14 != lVar11);
    }
    if (lStack_168 != 0) {
      __ZdlPv(lStack_168);
    }
    func_0x0001098af560(pppuVar6,&uStack_188);
    if ((cStack_170 == '\x01') && (lStack_180 = CONCAT71(uStack_187,uStack_188), lStack_180 != 0)) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1098b6b9c; end: 1098b6d13;  */

void FUN_1098b6b9c(long param_1,long *param_2,undefined4 param_3,uint *param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long lStack_60;
  char cStack_50;
  long lStack_48;
  long lStack_40;
  
  uVar1 = (int)*param_4 >> 0x1d;
  if (uVar1 == 1) {
    lVar6 = param_2[3];
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      plVar4 = param_2 + 6;
      goto LAB_1098b6bf0;
    }
    lVar6 = *param_2;
  }
  plVar4 = (long *)(lVar6 + ((ulong)*param_4 & 0x1fffffff) * 8);
LAB_1098b6bf0:
  plVar2 = (long *)0x1132e0508;
  if (*plVar4 != -1) {
    plVar2 = (long *)(param_1 + *plVar4);
  }
  if (*plVar2 != 0) {
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    plStack_70 = param_2;
    FUN_1098af634(plVar4,param_3);
    puVar8 = (undefined8 *)*plVar2;
    lVar6 = *(long *)(*(long *)(param_6 + 0x10) + 0x48);
    FUN_1098b3480(&lStack_48,*puVar8,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                  *(undefined8 *)(*(long *)(param_6 + 0x10) + 0x70),1);
    lVar6 = lStack_48;
    if (lStack_40 - lStack_48 == 0) {
      uStack_68 = 0;
      cStack_50 = '\0';
    }
    else {
      lVar10 = puVar8[3];
      lVar9 = lStack_40 - lStack_48 >> 3;
      FUN_1098af46c(&uStack_68,lVar9);
      lVar5 = 0;
      cStack_50 = '\x01';
      do {
        lVar7 = *(long *)(lVar6 + lVar5 * 8);
        lVar3 = 0;
        if (-1 < lVar7) {
          lVar3 = lVar10 + lVar7;
        }
        *(long *)(CONCAT71(uStack_67,uStack_68) + lVar5 * 8) = lVar3;
        lVar5 = lVar5 + 1;
      } while (lVar9 != lVar5);
    }
    if (lStack_48 != 0) {
      __ZdlPv(lStack_48);
    }
    func_0x0001098af560(plVar4,&uStack_68);
    if ((cStack_50 == '\x01') && (lStack_60 = CONCAT71(uStack_67,uStack_68), lStack_60 != 0)) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1098b6d14; end: 1098b6d2f;  */

void FUN_1098b6d14(void)

{
  return;
}



/* Entry: 1098b6d30; end: 1098b6e7f;  */

/* WARNING: Type propagation algorithm not settling */

undefined ***
FUN_1098b6d30(undefined8 *param_1,undefined ***param_2,long param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined8 ******ppppppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  code **ppcVar9;
  undefined8 *******pppppppuVar10;
  long *extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *****pppppuVar14;
  long *plVar15;
  int iVar16;
  undefined ***unaff_x23;
  undefined8 *******pppppppuVar17;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 ******ppppppuVar18;
  undefined1 *unaff_x26;
  undefined4 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuStack_2d0;
  undefined8 ******ppppppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  long lStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 ******ppppppuStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined ***pppuStack_228;
  undefined8 *puStack_220;
  code **ppcStack_218;
  undefined ***pppuStack_210;
  undefined8 **ppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  code *pcStack_1c8;
  undefined8 *apuStack_1c0 [7];
  long lStack_188;
  undefined8 *puStack_180;
  undefined ***pppuStack_178;
  code **ppcStack_170;
  undefined ***pppuStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined **appuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_2;
  FUN_1098b6e80();
  pppuVar5 = pppuVar4;
  if (param_4 != 0) {
    unaff_x24 = 0;
    unaff_x27 = &uStack_b0;
    unaff_x26 = auStack_a8;
    unaff_x28 = 0x20000000;
    do {
      (*(code *)*param_1)(auStack_a8,unaff_x24);
      unaff_x25 = param_1[1];
      uStack_b0 = SUB84(pppuVar4,0);
      uStack_ac = 0x20000000;
      lStack_c0 = 0;
      uStack_b8 = 0;
      lStack_c8 = 0;
      FUN_1098afc14(&lStack_c8,&uStack_b0,auStack_a8,2);
      pppuVar5 = param_2;
      FUN_1098aeecc(param_2,auStack_a8,unaff_x25,&lStack_c8);
      *(int *)(param_3 + unaff_x24 * 4) = (int)pppuVar5;
      if (lStack_c8 != 0) {
        lStack_c0 = lStack_c8;
        __ZdlPv();
      }
      pppuVar5 = appuStack_a0;
      (*(code *)*appuStack_a0[0])();
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = pppuVar4;
    } while (param_4 != unaff_x24);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  pppuVar4 = pppuVar5;
  __Unwind_Resume(pppuVar5);
  plVar15 = &lStack_150;
  pcStack_d8 = FUN_1098b6e80;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  pcStack_138 = FUN_1098b7058;
  ppuStack_130 = &PTR_FUN_110ae9180;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  ppcVar9 = &pcStack_138;
  lStack_f0 = param_3;
  pppuStack_e8 = pppuVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_1098b6f5c();
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  pppuVar5 = &ppuStack_130;
  (*(code *)*ppuStack_130)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  (*(code *)*ppuStack_130)(&ppuStack_130);
  pppuVar4 = pppuVar5;
  __Unwind_Resume();
  puStack_180 = param_1;
  pppuStack_178 = param_2;
  ppcStack_170 = &pcStack_138;
  pppuStack_168 = pppuVar5;
  ppuStack_160 = &puStack_e0;
  pcStack_158 = FUN_1098b6f5c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1c8 = *ppcVar9;
  (**(code **)(ppcVar9[1] + 0x10))(apuStack_1c0);
  lStack_1d8 = plVar15[1];
  lStack_1e0 = *plVar15;
  lStack_1d0 = plVar15[2];
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = 0;
  pppuVar5 = pppuVar4;
  FUN_1098aeecc(pppuVar4,&pcStack_1c8,&UNK_110b17bc0,&lStack_1e0);
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  ppuVar6 = apuStack_1c0;
  (*(code *)*apuStack_1c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  if (lStack_1e0 != 0) {
    lStack_1d8 = lStack_1e0;
    __ZdlPv();
  }
  (*(code *)*apuStack_1c0[0])(apuStack_1c0);
  __Unwind_Resume(ppuVar6);
  pcStack_1e8 = FUN_1098b7058;
  pppuStack_1f0 = &ppuStack_160;
  func_0x000105277f8c();
  pppppppuVar8 = &pppppppuStack_2d0;
  pcStack_1f8 = FUN_1098b7068;
  pppppppuStack_270 = (undefined8 *******)0x0;
  pppppppuStack_268 = (undefined8 *******)0x0;
  pppppppuStack_260 = (undefined8 *******)0x0;
  pppppppuStack_280 = (undefined8 *******)0x0;
  lStack_278 = 0;
  uVar11 = *(long *)(param_6 + 0x20) - *(long *)(param_6 + 0x18);
  iVar16 = (int)(uVar11 >> 3);
  pppppppuStack_288 = &pppppppuStack_280;
  uStack_250 = unaff_x28;
  puStack_248 = unaff_x27;
  puStack_240 = unaff_x26;
  uStack_238 = unaff_x25;
  lStack_230 = unaff_x24;
  pppuStack_228 = unaff_x23;
  puStack_220 = param_1;
  ppcStack_218 = &pcStack_1c8;
  pppuStack_210 = pppuVar4;
  ppuStack_208 = ppuVar6;
  puStack_200 = (undefined1 *)&pppuStack_1f0;
  if (iVar16 != (int)uVar11 * 0x20000000) {
    uVar11 = -(uVar11 >> 2 & 1) & 0xffffffff00000000 | (uVar11 & 7) << 0x1d;
    puStack_200 = (undefined1 *)&pppuStack_1f0;
    do {
      pppppppuStack_2d0 = (undefined8 *******)CONCAT44(pppppppuStack_2d0._4_4_,(int)uVar11);
      lVar12 = *(long *)(*(long *)(param_6 + 0x18) + uVar11 * 8);
      ppppppuVar18 = *(undefined8 *******)(lVar12 + 0x60);
      if ((ppppppuVar18 != (undefined8 ******)0x0) &&
         (pppppppuVar13 = &pppppppuStack_280, pppppppuVar10 = pppppppuStack_280,
         ppppppuVar18 != *(undefined8 *******)(lVar12 + 0x58))) {
        while (pppppppuVar17 = pppppppuVar13, pppppppuVar10 != (undefined8 *******)0x0) {
          while (pppppppuVar7 = pppppppuVar10, pppppppuVar7[4] <= ppppppuVar18) {
            if (ppppppuVar18 <= pppppppuVar7[4]) goto LAB_1098b7178;
            pppppppuVar10 = (undefined8 *******)pppppppuVar7[1];
            if ((undefined8 *******)pppppppuVar7[1] == (undefined8 *******)0x0) {
              pppppppuVar13 = pppppppuVar7 + 1;
              pppppppuVar17 = pppppppuVar7;
              goto LAB_1098b7124;
            }
          }
          pppppppuVar13 = pppppppuVar7;
          pppppppuVar10 = (undefined8 *******)*pppppppuVar7;
        }
LAB_1098b7124:
        pppppppuVar7 = (undefined8 *******)0x40;
        __Znwm();
        pppppppuVar7[4] = ppppppuVar18;
        pppppppuVar7[5] = (undefined8 ******)0x0;
        pppppppuVar7[6] = (undefined8 ******)0x0;
        pppppppuVar7[7] = (undefined8 ******)0x0;
        *pppppppuVar7 = (undefined8 ******)0x0;
        pppppppuVar7[1] = (undefined8 ******)0x0;
        pppppppuVar7[2] = pppppppuVar17;
        *pppppppuVar13 = pppppppuVar7;
        pppppppuVar10 = pppppppuVar7;
        if ((undefined8 *******)*pppppppuStack_288 != (undefined8 *******)0x0) {
          pppppppuStack_288 = (undefined8 *******)*pppppppuStack_288;
          pppppppuVar10 = (undefined8 *******)*pppppppuVar13;
        }
        func_0x000107c27d40(pppppppuStack_280,pppppppuVar10);
        lStack_278 = lStack_278 + 1;
LAB_1098b7178:
        FUN_10923b3a0(pppppppuVar7 + 5,&pppppppuStack_2d0);
      }
      uVar11 = uVar11 + 1;
      pppppppuVar13 = pppppppuStack_288;
    } while ((int)uVar11 != iVar16);
    while ((undefined8 ********)pppppppuVar13 != &pppppppuStack_280) {
      ppppppuStack_290 = pppppppuVar13[4] + 2;
      pppppuStack_298 = pppppppuVar13[4][0x44] + 0xd;
      bStack_2a0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      ppppppuStack_2c8 = (undefined8 ******)0x0;
      pppppppuStack_2d0 = (undefined8 *******)0x0;
      ppppppuVar18 = pppppppuVar13[5];
      ppppppuVar1 = pppppppuVar13[6];
      if (ppppppuVar18 == ppppppuVar1) {
LAB_1098b71fc:
        if ((lStack_2b8 != lStack_2b0) || ((bStack_2a0 & 1) != 0)) goto LAB_1098b7210;
      }
      else {
        do {
          FUN_1098ad16c(*(undefined8 *)(*(long *)(param_6 + 0x18) + (long)*(int *)ppppppuVar18 * 8),
                        &pppppppuStack_2d0);
          ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + 4);
        } while (ppppppuVar18 != ppppppuVar1);
        if (pppppppuStack_2d0 == (undefined8 *******)ppppppuStack_2c8) goto LAB_1098b71fc;
LAB_1098b7210:
        func_0x0001098b0f24(&ppppppuStack_258,&ppppppuStack_290,&pppppppuStack_2d0);
        if (pppppppuStack_268 < pppppppuStack_260) {
          *pppppppuStack_268 = ppppppuStack_258;
          pppppppuStack_268 = pppppppuStack_268 + 1;
        }
        else {
          pppppppuVar10 = &pppppppuStack_270;
          FUN_1098b74c4(pppppppuVar10,&ppppppuStack_258);
          ppppppuVar18 = ppppppuStack_258;
          pppppppuStack_268 = pppppppuVar10;
          if (ppppppuStack_258 != (undefined8 ******)0x0) {
            ppppppuVar1 = ppppppuStack_258 + 1;
            do {
              pppppuVar14 = *ppppppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar3) {
                *ppppppuVar1 = (undefined8 *****)((long)pppppuVar14 + -4);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (((ulong)pppppuVar14 & 0x1fffffffc) == 4) {
              do {
                pppppuVar14 = *ppppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
                if (bVar3) {
                  *ppppppuVar1 = (undefined8 *****)((long)pppppuVar14 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if ((undefined8 *****)((long)pppppuVar14 + -1) == (undefined8 *****)0x0) {
                (*(code *)(*ppppppuVar18)[1])();
              }
            }
          }
        }
      }
      if (lStack_2b8 != 0) {
        lStack_2b0 = lStack_2b8;
        __ZdlPv();
      }
      ppppppuStack_258 = &pppppppuStack_2d0;
      FUN_1098b0a40(&ppppppuStack_258);
      pppppppuVar10 = (undefined8 *******)pppppppuVar13[1];
      pppppppuVar17 = pppppppuVar13;
      if ((undefined8 *******)pppppppuVar13[1] == (undefined8 *******)0x0) {
        do {
          pppppppuVar13 = (undefined8 *******)pppppppuVar17[2];
          bVar3 = (undefined8 *******)*pppppppuVar13 != pppppppuVar17;
          pppppppuVar17 = pppppppuVar13;
        } while (bVar3);
      }
      else {
        do {
          pppppppuVar13 = pppppppuVar10;
          pppppppuVar10 = (undefined8 *******)*pppppppuVar13;
        } while ((undefined8 *******)*pppppppuVar13 != (undefined8 *******)0x0);
      }
    }
  }
  FUN_1098b790c(pppppppuStack_280);
  pppppppuVar10 = pppppppuStack_268;
  pppppppuVar13 = pppppppuStack_270;
  if (pppppppuStack_270 == pppppppuStack_268) {
    *extraout_x8 = 0;
  }
  else {
    pppppppuStack_288 = (undefined8 *******)((long)pppppppuStack_268 - (long)pppppppuStack_270 >> 3)
    ;
    FUN_1098b7954(&pppppppuStack_2d0,&pppppppuStack_288);
    plVar15 = (long *)(lStack_2c0 + 8);
    if (*plVar15 != 0) {
      FUN_1092b4274(plVar15);
    }
    *plVar15 = (long)ppppppuStack_2c8;
    ppppppuStack_2c8 = (undefined8 ******)0x0;
    lVar12 = 0;
    do {
      FUN_1098b799c(lStack_2c0,lVar12,pppppppuVar13);
      pppppppuVar13 = pppppppuVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (pppppppuVar13 != pppppppuVar10);
    *extraout_x8 = (long)pppppppuStack_2d0;
    pppppppuStack_2d0 = (undefined8 *******)0x0;
    if ((ppppppuStack_2c8 != (undefined8 ******)0x0) &&
       (FUN_1092b4274(&ppppppuStack_2c8), pppppppuStack_2d0 != (undefined8 *******)0x0)) {
      ppppppuVar18 = pppppppuStack_2d0 + 1;
      do {
        pppppuVar14 = *ppppppuVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar18,0x10);
        if (bVar3) {
          *ppppppuVar18 = (undefined8 *****)((long)pppppuVar14 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)pppppuVar14 & 0x1fffffffc) == 4) {
        do {
          pppppuVar14 = *ppppppuVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar18,0x10);
          if (bVar3) {
            *ppppppuVar18 = (undefined8 *****)((long)pppppuVar14 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 *****)((long)pppppuVar14 - 1U) == (undefined8 *****)0x0) {
          (*(code *)(*pppppppuStack_2d0)[1])();
        }
      }
    }
  }
  pppppppuStack_2d0 = &pppppppuStack_270;
  func_0x0001098b784c(&pppppppuStack_2d0);
  return (undefined ***)pppppppuVar8;
}


