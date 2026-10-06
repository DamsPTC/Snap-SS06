/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0d58c4; end: 10a0d593f;  */

undefined8 * FUN_10a0d58c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  FUN_10a0d5940(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10a0d5940; end: 10a0d59e3;  */

undefined8 * FUN_10a0d5940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10a0d59e4; end: 10a0d5aff;  */

void FUN_10a0d59e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar5 + 2,param_2 + 2);
        lVar2 = param_2[5];
        plVar5[5] = lVar2;
        *(int *)(plVar5 + 6) = (int)param_2[6];
        plVar4 = (long *)*plVar5;
        plVar5[1] = lVar2;
        plVar1 = param_1;
        FUN_10a0d5b44(param_1,lVar2,plVar5 + 2);
        FUN_10a0d5c8c(param_1,plVar5,plVar1);
        param_2 = (long *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    FUN_10a0d5b00(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a0d5f78(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a0d5b00; end: 10a0d5b43;  */

void FUN_10a0d5b00(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      __ZdlPv(param_2[2]);
    }
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a0d5b44; end: 10a0d5c8b;  */

long * FUN_10a0d5b44(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a0d5d5c(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[5] == *(long *)(param_3 + 0x18);
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a0d5c8c; end: 10a0d5d5b;  */

void FUN_10a0d5c8c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a0d5cb4;
LAB_10a0d5cf0:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a0d5d4c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a0d5cf0;
LAB_10a0d5cb4:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a0d5d4c;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a0d5d4c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a0d5d4c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a0d5d5c; end: 10a0d5e2b;  */

long * FUN_10a0d5d5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *aplStack_58 [3];
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (param_2 <= plVar10) {
    if (param_2 < plVar10) {
      plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar3) {
        plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar10) goto LAB_10a0d5da4;
    }
    return plVar3;
  }
LAB_10a0d5da4:
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      plVar3 = param_1;
      func_0x000109ffded8();
      plStack_40 = param_2;
      plStack_38 = param_1;
      FUN_10a0d5ff4(aplStack_58);
      aplStack_58[0][1] = aplStack_58[0][5];
      plVar10 = plVar3;
      FUN_10a0d5b44(plVar3,aplStack_58[0][5],aplStack_58[0] + 2);
      FUN_10a0d5c8c(plVar3,aplStack_58[0],plVar10);
      return aplStack_58[0];
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar10 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
      plVar10 = (long *)((long)plVar10 + 1);
    } while (param_2 != plVar10);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)plVar10[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      while (plVar4 = plVar10, plVar10 = (long *)*plVar4, plVar10 != (long *)0x0) {
        plVar7 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar6) {
          lVar2 = *param_1;
          plVar9 = plVar10;
          if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar7 * 8) = plVar4;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (plVar10[5] == plVar9[5]);
            *plVar4 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + (long)plVar7 * 8);
            **(long **)(lVar2 + (long)plVar7 * 8) = (long)plVar10;
            plVar10 = plVar4;
          }
        }
      }
    }
  }
  return plVar3;
}



/* Entry: 10a0d5e2c; end: 10a0d5f77;  */

long FUN_10a0d5e2c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long alStack_58 [3];
  ulong uStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar6 = param_1;
      func_0x000109ffded8();
      pcStack_28 = FUN_10a0d5f78;
      uStack_40 = param_2;
      plStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      FUN_10a0d5ff4(alStack_58);
      *(undefined8 *)(alStack_58[0] + 8) = *(undefined8 *)(alStack_58[0] + 0x28);
      plVar4 = plVar6;
      FUN_10a0d5b44(plVar6,*(undefined8 *)(alStack_58[0] + 0x28),alStack_58[0] + 0x10);
      FUN_10a0d5c8c(plVar6,alStack_58[0],plVar4);
      return alStack_58[0];
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = plVar6[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar5 = uVar5 & uVar7;
      }
      else if (param_2 <= uVar5) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar5) {
          lVar2 = *param_1;
          plVar10 = plVar6;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar4;
            uVar5 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar6[5] == plVar10[5]);
            *plVar4 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
            plVar6 = plVar4;
          }
        }
      }
    }
  }
  return lVar3;
}



/* Entry: 10a0d5f78; end: 10a0d5ff3;  */

long FUN_10a0d5f78(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  FUN_10a0d5ff4(alStack_38);
  *(undefined8 *)(alStack_38[0] + 8) = *(undefined8 *)(alStack_38[0] + 0x28);
  uVar1 = param_1;
  FUN_10a0d5b44(param_1,*(undefined8 *)(alStack_38[0] + 0x28),alStack_38[0] + 0x10);
  FUN_10a0d5c8c(param_1,alStack_38[0],uVar1);
  return alStack_38[0];
}



/* Entry: 10a0d5ff4; end: 10a0d607b;  */

void FUN_10a0d5ff4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a0d607c(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = puVar1[5];
  return;
}



/* Entry: 10a0d607c; end: 10a0d61d7;  */

undefined8 * FUN_10a0d607c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10a0d61d8; end: 10a0d622b;  */

long * FUN_10a0d61d8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d622c(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba18f8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d6380(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d622c; end: 10a0d62eb;  */

undefined8 * FUN_10a0d622c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x228;
  __Znwm();
  puVar1[0x41] = &PTR_FUN_110c383b8;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  *(undefined2 *)(puVar1 + 0x44) = 0x100;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110bd4020;
  puVar1[2] = &PTR_FUN_110bd4130;
  puVar1[7] = &PTR_DAT_110bd4188;
  puVar1[0xd] = &PTR_DAT_110bd41a8;
  puVar1[0x41] = &PTR_DAT_110bd42a8;
  puVar1[0x16] = &PTR_DAT_110bd4218;
  puVar1[0x17] = &PTR_FUN_110bd4248;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x3e] = puVar1 + 0x3f;
  return puVar1;
}



/* Entry: 10a0d62ec; end: 10a0d637f;  */

long * FUN_10a0d62ec(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba18f8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d6380(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d6380; end: 10a0d642f;  */

void FUN_10a0d6380(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d6430; end: 10a0d6433;  */

void FUN_10a0d6430(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d6434; end: 10a0d6447;  */

void FUN_10a0d6434(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d6448; end: 10a0d6463;  */

void FUN_10a0d6448(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d6464; end: 10a0d649f;  */

long FUN_10a0d6464(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d64a0; end: 10a0d64a3;  */

void FUN_10a0d64a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d64a4; end: 10a0d650b;  */

void FUN_10a0d64a4(long *param_1)

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
        lVar2 = lVar2 + -0x28;
        func_0x00010a0cca98(lVar2);
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



/* Entry: 10a0d650c; end: 10a0d6563;  */

long FUN_10a0d650c(long param_1)

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



/* Entry: 10a0d6564; end: 10a0d6647;  */

long FUN_10a0d6564(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a0d6648; end: 10a0d67c7;  */

undefined *** FUN_10a0d6648(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  code **ppcVar11;
  undefined ***extraout_x8;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lStack_90;
  undefined ***pppuStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar10 = &lStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)(param_2 + 0x120);
  lVar7 = param_2;
  puVar9 = param_3;
  func_0x00010a0fda30();
  FUN_10a0d67c8(param_1,uVar13,lVar7,puVar9);
  puVar9 = (undefined8 *)*param_3;
  uVar6 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar9 = param_3;
    uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  func_0x000107c2c4d8(*param_1 + 0x150,puVar9,uVar6);
  pppuStack_88 = (undefined ***)param_1[1];
  lStack_90 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  pcStack_78 = FUN_10a0d4f18;
  ppuStack_70 = &PTR_DAT_110950c70;
  ppcVar11 = &pcStack_78;
  FUN_10a3e4814(param_2,&lStack_90,ppcVar11);
  pppuVar8 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  pppuVar3 = pppuStack_88;
  if (pppuStack_88 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_88 + 1;
    do {
      ppuVar12 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_88)[2])(pppuStack_88);
      pppuVar8 = pppuVar3;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    FUN_10a0d4f28(&lStack_90);
    FUN_10a0d6a2c(pppuVar3);
    __Unwind_Resume();
    FUN_10a3dd220();
    FUN_10a0d681c(pppuVar8,plVar10,ppcVar11);
    *extraout_x8 = (undefined **)pppuVar8;
    ppuVar12 = (undefined **)0x28;
    __Znwm();
    *ppuVar12 = (undefined *)&PTR_FUN_110ba1a98;
    ppuVar12[1] = (undefined *)0x0;
    ppuVar12[2] = (undefined *)0x0;
    ppuVar12[3] = (undefined *)pppuVar8;
    ppuVar12[4] = FUN_10a3df8cc;
    extraout_x8[1] = ppuVar12;
    pppuVar3 = (undefined ***)0x0;
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar3 = pppuVar8 + 5;
    }
    FUN_10a0d6908(extraout_x8,pppuVar3,pppuVar8);
    return extraout_x8;
  }
  return pppuVar8;
}



/* Entry: 10a0d67c8; end: 10a0d681b;  */

long * FUN_10a0d67c8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d681c(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1a98;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d6908(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d681c; end: 10a0d6873;  */

undefined8 FUN_10a0d681c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x790;
  __Znwm(0x790);
  FUN_10a42aa70();
  return uVar1;
}



/* Entry: 10a0d6874; end: 10a0d6907;  */

long * FUN_10a0d6874(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1a98;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d6908(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d6908; end: 10a0d69b7;  */

void FUN_10a0d6908(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d69b8; end: 10a0d69bb;  */

void FUN_10a0d69b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d69bc; end: 10a0d69cf;  */

void FUN_10a0d69bc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d69d0; end: 10a0d69eb;  */

void FUN_10a0d69d0(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d69ec; end: 10a0d6a27;  */

long FUN_10a0d69ec(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d6a28; end: 10a0d6a2b;  */

void FUN_10a0d6a28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d6a2c; end: 10a0d6a83;  */

long FUN_10a0d6a2c(long param_1)

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



/* Entry: 10a0d6a84; end: 10a0d6f87;  */

undefined8 * FUN_10a0d6a84(long *param_1,undefined ***param_2,undefined ***param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  code *pcVar8;
  int *piVar9;
  undefined8 *****pppppuVar10;
  char *pcVar11;
  undefined ***pppuVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  undefined8 *extraout_x8;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined *puVar31;
  undefined8 ****ppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined **ppuStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *param_1;
  lVar20 = lVar18 + 0xb8;
  pppuVar12 = param_2;
  FUN_10a0dc2d0();
  if (lVar18 + 0xc0 == lVar20) {
LAB_10a0d6cac:
    param_2 = param_3;
    puVar16 = (undefined8 *)0x0;
    goto LAB_10a0d6cb0;
  }
  plVar17 = (long *)(*param_1 + 0xb8);
  pppuVar12 = &ppuStack_98;
  FUN_10a0c9a50(plVar17,pppuVar12,param_2);
  if (*plVar17 == 0) goto LAB_10a0d6f14;
  uStack_88 = CONCAT17(5,(undefined7)uStack_88);
  ppuStack_98 = (undefined **)CONCAT26(ppuStack_98._6_2_,0x746867696c);
  piVar9 = (int *)(*plVar17 + 0x38);
  pppuVar12 = &ppuStack_98;
  func_0x00010a0b4efc(piVar9,pppuVar12);
  if (uStack_88 < 0) {
    __ZdlPv(ppuStack_98);
  }
  param_3 = param_2;
  if (*piVar9 != 2) goto LAB_10a0d6cac;
  puVar16 = (undefined8 *)0x0;
  uVar2 = piVar9[1];
  if (-1 < (int)uVar2) {
    lVar20 = *(long *)(param_1[1] + 0x168);
    uVar13 = (*(long *)(param_1[1] + 0x170) - lVar20 >> 3) * 0x4fbcda3ac10c9715;
    if ((int)uVar2 < (int)uVar13) {
      if (uVar13 < uVar2 || uVar13 - uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a0d6f10);
        (*pcVar8)();
      }
      lVar18 = *(long *)param_1[2];
      pcVar11 = "";
      pppppuVar10 = &ppppuStack_d8;
      func_0x000107c2b054(pppppuVar10,"");
      uVar19 = *(undefined8 *)(lVar18 + 0x120);
      func_0x00010a0fda30();
      FUN_10a0d6f88(&ppuStack_c0,uVar19,pppppuVar10,pcVar11);
      pppppuVar10 = (undefined8 *****)ppppuStack_d8;
      if (-1 < (char)bStack_c1) {
        pppppuVar10 = &ppppuStack_d8;
        uStack_d0 = (ulong)bStack_c1;
      }
      func_0x000107c2c4d8(ppuStack_c0 + 0x2a,pppppuVar10,uStack_d0);
      plStack_a8 = plStack_b8;
      ppuStack_b0 = ppuStack_c0;
      if (plStack_b8 != (long *)0x0) {
        plVar17 = plStack_b8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      ppuStack_98 = (undefined **)FUN_10a0d4f18;
      ppuStack_90 = &PTR_DAT_110950c70;
      pppuVar12 = &ppuStack_b0;
      param_2 = &ppuStack_98;
      FUN_10a3e4814(lVar18,pppuVar12,param_2);
      lVar20 = lVar20 + (ulong)uVar2 * 0x1e8;
      (*(code *)*ppuStack_90)(&ppuStack_90);
      plVar17 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar14 = plStack_a8 + 1;
        do {
          lVar18 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      if ((char)bStack_c1 < '\0') {
        __ZdlPv(ppppuStack_d8);
      }
      plVar17 = (long *)(lVar20 + 0x38);
      cVar3 = *(char *)(lVar20 + 0x4f);
      lVar18 = (long)cVar3;
      plVar14 = plVar17;
      lVar15 = lVar18;
      if (lVar18 < 0) {
        plVar14 = *(long **)(lVar20 + 0x38);
        lVar15 = *(long *)(lVar20 + 0x40);
      }
      if ((lVar15 == 5) && ((int)*plVar14 == 0x6e696f70 && *(char *)((long)plVar14 + 4) == 't')) {
        uVar19 = 1;
LAB_10a0d6df8:
        FUN_10a2c6dac(ppuStack_c0,uVar19);
        pppuVar12 = (undefined ***)(lVar20 + 0x18);
        if (lRam00000001137e95a8 == *(long *)(lVar20 + 0x20) - (long)*pppuVar12 >> 3) {
          FUN_10a0b51b0(&ppuStack_98);
          uVar30 = *(undefined4 *)(ppuStack_98 + 1);
          puVar31 = *ppuStack_98;
          ppuStack_90 = ppuStack_98;
          __ZdlPv();
          ppuStack_c0[0x3f] = puVar31;
          *(undefined4 *)(ppuStack_c0 + 0x40) = uVar30;
        }
        *(float *)((long)ppuStack_c0 + 0x20c) =
             (float)(*(double *)(lVar20 + 0x30) / 3.141592653589793);
        *(undefined1 *)((long)ppuStack_c0 + 0x205) = 2;
        fVar29 = (float)*(double *)(lVar20 + 0x50);
        uVar21 = 0;
        uVar23 = 0;
        uVar25 = 0x80;
        uVar27 = 0x7f;
        if (fVar29 != 0.0) {
          uVar21 = SUB41(fVar29,0);
          uVar23 = (undefined1)((uint)fVar29 >> 8);
          uVar25 = (undefined1)((uint)fVar29 >> 0x10);
          uVar27 = (undefined1)((uint)fVar29 >> 0x18);
        }
        fVar29 = (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar23,uVar21))) * 100.0;
        uVar22 = SUB41(fVar29,0);
        uVar24 = (char)((uint)fVar29 >> 8);
        uVar26 = (char)((uint)fVar29 >> 0x10);
        uVar28 = (char)((uint)fVar29 >> 0x18);
        if (*(char *)(param_1[1] + 0x1c) == '\0') {
          uVar22 = uVar21;
          uVar24 = uVar23;
          uVar26 = uVar25;
          uVar28 = uVar27;
        }
        *(uint *)(ppuStack_c0 + 0x41) = CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22)));
        dVar6 = *(double *)(lVar20 + 0x58) * 57.29577951308232;
        dVar7 = *(double *)(lVar20 + 0x60) * 57.29577951308232;
        auVar5[8] = SUB81(dVar7,0);
        auVar5._0_8_ = dVar6;
        auVar5[9] = (char)((ulong)dVar7 >> 8);
        auVar5[10] = (char)((ulong)dVar7 >> 0x10);
        auVar5[0xb] = (char)((ulong)dVar7 >> 0x18);
        auVar5[0xc] = (char)((ulong)dVar7 >> 0x20);
        auVar5[0xd] = (char)((ulong)dVar7 >> 0x28);
        auVar5[0xe] = (char)((ulong)dVar7 >> 0x30);
        auVar5[0xf] = (char)((ulong)dVar7 >> 0x38);
        fVar29 = (float)auVar5._8_8_;
        *(ulong *)((long)ppuStack_c0 + 0x214) =
             CONCAT17((char)((uint)fVar29 >> 0x18),
                      CONCAT16((char)((uint)fVar29 >> 0x10),
                               CONCAT15((char)((uint)fVar29 >> 8),
                                        CONCAT14(SUB41(fVar29,0),(float)dVar6))));
        puVar16 = (undefined8 *)0x1;
      }
      else {
        plVar14 = plVar17;
        lVar15 = lVar18;
        if (cVar3 < '\0') {
          plVar14 = *(long **)(lVar20 + 0x38);
          lVar15 = *(long *)(lVar20 + 0x40);
        }
        if ((lVar15 == 0xb) &&
           (*plVar14 == 0x6f69746365726964 && *(long *)((long)plVar14 + 3) == 0x6c616e6f69746365)) {
          uVar19 = 2;
          goto LAB_10a0d6df8;
        }
        plVar14 = plVar17;
        if (cVar3 < '\0') {
          lVar18 = *(long *)(lVar20 + 0x40);
          plVar14 = *(long **)(lVar20 + 0x38);
        }
        if ((lVar18 == 4) && ((int)*plVar14 == 0x746f7073)) {
          uVar19 = 3;
          goto LAB_10a0d6df8;
        }
        FUN_10a3c762c(ppuStack_c0);
        if ((bRam000000011330a9e8 & 1) != 0) {
          if (*(char *)(lVar20 + 0x4f) < '\0') {
            plVar17 = (long *)*plVar17;
          }
          param_2 = (undefined ***)&UNK_10f637370;
          pppuVar12 = (undefined ***)0x1;
          func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6394be,0xf2,&UNK_10f639572,in_x6,in_x7,
                              plVar17);
        }
        puVar16 = (undefined8 *)0x0;
      }
      if (plStack_b8 != (long *)0x0) {
        plVar17 = plStack_b8 + 1;
        do {
          lVar20 = *plVar17;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = lVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
        }
      }
    }
  }
LAB_10a0d6cb0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar16;
  }
  ___stack_chk_fail();
LAB_10a0d6f14:
  pcVar11 = "map::at:  key not found";
  FUN_109ffdddc();
  FUN_10a0d71ec(&ppuStack_c0);
  __Unwind_Resume();
  FUN_10a3dd220();
  FUN_10a0d6fdc(pcVar11,pppuVar12,param_2);
  *extraout_x8 = pcVar11;
  puVar16 = (undefined8 *)0x28;
  __Znwm();
  *puVar16 = &PTR_FUN_110ba1808;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = pcVar11;
  puVar16[4] = FUN_10a3df8cc;
  extraout_x8[1] = puVar16;
  pcVar1 = (char *)0x0;
  if (pcVar11 != (char *)0x0) {
    pcVar1 = pcVar11 + 0x28;
  }
  FUN_10a0d70c8(extraout_x8,pcVar1,pcVar11);
  return extraout_x8;
}



/* Entry: 10a0d6f88; end: 10a0d6fdb;  */

long * FUN_10a0d6f88(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d6fdc(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1808;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d70c8(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d6fdc; end: 10a0d7033;  */

undefined8 FUN_10a0d6fdc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3b0;
  __Znwm(0x3b0);
  FUN_10a2c65a4();
  return uVar1;
}



/* Entry: 10a0d7034; end: 10a0d70c7;  */

long * FUN_10a0d7034(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1808;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d70c8(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d70c8; end: 10a0d7177;  */

void FUN_10a0d70c8(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d7178; end: 10a0d717b;  */

void FUN_10a0d7178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d717c; end: 10a0d718f;  */

void FUN_10a0d717c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d7190; end: 10a0d71ab;  */

void FUN_10a0d7190(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d71ac; end: 10a0d71e7;  */

long FUN_10a0d71ac(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d71e8; end: 10a0d71eb;  */

void FUN_10a0d71e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d71ec; end: 10a0d7243;  */

long FUN_10a0d71ec(long param_1)

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



/* Entry: 10a0d7244; end: 10a0d7297;  */

long * FUN_10a0d7244(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d7298(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1948;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7384(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7298; end: 10a0d72ef;  */

undefined8 FUN_10a0d7298(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3a8;
  __Znwm(0x3a8);
  FUN_10a40f08c();
  return uVar1;
}



/* Entry: 10a0d72f0; end: 10a0d7383;  */

long * FUN_10a0d72f0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1948;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7384(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7384; end: 10a0d7433;  */

void FUN_10a0d7384(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d7434; end: 10a0d7437;  */

void FUN_10a0d7434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d7438; end: 10a0d744b;  */

void FUN_10a0d7438(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d744c; end: 10a0d7467;  */

void FUN_10a0d744c(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d7468; end: 10a0d74a3;  */

long FUN_10a0d7468(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d74a4; end: 10a0d74a7;  */

void FUN_10a0d74a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d74a8; end: 10a0d74ff;  */

long FUN_10a0d74a8(long param_1)

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



/* Entry: 10a0d7500; end: 10a0d7553;  */

long * FUN_10a0d7500(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d7554(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1998;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7640(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7554; end: 10a0d75ab;  */

undefined8 FUN_10a0d7554(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x4f8;
  __Znwm(0x4f8);
  FUN_10a415680();
  return uVar1;
}



/* Entry: 10a0d75ac; end: 10a0d763f;  */

long * FUN_10a0d75ac(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1998;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7640(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7640; end: 10a0d76ef;  */

void FUN_10a0d7640(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d76f0; end: 10a0d76f3;  */

void FUN_10a0d76f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d76f4; end: 10a0d7707;  */

void FUN_10a0d76f4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d7708; end: 10a0d7723;  */

void FUN_10a0d7708(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d7724; end: 10a0d775f;  */

long FUN_10a0d7724(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d7760; end: 10a0d7763;  */

void FUN_10a0d7760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d7764; end: 10a0d78b7;  */

long FUN_10a0d7764(long param_1)

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



/* Entry: 10a0d78b8; end: 10a0d7903;  */

void FUN_10a0d78b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0d848c(param_2,param_1,0);
  return;
}



/* Entry: 10a0d7904; end: 10a0d7b3f;  */

undefined1  [16] FUN_10a0d7904(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar10 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar6; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[5] == uVar10) {
            uVar2 = 0;
            goto LAB_10a0d7b04;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar4 = (long *)*param_4;
  lVar11 = plVar4[1];
  lVar5 = *plVar4;
  plVar8[4] = plVar4[2];
  plVar8[3] = lVar11;
  plVar8[2] = lVar5;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  lVar5 = plVar4[3];
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[5] = lVar5;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a0d7b40(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a0d7af4;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a0d7af4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a0d7b04:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10a0d7b40; end: 10a0d7c0f;  */

void FUN_10a0d7b40(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a0d7b88:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a0d7d94(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a0d7b88;
  }
  return;
}



/* Entry: 10a0d7c10; end: 10a0d7dd3;  */

void FUN_10a0d7c10(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a0d7d94(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a0d7dd4; end: 10a0d7e27;  */

long * FUN_10a0d7dd4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d7e28(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba18a8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7f80(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7e28; end: 10a0d7eeb;  */

undefined8 * FUN_10a0d7e28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x238;
  __Znwm();
  puVar1[0x43] = &PTR_FUN_110c383b8;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  *(undefined2 *)(puVar1 + 0x46) = 0x100;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110bcab30;
  puVar1[2] = &PTR_FUN_110bcac40;
  puVar1[7] = &PTR_DAT_110bcac98;
  puVar1[0xd] = &PTR_DAT_110bcacb8;
  puVar1[0x43] = &PTR_DAT_110bcadb8;
  puVar1[0x16] = &PTR_DAT_110bcad28;
  puVar1[0x17] = &PTR_FUN_110bcad58;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  *(undefined4 *)(puVar1 + 0x42) = 0x3f800000;
  return puVar1;
}



/* Entry: 10a0d7eec; end: 10a0d7f7f;  */

long * FUN_10a0d7eec(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba18a8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d7f80(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d7f80; end: 10a0d802f;  */

void FUN_10a0d7f80(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0d8030; end: 10a0d8033;  */

void FUN_10a0d8030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d8034; end: 10a0d8047;  */

void FUN_10a0d8034(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d8048; end: 10a0d8063;  */

void FUN_10a0d8048(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d8064; end: 10a0d809f;  */

long FUN_10a0d8064(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d80a0; end: 10a0d80a3;  */

void FUN_10a0d80a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d80a4; end: 10a0d80e3;  */

void FUN_10a0d80a4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a0d80e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0d80e4; end: 10a0d812b;  */

void FUN_10a0d80e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0d812c; end: 10a0d826b;  */

/* WARNING: Possible PIC construction at 0x00010a0d8218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0d821c) */

void FUN_10a0d812c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_c8 [56];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  puVar1 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar6 = (lVar8 >> 5) * -0x5555555555555555 + 1;
  if (uVar6 < 0x2aaaaaaaaaaaaab) {
    lVar5 = param_1[2] - *param_1 >> 5;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x155555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x2aaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a0d8280();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar8);
    plStack_40 = plVar2 + uVar7 * 0xc;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puStack_50[3] = param_2[3];
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uVar13 = param_2[0xb];
    uVar12 = param_2[10];
    uVar14 = param_2[4];
    uVar16 = param_2[7];
    uVar15 = param_2[6];
    puStack_50[5] = param_2[5];
    puStack_50[4] = uVar14;
    puStack_50[7] = uVar16;
    puStack_50[6] = uVar15;
    puStack_50[9] = uVar11;
    puStack_50[8] = uVar10;
    puStack_50[0xb] = uVar13;
    puStack_50[10] = uVar12;
    unaff_x20 = puStack_50 + 0xc;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x10a0d821c;
    plVar3 = param_1;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10a0d826c();
    func_0x00010a0d8404(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a0d826c;
    plVar3 = (long *)&UNK_10f63805b;
    ppuStack_70 = ppuVar9;
    FUN_109ffde64();
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10a0d8280;
    ppuVar9 = &puStack_80;
    if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x60);
      return;
    }
    uVar10 = 0x10a0d82c4;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = param_1;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar1 + -8) = uVar10;
  *(undefined8 **)(puVar1 + -0x28) = param_4;
  *(undefined8 **)(puVar1 + -0x30) = param_4;
  *(long **)(puVar1 + -0x50) = plVar3;
  *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x30;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x28;
  puVar4 = param_2;
  if (param_2 == param_3) {
    puVar1[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      param_4[2] = puVar4[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      param_4[3] = puVar4[3];
      uVar11 = puVar4[5];
      uVar10 = puVar4[4];
      uVar13 = puVar4[7];
      uVar12 = puVar4[6];
      uVar14 = puVar4[8];
      uVar16 = puVar4[0xb];
      uVar15 = puVar4[10];
      param_4[9] = puVar4[9];
      param_4[8] = uVar14;
      param_4[0xb] = uVar16;
      param_4[10] = uVar15;
      param_4[5] = uVar11;
      param_4[4] = uVar10;
      param_4[7] = uVar13;
      param_4[6] = uVar12;
      puVar4 = puVar4 + 0xc;
      param_4 = param_4 + 0xc;
    } while (puVar4 != param_3);
    *(undefined8 **)(puVar1 + -0x28) = param_4;
    puVar1[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 0xc;
    } while (param_2 != param_3);
  }
  FUN_10a0d838c(puVar1 + -0x50);
  return;
}



/* Entry: 10a0d826c; end: 10a0d827f;  */

void FUN_10a0d826c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f63805b;
  FUN_109ffde64();
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar4;
        *puStack_58 = uVar3;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        puStack_58[3] = puVar2[3];
        uVar4 = puVar2[5];
        uVar3 = puVar2[4];
        uVar6 = puVar2[7];
        uVar5 = puVar2[6];
        uVar7 = puVar2[8];
        uVar9 = puVar2[0xb];
        uVar8 = puVar2[10];
        puStack_58[9] = puVar2[9];
        puStack_58[8] = uVar7;
        puStack_58[0xb] = uVar9;
        puStack_58[10] = uVar8;
        puStack_58[5] = uVar4;
        puStack_58[4] = uVar3;
        puStack_58[7] = uVar6;
        puStack_58[6] = uVar5;
        puVar2 = puVar2 + 0xc;
        puStack_58 = puStack_58 + 0xc;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    FUN_10a0d838c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x60);
  return;
}



/* Entry: 10a0d8280; end: 10a0d838b;  */

void FUN_10a0d8280(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar3;
        *puStack_48 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        puStack_48[3] = puVar1[3];
        uVar3 = puVar1[5];
        uVar2 = puVar1[4];
        uVar5 = puVar1[7];
        uVar4 = puVar1[6];
        uVar6 = puVar1[8];
        uVar8 = puVar1[0xb];
        uVar7 = puVar1[10];
        puStack_48[9] = puVar1[9];
        puStack_48[8] = uVar6;
        puStack_48[0xb] = uVar8;
        puStack_48[10] = uVar7;
        puStack_48[5] = uVar3;
        puStack_48[4] = uVar2;
        puStack_48[7] = uVar5;
        puStack_48[6] = uVar4;
        puVar1 = puVar1 + 0xc;
        puStack_48 = puStack_48 + 0xc;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    FUN_10a0d838c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x60);
  return;
}



/* Entry: 10a0d838c; end: 10a0d83bf;  */

long FUN_10a0d838c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0d83c0(param_1);
  }
  return param_1;
}



/* Entry: 10a0d83c0; end: 10a0d848b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d83ec) */

void FUN_10a0d83c0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x60
      ) {
  }
  return;
}



/* Entry: 10a0d848c; end: 10a0d8537;  */

void FUN_10a0d848c(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_48;
  
  for (lVar3 = *(long *)(param_1 + 0x158); lVar3 != param_1 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
    plVar2 = *(long **)(lVar3 + 0x10);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 0x16;
      (**(code **)(*plVar1 + 0x18))(plVar1,0xf958f4765190996);
      plStack_48 = plVar1;
      if ((plVar1 != (long *)0x0) &&
         ((param_3 == 0 || ((**(code **)(*plVar2 + 0x60))(), (int)plVar2 != 0)))) {
        FUN_10a0d8538(param_2,&plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10a0d8538; end: 10a0d85fb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d87c8) */

void FUN_10a0d8538(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x23;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar10 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    lVar9 = (long)puVar1 - *param_1;
    uVar7 = (lVar9 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
      FUN_10a0d85fc();
      plVar2 = (long *)&UNK_10f63805b;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar9 = *plVar2;
      plVar4 = plVar2;
      if ((ulong)((plVar2[2] - lVar9 >> 5) * -0x5555555555555555) < param_4) {
        plVar3 = plVar2;
        FUN_10a0d8804();
        if (0x2aaaaaaaaaaaaaa < param_4) {
          FUN_10a0d826c();
          plVar2[1] = unaff_x23;
          __Unwind_Resume();
          plVar2[1] = 0x2aaaaaaaaaaaaaa;
          __Unwind_Resume();
          if (*plVar3 != 0) {
            FUN_10a0d8988();
            __ZdlPv(*plVar3);
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3[2] = 0;
          }
          return;
        }
        lVar9 = plVar2[2] - *plVar2 >> 5;
        uVar7 = lVar9 * 0x5555555555555556;
        if (uVar7 < param_4 || uVar7 - param_4 == 0) {
          uVar7 = param_4;
        }
        if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar7 = 0x2aaaaaaaaaaaaaa;
        }
        func_0x00010a0d883c(plVar2,uVar7);
        FUN_10a0d8884(plVar2,param_2,param_3,plVar2[1]);
      }
      else {
        lVar8 = plVar2[1];
        if (param_4 <= (ulong)((lVar8 - lVar9 >> 5) * -0x5555555555555555)) {
          if (param_2 != param_3) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (lVar9,param_2);
              *(undefined8 *)(lVar9 + 0x18) = param_2[3];
              uVar12 = param_2[5];
              uVar11 = param_2[4];
              uVar14 = param_2[7];
              uVar13 = param_2[6];
              uVar15 = param_2[8];
              uVar17 = param_2[0xb];
              uVar16 = param_2[10];
              *(undefined8 *)(lVar9 + 0x48) = param_2[9];
              *(undefined8 *)(lVar9 + 0x40) = uVar15;
              *(undefined8 *)(lVar9 + 0x58) = uVar17;
              *(undefined8 *)(lVar9 + 0x50) = uVar16;
              *(undefined8 *)(lVar9 + 0x28) = uVar12;
              *(undefined8 *)(lVar9 + 0x20) = uVar11;
              *(undefined8 *)(lVar9 + 0x38) = uVar14;
              *(undefined8 *)(lVar9 + 0x30) = uVar13;
              param_2 = param_2 + 0xc;
              lVar9 = lVar9 + 0x60;
            } while (param_2 != param_3);
            lVar8 = plVar2[1];
          }
          for (; lVar8 != lVar9; lVar8 = lVar8 + -0x60) {
          }
          plVar2[1] = lVar9;
          return;
        }
        puVar1 = (undefined8 *)((long)param_2 + (lVar8 - lVar9));
        if (lVar8 != lVar9) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,param_2);
            *(undefined8 *)(lVar9 + 0x18) = param_2[3];
            uVar12 = param_2[5];
            uVar11 = param_2[4];
            uVar14 = param_2[7];
            uVar13 = param_2[6];
            uVar15 = param_2[8];
            uVar17 = param_2[0xb];
            uVar16 = param_2[10];
            *(undefined8 *)(lVar9 + 0x48) = param_2[9];
            *(undefined8 *)(lVar9 + 0x40) = uVar15;
            *(undefined8 *)(lVar9 + 0x58) = uVar17;
            *(undefined8 *)(lVar9 + 0x50) = uVar16;
            *(undefined8 *)(lVar9 + 0x28) = uVar12;
            *(undefined8 *)(lVar9 + 0x20) = uVar11;
            *(undefined8 *)(lVar9 + 0x38) = uVar14;
            *(undefined8 *)(lVar9 + 0x30) = uVar13;
            param_2 = param_2 + 0xc;
            lVar9 = lVar9 + 0x60;
          } while (param_2 != puVar1);
          lVar8 = plVar2[1];
        }
        FUN_10a0d8884(plVar2,puVar1,param_3,lVar8);
      }
      plVar2[1] = (long)plVar4;
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_10a0d8610();
    puVar1 = (undefined8 *)((long)plVar2 + lVar9);
    puVar10 = puVar1 + 1;
    *puVar1 = *param_2;
    lVar8 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar2 + uVar6);
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10a0d85fc; end: 10a0d860f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d87c8) */

void FUN_10a0d85fc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar1 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar1;
  plVar3 = plVar1;
  if ((ulong)((plVar1[2] - lVar5 >> 5) * -0x5555555555555555) < param_4) {
    plVar2 = plVar1;
    FUN_10a0d8804();
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_10a0d826c();
      plVar1[1] = unaff_x23;
      __Unwind_Resume();
      plVar1[1] = 0x2aaaaaaaaaaaaaa;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a0d8988();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = plVar1[2] - *plVar1 >> 5;
    uVar4 = lVar5 * 0x5555555555555556;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x155555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar4 = 0x2aaaaaaaaaaaaaa;
    }
    func_0x00010a0d883c(plVar1,uVar4);
    FUN_10a0d8884(plVar1,param_2,param_3,plVar1[1]);
  }
  else {
    lVar6 = plVar1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 5) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          uVar10 = *(undefined8 *)(param_2 + 0x38);
          uVar9 = *(undefined8 *)(param_2 + 0x30);
          uVar11 = *(undefined8 *)(param_2 + 0x40);
          uVar13 = *(undefined8 *)(param_2 + 0x58);
          uVar12 = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          *(undefined8 *)(lVar5 + 0x40) = uVar11;
          *(undefined8 *)(lVar5 + 0x58) = uVar13;
          *(undefined8 *)(lVar5 + 0x50) = uVar12;
          *(undefined8 *)(lVar5 + 0x28) = uVar8;
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          *(undefined8 *)(lVar5 + 0x38) = uVar10;
          *(undefined8 *)(lVar5 + 0x30) = uVar9;
          param_2 = param_2 + 0x60;
          lVar5 = lVar5 + 0x60;
        } while (param_2 != param_3);
        lVar6 = plVar1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x60) {
      }
      plVar1[1] = lVar5;
      return;
    }
    uVar4 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        uVar10 = *(undefined8 *)(param_2 + 0x38);
        uVar9 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(param_2 + 0x40);
        uVar13 = *(undefined8 *)(param_2 + 0x58);
        uVar12 = *(undefined8 *)(param_2 + 0x50);
        *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(lVar5 + 0x40) = uVar11;
        *(undefined8 *)(lVar5 + 0x58) = uVar13;
        *(undefined8 *)(lVar5 + 0x50) = uVar12;
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        *(undefined8 *)(lVar5 + 0x38) = uVar10;
        *(undefined8 *)(lVar5 + 0x30) = uVar9;
        param_2 = param_2 + 0x60;
        lVar5 = lVar5 + 0x60;
      } while (param_2 != uVar4);
      lVar6 = plVar1[1];
    }
    FUN_10a0d8884(plVar1,uVar4,param_3,lVar6);
  }
  plVar1[1] = (long)plVar3;
  return;
}



/* Entry: 10a0d8610; end: 10a0d8643;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d87c8) */

void FUN_10a0d8610(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x23;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - lVar4 >> 5) * -0x5555555555555555) < param_4) {
    plVar1 = param_1;
    FUN_10a0d8804();
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_10a0d826c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x2aaaaaaaaaaaaaa;
      __Unwind_Resume();
      if (*plVar1 != 0) {
        FUN_10a0d8988();
        __ZdlPv(*plVar1);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 5;
    uVar3 = lVar4 * 0x5555555555555556;
    if (uVar3 < param_4 || uVar3 - param_4 == 0) {
      uVar3 = param_4;
    }
    if (0x155555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar3 = 0x2aaaaaaaaaaaaaa;
    }
    func_0x00010a0d883c(param_1,uVar3);
    FUN_10a0d8884(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar5 = param_1[1];
    if (param_4 <= (ulong)((lVar5 - lVar4 >> 5) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4,param_2);
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar7 = *(undefined8 *)(param_2 + 0x28);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          uVar9 = *(undefined8 *)(param_2 + 0x38);
          uVar8 = *(undefined8 *)(param_2 + 0x30);
          uVar10 = *(undefined8 *)(param_2 + 0x40);
          uVar12 = *(undefined8 *)(param_2 + 0x58);
          uVar11 = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          *(undefined8 *)(lVar4 + 0x40) = uVar10;
          *(undefined8 *)(lVar4 + 0x58) = uVar12;
          *(undefined8 *)(lVar4 + 0x50) = uVar11;
          *(undefined8 *)(lVar4 + 0x28) = uVar7;
          *(undefined8 *)(lVar4 + 0x20) = uVar6;
          *(undefined8 *)(lVar4 + 0x38) = uVar9;
          *(undefined8 *)(lVar4 + 0x30) = uVar8;
          param_2 = param_2 + 0x60;
          lVar4 = lVar4 + 0x60;
        } while (param_2 != param_3);
        lVar5 = param_1[1];
      }
      for (; lVar5 != lVar4; lVar5 = lVar5 + -0x60) {
      }
      param_1[1] = lVar4;
      return;
    }
    uVar3 = param_2 + (lVar5 - lVar4);
    if (lVar5 != lVar4) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4,param_2);
        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        uVar12 = *(undefined8 *)(param_2 + 0x58);
        uVar11 = *(undefined8 *)(param_2 + 0x50);
        *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(lVar4 + 0x40) = uVar10;
        *(undefined8 *)(lVar4 + 0x58) = uVar12;
        *(undefined8 *)(lVar4 + 0x50) = uVar11;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        *(undefined8 *)(lVar4 + 0x38) = uVar9;
        *(undefined8 *)(lVar4 + 0x30) = uVar8;
        param_2 = param_2 + 0x60;
        lVar4 = lVar4 + 0x60;
      } while (param_2 != uVar3);
      lVar5 = param_1[1];
    }
    FUN_10a0d8884(param_1,uVar3,param_3,lVar5);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a0d8644; end: 10a0d8803;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d87c8) */

void FUN_10a0d8644(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - lVar5 >> 5) * -0x5555555555555555) < param_4) {
    plVar2 = param_1;
    FUN_10a0d8804();
    if (0x2aaaaaaaaaaaaaa < param_4) {
      FUN_10a0d826c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x2aaaaaaaaaaaaaa;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a0d8988();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 5;
    uVar4 = lVar5 * 0x5555555555555556;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x155555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar4 = 0x2aaaaaaaaaaaaaa;
    }
    func_0x00010a0d883c(param_1,uVar4);
    FUN_10a0d8884(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 5) * -0x5555555555555555)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          uVar10 = *(undefined8 *)(param_2 + 0x38);
          uVar9 = *(undefined8 *)(param_2 + 0x30);
          uVar11 = *(undefined8 *)(param_2 + 0x40);
          uVar13 = *(undefined8 *)(param_2 + 0x58);
          uVar12 = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          *(undefined8 *)(lVar5 + 0x40) = uVar11;
          *(undefined8 *)(lVar5 + 0x58) = uVar13;
          *(undefined8 *)(lVar5 + 0x50) = uVar12;
          *(undefined8 *)(lVar5 + 0x28) = uVar8;
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          *(undefined8 *)(lVar5 + 0x38) = uVar10;
          *(undefined8 *)(lVar5 + 0x30) = uVar9;
          param_2 = param_2 + 0x60;
          lVar5 = lVar5 + 0x60;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x60) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        uVar10 = *(undefined8 *)(param_2 + 0x38);
        uVar9 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(param_2 + 0x40);
        uVar13 = *(undefined8 *)(param_2 + 0x58);
        uVar12 = *(undefined8 *)(param_2 + 0x50);
        *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(lVar5 + 0x40) = uVar11;
        *(undefined8 *)(lVar5 + 0x58) = uVar13;
        *(undefined8 *)(lVar5 + 0x50) = uVar12;
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        *(undefined8 *)(lVar5 + 0x38) = uVar10;
        *(undefined8 *)(lVar5 + 0x30) = uVar9;
        param_2 = param_2 + 0x60;
        lVar5 = lVar5 + 0x60;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a0d8884(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a0d8804; end: 10a0d8883;  */

void FUN_10a0d8804(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a0d8988();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a0d8884; end: 10a0d8923;  */

long FUN_10a0d8884(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x60) {
    FUN_10a0d8924(param_4,param_2);
    param_4 = lStack_38 + 0x60;
  }
  uStack_48 = 1;
  FUN_10a0d838c(&uStack_60);
  return param_4;
}



/* Entry: 10a0d8924; end: 10a0d8987;  */

undefined8 * FUN_10a0d8924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 10a0d8988; end: 10a0d89d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d89b4) */

void FUN_10a0d8988(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x60) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a0d89d4; end: 10a0d8b23;  */

void FUN_10a0d89d4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a0d8988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0d8b24; end: 10a0d8d03;  */

void FUN_10a0d8b24(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 != param_3) {
    lVar4 = param_3[2];
    if (lVar4 != 0) {
      lVar1 = *param_3;
      plVar2 = (long *)param_3[1];
      plVar5 = *(long **)(lVar1 + 8);
      lVar6 = *plVar2;
      *(long **)(lVar6 + 8) = plVar5;
      *plVar5 = lVar6;
      lVar6 = *param_2;
      *(long **)(lVar6 + 8) = plVar2;
      *plVar2 = lVar6;
      *param_2 = lVar1;
      *(long **)(lVar1 + 8) = param_2;
      param_1[2] = param_1[2] + lVar4;
      param_3[2] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0d8b74);
  (*pcVar3)();
}



/* Entry: 10a0d8d04; end: 10a0d8d6f;  */

void FUN_10a0d8d04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d8d70(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d8d70; end: 10a0d8e03;  */

void FUN_10a0d8d70(undefined8 *param_1)

{
  func_0x00010a0d8dac(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0d8e04; end: 10a0d8e6f;  */

void FUN_10a0d8e04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a0d8e70(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a0d8e70; end: 10a0d8eab;  */

void FUN_10a0d8e70(undefined8 *param_1)

{
  FUN_10a0dd8cc(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}


