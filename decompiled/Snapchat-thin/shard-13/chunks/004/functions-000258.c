/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a502adc; end: 10a502bf7;  */

long * FUN_10a502adc(long *param_1)

{
  long lVar1;
  
  func_0x00010a502b14(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a502bf8; end: 10a502c1f;  */

void FUN_10a502bf8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a136de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a502c20; end: 10a502d4f;  */

void FUN_10a502c20(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar5 = (undefined8 *)0xc0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bb5518;
  uVar10 = *param_2;
  puVar5[4] = param_2[1];
  puVar5[3] = uVar10;
  *(undefined8 *)((long)puVar5 + 0x27) = *(undefined8 *)((long)param_2 + 0xf);
  FUN_10a502d50(puVar5 + 6,param_2 + 3);
  lVar6 = param_2[8];
  puVar5[0xb] = lVar6;
  if (lVar6 != 0) {
    lVar7 = 0;
    puVar8 = puVar5 + 0xc;
    do {
      puVar2 = param_2 + lVar7 * 2 + 9;
      lVar9 = puVar2[1];
      uVar10 = *puVar2;
      puVar8[1] = puVar2[1];
      *puVar8 = uVar10;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  lVar6 = param_2[0xd];
  puVar5[0x10] = lVar6;
  if (lVar6 != 0) {
    lVar7 = 0;
    puVar8 = puVar5 + 0x11;
    do {
      puVar2 = param_2 + lVar7 * 2 + 0xe;
      lVar9 = puVar2[1];
      uVar10 = *puVar2;
      puVar8[1] = puVar2[1];
      *puVar8 = uVar10;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  uVar10 = param_2[0x12];
  puVar5[0x16] = param_2[0x13];
  puVar5[0x15] = uVar10;
  *(undefined4 *)(puVar5 + 0x17) = *(undefined4 *)(param_2 + 0x14);
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a502d50; end: 10a502dc3;  */

undefined8 * FUN_10a502d50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a23b73c(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a502dc4(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a502dc4; end: 10a503003;  */

undefined1  [16] FUN_10a502dc4(long *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  long lVar13;
  undefined1 auVar14 [16];
  
  uVar12 = (ulong)*param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar9 * uVar11;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar12) {
          if ((int)plVar10[2] == *param_2) {
            uVar4 = 0;
            goto LAB_10a502fc8;
          }
        }
        else {
          if ((uVar11 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar11 <= uVar9) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar9 / uVar11;
            }
            uVar9 = uVar9 - uVar3 * uVar11;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x28;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar12;
  *(undefined4 *)(plVar10 + 2) = *param_3;
  lVar6 = *(long *)(param_3 + 4);
  lVar13 = *(long *)(param_3 + 2);
  plVar10[4] = *(long *)(param_3 + 4);
  plVar10[3] = lVar13;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar11) {
      uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar5 = uVar5 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    FUN_10a23b73c(param_1,uVar5);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar5 * uVar11;
      }
    }
  }
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar10 = *plVar7;
    *plVar7 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar7;
    if (*plVar10 == 0) goto LAB_10a502fb8;
    uVar12 = *(ulong *)(*plVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar12 = uVar12 & uVar11 - 1;
    }
    else if (uVar11 <= uVar12) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar12 / uVar11;
      }
      uVar12 = uVar12 - uVar5 * uVar11;
    }
    plVar7 = (long *)(*param_1 + uVar12 * 8);
  }
  else {
    *plVar10 = *plVar7;
  }
  *plVar7 = (long)plVar10;
LAB_10a502fb8:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a502fc8:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar10;
  return auVar14;
}



/* Entry: 10a503004; end: 10a5030d3;  */

void FUN_10a503004(ulong *param_1,ulong param_2)

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
  if (uVar7 > param_2 || param_2 == uVar7) {
    if (uVar7 <= param_2) {
      return;
    }
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
    if (uVar7 <= param_2) {
      return;
    }
  }
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
      if (param_2 - 1 == 0) {
        param_2 = 2;
      }
      else if ((param_2 & param_2 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar7 = param_1[1];
      if (param_2 <= uVar7) {
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
          if (param_2 < uVar7) goto LAB_10a503258;
        }
        return;
      }
LAB_10a503258:
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
          if (uVar7 == 0) {
            return;
          }
          if ((char)param_1[2] == '\x01') {
            func_0x00010a136de4(uVar7 + 0x70);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
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



/* Entry: 10a5030d4; end: 10a50320f;  */

void FUN_10a5030d4(ulong *param_1,ulong param_2)

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
      if (param_2 - 1 == 0) {
        param_2 = 2;
      }
      else if ((param_2 & param_2 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar1 = param_1[1];
      if (uVar1 < param_2) {
LAB_10a503258:
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
                func_0x00010a136de4(uVar1 + 0x70);
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
      if (param_2 < uVar1) {
        uVar2 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar1 < 3) || ((uVar1 & uVar1 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
        if (param_2 <= uVar2) {
          param_2 = uVar2;
        }
        if (param_2 < uVar1) goto LAB_10a503258;
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



/* Entry: 10a503210; end: 10a5032df;  */

void FUN_10a503210(ulong *param_1,ulong param_2)

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
LAB_10a503258:
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
            func_0x00010a136de4(uVar7 + 0x70);
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
    if (param_2 < uVar7) goto LAB_10a503258;
  }
  return;
}



/* Entry: 10a5032e0; end: 10a5034ab;  */

void FUN_10a5032e0(ulong *param_1,ulong param_2)

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
          func_0x00010a136de4(uVar1 + 0x70);
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



/* Entry: 10a5034ac; end: 10a50352f;  */

void FUN_10a5034ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a503530(param_1,param_4);
    lVar1 = param_1;
    FUN_10a503578(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a503530; end: 10a503577;  */

long * FUN_10a503530(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0x2aaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a4f01c0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 0xc);
    return plVar1;
  }
  FUN_10a4f01ac();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 0xc) {
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
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    lVar3 = param_2[6];
    lVar2 = param_2[5];
    lVar5 = param_2[8];
    lVar4 = param_2[7];
    lVar7 = param_2[10];
    lVar6 = param_2[9];
    param_4[0xb] = param_2[0xb];
    param_4[10] = lVar7;
    param_4[9] = lVar6;
    param_4[8] = lVar5;
    param_4[7] = lVar4;
    param_4[6] = lVar3;
    param_4[5] = lVar2;
    param_4 = plStack_58 + 0xc;
  }
  uStack_68 = 1;
  FUN_10a4f02dc(&plStack_80);
  return param_4;
}



/* Entry: 10a503578; end: 10a50365f;  */

undefined8 *
FUN_10a503578(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0xc) {
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
    param_4[4] = param_2[4];
    param_4[3] = uVar1;
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    uVar4 = param_2[8];
    uVar3 = param_2[7];
    uVar6 = param_2[10];
    uVar5 = param_2[9];
    param_4[0xb] = param_2[0xb];
    param_4[10] = uVar6;
    param_4[9] = uVar5;
    param_4[8] = uVar4;
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    param_4[5] = uVar1;
    param_4 = puStack_38 + 0xc;
  }
  uStack_48 = 1;
  FUN_10a4f02dc(&uStack_60);
  return param_4;
}



/* Entry: 10a503660; end: 10a50369f;  */

long * FUN_10a503660(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5036a0; end: 10a5036b3;  */

undefined1  [16] FUN_10a5036a0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000109ffded8();
  if (param_2 >> 0x39 == 0) {
    puVar3 = puVar2;
    FUN_10a50378c();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = puVar3 + param_2 * 0x10;
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar3;
    return auVar7;
  }
  FUN_10a503778();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar1;
    return auVar9;
  }
  func_0x000109ffded8();
  *puVar4 = 0;
  puVar4[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar4);
    puVar4[0x40] = 1;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 10a5036b4; end: 10a5036f7;  */

undefined1  [16] FUN_10a5036b4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000109ffded8();
  if (param_2 >> 0x39 == 0) {
    puVar3 = puVar2;
    FUN_10a50378c();
    *puVar2 = puVar3;
    puVar2[1] = puVar3;
    puVar2[2] = puVar3 + param_2 * 0x10;
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar3;
    return auVar7;
  }
  FUN_10a503778();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar1;
    return auVar9;
  }
  func_0x000109ffded8();
  *puVar4 = 0;
  puVar4[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar4);
    puVar4[0x40] = 1;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 10a5036f8; end: 10a50370b;  */

undefined1  [16] FUN_10a5036f8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  if (param_2 >> 0x39 == 0) {
    puVar3 = puVar1;
    FUN_10a50378c();
    *puVar1 = puVar3;
    puVar1[1] = puVar3;
    puVar1[2] = puVar3 + param_2 * 0x10;
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = puVar3;
    return auVar6;
  }
  FUN_10a503778();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x39 == 0) {
    lVar2 = param_2 << 7;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000109ffded8();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000109ffded8();
  *puVar4 = 0;
  puVar4[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar4);
    puVar4[0x40] = 1;
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 10a50370c; end: 10a503777;  */

undefined1  [16] FUN_10a50370c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  if (param_2 >> 0x39 == 0) {
    plVar2 = param_1;
    FUN_10a50378c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2 * 0x10);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  FUN_10a503778();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000109ffded8();
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  *puVar3 = 0;
  puVar3[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar3);
    puVar3[0x40] = 1;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 10a503778; end: 10a50378b;  */

undefined1  [16] FUN_10a503778(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar2[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar2);
    puVar2[0x40] = 1;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 10a50378c; end: 10a5037bf;  */

undefined1  [16] FUN_10a50378c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar2[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar2);
    puVar2[0x40] = 1;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 10a5037c0; end: 10a5037d3;  */

undefined1  [16] FUN_10a5037c0(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(puVar1);
    puVar1[0x40] = 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a5037d4; end: 10a503807;  */

undefined1  [16] FUN_10a5037d4(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(param_1);
    param_1[0x40] = 1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a503808; end: 10a50385f;  */

undefined1 * FUN_10a503808(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a503860(param_1);
    param_1[0x40] = 1;
  }
  return param_1;
}



/* Entry: 10a503860; end: 10a5038ef;  */

undefined8 * FUN_10a503860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a05151c();
  return param_1;
}



/* Entry: 10a5038f0; end: 10a503943;  */

void FUN_10a5038f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a503944; end: 10a5039c7;  */

long * FUN_10a503944(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a5039b0;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a5039b0:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a5039c8; end: 10a503a0f;  */

void FUN_10a5039c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a2936fc(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a503a10; end: 10a503a93;  */

void FUN_10a503a10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a503a94(param_1,param_4);
    lVar1 = param_1;
    FUN_10a503b34(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a503a94; end: 10a503adb;  */

undefined1  [16] FUN_10a503a94(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1;
    FUN_10a503af0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a503adc();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x333333333333334) {
    lVar2 = param_2 * 0x50;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar3 = param_2;
    FUN_10a503bb8(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a503adc; end: 10a503aef;  */

undefined1  [16] FUN_10a503adc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar2 = param_2;
    FUN_10a503bb8(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a503af0; end: 10a503b33;  */

undefined1  [16] FUN_10a503af0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    uVar2 = param_2;
    FUN_10a503bb8(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a503b34; end: 10a503bb7;  */

long FUN_10a503b34(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    FUN_10a503bb8(param_4,param_2);
    param_4 = param_4 + 0x50;
  }
  return param_4;
}



/* Entry: 10a503bb8; end: 10a503c9b;  */

undefined8 * FUN_10a503bb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 10a503c9c; end: 10a503d6f;  */

undefined8 * FUN_10a503c9c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_58 [2];
  char cStack_41;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = param_2[1];
  for (lVar7 = *param_2; lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
    FUN_10a503dd0(auStack_58,lVar7);
    FUN_10a503d70(param_1,auStack_58);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return param_1;
}



/* Entry: 10a503d70; end: 10a503dcf;  */

void FUN_10a503d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[3] = uVar2;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar1 = puVar1 + 5;
  }
  else {
    puVar1 = param_1;
    FUN_10a503eb8();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a503dd0; end: 10a503eb7;  */

void FUN_10a503dd0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[2] = param_2[2];
  }
  lVar5 = param_2[3];
  lVar2 = param_2[4];
  param_1[3] = lVar5;
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = param_2[3];
  }
  if (lVar5 != 0) {
    FUN_10a504168(auStack_48,&uStack_31);
    func_0x00010a504104(param_1 + 3,auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
  }
  return;
}



/* Entry: 10a503eb8; end: 10a503feb;  */

/* WARNING: Possible PIC construction at 0x00010a503f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a503f9c) */

void FUN_10a503eb8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * -0x3333333333333333 + 1;
  if (uVar5 < 0x666666666666667) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar6 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a504000();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + lVar7);
    plStack_40 = plVar2 + uVar6 * 5;
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puStack_50[2] = param_2[2];
    puStack_50[1] = uVar10;
    *puStack_50 = uVar9;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar9 = param_2[3];
    puStack_50[4] = param_2[4];
    puStack_50[3] = uVar9;
    param_2[3] = 0;
    param_2[4] = 0;
    unaff_x20 = puStack_50 + 5;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar9 = 0x10a503f9c;
    plStack_58 = plVar2;
    puStack_48 = unaff_x20;
  }
  else {
    FUN_10a503fec();
    func_0x00010a5040b8(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a503fec;
    ppuStack_70 = ppuVar8;
    FUN_109ffde64(&DAT_10f62a4d8);
    puVar1 = &stack0xffffffffffffff70;
    pcStack_78 = FUN_10a504000;
    ppuVar8 = &puStack_80;
    if (param_2 < (undefined8 *)0x666666666666667) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x28);
      return;
    }
    uVar9 = 0x10a504044;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  if (param_2 != param_3) {
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
    *(undefined8 *)(puVar1 + -8) = uVar9;
    puVar3 = param_2;
    do {
      uVar10 = puVar3[1];
      uVar9 = *puVar3;
      param_4[2] = puVar3[2];
      param_4[1] = uVar10;
      *param_4 = uVar9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar9 = puVar3[3];
      param_4[4] = puVar3[4];
      param_4[3] = uVar9;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar3 + 5;
      param_4 = param_4 + 5;
    } while (puVar3 != param_3);
    do {
      FUN_10a291594(param_2);
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a503fec; end: 10a503fff;  */

void FUN_10a503fec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 5;
        param_4 = param_4 + 5;
      } while (puVar1 != param_3);
      do {
        FUN_10a291594(param_2);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a504000; end: 10a504167;  */

void FUN_10a504000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 5;
        param_4 = param_4 + 5;
      } while (puVar1 != param_3);
      do {
        FUN_10a291594(param_2);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10a504168; end: 10a5041bf;  */

void FUN_10a504168(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd0;
  __Znwm();
  FUN_10a5041c0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a5041c0; end: 10a50420f;  */

undefined8 * FUN_10a5041c0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bef6c8;
  func_0x00010930ed5c(param_1 + 3,0,param_2);
  return param_1;
}



/* Entry: 10a504210; end: 10a50421f;  */

void FUN_10a504210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef6c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a504220; end: 10a50423f;  */

void FUN_10a504220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef6c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a504240; end: 10a50424b;  */

long FUN_10a504240(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x00010930ef54(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10a50424c; end: 10a5042cf;  */

undefined1  [16] FUN_10a50424c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10a22d68c(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0xe0;
    __Znwm(0xe0);
    FUN_10a5042d0(lVar3 + 0x20,param_3);
    FUN_10a22d638(param_1,uStack_38,plVar2,lVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a5042d0; end: 10a504383;  */

undefined8 * FUN_10a5042d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x00010729dd38(param_1 + 3,param_2 + 3);
  FUN_10a504384(param_1 + 8,param_2 + 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xf] = param_2[0xf];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x12] = param_2[0x12];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  uVar2 = param_2[0x14];
  uVar1 = param_2[0x13];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x13] = uVar1;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x13] = 0;
  uVar1 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar1;
  return param_1;
}



/* Entry: 10a504384; end: 10a504577;  */

void FUN_10a504384(long *param_1,long *param_2)

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



/* Entry: 10a504578; end: 10a504597;  */

void FUN_10a504578(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bea0c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a504598; end: 10a504607;  */

void FUN_10a504598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a5045a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a504608; end: 10a50461b;  */

void FUN_10a504608(void)

{
  FUN_10a50461c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50461c; end: 10a50467f;  */

undefined8 * FUN_10a50461c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_DAT_110bea130;
  plVar2 = param_1 + 5;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[4])(param_1[1]);
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 10a504680; end: 10a5046d7;  */

long FUN_10a504680(long param_1)

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



/* Entry: 10a5046d8; end: 10a5046ff;  */

void FUN_10a5046d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001094742c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a504700; end: 10a504767;  */

void FUN_10a504700(long param_1)

{
  long lVar1;
  
  func_0x000107c2826c(param_1 + 0x100);
  FUN_10a0d92c8(param_1 + 0xf0);
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    FUN_10a326af8();
  }
  func_0x00010a042d30(param_1 + 0x78);
  FUN_10a5046d8(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a504768; end: 10a5047e3;  */

void FUN_10a504768(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    FUN_10a5047e4(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 3;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a5047e4; end: 10a50482b;  */

undefined1  [16] FUN_10a5047e4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a504840();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar1;
    return auVar9;
  }
  FUN_10a50482c();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000109ffded8();
  puVar6 = (undefined8 *)(puVar2 + 8);
  puVar8 = (undefined8 *)*puVar6;
  puVar5 = param_2;
  puVar7 = puVar6;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      puVar4 = puVar8 + 4;
      puVar5 = param_2;
      FUN_10a003e3c(puVar4,param_2);
      if (-1 < (char)puVar4) {
        puVar7 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + ((ulong)puVar4 >> 4 & 8));
    } while (puVar8 != (undefined8 *)0x0);
    if (puVar7 != puVar6) {
      puVar5 = puVar7 + 4;
      FUN_10a003e3c(param_2,puVar5);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a5048ec;
    }
  }
  puVar7 = puVar6;
LAB_10a5048ec:
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = puVar7;
  return auVar11;
}



/* Entry: 10a50482c; end: 10a50483f;  */

undefined1  [16] FUN_10a50482c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000109ffded8();
  puVar5 = (undefined8 *)(puVar1 + 8);
  puVar7 = (undefined8 *)*puVar5;
  puVar4 = param_2;
  puVar6 = puVar5;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      puVar3 = puVar7 + 4;
      puVar4 = param_2;
      FUN_10a003e3c(puVar3,param_2);
      if (-1 < (char)puVar3) {
        puVar6 = puVar7;
      }
      puVar7 = *(undefined8 **)((long)puVar7 + ((ulong)puVar3 >> 4 & 8));
    } while (puVar7 != (undefined8 *)0x0);
    if (puVar6 != puVar5) {
      puVar4 = puVar6 + 4;
      FUN_10a003e3c(param_2,puVar4);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a5048ec;
    }
  }
  puVar6 = puVar5;
LAB_10a5048ec:
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = puVar6;
  return auVar9;
}



/* Entry: 10a504840; end: 10a504883;  */

undefined1  [16] FUN_10a504840(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_2 * 0x18;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar4 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar4;
  plVar3 = param_2;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      plVar2 = plVar6 + 4;
      plVar3 = param_2;
      FUN_10a003e3c(plVar2,param_2);
      if (-1 < (char)plVar2) {
        plVar5 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + ((ulong)plVar2 >> 4 & 8));
    } while (plVar6 != (long *)0x0);
    if (plVar5 != plVar4) {
      plVar3 = plVar5 + 4;
      FUN_10a003e3c(param_2,plVar3);
      if (((uint)param_2 >> 7 & 1) == 0) goto LAB_10a5048ec;
    }
  }
  plVar5 = plVar4;
LAB_10a5048ec:
  auVar8._8_8_ = plVar3;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 10a504884; end: 10a5048ff;  */

long * FUN_10a504884(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a504900; end: 10a5049e3;  */

long FUN_10a504900(long *param_1,undefined8 param_2)

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



/* Entry: 10a5049e4; end: 10a504a3b;  */

void FUN_10a5049e4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  FUN_10a504a3c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a504a3c; end: 10a504a9b;  */

undefined8 * FUN_10a504a3c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bb3748;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_10a4f0e48(param_1 + 3,puVar2,uVar1);
  return param_1;
}



/* Entry: 10a504a9c; end: 10a504af3;  */

long FUN_10a504a9c(long param_1)

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



/* Entry: 10a504af4; end: 10a504b03;  */

void FUN_10a504af4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea168;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a504b04; end: 10a504b23;  */

void FUN_10a504b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea168;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a504b24; end: 10a504b33;  */

void FUN_10a504b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a504b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a504b34; end: 10a5052e3;  */

void FUN_10a504b34(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *aplStack_f0 [2];
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined8 auStack_88 [3];
  undefined4 uStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = *(long **)(param_2 + 0x10);
  lVar17 = *plVar14;
  plVar6 = (long *)0x20;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bea1d8;
  puVar7 = (undefined8 *)0xa0;
  __Znwm();
  plVar13 = plVar6 + 3;
  *plVar13 = (long)puVar7;
  puVar7[2] = 0;
  puVar7[3] = 0x32aaaba7;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x3cb0b1bb;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  *(undefined8 *)((long)puVar7 + 0x7c) = 0;
  *puVar7 = &PTR_FUN_110bea228;
  puVar7[1] = 0;
  if (*(long *)(lVar17 + 0x38) == 0) {
LAB_10a505058:
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      FUN_10a0843f8(3);
      goto LAB_10a5050f0;
    }
    plVar9 = plVar13;
    FUN_10a085024(plVar13);
    *param_1 = plVar13;
    if (plVar6 != (long *)0x0) {
      plVar13 = plVar6 + 1;
      do {
        lVar17 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        plVar9 = plVar6;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar16 = lVar17 + 0x10;
    func_0x00010a505604();
    if ((int)lVar16 == 0) goto LAB_10a505058;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(lVar17 + 0x10) = lVar16;
    uVar10 = (*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18) >> 3) * -0x5555555555555555;
    if (uVar10 < (ulong)(long)*(int *)(lVar17 + 0x30) || uVar10 - (long)*(int *)(lVar17 + 0x30) == 0
       ) goto LAB_10a5050f0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar15 = *(undefined8 **)(lVar17 + 0x38);
    puVar7 = (undefined8 *)0x38;
    plStack_100 = plVar13;
    plStack_f8 = plVar6;
    __Znwm();
    lStack_120 = -0x7fffffffffffffc8;
    uStack_128 = 0x30;
    puVar7[1] = 0x4c41525554414e5f;
    *puVar7 = 0x45524f43534e454c;
    puVar7[3] = 0x454d41524659454b;
    puVar7[2] = 0x5f45525554414546;
    puVar7[5] = 0x4c45444f4d5f4e4f;
    puVar7[4] = 0x495443454c45535f;
    *(undefined1 *)(puVar7 + 6) = 0;
    puStack_130 = puVar7;
    FUN_10a4d898c(aplStack_f0,*puVar15,&puStack_130);
    lStack_e0 = plVar14[2];
    lStack_c8 = plVar14[5];
    lStack_d0 = plVar14[4];
    lStack_b8 = plVar14[7];
    lStack_c0 = plVar14[6];
    lStack_a8 = plVar14[9];
    lStack_b0 = plVar14[8];
    lStack_98 = plVar14[0xb];
    lStack_a0 = plVar14[10];
    uStack_90 = (undefined4)plVar14[0xc];
    func_0x00010937da58(auStack_88,plVar14 + 0xd);
    uStack_70 = (undefined4)plVar14[0x10];
    puVar15 = (undefined8 *)0x108;
    __Znwm();
    *puVar15 = FUN_10a534d04;
    puVar15[1] = FUN_10a534fe0;
    func_0x0001092ba17c(puVar15 + 2);
    plVar14 = (long *)puVar15[7];
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar15[0xd] = plStack_f8;
    puVar15[0xc] = plStack_100;
    if (plStack_f8 != (long *)0x0) {
      plVar9 = plStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar15[0xe] = aplStack_f0[0];
    aplStack_f0[0] = (long *)0x0;
    puVar15[0x10] = lStack_e0;
    puVar15[0x13] = lStack_c8;
    puVar15[0x12] = lStack_d0;
    puVar15[0x15] = lStack_b8;
    puVar15[0x14] = lStack_c0;
    puVar15[0x17] = lStack_a8;
    puVar15[0x16] = lStack_b0;
    puVar15[0x19] = lStack_98;
    puVar15[0x18] = lStack_a0;
    *(undefined4 *)(puVar15 + 0x1a) = uStack_90;
    func_0x00010937da58(puVar15 + 0x1b,auStack_88);
    *(undefined4 *)(puVar15 + 0x1e) = uStack_70;
    puVar15[9] = &PTR_PTR_1132fed50;
    *(undefined1 *)(puVar15 + 10) = 0;
    *(undefined1 *)(puVar15 + 0x20) = 0;
    puVar8 = puVar15 + 9;
    func_0x0001092ba064(puVar8,puVar15);
    if (((ulong)puVar8 & 1) != 0) {
joined_r0x00010a504fb0:
      if (plVar14 != (long *)0x0) {
        puVar1 = (ulong *)(plVar14 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      _free(auStack_88[0]);
      if (aplStack_f0[0] != (long *)0x0) {
        puVar1 = (ulong *)(aplStack_f0[0] + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*aplStack_f0[0] + 8))();
          }
        }
      }
      plVar14 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar9 = plStack_f8 + 1;
        do {
          lVar16 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(puVar7);
      }
      FUN_10a505688(lVar17 + 0x10);
      goto LAB_10a505058;
    }
    FUN_10a4f049c(puVar15 + 0xb,puVar15 + 0xc);
    puVar15[9] = puVar15[0xb];
    plVar9 = (long *)(puVar15[0xb] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar15[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar15 + 0x20) = 1;
      lVar16 = puVar15[9];
      plVar9 = (long *)(lVar16 + 0x10);
      uVar11 = puVar15[3];
      do {
        lVar12 = *plVar9;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_118 = 0;
            puStack_110 = puVar15;
            uStack_108 = uVar11;
            func_0x000109d1b588(lVar16 + 0x18,&uStack_118);
            *(undefined8 *)(lVar16 + 0x10) = 0;
            goto joined_r0x00010a504fb0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar9 = (long *)puVar15[9];
    if (((uint)*(undefined8 *)(puVar15[9] + 0x10) >> 5 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar15[0xb];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar15 + 2);
      _free(puVar15[0x1b]);
      plVar9 = (long *)puVar15[0xe];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar15[0xd];
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
        do {
          lVar16 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x000109d1a1d0(puVar15 + 2);
      __ZdlPv(puVar15);
      goto joined_r0x00010a504fb0;
    }
  }
  func_0x0001092af97c(plVar9 + 0x12);
LAB_10a5050f0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5050f4);
  (*pcVar5)();
}



/* Entry: 10a5052e4; end: 10a50531b;  */

void FUN_10a5052e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    _free(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a50531c; end: 10a505333;  */

void FUN_10a50531c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a505334; end: 10a5053d7;  */

void FUN_10a505334(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110bea1a8;
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  *puVar1 = *puVar2;
  puVar1[2] = puVar2[2];
  uVar3 = puVar2[4];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar3;
  uVar3 = puVar2[6];
  puVar1[7] = puVar2[7];
  puVar1[6] = uVar3;
  uVar3 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar3;
  uVar3 = puVar2[10];
  puVar1[0xb] = puVar2[0xb];
  puVar1[10] = uVar3;
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  func_0x00010937da58(puVar1 + 0xd,puVar2 + 0xd);
  *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(puVar2 + 0x10);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a5053d8; end: 10a5053e7;  */

void FUN_10a5053d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea1d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5053e8; end: 10a505407;  */

void FUN_10a5053e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea1d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a505408; end: 10a5054d3;  */

void FUN_10a505408(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_58 [4];
  undefined1 auStack_38 [8];
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      auStack_58[0] = 0;
      lVar6 = plVar5[2];
      puVar4 = auStack_58;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = *(long **)(param_1 + 0x18);
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_58,4,puVar4);
        FUN_10a084fb0(auStack_38,auStack_58);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_38);
        __ZNSt13exception_ptrD1Ev(auStack_38);
        __ZNSt3__112future_errorD1Ev(auStack_58);
        plVar5 = *(long **)(param_1 + 0x18);
      }
    }
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}



/* Entry: 10a5054d4; end: 10a5054d7;  */

void FUN_10a5054d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5054d8; end: 10a505687;  */

void FUN_10a5054d8(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10a505688; end: 10a5056f7;  */

void FUN_10a505688(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != *(long *)(param_1 + 0x10)) {
    iVar4 = *(int *)(param_1 + 0x20);
    uVar6 = (ulong)iVar4;
    uVar7 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * -0x5555555555555555;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5056f8);
      (*pcVar5)();
    }
    iVar3 = *(int *)(param_1 + 0x24);
    iVar1 = iVar3 + 1;
    *(int *)(param_1 + 0x24) = iVar1;
    if (*(int *)(lVar2 + (long)iVar4 * 0x18) <= iVar1) {
      if (uVar7 - 1 == uVar6) {
        *(int *)(param_1 + 0x24) = iVar3;
        return;
      }
      *(int *)(param_1 + 0x20) = iVar4 + 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}



/* Entry: 10a5056f8; end: 10a50571f;  */

void FUN_10a5056f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10a4cbbb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a505720; end: 10a505793;  */

long * FUN_10a505720(long *param_1)

{
  long lVar1;
  
  func_0x00010a505758(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a505794; end: 10a5059d7;  */

undefined1  [16] FUN_10a505794(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (long)*param_2 + 0x9e3779b9;
  uVar10 = (long)param_2[1] + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - 1;
    if ((uVar9 & uVar5) == 0) {
      unaff_x24 = uVar10 & uVar5;
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
          if ((int)plVar8[2] == *param_2 && *(int *)((long)plVar8 + 0x14) == param_2[1]) {
            uVar2 = 0;
            goto LAB_10a50599c;
          }
        }
        else {
          if ((uVar9 & uVar5) == 0) {
            uVar7 = uVar7 & uVar5;
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
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = *(long *)*param_4;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar9) {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10a5059d8(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  lVar4 = *param_1;
  plVar3 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar8 = *plVar3;
    *plVar3 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar3;
    if (*plVar8 == 0) goto LAB_10a50598c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
    }
    plVar3 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
  *plVar3 = (long)plVar8;
LAB_10a50598c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a50599c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a5059d8; end: 10a505aa7;  */

void FUN_10a5059d8(ulong *param_1,ulong param_2)

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
LAB_10a505a20:
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
            func_0x00010a1bb0e8(uVar7 + 0x18);
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
    if (param_2 < uVar7) goto LAB_10a505a20;
  }
  return;
}



/* Entry: 10a505aa8; end: 10a505c7f;  */

void FUN_10a505aa8(ulong *param_1,ulong param_2)

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
          func_0x00010a1bb0e8(uVar1 + 0x18);
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



/* Entry: 10a505c80; end: 10a505f17;  */

long * FUN_10a505c80(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  long lVar8;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar2 = (long *)*param_3;
  plVar1 = (long *)0x40;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*plVar2,plVar2[1]);
  }
  else {
    lVar8 = plVar2[1];
    lVar3 = *plVar2;
    plVar1[4] = plVar2[2];
    plVar1[3] = lVar8;
    plVar1[2] = lVar3;
  }
  plVar1[6] = 0;
  plVar1[7] = 0;
  plVar1[5] = (long)&PTR_FUN_110bef570;
  *(undefined4 *)((long)plVar1 + 0x34) = 0;
  *(undefined4 *)((long)plVar1 + 0x37) = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a500ca0(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 10a505f18; end: 10a505f73;  */

long * FUN_10a505f18(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a505f74(plVar1 + 2);
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



/* Entry: 10a505f74; end: 10a5060b7;  */

void FUN_10a505f74(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x70;
  FUN_109ffe3e8(&lStack_28);
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
  return;
}



/* Entry: 10a5060b8; end: 10a5060c7;  */

void FUN_10a5060b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea270;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a5060c8; end: 10a5060e7;  */

void FUN_10a5060c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea270;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5060e8; end: 10a50610b;  */

void FUN_10a5060e8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a506100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10a50610c; end: 10a5061bf;  */

void FUN_10a50610c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x330;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bea070;
  _bzero(puVar1 + 4,0x280);
  FUN_10a5061c0(puVar1 + 3);
  puVar1[3] = &PTR_DAT_110be86a0;
  puVar1[5] = &PTR_DAT_110be8700;
  *(undefined4 *)(puVar1 + 0x49) = 0;
  *(undefined1 *)((long)puVar1 + 0x24c) = 0;
  *(undefined1 *)(puVar1 + 0x4a) = 0;
  *(undefined1 *)(puVar1 + 0x4c) = 0;
  puVar1[0x4d] = 0;
  *(undefined4 *)(puVar1 + 0x4e) = 0;
  puVar1[0x50] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  *(undefined4 *)(puVar1 + 0x53) = 0x3f800000;
  puVar1[0x55] = 0;
  puVar1[0x54] = 0;
  puVar1[0x57] = 0;
  puVar1[0x56] = 0;
  puVar1[0x59] = 0;
  puVar1[0x58] = 0;
  puVar1[0x5b] = 0;
  puVar1[0x5a] = 0;
  puVar1[0x5d] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x61] = 0;
  puVar1[0x60] = 0;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  puVar1[0x65] = 0;
  puVar1[100] = 0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a5061c0; end: 10a5062c3;  */

void FUN_10a5061c0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bef460;
  param_1[2] = &PTR_DAT_110bef4c0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[8] = 0x3f8000003f800000;
  param_1[7] = 0x3f0000003f000000;
  param_1[10] = 0x3f80000000000000;
  param_1[9] = 0;
  param_1[0xc] = 0x3f000000;
  param_1[0xb] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &PTR_FUN_110bef4e0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x12] = &PTR_FUN_110c6a8d8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = &PTR_FUN_110bef528;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1d] = &PTR_FUN_110c6a8d8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  return;
}



/* Entry: 10a5062c4; end: 10a5062d7;  */

void FUN_10a5062c4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5062d8; end: 10a5062ef;  */

void FUN_10a5062d8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a5062e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a5062f0; end: 10a506327;  */

undefined8 FUN_10a5062f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bacb08);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a506328; end: 10a50632b;  */

void FUN_10a506328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a50632c; end: 10a506373;  */

long FUN_10a50632c(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x10;
  FUN_10a34e6f0(&lStack_28);
  return param_1;
}



/* Entry: 10a506374; end: 10a506473;  */

long FUN_10a506374(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_41;
  
  puVar2 = &uStack_41;
  func_0x000107c2b05c();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    puVar2 = puVar2 + 0x9e3779b9;
    uVar6 = (long)*(int *)(param_2 + 0x18) + (long)puVar2 * 0x40 + ((ulong)puVar2 >> 2) + 0x9e3779b9
            ^ (ulong)puVar2;
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar6) {
          uVar4 = (ulong)(plVar3 + 2);
          FUN_10a506474(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar4 = uVar4 & uVar7;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar8) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a506474; end: 10a5064ff;  */

bool FUN_10a506474(long *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  long *plVar8;
  
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar3 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar3 = (ulong)bVar6;
  }
  if (uVar2 == uVar3) {
    plVar8 = (long *)*param_1;
    if (-1 < (char)bVar5) {
      plVar8 = param_1;
    }
    plVar4 = (long *)*param_2;
    if (-1 < (char)bVar6) {
      plVar4 = param_2;
    }
    _memcmp(plVar8,plVar4);
    bVar7 = (int)plVar8 == 0;
  }
  else {
    bVar7 = false;
  }
  bVar1 = false;
  if ((int)param_1[3] == (int)param_2[3]) {
    bVar1 = bVar7;
  }
  return bVar1;
}



/* Entry: 10a506500; end: 10a50679b;  */

void FUN_10a506500(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  plVar5 = param_1;
  FUN_10a22f7e8();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          uVar4 = (ulong)(plVar1 + 2);
          FUN_10a22f8c4(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x60;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  plVar1[2] = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000107c3192c(plVar1 + 3,param_3[1],param_3[2]);
  }
  else {
    lVar3 = param_3[1];
    plVar1[4] = param_3[2];
    plVar1[3] = lVar3;
    plVar1[5] = param_3[3];
  }
  lVar3 = param_3[4];
  lVar9 = param_3[7];
  lVar8 = param_3[6];
  plVar1[7] = param_3[5];
  plVar1[6] = lVar3;
  plVar1[9] = lVar9;
  plVar1[8] = lVar8;
  plVar1[10] = param_3[8];
  *(undefined4 *)(plVar1 + 0xb) = *param_4;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a4f2258(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a50679c; end: 10a506baf;  */

long * FUN_10a50679c(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  ulong uVar15;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pplVar3 = &plStack_68;
  func_0x000107c2b05c();
  uVar13 = (long)pplVar3 + 0x9e3779b9;
  uVar13 = (long)*(int *)(param_2 + 0x18) + uVar13 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - 1;
    if ((uVar14 & uVar15) == 0) {
      unaff_x25 = uVar13 & uVar15;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar7 * uVar14;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar13) {
          uVar7 = (ulong)(plVar6 + 2);
          FUN_10a506474(uVar7,param_2);
          if ((uVar7 & 1) != 0) {
            return plVar6;
          }
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar7 = uVar7 & uVar15;
          }
          else if (uVar14 <= uVar7) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar7 / uVar14;
            }
            uVar7 = uVar7 - uVar8 * uVar14;
          }
          if (uVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)0x48;
  __Znwm();
  uStack_58 = 1;
  *plVar6 = 0;
  plVar6[1] = uVar13;
  lVar4 = *param_3;
  plVar6[3] = param_3[1];
  plVar6[2] = lVar4;
  plVar6[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(int *)(plVar6 + 5) = (int)param_3[3];
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[6] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar15 = 1;
    if (2 < uVar14) {
      uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar15 = uVar15 | uVar14 << 1;
    uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar15 <= uVar14) {
      uVar15 = uVar14;
    }
    plStack_68 = plVar6;
    plStack_60 = param_1;
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar15) {
LAB_10a50694c:
      if (uVar15 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a506b9c);
        (*pcVar2)();
      }
      lVar4 = uVar15 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar15;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar15 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar7 = plVar9[1];
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (uVar15 <= uVar7) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar7 / uVar15;
          }
          uVar7 = uVar7 - uVar12 * uVar15;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar15 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar15 <= uVar12) {
            uVar1 = 0;
            if (uVar15 != 0) {
              uVar1 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar1 * uVar15;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar7) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar12 * 8) == 0) {
              *(long **)(lVar4 + uVar12 * 8) = plVar9;
              uVar7 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar4 + uVar12 * 8);
              **(long **)(lVar4 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar15 < uVar14) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar15 <= uVar7) {
        uVar15 = uVar7;
      }
      if (uVar15 < uVar14) {
        if (uVar15 != 0) goto LAB_10a50694c;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar15 * uVar14;
      }
    }
  }
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar6 = *plVar9;
    *plVar9 = (long)plVar6;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar9;
    if (*plVar6 == 0) goto LAB_10a506b2c;
    uVar13 = *(ulong *)(*plVar6 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar15 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar6 = *plVar9;
  }
  *plVar9 = (long)plVar6;
LAB_10a506b2c:
  param_1[3] = param_1[3] + 1;
  return plVar6;
}



/* Entry: 10a506bb0; end: 10a506c3b;  */

void FUN_10a506bb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a506bf8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a506c3c; end: 10a506c4b;  */

void FUN_10a506c3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a506c4c; end: 10a506c6b;  */

void FUN_10a506c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea310;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


