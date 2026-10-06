/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a22e13c; end: 10a22e277;  */

undefined1  [16] FUN_10a22e13c(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar9 = param_1;
      func_0x000107c2b05c();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = param_1;
              func_0x000107c2b068(param_1,plVar12 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_10a22e46c;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_10a22e4ac(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_10a22e06c(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_10a22e46c:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
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
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 10a22e278; end: 10a22e4ab;  */

undefined1  [16] FUN_10a22e278(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a22e46c;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_10a22e4ac(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10a22e06c(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_10a22e46c:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a22e4ac; end: 10a22e517;  */

void FUN_10a22e4ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a22e518(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22e518; end: 10a22e58b;  */

undefined8 * FUN_10a22e518(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10a22e58c(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10a22e58c; end: 10a22e6ab;  */

undefined8 * FUN_10a22e58c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar1 = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = uVar1;
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
  }
  uVar3 = param_2[8];
  uVar2 = param_2[7];
  uVar4 = *(undefined8 *)((long)param_2 + 0x46);
  *(undefined8 *)((long)param_1 + 0x4e) = *(undefined8 *)((long)param_2 + 0x4e);
  *(undefined8 *)((long)param_1 + 0x46) = uVar4;
  param_1[8] = uVar3;
  param_1[7] = uVar2;
  if (*(char *)((long)param_2 + 0x6f) < '\0') {
    func_0x000107c3192c(param_1 + 0xb,param_2[0xb],param_2[0xc]);
  }
  else {
    uVar3 = param_2[0xc];
    uVar2 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xb] = uVar2;
  }
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  FUN_10a22e6ac(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 10a22e6ac; end: 10a22e6ff;  */

undefined8 * FUN_10a22e6ac(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a22e700(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a22e700; end: 10a22e7ff;  */

void FUN_10a22e700(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x00010a22e780(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a22e800; end: 10a22e97f;  */

long * FUN_10a22e800(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, FUN_10a003e3c(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar3 = param_2;
      plVar4 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar3[2];
          bVar1 = (long *)*plVar6 == plVar3;
          plVar3 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar3 = plVar6 + 4;
      FUN_10a003e3c(plVar3,param_5);
      if (((uint)plVar3 >> 7 & 1) == 0) {
FUN_10a203020:
        param_1 = param_1 + 1;
        plVar3 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar3 != (long *)0x0) {
          while (plVar6 = plVar3, uVar2 = param_5, FUN_10a003e3c(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar3 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_10a20308c;
          }
          plVar3 = plVar6 + 4;
          FUN_10a003e3c(plVar3,param_5);
          if (((uint)plVar3 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar3 = (long *)*param_1;
        }
LAB_10a20308c:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    FUN_10a003e3c(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar4 = (long *)*plVar5;
      plVar6 = param_2;
      plVar3 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        FUN_10a003e3c(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_10a203020;
        plVar4 = (long *)*plVar5;
      }
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 10a22e980; end: 10a22ea43;  */

void FUN_10a22e980(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x88;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  }
  uVar2 = param_3[5];
  *(undefined8 *)(lVar1 + 0x50) = param_3[6];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = param_3[7];
  *(undefined8 *)(lVar1 + 0x60) = param_3[8];
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  uVar2 = param_3[9];
  *(undefined8 *)(lVar1 + 0x70) = param_3[10];
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  uVar2 = param_3[0xb];
  *(undefined8 *)(lVar1 + 0x80) = param_3[0xc];
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  uVar2 = param_3[3];
  *(undefined8 *)(lVar1 + 0x40) = param_3[4];
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22ea44; end: 10a22ec13;  */

void FUN_10a22ea44(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a22ec14; end: 10a22ec87;  */

undefined8 * FUN_10a22ec14(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22ec88(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22ee94(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22ec88; end: 10a22ed57;  */

undefined1  [16] FUN_10a22ec88(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long **pplVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long **unaff_x25;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_88 [3];
  
  plVar14 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar14 = param_2;
  }
  plVar13 = (long *)param_1[1];
  if (param_2 >= plVar13 && param_2 != plVar13) {
LAB_10a22ecd0:
    plVar14 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar14 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        pplVar8 = aplStack_88;
        func_0x000107c2b05c(pplVar8,param_2 + 4);
        pplVar15 = (long **)param_1[1];
        if (pplVar15 != (long **)0x0) {
          uVar5 = (long)pplVar15 - 1;
          if (((ulong)pplVar15 & uVar5) == 0) {
            unaff_x25 = (long **)(uVar5 & (ulong)pplVar8);
          }
          else {
            unaff_x25 = pplVar8;
            if (pplVar15 <= pplVar8) {
              uVar9 = 0;
              if (pplVar15 != (long **)0x0) {
                uVar9 = (ulong)pplVar8 / (ulong)pplVar15;
              }
              unaff_x25 = (long **)((long)pplVar8 - uVar9 * (long)pplVar15);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              pplVar7 = (long **)plVar14[1];
              if (pplVar7 == pplVar8) {
                plVar4 = plVar14 + 2;
                FUN_10a22f138(plVar4,param_2);
                if (((ulong)plVar4 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_10a22f08c;
                }
              }
              else {
                if (((ulong)pplVar15 & uVar5) == 0) {
                  pplVar7 = (long **)((ulong)pplVar7 & uVar5);
                }
                else if (pplVar15 <= pplVar7) {
                  uVar9 = 0;
                  if (pplVar15 != (long **)0x0) {
                    uVar9 = (ulong)pplVar7 / (ulong)pplVar15;
                  }
                  pplVar7 = (long **)((long)pplVar7 - uVar9 * (long)pplVar15);
                }
                if (pplVar7 != unaff_x25) break;
              }
            }
          }
        }
        FUN_10a22f0cc(aplStack_88,param_1,pplVar8,param_3);
        if ((pplVar15 == (long **)0x0) ||
           (*(float *)(param_1 + 4) * (float)pplVar15 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long **)0x2 < pplVar15) {
            uVar5 = (ulong)(((ulong)pplVar15 & (long)pplVar15 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)pplVar15 << 1;
          uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar9) {
            uVar5 = uVar9;
          }
          FUN_10a22ec88(param_1,uVar5);
          pplVar15 = (long **)param_1[1];
          if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
            unaff_x25 = (long **)((long)pplVar15 - 1U & (ulong)pplVar8);
          }
          else {
            unaff_x25 = pplVar8;
            if (pplVar15 <= pplVar8) {
              uVar5 = 0;
              if (pplVar15 != (long **)0x0) {
                uVar5 = (ulong)pplVar8 / (ulong)pplVar15;
              }
              unaff_x25 = (long **)((long)pplVar8 - uVar5 * (long)pplVar15);
            }
          }
        }
        lVar2 = *param_1;
        plVar14 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar14 == (long *)0x0) {
          plVar14 = param_1 + 2;
          *aplStack_88[0] = *plVar14;
          *plVar14 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar14;
          if (*aplStack_88[0] != 0) {
            pplVar8 = *(long ***)(*aplStack_88[0] + 8);
            if (((ulong)pplVar15 & (long)pplVar15 - 1U) == 0) {
              pplVar8 = (long **)((ulong)pplVar8 & (long)pplVar15 - 1U);
            }
            else if (pplVar15 <= pplVar8) {
              uVar5 = 0;
              if (pplVar15 != (long **)0x0) {
                uVar5 = (ulong)pplVar8 / (ulong)pplVar15;
              }
              pplVar8 = (long **)((long)pplVar8 - uVar5 * (long)pplVar15);
            }
            *(long **)(*param_1 + (long)pplVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar14;
          *plVar14 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar14 = aplStack_88[0];
LAB_10a22f08c:
        auVar18._8_8_ = uVar3;
        auVar18._0_8_ = plVar14;
        return auVar18;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar13 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar5);
        }
        else if (param_2 <= plVar13) {
          uVar9 = 0;
          if (param_2 != (long *)0x0) {
            uVar9 = (ulong)plVar13 / (ulong)param_2;
          }
          plVar13 = (long *)((long)plVar13 - uVar9 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar4;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar5);
          }
          else if (param_2 <= plVar12) {
            uVar9 = 0;
            if (param_2 != (long *)0x0) {
              uVar9 = (ulong)plVar12 / (ulong)param_2;
            }
            plVar12 = (long *)((long)plVar12 - uVar9 * (long)param_2);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar13) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar12 * 8) = plVar4;
              plVar13 = plVar12;
            }
            else {
              *plVar4 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar1 + (long)plVar12 * 8);
              **(long **)(lVar1 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar4;
            }
          }
          plVar4 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    auVar17._8_8_ = plVar14;
    auVar17._0_8_ = lVar2;
    return auVar17;
  }
  if (param_2 < plVar13) {
    plVar14 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar14) {
      plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
    }
    if (param_2 <= plVar14) {
      param_2 = plVar14;
    }
    if (param_2 < plVar13) goto LAB_10a22ecd0;
  }
  auVar16._8_8_ = plVar4;
  auVar16._0_8_ = plVar14;
  return auVar16;
}



/* Entry: 10a22ed58; end: 10a22ee93;  */

undefined1  [16] FUN_10a22ed58(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long **pplVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long **pplVar14;
  long **unaff_x25;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *aplStack_88 [3];
  
  uVar15 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar15 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      pplVar9 = aplStack_88;
      func_0x000107c2b05c(pplVar9,param_2 + 0x20);
      pplVar14 = (long **)param_1[1];
      if (pplVar14 != (long **)0x0) {
        uVar15 = (long)pplVar14 - 1;
        if (((ulong)pplVar14 & uVar15) == 0) {
          unaff_x25 = (long **)(uVar15 & (ulong)pplVar9);
        }
        else {
          unaff_x25 = pplVar9;
          if (pplVar14 <= pplVar9) {
            uVar5 = 0;
            if (pplVar14 != (long **)0x0) {
              uVar5 = (ulong)pplVar9 / (ulong)pplVar14;
            }
            unaff_x25 = (long **)((long)pplVar9 - uVar5 * (long)pplVar14);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar10 = (long *)*puVar7; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            pplVar8 = (long **)plVar10[1];
            if (pplVar8 == pplVar9) {
              plVar11 = plVar10 + 2;
              FUN_10a22f138(plVar11,param_2);
              if (((ulong)plVar11 & 1) != 0) {
                uVar4 = 0;
                goto LAB_10a22f08c;
              }
            }
            else {
              if (((ulong)pplVar14 & uVar15) == 0) {
                pplVar8 = (long **)((ulong)pplVar8 & uVar15);
              }
              else if (pplVar14 <= pplVar8) {
                uVar5 = 0;
                if (pplVar14 != (long **)0x0) {
                  uVar5 = (ulong)pplVar8 / (ulong)pplVar14;
                }
                pplVar8 = (long **)((long)pplVar8 - uVar5 * (long)pplVar14);
              }
              if (pplVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_10a22f0cc(aplStack_88,param_1,pplVar9,param_3);
      if ((pplVar14 == (long **)0x0) ||
         (*(float *)(param_1 + 4) * (float)pplVar14 < (float)(param_1[3] + 1))) {
        uVar15 = 1;
        if ((long **)0x2 < pplVar14) {
          uVar15 = (ulong)(((ulong)pplVar14 & (long)pplVar14 - 1U) != 0);
        }
        uVar15 = uVar15 | (long)pplVar14 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar15 <= uVar5) {
          uVar15 = uVar5;
        }
        FUN_10a22ec88(param_1,uVar15);
        pplVar14 = (long **)param_1[1];
        if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
          unaff_x25 = (long **)((long)pplVar14 - 1U & (ulong)pplVar9);
        }
        else {
          unaff_x25 = pplVar9;
          if (pplVar14 <= pplVar9) {
            uVar15 = 0;
            if (pplVar14 != (long **)0x0) {
              uVar15 = (ulong)pplVar9 / (ulong)pplVar14;
            }
            unaff_x25 = (long **)((long)pplVar9 - uVar15 * (long)pplVar14);
          }
        }
      }
      lVar3 = *param_1;
      plVar10 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar10 == (long *)0x0) {
        plVar10 = param_1 + 2;
        *aplStack_88[0] = *plVar10;
        *plVar10 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar10;
        if (*aplStack_88[0] != 0) {
          pplVar9 = *(long ***)(*aplStack_88[0] + 8);
          if (((ulong)pplVar14 & (long)pplVar14 - 1U) == 0) {
            pplVar9 = (long **)((ulong)pplVar9 & (long)pplVar14 - 1U);
          }
          else if (pplVar14 <= pplVar9) {
            uVar15 = 0;
            if (pplVar14 != (long **)0x0) {
              uVar15 = (ulong)pplVar9 / (ulong)pplVar14;
            }
            pplVar9 = (long **)((long)pplVar9 - uVar15 * (long)pplVar14);
          }
          *(long **)(*param_1 + (long)pplVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar10;
        *plVar10 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar10 = aplStack_88[0];
LAB_10a22f08c:
      auVar17._8_8_ = uVar4;
      auVar17._0_8_ = plVar10;
      return auVar17;
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
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      uVar5 = plVar10[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar13 = 0;
        if (param_2 != 0) {
          uVar13 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar13 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar10;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((param_2 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (param_2 <= uVar13) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar13 / param_2;
          }
          uVar13 = uVar13 - uVar1 * param_2;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar13 * 8) == 0) {
            *(long **)(lVar2 + uVar13 * 8) = plVar10;
            uVar5 = uVar13;
          }
          else {
            *plVar10 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar2 + uVar13 * 8);
            **(long **)(lVar2 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar10;
          }
        }
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = lVar3;
  return auVar16;
}



/* Entry: 10a22ee94; end: 10a22f0cb;  */

undefined1  [16] FUN_10a22ee94(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long **unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  pplVar6 = aplStack_68;
  func_0x000107c2b05c(pplVar6,param_2 + 0x20);
  pplVar9 = (long **)param_1[1];
  if (pplVar9 != (long **)0x0) {
    uVar10 = (long)pplVar9 - 1;
    if (((ulong)pplVar9 & uVar10) == 0) {
      unaff_x25 = (long **)(uVar10 & (ulong)pplVar6);
    }
    else {
      unaff_x25 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar7 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar7 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar6 - uVar7 * (long)pplVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar4 = (long **)plVar8[1];
        if (pplVar4 == pplVar6) {
          plVar1 = plVar8 + 2;
          FUN_10a22f138(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10a22f08c;
          }
        }
        else {
          if (((ulong)pplVar9 & uVar10) == 0) {
            pplVar4 = (long **)((ulong)pplVar4 & uVar10);
          }
          else if (pplVar9 <= pplVar4) {
            uVar7 = 0;
            if (pplVar9 != (long **)0x0) {
              uVar7 = (ulong)pplVar4 / (ulong)pplVar9;
            }
            pplVar4 = (long **)((long)pplVar4 - uVar7 * (long)pplVar9);
          }
          if (pplVar4 != unaff_x25) break;
        }
      }
    }
  }
  FUN_10a22f0cc(aplStack_68,param_1,pplVar6,param_3);
  if ((pplVar9 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if ((long **)0x2 < pplVar9) {
      uVar10 = (ulong)(((ulong)pplVar9 & (long)pplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)pplVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    FUN_10a22ec88(param_1,uVar10);
    pplVar9 = (long **)param_1[1];
    if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
      unaff_x25 = (long **)((long)pplVar9 - 1U & (ulong)pplVar6);
    }
    else {
      unaff_x25 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_68[0] = *plVar8;
    *plVar8 = (long)aplStack_68[0];
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar8;
    if (*aplStack_68[0] != 0) {
      pplVar6 = *(long ***)(*aplStack_68[0] + 8);
      if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
        pplVar6 = (long **)((ulong)pplVar6 & (long)pplVar9 - 1U);
      }
      else if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        pplVar6 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
      *(long **)(*param_1 + (long)pplVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar8;
    *plVar8 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
  plVar8 = aplStack_68[0];
LAB_10a22f08c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a22f0cc; end: 10a22f137;  */

void FUN_10a22f0cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a22f1a4(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22f138; end: 10a22f1a3;  */

bool FUN_10a22f138(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)(param_1 + 0x37);
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)(param_2 + 0x37);
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*(long *)(param_1 + 0x20);
    if (-1 < (char)bVar4) {
      plVar6 = (long *)(param_1 + 0x20);
    }
    plVar3 = (long *)*(long *)(param_2 + 0x20);
    if (-1 < (char)bVar5) {
      plVar3 = (long *)(param_2 + 0x20);
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10a22f1a4; end: 10a22f1eb;  */

long FUN_10a22f1a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a22f23c();
  FUN_10a22f32c(lVar1 + 0x70,param_2 + 0x70);
  return param_1;
}



/* Entry: 10a22f1ec; end: 10a22f23b;  */

long FUN_10a22f1ec(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a22f23c; end: 10a22f32b;  */

undefined1 * FUN_10a22f23c(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  if ((char)param_2[0x1f] < '\0') {
    func_0x000107c3192c(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  if ((char)param_2[0x37] < '\0') {
    func_0x000107c3192c(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),
                        *(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_10a0e9a40();
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  return param_1;
}



/* Entry: 10a22f32c; end: 10a22f39f;  */

undefined8 * FUN_10a22f32c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22f3a0(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22f5ac(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22f3a0; end: 10a22f46f;  */

undefined1  [16] FUN_10a22f3a0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_10a22f3e8:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar8 = param_1;
        FUN_10a22f7e8();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = plVar12 + 2;
                FUN_10a22f8c4(plVar9,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_10a22f79c;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_10a22f840(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_10a22f3a0(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_10a22f79c:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_10a22f3e8;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a22f470; end: 10a22f5ab;  */

undefined1  [16] FUN_10a22f470(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar9 = param_1;
      FUN_10a22f7e8();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = plVar12 + 2;
              FUN_10a22f8c4(plVar8,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_10a22f79c;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_10a22f840(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_10a22f3a0(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_10a22f79c:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
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
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 10a22f5ac; end: 10a22f7e7;  */

undefined1  [16] FUN_10a22f5ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  FUN_10a22f7e8();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = plVar7 + 2;
          FUN_10a22f8c4(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a22f79c;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_10a22f840(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10a22f3a0(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_10a22f79c:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a22f7e8; end: 10a22f83f;  */

ulong FUN_10a22f7e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 uStack_21;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  puVar3 = &uStack_21;
  func_0x000107c2b05c(puVar3,param_2 + 2);
  uVar4 = (long)iVar1 + 0x9e3779b9;
  uVar4 = (ulong)(puVar3 + (uVar4 >> 2) + uVar4 * 0x40 + 0x9e3779b9) ^ uVar4;
  return (long)iVar2 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
}



/* Entry: 10a22f840; end: 10a22f8c3;  */

void FUN_10a22f840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a22fa58(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22f8c4; end: 10a22f98b;  */

bool FUN_10a22f8c4(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int *piVar7;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    bVar4 = *(byte *)((long)param_1 + 0x1f);
    uVar1 = *(ulong *)(param_1 + 4);
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar2 = *(ulong *)(param_2 + 4);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      piVar7 = *(int **)(param_1 + 2);
      if (-1 < (char)bVar4) {
        piVar7 = param_1 + 2;
      }
      piVar3 = *(int **)(param_2 + 2);
      if (-1 < (char)bVar5) {
        piVar3 = param_2 + 2;
      }
      _memcmp(piVar7,piVar3);
      if ((int)piVar7 == 0) {
        if ((*(byte *)(param_2 + 0x11) & *(byte *)(param_1 + 0x11)) == 0) {
          return *(byte *)(param_1 + 0x11) == *(byte *)(param_2 + 0x11);
        }
        bVar4 = *(byte *)((long)param_1 + 0x21);
        bVar5 = *(byte *)((long)param_2 + 0x21);
        if ((bVar5 & bVar4) != 0) {
          bVar4 = *(byte *)(param_1 + 8);
          bVar5 = *(byte *)(param_2 + 8);
        }
        if (bVar4 == bVar5) {
          bVar6 = *(byte *)(param_1 + 0x10) == *(byte *)(param_2 + 0x10);
          if ((*(byte *)(param_2 + 0x10) & *(byte *)(param_1 + 0x10)) != 0) {
            if (((((float)param_1[9] == (float)param_2[9]) &&
                 ((float)param_1[10] == (float)param_2[10])) &&
                ((float)param_1[0xb] == (float)param_2[0xb])) &&
               ((((float)param_1[0xc] == (float)param_2[0xc] &&
                 ((float)param_1[0xd] == (float)param_2[0xd])) &&
                ((float)param_1[0xe] == (float)param_2[0xe])))) {
              return (float)param_1[0xf] == (float)param_2[0xf];
            }
            return false;
          }
        }
        else {
          bVar6 = false;
        }
        return bVar6;
      }
    }
  }
  return false;
}



/* Entry: 10a22f98c; end: 10a22fa57;  */

bool FUN_10a22f98c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar1 = param_1[1];
  bVar2 = param_2[1];
  if ((bVar2 & bVar1) != 0) {
    bVar1 = *param_1;
    bVar2 = *param_2;
  }
  if (bVar1 == bVar2) {
    bVar3 = param_1[0x20] == param_2[0x20];
    if ((param_2[0x20] & param_1[0x20]) != 0) {
      if ((((*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
           (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
          (*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc))) &&
         (((*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10) &&
           (*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14))) &&
          (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18))))) {
        return *(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c);
      }
      return false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10a22fa58; end: 10a22fc9b;  */

undefined8 * FUN_10a22fa58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 1,param_2[1],param_2[2]);
  }
  else {
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[1] = uVar1;
  }
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 10a22fc9c; end: 10a22fd1f;  */

void FUN_10a22fc9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a22fd20(param_1,param_4);
    lVar1 = param_1;
    FUN_10a22fdc8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a22fd20; end: 10a22fd6b;  */

undefined1  [16] FUN_10a22fd20(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    plVar1 = param_1;
    FUN_10a22fd80();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xb);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a22fd6c();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_2 * 0x58;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar3 = param_2;
    FUN_10a22fe4c(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a22fd6c; end: 10a22fd7f;  */

undefined1  [16] FUN_10a22fd6c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_10a22fe4c(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a22fd80; end: 10a22fdc7;  */

undefined1  [16] FUN_10a22fd80(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_10a22fe4c(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a22fdc8; end: 10a22fe4b;  */

long FUN_10a22fdc8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10a22fe4c(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  return param_4;
}



/* Entry: 10a22fe4c; end: 10a22feff;  */

undefined8 * FUN_10a22fe4c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = param_2[5];
  func_0x000107c2b124(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 10a22ff00; end: 10a22ff43;  */

void FUN_10a22ff00(undefined8 *param_1)

{
  func_0x000107c2ab24(param_1 + 6);
  func_0x00010a052434(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a22ff44; end: 10a22ffb3;  */

void FUN_10a22ff44(long *param_1)

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
        lVar2 = lVar2 + -0x58;
        FUN_10a22ff00(lVar2);
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



/* Entry: 10a22ffb4; end: 10a23005b;  */

long FUN_10a22ffb4(long param_1)

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



/* Entry: 10a23005c; end: 10a2300f3;  */

undefined1 * FUN_10a23005c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_10a2300f4(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10a1ccb30(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 10a2300f4; end: 10a230177;  */

void FUN_10a2300f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a230178(param_1,param_4);
    lVar1 = param_1;
    FUN_10a230220(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a230178; end: 10a2301c3;  */

undefined1  [16] FUN_10a230178(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1;
    FUN_10a2301d8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a2301c4();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x492492492492493) {
    lVar2 = param_2 * 0x38;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar3 = param_2;
    FUN_10a2302a4(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a2301c4; end: 10a2301d7;  */

undefined1  [16] FUN_10a2301c4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar2 = param_2;
    FUN_10a2302a4(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a2301d8; end: 10a23021f;  */

undefined1  [16] FUN_10a2301d8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    uVar2 = param_2;
    FUN_10a2302a4(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a230220; end: 10a2302a3;  */

long FUN_10a230220(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10a2302a4(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 10a2302a4; end: 10a2303d3;  */

undefined8 * FUN_10a2302a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10a2303d4; end: 10a230443;  */

void FUN_10a2303d4(long *param_1)

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
        func_0x00010a230338(lVar2);
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



/* Entry: 10a230444; end: 10a2304ff;  */

long FUN_10a230444(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
    lStack_28 = param_1 + 8;
    FUN_10a2303d4(&lStack_28);
  }
  return param_1;
}



/* Entry: 10a230500; end: 10a230513;  */

void FUN_10a230500(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_58;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x19999999999999a) {
    __Znwm(param_2 * 0xa0);
    return;
  }
  func_0x000109ffded8();
  if (*(char *)((long)puVar1 + 0x47) < '\0') {
    __ZdlPv(puVar1[6]);
  }
  puStack_58 = puVar1 + 3;
  FUN_10a0426d8(&puStack_58);
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  return;
}



/* Entry: 10a230514; end: 10a2305ab;  */

void FUN_10a230514(undefined8 *param_1,ulong param_2)

{
  undefined8 *puStack_48;
  
  if (param_2 < 0x19999999999999a) {
    __Znwm(param_2 * 0xa0);
    return;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  puStack_48 = param_1 + 3;
  FUN_10a0426d8(&puStack_48);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a2305ac; end: 10a23061b;  */

void FUN_10a2305ac(long *param_1)

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
        lVar2 = lVar2 + -0xa0;
        func_0x00010a230558(lVar2);
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



/* Entry: 10a23061c; end: 10a2306cf;  */

undefined8 * FUN_10a23061c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a2306d0; end: 10a230717;  */

void FUN_10a2306d0(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar1 = (char)param_1[5];
  if (cVar1 == (char)param_2[5]) {
    if (cVar1 != '\0') {
      func_0x00010a2307b8();
      lVar4 = *param_2;
      *param_2 = 0;
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      lVar3 = param_2[2];
      lVar4 = param_2[1];
      param_1[2] = lVar3;
      param_1[1] = lVar4;
      param_2[1] = 0;
      lVar4 = param_2[3];
      param_1[3] = lVar4;
      *(int *)(param_1 + 4) = (int)param_2[4];
      if (lVar4 != 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
        uVar6 = param_1[1];
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar5 = uVar6 - 1 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar2 * uVar6;
        }
        *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    FUN_10a23080c();
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    func_0x00010a22c9fc();
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 10a230718; end: 10a23080b;  */

void FUN_10a230718(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010a2307b8();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a23080c; end: 10a230877;  */

void FUN_10a23080c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a230878; end: 10a23092f;  */

void FUN_10a230878(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puStack_28;
  
  cVar1 = *(char *)(param_1 + 0x17);
  if (cVar1 == *(char *)(param_2 + 0x17)) {
    if (cVar1 != '\0') {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
      param_1[1] = uVar3;
      *param_1 = uVar2;
      func_0x00010a230998(param_1 + 3,param_2 + 3);
      func_0x00010a230a6c(param_1 + 7,param_2 + 7);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      FUN_10a230b90(param_1 + 0x14);
      uVar2 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar2;
      param_1[0x16] = param_2[0x16];
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x17) == '\x01') {
        puStack_28 = param_1 + 0x14;
        FUN_10a22d224(&puStack_28);
        FUN_10a22ce48(param_1 + 7);
        if ((*(char *)(param_1 + 6) == '\x01') && (param_1[3] != 0)) {
          param_1[4] = param_1[3];
          __ZdlPv();
        }
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      return;
    }
    FUN_10a230bf4(param_1,param_2);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return;
}



/* Entry: 10a230930; end: 10a230b8f;  */

void FUN_10a230930(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lStack_28 = param_1 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(param_1 + 0x38);
    if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



/* Entry: 10a230b90; end: 10a230bf3;  */

void FUN_10a230b90(long *param_1)

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
        lVar2 = lVar2 + -0x58;
        FUN_10a22d0f8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a230bf4; end: 10a230c9b;  */

undefined8 * FUN_10a230bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
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
    *(undefined1 *)(param_1 + 6) = 1;
  }
  FUN_10a230c9c(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
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
  return param_1;
}



/* Entry: 10a230c9c; end: 10a230ccb;  */

undefined1 * FUN_10a230c9c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  FUN_10a230ccc();
  return param_1;
}



/* Entry: 10a230ccc; end: 10a230dcb;  */

void FUN_10a230ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_1[5] = param_2[5];
    func_0x000107c2b12c(param_1 + 6,param_2 + 6);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
}



/* Entry: 10a230dcc; end: 10a230e33;  */

void FUN_10a230dcc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  func_0x00010a22dfb0(param_1,*plVar4);
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 10a230e34; end: 10a230edb;  */

void FUN_10a230e34(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = (char)param_1[7];
  if (cVar1 == (char)param_2[7]) {
    if (cVar1 != '\0') {
      func_0x0001074293d0(param_1,param_2);
      lVar3 = param_2[4];
      lVar2 = param_2[3];
      uVar4 = *(undefined8 *)((long)param_2 + 0x25);
      *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
      *(undefined8 *)((long)param_1 + 0x25) = uVar4;
      param_1[4] = lVar3;
      param_1[3] = lVar2;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    lVar3 = param_2[4];
    lVar2 = param_2[3];
    uVar4 = *(undefined8 *)((long)param_2 + 0x25);
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    *(undefined8 *)((long)param_1 + 0x25) = uVar4;
    param_1[4] = lVar3;
    param_1[3] = lVar2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



/* Entry: 10a230edc; end: 10a230f23;  */

void FUN_10a230edc(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar1 = (char)param_1[5];
  if (cVar1 == (char)param_2[5]) {
    if (cVar1 != '\0') {
      func_0x00010a230fc4();
      lVar4 = *param_2;
      *param_2 = 0;
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      lVar3 = param_2[2];
      lVar4 = param_2[1];
      param_1[2] = lVar3;
      param_1[1] = lVar4;
      param_2[1] = 0;
      lVar4 = param_2[3];
      param_1[3] = lVar4;
      *(int *)(param_1 + 4) = (int)param_2[4];
      if (lVar4 != 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
        uVar6 = param_1[1];
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar5 = uVar6 - 1 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar2 * uVar6;
        }
        *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    FUN_10a231018();
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    func_0x00010a22eba0();
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 10a230f24; end: 10a231017;  */

void FUN_10a230f24(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010a230fc4();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a231018; end: 10a231083;  */

void FUN_10a231018(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a231084; end: 10a2310cb;  */

void FUN_10a231084(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar1 = (char)param_1[5];
  if (cVar1 == (char)param_2[5]) {
    if (cVar1 != '\0') {
      func_0x00010a23116c();
      lVar4 = *param_2;
      *param_2 = 0;
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      lVar3 = param_2[2];
      lVar4 = param_2[1];
      param_1[2] = lVar3;
      param_1[1] = lVar4;
      param_2[1] = 0;
      lVar4 = param_2[3];
      param_1[3] = lVar4;
      *(int *)(param_1 + 4) = (int)param_2[4];
      if (lVar4 != 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
        uVar6 = param_1[1];
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar5 = uVar6 - 1 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar2 * uVar6;
        }
        *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    FUN_10a2311c0();
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    func_0x00010a22fc28();
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 10a2310cc; end: 10a2311bf;  */

void FUN_10a2310cc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010a23116c();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a2311c0; end: 10a23122b;  */

void FUN_10a2311c0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a23122c; end: 10a23141b;  */

void FUN_10a23122c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  cVar2 = *(char *)(param_1 + 7);
  if (cVar2 == *(char *)(param_2 + 0x38)) {
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
      plVar1 = param_1 + 2;
      func_0x00010a23116c();
      lVar5 = *(long *)(param_2 + 0x10);
      *(long *)(param_2 + 0x10) = 0;
      lVar4 = *plVar1;
      *plVar1 = lVar5;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      lVar4 = *(long *)(param_2 + 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      param_1[4] = lVar4;
      param_1[3] = uVar7;
      *(undefined8 *)(param_2 + 0x18) = 0;
      lVar5 = *(long *)(param_2 + 0x28);
      param_1[5] = lVar5;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
      if (lVar5 != 0) {
        uVar6 = *(ulong *)(lVar4 + 8);
        uVar8 = param_1[3];
        if ((uVar8 & uVar8 - 1) == 0) {
          uVar6 = uVar8 - 1 & uVar6;
        }
        else if (uVar8 <= uVar6) {
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar3 * uVar8;
        }
        *(undefined8 **)(*plVar1 + uVar6 * 8) = param_1 + 4;
        *(long *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
      }
      return;
    }
  }
  else if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
    *param_1 = &PTR_FUN_110bef348;
    FUN_10a2311c0(param_1 + 2,param_2 + 0x10);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    *param_1 = &PTR_FUN_110bef348;
    func_0x00010a22fc28(param_1 + 2);
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



/* Entry: 10a23141c; end: 10a23147f;  */

void FUN_10a23141c(long *param_1)

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
        lVar2 = lVar2 + -0x58;
        FUN_10a22ff00(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a231480; end: 10a2315db;  */

void FUN_10a231480(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      FUN_10a23141c(param_1);
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    puStack_28 = param_1;
    FUN_10a22ff44(&puStack_28);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 10a2315dc; end: 10a23170b;  */

void FUN_10a2315dc(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      func_0x00010a23175c(param_1 + 2,param_2 + 2);
      cVar1 = *(char *)(param_1 + 0x2c);
      if (cVar1 == *(char *)(param_2 + 0x2c)) {
        if (cVar1 != '\0') {
          uVar2 = *(undefined8 *)(param_2 + 8);
          uVar4 = *(undefined8 *)(param_2 + 0xe);
          uVar3 = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 8) = uVar2;
          *(undefined8 *)(param_1 + 0xe) = uVar4;
          *(undefined8 *)(param_1 + 0xc) = uVar3;
          uVar3 = *(undefined8 *)(param_2 + 0x12);
          uVar2 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
          *(undefined8 *)(param_1 + 0x12) = uVar3;
          *(undefined8 *)(param_1 + 0x10) = uVar2;
          uVar5 = *(undefined8 *)(param_2 + 0x22);
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          uVar3 = *(undefined8 *)(param_2 + 0x26);
          uVar2 = *(undefined8 *)(param_2 + 0x24);
          uVar7 = *(undefined8 *)(param_2 + 0x1e);
          uVar6 = *(undefined8 *)(param_2 + 0x1c);
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(param_1 + 0x22) = uVar5;
          *(undefined8 *)(param_1 + 0x20) = uVar4;
          *(undefined8 *)(param_1 + 0x26) = uVar3;
          *(undefined8 *)(param_1 + 0x24) = uVar2;
          *(undefined8 *)(param_1 + 0x1e) = uVar7;
          *(undefined8 *)(param_1 + 0x1c) = uVar6;
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
          *(undefined8 *)(param_1 + 0x18) = uVar2;
        }
      }
      else if (cVar1 == '\0') {
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_2 + 0xe);
        uVar3 = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
        *(undefined8 *)(param_1 + 8) = uVar2;
        *(undefined8 *)(param_1 + 0xe) = uVar4;
        *(undefined8 *)(param_1 + 0xc) = uVar3;
        uVar3 = *(undefined8 *)(param_2 + 0x12);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)(param_1 + 0x12) = uVar3;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        uVar3 = *(undefined8 *)(param_2 + 0x1e);
        uVar2 = *(undefined8 *)(param_2 + 0x1c);
        uVar5 = *(undefined8 *)(param_2 + 0x22);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar7 = *(undefined8 *)(param_2 + 0x26);
        uVar6 = *(undefined8 *)(param_2 + 0x24);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x22) = uVar5;
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        *(undefined8 *)(param_1 + 0x26) = uVar7;
        *(undefined8 *)(param_1 + 0x24) = uVar6;
        *(undefined8 *)(param_1 + 0x1e) = uVar3;
        *(undefined8 *)(param_1 + 0x1c) = uVar2;
        uVar2 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x32);
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x33);
      *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
      *(undefined8 *)(param_1 + 0x33) = uVar4;
      *(undefined8 *)(param_1 + 0x32) = uVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      func_0x00010a20a7e0(param_1 + 0x38,param_2 + 0x38);
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        if ((*(char *)(param_1 + 0x3e) == '\x01') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
          __ZdlPv(*(undefined8 *)(param_1 + 0x38));
        }
        FUN_10a22ffb4(param_1 + 2);
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    FUN_10a2317c0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



/* Entry: 10a23170c; end: 10a2317bf;  */

void FUN_10a23170c(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(char *)(param_1 + 0xf7) < '\0')) {
      __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
    }
    FUN_10a22ffb4(param_1 + 8);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return;
}



/* Entry: 10a2317c0; end: 10a231877;  */

void FUN_10a2317c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x12);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x1e);
    uVar1 = *(undefined8 *)(param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_2 + 0x22);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x26);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x22) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x26) = uVar6;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x32);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x35);
  uVar3 = *(undefined8 *)(param_2 + 0x33);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x35) = uVar4;
  *(undefined8 *)(param_1 + 0x33) = uVar3;
  *(undefined8 *)(param_1 + 0x32) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_2 + 0x3a) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  return;
}



/* Entry: 10a231878; end: 10a231907;  */

void FUN_10a231878(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puStack_28;
  
  cVar1 = param_1[0x40];
  if (cVar1 == param_2[0x40]) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      FUN_10a2319d4(param_1 + 8);
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      func_0x00010a20a7e0(param_1 + 0x20,param_2 + 0x20);
    }
    return;
  }
  if (cVar1 != '\0') {
    if (param_1[0x40] == '\x01') {
      if ((param_1[0x38] == '\x01') && ((char)param_1[0x37] < '\0')) {
        __ZdlPv(*(undefined8 *)(param_1 + 0x20));
      }
      puStack_28 = param_1 + 8;
      FUN_10a2303d4(&puStack_28);
      param_1[0x40] = 0;
    }
    return;
  }
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x20] = 0;
  param_1[0x38] = 0;
  if (param_2[0x38] == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    param_1[0x38] = 1;
  }
  param_1[0x40] = 1;
  return;
}



/* Entry: 10a231908; end: 10a231967;  */

void FUN_10a231908(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
    lStack_28 = param_1 + 8;
    FUN_10a2303d4(&lStack_28);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10a231968; end: 10a2319d3;  */

void FUN_10a231968(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x20] = 0;
  param_1[0x38] = 0;
  if (param_2[0x38] == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    param_1[0x38] = 1;
  }
  param_1[0x40] = 1;
  return;
}



/* Entry: 10a2319d4; end: 10a231a37;  */

void FUN_10a2319d4(long *param_1)

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
        lVar2 = lVar2 + -0x38;
        func_0x00010a230338(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a231a38; end: 10a231c67;  */

void FUN_10a231a38(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == *(char *)(param_2 + 0xb)) {
    if (cVar1 != '\0') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        __ZdlPv(param_1[3]);
      }
      uVar3 = param_2[4];
      uVar2 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[3] = uVar2;
      *(undefined1 *)((long)param_2 + 0x2f) = 0;
      *(undefined1 *)(param_2 + 3) = 0;
      if (*(char *)((long)param_1 + 0x47) < '\0') {
        __ZdlPv(param_1[6]);
      }
      uVar3 = param_2[7];
      uVar2 = param_2[6];
      param_1[8] = param_2[8];
      param_1[7] = uVar3;
      param_1[6] = uVar2;
      *(undefined1 *)((long)param_2 + 0x47) = 0;
      *(undefined1 *)(param_2 + 6) = 0;
      uVar2 = param_2[9];
      *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
      param_1[9] = uVar2;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xb) == '\x01') {
        if (*(char *)((long)param_1 + 0x47) < '\0') {
          __ZdlPv(param_1[6]);
        }
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          __ZdlPv(param_1[3]);
        }
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      return;
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    uVar2 = param_2[9];
    *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
    param_1[9] = uVar2;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
}



/* Entry: 10a231c68; end: 10a231ccb;  */

void FUN_10a231c68(long *param_1)

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
        lVar2 = lVar2 + -0xa0;
        func_0x00010a230558(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a231ccc; end: 10a231d67;  */

void FUN_10a231ccc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 10a231d68; end: 10a231daf;  */

void FUN_10a231d68(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar1 = (char)param_1[5];
  if (cVar1 == (char)param_2[5]) {
    if (cVar1 != '\0') {
      func_0x00010a13cb24();
      lVar4 = *param_2;
      *param_2 = 0;
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      lVar3 = param_2[2];
      lVar4 = param_2[1];
      param_1[2] = lVar3;
      param_1[1] = lVar4;
      param_2[1] = 0;
      lVar4 = param_2[3];
      param_1[3] = lVar4;
      *(int *)(param_1 + 4) = (int)param_2[4];
      if (lVar4 != 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
        uVar6 = param_1[1];
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar5 = uVar6 - 1 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar2 * uVar6;
        }
        *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    FUN_10a13d7dc();
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    func_0x00010a12d2c4();
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



/* Entry: 10a231db0; end: 10a231fb3;  */

long FUN_10a231db0(long param_1)

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



/* Entry: 10a231fb4; end: 10a232087;  */

undefined1  [16] FUN_10a231fb4(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  plVar7 = (long *)(param_1 + 8);
  plVar8 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    do {
      while (plVar7 = plVar4, (ulong)plVar7[5] <= *(ulong *)(param_2 + 8)) {
        if (*(ulong *)(param_2 + 8) <= (ulong)plVar7[5]) {
          uVar5 = 0;
          goto LAB_10a232070;
        }
        plVar4 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_10a23201c;
        }
      }
      plVar4 = (long *)*plVar7;
      plVar8 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
  }
LAB_10a23201c:
  plVar4 = (long *)0x30;
  __Znwm();
  lVar6 = param_3[1];
  lVar9 = *param_3;
  plVar4[5] = param_3[1];
  plVar4[4] = lVar9;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a232088(param_1,plVar7,plVar8,plVar4);
  uVar5 = 1;
  plVar7 = plVar4;
LAB_10a232070:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a232088; end: 10a2321d3;  */

void FUN_10a232088(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a2321d4; end: 10a2321e7;  */

void FUN_10a2321d4(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    pplStack_78 = &plStack_60;
    pplStack_70 = &plStack_58;
    plVar5 = param_2;
    puStack_80 = puVar4;
    plStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
      plStack_58 = param_4;
    }
    else {
      do {
        plStack_58 = param_4 + 1;
        *param_4 = *plVar5;
        plVar6 = plVar5 + 1;
        *plVar5 = 0;
        param_4 = plStack_58;
        plVar5 = plVar6;
      } while (plVar6 != param_3);
      uStack_68 = 1;
      do {
        plVar5 = (long *)*param_2;
        if (plVar5 != (long *)0x0) {
          puVar1 = (ulong *)(plVar5 + 1);
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
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    FUN_10a2322f0(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10a2321e8; end: 10a2322ef;  */

void FUN_10a2321e8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    plVar4 = param_2;
    uStack_70 = param_1;
    plStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
      plStack_48 = param_4;
    }
    else {
      do {
        plStack_48 = param_4 + 1;
        *param_4 = *plVar4;
        plVar5 = plVar4 + 1;
        *plVar4 = 0;
        param_4 = plStack_48;
        plVar4 = plVar5;
      } while (plVar5 != param_3);
      uStack_58 = 1;
      do {
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
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
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    FUN_10a2322f0(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 3);
  return;
}



/* Entry: 10a2322f0; end: 10a232323;  */

long FUN_10a2322f0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a232324(param_1);
  }
  return param_1;
}



/* Entry: 10a232324; end: 10a23239b;  */

void FUN_10a232324(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)**(undefined8 **)(param_1 + 0x10);
  plVar7 = (long *)**(undefined8 **)(param_1 + 8);
  while (plVar6 != plVar7) {
    plVar6 = plVar6 + -1;
    plVar4 = (long *)*plVar6;
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
  return;
}



/* Entry: 10a23239c; end: 10a2325bb;  */

void FUN_10a23239c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  *puVar5 = FUN_10a23d210;
  puVar5[1] = FUN_10a23d318;
  puVar5[10] = param_2;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *(long *)(param_2 + 0x10);
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xb) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a232534);
    (*pcVar4)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x00010a225c4c(puVar5[10]);
  func_0x0001092ba100(puVar5 + 2);
  func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 10a2325bc; end: 10a2325fb;  */

void FUN_10a2325bc(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a2325fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a2325fc; end: 10a23267b;  */

void FUN_10a2325fc(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a23267c; end: 10a2326df;  */

undefined8 * FUN_10a23267c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bb42a8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a2326e0; end: 10a2326e3;  */

void FUN_10a2326e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2326e4; end: 10a2326f7;  */

void FUN_10a2326e4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2326f8; end: 10a23270f;  */

void FUN_10a2326f8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a232708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a232710; end: 10a232747;  */

undefined8 FUN_10a232710(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb42f8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a232748; end: 10a23274b;  */

void FUN_10a232748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23274c; end: 10a23275f;  */

undefined1  [16] FUN_10a23274c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined4 *)0x1745d1745d1745e) {
    lVar2 = (long)puVar1 * 0xb0;
    __Znwm(lVar2);
    auVar6._8_8_ = puVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  *puVar1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 2);
    func_0x000107c3192c(puVar1 + 2,puVar3,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar1 + 4) = uVar5;
    *(undefined8 *)(puVar1 + 2) = uVar4;
    puVar3 = param_2;
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 8);
    func_0x000107c3192c(puVar1 + 8,puVar3,*(undefined8 *)(param_2 + 10));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 10);
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(puVar1 + 10) = uVar5;
    *(undefined8 *)(puVar1 + 8) = uVar4;
  }
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0xe);
    func_0x000107c3192c(puVar1 + 0xe,puVar3,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(puVar1 + 0x10) = uVar5;
    *(undefined8 *)(puVar1 + 0xe) = uVar4;
  }
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0x14);
    func_0x000107c3192c(puVar1 + 0x14,puVar3,*(undefined8 *)(param_2 + 0x16));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x16);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar1 + 0x16) = uVar5;
    *(undefined8 *)(puVar1 + 0x14) = uVar4;
  }
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0x1a);
    func_0x000107c3192c(puVar1 + 0x1a,puVar3,*(undefined8 *)(param_2 + 0x1c));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(puVar1 + 0x1c) = uVar5;
    *(undefined8 *)(puVar1 + 0x1a) = uVar4;
  }
  if (*(char *)((long)param_2 + 0x97) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0x20);
    func_0x000107c3192c(puVar1 + 0x20,puVar3,*(undefined8 *)(param_2 + 0x22));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x22);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(puVar1 + 0x22) = uVar5;
    *(undefined8 *)(puVar1 + 0x20) = uVar4;
  }
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0x26);
    func_0x000107c3192c(puVar1 + 0x26,puVar3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(puVar1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(puVar1 + 0x28) = uVar5;
    *(undefined8 *)(puVar1 + 0x26) = uVar4;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = puVar1;
  return auVar7;
}



/* Entry: 10a232760; end: 10a2327a7;  */

undefined1  [16] FUN_10a232760(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < (undefined4 *)0x1745d1745d1745e) {
    lVar1 = (long)param_1 * 0xb0;
    __Znwm(lVar1);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 2);
    func_0x000107c3192c(param_1 + 2,puVar2,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar3;
    puVar2 = param_2;
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 8);
    func_0x000107c3192c(param_1 + 8,puVar2,*(undefined8 *)(param_2 + 10));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 0xe);
    func_0x000107c3192c(param_1 + 0xe,puVar2,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0xe) = uVar3;
  }
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    func_0x000107c3192c(param_1 + 0x14,puVar2,*(undefined8 *)(param_2 + 0x16));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x16);
    uVar3 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar4;
    *(undefined8 *)(param_1 + 0x14) = uVar3;
  }
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 0x1a);
    func_0x000107c3192c(param_1 + 0x1a,puVar2,*(undefined8 *)(param_2 + 0x1c));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x1a) = uVar3;
  }
  if (*(char *)((long)param_2 + 0x97) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 0x20);
    func_0x000107c3192c(param_1 + 0x20,puVar2,*(undefined8 *)(param_2 + 0x22));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x22);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    puVar2 = *(undefined4 **)(param_2 + 0x26);
    func_0x000107c3192c(param_1 + 0x26,puVar2,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x26) = uVar3;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10a2327a8; end: 10a23298b;  */

undefined4 * FUN_10a2327a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 0xe,*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10)
                       );
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0xe) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    func_0x000107c3192c(param_1 + 0x14,*(undefined8 *)(param_2 + 0x14),
                        *(undefined8 *)(param_2 + 0x16));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x16);
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar2;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x7f) < '\0') {
    func_0x000107c3192c(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x1a),
                        *(undefined8 *)(param_2 + 0x1c));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x1c);
    uVar1 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    *(undefined8 *)(param_1 + 0x1a) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x97) < '\0') {
    func_0x000107c3192c(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),
                        *(undefined8 *)(param_2 + 0x22));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x22);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    func_0x000107c3192c(param_1 + 0x26,*(undefined8 *)(param_2 + 0x26),
                        *(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x26) = uVar1;
  }
  return param_1;
}


