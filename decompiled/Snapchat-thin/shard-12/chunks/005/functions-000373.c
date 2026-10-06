/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10923fe80; end: 10923ffb3;  */

void FUN_10923fe80(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109234da0();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10923ffb4; end: 1092401c7;  */

undefined1  [16] FUN_10923ffb4(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  undefined1 auVar14 [16];
  
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar5 = uVar12 - 1;
    uVar11 = (uint)uVar12;
    if ((uVar12 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar11 - 1 & uVar1);
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = uVar1 / uVar11;
        }
        unaff_x24 = (ulong)(uVar1 - uVar2 * uVar11);
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar7; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar8 = plVar10[1];
        if (uVar8 == uVar13) {
          if (*(uint *)(plVar10 + 2) == uVar1) {
            uVar4 = 0;
            goto LAB_109240194;
          }
        }
        else {
          if ((uVar12 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar12 <= uVar8) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar8 / uVar12;
            }
            uVar8 = uVar8 - uVar3 * uVar12;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar13;
  *(undefined4 *)(plVar10 + 2) = *(undefined4 *)*param_4;
  plVar10[3] = 0;
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar12) {
      uVar5 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar5 = uVar5 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar12) {
      uVar5 = uVar12;
    }
    FUN_1092401c8(param_1,uVar5);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar5 * uVar12;
      }
    }
  }
  lVar9 = *param_1;
  plVar6 = *(long **)(lVar9 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
    *(long **)(lVar9 + unaff_x24 * 8) = plVar6;
    if (*plVar10 == 0) goto LAB_109240184;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar5 * uVar12;
    }
    plVar6 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar10 = *plVar6;
  }
  *plVar6 = (long)plVar10;
LAB_109240184:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_109240194:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar10;
  return auVar14;
}



/* Entry: 1092401c8; end: 109240297;  */

uint * FUN_1092401c8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  
  puVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (uint *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar5 = param_2;
  }
  puVar16 = *(uint **)(param_1 + 2);
  if (puVar16 < param_2) {
LAB_109240210:
    if (param_2 == (uint *)0x0) {
      puVar5 = *(uint **)param_1;
      param_1[0] = 0;
      param_1[1] = 0;
      if (puVar5 != (uint *)0x0) {
        __ZdlPv();
      }
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *(ulong *)(param_1 + 2);
        if (uVar7 != 0) {
          uVar1 = *param_2;
          uVar9 = (ulong)uVar1;
          uVar10 = uVar7 - 1;
          uVar6 = (uint)uVar7;
          if ((uVar7 & uVar10) == 0) {
            uVar13 = (ulong)(uVar6 - 1 & uVar1);
          }
          else {
            uVar13 = uVar9;
            if (uVar7 <= uVar9) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar1 / uVar6;
              }
              uVar13 = (ulong)(uVar1 - uVar2 * uVar6);
            }
          }
          plVar8 = *(long **)(*(long *)param_1 + uVar13 * 8);
          if (plVar8 != (long *)0x0) {
            puVar5 = (uint *)*plVar8;
            do {
              if (puVar5 == (uint *)0x0) {
                return (uint *)0x0;
              }
              uVar15 = *(ulong *)(puVar5 + 2);
              if (uVar15 == uVar9) {
                if (puVar5[4] == uVar1) {
                  return puVar5;
                }
              }
              else {
                if ((uVar7 & uVar10) == 0) {
                  uVar15 = uVar15 & uVar10;
                }
                else if (uVar7 <= uVar15) {
                  uVar3 = 0;
                  if (uVar7 != 0) {
                    uVar3 = uVar15 / uVar7;
                  }
                  uVar15 = uVar15 - uVar3 * uVar7;
                }
                if (uVar15 != uVar13) {
                  return (uint *)0x0;
                }
              }
              puVar5 = *(uint **)puVar5;
            } while( true );
          }
        }
        return (uint *)0x0;
      }
      lVar4 = (long)param_2 << 3;
      __Znwm();
      puVar5 = *(uint **)param_1;
      *(long *)param_1 = lVar4;
      if (puVar5 != (uint *)0x0) {
        __ZdlPv();
      }
      puVar16 = (uint *)0x0;
      *(uint **)(param_1 + 2) = param_2;
      do {
        *(undefined8 *)(*(long *)param_1 + (long)puVar16 * 8) = 0;
        puVar16 = (uint *)((long)puVar16 + 1);
      } while (param_2 != puVar16);
      plVar8 = *(long **)(param_1 + 4);
      if (plVar8 != (long *)0x0) {
        puVar16 = (uint *)plVar8[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          puVar16 = (uint *)((ulong)puVar16 & uVar7);
        }
        else if (param_2 <= puVar16) {
          uVar9 = 0;
          if (param_2 != (uint *)0x0) {
            uVar9 = (ulong)puVar16 / (ulong)param_2;
          }
          puVar16 = (uint *)((long)puVar16 - uVar9 * (long)param_2);
        }
        *(uint **)(*(long *)param_1 + (long)puVar16 * 8) = param_1 + 4;
        plVar11 = (long *)*plVar8;
        while (plVar11 != (long *)0x0) {
          puVar14 = (uint *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            puVar14 = (uint *)((ulong)puVar14 & uVar7);
          }
          else if (param_2 <= puVar14) {
            uVar9 = 0;
            if (param_2 != (uint *)0x0) {
              uVar9 = (ulong)puVar14 / (ulong)param_2;
            }
            puVar14 = (uint *)((long)puVar14 - uVar9 * (long)param_2);
          }
          plVar12 = plVar11;
          if (puVar14 != puVar16) {
            lVar4 = *(long *)param_1;
            if (*(long *)(lVar4 + (long)puVar14 * 8) == 0) {
              *(long **)(lVar4 + (long)puVar14 * 8) = plVar8;
              puVar16 = puVar14;
            }
            else {
              *plVar8 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + (long)puVar14 * 8);
              **(long **)(lVar4 + (long)puVar14 * 8) = (long)plVar11;
              plVar12 = plVar8;
            }
          }
          plVar8 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    return puVar5;
  }
  if (param_2 < puVar16) {
    puVar5 = (uint *)(long)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if ((puVar16 < (uint *)0x3) || (((ulong)puVar16 & (long)puVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((uint *)0x1 < puVar5) {
      puVar5 = (uint *)(1L << (-LZCOUNT((long)puVar5 + -1) & 0x3fU));
    }
    if (param_2 <= puVar5) {
      param_2 = puVar5;
    }
    if (param_2 < puVar16) goto LAB_109240210;
  }
  return puVar5;
}



/* Entry: 109240298; end: 1092403d3;  */

long * FUN_109240298(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  
  if (param_2 == (uint *)0x0) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar8 = param_1[1];
      if (uVar8 != 0) {
        uVar1 = *param_2;
        uVar10 = (ulong)uVar1;
        uVar11 = uVar8 - 1;
        uVar6 = (uint)uVar8;
        if ((uVar8 & uVar11) == 0) {
          uVar14 = (ulong)(uVar6 - 1 & uVar1);
        }
        else {
          uVar14 = uVar10;
          if (uVar8 <= uVar10) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar1 / uVar6;
            }
            uVar14 = (ulong)(uVar1 - uVar2 * uVar6);
          }
        }
        plVar5 = *(long **)(*param_1 + uVar14 * 8);
        if (plVar5 != (long *)0x0) {
          plVar5 = (long *)*plVar5;
          do {
            if (plVar5 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar16 = plVar5[1];
            if (uVar16 == uVar10) {
              if (*(uint *)(plVar5 + 2) == uVar1) {
                return plVar5;
              }
            }
            else {
              if ((uVar8 & uVar11) == 0) {
                uVar16 = uVar16 & uVar11;
              }
              else if (uVar8 <= uVar16) {
                uVar3 = 0;
                if (uVar8 != 0) {
                  uVar3 = uVar16 / uVar8;
                }
                uVar16 = uVar16 - uVar3 * uVar8;
              }
              if (uVar16 != uVar14) {
                return (long *)0x0;
              }
            }
            plVar5 = (long *)*plVar5;
          } while( true );
        }
      }
      return (long *)0x0;
    }
    lVar4 = (long)param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    puVar7 = (uint *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar7 * 8) = 0;
      puVar7 = (uint *)((long)puVar7 + 1);
    } while (param_2 != puVar7);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      puVar7 = (uint *)plVar9[1];
      uVar8 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar8) == 0) {
        puVar7 = (uint *)((ulong)puVar7 & uVar8);
      }
      else if (param_2 <= puVar7) {
        uVar10 = 0;
        if (param_2 != (uint *)0x0) {
          uVar10 = (ulong)puVar7 / (ulong)param_2;
        }
        puVar7 = (uint *)((long)puVar7 - uVar10 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar7 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar9;
      while (plVar12 != (long *)0x0) {
        puVar15 = (uint *)plVar12[1];
        if (((ulong)param_2 & uVar8) == 0) {
          puVar15 = (uint *)((ulong)puVar15 & uVar8);
        }
        else if (param_2 <= puVar15) {
          uVar10 = 0;
          if (param_2 != (uint *)0x0) {
            uVar10 = (ulong)puVar15 / (ulong)param_2;
          }
          puVar15 = (uint *)((long)puVar15 - uVar10 * (long)param_2);
        }
        plVar13 = plVar12;
        if (puVar15 != puVar7) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)puVar15 * 8) == 0) {
            *(long **)(lVar4 + (long)puVar15 * 8) = plVar9;
            puVar7 = puVar15;
          }
          else {
            *plVar9 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar4 + (long)puVar15 * 8);
            **(long **)(lVar4 + (long)puVar15 * 8) = (long)plVar12;
            plVar13 = plVar9;
          }
        }
        plVar9 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  return plVar5;
}



/* Entry: 1092403d4; end: 109240477;  */

long * FUN_1092403d4(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = *param_2;
    uVar6 = (ulong)uVar1;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & uVar1);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar1 / uVar4;
        }
        uVar8 = (ulong)(uVar1 - uVar2 * uVar4);
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      do {
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (*(uint *)(plVar9 + 2) == uVar1) {
            return plVar9;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109240478; end: 1092404c7;  */

void FUN_109240478(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c2ac48(uVar1);
    lVar2 = uVar1 + 0x40;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    func_0x000107c2ac44();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1092404c8; end: 10924071f;  */

undefined1  [16]
FUN_1092404c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1092406d0;
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
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_109240720(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
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
    FUN_1092407cc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1092406d0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109240720; end: 1092407cb;  */

void FUN_109240720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  param_1[1] = param_2;
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1092407cc; end: 10924089b;  */

void FUN_1092407cc(long *param_1,ulong param_2)

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
LAB_109240814:
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
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
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
    if (param_2 < uVar9) goto LAB_109240814;
  }
  return;
}



/* Entry: 10924089c; end: 109240a27;  */

void FUN_10924089c(long *param_1,ulong param_2)

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
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
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



/* Entry: 109240a28; end: 109240b0b;  */

long FUN_109240a28(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 109240b0c; end: 109240b87;  */

long * FUN_109240b0c(long *param_1)

{
  long lVar1;
  
  func_0x000109240b44(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109240b88; end: 109240bd7;  */

void FUN_109240b88(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109240ce0(uVar1);
    lVar2 = uVar1 + 0x40;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_109240bd8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109240bd8; end: 109240cdf;  */

long * FUN_109240bd8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 5;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar4 = 0x3ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923f07c();
    }
    lVar5 = (long)plVar2 + lVar5;
    plStack_40 = plVar2 + uVar4 * 8;
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_109240ce0(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x40);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010923f0b0(param_1,*param_1,param_1[1],lVar5);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x00010923f140(&plStack_58);
    return plVar2;
  }
  FUN_10923f068();
  func_0x00010923f140(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar6 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar6;
    *param_1 = lVar5;
  }
  lVar6 = param_2[4];
  lVar5 = param_2[3];
  param_1[5] = 0;
  param_1[4] = lVar6;
  param_1[3] = lVar5;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x000107c2abe0();
  return param_1;
}



/* Entry: 109240ce0; end: 109240d77;  */

undefined8 * FUN_109240ce0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x000107c2abe0();
  return param_1;
}



/* Entry: 109240d78; end: 109240db3;  */

void FUN_109240d78(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109240db4();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    func_0x000107c2ac4c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109240db4; end: 109240e27;  */

void FUN_109240db4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar1 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar3;
    *puVar2 = uVar1;
  }
  uVar1 = param_2[3];
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
  puVar2[3] = uVar1;
  *(undefined8 **)(param_1 + 8) = puVar2 + 5;
  return;
}



/* Entry: 109240e28; end: 109240e63;  */

void FUN_109240e28(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109240e64();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_109240ed0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109240e64; end: 109240ecf;  */

void FUN_109240e64(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  uVar2 = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[3] = uVar2;
  *(undefined8 **)(param_1 + 8) = puVar1 + 5;
  return;
}



/* Entry: 109240ed0; end: 109241027;  */

long * FUN_109240ed0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (uVar4 < 0x666666666666667) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923f1a0();
    }
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    plStack_40 = plVar2 + uVar5 * 5;
    plStack_48 = puVar1;
    plStack_58 = plVar2;
    plStack_50 = puVar1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar8;
      *puVar1 = uVar7;
    }
    uVar7 = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[3] = uVar7;
    plStack_48 = plStack_48 + 5;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    func_0x00010923f1e4(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar6;
    func_0x00010923f314(&plStack_58);
    return plVar2;
  }
  FUN_10923f18c();
  func_0x00010923f314(&plStack_58);
  __Unwind_Resume();
  uVar4 = param_1[1];
  if (uVar4 < (ulong)param_1[2]) {
    FUN_109241064();
    plVar2 = (long *)(uVar4 + 0x28);
  }
  else {
    plVar2 = param_1;
    func_0x000107c2ac50();
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 109241028; end: 109241063;  */

void FUN_109241028(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109241064();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    func_0x000107c2ac50();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109241064; end: 1092410d7;  */

void FUN_109241064(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar1 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar3;
    *puVar2 = uVar1;
  }
  uVar1 = param_2[3];
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
  puVar2[3] = uVar1;
  *(undefined8 **)(param_1 + 8) = puVar2 + 5;
  return;
}



/* Entry: 1092410d8; end: 10924115b;  */

long * FUN_1092410d8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10924115c; end: 1092411c7;  */

void FUN_10924115c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  puVar1[3] = param_2[3];
  *(undefined8 **)(param_1 + 8) = puVar1 + 4;
  return;
}



/* Entry: 1092411c8; end: 10924128f;  */

/* WARNING: Removing unreachable block (ram,0x0001092415bc) */

long * FUN_1092411c8(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x23;
  long *plStack_130;
  long **pplStack_128;
  long **pplStack_120;
  undefined1 uStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 ****ppppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    lVar13 = *param_2;
    plVar4[1] = param_2[1];
    *plVar4 = lVar13;
    plVar4 = plVar4 + 2;
    plVar3 = param_1;
  }
  else {
    lVar13 = (long)plVar4 - *param_1;
    uVar1 = (lVar13 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10923bcd4();
      pcStack_38 = FUN_109241290;
      if (param_5 < 1) {
        return param_2;
      }
      plVar4 = (long *)param_1[1];
      puStack_40 = &stack0xfffffffffffffff0;
      if (param_1[2] - (long)plVar4 >> 2 < param_5) {
        lVar13 = *param_1;
        uVar1 = param_5 + ((long)plVar4 - lVar13 >> 2);
        if (uVar1 >> 0x3e != 0) {
          FUN_10923f788();
          pcStack_78 = FUN_109241488;
          plVar3 = (long *)*param_1;
          plVar10 = param_1;
          plStack_b0 = plVar4;
          ppuStack_80 = &puStack_40;
          if ((long *)(param_1[2] - (long)plVar3 >> 5) < param_4) {
            plVar11 = param_1;
            plVar4 = param_2;
            plVar6 = param_3;
            plVar8 = param_4;
            FUN_10923fde4();
            if ((ulong)param_4 >> 0x3b != 0) {
              FUN_10923b77c();
              param_1[1] = unaff_x23;
              __Unwind_Resume();
              param_1[1] = (long)plVar3;
              __Unwind_Resume();
              pcStack_b8 = FUN_1092415f8;
              ppppuStack_e0 = &pppuStack_c0;
              plStack_d0 = param_3;
              plStack_c8 = param_1;
              pppuStack_c0 = &ppuStack_80;
              if ((ulong)plVar4 >> 0x3b == 0) {
                plVar3 = plVar11;
                func_0x000107c2ab98();
                *plVar11 = (long)plVar3;
                plVar11[1] = (long)plVar3;
                plVar11[2] = (long)(plVar3 + (long)plVar4 * 4);
                return plVar3;
              }
              FUN_10923b77c();
              pcStack_d8 = FUN_109241630;
              pplStack_128 = &plStack_110;
              pplStack_120 = &plStack_108;
              uStack_118 = 0;
              plStack_f8 = plVar3;
              plStack_e8 = param_1;
              plStack_130 = plVar11;
              plStack_100 = param_2;
              plStack_f0 = param_3;
              plStack_110 = plVar8;
              for (; plStack_108 = plVar8, plVar4 != plVar6; plVar4 = plVar4 + 4) {
                if (*(char *)((long)plVar4 + 0x17) < '\0') {
                  func_0x000107c3192c(plVar8,*plVar4,plVar4[1]);
                }
                else {
                  lVar5 = plVar4[1];
                  lVar13 = *plVar4;
                  plVar8[2] = plVar4[2];
                  plVar8[1] = lVar5;
                  *plVar8 = lVar13;
                }
                plVar8[3] = plVar4[3];
                plVar8 = plStack_108 + 4;
              }
              uStack_118 = 1;
              func_0x000107c2aba0(&plStack_130);
              return plVar8;
            }
            plVar4 = (long *)(param_1[2] - *param_1 >> 4);
            if (plVar4 <= param_4) {
              plVar4 = param_4;
            }
            if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
              plVar4 = (long *)0x7ffffffffffffff;
            }
            FUN_1092415f8(param_1,plVar4);
            FUN_109241630(param_1,param_2,param_3,param_1[1]);
          }
          else {
            plVar4 = (long *)param_1[1];
            if (param_4 <= (long *)((long)plVar4 - (long)plVar3 >> 5)) {
              if (param_2 != param_3) {
                do {
                  plVar10 = plVar3;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (plVar3,param_2);
                  plVar3[3] = param_2[3];
                  param_2 = param_2 + 4;
                  plVar3 = plVar3 + 4;
                } while (param_2 != param_3);
                plVar4 = (long *)param_1[1];
              }
              for (; plVar4 != plVar3; plVar4 = plVar4 + -4) {
              }
              param_1[1] = (long)plVar3;
              return plVar10;
            }
            plVar8 = (long *)((long)param_2 + ((long)plVar4 - (long)plVar3));
            if (plVar4 != plVar3) {
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (plVar3,param_2);
                plVar3[3] = param_2[3];
                param_2 = param_2 + 4;
                plVar3 = plVar3 + 4;
              } while (param_2 != plVar8);
              plVar4 = (long *)param_1[1];
            }
            FUN_109241630(param_1,plVar8,param_3,plVar4);
          }
          param_1[1] = (long)plVar10;
          return plVar10;
        }
        uVar7 = param_1[2] - lVar13;
        uVar9 = (long)uVar7 >> 1;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar7) {
          uVar9 = 0x3fffffffffffffff;
        }
        if (uVar9 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = param_1;
          FUN_10923f79c();
        }
        plVar3 = (long *)((long)plVar4 + ((long)param_2 - lVar13));
        puVar2 = (undefined4 *)((long)plVar3 + param_5 * 4);
        param_5 = param_5 << 2;
        plVar10 = plVar3;
        do {
          *(int *)plVar10 = (int)*param_3;
          param_5 = param_5 + -4;
          plVar10 = (long *)((long)plVar10 + 4);
          param_3 = (long *)((long)param_3 + 4);
        } while (param_5 != 0);
        _memcpy(puVar2,param_2,param_1[1] - (long)param_2);
        lVar13 = param_1[1];
        param_1[1] = (long)param_2;
        lVar12 = (long)plVar3 - ((long)param_2 - *param_1);
        _memcpy(lVar12);
        lVar5 = *param_1;
        *param_1 = lVar12;
        param_1[1] = (long)puVar2 + (lVar13 - (long)param_2);
        param_1[2] = (long)plVar4 + uVar9 * 4;
        if (lVar5 == 0) {
          return plVar3;
        }
        __ZdlPv();
        return plVar3;
      }
      lVar13 = (long)plVar4 - (long)param_2;
      if (lVar13 >> 2 < param_5) {
        plVar3 = plVar4;
        plVar8 = plVar4;
        for (plVar10 = (long *)(lVar13 + (long)param_3); plVar10 != param_4;
            plVar10 = (long *)((long)plVar10 + 4)) {
          *(int *)plVar8 = (int)*plVar10;
          plVar3 = (long *)((long)plVar3 + 4);
          plVar8 = (long *)((long)plVar8 + 4);
        }
        param_1[1] = (long)plVar3;
        if (lVar13 >> 2 < 1) {
          return param_2;
        }
        plVar10 = (long *)((long)param_2 + param_5 * 4);
        plVar11 = (long *)((long)plVar3 + param_5 * -4);
        for (; plVar11 < plVar4; plVar11 = (long *)((long)plVar11 + 4)) {
          *(int *)plVar3 = (int)*plVar11;
          plVar3 = (long *)((long)plVar3 + 4);
        }
        param_1[1] = (long)plVar3;
        if (plVar8 != plVar10) {
          _memmove(plVar10,param_2);
        }
        if (plVar4 == param_2) {
          return param_2;
        }
      }
      else {
        plVar3 = (long *)((long)param_2 + param_5 * 4);
        plVar10 = plVar4;
        for (plVar8 = (long *)((long)plVar4 + param_5 * -4); plVar8 < plVar4;
            plVar8 = (long *)((long)plVar8 + 4)) {
          *(int *)plVar10 = (int)*plVar8;
          plVar10 = (long *)((long)plVar10 + 4);
        }
        param_1[1] = (long)plVar10;
        if (plVar4 != plVar3) {
          _memmove(plVar3,param_2);
        }
        lVar13 = param_5 << 2;
      }
      _memmove(param_2,param_3,lVar13);
      return param_2;
    }
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar10 = param_1;
    FUN_10923bce8();
    plVar3 = (long *)((long)plVar10 + lVar13);
    lVar13 = *param_2;
    plVar3[1] = param_2[1];
    *plVar3 = lVar13;
    plVar4 = plVar3 + 2;
    lVar13 = (long)plVar3 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    plVar3 = (long *)*param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar10 + uVar9 * 2);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar4;
  return plVar3;
}



/* Entry: 109241290; end: 109241487;  */

/* WARNING: Removing unreachable block (ram,0x0001092415bc) */

long * FUN_109241290(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long unaff_x23;
  long *plStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  undefined1 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (param_5 < 1) {
    return param_2;
  }
  plVar3 = (long *)param_1[1];
  if (param_1[2] - (long)plVar3 >> 2 < param_5) {
    lVar8 = *param_1;
    uVar1 = param_5 + ((long)plVar3 - lVar8 >> 2);
    if (uVar1 >> 0x3e != 0) {
      FUN_10923f788();
      pcStack_48 = FUN_109241488;
      plVar13 = (long *)*param_1;
      plVar10 = param_1;
      plStack_80 = plVar3;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((long *)(param_1[2] - (long)plVar13 >> 5) < param_4) {
        plVar11 = param_1;
        plVar3 = param_2;
        plVar5 = param_3;
        plVar7 = param_4;
        FUN_10923fde4();
        if ((ulong)param_4 >> 0x3b != 0) {
          FUN_10923b77c();
          param_1[1] = unaff_x23;
          __Unwind_Resume();
          param_1[1] = (long)plVar13;
          __Unwind_Resume();
          pcStack_88 = FUN_1092415f8;
          pppuStack_b0 = &ppuStack_90;
          plStack_a0 = param_3;
          plStack_98 = param_1;
          ppuStack_90 = &puStack_50;
          if ((ulong)plVar3 >> 0x3b == 0) {
            plVar13 = plVar11;
            func_0x000107c2ab98();
            *plVar11 = (long)plVar13;
            plVar11[1] = (long)plVar13;
            plVar11[2] = (long)(plVar13 + (long)plVar3 * 4);
            return plVar13;
          }
          FUN_10923b77c();
          pcStack_a8 = FUN_109241630;
          pplStack_f8 = &plStack_e0;
          pplStack_f0 = &plStack_d8;
          uStack_e8 = 0;
          plStack_c8 = plVar13;
          plStack_b8 = param_1;
          plStack_100 = plVar11;
          plStack_d0 = param_2;
          plStack_c0 = param_3;
          plStack_e0 = plVar7;
          for (; plStack_d8 = plVar7, plVar3 != plVar5; plVar3 = plVar3 + 4) {
            if (*(char *)((long)plVar3 + 0x17) < '\0') {
              func_0x000107c3192c(plVar7,*plVar3,plVar3[1]);
            }
            else {
              lVar4 = plVar3[1];
              lVar8 = *plVar3;
              plVar7[2] = plVar3[2];
              plVar7[1] = lVar4;
              *plVar7 = lVar8;
            }
            plVar7[3] = plVar3[3];
            plVar7 = plStack_d8 + 4;
          }
          uStack_e8 = 1;
          func_0x000107c2aba0(&plStack_100);
          return plVar7;
        }
        plVar3 = (long *)(param_1[2] - *param_1 >> 4);
        if (plVar3 <= param_4) {
          plVar3 = param_4;
        }
        if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
          plVar3 = (long *)0x7ffffffffffffff;
        }
        FUN_1092415f8(param_1,plVar3);
        FUN_109241630(param_1,param_2,param_3,param_1[1]);
      }
      else {
        plVar3 = (long *)param_1[1];
        if (param_4 <= (long *)((long)plVar3 - (long)plVar13 >> 5)) {
          if (param_2 != param_3) {
            do {
              plVar10 = plVar13;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar13,param_2);
              plVar13[3] = param_2[3];
              param_2 = param_2 + 4;
              plVar13 = plVar13 + 4;
            } while (param_2 != param_3);
            plVar3 = (long *)param_1[1];
          }
          for (; plVar3 != plVar13; plVar3 = plVar3 + -4) {
          }
          param_1[1] = (long)plVar13;
          return plVar10;
        }
        plVar7 = (long *)((long)param_2 + ((long)plVar3 - (long)plVar13));
        if (plVar3 != plVar13) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (plVar13,param_2);
            plVar13[3] = param_2[3];
            param_2 = param_2 + 4;
            plVar13 = plVar13 + 4;
          } while (param_2 != plVar7);
          plVar3 = (long *)param_1[1];
        }
        FUN_109241630(param_1,plVar7,param_3,plVar3);
      }
      param_1[1] = (long)plVar10;
      return plVar10;
    }
    uVar6 = param_1[2] - lVar8;
    uVar9 = (long)uVar6 >> 1;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar9 = 0x3fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10923f79c();
    }
    plVar13 = (long *)((long)plVar3 + ((long)param_2 - lVar8));
    puVar2 = (undefined4 *)((long)plVar13 + param_5 * 4);
    param_5 = param_5 << 2;
    plVar10 = plVar13;
    do {
      *(int *)plVar10 = (int)*param_3;
      param_5 = param_5 + -4;
      plVar10 = (long *)((long)plVar10 + 4);
      param_3 = (long *)((long)param_3 + 4);
    } while (param_5 != 0);
    _memcpy(puVar2,param_2,param_1[1] - (long)param_2);
    lVar8 = param_1[1];
    param_1[1] = (long)param_2;
    lVar12 = (long)plVar13 - ((long)param_2 - *param_1);
    _memcpy(lVar12);
    lVar4 = *param_1;
    *param_1 = lVar12;
    param_1[1] = (long)puVar2 + (lVar8 - (long)param_2);
    param_1[2] = (long)plVar3 + uVar9 * 4;
    if (lVar4 == 0) {
      return plVar13;
    }
    __ZdlPv();
    return plVar13;
  }
  lVar8 = (long)plVar3 - (long)param_2;
  if (lVar8 >> 2 < param_5) {
    plVar13 = plVar3;
    plVar7 = plVar3;
    for (plVar10 = (long *)(lVar8 + (long)param_3); plVar10 != param_4;
        plVar10 = (long *)((long)plVar10 + 4)) {
      *(int *)plVar7 = (int)*plVar10;
      plVar13 = (long *)((long)plVar13 + 4);
      plVar7 = (long *)((long)plVar7 + 4);
    }
    param_1[1] = (long)plVar13;
    if (lVar8 >> 2 < 1) {
      return param_2;
    }
    plVar10 = (long *)((long)param_2 + param_5 * 4);
    plVar11 = (long *)((long)plVar13 + param_5 * -4);
    for (; plVar11 < plVar3; plVar11 = (long *)((long)plVar11 + 4)) {
      *(int *)plVar13 = (int)*plVar11;
      plVar13 = (long *)((long)plVar13 + 4);
    }
    param_1[1] = (long)plVar13;
    if (plVar7 != plVar10) {
      _memmove(plVar10,param_2);
    }
    if (plVar3 == param_2) {
      return param_2;
    }
  }
  else {
    plVar13 = (long *)((long)param_2 + param_5 * 4);
    plVar10 = plVar3;
    for (plVar7 = (long *)((long)plVar3 + param_5 * -4); plVar7 < plVar3;
        plVar7 = (long *)((long)plVar7 + 4)) {
      *(int *)plVar10 = (int)*plVar7;
      plVar10 = (long *)((long)plVar10 + 4);
    }
    param_1[1] = (long)plVar10;
    if (plVar3 != plVar13) {
      _memmove(plVar13,param_2);
    }
    lVar8 = param_5 << 2;
  }
  _memmove(param_2,param_3,lVar8);
  return param_2;
}



/* Entry: 109241488; end: 1092415f7;  */

/* WARNING: Removing unreachable block (ram,0x0001092415bc) */

long * FUN_109241488(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  undefined1 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((long *)(param_1[2] - (long)plVar5 >> 5) < param_4) {
    plVar1 = param_1;
    plVar6 = param_2;
    plVar3 = param_3;
    plVar4 = param_4;
    FUN_10923fde4();
    if ((ulong)param_4 >> 0x3b != 0) {
      FUN_10923b77c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar5;
      __Unwind_Resume();
      pcStack_48 = FUN_1092415f8;
      ppuStack_70 = &puStack_50;
      plStack_60 = param_3;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)plVar6 >> 0x3b == 0) {
        plVar5 = plVar1;
        func_0x000107c2ab98();
        *plVar1 = (long)plVar5;
        plVar1[1] = (long)plVar5;
        plVar1[2] = (long)(plVar5 + (long)plVar6 * 4);
        return plVar5;
      }
      FUN_10923b77c();
      pcStack_68 = FUN_109241630;
      pplStack_b8 = &plStack_a0;
      pplStack_b0 = &plStack_98;
      uStack_a8 = 0;
      plStack_88 = plVar5;
      plStack_c0 = plVar1;
      plStack_a0 = plVar4;
      plStack_80 = param_3;
      plStack_90 = param_2;
      plStack_78 = param_1;
      for (; plStack_98 = plVar4, plVar6 != plVar3; plVar6 = plVar6 + 4) {
        if (*(char *)((long)plVar6 + 0x17) < '\0') {
          func_0x000107c3192c(plVar4,*plVar6,plVar6[1]);
        }
        else {
          lVar8 = plVar6[1];
          lVar7 = *plVar6;
          plVar4[2] = plVar6[2];
          plVar4[1] = lVar8;
          *plVar4 = lVar7;
        }
        plVar4[3] = plVar6[3];
        plVar4 = plStack_98 + 4;
      }
      uStack_a8 = 1;
      func_0x000107c2aba0(&plStack_c0);
      return plVar4;
    }
    plVar5 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar5 <= param_4) {
      plVar5 = param_4;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar5 = (long *)0x7ffffffffffffff;
    }
    FUN_1092415f8(param_1,plVar5);
    FUN_109241630(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    if (param_4 <= (long *)((long)plVar6 - (long)plVar5 >> 5)) {
      if (param_2 != param_3) {
        do {
          plVar2 = plVar5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
          plVar5[3] = param_2[3];
          param_2 = param_2 + 4;
          plVar5 = plVar5 + 4;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      for (; plVar6 != plVar5; plVar6 = plVar6 + -4) {
      }
      param_1[1] = (long)plVar5;
      return plVar2;
    }
    plVar4 = (long *)((long)param_2 + ((long)plVar6 - (long)plVar5));
    if (plVar6 != plVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_2);
        plVar5[3] = param_2[3];
        param_2 = param_2 + 4;
        plVar5 = plVar5 + 4;
      } while (param_2 != plVar4);
      plVar6 = (long *)param_1[1];
    }
    FUN_109241630(param_1,plVar4,param_3,plVar6);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 1092415f8; end: 10924162f;  */

long * FUN_1092415f8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    func_0x000107c2ab98();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    return plVar1;
  }
  FUN_10923b77c();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    param_4[3] = param_2[3];
    param_4 = plStack_58 + 4;
  }
  uStack_68 = 1;
  func_0x000107c2aba0(&plStack_80);
  return param_4;
}



/* Entry: 109241630; end: 1092416f7;  */

undefined8 *
FUN_109241630(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4[3] = param_2[3];
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  func_0x000107c2aba0(&uStack_60);
  return param_4;
}



/* Entry: 1092416f8; end: 10924185b;  */

long * FUN_1092416f8(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x23;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((long *)(param_1[2] - (long)plVar5 >> 7) < param_4) {
    plVar1 = param_1;
    uVar3 = param_2;
    uVar4 = param_3;
    plVar6 = param_4;
    func_0x00010923fd80();
    if ((ulong)param_4 >> 0x39 != 0) {
      FUN_10923fa98();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = (long)plVar5;
      __Unwind_Resume();
      if (uVar3 >> 0x39 != 0) {
        FUN_10923fa98();
        for (; uVar3 != uVar4; uVar3 = uVar3 + 0x80) {
          func_0x000107c2ac14(plVar6,uVar3);
          plVar6 = plVar6 + 0x10;
        }
        return plVar6;
      }
      plVar5 = plVar1;
      func_0x000107c2ac00();
      *plVar1 = (long)plVar5;
      plVar1[1] = (long)plVar5;
      plVar1[2] = (long)(plVar5 + uVar3 * 0x10);
      return plVar5;
    }
    plVar5 = (long *)(param_1[2] - *param_1 >> 6);
    if (plVar5 <= param_4) {
      plVar5 = param_4;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      plVar5 = (long *)0x1ffffffffffffff;
    }
    FUN_10924185c(param_1,plVar5);
    FUN_109241894(param_1,param_2,param_3,param_1[1]);
  }
  else {
    plVar6 = (long *)param_1[1];
    lVar8 = (long)plVar6 - (long)plVar5;
    if (param_4 <= (long *)(lVar8 >> 7)) {
      if (param_2 != param_3) {
        do {
          plVar2 = plVar5;
          FUN_109241918(plVar5,param_2);
          param_2 = param_2 + 0x80;
          plVar5 = plVar5 + 0x10;
        } while (param_2 != param_3);
        plVar6 = (long *)param_1[1];
      }
      while (plVar6 != plVar5) {
        plVar6 = plVar6 + -0x10;
        plVar2 = plVar6;
        FUN_10922dc7c(plVar6);
      }
      param_1[1] = (long)plVar5;
      return plVar2;
    }
    uVar3 = param_2;
    lVar7 = lVar8;
    if (plVar6 != plVar5) {
      do {
        FUN_109241918(plVar5,uVar3);
        plVar5 = plVar5 + 0x10;
        lVar7 = lVar7 + -0x80;
        uVar3 = uVar3 + 0x80;
      } while (lVar7 != 0);
      plVar6 = (long *)param_1[1];
    }
    FUN_109241894(param_1,param_2 + lVar8,param_3,plVar6);
  }
  param_1[1] = (long)plVar2;
  return plVar2;
}



/* Entry: 10924185c; end: 109241893;  */

long * FUN_10924185c(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x39 == 0) {
    plVar1 = param_1;
    func_0x000107c2ac00();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x10);
    return plVar1;
  }
  FUN_10923fa98();
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x000107c2ac14(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 109241894; end: 109241917;  */

long FUN_109241894(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x000107c2ac14(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  return param_4;
}



/* Entry: 109241918; end: 1092419cf;  */

undefined4 * FUN_109241918(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_1092419d0(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                  *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 6);
    FUN_109241dd8(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 10),
                  *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 6);
    FUN_109242000(param_1 + 0xe,*(long *)(param_2 + 0xe),*(long *)(param_2 + 0x10),
                  (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe) >> 3) * -0x3333333333333333)
    ;
    FUN_1092421e8(param_1 + 0x14,*(long *)(param_2 + 0x14),*(long *)(param_2 + 0x16),
                  (*(long *)(param_2 + 0x16) - *(long *)(param_2 + 0x14) >> 3) * -0x3333333333333333
                 );
    FUN_1092423c0(param_1 + 0x1a,*(long *)(param_2 + 0x1a),*(long *)(param_2 + 0x1c),
                  (*(long *)(param_2 + 0x1c) - *(long *)(param_2 + 0x1a) >> 3) * -0x3333333333333333
                 );
  }
  return param_1;
}



/* Entry: 1092419d0; end: 109241b07;  */

void FUN_1092419d0(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)(param_1[2] - *param_1 >> 6) < param_4) {
    plVar1 = param_1;
    FUN_109241b08();
    if (param_4 >> 0x3a != 0) {
      FUN_10923e0a0();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        lVar5 = plVar1[1];
        lVar3 = lVar6;
        if (lVar5 != lVar6) {
          do {
            lVar5 = lVar5 + -0x40;
            FUN_10922e044(lVar5);
          } while (lVar5 != lVar6);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar6;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1 >> 5;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0x3ffffffffffffff;
    }
    func_0x000107c2ac18(param_1,uVar4);
    func_0x000107c2ac1c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar6 >> 6)) {
      func_0x000109241b6c(&uStack_41,param_2,param_3);
      lVar6 = param_1[1];
      while (lVar6 != param_2) {
        lVar6 = lVar6 + -0x40;
        FUN_10922e044(lVar6);
      }
      param_1[1] = param_2;
      return;
    }
    func_0x000109241b6c(&uStack_42,param_2,param_2 + lVar6);
    func_0x000107c2ac1c(param_1,param_2 + lVar6,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 109241b08; end: 109241bff;  */

void FUN_109241b08(long *param_1)

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
        lVar2 = lVar2 + -0x40;
        FUN_10922e044(lVar2);
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



/* Entry: 109241c00; end: 109241d9f;  */

/* WARNING: Removing unreachable block (ram,0x000109241d64) */

void FUN_109241c00(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - lVar5 >> 3) * -0x3333333333333333) < param_4) {
    plVar2 = param_1;
    FUN_109241da0();
    if (0x666666666666666 < param_4) {
      FUN_10923c920();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10922df88();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar5 * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    FUN_10923df90(param_1,uVar4);
    FUN_10923dfd8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          uVar7 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar5 + 0x18) = uVar7;
          param_2 = param_2 + 0x28;
          lVar5 = lVar5 + 0x28;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x28) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        param_2 = param_2 + 0x28;
        lVar5 = lVar5 + 0x28;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10923dfd8(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 109241da0; end: 109241dd7;  */

void FUN_109241da0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10922df88();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109241dd8; end: 109241f0f;  */

void FUN_109241dd8(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)(param_1[2] - *param_1 >> 6) < param_4) {
    plVar1 = param_1;
    FUN_109241f10();
    if (param_4 >> 0x3a != 0) {
      FUN_10923f068();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar6 = *plVar1;
      if (lVar6 != 0) {
        lVar5 = plVar1[1];
        lVar3 = lVar6;
        if (lVar5 != lVar6) {
          do {
            lVar5 = lVar5 + -0x40;
            FUN_10922df04(lVar5);
          } while (lVar5 != lVar6);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar6;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1 >> 5;
    if (uVar4 <= param_4) {
      uVar4 = param_4;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      uVar4 = 0x3ffffffffffffff;
    }
    FUN_10923fb58(param_1,uVar4);
    FUN_10923fb90(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar6 >> 6)) {
      func_0x000109241f74(&uStack_41,param_2,param_3);
      lVar6 = param_1[1];
      while (lVar6 != param_2) {
        lVar6 = lVar6 + -0x40;
        FUN_10922df04(lVar6);
      }
      param_1[1] = param_2;
      return;
    }
    func_0x000109241f74(&uStack_42,param_2,param_2 + lVar6);
    FUN_10923fb90(param_1,param_2 + lVar6,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 109241f10; end: 109241fff;  */

void FUN_109241f10(long *param_1)

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
        lVar2 = lVar2 + -0x40;
        FUN_10922df04(lVar2);
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



/* Entry: 109242000; end: 1092421af;  */

/* WARNING: Removing unreachable block (ram,0x000109242174) */

void FUN_109242000(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  
  lVar6 = *param_1;
  plVar4 = param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x3333333333333333) < param_4) {
    plVar3 = param_1;
    FUN_1092421b0();
    if (0x666666666666666 < param_4) {
      FUN_10923bc7c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10922de48();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar6 * -0x6666666666666666;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    func_0x000107c2ac28(param_1,uVar5);
    func_0x000107c2ac2c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          uVar2 = *(undefined4 *)(param_2 + 0x20);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(undefined4 *)(lVar6 + 0x20) = uVar2;
          param_2 = param_2 + 0x28;
          lVar6 = lVar6 + 0x28;
        } while (param_2 != param_3);
        lVar7 = param_1[1];
      }
      for (; lVar7 != lVar6; lVar7 = lVar7 + -0x28) {
      }
      param_1[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
        uVar2 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        param_2 = param_2 + 0x28;
        lVar6 = lVar6 + 0x28;
      } while (param_2 != lVar1);
      lVar7 = param_1[1];
    }
    func_0x000107c2ac2c(param_1,lVar1,param_3,lVar7);
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 1092421b0; end: 1092421e7;  */

void FUN_1092421b0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10922de48();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1092421e8; end: 109242387;  */

/* WARNING: Removing unreachable block (ram,0x00010924234c) */

void FUN_1092421e8(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - lVar5 >> 3) * -0x3333333333333333) < param_4) {
    plVar2 = param_1;
    FUN_109242388();
    if (0x666666666666666 < param_4) {
      FUN_10923f18c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10922ddbc();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar5 * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    FUN_10923fc14(param_1,uVar4);
    FUN_10923fc5c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          uVar7 = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar5 + 0x18) = uVar7;
          param_2 = param_2 + 0x28;
          lVar5 = lVar5 + 0x28;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x28) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        param_2 = param_2 + 0x28;
        lVar5 = lVar5 + 0x28;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10923fc5c(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 109242388; end: 1092423bf;  */

void FUN_109242388(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10922ddbc();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1092423c0; end: 10924256f;  */

/* WARNING: Removing unreachable block (ram,0x000109242534) */

void FUN_1092423c0(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  
  lVar6 = *param_1;
  plVar4 = param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x3333333333333333) < param_4) {
    plVar3 = param_1;
    FUN_109242570();
    if (0x666666666666666 < param_4) {
      FUN_10923bd1c();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10922dd30();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar6 * -0x6666666666666666;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    func_0x000107c2ac38(param_1,uVar5);
    func_0x000107c2ac3c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          uVar2 = *(undefined4 *)(param_2 + 0x20);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(undefined4 *)(lVar6 + 0x20) = uVar2;
          param_2 = param_2 + 0x28;
          lVar6 = lVar6 + 0x28;
        } while (param_2 != param_3);
        lVar7 = param_1[1];
      }
      for (; lVar7 != lVar6; lVar7 = lVar7 + -0x28) {
      }
      param_1[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
        uVar2 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        param_2 = param_2 + 0x28;
        lVar6 = lVar6 + 0x28;
      } while (param_2 != lVar1);
      lVar7 = param_1[1];
    }
    func_0x000107c2ac3c(param_1,lVar1,param_3,lVar7);
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 109242570; end: 1092425a7;  */

void FUN_109242570(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10922dd30();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1092425a8; end: 109242757;  */

/* WARNING: Removing unreachable block (ram,0x00010924271c) */

void FUN_1092425a8(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  
  lVar6 = *param_1;
  plVar4 = param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x3333333333333333) < param_4) {
    plVar3 = param_1;
    FUN_109242758();
    if (0x666666666666666 < param_4) {
      FUN_1092372d8();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x666666666666666;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10922e118();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar6 * -0x6666666666666666;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    func_0x000109242790(param_1,uVar5);
    FUN_1092427d8(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar7 = param_1[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * -0x3333333333333333)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          uVar2 = *(undefined4 *)(param_2 + 0x20);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(undefined4 *)(lVar6 + 0x20) = uVar2;
          param_2 = param_2 + 0x28;
          lVar6 = lVar6 + 0x28;
        } while (param_2 != param_3);
        lVar7 = param_1[1];
      }
      for (; lVar7 != lVar6; lVar7 = lVar7 + -0x28) {
      }
      param_1[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
        uVar2 = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        param_2 = param_2 + 0x28;
        lVar6 = lVar6 + 0x28;
      } while (param_2 != lVar1);
      lVar7 = param_1[1];
    }
    FUN_1092427d8(param_1,lVar1,param_3,lVar7);
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 109242758; end: 1092427d7;  */

void FUN_109242758(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10922e118();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1092427d8; end: 1092428a7;  */

undefined8 *
FUN_1092427d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_1092373f0(&uStack_60);
  return param_4;
}



/* Entry: 1092428a8; end: 1092429cf;  */

/* WARNING: Possible PIC construction at 0x000109242ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109242ac8) */

void FUN_1092428a8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 ***pppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_128 [56];
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar7 = param_1[2];
  plVar12 = (long *)*param_1;
  if ((undefined8 *)((long)(uVar7 - (long)plVar12) >> 4) < param_4) {
    plVar13 = param_1;
    puVar4 = param_2;
    puVar5 = param_3;
    puVar6 = param_4;
    if (plVar12 != (long *)0x0) {
      param_1[1] = (long)plVar12;
      __ZdlPv();
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar13 = plVar12;
    }
    if ((ulong)param_4 >> 0x3c != 0) {
      FUN_10923bcd4();
      pcStack_48 = FUN_1092429d0;
      puStack_60 = param_2;
      plStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)puVar4 >> 0x3c == 0) {
        plVar12 = plVar13;
        FUN_10923bce8();
        *plVar13 = (long)plVar12;
        plVar13[1] = (long)plVar12;
        plVar13[2] = (long)(plVar12 + (long)puVar4 * 2);
        return;
      }
      FUN_10923bcd4();
      ppuVar2 = (undefined8 **)auStack_c0;
      pcStack_68 = FUN_109242a08;
      pppuVar14 = &ppuStack_70;
      lVar11 = plVar13[1] - *plVar13;
      uVar7 = (lVar11 >> 5) + 1;
      puStack_90 = param_4;
      puStack_88 = param_3;
      puStack_80 = param_2;
      plStack_78 = param_1;
      ppuStack_70 = &puStack_50;
      if (uVar7 >> 0x3b == 0) {
        uVar8 = plVar13[2] - *plVar13;
        uVar10 = (long)uVar8 >> 4;
        if (uVar10 <= uVar7) {
          uVar10 = uVar7;
        }
        if (0x7fffffffffffffdf < uVar8) {
          uVar10 = 0x7ffffffffffffff;
        }
        plStack_98 = plVar13;
        if (uVar10 == 0) {
          plVar3 = (long *)0x0;
        }
        else {
          plVar3 = plVar13;
          FUN_109242b2c();
        }
        puStack_b0 = (undefined8 *)((long)plVar3 + lVar11);
        plStack_a0 = plVar3 + uVar10 * 4;
        uVar16 = puVar4[1];
        uVar15 = *puVar4;
        puStack_b0[2] = puVar4[2];
        puStack_b0[1] = uVar16;
        *puStack_b0 = uVar15;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puStack_b0 + 3) = *(undefined4 *)(puVar4 + 3);
        param_2 = puStack_b0 + 4;
        puVar4 = (undefined8 *)*plVar13;
        puVar5 = (undefined8 *)plVar13[1];
        puVar6 = (undefined8 *)((long)puStack_b0 + ((long)puVar4 - (long)puVar5));
        uVar15 = 0x109242ac8;
        plVar12 = plVar13;
        plStack_b8 = plVar3;
        puStack_a8 = param_2;
      }
      else {
        FUN_109242b18();
        func_0x000109242c90(&plStack_b8);
        __Unwind_Resume(plVar13);
        pcStack_c8 = FUN_109242b18;
        plVar12 = (long *)&UNK_10f55e364;
        ppuStack_d0 = pppuVar14;
        func_0x000104c4f6cc();
        ppuVar2 = &puStack_f0;
        pcStack_d8 = FUN_109242b2c;
        pppuVar14 = (undefined1 ***)&puStack_e0;
        puStack_f0 = param_2;
        plStack_e8 = plVar13;
        if ((ulong)puVar4 >> 0x3b == 0) {
          puStack_e0 = &ppuStack_d0;
          __Znwm((long)puVar4 << 5);
          return;
        }
        uVar15 = 0x109242b60;
        puStack_e0 = &ppuStack_d0;
        func_0x000104c4f740();
      }
      *(undefined8 **)((long)ppuVar2 + -0x20) = param_2;
      *(long **)((long)ppuVar2 + -0x18) = plVar13;
      *(undefined1 ****)((long)ppuVar2 + -0x10) = pppuVar14;
      *(undefined8 *)((long)ppuVar2 + -8) = uVar15;
      *(undefined8 **)((long)ppuVar2 + -0x28) = puVar6;
      *(undefined8 **)((long)ppuVar2 + -0x30) = puVar6;
      *(long **)((long)ppuVar2 + -0x50) = plVar12;
      *(undefined1 **)((long)ppuVar2 + -0x48) = (undefined1 *)((long)ppuVar2 + -0x30);
      *(undefined1 **)((long)ppuVar2 + -0x40) = (undefined1 *)((long)ppuVar2 + -0x28);
      puVar9 = puVar4;
      if (puVar4 == puVar5) {
        *(undefined1 *)((long)ppuVar2 + -0x38) = 1;
      }
      else {
        do {
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar6[2] = puVar9[2];
          puVar6[1] = uVar16;
          *puVar6 = uVar15;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar9 + 3);
          puVar9 = puVar9 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar9 != puVar5);
        *(undefined8 **)((long)ppuVar2 + -0x28) = puVar6;
        *(undefined1 *)((long)ppuVar2 + -0x38) = 1;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar5);
      }
      FUN_109242c18((undefined1 *)((long)ppuVar2 + -0x50));
      return;
    }
    puVar6 = (undefined8 *)((long)uVar7 >> 3);
    if ((undefined8 *)((long)uVar7 >> 3) <= param_4) {
      puVar6 = param_4;
    }
    if (0x7fffffffffffffef < uVar7) {
      puVar6 = (undefined8 *)0xfffffffffffffff;
    }
    FUN_1092429d0(param_1,puVar6);
    lVar11 = param_1[1];
    lVar1 = (long)param_3 - (long)param_2;
    if (lVar1 != 0) {
      _memmove(lVar11,param_2,lVar1);
    }
    lVar11 = lVar11 + lVar1;
  }
  else {
    plVar13 = (long *)param_1[1];
    if ((undefined8 *)((long)plVar13 - (long)plVar12 >> 4) < param_4) {
      lVar1 = (long)param_2 + ((long)plVar13 - (long)plVar12);
      if (plVar13 != plVar12) {
        _memmove(plVar12,param_2);
        plVar13 = (long *)param_1[1];
      }
      lVar11 = (long)param_3 - lVar1;
      if (lVar11 != 0) {
        _memmove(plVar13,lVar1,lVar11);
      }
      lVar11 = (long)plVar13 + lVar11;
    }
    else {
      lVar11 = (long)param_3 - (long)param_2;
      if (lVar11 != 0) {
        _memmove(plVar12,param_2,lVar11);
      }
      lVar11 = (long)plVar12 + lVar11;
    }
  }
  param_1[1] = lVar11;
  return;
}



/* Entry: 1092429d0; end: 109242a07;  */

/* WARNING: Possible PIC construction at 0x000109242ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109242ac8) */

void FUN_1092429d0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [56];
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar4 = param_1;
    FUN_10923bce8();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + (long)param_2 * 2);
    return;
  }
  FUN_10923bcd4();
  puVar2 = auStack_80;
  pcStack_28 = FUN_109242a08;
  ppuVar9 = &puStack_30;
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 5) + 1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109242b2c();
    }
    puStack_70 = (undefined8 *)((long)plVar3 + lVar8);
    plStack_60 = plVar3 + uVar7 * 4;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_70[2] = param_2[2];
    puStack_70[1] = uVar11;
    *puStack_70 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(puStack_70 + 3) = *(undefined4 *)(param_2 + 3);
    unaff_x20 = puStack_70 + 4;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_70 + ((long)param_2 - (long)param_3));
    uVar10 = 0x109242ac8;
    plVar4 = param_1;
    plStack_78 = plVar3;
    puStack_68 = unaff_x20;
  }
  else {
    FUN_109242b18();
    func_0x000109242c90(&plStack_78);
    __Unwind_Resume(param_1);
    pcStack_88 = FUN_109242b18;
    plVar4 = (long *)&UNK_10f55e364;
    ppuStack_90 = ppuVar9;
    func_0x000104c4f6cc();
    puVar2 = &stack0xffffffffffffff50;
    pcStack_98 = FUN_109242b2c;
    ppuVar9 = &puStack_a0;
    if ((ulong)param_2 >> 0x3b == 0) {
      puStack_a0 = (undefined1 *)&ppuStack_90;
      __Znwm((long)param_2 << 5);
      return;
    }
    uVar10 = 0x109242b60;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar2 + -8) = uVar10;
  *(undefined8 **)(puVar2 + -0x28) = param_4;
  *(undefined8 **)(puVar2 + -0x30) = param_4;
  *(long **)(puVar2 + -0x50) = plVar4;
  *(undefined1 **)(puVar2 + -0x48) = puVar2 + -0x30;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x28;
  puVar6 = param_2;
  if (param_2 == param_3) {
    puVar2[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar6[1];
      uVar10 = *puVar6;
      param_4[2] = puVar6[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(puVar6 + 3);
      puVar6 = puVar6 + 4;
      param_4 = param_4 + 4;
    } while (puVar6 != param_3);
    *(undefined8 **)(puVar2 + -0x28) = param_4;
    puVar2[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  FUN_109242c18(puVar2 + -0x50);
  return;
}



/* Entry: 109242a08; end: 109242b17;  */

/* WARNING: Possible PIC construction at 0x000109242ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109242ac8) */

void FUN_109242a08(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  
  puVar2 = auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_109242b2c();
    }
    puStack_50 = (undefined8 *)((long)plVar3 + lVar8);
    plStack_40 = plVar3 + uVar7 * 4;
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar11;
    *puStack_50 = uVar10;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined4 *)(puStack_50 + 3) = *(undefined4 *)(param_2 + 3);
    unaff_x20 = puStack_50 + 4;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar10 = 0x109242ac8;
    plVar4 = param_1;
    plStack_58 = plVar3;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_109242b18();
    func_0x000109242c90(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109242b18;
    plVar4 = (long *)&UNK_10f55e364;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc();
    puVar2 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_109242b2c;
    ppuVar9 = &puStack_80;
    if ((ulong)param_2 >> 0x3b == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 << 5);
      return;
    }
    uVar10 = 0x109242b60;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar9;
  *(undefined8 *)(puVar2 + -8) = uVar10;
  *(undefined8 **)(puVar2 + -0x28) = param_4;
  *(undefined8 **)(puVar2 + -0x30) = param_4;
  *(long **)(puVar2 + -0x50) = plVar4;
  *(undefined1 **)(puVar2 + -0x48) = puVar2 + -0x30;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x28;
  puVar6 = param_2;
  if (param_2 == param_3) {
    puVar2[-0x38] = 1;
  }
  else {
    do {
      uVar11 = puVar6[1];
      uVar10 = *puVar6;
      param_4[2] = puVar6[2];
      param_4[1] = uVar11;
      *param_4 = uVar10;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(puVar6 + 3);
      puVar6 = puVar6 + 4;
      param_4 = param_4 + 4;
    } while (puVar6 != param_3);
    *(undefined8 **)(puVar2 + -0x28) = param_4;
    puVar2[-0x38] = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  FUN_109242c18(puVar2 + -0x50);
  return;
}



/* Entry: 109242b18; end: 109242b2b;  */

void FUN_109242b18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f55e364;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
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
        *(undefined4 *)(puStack_58 + 3) = *(undefined4 *)(puVar2 + 3);
        puVar2 = puVar2 + 4;
        puStack_58 = puStack_58 + 4;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109242c18(&puStack_80);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109242b2c; end: 109242c17;  */

void FUN_109242b2c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104c4f740();
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
        *(undefined4 *)(puStack_48 + 3) = *(undefined4 *)(puVar1 + 3);
        puVar1 = puVar1 + 4;
        puStack_48 = puStack_48 + 4;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          __ZdlPv(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_109242c18(&uStack_70);
    return;
  }
  __Znwm((long)param_2 << 5);
  return;
}



/* Entry: 109242c18; end: 109242c4b;  */

long FUN_109242c18(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109242c4c(param_1);
  }
  return param_1;
}



/* Entry: 109242c4c; end: 109242d17;  */

/* WARNING: Removing unreachable block (ram,0x000109242c78) */

void FUN_109242c4c(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x20
      ) {
  }
  return;
}



/* Entry: 109242d18; end: 109242e9f;  */

long * FUN_109242d18(long *param_1,undefined8 *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char cStack_41;
  
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_41,param_1,1);
  if (cStack_41 == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
    }
    lVar4 = 0;
    do {
      plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar3[3];
      if (pbVar1 == (byte *)plVar3[4]) {
        (**(code **)(*plVar3 + 0x50))();
        uVar2 = (uint)plVar3;
        if (uVar2 == 0xffffffff) {
          uVar2 = 6;
          if (lVar4 != 0) {
            uVar2 = 2;
          }
          goto LAB_109242e14;
        }
      }
      else {
        plVar3[3] = (long)(pbVar1 + 1);
        uVar2 = (uint)*pbVar1;
      }
      if ((param_3 & 0xff) == (uVar2 & 0xff)) {
        uVar2 = 0;
        goto LAB_109242e14;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2,(int)(char)uVar2);
      lVar4 = lVar4 + -1;
    } while ((-1 < *(char *)((long)param_2 + 0x17)) || (param_2[1] != 0x7ffffffffffffff7));
    uVar2 = 4;
LAB_109242e14:
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar4,*(uint *)(lVar4 + 0x20) | uVar2);
  }
  return param_1;
}



/* Entry: 109242ea0; end: 109242f53;  */

long * FUN_109242ea0(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  lVar2 = param_2[1];
  lVar1 = *param_2;
  param_1[10] = param_2[2];
  param_1[9] = lVar2;
  param_1[8] = lVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_109242f54(param_1);
  return param_1;
}



/* Entry: 109242f54; end: 109243057;  */

void FUN_109242f54(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (param_1 + 0x40,lVar1,0);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar2 >> 0x1f != 0) {
        lVar1 = ((uVar2 - 0x80000000) / 0x7fffffff) * 0x80000000 - (uVar2 - 0x80000000) / 0x7fffffff
        ;
        lVar3 = lVar3 + 0x7fffffff + lVar1;
        uVar2 = (uVar2 - lVar1) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 109243058; end: 109243107;  */

long * FUN_109243058(long *param_1)

{
  long lVar1;
  
  func_0x000109243090(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109243108; end: 1092433d3;  */

undefined1  [16]
FUN_109243108(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_1;
  func_0x000107c31944();
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
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109243394;
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
  plVar3 = (long *)*param_4;
  plVar7 = (long *)0x1c0;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)plVar3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*plVar3,plVar3[1]);
  }
  else {
    lVar10 = plVar3[1];
    lVar4 = *plVar3;
    plVar7[4] = plVar3[2];
    plVar7[3] = lVar10;
    plVar7[2] = lVar4;
  }
  lVar4 = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x28] = 0;
  plVar7[0x27] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x29] = 0;
  plVar7[0x24] = 0;
  plVar7[0x23] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[0x20] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x18] = 0;
  plVar7[0x17] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  plVar7[0x14] = 0;
  plVar7[0x13] = 0;
  plVar7[0x16] = 0;
  plVar7[0x15] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0x12] = 0;
  plVar7[0x11] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[10] = 0;
  plVar7[9] = 0;
  do {
    *(undefined8 *)((long)plVar7 + lVar4 + 0x70) = 0;
    *(undefined8 *)((long)plVar7 + lVar4 + 0x68) = 0;
    *(undefined8 *)((long)plVar7 + lVar4 + 0x60) = 0;
    *(undefined8 *)((long)plVar7 + lVar4 + 0x78) = 0xffffffff;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x100);
  plVar7[0x35] = 0;
  plVar7[0x34] = 0;
  plVar7[0x37] = 0;
  plVar7[0x36] = 0;
  plVar7[0x31] = 0;
  plVar7[0x30] = 0;
  plVar7[0x33] = 0;
  plVar7[0x32] = 0;
  plVar7[0x2d] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2f] = 0;
  plVar7[0x2e] = 0;
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
    FUN_1092433d4(param_1,uVar9);
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
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_109243394:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1092433d4; end: 1092434a3;  */

void FUN_1092433d4(long *param_1,ulong param_2)

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
LAB_10924341c:
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
        lVar2 = *param_1;
        *param_1 = 0;
        if (lVar2 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x0001092430cc(lVar2 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar2);
          return;
        }
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
    if (param_2 < uVar9) goto LAB_10924341c;
  }
  return;
}



/* Entry: 1092434a4; end: 109243627;  */

void FUN_1092434a4(long *param_1,ulong param_2)

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
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x0001092430cc(lVar2 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar2);
        return;
      }
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



/* Entry: 109243628; end: 109243bf7;  */

void FUN_109243628(undefined4 *param_1,long param_2,int *param_3,long param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  int *piVar24;
  undefined8 ***pppuVar25;
  int *piVar26;
  uint *puVar27;
  long *plVar28;
  long *plVar29;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_71;
  
  if ((char)param_3[0xb6] == '\x01') {
    uStack_98 = 0;
    pppuStack_a0 = (undefined8 ****)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    lVar15 = *(long *)(param_3 + 0xb0);
    if (*(long *)(param_3 + 0xb2) != lVar15) {
      lVar23 = 0;
      pppuVar25 = (undefined8 ***)0x0;
      do {
        lStack_c0 = lVar15 + lVar23;
        ppppuVar10 = &pppuStack_a0;
        FUN_1092404c8(ppppuVar10,lStack_c0,&UNK_10dd5b8f9,&lStack_c0,&uStack_71);
        ppppuVar10[5] = pppuVar25;
        pppuVar25 = (undefined8 ***)((long)pppuVar25 + 1);
        lVar15 = *(long *)(param_3 + 0xb0);
        lVar23 = lVar23 + 0x20;
      } while (pppuVar25 < (undefined8 ***)(*(long *)(param_3 + 0xb2) - lVar15 >> 5));
    }
    lVar23 = *(long *)(param_2 + 0xf0);
    for (lVar15 = *(long *)(param_2 + 0xe8); lVar15 != lVar23; lVar15 = lVar15 + 0x20) {
      ppppuVar10 = &pppuStack_a0;
      FUN_109240a28(ppppuVar10,lVar15);
      plVar22 = (long *)(*(long *)(param_3 + 0xb0) + (long)ppppuVar10[5] * 0x20);
      lVar19 = *(long *)(param_3 + 0x80);
      piVar24 = param_3;
      if (lVar19 != 0) {
        lVar17 = lVar19 << 4;
        piVar26 = param_3;
        do {
          piVar24 = piVar26;
          if (*piVar26 == (int)plVar22[3]) break;
          piVar26 = piVar26 + 4;
          lVar17 = lVar17 + -0x10;
          piVar24 = param_3 + lVar19 * 4;
        } while (lVar17 != 0);
      }
      if (*(char *)((long)plVar22 + 0x17) < '\0') {
        func_0x000107c3192c(&lStack_c0,*plVar22,plVar22[1]);
      }
      else {
        lStack_b8 = plVar22[1];
        lStack_c0 = *plVar22;
        lStack_b0 = plVar22[2];
      }
      iStack_a8 = *piVar24;
      iStack_a4 = piVar24[3];
      plVar22 = *(long **)(param_4 + 8);
      if (plVar22 < *(long **)(param_4 + 0x10)) {
        plVar22[2] = lStack_b0;
        plVar22[1] = lStack_b8;
        *plVar22 = lStack_c0;
        lStack_b8 = 0;
        lStack_b0 = 0;
        lStack_c0 = 0;
        plVar22[3] = CONCAT44(iStack_a4,iStack_a8);
        *(long **)(param_4 + 8) = plVar22 + 4;
      }
      else {
        lVar19 = param_4;
        FUN_10923b66c(param_4,&lStack_c0);
        *(long *)(param_4 + 8) = lVar19;
        if (lStack_b0 < 0) {
          __ZdlPv(lStack_c0);
        }
      }
    }
    FUN_109240b0c(&pppuStack_a0);
  }
  else {
    lVar23 = *(long *)(param_2 + 0xf0);
    for (lVar15 = *(long *)(param_2 + 0xe8); lVar15 != lVar23; lVar15 = lVar15 + 0x20) {
      uStack_90 = 0;
      uStack_98 = 0;
      pppuStack_a0 = (undefined8 ****)0x0;
      uStack_88 = 0xffffffff;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&pppuStack_a0,lVar15)
      ;
      uStack_88 = *(undefined8 *)(lVar15 + 0x18);
      func_0x000109241120(param_4,&pppuStack_a0);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppuStack_a0);
      }
    }
  }
  _bzero(param_1,0xc20);
  lVar15 = 0;
  puVar18 = param_1;
  do {
    lVar23 = 0x180;
    puVar20 = puVar18;
    do {
      *puVar20 = 0xffffffff;
      *(undefined8 *)(puVar20 + 4) = 0;
      *(undefined8 *)(puVar20 + 1) = 0;
      *(undefined1 *)(puVar20 + 3) = 0;
      puVar20 = puVar20 + 6;
      lVar23 = lVar23 + -0x18;
    } while (lVar23 != 0);
    *(undefined4 *)((long)param_1 + lVar15 + 0x180) = 0;
    lVar15 = lVar15 + 0x184;
    puVar18 = puVar18 + 0x61;
  } while (lVar15 != 0xc20);
  if (*(long *)(param_3 + 0x80) != 0) {
    plVar22 = *(long **)(param_2 + 0xe8);
    plVar4 = *(long **)(param_2 + 0xf0);
    if (plVar22 != plVar4) {
      puVar1 = (uint *)(param_3 + 0x82);
      do {
        plVar29 = plVar22;
        if ((char)param_3[0xb6] == '\x01') {
          plVar28 = *(long **)(param_3 + 0xb0);
          plVar21 = *(long **)(param_3 + 0xb2);
          if (*(char *)((long)plVar22 + 0x17) < '\0') {
            func_0x000107c3192c(&pppuStack_a0,*plVar22,plVar22[1]);
          }
          else {
            uStack_98 = plVar22[1];
            pppuStack_a0 = (undefined8 ***)*plVar22;
            uStack_90 = plVar22[2];
          }
          uVar9 = uStack_90;
          plVar29 = plVar28;
          if (plVar28 != plVar21) {
            uVar8 = uStack_98;
            ppppuVar10 = (undefined8 ****)pppuStack_a0;
            if (-1 < (long)uStack_90) {
              uVar8 = uStack_90 >> 0x38;
              ppppuVar10 = &pppuStack_a0;
            }
            do {
              bVar7 = *(byte *)((long)plVar28 + 0x17);
              uVar3 = plVar28[1];
              if (-1 < (char)bVar7) {
                uVar3 = (ulong)bVar7;
              }
              if (uVar3 == uVar8) {
                plVar11 = (long *)*plVar28;
                if (-1 < (char)bVar7) {
                  plVar11 = plVar28;
                }
                _memcmp(plVar11,ppppuVar10,uVar8);
                plVar29 = plVar28;
                if ((int)plVar11 == 0) break;
              }
              plVar28 = plVar28 + 4;
              plVar29 = plVar21;
            } while (plVar28 != plVar21);
          }
          if ((long)uVar9 < 0) {
            __ZdlPv(pppuStack_a0);
          }
          if (((plVar29 == *(long **)(param_3 + 0xb2)) && ((*(byte *)(param_5 + 1) >> 2 & 1) != 0))
             && (*(uint *)(param_5 + 8) < 6)) {
            func_0x000109fd19d0(param_5,5,0x400,&UNK_10f55e551,0x2b);
          }
        }
        lVar15 = *(long *)(param_3 + 0x80);
        piVar26 = param_3 + lVar15 * 4;
        piVar24 = param_3;
        if (lVar15 == 0) {
LAB_1092439dc:
          if (piVar24 == piVar26) goto LAB_1092439e4;
        }
        else {
          lVar15 = lVar15 << 4;
          do {
            if (*piVar24 == (int)plVar29[3]) goto LAB_1092439dc;
            piVar24 = piVar24 + 4;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
LAB_1092439e4:
          piVar24 = piVar26;
          if (((*(byte *)(param_5 + 1) >> 2 & 1) != 0) && (*(uint *)(param_5 + 8) < 6)) {
            func_0x000109fd19d0(param_5,5,0x400,&UNK_10f55e551,0x2b);
          }
        }
        uVar5 = piVar24[1];
        uVar6 = param_1[(ulong)uVar5 * 0x61 + 0x60];
        param_1[(ulong)uVar5 * 0x61 + 0x60] = uVar6 + 1;
        lVar15 = *(long *)(param_3 + 0xa2);
        puVar2 = puVar1 + lVar15 * 4;
        puVar27 = puVar1;
        if (lVar15 == 0) {
LAB_109243a64:
          if (puVar27 == puVar2) goto LAB_109243a6c;
        }
        else {
          lVar15 = lVar15 << 4;
          do {
            if (*puVar27 == uVar5) goto LAB_109243a64;
            puVar27 = puVar27 + 4;
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
LAB_109243a6c:
          puVar27 = puVar2;
          if (((*(byte *)(param_5 + 1) >> 2 & 1) != 0) && (*(uint *)(param_5 + 8) < 6)) {
            func_0x000109fd19d0(param_5,5,0x400,&UNK_10f55e57d,0x27);
          }
        }
        if (((puVar27[2] == 0xffffffff) && ((*(byte *)(param_5 + 1) >> 2 & 1) != 0)) &&
           (*(uint *)(param_5 + 8) < 6)) {
          func_0x000109fd19d0(param_5,5,0x400,&UNK_10f55e5a5,0x2f);
        }
        puVar18 = param_1 + (ulong)uVar5 * 0x61 + (ulong)uVar6 * 6;
        *puVar18 = (int)plVar22[3];
        uVar5 = piVar24[3] - 1;
        if (0x1e < uVar5) {
          puVar12 = &UNK_10f55e5d5;
          FUN_109243bf8();
          FUN_109240b0c(&pppuStack_a0);
          __Unwind_Resume(puVar12);
          puVar13 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          FUN_109243c48();
          puVar14 = puVar13;
          ___cxa_throw(puVar13,&PTR_DAT_110ae4668,FUN_109243c68);
          ___cxa_free_exception(puVar13);
          __Unwind_Resume();
          __ZNSt13runtime_errorC2EPKc();
          *puVar14 = &PTR_FUN_110ae4690;
          return;
        }
        *(undefined *)(puVar18 + 3) = (&UNK_10dfbd1b0)[uVar5];
        uVar16 = 2;
        switch((ulong)uVar5) {
        case 1:
        case 4:
        case 7:
        case 10:
        case 0xd:
        case 0x10:
        case 0x13:
        case 0x16:
        case 0x19:
        case 0x1d:
          uVar16 = 3;
          break;
        case 2:
        case 5:
        case 8:
        case 0xb:
        case 0xe:
        case 0x11:
        case 0x14:
        case 0x17:
        case 0x1a:
        case 0x1e:
          uVar16 = 4;
          break;
        case 0x1b:
          puVar18[1] = 1;
          uVar16 = 0x1406;
          goto code_r0x000109243b44;
        }
        puVar18[1] = uVar16;
        uVar16 = *(undefined4 *)(&UNK_10dfbd1d0 + (ulong)uVar5 * 4);
code_r0x000109243b44:
        puVar18[2] = uVar16;
        puVar18[5] = piVar24[2];
        puVar18[4] = puVar27[2];
        plVar22 = plVar22 + 4;
      } while (plVar22 != plVar4);
    }
  }
  return;
}



/* Entry: 109243bf8; end: 109243c47;  */

void FUN_109243bf8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109243c48();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae4668,FUN_109243c68);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110ae4690;
  return;
}



/* Entry: 109243c48; end: 109243c67;  */

void FUN_109243c48(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110ae4690;
  return;
}



/* Entry: 109243c68; end: 109243c6b;  */

void FUN_109243c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109243c6c; end: 109243c7f;  */

void FUN_109243c6c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109243c80; end: 109243f73;  */

void FUN_109243c80(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long lStack_58;
  
  if ((*(char *)(param_1[1] + 0x26) != '\x01') || (lVar2 = *(long *)(*param_2 + 0x58), lVar2 == 0))
  {
LAB_109243d50:
    lVar3 = param_1[3];
    lVar2 = *param_2;
    lVar5 = param_2[1];
    if (*(long *)(lVar2 + 0x50) == 0) {
      lVar6 = *(long *)(lVar2 + 0x58);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_10925ca24(lVar6,1,0,0,lVar3);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar2 + 0x50) + 0x10);
    }
    if ((int)param_2[0x1a] != 0) {
      uVar4 = 0;
      plVar7 = param_2 + 4;
      do {
        lStack_60 = lVar6 + plVar7[-2];
        lStack_58 = *plVar7;
        FUN_109245ea8(lVar5,plVar7[-1],&lStack_60,lVar3);
        uVar4 = uVar4 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar4 < *(uint *)(param_2 + 0x1a));
    }
    if ((*(long *)(lVar2 + 0x50) == 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      FUN_10925c194(*(long *)(lVar2 + 0x58),lVar3);
    }
    return;
  }
  lVar5 = param_2[1];
  lStack_60 = *(long *)(lVar2 + 0x50);
  lStack_58 = *(long *)(lVar2 + 0x18);
  FUN_10925bdc8(lVar2,param_1[3],&lStack_60);
  if ((*(int *)(lVar2 + 0x2c) == 0) || (lVar2 = *(long *)(lVar5 + 0x58), lVar2 == 0))
  goto LAB_109243d50;
  lStack_60 = *(long *)(lVar2 + 0x50);
  lStack_58 = *(long *)(lVar2 + 0x18);
  FUN_10925bdc8(lVar2,param_1[3],&lStack_60);
  if (*(int *)(lVar2 + 0x2c) == 0) goto LAB_109243d50;
  lVar6 = *param_1;
  lVar5 = param_1[3];
  lVar2 = param_2[1];
  lVar3 = *(long *)(*param_2 + 0x58);
  if (lVar3 == 0) {
    iVar1 = 0;
    if (lVar5 != 0) goto LAB_109243e0c;
LAB_109243e1c:
    _glBindBuffer(0x8f36);
  }
  else {
    lStack_60 = *(long *)(lVar3 + 0x50);
    lStack_58 = *(long *)(lVar3 + 0x18);
    FUN_10925bdc8(lVar3,lVar5,&lStack_60);
    iVar1 = *(int *)(lVar3 + 0x2c);
    if (lVar5 == 0) goto LAB_109243e1c;
LAB_109243e0c:
    if (*(int *)(lVar5 + 0x118) != iVar1) {
      *(int *)(lVar5 + 0x118) = iVar1;
      goto LAB_109243e1c;
    }
  }
  lVar2 = *(long *)(lVar2 + 0x58);
  if (lVar2 == 0) {
    iVar1 = 0;
    if (lVar5 != 0) goto LAB_109243e5c;
LAB_109243e6c:
    _glBindBuffer(0x8f37);
  }
  else {
    lStack_60 = *(long *)(lVar2 + 0x50);
    lStack_58 = *(long *)(lVar2 + 0x18);
    FUN_10925bdc8(lVar2,lVar5,&lStack_60);
    iVar1 = *(int *)(lVar2 + 0x2c);
    if (lVar5 == 0) goto LAB_109243e6c;
LAB_109243e5c:
    if (*(int *)(lVar5 + 0x11c) != iVar1) {
      *(int *)(lVar5 + 0x11c) = iVar1;
      goto LAB_109243e6c;
    }
  }
  if ((int)param_2[0x1a] != 0) {
    uVar4 = 0;
    plVar7 = param_2 + 4;
    do {
      (**(code **)(lVar6 + 0x1178))(0x8f36,0x8f37,plVar7[-2],plVar7[-1],*plVar7);
      uVar4 = uVar4 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar4 < *(uint *)(param_2 + 0x1a));
  }
  if (lVar5 == 0) {
LAB_109243ebc:
    _glBindBuffer(0x8f37,0);
    if (lVar5 == 0) goto LAB_109243ed8;
  }
  else if (*(int *)(lVar5 + 0x11c) != 0) {
    *(undefined4 *)(lVar5 + 0x11c) = 0;
    goto LAB_109243ebc;
  }
  if (*(int *)(lVar5 + 0x118) == 0) {
    return;
  }
  *(undefined4 *)(lVar5 + 0x118) = 0;
LAB_109243ed8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindBuffer_11034b368)(0x8f36,0);
  return;
}



/* Entry: 109243f74; end: 10924463b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109243f74(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  bool bVar25;
  uint uVar26;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  int iStack_26c;
  long *plStack_268;
  long lStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long alStack_70 [2];
  
  lVar20 = param_2[1];
  if ((*(char *)(param_1[1] + 0x24) == '\x01') && (lVar18 = *(long *)(lVar20 + 0x58), lVar18 != 0))
  {
    uStack_248 = *(undefined8 *)(lVar18 + 0x50);
    uStack_240 = *(undefined8 *)(lVar18 + 0x18);
    FUN_10925bdc8(lVar18,param_1[3],&uStack_248);
    lVar20 = param_2[1];
    if (*(int *)(lVar18 + 0x2c) != 0) {
      lVar13 = *param_1;
      lVar18 = param_1[3];
      lVar19 = *param_2;
      uVar8 = *(uint *)(lVar19 + 0x40);
      lVar20 = *(long *)(lVar20 + 0x58);
      lStack_78 = lVar18;
      alStack_70[0] = lVar13;
      if (lVar20 == 0) {
        iVar7 = 0;
        if (lVar18 != 0) goto LAB_1092443b8;
LAB_1092443c8:
        _glBindBuffer(0x88eb);
      }
      else {
        uStack_248 = *(undefined8 *)(lVar20 + 0x50);
        uStack_240 = *(undefined8 *)(lVar20 + 0x18);
        FUN_10925bdc8(lVar20,lVar18,&uStack_248);
        iVar7 = *(int *)(lVar20 + 0x2c);
        if (lVar18 == 0) goto LAB_1092443c8;
LAB_1092443b8:
        if (*(int *)(lVar18 + 300) != iVar7) {
          *(int *)(lVar18 + 300) = iVar7;
          goto LAB_1092443c8;
        }
      }
      uVar10 = (ulong)*(uint *)(param_2 + 0x3a);
      if (*(uint *)(param_2 + 0x3a) != 0) {
        uVar12 = 0;
        lVar20 = lVar13 + (ulong)uVar8 * 0xc;
        do {
          plVar23 = param_2 + uVar12 * 7 + 2;
          uStack_8c._4_4_ = (undefined4)plVar23[3];
          uStack_84 = 1;
          iVar7 = *(int *)(lVar19 + 0xb0);
          if ((iVar7 == 0x806f || iVar7 == 0x8c1a) || iVar7 == 0x8513) {
            uVar17 = (ulong)*(uint *)(plVar23 + 6);
            if (*(uint *)(plVar23 + 6) != 0) goto LAB_109244448;
          }
          else {
            uVar17 = 1;
LAB_109244448:
            uVar10 = 0;
            do {
              iStack_80 = (int)uVar10 + *(int *)((long)plVar23 + 0x24);
              uStack_7c = 1;
              FUN_109287a7c(&uStack_248,lStack_78,(undefined4 *)((long)&uStack_8c + 4),lVar19,0);
              FUN_1092536b0(lStack_78,0x8ca8,&uStack_248);
              (**(code **)(lVar13 + 0x1088))(0x8ce0);
              plStack_268 = alStack_70;
              uStack_8c._0_4_ = 0;
              iStack_26c = 0;
              lStack_260 = lVar13 + 0x930;
              plStack_258 = &lStack_78;
              func_0x0001092881bc((int)plVar23[5],*(undefined4 *)((long)plVar23 + 0x2c),
                                  *(undefined4 *)(lVar19 + 0x40),(int)plVar23[1],plVar23[2],
                                  &uStack_8c,&uStack_278,&iStack_26c,(long)&uStack_280 + 4);
              iVar7 = 0;
              if (iStack_26c != (int)plVar23[5]) {
                iVar7 = iStack_26c;
              }
              (**(code **)(lVar13 + 0x1280))(0xd02,iVar7);
              _glReadPixels(*(undefined4 *)((long)plVar23 + 0x1c),(int)plVar23[4],(int)plVar23[5],
                            *(undefined4 *)((long)plVar23 + 0x2c),*(undefined4 *)(lVar20 + 0xb80),
                            *(undefined4 *)(lVar20 + 0xb84),*plVar23 + plVar23[2] * uVar10);
              FUN_109244ee8(&plStack_268);
              uVar10 = uVar10 + 1;
            } while (uVar17 != uVar10);
            uVar10 = (ulong)*(uint *)(param_2 + 0x3a);
          }
          uVar12 = uVar12 + 1;
          lVar18 = lStack_78;
        } while (uVar12 < uVar10);
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 300) == 0) goto LAB_10924454c;
        *(undefined4 *)(lVar18 + 300) = 0;
      }
      _glBindBuffer(0x88eb,0);
      goto LAB_10924454c;
    }
  }
  lVar19 = *param_1;
  lVar18 = param_1[3];
  lVar13 = *param_2;
  uVar8 = *(uint *)(lVar13 + 0x40);
  plVar23 = param_2 + 2;
  plVar6 = plVar23;
  lStack_78 = lVar18;
  alStack_70[0] = lVar19;
  FUN_109288430(plVar23,(int)param_2[0x3a],lVar13 + 0x24,*(undefined1 *)(lVar19 + 0x981));
  if (*(char *)(lVar19 + 0x954) == '\x01') {
    if (lVar18 != 0) {
      if (*(int *)(lVar18 + 300) == 0) goto LAB_109244084;
      *(undefined4 *)(lVar18 + 300) = 0;
    }
    _glBindBuffer(0x88eb,0);
  }
LAB_109244084:
  uVar10 = (ulong)*(uint *)(param_2 + 0x3a);
  if (*(uint *)(param_2 + 0x3a) != 0) {
    uVar12 = 0;
    bVar25 = false;
    lVar18 = lVar19 + 0x930;
    lVar11 = lVar19 + (ulong)uVar8 * 0xc;
    do {
      plVar14 = plVar23 + uVar12 * 7;
      uStack_8c._4_4_ = (undefined4)plVar14[3];
      uStack_84 = 1;
      iVar7 = *(int *)(lVar13 + 0xb0);
      if ((iVar7 == 0x806f || iVar7 == 0x8c1a) || iVar7 == 0x8513) {
        uStack_288 = (ulong)*(uint *)(plVar14 + 6);
        if (*(uint *)(plVar14 + 6) != 0) goto LAB_1092440fc;
      }
      else {
        uStack_288 = 1;
LAB_1092440fc:
        uVar10 = 0;
        do {
          iStack_80 = *(int *)((long)plVar14 + 0x24) + (int)uVar10;
          uStack_7c = 1;
          uStack_8c._0_4_ = 0x8d40;
          FUN_109287a7c(&uStack_248,lStack_78,(undefined4 *)((long)&uStack_8c + 4),lVar13,0);
          FUN_1092536b0(lStack_78,(undefined4)uStack_8c,&uStack_248);
          (**(code **)(lVar19 + 0x1088))(0x8ce0);
          (**(code **)(lVar19 + 0x1080))(0,0);
          plStack_268 = alStack_70;
          plStack_258 = &uStack_8c;
          plStack_250 = &lStack_78;
          lVar24 = plVar14[2];
          lVar22 = lVar24;
          lStack_260 = lVar18;
          if (*(long *)(lVar20 + 0x50) == 0) {
            lVar21 = *(long *)(lVar20 + 0x58);
            if (lVar21 == 0) {
              lVar21 = 0;
            }
            else {
              FUN_10925ca24(lVar21,2,0,0,lStack_78);
              lVar22 = plVar14[2];
            }
          }
          else {
            lVar21 = *(long *)(*(long *)(lVar20 + 0x50) + 0x10);
          }
          lVar15 = *plVar14;
          iStack_26c = 0;
          uStack_280 = 0;
          uStack_278 = 0;
          func_0x0001092881bc((int)plVar14[5],*(undefined4 *)((long)plVar14 + 0x2c),
                              *(undefined4 *)(lVar13 + 0x40),(int)plVar14[1],lVar22,&iStack_26c,
                              &uStack_278,(long)&uStack_280 + 4,&uStack_280);
          lVar22 = lVar21 + lVar15 + lVar24 * uVar10;
          uVar26 = uStack_280._4_4_;
          uVar17 = (ulong)uStack_280._4_4_;
          uVar8 = *(uint *)(plVar14 + 5);
          if (((*(byte *)(lVar19 + 0x981) & 1) == 0) &&
             ((uStack_280._4_4_ != uVar8 || ((int)uStack_280 != *(int *)((long)plVar14 + 0x2c))))) {
            lVar24 = param_1[4];
            if (!bVar25) {
              plVar9 = (long *)(param_1[5] - lVar24);
              if (plVar6 < plVar9 || (long)plVar6 - (long)plVar9 == 0) {
                if (plVar6 < plVar9) {
                  param_1[5] = lVar24 + (long)plVar6;
                }
              }
              else {
                func_0x000107c27d58(param_1 + 4,(long)plVar6 - (long)plVar9);
                uVar8 = *(uint *)(plVar14 + 5);
                lVar24 = param_1[4];
              }
            }
            _glReadPixels(*(undefined4 *)((long)plVar14 + 0x1c),(int)plVar14[4],uVar8,
                          *(undefined4 *)((long)plVar14 + 0x2c),*(undefined4 *)(lVar11 + 0xb80),
                          *(undefined4 *)(lVar11 + 0xb84),lVar24);
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar13 + 0x40) * 4;
            if (0x56 < *(uint *)(lVar13 + 0x40)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            bVar2 = *(byte *)((long)ppuVar1 + 0x1a);
            if (bVar2 == 0) {
              FUN_109243bf8(&UNK_10f62e152);
LAB_1092445a0:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1092445a4);
              (*pcVar5)();
            }
            bVar3 = *(byte *)(ppuVar1 + 3);
            func_0x000109fc8e58(uVar17,uStack_280 & 0xffffffff);
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar13 + 0x40) * 4;
            if (0x56 < *(uint *)(lVar13 + 0x40)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            if (*(byte *)((long)ppuVar1 + 0x1a) == 0) {
              FUN_109243bf8(&UNK_10f62e152);
              goto LAB_1092445a0;
            }
            uVar8 = 0;
            if (bVar3 != 0) {
              uVar8 = ((uVar26 + bVar3) - 1) / (uint)bVar3;
            }
            uVar16 = (ulong)(uVar8 * bVar2);
            uVar8 = 0;
            if (uVar16 != 0) {
              uVar8 = (uint)(uVar17 / uVar16);
            }
            if (uVar8 != 0) {
              uVar26 = 0;
              bVar2 = *(byte *)(ppuVar1 + 3);
              uVar4 = 0;
              if (bVar2 != 0) {
                uVar4 = (((int)plVar14[5] + (uint)bVar2) - 1) / (uint)bVar2;
              }
              uVar17 = (ulong)(uVar4 * *(byte *)((long)ppuVar1 + 0x1a));
              lVar24 = param_1[4];
              do {
                _memcpy(lVar22,lVar24,uVar17);
                lVar24 = lVar24 + uVar17;
                lVar22 = lVar22 + uVar16;
                uVar26 = uVar26 + 1;
              } while (uVar26 < uVar8);
            }
            bVar25 = true;
          }
          else {
            uVar26 = 0;
            if (uStack_280._4_4_ != uVar8) {
              uVar26 = uStack_280._4_4_;
            }
            (**(code **)(lVar19 + 0x1280))(0xd02,uVar26);
            _glReadPixels(*(undefined4 *)((long)plVar14 + 0x1c),(int)plVar14[4],(int)plVar14[5],
                          *(undefined4 *)((long)plVar14 + 0x2c),*(undefined4 *)(lVar11 + 0xb80),
                          *(undefined4 *)(lVar11 + 0xb84),lVar22);
          }
          if ((*(long *)(lVar20 + 0x50) == 0) && (*(long *)(lVar20 + 0x58) != 0)) {
            FUN_10925c194(*(long *)(lVar20 + 0x58),lStack_78);
          }
          func_0x000109244f40(&plStack_268);
          uVar10 = uVar10 + 1;
        } while (uVar10 != uStack_288);
        uVar10 = (ulong)*(uint *)(param_2 + 0x3a);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar10);
  }
LAB_10924454c:
  (**(code **)(param_1[1] + 0x950))(0xd02,0);
  return;
}



/* Entry: 10924463c; end: 10924474f;  */

void FUN_10924463c(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  int *piVar23;
  int iVar24;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar25;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int *unaff_x24;
  undefined8 unaff_x25;
  undefined **unaff_x26;
  undefined8 unaff_x27;
  undefined4 *puVar26;
  int iVar27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int aiStack_80 [4];
  
  puVar15 = (undefined *)*param_1;
  lVar12 = param_1[1];
  plVar17 = (long *)param_1[3];
  if ((((byte)puVar15[(ulong)*(uint *)(*param_2 + 0x40) * 0x10 + 0x194] >> 2 & 1) == 0) ||
     (((byte)puVar15[(ulong)*(uint *)(param_2[1] + 0x40) * 0x10 + 0x194] >> 2 & 1) == 0)) {
    if (*(char *)(lVar12 + 0x53) != '\x01') {
      return;
    }
FUN_109244750:
    if ((int)param_2[0x2e] != 0) {
      uVar25 = 0;
      lVar12 = param_2[1];
      aiStack_80[2] = (int)*param_2;
      aiStack_80[3] = (int)((ulong)*param_2 >> 0x20);
      puVar26 = (undefined4 *)((long)param_2 + 0x1c);
      do {
        lVar11 = CONCAT44(aiStack_80[3],aiStack_80[2]);
        FUN_10926dea0(lVar11,plVar17);
        uVar4 = *(undefined4 *)(lVar11 + 0xac);
        uVar7 = *(undefined4 *)(lVar11 + 0xb0);
        uVar5 = puVar26[-3];
        uVar8 = puVar26[-2];
        uVar6 = puVar26[-1];
        uVar9 = *puVar26;
        FUN_10926dea0(lVar12,plVar17);
        uStack_98 = *(undefined8 *)(puVar26 + 3);
        uStack_a0 = *(undefined8 *)(puVar26 + 1);
        uStack_88 = puVar26[7];
        iStack_90 = (int)*(undefined8 *)(puVar26 + 5);
        uStack_8c = (undefined4)((ulong)*(undefined8 *)(puVar26 + 5) >> 0x20);
        (**(code **)(puVar15 + 0x1070))
                  (uVar4,uVar7,uVar5,uVar8,uVar6,uVar9,*(undefined4 *)(lVar12 + 0xac),
                   *(undefined4 *)(lVar12 + 0xb0));
        uVar25 = uVar25 + 1;
        puVar26 = puVar26 + 0xb;
      } while (uVar25 < *(uint *)(param_2 + 0x2e));
    }
    return;
  }
  iVar24 = *(int *)(puVar15 + 0x918);
  plVar18 = plVar17;
  if ((iVar24 == 1 || (char)plVar17[9] != '\0') && (*(char *)(lVar12 + 0x25) == '\x01')) {
    uVar13 = *(uint *)(param_2 + 0x2e);
    if (uVar13 == 0) goto FUN_109244834;
    if (((*(int *)((long)param_2 + 0x1c) == 0) && ((int)param_2[7] == 1)) &&
       (*(int *)((long)param_2 + 0x2c) == 0)) {
      uVar25 = 0;
      piVar23 = (int *)((long)param_2 + 100);
      do {
        if ((ulong)uVar13 - 1 == uVar25) goto FUN_109244834;
        piVar1 = piVar23 + -7;
        iVar27 = *piVar23;
        piVar2 = piVar23 + -3;
        piVar23 = piVar23 + 0xb;
        uVar25 = uVar25 + 1;
      } while ((*piVar1 == 0 && iVar27 == 1) && *piVar2 == 0);
      if (uVar13 <= uVar25) goto FUN_109244834;
    }
  }
  plVar16 = param_2;
  if (iVar24 == 2) {
    if (*(char *)(lVar12 + 0x53) == '\x01') goto FUN_109244750;
  }
  else {
    if (iVar24 == 3) goto code_r0x00010924497c;
    if ((*(byte *)(lVar12 + 0x53) & 1) != 0) goto FUN_109244750;
  }
  if (*(char *)(lVar12 + 0x25) == '\x01') {
FUN_109244834:
    unaff_x29 = &stack0xfffffffffffffff0;
    if ((int)param_2[0x2e] != 0) {
      unaff_x23 = 0;
      unaff_x21 = (long *)*param_2;
      unaff_x22 = param_2[1];
      unaff_x24 = (int *)((long)param_2 + 0x1c);
      unaff_x25 = 1;
      unaff_x27 = 0x2600;
      unaff_x28 = &iStack_90;
      unaff_x26 = &PTR_DAT_110ae4700;
      plVar16 = plVar17;
      do {
        if (((*unaff_x24 != 0) || (unaff_x24[7] != 1)) || (unaff_x24[4] != 0)) {
          puVar15 = &UNK_10f55e5e4;
          unaff_x30 = FUN_10924497c;
          FUN_109244fe8();
          register0x00000008 = (BADSPACEBASE *)&uStack_f0;
          unaff_x19 = plVar17;
          unaff_x20 = param_2;
          goto code_r0x00010924497c;
        }
        aiStack_80[0] = unaff_x24[-3];
        uStack_84 = 1;
        aiStack_80[1] = 1;
        aiStack_80[2] = 0;
        aiStack_80[3] = 1;
        iStack_90 = unaff_x24[1];
        uStack_8c = 1;
        uStack_88 = 0;
        ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(unaff_x22 + 0x40) * 4;
        if (0x56 < *(uint *)(unaff_x22 + 0x40)) {
          ppuVar3 = unaff_x26;
        }
        uVar13 = *(uint *)((long)ppuVar3 + 0x14);
        uStack_b8 = 0x4000;
        if (uVar13 != 0) {
          uStack_b8 = 0;
        }
        uStack_b8 = uStack_b8 | (uVar13 & 1) << 8 | (uVar13 >> 1 & 1) << 10;
        uStack_f0 = *(undefined8 *)(unaff_x24 + 2);
        uStack_d8 = *(undefined8 *)(unaff_x24 + 5);
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2600);
        uStack_c0 = 1;
        uStack_d0 = 1;
        uStack_e8 = 0;
        plVar16 = (long *)0x0;
        plVar18 = unaff_x21;
        piStack_e0 = unaff_x28;
        uStack_c8 = uStack_d8;
        FUN_109287e50(plVar17,0,unaff_x21,*(undefined8 *)(unaff_x24 + -2),0,aiStack_80,unaff_x22);
        unaff_x23 = unaff_x23 + 1;
        unaff_x24 = unaff_x24 + 0xb;
      } while (unaff_x23 < *(uint *)(param_2 + 0x2e));
    }
    return;
  }
code_r0x00010924497c:
  *(int **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(int **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(long **)((long)register0x00000008 + -0x78) = plVar18;
  *(undefined **)((long)register0x00000008 + -0x70) = puVar15;
  lVar12 = *plVar16;
  *(long *)((long)register0x00000008 + -0x80) = plVar16[1];
  *(long **)((long)register0x00000008 + -0x2a0) = plVar16;
  uVar25 = (ulong)*(uint *)(plVar16 + 0x2e);
  if (*(uint *)(plVar16 + 0x2e) != 0) {
    uVar20 = 0;
    *(long *)((long)register0x00000008 + -0x298) =
         *(long *)((long)register0x00000008 + -0x2a0) + 0x10;
    do {
      puVar26 = (undefined4 *)(*(long *)((long)register0x00000008 + -0x298) + uVar20 * 0x2c);
      *(undefined4 *)((long)register0x00000008 + -0x90) = *puVar26;
      *(undefined4 *)((long)register0x00000008 + -0x8c) = 1;
      iVar24 = *(int *)(lVar12 + 0xb0);
      if ((iVar24 == 0x806f || iVar24 == 0x8c1a) || iVar24 == 0x8513) {
        iVar24 = puVar26[10];
        if (iVar24 != 0) goto LAB_109244a18;
      }
      else {
        iVar24 = 1;
LAB_109244a18:
        *(ulong *)((long)register0x00000008 + -0x290) = uVar20;
        iVar27 = 0;
        do {
          *(int *)((long)register0x00000008 + -0x88) = iVar27 + puVar26[3];
          *(undefined4 *)((long)register0x00000008 + -0x84) = 1;
          *(undefined4 *)((long)register0x00000008 + -0x94) = 0x8d40;
          FUN_109287a7c((undefined1 *)((long)register0x00000008 + -0x250),
                        *(undefined8 *)((long)register0x00000008 + -0x78),
                        (undefined1 *)((long)register0x00000008 + -0x90),lVar12,0);
          FUN_1092536b0(*(undefined8 *)((long)register0x00000008 + -0x78),
                        *(undefined4 *)((long)register0x00000008 + -0x94),
                        (undefined1 *)((long)register0x00000008 + -0x250));
          (**(code **)(puVar15 + 0x1088))(0x8ce0);
          (**(code **)(puVar15 + 0x1080))(0,0);
          *(undefined1 **)((long)register0x00000008 + -0x270) =
               (undefined1 *)((long)register0x00000008 + -0x70);
          *(undefined **)((long)register0x00000008 + -0x268) = puVar15 + 0x930;
          *(undefined1 **)((long)register0x00000008 + -0x260) =
               (undefined1 *)((long)register0x00000008 + -0x94);
          *(undefined1 **)((long)register0x00000008 + -600) =
               (undefined1 *)((long)register0x00000008 + -0x78);
          lVar11 = *(long *)((long)register0x00000008 + -0x80);
          iVar14 = *(int *)(lVar11 + 0xb0);
          FUN_10926dea0(lVar11,*(undefined8 *)((long)register0x00000008 + -0x78));
          lVar19 = *(long *)((long)register0x00000008 + -0x78);
          if ((lVar19 == 0) || (*(int *)(lVar19 + 0x150) == -1)) {
LAB_109244b90:
            _glBindTexture(iVar14);
          }
          else {
            if (iVar14 < 0x8c2a) {
              if (iVar14 < 0x8513) {
                if (iVar14 == 0xde1) {
                  lVar21 = 1;
                }
                else {
                  if (iVar14 != 0x806f) goto LAB_109244b90;
                  lVar21 = 4;
                }
              }
              else if (iVar14 == 0x8513) {
                lVar21 = 6;
              }
              else {
                if (iVar14 != 0x8c1a) goto LAB_109244b90;
                lVar21 = 5;
              }
            }
            else if (iVar14 < 0x9100) {
              if (iVar14 == 0x8c2a) {
                lVar21 = 8;
              }
              else {
                if (iVar14 != 0x9009) goto LAB_109244b90;
                lVar21 = 7;
              }
            }
            else if (iVar14 == 0x9102) {
              lVar21 = 3;
            }
            else {
              if (iVar14 != 0x9100) goto LAB_109244b90;
              lVar21 = 2;
            }
            lVar19 = *(long *)(lVar19 + 0x138) + (ulong)(*(int *)(lVar19 + 0x150) - 0x84c0) * 0x24;
            if (*(int *)(lVar19 + lVar21 * 4) != *(int *)(lVar11 + 0xac)) {
              *(int *)(lVar19 + lVar21 * 4) = *(int *)(lVar11 + 0xac);
              goto LAB_109244b90;
            }
          }
          *(undefined **)((long)register0x00000008 + -0x288) = puVar15 + 0x930;
          *(undefined1 **)((long)register0x00000008 + -0x280) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined1 **)((long)register0x00000008 + -0x278) =
               (undefined1 *)((long)register0x00000008 + -0x78);
          uVar7 = *(undefined4 *)(*(long *)((long)register0x00000008 + -0x80) + 0xb0);
          uVar4 = puVar26[4];
          uVar6 = puVar26[5];
          uVar5 = puVar26[6];
          iVar14 = puVar26[7];
          if ((iVar24 == 1) && (iVar14 < 1)) {
            _glCopyTexSubImage2D();
          }
          else {
            uVar8 = puVar26[1];
            uVar10 = puVar26[2];
            uVar9 = puVar26[8];
            pcVar22 = *(code **)(puVar15 + 0x1288);
            *(undefined4 *)((long)register0x00000008 + -0x2b0) = puVar26[9];
            (*pcVar22)(uVar7,uVar4,uVar6,uVar5,iVar27 + iVar14,uVar8,uVar10,uVar9);
          }
          FUN_109245070((undefined1 *)((long)register0x00000008 + -0x288));
          func_0x000109245194((undefined1 *)((long)register0x00000008 + -0x270));
          iVar27 = iVar27 + 1;
        } while (iVar24 != iVar27);
        uVar25 = (ulong)*(uint *)(*(long *)((long)register0x00000008 + -0x2a0) + 0x170);
        uVar20 = *(ulong *)((long)register0x00000008 + -0x290);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar25);
  }
  return;
}



/* Entry: 109244750; end: 109244833;  */

void FUN_109244750(long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  
  if ((int)param_2[0x2e] != 0) {
    uVar10 = 0;
    lVar7 = *param_2;
    lVar8 = param_2[1];
    puVar9 = (undefined4 *)((long)param_2 + 0x1c);
    do {
      FUN_10926dea0(lVar7,param_3);
      uVar1 = *(undefined4 *)(lVar7 + 0xac);
      uVar4 = *(undefined4 *)(lVar7 + 0xb0);
      uVar2 = puVar9[-3];
      uVar5 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar6 = *puVar9;
      FUN_10926dea0(lVar8,param_3);
      (**(code **)(param_1 + 0x1070))
                (uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,*(undefined4 *)(lVar8 + 0xac),
                 *(undefined4 *)(lVar8 + 0xb0),*(undefined8 *)(puVar9 + 1),
                 *(undefined8 *)(puVar9 + 3),*(undefined8 *)(puVar9 + 5),puVar9[7]);
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 0xb;
    } while (uVar10 < *(uint *)(param_2 + 0x2e));
  }
  return;
}



/* Entry: 109244834; end: 10924497b;  */

void FUN_109244834(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined *puStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined4 *puStack_350;
  long *plStack_348;
  undefined1 auStack_340 [444];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  long lStack_170;
  long lStack_168;
  undefined *apuStack_160 [2];
  int *piStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  int *piStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int aiStack_90 [5];
  undefined8 uStack_7c;
  undefined4 uStack_74;
  
  if ((int)param_1[0x2e] != 0) {
    uVar14 = 0;
    lVar3 = *param_1;
    lVar12 = param_1[1];
    piVar15 = (int *)((long)param_1 + 0x1c);
    plVar8 = param_2;
    do {
      if (((*piVar15 != 0) || (piVar15[7] != 1)) || (piVar15[4] != 0)) {
        puVar7 = &UNK_10f55e5e4;
        FUN_109244fe8();
        uStack_148 = 0x2600;
        ppuStack_140 = &PTR_DAT_110ae4700;
        uStack_138 = 1;
        pcStack_f8 = FUN_10924497c;
        lVar4 = *plVar8;
        lStack_170 = plVar8[1];
        uVar9 = (ulong)*(uint *)(plVar8 + 0x2e);
        if (*(uint *)(plVar8 + 0x2e) == 0) {
          return;
        }
        uVar11 = 0;
        puVar1 = puVar7 + 0x930;
        lStack_168 = param_3;
        apuStack_160[0] = puVar7;
        piStack_150 = aiStack_90;
        piStack_130 = piVar15;
        uStack_128 = uVar14;
        lStack_120 = lVar12;
        lStack_118 = lVar3;
        plStack_110 = param_1;
        plStack_108 = param_2;
        puStack_100 = &stack0xfffffffffffffff0;
        goto LAB_1092449d4;
      }
      aiStack_90[4] = piVar15[-3];
      aiStack_90[3] = 1;
      uStack_7c = 1;
      uStack_74 = 1;
      aiStack_90[0] = piVar15[1];
      aiStack_90[1] = 1;
      aiStack_90[2] = 0;
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar12 + 0x40) * 4;
      if (0x56 < *(uint *)(lVar12 + 0x40)) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      uVar5 = *(uint *)((long)ppuVar2 + 0x14);
      uStack_b8 = 0x4000;
      if (uVar5 != 0) {
        uStack_b8 = 0;
      }
      uStack_b8 = uStack_b8 | (uVar5 & 1) << 8 | (uVar5 >> 1 & 1) << 10;
      uStack_f0 = *(undefined8 *)(piVar15 + 2);
      uStack_d8 = *(undefined8 *)(piVar15 + 5);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0x2600;
      uStack_c0 = 1;
      uStack_d0 = 1;
      uStack_e8 = 0;
      plVar8 = (long *)0x0;
      param_3 = lVar3;
      piStack_e0 = aiStack_90;
      uStack_c8 = uStack_d8;
      FUN_109287e50(param_2,0,lVar3,*(undefined8 *)(piVar15 + -2),0,aiStack_90 + 4,lVar12);
      uVar14 = uVar14 + 1;
      piVar15 = piVar15 + 0xb;
    } while (uVar14 < *(uint *)(param_1 + 0x2e));
  }
  return;
LAB_1092449d4:
  puVar16 = (undefined4 *)((long)plVar8 + uVar11 * 0x2c + 0x10);
  uStack_180 = *puVar16;
  uStack_17c = 1;
  iVar13 = *(int *)(lVar4 + 0xb0);
  if ((iVar13 == 0x806f || iVar13 == 0x8c1a) || iVar13 == 0x8513) {
    iVar13 = puVar16[10];
    if (iVar13 != 0) goto LAB_109244a18;
  }
  else {
    iVar13 = 1;
LAB_109244a18:
    iVar17 = 0;
    do {
      iStack_178 = iVar17 + puVar16[3];
      uStack_174 = 1;
      uStack_184 = 0x8d40;
      FUN_109287a7c(auStack_340,lStack_168,&uStack_180,lVar4,0);
      FUN_1092536b0(lStack_168,uStack_184,auStack_340);
      (**(code **)(puVar7 + 0x1088))(0x8ce0);
      (**(code **)(puVar7 + 0x1080))(0,0);
      lVar3 = lStack_170;
      ppuStack_360 = apuStack_160;
      puStack_350 = &uStack_184;
      iVar6 = *(int *)(lStack_170 + 0xb0);
      puStack_358 = puVar1;
      plStack_348 = &lStack_168;
      FUN_10926dea0(lStack_170,lStack_168);
      if ((lStack_168 == 0) || (*(int *)(lStack_168 + 0x150) == -1)) {
LAB_109244b90:
        _glBindTexture(iVar6);
      }
      else {
        if (iVar6 < 0x8c2a) {
          if (iVar6 < 0x8513) {
            if (iVar6 == 0xde1) {
              lVar12 = 1;
            }
            else {
              if (iVar6 != 0x806f) goto LAB_109244b90;
              lVar12 = 4;
            }
          }
          else if (iVar6 == 0x8513) {
            lVar12 = 6;
          }
          else {
            if (iVar6 != 0x8c1a) goto LAB_109244b90;
            lVar12 = 5;
          }
        }
        else if (iVar6 < 0x9100) {
          if (iVar6 == 0x8c2a) {
            lVar12 = 8;
          }
          else {
            if (iVar6 != 0x9009) goto LAB_109244b90;
            lVar12 = 7;
          }
        }
        else if (iVar6 == 0x9102) {
          lVar12 = 3;
        }
        else {
          if (iVar6 != 0x9100) goto LAB_109244b90;
          lVar12 = 2;
        }
        lVar10 = *(long *)(lStack_168 + 0x138) +
                 (ulong)(*(int *)(lStack_168 + 0x150) - 0x84c0) * 0x24;
        if (*(int *)(lVar10 + lVar12 * 4) != *(int *)(lVar3 + 0xac)) {
          *(int *)(lVar10 + lVar12 * 4) = *(int *)(lVar3 + 0xac);
          goto LAB_109244b90;
        }
      }
      plStack_370 = &lStack_170;
      puStack_378 = puVar1;
      plStack_368 = &lStack_168;
      if ((iVar13 == 1) && ((int)puVar16[7] < 1)) {
        _glCopyTexSubImage2D();
      }
      else {
        (**(code **)(puVar7 + 0x1288))
                  (*(undefined4 *)(lStack_170 + 0xb0),puVar16[4],puVar16[5],puVar16[6],
                   iVar17 + puVar16[7],puVar16[1],puVar16[2],puVar16[8],puVar16[9]);
      }
      FUN_109245070(&puStack_378);
      func_0x000109245194(&ppuStack_360);
      iVar17 = iVar17 + 1;
    } while (iVar13 != iVar17);
    uVar9 = (ulong)*(uint *)(plVar8 + 0x2e);
  }
  uVar11 = uVar11 + 1;
  if (uVar9 <= uVar11) {
    return;
  }
  goto LAB_1092449d4;
}



/* Entry: 10924497c; end: 109244c6b;  */

void FUN_10924497c(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  long lStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long lStack_268;
  undefined4 *puStack_260;
  long *plStack_258;
  undefined1 auStack_250 [444];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  lVar2 = *param_2;
  lStack_80 = param_2[1];
  uVar5 = (ulong)*(uint *)(param_2 + 0x2e);
  if (*(uint *)(param_2 + 0x2e) != 0) {
    uVar7 = 0;
    lVar1 = param_1 + 0x930;
    lStack_78 = param_3;
    alStack_70[0] = param_1;
    do {
      puVar10 = (undefined4 *)((long)param_2 + uVar7 * 0x2c + 0x10);
      uStack_90 = *puVar10;
      uStack_8c = 1;
      iVar9 = *(int *)(lVar2 + 0xb0);
      if ((iVar9 == 0x806f || iVar9 == 0x8c1a) || iVar9 == 0x8513) {
        iVar9 = puVar10[10];
        if (iVar9 != 0) goto LAB_109244a18;
      }
      else {
        iVar9 = 1;
LAB_109244a18:
        iVar11 = 0;
        do {
          iStack_88 = iVar11 + puVar10[3];
          uStack_84 = 1;
          uStack_94 = 0x8d40;
          FUN_109287a7c(auStack_250,lStack_78,&uStack_90,lVar2,0);
          FUN_1092536b0(lStack_78,uStack_94,auStack_250);
          (**(code **)(param_1 + 0x1088))(0x8ce0);
          (**(code **)(param_1 + 0x1080))(0,0);
          lVar4 = lStack_80;
          plStack_270 = alStack_70;
          puStack_260 = &uStack_94;
          iVar3 = *(int *)(lStack_80 + 0xb0);
          lStack_268 = lVar1;
          plStack_258 = &lStack_78;
          FUN_10926dea0(lStack_80,lStack_78);
          if ((lStack_78 == 0) || (*(int *)(lStack_78 + 0x150) == -1)) {
LAB_109244b90:
            _glBindTexture(iVar3);
          }
          else {
            if (iVar3 < 0x8c2a) {
              if (iVar3 < 0x8513) {
                if (iVar3 == 0xde1) {
                  lVar8 = 1;
                }
                else {
                  if (iVar3 != 0x806f) goto LAB_109244b90;
                  lVar8 = 4;
                }
              }
              else if (iVar3 == 0x8513) {
                lVar8 = 6;
              }
              else {
                if (iVar3 != 0x8c1a) goto LAB_109244b90;
                lVar8 = 5;
              }
            }
            else if (iVar3 < 0x9100) {
              if (iVar3 == 0x8c2a) {
                lVar8 = 8;
              }
              else {
                if (iVar3 != 0x9009) goto LAB_109244b90;
                lVar8 = 7;
              }
            }
            else if (iVar3 == 0x9102) {
              lVar8 = 3;
            }
            else {
              if (iVar3 != 0x9100) goto LAB_109244b90;
              lVar8 = 2;
            }
            lVar6 = *(long *)(lStack_78 + 0x138) +
                    (ulong)(*(int *)(lStack_78 + 0x150) - 0x84c0) * 0x24;
            if (*(int *)(lVar6 + lVar8 * 4) != *(int *)(lVar4 + 0xac)) {
              *(int *)(lVar6 + lVar8 * 4) = *(int *)(lVar4 + 0xac);
              goto LAB_109244b90;
            }
          }
          plStack_280 = &lStack_80;
          lStack_288 = lVar1;
          plStack_278 = &lStack_78;
          if ((iVar9 == 1) && ((int)puVar10[7] < 1)) {
            _glCopyTexSubImage2D();
          }
          else {
            (**(code **)(param_1 + 0x1288))
                      (*(undefined4 *)(lStack_80 + 0xb0),puVar10[4],puVar10[5],puVar10[6],
                       iVar11 + puVar10[7],puVar10[1],puVar10[2],puVar10[8],puVar10[9]);
          }
          FUN_109245070(&lStack_288);
          func_0x000109245194(&plStack_270);
          iVar11 = iVar11 + 1;
        } while (iVar9 != iVar11);
        uVar5 = (ulong)*(uint *)(param_2 + 0x2e);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return;
}



/* Entry: 109244c6c; end: 109244ee7;  */

void FUN_109244c6c(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x30) == 1) {
    return;
  }
  iVar2 = *(int *)(lVar7 + 0xb0);
  FUN_10926dea0(lVar7,*(undefined8 *)(param_1 + 0x18));
  lVar5 = *(long *)(param_1 + 0x18);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x150) == -1)) {
LAB_109244d98:
    _glBindTexture(iVar2);
  }
  else {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x8513) {
        if (iVar2 == 0xde1) {
          lVar6 = 1;
        }
        else {
          if (iVar2 != 0x806f) goto LAB_109244d98;
          lVar6 = 4;
        }
      }
      else if (iVar2 == 0x8513) {
        lVar6 = 6;
      }
      else {
        if (iVar2 != 0x8c1a) goto LAB_109244d98;
        lVar6 = 5;
      }
    }
    else if (iVar2 < 0x9100) {
      if (iVar2 == 0x8c2a) {
        lVar6 = 8;
      }
      else {
        if (iVar2 != 0x9009) goto LAB_109244d98;
        lVar6 = 7;
      }
    }
    else if (iVar2 == 0x9102) {
      lVar6 = 3;
    }
    else {
      if (iVar2 != 0x9100) goto LAB_109244d98;
      lVar6 = 2;
    }
    lVar5 = *(long *)(lVar5 + 0x138) + (ulong)(*(int *)(lVar5 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar5 + lVar6 * 4) != *(int *)(lVar7 + 0xac)) {
      *(int *)(lVar5 + lVar6 * 4) = *(int *)(lVar7 + 0xac);
      goto LAB_109244d98;
    }
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x938))(0x8192,0x1102);
  _glGenerateMipmap(iVar2);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x150) != -1)) {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x8513) {
        if (iVar2 == 0xde1) {
          lVar6 = 1;
        }
        else {
          if (iVar2 != 0x806f) goto LAB_109244eac;
          lVar6 = 4;
        }
      }
      else if (iVar2 == 0x8513) {
        lVar6 = 6;
      }
      else {
        if (iVar2 != 0x8c1a) goto LAB_109244eac;
        lVar6 = 5;
      }
    }
    else if (iVar2 < 0x9100) {
      if (iVar2 == 0x8c2a) {
        lVar6 = 8;
      }
      else {
        if (iVar2 != 0x9009) goto LAB_109244eac;
        lVar6 = 7;
      }
    }
    else if (iVar2 == 0x9102) {
      lVar6 = 3;
    }
    else {
      if (iVar2 != 0x9100) goto LAB_109244eac;
      lVar6 = 2;
    }
    lVar5 = *(long *)(lVar5 + 0x138) + (ulong)(*(int *)(lVar5 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar5 + lVar6 * 4) == 0) goto LAB_109244eb8;
    *(undefined4 *)(lVar5 + lVar6 * 4) = 0;
  }
LAB_109244eac:
  _glBindTexture(iVar2,0);
LAB_109244eb8:
  plVar1 = (long *)(*(long *)(lVar7 + 0x18) + 0x1310);
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(long *)(lVar7 + 0xb8) = lVar5;
  return;
}



/* Entry: 109244ee8; end: 109244fe7;  */

undefined8 * FUN_109244ee8(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(*(long *)*param_1 + 0x914) == 1) {
    lVar1 = *(long *)param_1[2];
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x108) == 0) {
        return param_1;
      }
      *(undefined4 *)(lVar1 + 0x108) = 0;
    }
    _glBindFramebuffer(0x8ca8,0);
  }
  return param_1;
}



/* Entry: 109244fe8; end: 109245037;  */

void FUN_109244fe8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109245038();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae46a8,FUN_109245058);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *puVar2 = &PTR_FUN_110ae46d0;
  return;
}



/* Entry: 109245038; end: 109245057;  */

void FUN_109245038(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_FUN_110ae46d0;
  return;
}



/* Entry: 109245058; end: 10924505b;  */

void FUN_109245058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10924505c; end: 10924506f;  */

void FUN_10924505c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109245070; end: 109245277;  */

long FUN_109245070(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(**(long **)(param_1 + 8) + 0xb0);
  lVar2 = **(long **)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x150) != -1)) {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x8513) {
        if (iVar1 == 0xde1) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 0x806f) goto LAB_10924517c;
          lVar3 = 4;
        }
      }
      else if (iVar1 == 0x8513) {
        lVar3 = 6;
      }
      else {
        if (iVar1 != 0x8c1a) goto LAB_10924517c;
        lVar3 = 5;
      }
    }
    else if (iVar1 < 0x9100) {
      if (iVar1 == 0x8c2a) {
        lVar3 = 8;
      }
      else {
        if (iVar1 != 0x9009) goto LAB_10924517c;
        lVar3 = 7;
      }
    }
    else if (iVar1 == 0x9102) {
      lVar3 = 3;
    }
    else {
      if (iVar1 != 0x9100) goto LAB_10924517c;
      lVar3 = 2;
    }
    lVar2 = *(long *)(lVar2 + 0x138) + (ulong)(*(int *)(lVar2 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar2 + lVar3 * 4) == 0) {
      return param_1;
    }
    *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
  }
LAB_10924517c:
  _glBindTexture(iVar1,0);
  return param_1;
}



/* Entry: 109245278; end: 1092452ff;  */

void FUN_109245278(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *param_2;
  lVar7 = param_2[1];
  lVar5 = param_2[1];
  FUN_109246bc4();
  FUN_1092460e0(*(undefined8 *)(param_1 + 0x40),0x1a,1,1);
  *(long *)(param_1 + 0x58) = lVar6;
  *(long *)(param_1 + 0x60) = lVar7;
  if (lVar6 == 0 || (int)lVar5 == -1) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x22,0x10,8);
  *plVar3 = lVar6;
  *(int *)(plVar3 + 1) = (int)lVar5;
  *(undefined1 *)((long)plVar3 + 0xc) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != lVar6)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109245300; end: 109245423;  */

/* WARNING: Possible PIC construction at 0x0001092453d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001092453d4) */
/* WARNING: Removing unreachable block (ram,0x000109245400) */

void FUN_109245300(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  uVar8 = 0;
  plVar7 = *(long **)(param_1 + 0x40);
  lStack_68 = param_1;
  do {
    plVar4 = plVar7;
    FUN_1092460e0(plVar7,0x1b,0xd8,8);
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)(plVar4 + 0x1a) = 0;
      plVar4[0x17] = 0;
      plVar4[0x16] = 0;
      plVar4[0x19] = 0;
      plVar4[0x18] = 0;
      plVar4[0x13] = 0;
      plVar4[0x12] = 0;
      plVar4[0x15] = 0;
      plVar4[0x14] = 0;
      plVar4[0xf] = 0;
      plVar4[0xe] = 0;
      plVar4[0x11] = 0;
      plVar4[0x10] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
      plVar4[0xd] = 0;
      plVar4[0xc] = 0;
      plVar4[7] = 0;
      plVar4[6] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      plVar4[5] = 0;
      plVar4[4] = 0;
    }
    uVar3 = param_5 - uVar8;
    if (7 < uVar3) {
      uVar3 = 8;
    }
    *plVar4 = param_2;
    plVar4[1] = param_3;
    if (param_5 != uVar8) {
      _memmove(plVar4 + 2,param_4 + uVar8 * 0x18,uVar3 * 0x18);
    }
    *(int *)(plVar4 + 0x1a) = (int)uVar3;
    uVar8 = uVar3 + uVar8;
  } while (uVar8 < param_5);
  puVar5 = *(undefined8 **)(lStack_68 + 0x50);
  if (*(int *)(puVar5 + 4) == 0) {
    lStack_90 = lStack_68;
    uStack_78 = 0x1092453d4;
    if ((puVar5[1] == puVar5[2]) || (*(long *)(puVar5[2] + -0x10) != param_2)) {
      lStack_88 = param_3;
      puStack_80 = &stack0xfffffffffffffff0;
      FUN_10922d97c(&lStack_a0,*puVar5);
      if (lStack_a0 != 0) {
        FUN_10925df7c(puVar5 + 1,&lStack_a0);
      }
      if (plStack_98 != (long *)0x0) {
        plVar7 = plStack_98 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 109245424; end: 1092455c7;  */

void FUN_109245424(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lStack_68;
  
  if ((param_3 != 0) && (lVar5 = *(long *)(param_3 + 0x88), lVar5 != 0)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    plVar7 = (long *)*plVar3;
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (plVar7 == plVar1) {
LAB_109245490:
      if (plVar7 != plVar1) goto LAB_1092454a4;
    }
    else {
      do {
        if (*plVar7 == lVar5) goto LAB_109245490;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    lStack_68 = lVar5;
    FUN_109245a44(plVar3,&lStack_68);
  }
LAB_1092454a4:
  uVar9 = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  do {
    puVar4 = puVar8;
    FUN_1092460e0(puVar8,0x1c,0x1d8,8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4 + 4;
      puVar4[5] = 0;
      *puVar6 = 0;
      puVar4[0x37] = 0;
      puVar4[0x36] = 0;
      puVar4[0x39] = 0;
      puVar4[0x38] = 0;
      puVar4[0x33] = 0;
      puVar4[0x32] = 0;
      puVar4[0x35] = 0;
      puVar4[0x34] = 0;
      puVar4[0x2f] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x31] = 0;
      puVar4[0x30] = 0;
      puVar4[0x2b] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x2d] = 0;
      puVar4[0x2c] = 0;
      puVar4[0x27] = 0;
      puVar4[0x26] = 0;
      puVar4[0x29] = 0;
      puVar4[0x28] = 0;
      puVar4[0x23] = 0;
      puVar4[0x22] = 0;
      puVar4[0x25] = 0;
      puVar4[0x24] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x21] = 0;
      puVar4[0x20] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x17] = 0;
      puVar4[0x16] = 0;
      puVar4[0x19] = 0;
      puVar4[0x18] = 0;
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[0x15] = 0;
      puVar4[0x14] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      lVar5 = 0x1c0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      do {
        puVar6[-2] = 0;
        *(undefined4 *)(puVar6 + -1) = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 4) = 0;
        puVar6 = puVar6 + 7;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      *(undefined4 *)(puVar4 + 0x3a) = 0;
    }
    uVar2 = param_5 - uVar9;
    if (7 < uVar2) {
      uVar2 = 8;
    }
    *puVar4 = param_2;
    puVar4[1] = param_3;
    if (param_5 != uVar9) {
      _memmove(puVar4 + 2,param_4 + uVar9 * 0x38,uVar2 * 0x38 + -4);
    }
    *(int *)(puVar4 + 0x3a) = (int)uVar2;
    uVar9 = uVar2 + uVar9;
  } while (uVar9 < param_5);
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
    func_0x000109fccc60(*(long *)(param_1 + 0x50),param_2);
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
      func_0x000109fccc60(*(long *)(param_1 + 0x50),param_3);
    }
  }
  return;
}



/* Entry: 1092455c8; end: 10924572f;  */

void FUN_1092455c8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_68;
  
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x88), lVar4 != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    plVar5 = (long *)*plVar2;
    plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (plVar5 == plVar3) {
LAB_109245634:
      if (plVar5 != plVar3) goto LAB_109245648;
    }
    else {
      do {
        if (*plVar5 == lVar4) goto LAB_109245634;
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
    }
    lStack_68 = lVar4;
    FUN_109245a44(plVar2,&lStack_68);
  }
LAB_109245648:
  uVar6 = 0;
  plVar5 = *(long **)(param_1 + 0x40);
  do {
    plVar3 = plVar5;
    FUN_1092460e0(plVar5,0x1d,0x1d8,8);
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 4;
      lVar4 = 0x1c0;
      do {
        plVar2[-2] = 0;
        *(undefined4 *)(plVar2 + -1) = 0;
        plVar2[1] = 0;
        *plVar2 = 0;
        plVar2[3] = 0;
        plVar2[2] = 0;
        *(undefined4 *)(plVar2 + 4) = 0;
        plVar2 = plVar2 + 7;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
      *(undefined4 *)(plVar3 + 0x3a) = 0;
    }
    uVar1 = param_5 - uVar6;
    if (7 < uVar1) {
      uVar1 = 8;
    }
    *plVar3 = param_2;
    plVar3[1] = param_3;
    if (param_5 != uVar6) {
      _memmove(plVar3 + 2,param_4 + uVar6 * 0x38,uVar1 * 0x38 + -4);
    }
    *(int *)(plVar3 + 0x3a) = (int)uVar1;
    uVar6 = uVar1 + uVar6;
  } while (uVar6 < param_5);
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
    func_0x000109fccc60(*(long *)(param_1 + 0x50),param_2);
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
      func_0x000109fccc60(*(long *)(param_1 + 0x50),param_3);
    }
  }
  return;
}



/* Entry: 109245730; end: 1092458f3;  */

void FUN_109245730(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_68;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x88), lVar4 != 0)) {
    plVar5 = *(long **)(lVar2 + 0xb0);
    plVar3 = *(long **)(lVar2 + 0xb8);
    if (plVar5 == plVar3) {
LAB_1092457a0:
      if (plVar5 != plVar3) goto LAB_1092457bc;
    }
    else {
      do {
        if (*plVar5 == lVar4) goto LAB_1092457a0;
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
    }
    lStack_68 = lVar4;
    FUN_109245a44((long *)(lVar2 + 0xb0),&lStack_68);
    lVar2 = *(long *)(param_1 + 0x38);
  }
LAB_1092457bc:
  if ((param_3 != 0) && (lVar4 = *(long *)(param_3 + 0x88), lVar4 != 0)) {
    plVar5 = *(long **)(lVar2 + 0xb0);
    plVar3 = *(long **)(lVar2 + 0xb8);
    if (plVar5 == plVar3) {
LAB_1092457f0:
      if (plVar5 != plVar3) goto LAB_109245804;
    }
    else {
      do {
        if (*plVar5 == lVar4) goto LAB_1092457f0;
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
    }
    lStack_68 = lVar4;
    FUN_109245a44((long *)(lVar2 + 0xb0),&lStack_68);
  }
LAB_109245804:
  uVar6 = 0;
  plVar5 = *(long **)(param_1 + 0x40);
  do {
    plVar3 = plVar5;
    FUN_1092460e0(plVar5,0x1e,0x178,8);
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(plVar3 + 0x2e) = 0;
      plVar3[0x2b] = 0;
      plVar3[0x2a] = 0;
      plVar3[0x2d] = 0;
      plVar3[0x2c] = 0;
      plVar3[0x27] = 0;
      plVar3[0x26] = 0;
      plVar3[0x29] = 0;
      plVar3[0x28] = 0;
      plVar3[0x23] = 0;
      plVar3[0x22] = 0;
      plVar3[0x25] = 0;
      plVar3[0x24] = 0;
      plVar3[0x1f] = 0;
      plVar3[0x1e] = 0;
      plVar3[0x21] = 0;
      plVar3[0x20] = 0;
      plVar3[0x1b] = 0;
      plVar3[0x1a] = 0;
      plVar3[0x1d] = 0;
      plVar3[0x1c] = 0;
      plVar3[0x17] = 0;
      plVar3[0x16] = 0;
      plVar3[0x19] = 0;
      plVar3[0x18] = 0;
      plVar3[0x13] = 0;
      plVar3[0x12] = 0;
      plVar3[0x15] = 0;
      plVar3[0x14] = 0;
      plVar3[0xf] = 0;
      plVar3[0xe] = 0;
      plVar3[0x11] = 0;
      plVar3[0x10] = 0;
      plVar3[0xb] = 0;
      plVar3[10] = 0;
      plVar3[0xd] = 0;
      plVar3[0xc] = 0;
      plVar3[7] = 0;
      plVar3[6] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
      plVar3[3] = 0;
      plVar3[2] = 0;
      plVar3[5] = 0;
      plVar3[4] = 0;
    }
    uVar1 = param_5 - uVar6;
    if (7 < uVar1) {
      uVar1 = 8;
    }
    *plVar3 = param_2;
    plVar3[1] = param_3;
    if (param_5 != uVar6) {
      _memmove(plVar3 + 2,param_4 + uVar6 * 0x2c,uVar1 * 0x2c);
    }
    *(int *)(plVar3 + 0x2e) = (int)uVar1;
    uVar6 = uVar1 + uVar6;
  } while (uVar6 < param_5);
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
    func_0x000109fccc60(*(long *)(param_1 + 0x50),param_2);
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
      func_0x000109fccc60(*(long *)(param_1 + 0x50),param_3);
    }
  }
  return;
}



/* Entry: 1092458f4; end: 109245997;  */

void FUN_1092458f4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_28;
  
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 0x88), lVar4 != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    plVar3 = (long *)*plVar2;
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (plVar3 == plVar1) {
LAB_109245944:
      if (plVar3 != plVar1) goto LAB_109245958;
    }
    else {
      do {
        if (*plVar3 == lVar4) goto LAB_109245944;
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    lStack_28 = lVar4;
    FUN_109245a44(plVar2,&lStack_28);
  }
LAB_109245958:
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x1f,8,8);
  *plVar3 = param_2;
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
    func_0x000109fccc60(*(long *)(param_1 + 0x50),param_2);
  }
  return;
}



/* Entry: 109245998; end: 109245a2b;  */

void FUN_109245998(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_109246c10(param_1,param_1 + 0x58,0);
  lVar2 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x94) = 0;
  puVar1 = *(undefined4 **)(lVar2 + 8);
  uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  while (uVar3 < 0x15) {
    func_0x000109246168(lVar2,0x15);
    puVar1 = *(undefined4 **)(lVar2 + 8);
    uVar3 = *(long *)(lVar2 + 0x10) - (long)puVar1;
  }
  *puVar1 = 0x20;
  *(ulong *)(lVar2 + 8) = (ulong)(puVar1 + 2) & 0xfffffffffffffffc;
  return;
}



/* Entry: 109245a2c; end: 109245a43;  */

void FUN_109245a2c(long param_1)

{
  if (*(long *)(param_1 + -0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 109245a44; end: 109245b07;  */

long * FUN_109245a44(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar11 = puVar3 + 1;
    *puVar3 = *param_2;
    plVar5 = param_1;
LAB_109245af0:
    param_1[1] = (long)puVar11;
    return plVar5;
  }
  lVar10 = (long)puVar3 - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10922d724();
    puVar3 = (undefined8 *)((long)plVar4 + lVar10);
    puVar11 = puVar3 + 1;
    *puVar3 = *param_2;
    lVar10 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar5 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar4 + uVar9);
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_109245af0;
  }
  FUN_10922d710();
  param_1[2] = 0;
  param_1[3] = (long)param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *param_1 = (long)&PTR_DAT_110b97998;
  param_1[1] = 0;
  lVar10 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = lVar10;
  *param_1 = (long)&PTR_DAT_110ae52f0;
  param_1[7] = (long)param_2;
  param_1[8] = (long)(param_2 + 0x126);
  param_1[9] = (long)(param_2 + 0x102);
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = *(uint *)(param_3 + 1);
  uVar7 = *(uint *)((long)param_3 + 0xc);
  if ((uVar2 & 3) != 0) {
    if ((uVar7 & 1) != 0) goto LAB_109245c08;
    goto LAB_109245b88;
  }
  if ((uVar2 >> 8 & 1) != 0) goto LAB_109245c08;
  if ((uVar2 >> 3 & 1) == 0) {
    if ((uVar2 >> 2 & 1) == 0) {
      if ((uVar2 >> 6 & 1) == 0) {
        if (((uVar2 >> 7 & 1) == 0) && ((uVar2 >> 5 & 1) == 0)) {
          if ((uVar2 >> 4 & 1) == 0) goto LAB_109245b90;
          goto joined_r0x000109245bfc;
        }
      }
      else if ((*(uint *)(param_2 + 0x125) & 1) == 0) goto LAB_109245b90;
LAB_109245b88:
      uVar7 = (uint)*(byte *)((long)param_2 + 0x969);
    }
    else {
      if ((*(char *)((long)param_2 + 0x95c) != '\x01') || ((uVar7 & 1) != 0)) {
        if (*(char *)((long)param_2 + 0x95c) != '\0') goto LAB_109245c08;
        goto LAB_109245b90;
      }
      if (*(char *)((long)param_2 + 0x96a) != '\x01') goto LAB_109245b90;
      uVar7 = uVar7 >> 1;
    }
  }
  else {
    uVar7 = (uint)*(byte *)((long)param_2 + 0x95d);
  }
joined_r0x000109245bfc:
  if ((uVar7 & 1) == 0) {
LAB_109245b90:
    uVar6 = 0x30;
    __Znwm(0x30);
    FUN_10925ba10();
    FUN_109245e6c(param_1 + 10,uVar6);
    return param_1;
  }
LAB_109245c08:
  uVar6 = 0x68;
  __Znwm(0x68);
  FUN_10925bc54();
  FUN_109246030(param_1 + 0xb,uVar6);
  return param_1;
}



/* Entry: 109245b08; end: 109245ca3;  */

undefined8 * FUN_109245b08(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *param_1 = &PTR_DAT_110b97998;
  param_1[1] = 0;
  uVar2 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar2;
  *param_1 = &PTR_DAT_110ae52f0;
  param_1[7] = param_2;
  param_1[8] = param_2 + 0x930;
  param_1[9] = param_2 + 0x810;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = *(uint *)(param_3 + 1);
  uVar3 = *(uint *)((long)param_3 + 0xc);
  if ((uVar1 & 3) != 0) {
    if ((uVar3 & 1) != 0) goto LAB_109245c08;
    goto LAB_109245b88;
  }
  if ((uVar1 >> 8 & 1) != 0) goto LAB_109245c08;
  if ((uVar1 >> 3 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      if ((uVar1 >> 6 & 1) == 0) {
        if (((uVar1 >> 7 & 1) == 0) && ((uVar1 >> 5 & 1) == 0)) {
          if ((uVar1 >> 4 & 1) == 0) goto LAB_109245b90;
          goto joined_r0x000109245bfc;
        }
      }
      else if ((*(uint *)(param_2 + 0x928) & 1) == 0) goto LAB_109245b90;
LAB_109245b88:
      uVar3 = (uint)*(byte *)(param_2 + 0x969);
    }
    else {
      if ((*(char *)(param_2 + 0x95c) != '\x01') || ((uVar3 & 1) != 0)) {
        if (*(char *)(param_2 + 0x95c) != '\0') goto LAB_109245c08;
        goto LAB_109245b90;
      }
      if (*(char *)(param_2 + 0x96a) != '\x01') goto LAB_109245b90;
      uVar3 = uVar3 >> 1;
    }
  }
  else {
    uVar3 = (uint)*(byte *)(param_2 + 0x95d);
  }
joined_r0x000109245bfc:
  if ((uVar3 & 1) == 0) {
LAB_109245b90:
    uVar2 = 0x30;
    __Znwm(0x30);
    FUN_10925ba10();
    FUN_109245e6c(param_1 + 10,uVar2);
    return param_1;
  }
LAB_109245c08:
  uVar2 = 0x68;
  __Znwm(0x68);
  FUN_10925bc54();
  FUN_109246030(param_1 + 0xb,uVar2);
  return param_1;
}



/* Entry: 109245ca4; end: 109245d9b;  */

undefined8 * FUN_109245ca4(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *param_1 = &PTR_DAT_110b97998;
  param_1[1] = 0;
  lVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = lVar5;
  *param_1 = &PTR_DAT_110ae52f0;
  param_1[7] = param_2;
  param_1[8] = param_2 + 0x930;
  param_1[9] = param_2 + 0x810;
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar4 = (long *)0x30;
  __Znwm();
  *plVar4 = param_2 + 0x810;
  *(undefined4 *)(plVar4 + 1) = 0;
  lVar5 = param_4[1];
  lVar6 = *param_4;
  plVar4[3] = param_4[1];
  plVar4[2] = lVar6;
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
  lVar5 = *param_3;
  plVar4[5] = param_3[1];
  plVar4[4] = lVar5;
  FUN_109245e6c(param_1 + 10);
  return param_1;
}



/* Entry: 109245d9c; end: 109245e6b;  */

undefined4 FUN_109245d9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = (long *)(param_1 + 0x58);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10);
    uVar1 = 0x68;
    __Znwm(0x68);
    FUN_10925bc54();
    FUN_109246030(plVar2,uVar1);
    FUN_109245e6c((long *)(param_1 + 0x50),0);
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      return 0;
    }
  }
  uStack_50 = *(undefined8 *)(lVar3 + 0x50);
  uStack_48 = *(undefined8 *)(lVar3 + 0x18);
  FUN_10925bdc8(lVar3,param_2,&uStack_50);
  return *(undefined4 *)(lVar3 + 0x2c);
}



/* Entry: 109245e6c; end: 109245ea7;  */

void FUN_109245e6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010925bb28(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109245ea8; end: 109245f27;  */

void FUN_109245ea8(long param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (*(long *)(*(long *)(param_1 + 0x50) + 0x10) + (param_2 & 0xffffffff),*param_3,
               param_3[1]);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    return;
  }
  lStack_40 = *(long *)(lVar3 + 0x50);
  plStack_38 = *(long **)(lVar3 + 0x18);
  lStack_48 = param_4;
  FUN_10925bdc8(lVar3,param_4,&lStack_40);
  iVar1 = *(int *)(lVar3 + 0x28);
  if (param_4 == 0) {
LAB_10925c574:
    _glBindBuffer();
  }
  else {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar4 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925c574;
          lVar4 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar4 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925c574;
        lVar4 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar4 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925c574;
        lVar4 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar4 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar4 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925c574;
      lVar4 = 5;
    }
    if (*(int *)(param_4 + 0x110 + lVar4 * 4) != *(int *)(lVar3 + 0x2c)) {
      *(int *)(param_4 + 0x110 + lVar4 * 4) = *(int *)(lVar3 + 0x2c);
      goto LAB_10925c574;
    }
  }
  plStack_38 = &lStack_48;
  lVar4 = param_3[1];
  lStack_40 = lVar3;
  if ((param_2 == 0) && ((*(byte *)(lVar3 + 0x31) & 1) == 0)) {
    uVar2 = *(undefined4 *)(lVar3 + 0x28);
    if (*(long *)(lVar3 + 0x18) == lVar4) {
      if ((*(uint *)(lVar3 + 0x20) >> 6 & 1) == 0) {
        if ((*(uint *)(lVar3 + 0x20) >> 7 & 1) == 0) {
          uVar5 = 0x88e8;
          if ((*(byte *)(lVar3 + 0x24) & 1) != 0) {
            uVar5 = 0x88e4;
          }
        }
        else {
          uVar5 = 0x88e1;
        }
      }
      else {
        uVar5 = 0x88e0;
      }
      _glBufferData(uVar2,lVar4,*param_3,uVar5);
      goto LAB_10925c5f4;
    }
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x28);
  }
  _glBufferSubData(uVar2,param_2,lVar4,*param_3);
LAB_10925c5f4:
  FUN_10925c628(&lStack_40);
  return;
}



/* Entry: 109245f28; end: 109245f3b;  */

void FUN_109245f28(void)

{
  FUN_109245fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109245f3c; end: 109245fe3;  */

/* WARNING: Removing unreachable block (ram,0x00010925ca80) */
/* WARNING: Removing unreachable block (ram,0x00010925cac4) */
/* WARNING: Removing unreachable block (ram,0x00010925caf0) */
/* WARNING: Removing unreachable block (ram,0x00010925cb38) */
/* WARNING: Removing unreachable block (ram,0x00010925cafc) */
/* WARNING: Removing unreachable block (ram,0x00010925cb08) */
/* WARNING: Removing unreachable block (ram,0x00010925cad0) */
/* WARNING: Removing unreachable block (ram,0x00010925cb30) */
/* WARNING: Removing unreachable block (ram,0x00010925cadc) */
/* WARNING: Removing unreachable block (ram,0x00010925cae8) */
/* WARNING: Removing unreachable block (ram,0x00010925ca8c) */
/* WARNING: Removing unreachable block (ram,0x00010925cb10) */
/* WARNING: Removing unreachable block (ram,0x00010925cb48) */
/* WARNING: Removing unreachable block (ram,0x00010925cb1c) */
/* WARNING: Removing unreachable block (ram,0x00010925cb28) */
/* WARNING: Removing unreachable block (ram,0x00010925ca98) */
/* WARNING: Removing unreachable block (ram,0x00010925cb40) */
/* WARNING: Removing unreachable block (ram,0x00010925caa4) */
/* WARNING: Removing unreachable block (ram,0x00010925cb50) */
/* WARNING: Removing unreachable block (ram,0x00010925cab0) */
/* WARNING: Removing unreachable block (ram,0x00010925cabc) */
/* WARNING: Removing unreachable block (ram,0x00010925cb54) */
/* WARNING: Removing unreachable block (ram,0x00010925cb64) */

ulong FUN_109245f3c(long param_1,uint param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(long *)(*(long *)(param_1 + 0x50) + 0x10) + param_3;
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
    return 0;
  }
  lStack_50 = *(long *)(lVar2 + 0x50);
  puStack_48 = *(undefined8 **)(lVar2 + 0x18);
  uStack_58 = 0;
  FUN_10925bdc8(lVar2,0,&lStack_50);
  if (param_4 == 0) {
    param_4 = *(long *)(lVar2 + 0x18) - param_3;
  }
  _glBindBuffer();
  puStack_48 = &uStack_58;
  lStack_50 = lVar2;
  if (*(char *)(*(long *)(lVar2 + 8) + 0x39) == '\x01') {
    if (*(char *)(lVar2 + 0x31) == '\x01') {
      if ((param_2 & 3) == 0) {
LAB_10925cc44:
        FUN_109243bf8(&UNK_10f561395);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10925cc54);
        (*pcVar1)();
      }
      uVar4 = 0x40;
      if ((param_2 & 2) != 0) {
        uVar4 = 0x50;
      }
      uVar4 = uVar4 | param_2 & 3;
      if ((*(byte *)(lVar2 + 0x24) & 4) != 0) {
        uVar4 = param_2 & 3 | 0xc0;
      }
    }
    else if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) == 0) goto LAB_10925cc44;
      uVar4 = 0x36;
      if ((*(uint *)(lVar2 + 0x24) & 4) != 0) {
        uVar4 = 0x26;
      }
    }
    else {
      uVar4 = param_2 & 3;
    }
    uVar3 = (ulong)*(uint *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 8) + 0x8a0))(uVar3,param_3,param_4,uVar4);
    *(bool *)(lVar2 + 0x30) = uVar3 != 0;
    if (uVar3 != 0) {
      *(long *)(lVar2 + 0x38) = param_3;
      *(long *)(lVar2 + 0x40) = param_4;
      *(uint *)(lVar2 + 0x48) = uVar4;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_10925cc70(&lStack_50);
  return uVar3;
}



/* Entry: 109245fe4; end: 10924602f;  */

undefined8 * FUN_109245fe4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae52f0;
  FUN_109246030(param_1 + 0xb,0);
  FUN_109245e6c(param_1 + 10,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109246030; end: 109246057;  */

void FUN_109246030(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10925c0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109246058; end: 1092460df;  */

undefined8 * FUN_109246058(undefined8 *param_1)

{
  ulong uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0x800;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x000107c27d58(param_1 + 4,0x800);
  uVar1 = param_1[4] + 3 & 0xfffffffffffffffc;
  param_1[1] = uVar1;
  param_1[2] = uVar1 + (param_1[5] - param_1[4]);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1092460e0; end: 1092461fb;  */

void FUN_1092460e0(long param_1,undefined4 param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  uVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (uVar2 < 0x14 || uVar2 - 0x14 < param_3) {
    do {
      func_0x000109246168(param_1,param_3 + 0x14);
      puVar1 = *(undefined4 **)(param_1 + 8);
      uVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
    } while (uVar2 < 0x14 || uVar2 - 0x14 < param_3);
  }
  *puVar1 = param_2;
  *(ulong *)(param_1 + 8) =
       ((long)puVar1 + param_4 + 3 & -param_4) + param_3 + 3 & 0xfffffffffffffffc;
  return;
}


